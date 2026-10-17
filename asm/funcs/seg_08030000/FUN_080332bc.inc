@ FUN_080332bc  entry 0x080332bc  size 112
.thumb
.org 0x332bc
FUN_080332bc:
	push {r4, lr}	@ 000332bc 10b5
.org 0x332be
	adds r4, r0, #0	@ 000332be 041c
.org 0x332c0
	ldrb r0, [r4, #15]	@ 000332c0 e07b
.org 0x332c2
	cmp r0, #1	@ 000332c2 0128
.org 0x332c4
	beq.n 0x332f4	@ 000332c4 16d0
.org 0x332c6
	cmp r0, #1	@ 000332c6 0128
.org 0x332c8
	bgt.n 0x332d0	@ 000332c8 02dc
.org 0x332ca
	cmp r0, #0	@ 000332ca 0028
.org 0x332cc
	beq.n 0x332d6	@ 000332cc 03d0
.org 0x332ce
	b.n 0x33330	@ 000332ce 2fe0
.org 0x332d0
	cmp r0, #2	@ 000332d0 0228
.org 0x332d2
	beq.n 0x3331c	@ 000332d2 23d0
.org 0x332d4
	b.n 0x33330	@ 000332d4 2ce0
.org 0x332d6
	ldr r1, [pc, #24]	@ 000332d6 0649
.org 0x332d8
	adds r0, r4, #0	@ 000332d8 201c
.org 0x332da
	bl 0x1cf00	@ 000332da e9f711fe
.org 0x332de
	ldr r0, [r4, #84]	@ 000332de 606d
.org 0x332e0
	ldr r1, [r4, #88]	@ 000332e0 a16d
.org 0x332e2
	bl 0x864c	@ 000332e2 d5f7b3f9
.org 0x332e6
	str r0, [r4, #88]	@ 000332e6 a065
.org 0x332e8
	adds r0, r4, #0	@ 000332e8 201c
.org 0x332ea
	bl 0x2b7bc	@ 000332ea f8f767fa
.org 0x332ee
	b.n 0x3330e	@ 000332ee 0ee0
.org 0x332f0
	.byte 0x02,0x4e,0x00,0x00	@ 000332f0 data
.org 0x332f4
	ldrb r0, [r4, #10]	@ 000332f4 a07a
.org 0x332f6
	movs r1, #1	@ 000332f6 0121
.org 0x332f8
	orrs r1, r0	@ 000332f8 0143
.org 0x332fa
	strb r1, [r4, #10]	@ 000332fa a172
.org 0x332fc
	adds r0, r4, #0	@ 000332fc 201c
.org 0x332fe
	adds r0, #115	@ 000332fe 7330
.org 0x33300
	ldrb r0, [r0, #0]	@ 00033300 0078
.org 0x33302
	cmp r0, #4	@ 00033302 0428
.org 0x33304
	bne.n 0x33330	@ 00033304 14d1
.org 0x33306
	ldr r1, [pc, #16]	@ 00033306 0449
.org 0x33308
	adds r0, r4, #0	@ 00033308 201c
.org 0x3330a
	bl 0x1cf00	@ 0003330a e9f7f9fd
.org 0x3330e
	ldrb r0, [r4, #15]	@ 0003330e e07b
.org 0x33310
	adds r0, #1	@ 00033310 0130
.org 0x33312
	strb r0, [r4, #15]	@ 00033312 e073
.org 0x33314
	b.n 0x33330	@ 00033314 0ce0
.org 0x33316
	.byte 0x00	@ 00033316 data
.org 0x33317
	.byte 0x00	@ 00033317 data
.org 0x33318
	.byte 0x01,0x4e,0x00,0x00	@ 00033318 data
.org 0x3331c
	adds r0, r4, #0	@ 0003331c 201c
.org 0x3331e
	adds r0, #115	@ 0003331e 7330
.org 0x33320
	ldrb r0, [r0, #0]	@ 00033320 0078
.org 0x33322
	cmp r0, #3	@ 00033322 0328
.org 0x33324
	bne.n 0x33330	@ 00033324 04d1
.org 0x33326
	movs r0, #0	@ 00033326 0020
.org 0x33328
	strb r0, [r4, #13]	@ 00033328 6073
.org 0x3332a
	strb r0, [r4, #14]	@ 0003332a a073
