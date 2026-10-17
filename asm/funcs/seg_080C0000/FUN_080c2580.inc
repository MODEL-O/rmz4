@ FUN_080c2580  entry 0x080c2580  size 160
.thumb
.org 0xc2580
FUN_080c2580:
	push {r4, r5, r6, lr}	@ 000c2580 70b5
.org 0xc2582
	adds r6, r0, #0	@ 000c2582 061c
.org 0xc2584
	ldr r0, [r6, #40]	@ 000c2584 b06a
.org 0xc2586
	ldr r0, [r0, #40]	@ 000c2586 806a
.org 0xc2588
	ldrb r4, [r0, #10]	@ 000c2588 847a
.org 0xc258a
	lsrs r4, r4, #4	@ 000c258a 2409
.org 0xc258c
	movs r2, #1	@ 000c258c 0122
.org 0xc258e
	ands r4, r2	@ 000c258e 1440
.org 0xc2590
	ldr r1, [pc, #52]	@ 000c2590 0d49
.org 0xc2592
	ldrb r0, [r6, #9]	@ 000c2592 707a
.org 0xc2594
	lsls r0, r0, #2	@ 000c2594 8000
.org 0xc2596
	adds r0, r0, r1	@ 000c2596 4018
.org 0xc2598
	str r2, [r6, #12]	@ 000c2598 f260
.org 0xc259a
	ldr r0, [r0, #0]	@ 000c259a 0068
.org 0xc259c
	ldr r0, [r0, #4]	@ 000c259c 4068
.org 0xc259e
	str r0, [r6, #20]	@ 000c259e 7061
.org 0xc25a0
	ldrb r1, [r6, #10]	@ 000c25a0 b17a
.org 0xc25a2
	movs r0, #1	@ 000c25a2 0120
.org 0xc25a4
	movs r5, #0	@ 000c25a4 0025
.org 0xc25a6
	movs r2, #0	@ 000c25a6 0022
.org 0xc25a8
	orrs r0, r1	@ 000c25a8 0843
.org 0xc25aa
	movs r1, #2	@ 000c25aa 0221
.org 0xc25ac
	orrs r0, r1	@ 000c25ac 0843
.org 0xc25ae
	strb r0, [r6, #10]	@ 000c25ae b072
.org 0xc25b0
	adds r0, r6, #0	@ 000c25b0 301c
.org 0xc25b2
	adds r0, #180	@ 000c25b2 b430
.org 0xc25b4
	str r2, [r0, #0]	@ 000c25b4 0260
.org 0xc25b6
	adds r0, r6, #0	@ 000c25b6 301c
.org 0xc25b8
	bl 0x1cc9c	@ 000c25b8 5af770fb
.org 0xc25bc
	cmp r4, #0	@ 000c25bc 002c
.org 0xc25be
	beq.n 0xc25cc	@ 000c25be 05d0
.org 0xc25c0
	ldrb r0, [r6, #10]	@ 000c25c0 b07a
.org 0xc25c2
	movs r1, #16	@ 000c25c2 1021
.org 0xc25c4
	orrs r0, r1	@ 000c25c4 0843
.org 0xc25c6
	b.n 0xc25d2	@ 000c25c6 04e0
.org 0xc25c8
	.byte 0xf4,0x49,0x86,0x08	@ 000c25c8 data
.org 0xc25cc
	ldrb r1, [r6, #10]	@ 000c25cc b17a
.org 0xc25ce
	movs r0, #239	@ 000c25ce ef20
.org 0xc25d0
	ands r0, r1	@ 000c25d0 0840
.org 0xc25d2
	strb r0, [r6, #10]	@ 000c25d2 b072
.org 0xc25d4
	adds r1, r4, #0	@ 000c25d4 211c
.org 0xc25d6
	adds r0, r6, #0	@ 000c25d6 301c
.org 0xc25d8
	adds r0, #76	@ 000c25d8 4c30
.org 0xc25da
	movs r5, #0	@ 000c25da 0025
.org 0xc25dc
	strb r1, [r0, #0]	@ 000c25dc 0170
.org 0xc25de
	adds r3, r6, #0	@ 000c25de 331c
.org 0xc25e0
	adds r3, #74	@ 000c25e0 4a33
.org 0xc25e2
	lsls r1, r1, #4	@ 000c25e2 0901
.org 0xc25e4
	ldrb r2, [r3, #0]	@ 000c25e4 1a78
.org 0xc25e6
	movs r0, #17	@ 000c25e6 1120
.org 0xc25e8
	negs r0, r0	@ 000c25e8 4042
.org 0xc25ea
	ands r0, r2	@ 000c25ea 1040
.org 0xc25ec
	orrs r0, r1	@ 000c25ec 0843
.org 0xc25ee
	strb r0, [r3, #0]	@ 000c25ee 1870
.org 0xc25f0
	movs r1, #138	@ 000c25f0 8a21
.org 0xc25f2
	lsls r1, r1, #7	@ 000c25f2 c901
.org 0xc25f4
	adds r0, r6, #0	@ 000c25f4 301c
.org 0xc25f6
	bl 0x1cf00	@ 000c25f6 5af783fc
.org 0xc25fa
	ldrb r1, [r6, #10]	@ 000c25fa b17a
.org 0xc25fc
	movs r0, #4	@ 000c25fc 0420
.org 0xc25fe
	orrs r0, r1	@ 000c25fe 0843
.org 0xc2600
	strb r0, [r6, #10]	@ 000c2600 b072
.org 0xc2602
	adds r4, r6, #0	@ 000c2602 341c
.org 0xc2604
	adds r4, #116	@ 000c2604 7434
.org 0xc2606
	ldr r1, [pc, #28]	@ 000c2606 0749
.org 0xc2608
	adds r2, r6, #0	@ 000c2608 321c
.org 0xc260a
	adds r2, #84	@ 000c260a 5432
.org 0xc260c
	adds r0, r4, #0	@ 000c260c 201c
.org 0xc260e
	movs r3, #64	@ 000c260e 4023
.org 0xc2610
	bl 0x5760	@ 000c2610 43f7a6f8
.org 0xc2614
	str r6, [r4, #44]	@ 000c2614 e662
.org 0xc2616
	str r5, [r4, #36]	@ 000c2616 6562
.org 0xc2618
	adds r0, r6, #0	@ 000c2618 301c
.org 0xc261a
	bl 0xc2628	@ 000c261a 00f005f8
.org 0xc261e
	pop {r4, r5, r6}	@ 000c261e 70bc
