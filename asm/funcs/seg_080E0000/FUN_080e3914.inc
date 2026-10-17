@ FUN_080e3914  entry 0x080e3914  size 322
.thumb
.org 0xe3914
FUN_080e3914:
	push {r4, r5, lr}	@ 000e3914 30b5
.org 0xe3916
	sub sp, #20	@ 000e3916 85b0
.org 0xe3918
	adds r4, r0, #0	@ 000e3918 041c
.org 0xe391a
	ldr r1, [pc, #36]	@ 000e391a 0949
.org 0xe391c
	mov r0, sp	@ 000e391c 6846
.org 0xe391e
	movs r2, #4	@ 000e391e 0422
.org 0xe3920
	bl 0x129258	@ 000e3920 45f09afc
.org 0xe3924
	ldr r0, [pc, #28]	@ 000e3924 0748
.org 0xe3926
	ldr r1, [r0, #4]	@ 000e3926 4168
.org 0xe3928
	ldr r0, [r0, #0]	@ 000e3928 0068
.org 0xe392a
	str r0, [sp, #12]	@ 000e392a 0390
.org 0xe392c
	str r1, [sp, #16]	@ 000e392c 0491
.org 0xe392e
	adds r0, r4, #0	@ 000e392e 201c
.org 0xe3930
	adds r0, #117	@ 000e3930 7530
.org 0xe3932
	ldrb r2, [r0, #0]	@ 000e3932 0278
.org 0xe3934
	cmp r2, #0	@ 000e3934 002a
.org 0xe3936
	beq.n 0xe3948	@ 000e3936 07d0
.org 0xe3938
	ldrb r1, [r4, #10]	@ 000e3938 a17a
.org 0xe393a
	movs r0, #16	@ 000e393a 1020
.org 0xe393c
	orrs r0, r1	@ 000e393c 0843
.org 0xe393e
	b.n 0xe394e	@ 000e393e 06e0
.org 0xe3940
	.byte 0xc0,0xa2,0x12,0x08	@ 000e3940 data
.org 0xe3944
	.byte 0xc4,0xa2,0x12,0x08	@ 000e3944 data
.org 0xe3948
	ldrb r1, [r4, #10]	@ 000e3948 a17a
.org 0xe394a
	movs r0, #239	@ 000e394a ef20
.org 0xe394c
	ands r0, r1	@ 000e394c 0840
.org 0xe394e
	strb r0, [r4, #10]	@ 000e394e a072
.org 0xe3950
	movs r5, #1	@ 000e3950 0125
.org 0xe3952
	adds r1, r5, #0	@ 000e3952 291c
.org 0xe3954
	ands r1, r2	@ 000e3954 1140
.org 0xe3956
	adds r0, r4, #0	@ 000e3956 201c
.org 0xe3958
	adds r0, #76	@ 000e3958 4c30
.org 0xe395a
	strb r1, [r0, #0]	@ 000e395a 0170
.org 0xe395c
	adds r3, r4, #0	@ 000e395c 231c
.org 0xe395e
	adds r3, #74	@ 000e395e 4a33
.org 0xe3960
	lsls r1, r1, #4	@ 000e3960 0901
.org 0xe3962
	ldrb r2, [r3, #0]	@ 000e3962 1a78
.org 0xe3964
	movs r0, #17	@ 000e3964 1120
.org 0xe3966
	negs r0, r0	@ 000e3966 4042
.org 0xe3968
	ands r0, r2	@ 000e3968 1040
.org 0xe396a
	orrs r0, r1	@ 000e396a 0843
.org 0xe396c
	strb r0, [r3, #0]	@ 000e396c 1870
.org 0xe396e
	ldrb r0, [r4, #17]	@ 000e396e 607c
.org 0xe3970
	cmp r0, #0	@ 000e3970 0028
.org 0xe3972
	bne.n 0xe39b4	@ 000e3972 1fd1
.org 0xe3974
	adds r0, r4, #0	@ 000e3974 201c
.org 0xe3976
	bl 0xe38a0	@ 000e3976 fff793ff
.org 0xe397a
	ldr r0, [r4, #84]	@ 000e397a 606d
.org 0xe397c
	str r0, [sp, #4]	@ 000e397c 0190
.org 0xe397e
	ldr r0, [r4, #88]	@ 000e397e a06d
.org 0xe3980
	ldr r1, [pc, #144]	@ 000e3980 2449
.org 0xe3982
	adds r0, r0, r1	@ 000e3982 4018
.org 0xe3984
	add r1, sp, #4	@ 000e3984 01a9
.org 0xe3986
	str r0, [r1, #4]	@ 000e3986 4860
.org 0xe3988
	movs r2, #128	@ 000e3988 8022
.org 0xe398a
	lsls r2, r2, #2	@ 000e398a 9200
.org 0xe398c
	ldrb r3, [r4, #10]	@ 000e398c a37a
.org 0xe398e
	lsrs r3, r3, #4	@ 000e398e 1b09
.org 0xe3990
	ands r3, r5	@ 000e3990 2b40
.org 0xe3992
	movs r0, #0	@ 000e3992 0020
.org 0xe3994
	bl 0xd0dc4	@ 000e3994 edf716fa
.org 0xe3998
	movs r0, #2	@ 000e3998 0220
.org 0xe399a
	strb r0, [r4, #17]	@ 000e399a 6074
.org 0xe399c
	adds r0, r4, #0	@ 000e399c 201c
.org 0xe399e
	adds r0, #84	@ 000e399e 5430
.org 0xe39a0
	ldrb r2, [r4, #10]	@ 000e39a0 a27a
.org 0xe39a2
	lsrs r2, r2, #4	@ 000e39a2 1209
.org 0xe39a4
	ands r2, r5	@ 000e39a4 2a40
.org 0xe39a6
	movs r1, #3	@ 000e39a6 0321
.org 0xe39a8
	bl 0xe37a0	@ 000e39a8 fff7fafe
.org 0xe39ac
	adds r1, r4, #0	@ 000e39ac 211c
.org 0xe39ae
	adds r1, #37	@ 000e39ae 2531
.org 0xe39b0
	movs r0, #24	@ 000e39b0 1820
.org 0xe39b2
	strb r0, [r1, #0]	@ 000e39b2 0870
.org 0xe39b4
	ldrb r5, [r4, #17]	@ 000e39b4 657c
.org 0xe39b6
	cmp r5, #1	@ 000e39b6 012d
.org 0xe39b8
	bne.n 0xe39fa	@ 000e39b8 1fd1
.org 0xe39ba
	adds r0, r4, #0	@ 000e39ba 201c
.org 0xe39bc
	bl 0xe38a0	@ 000e39bc fff770ff
.org 0xe39c0
	ldr r0, [r4, #84]	@ 000e39c0 606d
.org 0xe39c2
	str r0, [sp, #4]	@ 000e39c2 0190
.org 0xe39c4
	add r1, sp, #4	@ 000e39c4 01a9
.org 0xe39c6
	ldr r0, [r4, #88]	@ 000e39c6 a06d
.org 0xe39c8
	ldr r2, [pc, #72]	@ 000e39c8 124a
.org 0xe39ca
	adds r0, r0, r2	@ 000e39ca 8018
.org 0xe39cc
	str r0, [r1, #4]	@ 000e39cc 4860
.org 0xe39ce
	movs r2, #128	@ 000e39ce 8022
.org 0xe39d0
	lsls r2, r2, #2	@ 000e39d0 9200
.org 0xe39d2
	ldrb r3, [r4, #10]	@ 000e39d2 a37a
.org 0xe39d4
	lsrs r3, r3, #4	@ 000e39d4 1b09
.org 0xe39d6
	ands r3, r5	@ 000e39d6 2b40
.org 0xe39d8
	movs r0, #0	@ 000e39d8 0020
.org 0xe39da
	bl 0xd0dc4	@ 000e39da edf7f3f9
.org 0xe39de
	movs r0, #4	@ 000e39de 0420
.org 0xe39e0
	strb r0, [r4, #17]	@ 000e39e0 6074
.org 0xe39e2
	adds r0, r4, #0	@ 000e39e2 201c
.org 0xe39e4
	adds r0, #84	@ 000e39e4 5430
.org 0xe39e6
	ldrb r2, [r4, #10]	@ 000e39e6 a27a
.org 0xe39e8
	lsrs r2, r2, #4	@ 000e39e8 1209
.org 0xe39ea
	ands r2, r5	@ 000e39ea 2a40
.org 0xe39ec
	movs r1, #5	@ 000e39ec 0521
.org 0xe39ee
	bl 0xe37a0	@ 000e39ee fff7d7fe
.org 0xe39f2
	adds r1, r4, #0	@ 000e39f2 211c
.org 0xe39f4
	adds r1, #37	@ 000e39f4 2531
.org 0xe39f6
	movs r0, #24	@ 000e39f6 1820
.org 0xe39f8
	strb r0, [r1, #0]	@ 000e39f8 0870
.org 0xe39fa
	ldrb r0, [r4, #17]	@ 000e39fa 607c
.org 0xe39fc
	cmp r0, #3	@ 000e39fc 0328
.org 0xe39fe
	bhi.n 0xe3a18	@ 000e39fe 0bd8
.org 0xe3a00
	subs r0, #2	@ 000e3a00 0238
.org 0xe3a02
	lsls r0, r0, #1	@ 000e3a02 4000
.org 0xe3a04
	add r0, sp	@ 000e3a04 6844
.org 0xe3a06
	ldrh r1, [r0, #0]	@ 000e3a06 0188
.org 0xe3a08
	adds r0, r4, #0	@ 000e3a08 201c
.org 0xe3a0a
	bl 0x1cf00	@ 000e3a0a 39f779fa
.org 0xe3a0e
	ldrb r0, [r4, #17]	@ 000e3a0e 607c
.org 0xe3a10
	subs r0, #2	@ 000e3a10 0238
.org 0xe3a12
	b.n 0xe3a32	@ 000e3a12 0ee0
.org 0xe3a14
	.byte 0x00,0xee,0xff,0xff	@ 000e3a14 data
.org 0xe3a18
	ldrb r0, [r4, #17]	@ 000e3a18 607c
.org 0xe3a1a
	subs r0, #4	@ 000e3a1a 0438
.org 0xe3a1c
	lsls r0, r0, #1	@ 000e3a1c 4000
.org 0xe3a1e
	add r0, sp	@ 000e3a1e 6844
.org 0xe3a20
	ldrh r1, [r0, #0]	@ 000e3a20 0188
.org 0xe3a22
	adds r1, #12	@ 000e3a22 0c31
.org 0xe3a24
	lsls r1, r1, #16	@ 000e3a24 0904
.org 0xe3a26
	lsrs r1, r1, #16	@ 000e3a26 090c
.org 0xe3a28
	adds r0, r4, #0	@ 000e3a28 201c
.org 0xe3a2a
	bl 0x1cf00	@ 000e3a2a 39f769fa
.org 0xe3a2e
	ldrb r0, [r4, #17]	@ 000e3a2e 607c
.org 0xe3a30
	subs r0, #4	@ 000e3a30 0438
.org 0xe3a32
	lsls r0, r0, #2	@ 000e3a32 8000
.org 0xe3a34
	add r1, sp, #12	@ 000e3a34 03a9
.org 0xe3a36
	adds r0, r0, r1	@ 000e3a36 4018
.org 0xe3a38
	ldr r0, [r0, #0]	@ 000e3a38 0068
.org 0xe3a3a
	str r0, [r4, #92]	@ 000e3a3a e065
.org 0xe3a3c
	ldr r0, [pc, #36]	@ 000e3a3c 0948
.org 0xe3a3e
	str r0, [r4, #96]	@ 000e3a3e 2066
.org 0xe3a40
	ldrb r1, [r4, #10]	@ 000e3a40 a17a
.org 0xe3a42
	movs r0, #16	@ 000e3a42 1020
.org 0xe3a44
	ands r0, r1	@ 000e3a44 0840
.org 0xe3a46
	cmp r0, #0	@ 000e3a46 0028
.org 0xe3a48
	beq.n 0xe3a5a	@ 000e3a48 07d0
.org 0xe3a4a
	ldr r0, [r4, #92]	@ 000e3a4a e06d
.org 0xe3a4c
	lsls r0, r0, #8	@ 000e3a4c 0002
.org 0xe3a4e
	negs r0, r0	@ 000e3a4e 4042
.org 0xe3a50
	cmp r0, #0	@ 000e3a50 0028
.org 0xe3a52
	bge.n 0xe3a56	@ 000e3a52 00da
.org 0xe3a54
	adds r0, #255	@ 000e3a54 ff30
