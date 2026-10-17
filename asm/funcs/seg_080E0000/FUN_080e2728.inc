@ FUN_080e2728  entry 0x080e2728  size 86
.thumb
.org 0xe2728
FUN_080e2728:
	push {r4, lr}	@ 000e2728 10b5
.org 0xe272a
	adds r4, r0, #0	@ 000e272a 041c
.org 0xe272c
	bl 0x1cff0	@ 000e272c 3af760fc
.org 0xe2730
	ldr r0, [r4, #84]	@ 000e2730 606d
.org 0xe2732
	ldr r1, [r4, #92]	@ 000e2732 e16d
.org 0xe2734
	adds r0, r0, r1	@ 000e2734 4018
.org 0xe2736
	str r0, [r4, #84]	@ 000e2736 6065
.org 0xe2738
	ldr r0, [r4, #88]	@ 000e2738 a06d
.org 0xe273a
	ldr r1, [r4, #96]	@ 000e273a 216e
.org 0xe273c
	adds r0, r0, r1	@ 000e273c 4018
.org 0xe273e
	str r0, [r4, #88]	@ 000e273e a065
.org 0xe2740
	adds r1, #64	@ 000e2740 4031
.org 0xe2742
	str r1, [r4, #96]	@ 000e2742 2166
.org 0xe2744
	movs r0, #224	@ 000e2744 e020
.org 0xe2746
	lsls r0, r0, #3	@ 000e2746 c000
.org 0xe2748
	cmp r1, r0	@ 000e2748 8142
.org 0xe274a
	ble.n 0xe274e	@ 000e274a 00dd
.org 0xe274c
	str r0, [r4, #96]	@ 000e274c 2066
.org 0xe274e
	ldr r0, [pc, #48]	@ 000e274e 0c48
.org 0xe2750
	adds r1, r4, #0	@ 000e2750 211c
.org 0xe2752
	adds r1, #84	@ 000e2752 5431
.org 0xe2754
	bl 0x1fb14	@ 000e2754 3df7def9
.org 0xe2758
	movs r1, #192	@ 000e2758 c021
.org 0xe275a
	lsls r1, r1, #5	@ 000e275a 4901
.org 0xe275c
	cmp r0, r1	@ 000e275c 8842
.org 0xe275e
	bls.n 0xe2778	@ 000e275e 0bd9
.org 0xe2760
	ldr r1, [pc, #32]	@ 000e2760 0849
.org 0xe2762
	ldrb r0, [r4, #9]	@ 000e2762 607a
.org 0xe2764
	lsls r0, r0, #2	@ 000e2764 8000
.org 0xe2766
	adds r0, r0, r1	@ 000e2766 4018
.org 0xe2768
	movs r1, #2	@ 000e2768 0221
.org 0xe276a
	str r1, [r4, #12]	@ 000e276a e160
.org 0xe276c
	ldr r0, [r0, #0]	@ 000e276c 0068
.org 0xe276e
	ldr r0, [r0, #8]	@ 000e276e 8068
.org 0xe2770
	str r0, [r4, #20]	@ 000e2770 6061
.org 0xe2772
	adds r0, r4, #0	@ 000e2772 201c
.org 0xe2774
	bl 0xe2788	@ 000e2774 00f008f8
.org 0xe2778
	pop {r4}	@ 000e2778 10bc
.org 0xe277a
	pop {r0}	@ 000e277a 01bc
.org 0xe277c
	bx r0	@ 000e277c 0047
