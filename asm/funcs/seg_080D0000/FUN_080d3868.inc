@ FUN_080d3868  entry 0x080d3868  size 238
.thumb
.org 0xd3868
FUN_080d3868:
	push {r4, r5, r6, lr}	@ 000d3868 70b5
.org 0xd386a
	adds r5, r0, #0	@ 000d386a 051c
.org 0xd386c
	adds r1, r5, #0	@ 000d386c 291c
.org 0xd386e
	adds r1, #34	@ 000d386e 2231
.org 0xd3870
	movs r4, #1	@ 000d3870 0124
.org 0xd3872
	movs r0, #1	@ 000d3872 0120
.org 0xd3874
	strb r0, [r1, #0]	@ 000d3874 0870
.org 0xd3876
	adds r0, r5, #0	@ 000d3876 281c
.org 0xd3878
	bl 0x1cc9c	@ 000d3878 49f710fa
.org 0xd387c
	ldr r2, [pc, #32]	@ 000d387c 084a
.org 0xd387e
	ldr r1, [r2, #0]	@ 000d387e 1168
.org 0xd3880
	ldr r0, [pc, #32]	@ 000d3880 0848
.org 0xd3882
	muls r0, r1	@ 000d3882 4843
.org 0xd3884
	ldr r1, [pc, #32]	@ 000d3884 0849
.org 0xd3886
	adds r0, r0, r1	@ 000d3886 4018
.org 0xd3888
	lsls r0, r0, #1	@ 000d3888 4000
.org 0xd388a
	lsrs r1, r0, #1	@ 000d388a 4108
.org 0xd388c
	str r1, [r2, #0]	@ 000d388c 1160
.org 0xd388e
	lsrs r2, r0, #17	@ 000d388e 420c
.org 0xd3890
	ands r2, r4	@ 000d3890 2240
.org 0xd3892
	cmp r2, #0	@ 000d3892 002a
.org 0xd3894
	beq.n 0xd38ac	@ 000d3894 0ad0
.org 0xd3896
	ldrb r0, [r5, #10]	@ 000d3896 a87a
.org 0xd3898
	movs r1, #16	@ 000d3898 1021
.org 0xd389a
	orrs r0, r1	@ 000d389a 0843
.org 0xd389c
	b.n 0xd38b2	@ 000d389c 09e0
.org 0xd389e
	.byte 0x00	@ 000d389e data
.org 0xd389f
	.byte 0x00	@ 000d389f data
.org 0xd38a0
	.byte 0x38,0xdc,0x02,0x02	@ 000d38a0 data
.org 0xd38a4
	.byte 0xfd,0x43,0x03,0x00	@ 000d38a4 data
.org 0xd38a8
	.byte 0xc3,0x9e,0x26,0x00	@ 000d38a8 data
.org 0xd38ac
	ldrb r1, [r5, #10]	@ 000d38ac a97a
.org 0xd38ae
	movs r0, #239	@ 000d38ae ef20
.org 0xd38b0
	ands r0, r1	@ 000d38b0 0840
.org 0xd38b2
	strb r0, [r5, #10]	@ 000d38b2 a872
.org 0xd38b4
	movs r4, #1	@ 000d38b4 0124
.org 0xd38b6
	adds r1, r2, #0	@ 000d38b6 111c
.org 0xd38b8
	adds r0, r5, #0	@ 000d38b8 281c
.org 0xd38ba
	adds r0, #76	@ 000d38ba 4c30
.org 0xd38bc
	strb r1, [r0, #0]	@ 000d38bc 0170
.org 0xd38be
	adds r3, r5, #0	@ 000d38be 2b1c
.org 0xd38c0
	adds r3, #74	@ 000d38c0 4a33
.org 0xd38c2
	lsls r1, r1, #4	@ 000d38c2 0901
.org 0xd38c4
	ldrb r2, [r3, #0]	@ 000d38c4 1a78
.org 0xd38c6
	movs r0, #17	@ 000d38c6 1120
.org 0xd38c8
	negs r0, r0	@ 000d38c8 4042
.org 0xd38ca
	ands r0, r2	@ 000d38ca 1040
.org 0xd38cc
	orrs r0, r1	@ 000d38cc 0843
.org 0xd38ce
	strb r0, [r3, #0]	@ 000d38ce 1870
.org 0xd38d0
	ldr r2, [pc, #32]	@ 000d38d0 084a
.org 0xd38d2
	ldr r1, [r2, #0]	@ 000d38d2 1168
.org 0xd38d4
	ldr r0, [pc, #32]	@ 000d38d4 0848
.org 0xd38d6
	muls r0, r1	@ 000d38d6 4843
.org 0xd38d8
	ldr r1, [pc, #32]	@ 000d38d8 0849
.org 0xd38da
	adds r0, r0, r1	@ 000d38da 4018
.org 0xd38dc
	lsls r0, r0, #1	@ 000d38dc 4000
.org 0xd38de
	lsrs r1, r0, #1	@ 000d38de 4108
.org 0xd38e0
	str r1, [r2, #0]	@ 000d38e0 1160
.org 0xd38e2
	lsrs r6, r0, #17	@ 000d38e2 460c
.org 0xd38e4
	ands r6, r4	@ 000d38e4 2640
.org 0xd38e6
	adds r4, r2, #0	@ 000d38e6 141c
.org 0xd38e8
	cmp r6, #0	@ 000d38e8 002e
.org 0xd38ea
	beq.n 0xd3900	@ 000d38ea 09d0
.org 0xd38ec
	ldrb r0, [r5, #10]	@ 000d38ec a87a
.org 0xd38ee
	movs r1, #32	@ 000d38ee 2021
.org 0xd38f0
	orrs r0, r1	@ 000d38f0 0843
.org 0xd38f2
	b.n 0xd3906	@ 000d38f2 08e0
.org 0xd38f4
	.byte 0x38,0xdc,0x02,0x02	@ 000d38f4 data
.org 0xd38f8
	.byte 0xfd,0x43,0x03,0x00	@ 000d38f8 data
.org 0xd38fc
	.byte 0xc3,0x9e,0x26,0x00	@ 000d38fc data
.org 0xd3900
	ldrb r1, [r5, #10]	@ 000d3900 a97a
.org 0xd3902
	movs r0, #223	@ 000d3902 df20
.org 0xd3904
	ands r0, r1	@ 000d3904 0840
.org 0xd3906
	strb r0, [r5, #10]	@ 000d3906 a872
.org 0xd3908
	adds r1, r6, #0	@ 000d3908 311c
.org 0xd390a
	adds r2, r5, #0	@ 000d390a 2a1c
.org 0xd390c
	adds r2, #77	@ 000d390c 4d32
.org 0xd390e
	strb r1, [r2, #0]	@ 000d390e 1170
.org 0xd3910
	lsls r1, r1, #5	@ 000d3910 4901
.org 0xd3912
	ldrb r2, [r3, #0]	@ 000d3912 1a78
.org 0xd3914
	movs r0, #33	@ 000d3914 2120
.org 0xd3916
	negs r0, r0	@ 000d3916 4042
.org 0xd3918
	ands r0, r2	@ 000d3918 1040
.org 0xd391a
	orrs r0, r1	@ 000d391a 0843
.org 0xd391c
	strb r0, [r3, #0]	@ 000d391c 1870
.org 0xd391e
	ldr r1, [r4, #0]	@ 000d391e 2168
.org 0xd3920
	ldr r0, [pc, #32]	@ 000d3920 0848
.org 0xd3922
	muls r0, r1	@ 000d3922 4843
.org 0xd3924
	ldr r1, [pc, #32]	@ 000d3924 0849
.org 0xd3926
	adds r0, r0, r1	@ 000d3926 4018
.org 0xd3928
	lsls r0, r0, #1	@ 000d3928 4000
.org 0xd392a
	lsrs r1, r0, #1	@ 000d392a 4108
.org 0xd392c
	str r1, [r4, #0]	@ 000d392c 2160
.org 0xd392e
	lsrs r0, r0, #17	@ 000d392e 400c
.org 0xd3930
	movs r1, #3	@ 000d3930 0321
.org 0xd3932
	ands r0, r1	@ 000d3932 0840
.org 0xd3934
	cmp r0, #0	@ 000d3934 0028
.org 0xd3936
	bne.n 0xd3950	@ 000d3936 0bd1
.org 0xd3938
	ldr r1, [pc, #16]	@ 000d3938 0449
.org 0xd393a
	adds r0, r5, #0	@ 000d393a 281c
.org 0xd393c
	bl 0x1cf00	@ 000d393c 49f7e0fa
.org 0xd3940
	b.n 0xd3958	@ 000d3940 0ae0
.org 0xd3942
	.byte 0x00	@ 000d3942 data
.org 0xd3943
	.byte 0x00	@ 000d3943 data
.org 0xd3944
	.byte 0xfd,0x43,0x03,0x00	@ 000d3944 data
.org 0xd3948
	.byte 0xc3,0x9e,0x26,0x00	@ 000d3948 data
.org 0xd394c
	.byte 0x01,0x09,0x00,0x00	@ 000d394c data
.org 0xd3950
	ldr r1, [pc, #44]	@ 000d3950 0b49
.org 0xd3952
	adds r0, r5, #0	@ 000d3952 281c
.org 0xd3954
	bl 0x1cf00	@ 000d3954 49f7d4fa
