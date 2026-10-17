@ FUN_080d2690  entry 0x080d2690  size 170
.thumb
.org 0xd2690
FUN_080d2690:
	push {r4, r5, r6, r7, lr}	@ 000d2690 f0b5
.org 0xd2692
	adds r6, r0, #0	@ 000d2692 061c
.org 0xd2694
	ldr r7, [pc, #164]	@ 000d2694 294f
.org 0xd2696
	ldr r0, [r7, #0]	@ 000d2696 3868
.org 0xd2698
	bl 0x5500	@ 000d2698 32f732ff
.org 0xd269c
	adds r5, r0, #0	@ 000d269c 051c
.org 0xd269e
	cmp r5, #0	@ 000d269e 002d
.org 0xd26a0
	beq.n 0xd26ca	@ 000d26a0 13d0
.org 0xd26a2
	adds r1, r5, #0	@ 000d26a2 291c
.org 0xd26a4
	adds r1, #37	@ 000d26a4 2531
.org 0xd26a6
	movs r2, #0	@ 000d26a6 0022
.org 0xd26a8
	movs r0, #1	@ 000d26a8 0120
.org 0xd26aa
	strb r0, [r1, #0]	@ 000d26aa 0870
.org 0xd26ac
	ldr r1, [pc, #144]	@ 000d26ac 2449
.org 0xd26ae
	movs r0, #6	@ 000d26ae 0620
.org 0xd26b0
	strb r0, [r5, #9]	@ 000d26b0 6872
.org 0xd26b2
	ldr r0, [r1, #24]	@ 000d26b2 8869
.org 0xd26b4
	ldr r0, [r0, #0]	@ 000d26b4 0068
.org 0xd26b6
	str r0, [r5, #20]	@ 000d26b6 6861
.org 0xd26b8
	movs r0, #0	@ 000d26b8 0020
.org 0xd26ba
	strh r2, [r5, #32]	@ 000d26ba 2a84
.org 0xd26bc
	adds r1, r5, #0	@ 000d26bc 291c
.org 0xd26be
	adds r1, #34	@ 000d26be 2231
.org 0xd26c0
	strb r0, [r1, #0]	@ 000d26c0 0870
.org 0xd26c2
	strb r0, [r5, #16]	@ 000d26c2 2874
.org 0xd26c4
	strb r0, [r5, #17]	@ 000d26c4 6874
.org 0xd26c6
	str r6, [r5, #40]	@ 000d26c6 ae62
.org 0xd26c8
	str r6, [r5, #44]	@ 000d26c8 ee62
.org 0xd26ca
	ldr r0, [r7, #0]	@ 000d26ca 3868
.org 0xd26cc
	bl 0x5500	@ 000d26cc 32f718ff
.org 0xd26d0
	adds r4, r0, #0	@ 000d26d0 041c
.org 0xd26d2
	cmp r4, #0	@ 000d26d2 002c
.org 0xd26d4
	beq.n 0xd26fc	@ 000d26d4 12d0
.org 0xd26d6
	adds r0, #37	@ 000d26d6 2530
.org 0xd26d8
	movs r3, #0	@ 000d26d8 0023
.org 0xd26da
	movs r2, #1	@ 000d26da 0122
.org 0xd26dc
	strb r2, [r0, #0]	@ 000d26dc 0270
.org 0xd26de
	ldr r1, [pc, #96]	@ 000d26de 1849
.org 0xd26e0
	movs r0, #6	@ 000d26e0 0620
.org 0xd26e2
	strb r0, [r4, #9]	@ 000d26e2 6072
.org 0xd26e4
	ldr r0, [r1, #24]	@ 000d26e4 8869
.org 0xd26e6
	ldr r0, [r0, #0]	@ 000d26e6 0068
.org 0xd26e8
	str r0, [r4, #20]	@ 000d26e8 6061
.org 0xd26ea
	movs r0, #0	@ 000d26ea 0020
.org 0xd26ec
	strh r3, [r4, #32]	@ 000d26ec 2384
.org 0xd26ee
	adds r1, r4, #0	@ 000d26ee 211c
.org 0xd26f0
	adds r1, #34	@ 000d26f0 2231
.org 0xd26f2
	strb r0, [r1, #0]	@ 000d26f2 0870
.org 0xd26f4
	strb r2, [r4, #16]	@ 000d26f4 2274
.org 0xd26f6
	strb r0, [r4, #17]	@ 000d26f6 6074
.org 0xd26f8
	str r5, [r4, #40]	@ 000d26f8 a562
.org 0xd26fa
	str r6, [r4, #44]	@ 000d26fa e662
.org 0xd26fc
	ldr r0, [r7, #0]	@ 000d26fc 3868
.org 0xd26fe
	bl 0x5500	@ 000d26fe 32f7fffe
.org 0xd2702
	adds r3, r0, #0	@ 000d2702 031c
.org 0xd2704
	cmp r3, #0	@ 000d2704 002b
.org 0xd2706
	beq.n 0xd2732	@ 000d2706 14d0
.org 0xd2708
	adds r1, r3, #0	@ 000d2708 191c
.org 0xd270a
	adds r1, #37	@ 000d270a 2531
.org 0xd270c
	movs r2, #0	@ 000d270c 0022
.org 0xd270e
	movs r0, #1	@ 000d270e 0120
.org 0xd2710
	strb r0, [r1, #0]	@ 000d2710 0870
.org 0xd2712
	ldr r1, [pc, #44]	@ 000d2712 0b49
.org 0xd2714
	movs r0, #6	@ 000d2714 0620
.org 0xd2716
	strb r0, [r3, #9]	@ 000d2716 5872
.org 0xd2718
	ldr r0, [r1, #24]	@ 000d2718 8869
.org 0xd271a
	ldr r0, [r0, #0]	@ 000d271a 0068
.org 0xd271c
	str r0, [r3, #20]	@ 000d271c 5861
.org 0xd271e
	movs r1, #0	@ 000d271e 0021
.org 0xd2720
	strh r2, [r3, #32]	@ 000d2720 1a84
.org 0xd2722
	adds r0, r3, #0	@ 000d2722 181c
.org 0xd2724
	adds r0, #34	@ 000d2724 2230
.org 0xd2726
	strb r1, [r0, #0]	@ 000d2726 0170
.org 0xd2728
	movs r0, #2	@ 000d2728 0220
.org 0xd272a
	strb r0, [r3, #16]	@ 000d272a 1874
.org 0xd272c
	strb r1, [r3, #17]	@ 000d272c 5974
.org 0xd272e
	str r4, [r3, #40]	@ 000d272e 9c62
.org 0xd2730
	str r6, [r3, #44]	@ 000d2730 de62
.org 0xd2732
	adds r0, r5, #0	@ 000d2732 281c
.org 0xd2734
	pop {r4, r5, r6, r7}	@ 000d2734 f0bc
.org 0xd2736
	pop {r1}	@ 000d2736 02bc
.org 0xd2738
	bx r1	@ 000d2738 0847
