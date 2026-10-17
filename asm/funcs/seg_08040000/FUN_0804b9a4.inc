@ FUN_0804b9a4  entry 0x0804b9a4  size 90
.thumb
.org 0x4b9a4
FUN_0804b9a4:
	push {r4, r5, r6, lr}	@ 0004b9a4 70b5
.org 0x4b9a6
	adds r4, r0, #0	@ 0004b9a6 041c
.org 0x4b9a8
	lsls r2, r2, #24	@ 0004b9a8 1206
.org 0x4b9aa
	lsrs r6, r2, #24	@ 0004b9aa 160e
.org 0x4b9ac
	lsls r3, r3, #24	@ 0004b9ac 1b06
.org 0x4b9ae
	lsrs r5, r3, #24	@ 0004b9ae 1d0e
.org 0x4b9b0
	ldr r0, [pc, #76]	@ 0004b9b0 1348
.org 0x4b9b2
	ldr r0, [r0, #0]	@ 0004b9b2 0068
.org 0x4b9b4
	bl 0x5500	@ 0004b9b4 b9f7a4fd
.org 0x4b9b8
	adds r2, r0, #0	@ 0004b9b8 021c
.org 0x4b9ba
	cmp r2, #0	@ 0004b9ba 002a
.org 0x4b9bc
	beq.n 0x4b9f8	@ 0004b9bc 1cd0
.org 0x4b9be
	ldr r0, [pc, #68]	@ 0004b9be 1148
.org 0x4b9c0
	movs r1, #42	@ 0004b9c0 2a21
.org 0x4b9c2
	strb r1, [r2, #9]	@ 0004b9c2 5172
.org 0x4b9c4
	adds r0, #168	@ 0004b9c4 a830
.org 0x4b9c6
	ldr r0, [r0, #0]	@ 0004b9c6 0068
.org 0x4b9c8
	ldr r0, [r0, #0]	@ 0004b9c8 0068
.org 0x4b9ca
	str r0, [r2, #20]	@ 0004b9ca 5061
.org 0x4b9cc
	ldrb r1, [r2, #11]	@ 0004b9cc d17a
.org 0x4b9ce
	movs r0, #191	@ 0004b9ce bf20
.org 0x4b9d0
	ands r0, r1	@ 0004b9d0 0840
.org 0x4b9d2
	strb r0, [r2, #11]	@ 0004b9d2 d072
.org 0x4b9d4
	adds r1, r2, #0	@ 0004b9d4 111c
.org 0x4b9d6
	adds r1, #37	@ 0004b9d6 2531
.org 0x4b9d8
	movs r0, #16	@ 0004b9d8 1020
.org 0x4b9da
	strb r0, [r1, #0]	@ 0004b9da 0870
.org 0x4b9dc
	ldr r0, [pc, #40]	@ 0004b9dc 0a48
.org 0x4b9de
	ldrh r0, [r0, #0]	@ 0004b9de 0088
.org 0x4b9e0
	strh r0, [r2, #32]	@ 0004b9e0 1084
.org 0x4b9e2
	ldr r0, [pc, #40]	@ 0004b9e2 0a48
.org 0x4b9e4
	ldrb r0, [r0, #0]	@ 0004b9e4 0078
.org 0x4b9e6
	subs r1, #3	@ 0004b9e6 0339
.org 0x4b9e8
	strb r0, [r1, #0]	@ 0004b9e8 0870
.org 0x4b9ea
	str r4, [r2, #40]	@ 0004b9ea 9462
.org 0x4b9ec
	ldr r0, [r4, #84]	@ 0004b9ec 606d
.org 0x4b9ee
	ldr r1, [r4, #88]	@ 0004b9ee a16d
.org 0x4b9f0
	str r0, [r2, #84]	@ 0004b9f0 5065
.org 0x4b9f2
	str r1, [r2, #88]	@ 0004b9f2 9165
.org 0x4b9f4
	strb r6, [r2, #16]	@ 0004b9f4 1674
.org 0x4b9f6
	strb r5, [r2, #17]	@ 0004b9f6 5574
.org 0x4b9f8
	pop {r4, r5, r6}	@ 0004b9f8 70bc
.org 0x4b9fa
	pop {r0}	@ 0004b9fa 01bc
.org 0x4b9fc
	bx r0	@ 0004b9fc 0047
