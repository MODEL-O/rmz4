@ FUN_080fb44c  entry 0x080fb44c  size 206
.thumb
.org 0xfb44c
FUN_080fb44c:
	push {r4, lr}	@ 000fb44c 10b5
.org 0xfb44e
	adds r4, r0, #0	@ 000fb44e 041c
.org 0xfb450
	ldrb r0, [r4, #14]	@ 000fb450 a07b
.org 0xfb452
	cmp r0, #0	@ 000fb452 0028
.org 0xfb454
	bne.n 0xfb46a	@ 000fb454 09d1
.org 0xfb456
	adds r0, r4, #0	@ 000fb456 201c
.org 0xfb458
	adds r0, #116	@ 000fb458 7430
.org 0xfb45a
	ldr r1, [pc, #64]	@ 000fb45a 1049
.org 0xfb45c
	bl 0x5784	@ 000fb45c 0af792f9
.org 0xfb460
	movs r0, #48	@ 000fb460 3020
.org 0xfb462
	strb r0, [r4, #18]	@ 000fb462 a074
.org 0xfb464
	ldrb r0, [r4, #14]	@ 000fb464 a07b
.org 0xfb466
	adds r0, #1	@ 000fb466 0130
.org 0xfb468
	strb r0, [r4, #14]	@ 000fb468 a073
.org 0xfb46a
	ldrb r0, [r4, #14]	@ 000fb46a a07b
.org 0xfb46c
	cmp r0, #1	@ 000fb46c 0128
.org 0xfb46e
	bne.n 0xfb4b6	@ 000fb46e 22d1
.org 0xfb470
	ldrb r0, [r4, #18]	@ 000fb470 a07c
.org 0xfb472
	subs r0, #1	@ 000fb472 0138
.org 0xfb474
	strb r0, [r4, #18]	@ 000fb474 a074
.org 0xfb476
	lsls r0, r0, #24	@ 000fb476 0006
.org 0xfb478
	lsrs r0, r0, #24	@ 000fb478 000e
.org 0xfb47a
	cmp r0, #255	@ 000fb47a ff28
.org 0xfb47c
	bne.n 0xfb4b6	@ 000fb47c 1bd1
.org 0xfb47e
	ldr r1, [pc, #32]	@ 000fb47e 0849
.org 0xfb480
	adds r0, r4, #0	@ 000fb480 201c
.org 0xfb482
	bl 0x1cf00	@ 000fb482 21f73dfd
.org 0xfb486
	ldr r0, [pc, #28]	@ 000fb486 0748
.org 0xfb488
	ldr r1, [pc, #28]	@ 000fb488 0749
.org 0xfb48a
	adds r0, r0, r1	@ 000fb48a 4018
.org 0xfb48c
	ldrb r1, [r0, #0]	@ 000fb48c 0178
.org 0xfb48e
	movs r0, #15	@ 000fb48e 0f20
.org 0xfb490
	ands r0, r1	@ 000fb490 0840
.org 0xfb492
	cmp r0, #0	@ 000fb492 0028
.org 0xfb494
	bne.n 0xfb4ac	@ 000fb494 0ad1
.org 0xfb496
	movs r0, #200	@ 000fb496 c820
.org 0xfb498
	b.n 0xfb4ae	@ 000fb498 09e0
.org 0xfb49a
	.byte 0x00	@ 000fb49a data
.org 0xfb49b
	.byte 0x00	@ 000fb49b data
.org 0xfb49c
	.byte 0x7c,0xa9,0x86,0x08	@ 000fb49c data
.org 0xfb4a0
	.byte 0x04,0x96,0x00,0x00	@ 000fb4a0 data
.org 0xfb4a4
	.byte 0xb0,0x0a,0x00,0x02	@ 000fb4a4 data
.org 0xfb4a8
	.byte 0x10,0xc0,0x02,0x00	@ 000fb4a8 data
.org 0xfb4ac
	movs r0, #100	@ 000fb4ac 6420
.org 0xfb4ae
	strb r0, [r4, #18]	@ 000fb4ae a074
.org 0xfb4b0
	ldrb r0, [r4, #14]	@ 000fb4b0 a07b
.org 0xfb4b2
	adds r0, #1	@ 000fb4b2 0130
.org 0xfb4b4
	strb r0, [r4, #14]	@ 000fb4b4 a073
.org 0xfb4b6
	ldrb r0, [r4, #14]	@ 000fb4b6 a07b
.org 0xfb4b8
	cmp r0, #2	@ 000fb4b8 0228
.org 0xfb4ba
	bne.n 0xfb50e	@ 000fb4ba 28d1
.org 0xfb4bc
	ldr r0, [r4, #112]	@ 000fb4bc 206f
.org 0xfb4be
	ldr r1, [pc, #108]	@ 000fb4be 1b49
.org 0xfb4c0
	ands r0, r1	@ 000fb4c0 0840
.org 0xfb4c2
	ldr r1, [pc, #108]	@ 000fb4c2 1b49
.org 0xfb4c4
	cmp r0, r1	@ 000fb4c4 8842
.org 0xfb4c6
	bne.n 0xfb4d2	@ 000fb4c6 04d1
.org 0xfb4c8
	adds r0, r4, #0	@ 000fb4c8 201c
.org 0xfb4ca
	adds r0, #116	@ 000fb4ca 7430
.org 0xfb4cc
	ldr r1, [pc, #100]	@ 000fb4cc 1949
.org 0xfb4ce
	bl 0x5784	@ 000fb4ce 0af759f9
.org 0xfb4d2
	ldrb r0, [r4, #18]	@ 000fb4d2 a07c
.org 0xfb4d4
	movs r1, #6	@ 000fb4d4 0621
.org 0xfb4d6
	bl 0x129198	@ 000fb4d6 2df05ffe
.org 0xfb4da
	lsls r0, r0, #24	@ 000fb4da 0006
.org 0xfb4dc
	cmp r0, #0	@ 000fb4dc 0028
.org 0xfb4de
	bne.n 0xfb4e8	@ 000fb4de 03d1
.org 0xfb4e0
	movs r0, #183	@ 000fb4e0 b720
.org 0xfb4e2
	lsls r0, r0, #1	@ 000fb4e2 4000
.org 0xfb4e4
	bl 0x2b10	@ 000fb4e4 07f714fb
.org 0xfb4e8
	ldrb r0, [r4, #18]	@ 000fb4e8 a07c
.org 0xfb4ea
	subs r0, #1	@ 000fb4ea 0138
.org 0xfb4ec
	strb r0, [r4, #18]	@ 000fb4ec a074
.org 0xfb4ee
	lsls r0, r0, #24	@ 000fb4ee 0006
.org 0xfb4f0
	lsrs r0, r0, #24	@ 000fb4f0 000e
.org 0xfb4f2
	cmp r0, #255	@ 000fb4f2 ff28
.org 0xfb4f4
	bne.n 0xfb50e	@ 000fb4f4 0bd1
.org 0xfb4f6
	ldr r1, [pc, #64]	@ 000fb4f6 1049
.org 0xfb4f8
	adds r0, r4, #0	@ 000fb4f8 201c
.org 0xfb4fa
	bl 0x1cf00	@ 000fb4fa 21f701fd
.org 0xfb4fe
	adds r0, r4, #0	@ 000fb4fe 201c
.org 0xfb500
	adds r0, #116	@ 000fb500 7430
.org 0xfb502
	ldr r1, [pc, #56]	@ 000fb502 0e49
.org 0xfb504
	bl 0x5784	@ 000fb504 0af73ef9
.org 0xfb508
	ldrb r0, [r4, #14]	@ 000fb508 a07b
.org 0xfb50a
	adds r0, #1	@ 000fb50a 0130
.org 0xfb50c
	strb r0, [r4, #14]	@ 000fb50c a073
.org 0xfb50e
	ldrb r0, [r4, #14]	@ 000fb50e a07b
.org 0xfb510
	cmp r0, #3	@ 000fb510 0328
.org 0xfb512
	bne.n 0xfb526	@ 000fb512 08d1
.org 0xfb514
	adds r0, r4, #0	@ 000fb514 201c
.org 0xfb516
	adds r0, #115	@ 000fb516 7330
.org 0xfb518
	ldrb r0, [r0, #0]	@ 000fb518 0078
