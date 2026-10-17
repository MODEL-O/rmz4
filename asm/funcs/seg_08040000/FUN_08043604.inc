@ FUN_08043604  entry 0x08043604  size 106
.thumb
.org 0x43604
FUN_08043604:
	push {r4, r5, r6, lr}	@ 00043604 70b5
.org 0x43606
	adds r4, r0, #0	@ 00043606 041c
.org 0x43608
	bl 0x1cd28	@ 00043608 d9f78efb
.org 0x4360c
	adds r0, r4, #0	@ 0004360c 201c
.org 0x4360e
	bl 0x1ceec	@ 0004360e d9f76dfc
.org 0x43612
	ldrb r1, [r4, #10]	@ 00043612 a17a
.org 0x43614
	movs r0, #1	@ 00043614 0120
.org 0x43616
	movs r6, #0	@ 00043616 0026
.org 0x43618
	orrs r0, r1	@ 00043618 0843
.org 0x4361a
	movs r1, #2	@ 0004361a 0221
.org 0x4361c
	orrs r0, r1	@ 0004361c 0843
.org 0x4361e
	strb r0, [r4, #10]	@ 0004361e a072
.org 0x43620
	ldr r1, [pc, #76]	@ 00043620 1349
.org 0x43622
	adds r0, r4, #0	@ 00043622 201c
.org 0x43624
	bl 0x1cf00	@ 00043624 d9f76cfc
.org 0x43628
	ldrb r1, [r4, #10]	@ 00043628 a17a
.org 0x4362a
	movs r0, #4	@ 0004362a 0420
.org 0x4362c
	orrs r0, r1	@ 0004362c 0843
.org 0x4362e
	strb r0, [r4, #10]	@ 0004362e a072
.org 0x43630
	adds r5, r4, #0	@ 00043630 251c
.org 0x43632
	adds r5, #116	@ 00043632 7435
.org 0x43634
	ldr r1, [pc, #60]	@ 00043634 0f49
.org 0x43636
	adds r2, r4, #0	@ 00043636 221c
.org 0x43638
	adds r2, #84	@ 00043638 5432
.org 0x4363a
	adds r0, r5, #0	@ 0004363a 281c
.org 0x4363c
	movs r3, #8	@ 0004363c 0823
.org 0x4363e
	bl 0x5760	@ 0004363e c2f78ff8
.org 0x43642
	str r4, [r5, #44]	@ 00043642 ec62
.org 0x43644
	ldr r0, [pc, #48]	@ 00043644 0c48
.org 0x43646
	str r0, [r5, #36]	@ 00043646 6862
.org 0x43648
	strb r6, [r4, #18]	@ 00043648 a674
.org 0x4364a
	movs r0, #69	@ 0004364a 4520
.org 0x4364c
	bl 0x2b10	@ 0004364c bff760fa
.org 0x43650
	ldr r1, [pc, #40]	@ 00043650 0a49
.org 0x43652
	ldrb r0, [r4, #9]	@ 00043652 607a
.org 0x43654
	lsls r0, r0, #2	@ 00043654 8000
.org 0x43656
	adds r0, r0, r1	@ 00043656 4018
.org 0x43658
	movs r1, #1	@ 00043658 0121
.org 0x4365a
	str r1, [r4, #12]	@ 0004365a e160
.org 0x4365c
	ldr r0, [r0, #0]	@ 0004365c 0068
.org 0x4365e
	ldr r0, [r0, #4]	@ 0004365e 4068
.org 0x43660
	str r0, [r4, #20]	@ 00043660 6061
.org 0x43662
	adds r0, r4, #0	@ 00043662 201c
.org 0x43664
	bl 0x43680	@ 00043664 00f00cf8
.org 0x43668
	pop {r4, r5, r6}	@ 00043668 70bc
.org 0x4366a
	pop {r0}	@ 0004366a 01bc
.org 0x4366c
	bx r0	@ 0004366c 0047
