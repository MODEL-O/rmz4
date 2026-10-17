@ FUN_080deaa8  entry 0x080deaa8  size 196
.thumb
.org 0xdeaa8
FUN_080deaa8:
	push {r4, r5, r6, r7, lr}	@ 000deaa8 f0b5
.org 0xdeaaa
	adds r5, r0, #0	@ 000deaaa 051c
.org 0xdeaac
	ldr r4, [r5, #116]	@ 000deaac 6c6f
.org 0xdeaae
	adds r7, r5, #0	@ 000deaae 2f1c
.org 0xdeab0
	adds r7, #120	@ 000deab0 7837
.org 0xdeab2
	ldrb r6, [r7, #0]	@ 000deab2 3e78
.org 0xdeab4
	bl 0x1cff0	@ 000deab4 3ef79cfa
.org 0xdeab8
	ldrb r0, [r5, #18]	@ 000deab8 a87c
.org 0xdeaba
	cmp r0, #0	@ 000deaba 0028
.org 0xdeabc
	beq.n 0xdeb4a	@ 000deabc 45d0
.org 0xdeabe
	subs r0, #1	@ 000deabe 0138
.org 0xdeac0
	strb r0, [r5, #18]	@ 000deac0 a874
.org 0xdeac2
	lsls r0, r0, #24	@ 000deac2 0006
.org 0xdeac4
	lsrs r0, r0, #24	@ 000deac4 000e
.org 0xdeac6
	cmp r0, #17	@ 000deac6 1128
.org 0xdeac8
	bls.n 0xdeb24	@ 000deac8 2cd9
.org 0xdeaca
	ldrb r0, [r5, #18]	@ 000deaca a87c
.org 0xdeacc
	muls r0, r4	@ 000deacc 6043
.org 0xdeace
	movs r1, #24	@ 000deace 1821
.org 0xdead0
	bl 0x128fb8	@ 000dead0 4af072fa
.org 0xdead4
	adds r4, r0, #0	@ 000dead4 041c
.org 0xdead6
	ldr r0, [r5, #92]	@ 000dead6 e86d
.org 0xdead8
	adds r0, r6, r0	@ 000dead8 3018
.org 0xdeada
	lsls r0, r0, #24	@ 000deada 0006
.org 0xdeadc
	lsrs r2, r0, #24	@ 000deadc 020e
.org 0xdeade
	adds r6, r2, #0	@ 000deade 161c
.org 0xdeae0
	ldr r3, [pc, #60]	@ 000deae0 0f4b
.org 0xdeae2
	adds r0, r2, #0	@ 000deae2 101c
.org 0xdeae4
	adds r0, #64	@ 000deae4 4030
.org 0xdeae6
	lsls r0, r0, #24	@ 000deae6 0006
.org 0xdeae8
	lsrs r0, r0, #23	@ 000deae8 c00d
.org 0xdeaea
	adds r0, r0, r3	@ 000deaea c018
.org 0xdeaec
	movs r1, #0	@ 000deaec 0021
.org 0xdeaee
	ldrsh r0, [r0, r1]	@ 000deaee 405e
.org 0xdeaf0
	adds r1, r4, #0	@ 000deaf0 211c
.org 0xdeaf2
	muls r1, r0	@ 000deaf2 4143
.org 0xdeaf4
	cmp r1, #0	@ 000deaf4 0029
.org 0xdeaf6
	bge.n 0xdeafa	@ 000deaf6 00da
.org 0xdeaf8
	adds r1, #255	@ 000deaf8 ff31
.org 0xdeafa
	asrs r1, r1, #8	@ 000deafa 0912
.org 0xdeafc
	ldr r0, [r5, #84]	@ 000deafc 686d
.org 0xdeafe
	adds r0, r0, r1	@ 000deafe 4018
.org 0xdeb00
	str r0, [r5, #84]	@ 000deb00 6865
.org 0xdeb02
	lsls r0, r2, #1	@ 000deb02 5000
.org 0xdeb04
	adds r0, r0, r3	@ 000deb04 c018
.org 0xdeb06
	movs r1, #0	@ 000deb06 0021
.org 0xdeb08
	ldrsh r0, [r0, r1]	@ 000deb08 405e
.org 0xdeb0a
	muls r0, r4	@ 000deb0a 6043
.org 0xdeb0c
	cmp r0, #0	@ 000deb0c 0028
.org 0xdeb0e
	bge.n 0xdeb12	@ 000deb0e 00da
.org 0xdeb10
	adds r0, #255	@ 000deb10 ff30
.org 0xdeb12
	asrs r1, r0, #8	@ 000deb12 0112
.org 0xdeb14
	ldr r0, [r5, #88]	@ 000deb14 a86d
.org 0xdeb16
	adds r0, r0, r1	@ 000deb16 4018
.org 0xdeb18
	str r0, [r5, #88]	@ 000deb18 a865
.org 0xdeb1a
	strb r6, [r7, #0]	@ 000deb1a 3e70
.org 0xdeb1c
	b.n 0xdeb4a	@ 000deb1c 15e0
.org 0xdeb1e
	.byte 0x00	@ 000deb1e data
.org 0xdeb1f
	.byte 0x00	@ 000deb1f data
.org 0xdeb20
	.byte 0x0c,0x93,0x12,0x08	@ 000deb20 data
.org 0xdeb24
	ldr r2, [r5, #84]	@ 000deb24 6a6d
.org 0xdeb26
	ldr r4, [pc, #76]	@ 000deb26 134c
.org 0xdeb28
	adds r2, r2, r4	@ 000deb28 1219
.org 0xdeb2a
	ldr r3, [pc, #76]	@ 000deb2a 134b
.org 0xdeb2c
	ldr r1, [r3, #0]	@ 000deb2c 1968
.org 0xdeb2e
	ldr r0, [pc, #76]	@ 000deb2e 1348
.org 0xdeb30
	muls r0, r1	@ 000deb30 4843
.org 0xdeb32
	ldr r1, [pc, #76]	@ 000deb32 1349
.org 0xdeb34
	adds r0, r0, r1	@ 000deb34 4018
.org 0xdeb36
	lsls r0, r0, #1	@ 000deb36 4000
.org 0xdeb38
	lsrs r1, r0, #1	@ 000deb38 4108
.org 0xdeb3a
	str r1, [r3, #0]	@ 000deb3a 1960
.org 0xdeb3c
	lsls r0, r0, #6	@ 000deb3c 8001
.org 0xdeb3e
	lsrs r0, r0, #23	@ 000deb3e c00d
.org 0xdeb40
	adds r2, r2, r0	@ 000deb40 1218
.org 0xdeb42
	str r2, [r5, #84]	@ 000deb42 6a65
.org 0xdeb44
	ldr r0, [r5, #88]	@ 000deb44 a86d
.org 0xdeb46
	adds r0, r0, r4	@ 000deb46 0019
.org 0xdeb48
	str r0, [r5, #88]	@ 000deb48 a865
.org 0xdeb4a
	adds r0, r5, #0	@ 000deb4a 281c
.org 0xdeb4c
	adds r0, #115	@ 000deb4c 7330
.org 0xdeb4e
	ldrb r0, [r0, #0]	@ 000deb4e 0078
.org 0xdeb50
	cmp r0, #3	@ 000deb50 0328
.org 0xdeb52
	bne.n 0xdeb6c	@ 000deb52 0bd1
.org 0xdeb54
	ldr r1, [pc, #44]	@ 000deb54 0b49
.org 0xdeb56
	ldrb r0, [r5, #9]	@ 000deb56 687a
.org 0xdeb58
	lsls r0, r0, #2	@ 000deb58 8000
.org 0xdeb5a
	adds r0, r0, r1	@ 000deb5a 4018
.org 0xdeb5c
	movs r1, #2	@ 000deb5c 0221
.org 0xdeb5e
	str r1, [r5, #12]	@ 000deb5e e960
.org 0xdeb60
	ldr r0, [r0, #0]	@ 000deb60 0068
.org 0xdeb62
	ldr r0, [r0, #8]	@ 000deb62 8068
.org 0xdeb64
	str r0, [r5, #20]	@ 000deb64 6861
.org 0xdeb66
	adds r0, r5, #0	@ 000deb66 281c
.org 0xdeb68
	bl 0xdeb88	@ 000deb68 00f00ef8
