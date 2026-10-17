@ FUN_08085bfc  entry 0x08085bfc  size 228
.thumb
.org 0x85bfc
FUN_08085bfc:
	push {r4, r5, lr}	@ 00085bfc 30b5
.org 0x85bfe
	sub sp, #8	@ 00085bfe 82b0
.org 0x85c00
	adds r5, r0, #0	@ 00085c00 051c
.org 0x85c02
	ldrb r0, [r5, #14]	@ 00085c02 a87b
.org 0x85c04
	cmp r0, #0	@ 00085c04 0028
.org 0x85c06
	beq.n 0x85c0e	@ 00085c06 02d0
.org 0x85c08
	cmp r0, #1	@ 00085c08 0128
.org 0x85c0a
	beq.n 0x85c78	@ 00085c0a 35d0
.org 0x85c0c
	b.n 0x85ce6	@ 00085c0c 6be0
.org 0x85c0e
	adds r0, r5, #0	@ 00085c0e 281c
.org 0x85c10
	adds r0, #116	@ 00085c10 7430
.org 0x85c12
	ldr r1, [pc, #44]	@ 00085c12 0b49
.org 0x85c14
	bl 0x5784	@ 00085c14 7ff7b6fd
.org 0x85c18
	ldr r1, [pc, #40]	@ 00085c18 0a49
.org 0x85c1a
	adds r0, r5, #0	@ 00085c1a 281c
.org 0x85c1c
	bl 0x1cf00	@ 00085c1c 97f770f9
.org 0x85c20
	movs r2, #0	@ 00085c20 0022
.org 0x85c22
	ldr r0, [pc, #36]	@ 00085c22 0948
.org 0x85c24
	ldr r0, [r0, #0]	@ 00085c24 0068
.org 0x85c26
	ldr r0, [r0, #84]	@ 00085c26 406d
.org 0x85c28
	ldr r1, [r5, #84]	@ 00085c28 696d
.org 0x85c2a
	subs r0, r0, r1	@ 00085c2a 401a
.org 0x85c2c
	cmp r0, #0	@ 00085c2c 0028
.org 0x85c2e
	ble.n 0x85c32	@ 00085c2e 00dd
.org 0x85c30
	movs r2, #1	@ 00085c30 0122
.org 0x85c32
	cmp r2, #0	@ 00085c32 002a
.org 0x85c34
	beq.n 0x85c4c	@ 00085c34 0ad0
.org 0x85c36
	ldrb r1, [r5, #10]	@ 00085c36 a97a
.org 0x85c38
	movs r0, #16	@ 00085c38 1020
.org 0x85c3a
	orrs r0, r1	@ 00085c3a 0843
.org 0x85c3c
	b.n 0x85c52	@ 00085c3c 09e0
.org 0x85c3e
	.byte 0x00	@ 00085c3e data
.org 0x85c3f
	.byte 0x00	@ 00085c3f data
.org 0x85c40
	.byte 0x10,0xec,0x85,0x08	@ 00085c40 data
.org 0x85c44
	.byte 0x04,0x1b,0x00,0x00	@ 00085c44 data
.org 0x85c48
	.byte 0xf0,0xdb,0x02,0x02	@ 00085c48 data
.org 0x85c4c
	ldrb r1, [r5, #10]	@ 00085c4c a97a
.org 0x85c4e
	movs r0, #239	@ 00085c4e ef20
.org 0x85c50
	ands r0, r1	@ 00085c50 0840
.org 0x85c52
	strb r0, [r5, #10]	@ 00085c52 a872
.org 0x85c54
	adds r1, r2, #0	@ 00085c54 111c
.org 0x85c56
	adds r0, r5, #0	@ 00085c56 281c
.org 0x85c58
	adds r0, #76	@ 00085c58 4c30
.org 0x85c5a
	strb r1, [r0, #0]	@ 00085c5a 0170
.org 0x85c5c
	adds r3, r5, #0	@ 00085c5c 2b1c
.org 0x85c5e
	adds r3, #74	@ 00085c5e 4a33
.org 0x85c60
	lsls r1, r1, #4	@ 00085c60 0901
.org 0x85c62
	ldrb r2, [r3, #0]	@ 00085c62 1a78
.org 0x85c64
	movs r0, #17	@ 00085c64 1120
.org 0x85c66
	negs r0, r0	@ 00085c66 4042
.org 0x85c68
	ands r0, r2	@ 00085c68 1040
.org 0x85c6a
	orrs r0, r1	@ 00085c6a 0843
.org 0x85c6c
	strb r0, [r3, #0]	@ 00085c6c 1870
.org 0x85c6e
	movs r0, #60	@ 00085c6e 3c20
.org 0x85c70
	strb r0, [r5, #18]	@ 00085c70 a874
.org 0x85c72
	ldrb r0, [r5, #14]	@ 00085c72 a87b
.org 0x85c74
	adds r0, #1	@ 00085c74 0130
.org 0x85c76
	strb r0, [r5, #14]	@ 00085c76 a873
.org 0x85c78
	ldrb r0, [r5, #18]	@ 00085c78 a87c
.org 0x85c7a
	subs r0, #1	@ 00085c7a 0138
.org 0x85c7c
	strb r0, [r5, #18]	@ 00085c7c a874
.org 0x85c7e
	lsls r0, r0, #24	@ 00085c7e 0006
.org 0x85c80
	lsrs r0, r0, #24	@ 00085c80 000e
.org 0x85c82
	cmp r0, #30	@ 00085c82 1e28
.org 0x85c84
	bne.n 0x85cba	@ 00085c84 19d1
.org 0x85c86
	ldrb r4, [r5, #10]	@ 00085c86 ac7a
.org 0x85c88
	lsrs r4, r4, #4	@ 00085c88 2409
.org 0x85c8a
	movs r0, #1	@ 00085c8a 0120
.org 0x85c8c
	ands r4, r0	@ 00085c8c 0440
.org 0x85c8e
	ldr r1, [r5, #84]	@ 00085c8e 696d
.org 0x85c90
	ldr r0, [pc, #92]	@ 00085c90 1748
.org 0x85c92
	adds r1, r1, r0	@ 00085c92 0918
.org 0x85c94
	lsls r0, r4, #1	@ 00085c94 6000
.org 0x85c96
	adds r0, r0, r4	@ 00085c96 0019
.org 0x85c98
	lsls r0, r0, #10	@ 00085c98 8002
.org 0x85c9a
	adds r0, r0, r1	@ 00085c9a 4018
.org 0x85c9c
	str r0, [sp, #0]	@ 00085c9c 0090
.org 0x85c9e
	ldr r0, [r5, #88]	@ 00085c9e a86d
.org 0x85ca0
	ldr r1, [pc, #80]	@ 00085ca0 1449
.org 0x85ca2
	adds r0, r0, r1	@ 00085ca2 4018
.org 0x85ca4
	str r0, [sp, #4]	@ 00085ca4 0190
.org 0x85ca6
	movs r0, #44	@ 00085ca6 2c20
.org 0x85ca8
	bl 0x2b10	@ 00085ca8 7cf732ff
.org 0x85cac
	movs r1, #128	@ 00085cac 8021
.org 0x85cae
	lsls r1, r1, #2	@ 00085cae 8900
.org 0x85cb0
	lsls r4, r4, #7	@ 00085cb0 e401
.org 0x85cb2
	mov r0, sp	@ 00085cb2 6846
.org 0x85cb4
	adds r2, r4, #0	@ 00085cb4 221c
.org 0x85cb6
	bl 0xbd43c	@ 00085cb6 37f0c1fb
.org 0x85cba
	ldrb r1, [r5, #18]	@ 00085cba a97c
.org 0x85cbc
	cmp r1, #0	@ 00085cbc 0029
.org 0x85cbe
	bne.n 0x85cc6	@ 00085cbe 02d1
.org 0x85cc0
	movs r0, #2	@ 00085cc0 0220
.org 0x85cc2
	strb r0, [r5, #13]	@ 00085cc2 6873
.org 0x85cc4
	strb r1, [r5, #14]	@ 00085cc4 a973
.org 0x85cc6
	ldr r0, [r5, #84]	@ 00085cc6 686d
.org 0x85cc8
	ldr r1, [r5, #88]	@ 00085cc8 a96d
.org 0x85cca
	movs r2, #128	@ 00085cca 8022
.org 0x85ccc
	lsls r2, r2, #3	@ 00085ccc d200
.org 0x85cce
	adds r1, r1, r2	@ 00085cce 8918
.org 0x85cd0
	bl 0x8aa4	@ 00085cd0 82f7e8fe
.org 0x85cd4
	adds r1, r0, #0	@ 00085cd4 011c
.org 0x85cd6
	movs r2, #128	@ 00085cd6 8022
.org 0x85cd8
	lsls r2, r2, #4	@ 00085cd8 1201
.org 0x85cda
	adds r0, r5, #0	@ 00085cda 281c
.org 0x85cdc
	bl 0x85418	@ 00085cdc fff79cfb
