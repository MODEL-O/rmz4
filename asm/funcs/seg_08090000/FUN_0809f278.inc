@ FUN_0809f278  entry 0x0809f278  size 160
.thumb
.org 0x9f278
FUN_0809f278:
	push {r4, lr}	@ 0009f278 10b5
.org 0x9f27a
	sub sp, #8	@ 0009f27a 82b0
.org 0x9f27c
	adds r4, r0, #0	@ 0009f27c 041c
.org 0x9f27e
	ldrb r0, [r4, #14]	@ 0009f27e a07b
.org 0x9f280
	cmp r0, #0	@ 0009f280 0028
.org 0x9f282
	bne.n 0x9f296	@ 0009f282 08d1
.org 0x9f284
	ldr r1, [pc, #76]	@ 0009f284 1349
.org 0x9f286
	adds r0, r4, #0	@ 0009f286 201c
.org 0x9f288
	bl 0x1cf00	@ 0009f288 7df73afe
.org 0x9f28c
	movs r0, #20	@ 0009f28c 1420
.org 0x9f28e
	strb r0, [r4, #18]	@ 0009f28e a074
.org 0x9f290
	ldrb r0, [r4, #14]	@ 0009f290 a07b
.org 0x9f292
	adds r0, #1	@ 0009f292 0130
.org 0x9f294
	strb r0, [r4, #14]	@ 0009f294 a073
.org 0x9f296
	adds r0, r4, #0	@ 0009f296 201c
.org 0x9f298
	adds r0, #115	@ 0009f298 7330
.org 0x9f29a
	ldrb r0, [r0, #0]	@ 0009f29a 0078
.org 0x9f29c
	cmp r0, #3	@ 0009f29c 0328
.org 0x9f29e
	beq.n 0x9f2ae	@ 0009f29e 06d0
.org 0x9f2a0
	ldrb r0, [r4, #18]	@ 0009f2a0 a07c
.org 0x9f2a2
	subs r0, #1	@ 0009f2a2 0138
.org 0x9f2a4
	strb r0, [r4, #18]	@ 0009f2a4 a074
.org 0x9f2a6
	lsls r0, r0, #24	@ 0009f2a6 0006
.org 0x9f2a8
	lsrs r0, r0, #24	@ 0009f2a8 000e
.org 0x9f2aa
	cmp r0, #255	@ 0009f2aa ff28
.org 0x9f2ac
	bne.n 0x9f31e	@ 0009f2ac 37d1
.org 0x9f2ae
	ldrb r0, [r4, #14]	@ 0009f2ae a07b
.org 0x9f2b0
	cmp r0, #1	@ 0009f2b0 0128
.org 0x9f2b2
	bne.n 0x9f310	@ 0009f2b2 2dd1
.org 0x9f2b4
	ldr r1, [pc, #32]	@ 0009f2b4 0849
.org 0x9f2b6
	adds r0, r4, #0	@ 0009f2b6 201c
.org 0x9f2b8
	bl 0x1cf00	@ 0009f2b8 7df722fe
.org 0x9f2bc
	movs r0, #255	@ 0009f2bc ff20
.org 0x9f2be
	strb r0, [r4, #18]	@ 0009f2be a074
.org 0x9f2c0
	ldrb r0, [r4, #14]	@ 0009f2c0 a07b
.org 0x9f2c2
	adds r0, #1	@ 0009f2c2 0130
.org 0x9f2c4
	strb r0, [r4, #14]	@ 0009f2c4 a073
.org 0x9f2c6
	ldrb r0, [r4, #16]	@ 0009f2c6 207c
.org 0x9f2c8
	cmp r0, #0	@ 0009f2c8 0028
.org 0x9f2ca
	beq.n 0x9f2dc	@ 0009f2ca 07d0
.org 0x9f2cc
	ldr r0, [r4, #84]	@ 0009f2cc 606d
.org 0x9f2ce
	movs r1, #128	@ 0009f2ce 8021
.org 0x9f2d0
	lsls r1, r1, #6	@ 0009f2d0 8901
.org 0x9f2d2
	b.n 0x9f2e0	@ 0009f2d2 05e0
.org 0x9f2d4
	.byte 0x02,0x75,0x00,0x00	@ 0009f2d4 data
.org 0x9f2d8
	.byte 0x03,0x75,0x00,0x00	@ 0009f2d8 data
.org 0x9f2dc
	ldr r0, [r4, #84]	@ 0009f2dc 606d
.org 0x9f2de
	ldr r1, [pc, #44]	@ 0009f2de 0b49
.org 0x9f2e0
	adds r0, r0, r1	@ 0009f2e0 4018
.org 0x9f2e2
	str r0, [sp, #0]	@ 0009f2e2 0090
.org 0x9f2e4
	ldr r0, [r4, #88]	@ 0009f2e4 a06d
.org 0x9f2e6
	movs r1, #128	@ 0009f2e6 8021
.org 0x9f2e8
	lsls r1, r1, #3	@ 0009f2e8 c900
.org 0x9f2ea
	adds r0, r0, r1	@ 0009f2ea 4018
.org 0x9f2ec
	str r0, [sp, #4]	@ 0009f2ec 0190
.org 0x9f2ee
	ldrb r3, [r4, #10]	@ 0009f2ee a37a
.org 0x9f2f0
	lsrs r3, r3, #4	@ 0009f2f0 1b09
.org 0x9f2f2
	movs r0, #1	@ 0009f2f2 0120
.org 0x9f2f4
	ands r3, r0	@ 0009f2f4 0340
.org 0x9f2f6
	mov r0, sp	@ 0009f2f6 6846
.org 0x9f2f8
	movs r1, #0	@ 0009f2f8 0021
.org 0x9f2fa
	movs r2, #0	@ 0009f2fa 0022
.org 0x9f2fc
	bl 0xc9bc0	@ 0009f2fc 2af060fc
.org 0x9f300
	movs r0, #156	@ 0009f300 9c20
.org 0x9f302
	lsls r0, r0, #1	@ 0009f302 4000
.org 0x9f304
	bl 0x2b10	@ 0009f304 63f704fc
.org 0x9f308
	b.n 0x9f31e	@ 0009f308 09e0
.org 0x9f30a
	.byte 0x00	@ 0009f30a data
.org 0x9f30b
	.byte 0x00	@ 0009f30b data
.org 0x9f30c
	.byte 0x00,0xe0,0xff,0xff	@ 0009f30c data
.org 0x9f310
	cmp r0, #2	@ 0009f310 0228
.org 0x9f312
	bne.n 0x9f31e	@ 0009f312 04d1
.org 0x9f314
	movs r0, #0	@ 0009f314 0020
.org 0x9f316
	strb r0, [r4, #13]	@ 0009f316 6073
