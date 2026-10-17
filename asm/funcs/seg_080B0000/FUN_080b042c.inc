@ FUN_080b042c  entry 0x080b042c  size 148
.thumb
.org 0xb042c
FUN_080b042c:
	push {r4, lr}	@ 000b042c 10b5
.org 0xb042e
	adds r4, r0, #0	@ 000b042e 041c
.org 0xb0430
	ldrb r0, [r4, #13]	@ 000b0430 607b
.org 0xb0432
	cmp r0, #4	@ 000b0432 0428
.org 0xb0434
	beq.n 0xb0464	@ 000b0434 16d0
.org 0xb0436
	adds r0, r4, #0	@ 000b0436 201c
.org 0xb0438
	adds r0, #140	@ 000b0438 8c30
.org 0xb043a
	ldr r0, [r0, #0]	@ 000b043a 0068
.org 0xb043c
	movs r1, #128	@ 000b043c 8021
.org 0xb043e
	lsls r1, r1, #2	@ 000b043e 8900
.org 0xb0440
	ands r0, r1	@ 000b0440 0840
.org 0xb0442
	cmp r0, #0	@ 000b0442 0028
.org 0xb0444
	beq.n 0xb0464	@ 000b0444 0ed0
.org 0xb0446
	ldr r1, [pc, #24]	@ 000b0446 0649
.org 0xb0448
	ldrb r0, [r4, #9]	@ 000b0448 607a
.org 0xb044a
	lsls r0, r0, #2	@ 000b044a 8000
.org 0xb044c
	adds r0, r0, r1	@ 000b044c 4018
.org 0xb044e
	movs r1, #2	@ 000b044e 0221
.org 0xb0450
	str r1, [r4, #12]	@ 000b0450 e160
.org 0xb0452
	ldr r0, [r0, #0]	@ 000b0452 0068
.org 0xb0454
	ldr r0, [r0, #8]	@ 000b0454 8068
.org 0xb0456
	str r0, [r4, #20]	@ 000b0456 6061
.org 0xb0458
	adds r0, r4, #0	@ 000b0458 201c
.org 0xb045a
	bl 0xb04d0	@ 000b045a 00f039f8
.org 0xb045e
	b.n 0xb04c8	@ 000b045e 33e0
.org 0xb0460
	.byte 0x40,0xdb,0x85,0x08	@ 000b0460 data
.org 0xb0464
	ldrb r0, [r4, #16]	@ 000b0464 207c
.org 0xb0466
	cmp r0, #1	@ 000b0466 0128
.org 0xb0468
	bne.n 0xb0480	@ 000b0468 0ad1
.org 0xb046a
	ldr r0, [pc, #16]	@ 000b046a 0448
.org 0xb046c
	ldrb r1, [r4, #13]	@ 000b046c 617b
.org 0xb046e
	lsls r1, r1, #2	@ 000b046e 8900
.org 0xb0470
	adds r1, r1, r0	@ 000b0470 0918
.org 0xb0472
	ldr r1, [r1, #0]	@ 000b0472 0968
.org 0xb0474
	adds r0, r4, #0	@ 000b0474 201c
.org 0xb0476
	bl 0x128f80	@ 000b0476 78f083fd
.org 0xb047a
	b.n 0xb04c2	@ 000b047a 22e0
.org 0xb047c
	.byte 0x84,0x32,0x86,0x08	@ 000b047c data
.org 0xb0480
	adds r0, r4, #0	@ 000b0480 201c
.org 0xb0482
	bl 0xb0bd4	@ 000b0482 00f0a7fb
.org 0xb0486
	adds r0, r4, #0	@ 000b0486 201c
.org 0xb0488
	adds r0, #192	@ 000b0488 c030
.org 0xb048a
	ldr r0, [r0, #0]	@ 000b048a 0068
.org 0xb048c
	cmp r0, #0	@ 000b048c 0028
.org 0xb048e
	beq.n 0xb0496	@ 000b048e 02d0
.org 0xb0490
	ldrb r0, [r4, #13]	@ 000b0490 607b
.org 0xb0492
	cmp r0, #4	@ 000b0492 0428
.org 0xb0494
	bne.n 0xb04b4	@ 000b0494 0ed1
.org 0xb0496
	ldr r1, [pc, #24]	@ 000b0496 0649
.org 0xb0498
	ldrb r0, [r4, #13]	@ 000b0498 607b
.org 0xb049a
	lsls r0, r0, #2	@ 000b049a 8000
.org 0xb049c
	adds r0, r0, r1	@ 000b049c 4018
.org 0xb049e
	ldr r1, [r0, #0]	@ 000b049e 0168
.org 0xb04a0
	adds r0, r4, #0	@ 000b04a0 201c
.org 0xb04a2
	bl 0x128f80	@ 000b04a2 78f06dfd
.org 0xb04a6
	ldrb r0, [r4, #13]	@ 000b04a6 607b
.org 0xb04a8
	cmp r0, #4	@ 000b04a8 0428
.org 0xb04aa
	bne.n 0xb04c2	@ 000b04aa 0ad1
.org 0xb04ac
	b.n 0xb04ba	@ 000b04ac 05e0
.org 0xb04ae
	.byte 0x00	@ 000b04ae data
.org 0xb04af
	.byte 0x00	@ 000b04af data
.org 0xb04b0
	.byte 0x70,0x32,0x86,0x08	@ 000b04b0 data
.org 0xb04b4
	adds r0, r4, #0	@ 000b04b4 201c
.org 0xb04b6
	bl 0xb0c7c	@ 000b04b6 00f0e1fb
.org 0xb04ba
	adds r0, r4, #0	@ 000b04ba 201c
.org 0xb04bc
	bl 0x1d1f4	@ 000b04bc 6cf79afe
