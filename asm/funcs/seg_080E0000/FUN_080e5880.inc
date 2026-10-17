@ FUN_080e5880  entry 0x080e5880  size 300
.thumb
.org 0xe5880
FUN_080e5880:
	push {r4, r5, r6, r7, lr}	@ 000e5880 f0b5
.org 0xe5882
	mov r7, r8	@ 000e5882 4746
.org 0xe5884
	push {r7}	@ 000e5884 80b4
.org 0xe5886
	sub sp, #8	@ 000e5886 82b0
.org 0xe5888
	adds r6, r0, #0	@ 000e5888 061c
.org 0xe588a
	ldrb r0, [r6, #17]	@ 000e588a 707c
.org 0xe588c
	cmp r0, #0	@ 000e588c 0028
.org 0xe588e
	bne.n 0xe58d0	@ 000e588e 1fd1
.org 0xe5890
	ldr r0, [r6, #84]	@ 000e5890 706d
.org 0xe5892
	str r0, [sp, #0]	@ 000e5892 0090
.org 0xe5894
	ldr r0, [r6, #88]	@ 000e5894 b06d
.org 0xe5896
	ldr r1, [pc, #208]	@ 000e5896 3449
.org 0xe5898
	adds r0, r0, r1	@ 000e5898 4018
.org 0xe589a
	str r0, [sp, #4]	@ 000e589a 0190
.org 0xe589c
	movs r0, #1	@ 000e589c 0120
.org 0xe589e
	mov r1, sp	@ 000e589e 6946
.org 0xe58a0
	bl 0xd0c88	@ 000e58a0 ebf7f2f9
.org 0xe58a4
	movs r0, #42	@ 000e58a4 2a20
.org 0xe58a6
	bl 0x2b10	@ 000e58a6 1df733f9
.org 0xe58aa
	movs r4, #1	@ 000e58aa 0124
.org 0xe58ac
	strb r4, [r6, #17]	@ 000e58ac 7474
.org 0xe58ae
	adds r5, r6, #0	@ 000e58ae 351c
.org 0xe58b0
	adds r5, #84	@ 000e58b0 5435
.org 0xe58b2
	movs r1, #129	@ 000e58b2 8121
.org 0xe58b4
	lsls r1, r1, #1	@ 000e58b4 4900
.org 0xe58b6
	ldrb r2, [r6, #10]	@ 000e58b6 b27a
.org 0xe58b8
	lsrs r2, r2, #4	@ 000e58b8 1209
.org 0xe58ba
	ands r2, r4	@ 000e58ba 2240
.org 0xe58bc
	adds r0, r5, #0	@ 000e58bc 281c
.org 0xe58be
	bl 0xe56d0	@ 000e58be fff707ff
.org 0xe58c2
	ldr r1, [pc, #168]	@ 000e58c2 2a49
.org 0xe58c4
	ldrb r2, [r6, #10]	@ 000e58c4 b27a
.org 0xe58c6
	lsrs r2, r2, #4	@ 000e58c6 1209
.org 0xe58c8
	ands r2, r4	@ 000e58c8 2240
.org 0xe58ca
	adds r0, r5, #0	@ 000e58ca 281c
.org 0xe58cc
	bl 0xe56d0	@ 000e58cc fff700ff
.org 0xe58d0
	ldr r1, [pc, #156]	@ 000e58d0 2749
.org 0xe58d2
	ldrb r0, [r6, #17]	@ 000e58d2 707c
.org 0xe58d4
	subs r0, #1	@ 000e58d4 0138
.org 0xe58d6
	lsls r0, r0, #1	@ 000e58d6 4000
.org 0xe58d8
	adds r0, r0, r1	@ 000e58d8 4018
.org 0xe58da
	ldrh r1, [r0, #0]	@ 000e58da 0188
.org 0xe58dc
	adds r0, r6, #0	@ 000e58dc 301c
.org 0xe58de
	bl 0x1cf00	@ 000e58de 37f70ffb
.org 0xe58e2
	ldr r0, [pc, #144]	@ 000e58e2 2448
.org 0xe58e4
	ldrb r2, [r6, #17]	@ 000e58e4 727c
.org 0xe58e6
	subs r2, #1	@ 000e58e6 013a
.org 0xe58e8
	lsls r2, r2, #2	@ 000e58e8 9200
.org 0xe58ea
	adds r2, r2, r0	@ 000e58ea 1218
.org 0xe58ec
	ldr r4, [pc, #136]	@ 000e58ec 224c
.org 0xe58ee
	ldr r0, [r4, #0]	@ 000e58ee 2068
.org 0xe58f0
	ldr r1, [pc, #136]	@ 000e58f0 2249
.org 0xe58f2
	mov r8, r1	@ 000e58f2 8846
.org 0xe58f4
	mov r1, r8	@ 000e58f4 4146
.org 0xe58f6
	muls r1, r0	@ 000e58f6 4143
.org 0xe58f8
	adds r0, r1, #0	@ 000e58f8 081c
.org 0xe58fa
	ldr r1, [pc, #132]	@ 000e58fa 2149
.org 0xe58fc
	mov ip, r1	@ 000e58fc 8c46
.org 0xe58fe
	add r0, ip	@ 000e58fe 6044
.org 0xe5900
	lsls r0, r0, #1	@ 000e5900 4000
.org 0xe5902
	lsrs r3, r0, #1	@ 000e5902 4308
.org 0xe5904
	str r3, [r4, #0]	@ 000e5904 2360
.org 0xe5906
	lsrs r0, r0, #17	@ 000e5906 400c
.org 0xe5908
	movs r5, #255	@ 000e5908 ff25
.org 0xe590a
	ands r0, r5	@ 000e590a 2840
.org 0xe590c
	movs r1, #128	@ 000e590c 8021
.org 0xe590e
	lsls r1, r1, #1	@ 000e590e 4900
.org 0xe5910
	adds r0, r0, r1	@ 000e5910 4018
.org 0xe5912
	ldr r1, [r2, #0]	@ 000e5912 1168
.org 0xe5914
	muls r0, r1	@ 000e5914 4843
.org 0xe5916
	cmp r0, #0	@ 000e5916 0028
.org 0xe5918
	bge.n 0xe591c	@ 000e5918 00da
.org 0xe591a
	adds r0, #255	@ 000e591a ff30
.org 0xe591c
	asrs r7, r0, #8	@ 000e591c 0712
.org 0xe591e
	str r7, [r6, #92]	@ 000e591e f765
.org 0xe5920
	mov r0, r8	@ 000e5920 4046
.org 0xe5922
	muls r0, r3	@ 000e5922 5843
.org 0xe5924
	add r0, ip	@ 000e5924 6044
.org 0xe5926
	lsls r0, r0, #1	@ 000e5926 4000
.org 0xe5928
	lsrs r1, r0, #1	@ 000e5928 4108
.org 0xe592a
	str r1, [r4, #0]	@ 000e592a 2160
.org 0xe592c
	lsrs r0, r0, #17	@ 000e592c 400c
.org 0xe592e
	ands r0, r5	@ 000e592e 2840
.org 0xe5930
	movs r1, #128	@ 000e5930 8021
.org 0xe5932
	lsls r1, r1, #2	@ 000e5932 8900
.org 0xe5934
	adds r0, r0, r1	@ 000e5934 4018
.org 0xe5936
	lsls r0, r0, #8	@ 000e5936 0002
.org 0xe5938
	negs r0, r0	@ 000e5938 4042
.org 0xe593a
	cmp r0, #0	@ 000e593a 0028
.org 0xe593c
	bge.n 0xe5940	@ 000e593c 00da
.org 0xe593e
	adds r0, #255	@ 000e593e ff30
.org 0xe5940
	asrs r0, r0, #8	@ 000e5940 0012
.org 0xe5942
	str r0, [r6, #96]	@ 000e5942 3066
.org 0xe5944
	ldrb r1, [r6, #10]	@ 000e5944 b17a
.org 0xe5946
	movs r0, #16	@ 000e5946 1020
.org 0xe5948
	ands r0, r1	@ 000e5948 0840
.org 0xe594a
	cmp r0, #0	@ 000e594a 0028
.org 0xe594c
	bne.n 0xe5988	@ 000e594c 1cd1
.org 0xe594e
	ldr r2, [pc, #52]	@ 000e594e 0d4a
.org 0xe5950
	ldrb r0, [r6, #17]	@ 000e5950 707c
.org 0xe5952
	subs r0, #1	@ 000e5952 0138
.org 0xe5954
	lsls r0, r0, #3	@ 000e5954 c000
.org 0xe5956
	adds r0, r0, r2	@ 000e5956 8018
.org 0xe5958
	ldr r1, [r0, #0]	@ 000e5958 0168
.org 0xe595a
	lsls r1, r1, #8	@ 000e595a 0902
.org 0xe595c
	ldr r0, [r6, #84]	@ 000e595c 706d
.org 0xe595e
	adds r0, r0, r1	@ 000e595e 4018
.org 0xe5960
	str r0, [r6, #84]	@ 000e5960 7065
.org 0xe5962
	ldrb r3, [r6, #17]	@ 000e5962 737c
.org 0xe5964
	b.n 0xe59ac	@ 000e5964 22e0
.org 0xe5966
	.byte 0x00	@ 000e5966 data
.org 0xe5967
	.byte 0x00	@ 000e5967 data
.org 0xe5968
	.byte 0x00,0xf6,0xff,0xff	@ 000e5968 data
.org 0xe596c
	.byte 0x03,0x01,0x00,0x00	@ 000e596c data
.org 0xe5970
	.byte 0xc4,0x8e,0x86,0x08	@ 000e5970 data
.org 0xe5974
	.byte 0xb8,0x8e,0x86,0x08	@ 000e5974 data
.org 0xe5978
	.byte 0x38,0xdc,0x02,0x02	@ 000e5978 data
.org 0xe597c
	.byte 0xfd,0x43,0x03,0x00	@ 000e597c data
.org 0xe5980
	.byte 0xc3,0x9e,0x26,0x00	@ 000e5980 data
.org 0xe5984
	.byte 0xa0,0x8e,0x86,0x08	@ 000e5984 data
.org 0xe5988
	ldr r2, [pc, #68]	@ 000e5988 114a
.org 0xe598a
	ldrb r0, [r6, #17]	@ 000e598a 707c
.org 0xe598c
	subs r0, #1	@ 000e598c 0138
.org 0xe598e
	lsls r0, r0, #3	@ 000e598e c000
.org 0xe5990
	adds r0, r0, r2	@ 000e5990 8018
.org 0xe5992
	ldr r1, [r0, #0]	@ 000e5992 0168
.org 0xe5994
	lsls r1, r1, #8	@ 000e5994 0902
.org 0xe5996
	ldr r0, [r6, #84]	@ 000e5996 706d
.org 0xe5998
	subs r0, r0, r1	@ 000e5998 401a
.org 0xe599a
	str r0, [r6, #84]	@ 000e599a 7065
.org 0xe599c
	lsls r0, r7, #8	@ 000e599c 3802
.org 0xe599e
	negs r0, r0	@ 000e599e 4042
.org 0xe59a0
	ldrb r3, [r6, #17]	@ 000e59a0 737c
.org 0xe59a2
	cmp r0, #0	@ 000e59a2 0028
.org 0xe59a4
	bge.n 0xe59a8	@ 000e59a4 00da
.org 0xe59a6
	adds r0, #255	@ 000e59a6 ff30
.org 0xe59a8
	asrs r0, r0, #8	@ 000e59a8 0012
.org 0xe59aa
	str r0, [r6, #92]	@ 000e59aa f065
