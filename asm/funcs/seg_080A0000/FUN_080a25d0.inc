@ FUN_080a25d0  entry 0x080a25d0  size 282
.thumb
.org 0xa25d0
FUN_080a25d0:
	push {r4, r5, r6, r7, lr}	@ 000a25d0 f0b5
.org 0xa25d2
	mov r7, r8	@ 000a25d2 4746
.org 0xa25d4
	push {r7}	@ 000a25d4 80b4
.org 0xa25d6
	adds r6, r0, #0	@ 000a25d6 061c
.org 0xa25d8
	ldr r0, [r6, #40]	@ 000a25d8 b06a
.org 0xa25da
	ldrb r1, [r6, #16]	@ 000a25da 317c
.org 0xa25dc
	mov r8, r1	@ 000a25dc 8846
.org 0xa25de
	ldrb r4, [r0, #10]	@ 000a25de 847a
.org 0xa25e0
	lsrs r4, r4, #4	@ 000a25e0 2409
.org 0xa25e2
	movs r2, #1	@ 000a25e2 0122
.org 0xa25e4
	ands r4, r2	@ 000a25e4 1440
.org 0xa25e6
	ldr r1, [pc, #72]	@ 000a25e6 1249
.org 0xa25e8
	ldrb r0, [r6, #9]	@ 000a25e8 707a
.org 0xa25ea
	lsls r0, r0, #2	@ 000a25ea 8000
.org 0xa25ec
	adds r0, r0, r1	@ 000a25ec 4018
.org 0xa25ee
	str r2, [r6, #12]	@ 000a25ee f260
.org 0xa25f0
	ldr r0, [r0, #0]	@ 000a25f0 0068
.org 0xa25f2
	ldr r0, [r0, #4]	@ 000a25f2 4068
.org 0xa25f4
	str r0, [r6, #20]	@ 000a25f4 7061
.org 0xa25f6
	movs r2, #0	@ 000a25f6 0022
.org 0xa25f8
	strb r2, [r6, #13]	@ 000a25f8 7273
.org 0xa25fa
	strb r2, [r6, #14]	@ 000a25fa b273
.org 0xa25fc
	strb r2, [r6, #15]	@ 000a25fc f273
.org 0xa25fe
	ldrb r0, [r6, #10]	@ 000a25fe b07a
.org 0xa2600
	movs r1, #1	@ 000a2600 0121
.org 0xa2602
	movs r5, #0	@ 000a2602 0025
.org 0xa2604
	orrs r0, r1	@ 000a2604 0843
.org 0xa2606
	movs r1, #2	@ 000a2606 0221
.org 0xa2608
	orrs r0, r1	@ 000a2608 0843
.org 0xa260a
	strb r0, [r6, #10]	@ 000a260a b072
.org 0xa260c
	adds r1, r6, #0	@ 000a260c 311c
.org 0xa260e
	adds r1, #180	@ 000a260e b431
.org 0xa2610
	movs r0, #120	@ 000a2610 7820
.org 0xa2612
	str r0, [r1, #0]	@ 000a2612 0860
.org 0xa2614
	adds r0, r6, #0	@ 000a2614 301c
.org 0xa2616
	adds r0, #184	@ 000a2616 b830
.org 0xa2618
	strb r2, [r0, #0]	@ 000a2618 0270
.org 0xa261a
	str r2, [r6, #44]	@ 000a261a f262
.org 0xa261c
	adds r0, r6, #0	@ 000a261c 301c
.org 0xa261e
	bl 0x1cc9c	@ 000a261e 7af73dfb
.org 0xa2622
	cmp r4, #0	@ 000a2622 002c
.org 0xa2624
	beq.n 0xa2634	@ 000a2624 06d0
.org 0xa2626
	ldrb r0, [r6, #10]	@ 000a2626 b07a
.org 0xa2628
	movs r1, #16	@ 000a2628 1021
.org 0xa262a
	orrs r0, r1	@ 000a262a 0843
.org 0xa262c
	b.n 0xa263a	@ 000a262c 05e0
.org 0xa262e
	.byte 0x00	@ 000a262e data
.org 0xa262f
	.byte 0x00	@ 000a262f data
.org 0xa2630
	.byte 0x40,0xdb,0x85,0x08	@ 000a2630 data
.org 0xa2634
	ldrb r1, [r6, #10]	@ 000a2634 b17a
.org 0xa2636
	movs r0, #239	@ 000a2636 ef20
.org 0xa2638
	ands r0, r1	@ 000a2638 0840
.org 0xa263a
	strb r0, [r6, #10]	@ 000a263a b072
.org 0xa263c
	adds r1, r4, #0	@ 000a263c 211c
.org 0xa263e
	adds r0, r6, #0	@ 000a263e 301c
.org 0xa2640
	adds r0, #76	@ 000a2640 4c30
.org 0xa2642
	movs r7, #0	@ 000a2642 0027
.org 0xa2644
	strb r1, [r0, #0]	@ 000a2644 0170
.org 0xa2646
	adds r3, r6, #0	@ 000a2646 331c
.org 0xa2648
	adds r3, #74	@ 000a2648 4a33
.org 0xa264a
	lsls r1, r1, #4	@ 000a264a 0901
.org 0xa264c
	ldrb r2, [r3, #0]	@ 000a264c 1a78
.org 0xa264e
	movs r0, #17	@ 000a264e 1120
.org 0xa2650
	negs r0, r0	@ 000a2650 4042
.org 0xa2652
	ands r0, r2	@ 000a2652 1040
.org 0xa2654
	orrs r0, r1	@ 000a2654 0843
.org 0xa2656
	strb r0, [r3, #0]	@ 000a2656 1870
.org 0xa2658
	ldr r1, [pc, #112]	@ 000a2658 1c49
.org 0xa265a
	adds r0, r6, #0	@ 000a265a 301c
.org 0xa265c
	bl 0x1cf00	@ 000a265c 7af750fc
.org 0xa2660
	adds r0, r6, #0	@ 000a2660 301c
.org 0xa2662
	bl 0x1cff0	@ 000a2662 7af7c5fc
.org 0xa2666
	ldrb r1, [r6, #10]	@ 000a2666 b17a
.org 0xa2668
	movs r0, #4	@ 000a2668 0420
.org 0xa266a
	orrs r0, r1	@ 000a266a 0843
.org 0xa266c
	strb r0, [r6, #10]	@ 000a266c b072
.org 0xa266e
	adds r4, r6, #0	@ 000a266e 341c
.org 0xa2670
	adds r4, #116	@ 000a2670 7434
.org 0xa2672
	ldr r1, [pc, #92]	@ 000a2672 1749
.org 0xa2674
	adds r5, r6, #0	@ 000a2674 351c
.org 0xa2676
	adds r5, #84	@ 000a2676 5435
.org 0xa2678
	adds r0, r4, #0	@ 000a2678 201c
.org 0xa267a
	adds r2, r5, #0	@ 000a267a 2a1c
.org 0xa267c
	movs r3, #10	@ 000a267c 0a23
.org 0xa267e
	bl 0x5760	@ 000a267e 63f76ff8
.org 0xa2682
	str r6, [r4, #44]	@ 000a2682 e662
.org 0xa2684
	ldr r0, [pc, #76]	@ 000a2684 1348
.org 0xa2686
	str r0, [r4, #36]	@ 000a2686 6062
.org 0xa2688
	ldr r0, [pc, #76]	@ 000a2688 1348
.org 0xa268a
	ldr r0, [r0, #0]	@ 000a268a 0068
.org 0xa268c
	movs r1, #10	@ 000a268c 0a21
.org 0xa268e
	ldrsh r0, [r0, r1]	@ 000a268e 405e
.org 0xa2690
	cmp r0, #5	@ 000a2690 0528
.org 0xa2692
	bgt.n 0xa26e0	@ 000a2692 25dc
.org 0xa2694
	ldrb r1, [r6, #10]	@ 000a2694 b17a
.org 0xa2696
	movs r0, #254	@ 000a2696 fe20
.org 0xa2698
	ands r0, r1	@ 000a2698 0840
.org 0xa269a
	movs r1, #253	@ 000a269a fd21
.org 0xa269c
	ands r0, r1	@ 000a269c 0840
.org 0xa269e
	strb r0, [r6, #10]	@ 000a269e b072
.org 0xa26a0
	adds r0, r6, #0	@ 000a26a0 301c
.org 0xa26a2
	adds r0, #140	@ 000a26a2 8c30
.org 0xa26a4
	str r7, [r0, #0]	@ 000a26a4 0760
.org 0xa26a6
	adds r0, #4	@ 000a26a6 0430
.org 0xa26a8
	str r7, [r0, #0]	@ 000a26a8 0760
.org 0xa26aa
	adds r0, #4	@ 000a26aa 0430
.org 0xa26ac
	strb r7, [r0, #0]	@ 000a26ac 0770
.org 0xa26ae
	ldrb r1, [r6, #10]	@ 000a26ae b17a
.org 0xa26b0
	movs r0, #251	@ 000a26b0 fb20
.org 0xa26b2
	ands r0, r1	@ 000a26b2 0840
.org 0xa26b4
	strb r0, [r6, #10]	@ 000a26b4 b072
.org 0xa26b6
	ldr r1, [pc, #36]	@ 000a26b6 0949
.org 0xa26b8
	ldrb r0, [r6, #9]	@ 000a26b8 707a
.org 0xa26ba
	lsls r0, r0, #2	@ 000a26ba 8000
.org 0xa26bc
	adds r0, r0, r1	@ 000a26bc 4018
.org 0xa26be
	movs r1, #3	@ 000a26be 0321
.org 0xa26c0
	str r1, [r6, #12]	@ 000a26c0 f160
.org 0xa26c2
	ldr r0, [r0, #0]	@ 000a26c2 0068
.org 0xa26c4
	ldr r0, [r0, #12]	@ 000a26c4 c068
.org 0xa26c6
	str r0, [r6, #20]	@ 000a26c6 7061
.org 0xa26c8
	b.n 0xa26fc	@ 000a26c8 18e0
.org 0xa26ca
	.byte 0x00	@ 000a26ca data
.org 0xa26cb
	.byte 0x00	@ 000a26cb data
.org 0xa26cc
	.byte 0x02,0x84,0x00,0x00	@ 000a26cc data
.org 0xa26d0
	.byte 0x28,0x1d,0x86,0x08	@ 000a26d0 data
.org 0xa26d4
	.byte 0xfd,0x2c,0x0a,0x08	@ 000a26d4 data
.org 0xa26d8
	.byte 0x90,0xed,0x02,0x02	@ 000a26d8 data
.org 0xa26dc
	.byte 0x40,0xdb,0x85,0x08	@ 000a26dc data
.org 0xa26e0
	movs r4, #0	@ 000a26e0 0024
.org 0xa26e2
	lsls r3, r4, #24	@ 000a26e2 2306
.org 0xa26e4
	lsrs r3, r3, #24	@ 000a26e4 1b0e
.org 0xa26e6
	adds r0, r6, #0	@ 000a26e6 301c
.org 0xa26e8
	adds r1, r5, #0	@ 000a26e8 291c
