@ FUN_080e2600  entry 0x080e2600  size 102
.thumb
.org 0xe2600
FUN_080e2600:
	push {r4, r5, r6, r7, lr}	@ 000e2600 f0b5
.org 0xe2602
	mov r7, r8	@ 000e2602 4746
.org 0xe2604
	push {r7}	@ 000e2604 80b4
.org 0xe2606
	adds r7, r0, #0	@ 000e2606 071c
.org 0xe2608
	mov r8, r2	@ 000e2608 9046
.org 0xe260a
	lsls r1, r1, #24	@ 000e260a 0906
.org 0xe260c
	lsrs r5, r1, #24	@ 000e260c 0d0e
.org 0xe260e
	lsls r3, r3, #24	@ 000e260e 1b06
.org 0xe2610
	lsrs r6, r3, #24	@ 000e2610 1e0e
.org 0xe2612
	ldr r0, [pc, #84]	@ 000e2612 1548
.org 0xe2614
	ldr r0, [r0, #0]	@ 000e2614 0068
.org 0xe2616
	bl 0x5500	@ 000e2616 22f773ff
.org 0xe261a
	adds r4, r0, #0	@ 000e261a 041c
.org 0xe261c
	cmp r4, #0	@ 000e261c 002c
.org 0xe261e
	beq.n 0xe265a	@ 000e261e 1cd0
.org 0xe2620
	adds r1, r4, #0	@ 000e2620 211c
.org 0xe2622
	adds r1, #37	@ 000e2622 2531
.org 0xe2624
	movs r3, #0	@ 000e2624 0023
.org 0xe2626
	movs r0, #1	@ 000e2626 0120
.org 0xe2628
	strb r0, [r1, #0]	@ 000e2628 0870
.org 0xe262a
	ldr r0, [pc, #64]	@ 000e262a 1048
.org 0xe262c
	movs r1, #65	@ 000e262c 4121
.org 0xe262e
	strb r1, [r4, #9]	@ 000e262e 6172
.org 0xe2630
	adds r1, #195	@ 000e2630 c331
.org 0xe2632
	adds r0, r0, r1	@ 000e2632 4018
.org 0xe2634
	ldr r0, [r0, #0]	@ 000e2634 0068
.org 0xe2636
	ldr r0, [r0, #0]	@ 000e2636 0068
.org 0xe2638
	str r0, [r4, #20]	@ 000e2638 6061
.org 0xe263a
	movs r2, #0	@ 000e263a 0022
.org 0xe263c
	strh r3, [r4, #32]	@ 000e263c 2384
.org 0xe263e
	adds r0, r4, #0	@ 000e263e 201c
.org 0xe2640
	adds r0, #34	@ 000e2640 2230
.org 0xe2642
	strb r2, [r0, #0]	@ 000e2642 0270
.org 0xe2644
	ldr r0, [r7, #0]	@ 000e2644 3868
.org 0xe2646
	ldr r1, [r7, #4]	@ 000e2646 7968
.org 0xe2648
	str r0, [r4, #84]	@ 000e2648 6065
.org 0xe264a
	str r1, [r4, #88]	@ 000e264a a165
.org 0xe264c
	strb r2, [r4, #16]	@ 000e264c 2274
.org 0xe264e
	strb r5, [r4, #17]	@ 000e264e 6574
.org 0xe2650
	mov r0, r8	@ 000e2650 4046
.org 0xe2652
	str r0, [r4, #116]	@ 000e2652 6067
.org 0xe2654
	adds r0, r4, #0	@ 000e2654 201c
.org 0xe2656
	adds r0, #120	@ 000e2656 7830
.org 0xe2658
	strb r6, [r0, #0]	@ 000e2658 0670
.org 0xe265a
	adds r0, r4, #0	@ 000e265a 201c
.org 0xe265c
	pop {r3}	@ 000e265c 08bc
.org 0xe265e
	mov r8, r3	@ 000e265e 9846
.org 0xe2660
	pop {r4, r5, r6, r7}	@ 000e2660 f0bc
.org 0xe2662
	pop {r1}	@ 000e2662 02bc
.org 0xe2664
	bx r1	@ 000e2664 0847
