@ FUN_080c2640  entry 0x080c2640  size 316
.thumb
.org 0xc2640
FUN_080c2640:
	push {r4, r5, r6, r7, lr}	@ 000c2640 f0b5
.org 0xc2642
	mov r7, sl	@ 000c2642 5746
.org 0xc2644
	mov r6, r9	@ 000c2644 4e46
.org 0xc2646
	mov r5, r8	@ 000c2646 4546
.org 0xc2648
	push {r5, r6, r7}	@ 000c2648 e0b4
.org 0xc264a
	sub sp, #16	@ 000c264a 84b0
.org 0xc264c
	adds r7, r0, #0	@ 000c264c 071c
.org 0xc264e
	ldr r0, [r7, #40]	@ 000c264e b86a
.org 0xc2650
	mov r8, r0	@ 000c2650 8046
.org 0xc2652
	ldrb r0, [r0, #10]	@ 000c2652 807a
.org 0xc2654
	lsrs r0, r0, #4	@ 000c2654 0009
.org 0xc2656
	mov sl, r0	@ 000c2656 8246
.org 0xc2658
	movs r0, #1	@ 000c2658 0120
.org 0xc265a
	mov r1, sl	@ 000c265a 5146
.org 0xc265c
	ands r1, r0	@ 000c265c 0140
.org 0xc265e
	mov sl, r1	@ 000c265e 8a46
.org 0xc2660
	ldrb r1, [r7, #18]	@ 000c2660 b97c
.org 0xc2662
	movs r0, #31	@ 000c2662 1f20
.org 0xc2664
	ands r0, r1	@ 000c2664 0840
.org 0xc2666
	cmp r0, #0	@ 000c2666 0028
.org 0xc2668
	bne.n 0xc2670	@ 000c2668 02d1
.org 0xc266a
	movs r0, #183	@ 000c266a b720
.org 0xc266c
	bl 0x2b10	@ 000c266c 40f750fa
.org 0xc2670
	ldrb r0, [r7, #18]	@ 000c2670 b87c
.org 0xc2672
	adds r0, #1	@ 000c2672 0130
.org 0xc2674
	strb r0, [r7, #18]	@ 000c2674 b874
.org 0xc2676
	mov r0, r8	@ 000c2676 4046
.org 0xc2678
	ldr r2, [r0, #84]	@ 000c2678 426d
.org 0xc267a
	ldrb r1, [r0, #10]	@ 000c267a 817a
.org 0xc267c
	movs r0, #16	@ 000c267c 1020
.org 0xc267e
	ands r0, r1	@ 000c267e 0840
.org 0xc2680
	cmp r0, #0	@ 000c2680 0028
.org 0xc2682
	beq.n 0xc268a	@ 000c2682 02d0
.org 0xc2684
	movs r1, #192	@ 000c2684 c021
.org 0xc2686
	lsls r1, r1, #4	@ 000c2686 0901
.org 0xc2688
	b.n 0xc268c	@ 000c2688 00e0
.org 0xc268a
	ldr r1, [pc, #56]	@ 000c268a 0e49
.org 0xc268c
	adds r0, r2, r1	@ 000c268c 5018
.org 0xc268e
	str r0, [sp, #0]	@ 000c268e 0090
.org 0xc2690
	mov r2, r8	@ 000c2690 4246
.org 0xc2692
	ldr r0, [r2, #88]	@ 000c2692 906d
.org 0xc2694
	ldr r1, [pc, #48]	@ 000c2694 0c49
.org 0xc2696
	adds r1, r0, r1	@ 000c2696 4118
.org 0xc2698
	str r1, [sp, #4]	@ 000c2698 0191
.org 0xc269a
	adds r0, r7, #0	@ 000c269a 381c
.org 0xc269c
	adds r0, #190	@ 000c269c be30
.org 0xc269e
	ldrb r1, [r0, #0]	@ 000c269e 0178
.org 0xc26a0
	adds r4, r0, #0	@ 000c26a0 041c
.org 0xc26a2
	cmp r1, #0	@ 000c26a2 0029
.org 0xc26a4
	beq.n 0xc26cc	@ 000c26a4 12d0
.org 0xc26a6
	subs r0, r1, #1	@ 000c26a6 481e
.org 0xc26a8
	strb r0, [r4, #0]	@ 000c26a8 2070
.org 0xc26aa
	ldrb r1, [r7, #18]	@ 000c26aa b97c
.org 0xc26ac
	movs r0, #1	@ 000c26ac 0120
.org 0xc26ae
	ands r0, r1	@ 000c26ae 0840
.org 0xc26b0
	movs r2, #188	@ 000c26b0 bc22
.org 0xc26b2
	adds r2, r2, r7	@ 000c26b2 d219
.org 0xc26b4
	mov r9, r2	@ 000c26b4 9146
.org 0xc26b6
	cmp r0, #0	@ 000c26b6 0028
.org 0xc26b8
	bne.n 0xc26e8	@ 000c26b8 16d1
.org 0xc26ba
	adds r0, r7, #0	@ 000c26ba 381c
.org 0xc26bc
	bl 0xc24a4	@ 000c26bc fff7f2fe
.org 0xc26c0
	b.n 0xc26e8	@ 000c26c0 12e0
.org 0xc26c2
	.byte 0x00	@ 000c26c2 data
.org 0xc26c3
	.byte 0x00	@ 000c26c3 data
.org 0xc26c4
	.byte 0x00,0xf4,0xff,0xff	@ 000c26c4 data
.org 0xc26c8
	.byte 0x00,0xe0,0xff,0xff	@ 000c26c8 data
.org 0xc26cc
	adds r1, r7, #0	@ 000c26cc 391c
.org 0xc26ce
	adds r1, #188	@ 000c26ce bc31
.org 0xc26d0
	ldrb r0, [r1, #0]	@ 000c26d0 0878
.org 0xc26d2
	adds r0, #8	@ 000c26d2 0830
.org 0xc26d4
	strb r0, [r1, #0]	@ 000c26d4 0870
.org 0xc26d6
	ldrb r2, [r7, #18]	@ 000c26d6 ba7c
.org 0xc26d8
	movs r0, #3	@ 000c26d8 0320
.org 0xc26da
	ands r0, r2	@ 000c26da 1040
.org 0xc26dc
	mov r9, r1	@ 000c26dc 8946
.org 0xc26de
	cmp r0, #0	@ 000c26de 0028
.org 0xc26e0
	bne.n 0xc26e8	@ 000c26e0 02d1
.org 0xc26e2
	adds r0, r7, #0	@ 000c26e2 381c
.org 0xc26e4
	bl 0xc24a4	@ 000c26e4 fff7defe
.org 0xc26e8
	ldrb r0, [r4, #0]	@ 000c26e8 2078
.org 0xc26ea
	movs r1, #16	@ 000c26ea 1021
.org 0xc26ec
	subs r4, r1, r0	@ 000c26ec 0c1a
.org 0xc26ee
	lsls r5, r4, #9	@ 000c26ee 6502
.org 0xc26f0
	adds r0, r7, #0	@ 000c26f0 381c
.org 0xc26f2
	adds r0, #192	@ 000c26f2 c030
.org 0xc26f4
	ldr r0, [r0, #0]	@ 000c26f4 0068
.org 0xc26f6
	muls r0, r4	@ 000c26f6 6043
.org 0xc26f8
	cmp r0, #0	@ 000c26f8 0028
.org 0xc26fa
	bge.n 0xc26fe	@ 000c26fa 00da
.org 0xc26fc
	adds r0, #15	@ 000c26fc 0f30
.org 0xc26fe
	asrs r0, r0, #4	@ 000c26fe 0011
.org 0xc2700
	adds r6, r0, #0	@ 000c2700 061c
.org 0xc2702
	cmp r0, #0	@ 000c2702 0028
.org 0xc2704
	bne.n 0xc2708	@ 000c2704 00d1
.org 0xc2706
	movs r6, #1	@ 000c2706 0126
.org 0xc2708
	ldr r1, [pc, #84]	@ 000c2708 1549
.org 0xc270a
	mov r2, r9	@ 000c270a 4a46
.org 0xc270c
	ldrb r0, [r2, #0]	@ 000c270c 1078
.org 0xc270e
	lsls r0, r0, #1	@ 000c270e 4000
.org 0xc2710
	adds r0, r0, r1	@ 000c2710 4018
.org 0xc2712
	movs r2, #0	@ 000c2712 0022
.org 0xc2714
	ldrsh r1, [r0, r2]	@ 000c2714 815e
.org 0xc2716
	lsls r0, r1, #1	@ 000c2716 4800
.org 0xc2718
	adds r0, r0, r1	@ 000c2718 4018
.org 0xc271a
	lsls r0, r0, #3	@ 000c271a c000
.org 0xc271c
	ldr r1, [pc, #68]	@ 000c271c 1149
.org 0xc271e
	adds r0, r0, r1	@ 000c271e 4018
.org 0xc2720
	adds r4, r0, r6	@ 000c2720 8419
.org 0xc2722
	adds r0, r4, #0	@ 000c2722 201c
.org 0xc2724
	muls r0, r5	@ 000c2724 6843
.org 0xc2726
	adds r1, r6, #0	@ 000c2726 311c
.org 0xc2728
	bl 0x128fb8	@ 000c2728 66f046fc
.org 0xc272c
	adds r5, r0, #0	@ 000c272c 051c
.org 0xc272e
	adds r6, r4, #0	@ 000c272e 261c
.org 0xc2730
	adds r1, r7, #0	@ 000c2730 391c
.org 0xc2732
	adds r1, #180	@ 000c2732 b431
.org 0xc2734
	mov r2, sl	@ 000c2734 5246
.org 0xc2736
	lsls r0, r2, #1	@ 000c2736 5000
.org 0xc2738
	subs r0, #1	@ 000c2738 0138
.org 0xc273a
	muls r0, r5	@ 000c273a 6843
.org 0xc273c
	ldr r2, [sp, #0]	@ 000c273c 009a
.org 0xc273e
	adds r0, r0, r2	@ 000c273e 8018
.org 0xc2740
	str r0, [r1, #0]	@ 000c2740 0860
.org 0xc2742
	adds r1, #4	@ 000c2742 0431
.org 0xc2744
	ldr r2, [sp, #4]	@ 000c2744 019a
.org 0xc2746
	adds r0, r2, r6	@ 000c2746 9019
.org 0xc2748
	str r0, [r1, #0]	@ 000c2748 0860
.org 0xc274a
	mov r0, r8	@ 000c274a 4046
.org 0xc274c
	ldr r2, [r0, #84]	@ 000c274c 426d
.org 0xc274e
	ldrb r1, [r0, #10]	@ 000c274e 817a
.org 0xc2750
	movs r0, #16	@ 000c2750 1020
.org 0xc2752
	ands r0, r1	@ 000c2752 0840
.org 0xc2754
	cmp r0, #0	@ 000c2754 0028
.org 0xc2756
	beq.n 0xc2768	@ 000c2756 07d0
.org 0xc2758
	movs r1, #192	@ 000c2758 c021
.org 0xc275a
	lsls r1, r1, #4	@ 000c275a 0901
.org 0xc275c
	b.n 0xc276a	@ 000c275c 05e0
.org 0xc275e
	.byte 0x00	@ 000c275e data
.org 0xc275f
	.byte 0x00	@ 000c275f data
.org 0xc2760
	.byte 0x0c,0x93,0x12,0x08	@ 000c2760 data
.org 0xc2764
	.byte 0x00,0xe8,0xff,0xff	@ 000c2764 data
.org 0xc2768
	ldr r1, [pc, #36]	@ 000c2768 0949
.org 0xc276a
	adds r0, r2, r1	@ 000c276a 5018
.org 0xc276c
	str r0, [sp, #8]	@ 000c276c 0290
.org 0xc276e
	mov r2, r8	@ 000c276e 4246
.org 0xc2770
	ldr r0, [r2, #88]	@ 000c2770 906d
.org 0xc2772
	ldr r1, [pc, #32]	@ 000c2772 0849
.org 0xc2774
	adds r1, r0, r1	@ 000c2774 4118
.org 0xc2776
	str r1, [sp, #12]	@ 000c2776 0391
.org 0xc2778
	ldr r0, [sp, #8]	@ 000c2778 0298
.org 0xc277a
	ldr r1, [sp, #12]	@ 000c277a 0399
