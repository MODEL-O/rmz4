@ FUN_080d25d8  entry 0x080d25d8  size 120
.thumb
.org 0xd25d8
FUN_080d25d8:
	push {r4, lr}	@ 000d25d8 10b5
.org 0xd25da
	adds r4, r0, #0	@ 000d25da 041c
.org 0xd25dc
	bl 0x1cff0	@ 000d25dc 4af708fd
.org 0xd25e0
	ldrb r1, [r4, #18]	@ 000d25e0 a17c
.org 0xd25e2
	cmp r1, #29	@ 000d25e2 1d29
.org 0xd25e4
	bhi.n 0xd25fe	@ 000d25e4 0bd8
.org 0xd25e6
	movs r0, #1	@ 000d25e6 0120
.org 0xd25e8
	ands r0, r1	@ 000d25e8 0840
.org 0xd25ea
	cmp r0, #0	@ 000d25ea 0028
.org 0xd25ec
	beq.n 0xd25f6	@ 000d25ec 03d0
.org 0xd25ee
	ldrb r1, [r4, #10]	@ 000d25ee a17a
.org 0xd25f0
	movs r0, #254	@ 000d25f0 fe20
.org 0xd25f2
	ands r0, r1	@ 000d25f2 0840
.org 0xd25f4
	b.n 0xd25fc	@ 000d25f4 02e0
.org 0xd25f6
	ldrb r0, [r4, #10]	@ 000d25f6 a07a
.org 0xd25f8
	movs r1, #1	@ 000d25f8 0121
.org 0xd25fa
	orrs r0, r1	@ 000d25fa 0843
.org 0xd25fc
	strb r0, [r4, #10]	@ 000d25fc a072
.org 0xd25fe
	ldr r1, [pc, #80]	@ 000d25fe 1449
.org 0xd2600
	ldrb r2, [r4, #18]	@ 000d2600 a27c
.org 0xd2602
	lsls r0, r2, #28	@ 000d2602 1007
.org 0xd2604
	movs r3, #128	@ 000d2604 8023
.org 0xd2606
	lsls r3, r3, #23	@ 000d2606 db05
.org 0xd2608
	adds r0, r0, r3	@ 000d2608 c018
.org 0xd260a
	lsrs r0, r0, #23	@ 000d260a c00d
.org 0xd260c
	adds r0, r0, r1	@ 000d260c 4018
.org 0xd260e
	ldrh r1, [r0, #0]	@ 000d260e 0188
.org 0xd2610
	lsls r1, r1, #16	@ 000d2610 0904
.org 0xd2612
	asrs r1, r1, #18	@ 000d2612 8914
.org 0xd2614
	ldr r0, [r4, #84]	@ 000d2614 606d
.org 0xd2616
	adds r0, r0, r1	@ 000d2616 4018
.org 0xd2618
	str r0, [r4, #84]	@ 000d2618 6065
.org 0xd261a
	ldr r0, [r4, #88]	@ 000d261a a06d
.org 0xd261c
	ldr r1, [r4, #96]	@ 000d261c 216e
.org 0xd261e
	subs r0, r0, r1	@ 000d261e 401a
.org 0xd2620
	str r0, [r4, #88]	@ 000d2620 a065
.org 0xd2622
	ldr r3, [pc, #48]	@ 000d2622 0c4b
.org 0xd2624
	adds r1, r0, r3	@ 000d2624 c118
.org 0xd2626
	subs r2, #1	@ 000d2626 013a
.org 0xd2628
	strb r2, [r4, #18]	@ 000d2628 a274
.org 0xd262a
	lsls r2, r2, #24	@ 000d262a 1206
.org 0xd262c
	lsrs r2, r2, #24	@ 000d262c 120e
.org 0xd262e
	cmp r2, #255	@ 000d262e ff2a
.org 0xd2630
	beq.n 0xd2638	@ 000d2630 02d0
.org 0xd2632
	ldr r0, [r4, #116]	@ 000d2632 606f
.org 0xd2634
	cmp r0, r1	@ 000d2634 8842
.org 0xd2636
	ble.n 0xd264a	@ 000d2636 08dd
.org 0xd2638
	ldr r1, [pc, #28]	@ 000d2638 0749
.org 0xd263a
	ldrb r0, [r4, #9]	@ 000d263a 607a
.org 0xd263c
	lsls r0, r0, #2	@ 000d263c 8000
.org 0xd263e
	adds r0, r0, r1	@ 000d263e 4018
.org 0xd2640
	movs r1, #2	@ 000d2640 0221
.org 0xd2642
	str r1, [r4, #12]	@ 000d2642 e160
.org 0xd2644
	ldr r0, [r0, #0]	@ 000d2644 0068
.org 0xd2646
	ldr r0, [r0, #8]	@ 000d2646 8068
.org 0xd2648
	str r0, [r4, #20]	@ 000d2648 6061
.org 0xd264a
	pop {r4}	@ 000d264a 10bc
.org 0xd264c
	pop {r0}	@ 000d264c 01bc
.org 0xd264e
	bx r0	@ 000d264e 0047
