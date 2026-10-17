@ FUN_080a3750  entry 0x080a3750  size 648
.thumb
.org 0xa3750
FUN_080a3750:
	push {r4, r5, r6, r7, lr}	@ 000a3750 f0b5
.org 0xa3752
	mov r7, r9	@ 000a3752 4f46
.org 0xa3754
	mov r6, r8	@ 000a3754 4646
.org 0xa3756
	push {r6, r7}	@ 000a3756 c0b4
.org 0xa3758
	sub sp, #24	@ 000a3758 86b0
.org 0xa375a
	adds r7, r0, #0	@ 000a375a 071c
.org 0xa375c
	ldr r5, [r7, #40]	@ 000a375c bd6a
.org 0xa375e
	ldrb r4, [r7, #13]	@ 000a375e 7c7b
.org 0xa3760
	cmp r4, #0	@ 000a3760 002c
.org 0xa3762
	bne.n 0xa37a2	@ 000a3762 1ed1
.org 0xa3764
	ldrb r1, [r7, #17]	@ 000a3764 797c
.org 0xa3766
	lsls r1, r1, #17	@ 000a3766 4904
.org 0xa3768
	ldr r0, [pc, #72]	@ 000a3768 1248
.org 0xa376a
	adds r1, r1, r0	@ 000a376a 0918
.org 0xa376c
	lsrs r1, r1, #16	@ 000a376c 090c
.org 0xa376e
	adds r0, r7, #0	@ 000a376e 381c
.org 0xa3770
	bl 0x1cf00	@ 000a3770 79f7c6fb
.org 0xa3774
	adds r0, r7, #0	@ 000a3774 381c
.org 0xa3776
	adds r0, #140	@ 000a3776 8c30
.org 0xa3778
	str r4, [r0, #0]	@ 000a3778 0460
.org 0xa377a
	adds r0, #4	@ 000a377a 0430
.org 0xa377c
	str r4, [r0, #0]	@ 000a377c 0460
.org 0xa377e
	adds r0, #4	@ 000a377e 0430
.org 0xa3780
	strb r4, [r0, #0]	@ 000a3780 0470
.org 0xa3782
	ldrb r1, [r7, #10]	@ 000a3782 b97a
.org 0xa3784
	movs r0, #251	@ 000a3784 fb20
.org 0xa3786
	ands r0, r1	@ 000a3786 0840
.org 0xa3788
	strb r0, [r7, #10]	@ 000a3788 b872
.org 0xa378a
	adds r1, r5, #0	@ 000a378a 291c
.org 0xa378c
	adds r1, #180	@ 000a378c b431
.org 0xa378e
	ldrb r0, [r7, #17]	@ 000a378e 787c
.org 0xa3790
	lsls r0, r0, #2	@ 000a3790 8000
.org 0xa3792
	adds r1, r1, r0	@ 000a3792 0918
.org 0xa3794
	str r4, [r1, #0]	@ 000a3794 0c60
.org 0xa3796
	movs r0, #128	@ 000a3796 8020
.org 0xa3798
	strb r0, [r7, #18]	@ 000a3798 b874
.org 0xa379a
	strb r4, [r7, #19]	@ 000a379a fc74
.org 0xa379c
	ldrb r0, [r7, #13]	@ 000a379c 787b
.org 0xa379e
	adds r0, #1	@ 000a379e 0130
.org 0xa37a0
	strb r0, [r7, #13]	@ 000a37a0 7873
.org 0xa37a2
	ldrb r6, [r7, #14]	@ 000a37a2 be7b
.org 0xa37a4
	cmp r6, #1	@ 000a37a4 012e
.org 0xa37a6
	bne.n 0xa37aa	@ 000a37a6 00d1
.org 0xa37a8
	b.n 0xa38a4	@ 000a37a8 7ce0
.org 0xa37aa
	cmp r6, #1	@ 000a37aa 012e
.org 0xa37ac
	bgt.n 0xa37b8	@ 000a37ac 04dc
.org 0xa37ae
	cmp r6, #0	@ 000a37ae 002e
.org 0xa37b0
	beq.n 0xa37c0	@ 000a37b0 06d0
.org 0xa37b2
	b.n 0xa39ee	@ 000a37b2 1ce1
.org 0xa37b4
	.byte 0x00,0x00,0x02,0x87	@ 000a37b4 data
.org 0xa37b8
	cmp r6, #2	@ 000a37b8 022e
.org 0xa37ba
	bne.n 0xa37be	@ 000a37ba 00d1
.org 0xa37bc
	b.n 0xa3952	@ 000a37bc c9e0
.org 0xa37be
	b.n 0xa39ee	@ 000a37be 16e1
.org 0xa37c0
	ldrb r1, [r7, #18]	@ 000a37c0 b97c
.org 0xa37c2
	movs r0, #7	@ 000a37c2 0720
.org 0xa37c4
	ands r0, r1	@ 000a37c4 0840
.org 0xa37c6
	cmp r0, #0	@ 000a37c6 0028
.org 0xa37c8
	bne.n 0xa383c	@ 000a37c8 38d1
.org 0xa37ca
	ldr r1, [pc, #144]	@ 000a37ca 2449
.org 0xa37cc
	mov r8, r1	@ 000a37cc 8846
.org 0xa37ce
	ldr r0, [r1, #0]	@ 000a37ce 0868
.org 0xa37d0
	ldr r4, [pc, #140]	@ 000a37d0 234c
.org 0xa37d2
	adds r1, r0, #0	@ 000a37d2 011c
.org 0xa37d4
	muls r1, r4	@ 000a37d4 6143
.org 0xa37d6
	ldr r3, [pc, #140]	@ 000a37d6 234b
.org 0xa37d8
	adds r1, r1, r3	@ 000a37d8 c918
.org 0xa37da
	lsls r1, r1, #1	@ 000a37da 4900
.org 0xa37dc
	lsrs r5, r1, #1	@ 000a37dc 4d08
.org 0xa37de
	lsrs r1, r1, #17	@ 000a37de 490c
.org 0xa37e0
	movs r2, #15	@ 000a37e0 0f22
.org 0xa37e2
	mov ip, r2	@ 000a37e2 9446
.org 0xa37e4
	ands r1, r2	@ 000a37e4 1140
.org 0xa37e6
	movs r2, #8	@ 000a37e6 0822
.org 0xa37e8
	subs r1, r2, r1	@ 000a37e8 511a
.org 0xa37ea
	lsls r1, r1, #8	@ 000a37ea 0902
.org 0xa37ec
	ldr r0, [r7, #84]	@ 000a37ec 786d
.org 0xa37ee
	adds r0, r0, r1	@ 000a37ee 4018
.org 0xa37f0
	str r0, [sp, #0]	@ 000a37f0 0090
.org 0xa37f2
	adds r0, r5, #0	@ 000a37f2 281c
.org 0xa37f4
	muls r0, r4	@ 000a37f4 6043
.org 0xa37f6
	adds r0, r0, r3	@ 000a37f6 c018
.org 0xa37f8
	lsls r0, r0, #1	@ 000a37f8 4000
.org 0xa37fa
	lsrs r1, r0, #1	@ 000a37fa 4108
.org 0xa37fc
	lsrs r0, r0, #17	@ 000a37fc 400c
.org 0xa37fe
	mov r5, ip	@ 000a37fe 6546
.org 0xa3800
	ands r0, r5	@ 000a3800 2840
.org 0xa3802
	subs r2, r2, r0	@ 000a3802 121a
.org 0xa3804
	lsls r2, r2, #8	@ 000a3804 1202
.org 0xa3806
	ldr r0, [r7, #88]	@ 000a3806 b86d
.org 0xa3808
	adds r0, r0, r2	@ 000a3808 8018
.org 0xa380a
	str r0, [sp, #4]	@ 000a380a 0190
.org 0xa380c
	muls r1, r4	@ 000a380c 6143
.org 0xa380e
	adds r1, r1, r3	@ 000a380e c918
.org 0xa3810
	lsls r1, r1, #1	@ 000a3810 4900
.org 0xa3812
	lsrs r0, r1, #1	@ 000a3812 4808
.org 0xa3814
	mov r2, r8	@ 000a3814 4246
.org 0xa3816
	str r0, [r2, #0]	@ 000a3816 1060
.org 0xa3818
	lsrs r1, r1, #17	@ 000a3818 490c
.org 0xa381a
	movs r0, #63	@ 000a381a 3f20
.org 0xa381c
	ands r1, r0	@ 000a381c 0140
.org 0xa381e
	ldrb r3, [r7, #19]	@ 000a381e fb7c
.org 0xa3820
	adds r1, r1, r3	@ 000a3820 c918
.org 0xa3822
	lsls r1, r1, #24	@ 000a3822 0906
.org 0xa3824
	lsrs r1, r1, #24	@ 000a3824 090e
.org 0xa3826
	movs r2, #128	@ 000a3826 8022
.org 0xa3828
	lsls r2, r2, #1	@ 000a3828 5200
.org 0xa382a
	mov r0, sp	@ 000a382a 6846
.org 0xa382c
	bl 0xe1b14	@ 000a382c 3ef072f9
.org 0xa3830
	movs r0, #53	@ 000a3830 3520
.org 0xa3832
	bl 0x2b10	@ 000a3832 5ff76df9
.org 0xa3836
	ldrb r0, [r7, #19]	@ 000a3836 f87c
.org 0xa3838
	adds r0, #64	@ 000a3838 4030
.org 0xa383a
	strb r0, [r7, #19]	@ 000a383a f874
.org 0xa383c
	ldrb r0, [r7, #18]	@ 000a383c b87c
.org 0xa383e
	subs r0, #1	@ 000a383e 0138
.org 0xa3840
	strb r0, [r7, #18]	@ 000a3840 b874
.org 0xa3842
	lsls r0, r0, #24	@ 000a3842 0006
.org 0xa3844
	lsrs r0, r0, #24	@ 000a3844 000e
.org 0xa3846
	cmp r0, #255	@ 000a3846 ff28
.org 0xa3848
	beq.n 0xa384c	@ 000a3848 00d0
.org 0xa384a
	b.n 0xa39ee	@ 000a384a d0e0
.org 0xa384c
	ldrb r0, [r7, #17]	@ 000a384c 787c
.org 0xa384e
	cmp r0, #1	@ 000a384e 0128
.org 0xa3850
	beq.n 0xa3880	@ 000a3850 16d0
.org 0xa3852
	cmp r0, #1	@ 000a3852 0128
.org 0xa3854
	bgt.n 0xa3868	@ 000a3854 08dc
.org 0xa3856
	cmp r0, #0	@ 000a3856 0028
.org 0xa3858
	beq.n 0xa3872	@ 000a3858 0bd0
.org 0xa385a
	b.n 0xa389e	@ 000a385a 20e0
.org 0xa385c
	.byte 0x38,0xdc,0x02,0x02	@ 000a385c data
.org 0xa3860
	.byte 0xfd,0x43,0x03,0x00	@ 000a3860 data
.org 0xa3864
	.byte 0xc3,0x9e,0x26,0x00	@ 000a3864 data
.org 0xa3868
	cmp r0, #2	@ 000a3868 0228
.org 0xa386a
	beq.n 0xa388c	@ 000a386a 0fd0
.org 0xa386c
	cmp r0, #3	@ 000a386c 0328
.org 0xa386e
	beq.n 0xa3894	@ 000a386e 11d0
.org 0xa3870
	b.n 0xa389e	@ 000a3870 15e0
.org 0xa3872
	movs r0, #32	@ 000a3872 2020
.org 0xa3874
	str r0, [r7, #104]	@ 000a3874 b866
.org 0xa3876
	str r6, [r7, #92]	@ 000a3876 fe65
.org 0xa3878
	negs r0, r0	@ 000a3878 4042
.org 0xa387a
	lsls r0, r0, #5	@ 000a387a 4001
.org 0xa387c
	str r0, [r7, #96]	@ 000a387c 3866
.org 0xa387e
	b.n 0xa389e	@ 000a387e 0ee0
.org 0xa3880
	str r6, [r7, #104]	@ 000a3880 be66
.org 0xa3882
	ldr r0, [pc, #4]	@ 000a3882 0148
.org 0xa3884
	b.n 0xa389a	@ 000a3884 09e0
.org 0xa3886
	.byte 0x00	@ 000a3886 data
.org 0xa3887
	.byte 0x00	@ 000a3887 data
.org 0xa3888
	.byte 0x40,0xfc,0xff,0xff	@ 000a3888 data
.org 0xa388c
	movs r0, #32	@ 000a388c 2020
.org 0xa388e
	str r0, [r7, #104]	@ 000a388e b866
.org 0xa3890
	str r6, [r7, #92]	@ 000a3890 fe65
.org 0xa3892
	b.n 0xa389c	@ 000a3892 03e0
.org 0xa3894
	str r6, [r7, #104]	@ 000a3894 be66
.org 0xa3896
	movs r0, #240	@ 000a3896 f020
.org 0xa3898
	lsls r0, r0, #2	@ 000a3898 8000
.org 0xa389a
	str r0, [r7, #92]	@ 000a389a f865
.org 0xa389c
	str r6, [r7, #96]	@ 000a389c 3e66
.org 0xa389e
	movs r0, #0	@ 000a389e 0020
.org 0xa38a0
	strb r0, [r7, #18]	@ 000a38a0 b874
.org 0xa38a2
	b.n 0xa394a	@ 000a38a2 52e0
.org 0xa38a4
	ldr r1, [r7, #84]	@ 000a38a4 796d
.org 0xa38a6
	ldr r0, [r7, #92]	@ 000a38a6 f86d
.org 0xa38a8
	adds r1, r1, r0	@ 000a38a8 0918
.org 0xa38aa
	mov r8, r1	@ 000a38aa 8846
.org 0xa38ac
	str r1, [r7, #84]	@ 000a38ac 7965
.org 0xa38ae
	ldr r1, [r7, #88]	@ 000a38ae b96d
.org 0xa38b0
	ldr r0, [r7, #96]	@ 000a38b0 386e
.org 0xa38b2
	adds r1, r1, r0	@ 000a38b2 0918
.org 0xa38b4
	mov ip, r1	@ 000a38b4 8c46
.org 0xa38b6
	str r1, [r7, #88]	@ 000a38b6 b965
.org 0xa38b8
	ldr r1, [r7, #104]	@ 000a38b8 b96e
.org 0xa38ba
	adds r0, r0, r1	@ 000a38ba 4018
.org 0xa38bc
	str r0, [r7, #96]	@ 000a38bc 3866
.org 0xa38be
	ldrb r1, [r7, #18]	@ 000a38be b97c
.org 0xa38c0
	adds r0, r1, #1	@ 000a38c0 481c
.org 0xa38c2
	strb r0, [r7, #18]	@ 000a38c2 b874
.org 0xa38c4
	movs r5, #7	@ 000a38c4 0725
.org 0xa38c6
	adds r0, r5, #0	@ 000a38c6 281c
.org 0xa38c8
	ands r0, r1	@ 000a38c8 0840
.org 0xa38ca
	cmp r0, #0	@ 000a38ca 0028
.org 0xa38cc
	bne.n 0xa390a	@ 000a38cc 1dd1
.org 0xa38ce
	ldr r4, [pc, #76]	@ 000a38ce 134c
.org 0xa38d0
	ldr r0, [r4, #0]	@ 000a38d0 2068
.org 0xa38d2
	ldr r3, [pc, #76]	@ 000a38d2 134b
.org 0xa38d4
	muls r0, r3	@ 000a38d4 5843
.org 0xa38d6
	ldr r2, [pc, #76]	@ 000a38d6 134a
.org 0xa38d8
	adds r0, r0, r2	@ 000a38d8 8018
.org 0xa38da
	lsls r0, r0, #1	@ 000a38da 4000
.org 0xa38dc
	lsrs r1, r0, #1	@ 000a38dc 4108
.org 0xa38de
	lsrs r0, r0, #17	@ 000a38de 400c
.org 0xa38e0
	ands r0, r5	@ 000a38e0 2840
.org 0xa38e2
	subs r0, #4	@ 000a38e2 0438
.org 0xa38e4
	lsls r0, r0, #8	@ 000a38e4 0002
.org 0xa38e6
	add r0, r8	@ 000a38e6 4044
.org 0xa38e8
	str r0, [sp, #8]	@ 000a38e8 0290
.org 0xa38ea
	adds r0, r1, #0	@ 000a38ea 081c
.org 0xa38ec
	muls r0, r3	@ 000a38ec 5843
.org 0xa38ee
	adds r0, r0, r2	@ 000a38ee 8018
.org 0xa38f0
	lsls r0, r0, #1	@ 000a38f0 4000
.org 0xa38f2
	lsrs r1, r0, #1	@ 000a38f2 4108
.org 0xa38f4
	str r1, [r4, #0]	@ 000a38f4 2160
.org 0xa38f6
	lsrs r0, r0, #17	@ 000a38f6 400c
.org 0xa38f8
	ands r0, r5	@ 000a38f8 2840
.org 0xa38fa
	subs r0, #4	@ 000a38fa 0438
.org 0xa38fc
	lsls r0, r0, #8	@ 000a38fc 0002
.org 0xa38fe
	add r0, ip	@ 000a38fe 6044
.org 0xa3900
	add r1, sp, #8	@ 000a3900 02a9
.org 0xa3902
	str r0, [r1, #4]	@ 000a3902 4860
.org 0xa3904
	movs r0, #1	@ 000a3904 0120
.org 0xa3906
	bl 0xd0c88	@ 000a3906 2df0bff9
.org 0xa390a
	ldrb r0, [r7, #18]	@ 000a390a b87c
.org 0xa390c
	ands r6, r0	@ 000a390c 0640
.org 0xa390e
	cmp r6, #0	@ 000a390e 002e
.org 0xa3910
	beq.n 0xa3928	@ 000a3910 0ad0
.org 0xa3912
	ldrb r1, [r7, #10]	@ 000a3912 b97a
.org 0xa3914
	movs r0, #1	@ 000a3914 0120
.org 0xa3916
	orrs r0, r1	@ 000a3916 0843
.org 0xa3918
	b.n 0xa392e	@ 000a3918 09e0
.org 0xa391a
	.byte 0x00	@ 000a391a data
.org 0xa391b
	.byte 0x00	@ 000a391b data
.org 0xa391c
	.byte 0x38,0xdc,0x02,0x02	@ 000a391c data
.org 0xa3920
	.byte 0xfd,0x43,0x03,0x00	@ 000a3920 data
.org 0xa3924
	.byte 0xc3,0x9e,0x26,0x00	@ 000a3924 data
.org 0xa3928
	ldrb r1, [r7, #10]	@ 000a3928 b97a
.org 0xa392a
	movs r0, #254	@ 000a392a fe20
.org 0xa392c
	ands r0, r1	@ 000a392c 0840
.org 0xa392e
	strb r0, [r7, #10]	@ 000a392e b872
.org 0xa3930
	ldr r0, [r7, #84]	@ 000a3930 786d
.org 0xa3932
	ldr r1, [r7, #88]	@ 000a3932 b96d
.org 0xa3934
	bl 0x7c7c	@ 000a3934 64f7a2f9
.org 0xa3938
	lsls r0, r0, #16	@ 000a3938 0004
.org 0xa393a
	cmp r0, #0	@ 000a393a 0028
.org 0xa393c
	beq.n 0xa39ee	@ 000a393c 57d0
.org 0xa393e
	ldrb r1, [r7, #10]	@ 000a393e b97a
.org 0xa3940
	movs r0, #254	@ 000a3940 fe20
.org 0xa3942
	ands r0, r1	@ 000a3942 0840
.org 0xa3944
	movs r1, #0	@ 000a3944 0021
.org 0xa3946
	strb r0, [r7, #10]	@ 000a3946 b872
.org 0xa3948
	strb r1, [r7, #18]	@ 000a3948 b974
.org 0xa394a
	ldrb r0, [r7, #14]	@ 000a394a b87b
.org 0xa394c
	adds r0, #1	@ 000a394c 0130
.org 0xa394e
	strb r0, [r7, #14]	@ 000a394e b873
.org 0xa3950
	b.n 0xa39ee	@ 000a3950 4de0
.org 0xa3952
	ldrb r1, [r7, #18]	@ 000a3952 b97c
.org 0xa3954
	movs r5, #15	@ 000a3954 0f25
.org 0xa3956
	mov r8, r5	@ 000a3956 a846
.org 0xa3958
	mov r0, r8	@ 000a3958 4046
.org 0xa395a
	ands r0, r1	@ 000a395a 0840
.org 0xa395c
	cmp r0, #0	@ 000a395c 0028
.org 0xa395e
	bne.n 0xa39ce	@ 000a395e 36d1
.org 0xa3960
	ldr r0, [pc, #152]	@ 000a3960 2648
.org 0xa3962
	mov r9, r0	@ 000a3962 8146
.org 0xa3964
	ldr r0, [r0, #0]	@ 000a3964 0068
.org 0xa3966
	ldr r1, [pc, #152]	@ 000a3966 2649
.org 0xa3968
	mov ip, r1	@ 000a3968 8c46
.org 0xa396a
	mov r2, ip	@ 000a396a 6246
.org 0xa396c
	muls r2, r0	@ 000a396c 4243
.org 0xa396e
	adds r0, r2, #0	@ 000a396e 101c
.org 0xa3970
	ldr r3, [pc, #144]	@ 000a3970 244b
.org 0xa3972
	adds r0, r0, r3	@ 000a3972 c018
.org 0xa3974
	lsls r0, r0, #1	@ 000a3974 4000
.org 0xa3976
	lsrs r4, r0, #1	@ 000a3976 4408
.org 0xa3978
	lsrs r0, r0, #17	@ 000a3978 400c
.org 0xa397a
	ands r0, r5	@ 000a397a 2840
.org 0xa397c
	movs r2, #8	@ 000a397c 0822
.org 0xa397e
	subs r0, r2, r0	@ 000a397e 101a
.org 0xa3980
	lsls r0, r0, #8	@ 000a3980 0002
.org 0xa3982
	ldr r1, [r7, #84]	@ 000a3982 796d
.org 0xa3984
	adds r1, r1, r0	@ 000a3984 0918
.org 0xa3986
	str r1, [sp, #16]	@ 000a3986 0491
.org 0xa3988
	mov r0, ip	@ 000a3988 6046
.org 0xa398a
	muls r0, r4	@ 000a398a 6043
.org 0xa398c
	adds r0, r0, r3	@ 000a398c c018
.org 0xa398e
	lsls r0, r0, #1	@ 000a398e 4000
.org 0xa3990
	lsrs r1, r0, #1	@ 000a3990 4108
.org 0xa3992
	mov r3, r9	@ 000a3992 4b46
.org 0xa3994
	str r1, [r3, #0]	@ 000a3994 1960
.org 0xa3996
	lsrs r0, r0, #17	@ 000a3996 400c
.org 0xa3998
	ands r0, r5	@ 000a3998 2840
.org 0xa399a
	subs r2, r2, r0	@ 000a399a 121a
.org 0xa399c
	lsls r2, r2, #8	@ 000a399c 1202
.org 0xa399e
	ldr r0, [r7, #88]	@ 000a399e b86d
.org 0xa39a0
	adds r0, r0, r2	@ 000a39a0 8018
.org 0xa39a2
	add r4, sp, #16	@ 000a39a2 04ac
.org 0xa39a4
	str r0, [r4, #4]	@ 000a39a4 6060
.org 0xa39a6
	ldrb r1, [r7, #18]	@ 000a39a6 b97c
.org 0xa39a8
	lsls r1, r1, #28	@ 000a39a8 0907
.org 0xa39aa
	lsrs r1, r1, #24	@ 000a39aa 090e
.org 0xa39ac
	movs r6, #128	@ 000a39ac 8026
.org 0xa39ae
	lsls r6, r6, #1	@ 000a39ae 7600
.org 0xa39b0
	adds r0, r4, #0	@ 000a39b0 201c
.org 0xa39b2
	adds r2, r6, #0	@ 000a39b2 321c
.org 0xa39b4
	bl 0xe1b14	@ 000a39b4 3ef0aef8
.org 0xa39b8
	ldrb r1, [r7, #18]	@ 000a39b8 b97c
.org 0xa39ba
	lsls r1, r1, #28	@ 000a39ba 0907
.org 0xa39bc
	lsrs r1, r1, #24	@ 000a39bc 090e
.org 0xa39be
	adds r0, r4, #0	@ 000a39be 201c
.org 0xa39c0
	adds r2, r6, #0	@ 000a39c0 321c
.org 0xa39c2
	movs r3, #64	@ 000a39c2 4023
.org 0xa39c4
	bl 0xe1c2c	@ 000a39c4 3ef032f9
.org 0xa39c8
	movs r0, #53	@ 000a39c8 3520
.org 0xa39ca
	bl 0x2b10	@ 000a39ca 5ff7a1f8
.org 0xa39ce
	ldrb r0, [r7, #18]	@ 000a39ce b87c
.org 0xa39d0
	adds r1, r0, #1	@ 000a39d0 411c
.org 0xa39d2
	strb r1, [r7, #18]	@ 000a39d2 b974
.org 0xa39d4
	lsls r0, r0, #24	@ 000a39d4 0006
.org 0xa39d6
	lsrs r0, r0, #24	@ 000a39d6 000e
