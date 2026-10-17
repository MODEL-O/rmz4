@ FUN_080c3738  entry 0x080c3738  size 334
.thumb
.org 0xc3738
FUN_080c3738:
	push {r4, r5, lr}	@ 000c3738 30b5
.org 0xc373a
	adds r4, r0, #0	@ 000c373a 041c
.org 0xc373c
	bl 0x1cff0	@ 000c373c 59f758fc
.org 0xc3740
	adds r1, r4, #0	@ 000c3740 211c
.org 0xc3742
	adds r1, #182	@ 000c3742 b631
.org 0xc3744
	adds r2, r4, #0	@ 000c3744 221c
.org 0xc3746
	adds r2, #181	@ 000c3746 b532
.org 0xc3748
	ldrb r0, [r2, #0]	@ 000c3748 1078
.org 0xc374a
	strb r0, [r1, #0]	@ 000c374a 0870
.org 0xc374c
	adds r5, r4, #0	@ 000c374c 251c
.org 0xc374e
	adds r5, #180	@ 000c374e b435
.org 0xc3750
	ldrb r0, [r5, #0]	@ 000c3750 2878
.org 0xc3752
	strb r0, [r2, #0]	@ 000c3752 1070
.org 0xc3754
	ldr r2, [pc, #72]	@ 000c3754 124a
.org 0xc3756
	ldrb r0, [r5, #0]	@ 000c3756 2878
.org 0xc3758
	adds r0, #64	@ 000c3758 4030
.org 0xc375a
	lsls r0, r0, #24	@ 000c375a 0006
.org 0xc375c
	lsrs r0, r0, #23	@ 000c375c c00d
.org 0xc375e
	adds r0, r0, r2	@ 000c375e 8018
.org 0xc3760
	movs r3, #0	@ 000c3760 0023
.org 0xc3762
	ldrsh r1, [r0, r3]	@ 000c3762 c15e
.org 0xc3764
	lsls r0, r1, #3	@ 000c3764 c800
.org 0xc3766
	subs r0, r0, r1	@ 000c3766 401a
.org 0xc3768
	asrs r3, r0, #1	@ 000c3768 4310
.org 0xc376a
	str r3, [r4, #92]	@ 000c376a e365
.org 0xc376c
	ldrb r0, [r5, #0]	@ 000c376c 2878
.org 0xc376e
	lsls r0, r0, #1	@ 000c376e 4000
.org 0xc3770
	adds r0, r0, r2	@ 000c3770 8018
.org 0xc3772
	movs r2, #0	@ 000c3772 0022
.org 0xc3774
	ldrsh r1, [r0, r2]	@ 000c3774 815e
.org 0xc3776
	lsls r0, r1, #3	@ 000c3776 c800
.org 0xc3778
	subs r0, r0, r1	@ 000c3778 401a
.org 0xc377a
	asrs r0, r0, #1	@ 000c377a 4010
.org 0xc377c
	str r0, [r4, #96]	@ 000c377c 2066
.org 0xc377e
	ldrb r0, [r4, #13]	@ 000c377e 607b
.org 0xc3780
	cmp r0, #0	@ 000c3780 0028
.org 0xc3782
	bne.n 0xc381c	@ 000c3782 4bd1
.org 0xc3784
	ldr r0, [r4, #84]	@ 000c3784 606d
.org 0xc3786
	adds r0, r0, r3	@ 000c3786 c018
.org 0xc3788
	ldr r1, [r4, #88]	@ 000c3788 a16d
.org 0xc378a
	bl 0x7c7c	@ 000c378a 44f777fa
.org 0xc378e
	lsls r0, r0, #16	@ 000c378e 0004
.org 0xc3790
	lsrs r1, r0, #16	@ 000c3790 010c
.org 0xc3792
	cmp r1, #1	@ 000c3792 0129
.org 0xc3794
	bne.n 0xc37ac	@ 000c3794 0ad1
.org 0xc3796
	ldr r0, [r4, #92]	@ 000c3796 e06d
.org 0xc3798
	cmp r0, #0	@ 000c3798 0028
.org 0xc379a
	ble.n 0xc37a4	@ 000c379a 03dd
.org 0xc379c
	movs r0, #80	@ 000c379c 5020
.org 0xc379e
	b.n 0xc37a6	@ 000c379e 02e0
.org 0xc37a0
	.byte 0x0c,0x93,0x12,0x08	@ 000c37a0 data
.org 0xc37a4
	movs r0, #48	@ 000c37a4 3020
.org 0xc37a6
	strb r0, [r5, #0]	@ 000c37a6 2870
.org 0xc37a8
	movs r0, #2	@ 000c37a8 0220
.org 0xc37aa
	b.n 0xc3812	@ 000c37aa 32e0
.org 0xc37ac
	ldr r0, [r4, #84]	@ 000c37ac 606d
.org 0xc37ae
	ldr r1, [r4, #92]	@ 000c37ae e16d
.org 0xc37b0
	adds r0, r0, r1	@ 000c37b0 4018
.org 0xc37b2
	ldr r1, [r4, #88]	@ 000c37b2 a16d
.org 0xc37b4
	ldr r2, [r4, #96]	@ 000c37b4 226e
.org 0xc37b6
	adds r1, r1, r2	@ 000c37b6 8918
.org 0xc37b8
	bl 0x7c7c	@ 000c37b8 44f760fa
.org 0xc37bc
	lsls r0, r0, #16	@ 000c37bc 0004
.org 0xc37be
	lsrs r1, r0, #16	@ 000c37be 010c
.org 0xc37c0
	cmp r1, #0	@ 000c37c0 0029
.org 0xc37c2
	beq.n 0xc3820	@ 000c37c2 2dd0
.org 0xc37c4
	cmp r1, #1	@ 000c37c4 0129
.org 0xc37c6
	bne.n 0xc37d6	@ 000c37c6 06d1
.org 0xc37c8
	ldr r0, [r4, #92]	@ 000c37c8 e06d
.org 0xc37ca
	cmp r0, #0	@ 000c37ca 0028
.org 0xc37cc
	ble.n 0xc37d2	@ 000c37cc 01dd
.org 0xc37ce
	movs r0, #240	@ 000c37ce f020
.org 0xc37d0
	b.n 0xc380e	@ 000c37d0 1de0
.org 0xc37d2
	movs r0, #144	@ 000c37d2 9020
.org 0xc37d4
	b.n 0xc380e	@ 000c37d4 1be0
.org 0xc37d6
	subs r0, r1, #2	@ 000c37d6 881e
.org 0xc37d8
	lsls r0, r0, #16	@ 000c37d8 0004
.org 0xc37da
	lsrs r0, r0, #16	@ 000c37da 000c
.org 0xc37dc
	cmp r0, #1	@ 000c37dc 0128
.org 0xc37de
	bls.n 0xc37e8	@ 000c37de 03d9
.org 0xc37e0
	cmp r1, #8	@ 000c37e0 0829
.org 0xc37e2
	beq.n 0xc37e8	@ 000c37e2 01d0
.org 0xc37e4
	cmp r1, #9	@ 000c37e4 0929
.org 0xc37e6
	bne.n 0xc3802	@ 000c37e6 0cd1
.org 0xc37e8
	ldr r0, [r4, #92]	@ 000c37e8 e06d
.org 0xc37ea
	cmp r0, #0	@ 000c37ea 0028
.org 0xc37ec
	ble.n 0xc37f8	@ 000c37ec 04dd
.org 0xc37ee
	adds r1, r4, #0	@ 000c37ee 211c
.org 0xc37f0
	adds r1, #180	@ 000c37f0 b431
.org 0xc37f2
	movs r0, #224	@ 000c37f2 e020
.org 0xc37f4
	strb r0, [r1, #0]	@ 000c37f4 0870
.org 0xc37f6
	b.n 0xc3810	@ 000c37f6 0be0
.org 0xc37f8
	adds r1, r4, #0	@ 000c37f8 211c
.org 0xc37fa
	adds r1, #180	@ 000c37fa b431
.org 0xc37fc
	movs r0, #160	@ 000c37fc a020
.org 0xc37fe
	strb r0, [r1, #0]	@ 000c37fe 0870
.org 0xc3800
	b.n 0xc3810	@ 000c3800 06e0
.org 0xc3802
	ldr r0, [r4, #92]	@ 000c3802 e06d
.org 0xc3804
	cmp r0, #0	@ 000c3804 0028
.org 0xc3806
	ble.n 0xc380c	@ 000c3806 01dd
.org 0xc3808
	movs r0, #232	@ 000c3808 e820
.org 0xc380a
	b.n 0xc380e	@ 000c380a 00e0
.org 0xc380c
	movs r0, #152	@ 000c380c 9820
.org 0xc380e
	strb r0, [r5, #0]	@ 000c380e 2870
.org 0xc3810
	movs r0, #3	@ 000c3810 0320
.org 0xc3812
	strb r0, [r4, #13]	@ 000c3812 6073
.org 0xc3814
	ldrb r0, [r4, #18]	@ 000c3814 a07c
.org 0xc3816
	adds r0, #1	@ 000c3816 0130
.org 0xc3818
	strb r0, [r4, #18]	@ 000c3818 a074
.org 0xc381a
	b.n 0xc3820	@ 000c381a 01e0
.org 0xc381c
	subs r0, #1	@ 000c381c 0138
.org 0xc381e
	strb r0, [r4, #13]	@ 000c381e 6073
.org 0xc3820
	ldr r0, [r4, #84]	@ 000c3820 606d
.org 0xc3822
	ldr r1, [r4, #92]	@ 000c3822 e16d
.org 0xc3824
	adds r0, r0, r1	@ 000c3824 4018
.org 0xc3826
	str r0, [r4, #84]	@ 000c3826 6065
.org 0xc3828
	ldr r0, [r4, #88]	@ 000c3828 a06d
.org 0xc382a
	ldr r1, [r4, #96]	@ 000c382a 216e
.org 0xc382c
	adds r0, r0, r1	@ 000c382c 4018
.org 0xc382e
	str r0, [r4, #88]	@ 000c382e a065
.org 0xc3830
	ldrb r0, [r4, #18]	@ 000c3830 a07c
.org 0xc3832
	cmp r0, #0	@ 000c3832 0028
.org 0xc3834
	beq.n 0xc3848	@ 000c3834 08d0
.org 0xc3836
	ldr r0, [pc, #84]	@ 000c3836 1548
.org 0xc3838
	adds r1, r4, #0	@ 000c3838 211c
.org 0xc383a
	adds r1, #84	@ 000c383a 5431
.org 0xc383c
	bl 0x1fb14	@ 000c383c 5cf76af9
.org 0xc3840
	movs r1, #128	@ 000c3840 8021
.org 0xc3842
	lsls r1, r1, #5	@ 000c3842 4901
.org 0xc3844
	cmp r0, r1	@ 000c3844 8842
.org 0xc3846
	bhi.n 0xc384e	@ 000c3846 02d8
.org 0xc3848
	ldrb r0, [r4, #18]	@ 000c3848 a07c
.org 0xc384a
	cmp r0, #1	@ 000c384a 0128
.org 0xc384c
	bls.n 0xc3884	@ 000c384c 1ad9
.org 0xc384e
	ldrb r1, [r4, #10]	@ 000c384e a17a
.org 0xc3850
	movs r0, #254	@ 000c3850 fe20
.org 0xc3852
	ands r0, r1	@ 000c3852 0840
.org 0xc3854
	movs r2, #0	@ 000c3854 0022
.org 0xc3856
	movs r1, #253	@ 000c3856 fd21
.org 0xc3858
	ands r0, r1	@ 000c3858 0840
.org 0xc385a
	strb r0, [r4, #10]	@ 000c385a a072
.org 0xc385c
	adds r0, r4, #0	@ 000c385c 201c
.org 0xc385e
	adds r0, #140	@ 000c385e 8c30
.org 0xc3860
	str r2, [r0, #0]	@ 000c3860 0260
.org 0xc3862
	adds r0, #4	@ 000c3862 0430
.org 0xc3864
	str r2, [r0, #0]	@ 000c3864 0260
.org 0xc3866
	adds r0, #4	@ 000c3866 0430
.org 0xc3868
	strb r2, [r0, #0]	@ 000c3868 0270
.org 0xc386a
	ldrb r1, [r4, #10]	@ 000c386a a17a
.org 0xc386c
	movs r0, #251	@ 000c386c fb20
.org 0xc386e
	ands r0, r1	@ 000c386e 0840
.org 0xc3870
	strb r0, [r4, #10]	@ 000c3870 a072
.org 0xc3872
	ldr r1, [pc, #28]	@ 000c3872 0749
.org 0xc3874
	ldrb r0, [r4, #9]	@ 000c3874 607a
.org 0xc3876
	lsls r0, r0, #2	@ 000c3876 8000
.org 0xc3878
	adds r0, r0, r1	@ 000c3878 4018
.org 0xc387a
	movs r1, #3	@ 000c387a 0321
.org 0xc387c
	str r1, [r4, #12]	@ 000c387c e160
.org 0xc387e
	ldr r0, [r0, #0]	@ 000c387e 0068
.org 0xc3880
	ldr r0, [r0, #12]	@ 000c3880 c068
.org 0xc3882
	str r0, [r4, #20]	@ 000c3882 6061
.org 0xc3884
	pop {r4, r5}	@ 000c3884 30bc
