@ FUN_08040554  entry 0x08040554  size 98
.thumb
.org 0x40554
FUN_08040554:
	push {r4, lr}	@ 00040554 10b5
.org 0x40556
	adds r4, r0, #0	@ 00040556 041c
.org 0x40558
	bl 0x1cff0	@ 00040558 dcf74afd
.org 0x4055c
	ldr r2, [r4, #96]	@ 0004055c 226e
.org 0x4055e
	adds r2, #64	@ 0004055e 4032
.org 0x40560
	str r2, [r4, #96]	@ 00040560 2266
.org 0x40562
	ldr r0, [r4, #84]	@ 00040562 606d
.org 0x40564
	ldr r1, [r4, #92]	@ 00040564 e16d
.org 0x40566
	adds r0, r0, r1	@ 00040566 4018
.org 0x40568
	str r0, [r4, #84]	@ 00040568 6065
.org 0x4056a
	ldr r0, [r4, #88]	@ 0004056a a06d
.org 0x4056c
	adds r0, r0, r2	@ 0004056c 8018
.org 0x4056e
	str r0, [r4, #88]	@ 0004056e a065
.org 0x40570
	ldrb r1, [r4, #18]	@ 00040570 a17c
.org 0x40572
	movs r0, #1	@ 00040572 0120
.org 0x40574
	ands r0, r1	@ 00040574 0840
.org 0x40576
	cmp r0, #0	@ 00040576 0028
.org 0x40578
	beq.n 0x40582	@ 00040578 03d0
.org 0x4057a
	ldrb r1, [r4, #10]	@ 0004057a a17a
.org 0x4057c
	movs r0, #1	@ 0004057c 0120
.org 0x4057e
	orrs r0, r1	@ 0004057e 0843
.org 0x40580
	b.n 0x40588	@ 00040580 02e0
.org 0x40582
	ldrb r1, [r4, #10]	@ 00040582 a17a
.org 0x40584
	movs r0, #254	@ 00040584 fe20
.org 0x40586
	ands r0, r1	@ 00040586 0840
.org 0x40588
	strb r0, [r4, #10]	@ 00040588 a072
.org 0x4058a
	ldrb r0, [r4, #18]	@ 0004058a a07c
.org 0x4058c
	subs r0, #1	@ 0004058c 0138
.org 0x4058e
	strb r0, [r4, #18]	@ 0004058e a074
.org 0x40590
	lsls r0, r0, #24	@ 00040590 0006
.org 0x40592
	lsrs r0, r0, #24	@ 00040592 000e
.org 0x40594
	cmp r0, #255	@ 00040594 ff28
.org 0x40596
	bne.n 0x405b0	@ 00040596 0bd1
.org 0x40598
	ldr r1, [pc, #28]	@ 00040598 0749
.org 0x4059a
	ldrb r0, [r4, #9]	@ 0004059a 607a
.org 0x4059c
	lsls r0, r0, #2	@ 0004059c 8000
.org 0x4059e
	adds r0, r0, r1	@ 0004059e 4018
.org 0x405a0
	movs r1, #2	@ 000405a0 0221
.org 0x405a2
	str r1, [r4, #12]	@ 000405a2 e160
.org 0x405a4
	ldr r0, [r0, #0]	@ 000405a4 0068
.org 0x405a6
	ldr r0, [r0, #8]	@ 000405a6 8068
.org 0x405a8
	str r0, [r4, #20]	@ 000405a8 6061
.org 0x405aa
	adds r0, r4, #0	@ 000405aa 201c
.org 0x405ac
	bl 0x4016c	@ 000405ac fff7defd
.org 0x405b0
	pop {r4}	@ 000405b0 10bc
.org 0x405b2
	pop {r0}	@ 000405b2 01bc
.org 0x405b4
	bx r0	@ 000405b4 0047
