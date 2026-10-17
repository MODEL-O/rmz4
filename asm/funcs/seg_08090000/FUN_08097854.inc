@ FUN_08097854  entry 0x08097854  size 322
.thumb
.org 0x97854
FUN_08097854:
	push {r4, lr}	@ 00097854 10b5
.org 0x97856
	adds r4, r0, #0	@ 00097856 041c
.org 0x97858
	ldrb r0, [r4, #14]	@ 00097858 a07b
.org 0x9785a
	cmp r0, #0	@ 0009785a 0028
.org 0x9785c
	bne.n 0x978c6	@ 0009785c 33d1
.org 0x9785e
	adds r0, r4, #0	@ 0009785e 201c
.org 0x97860
	adds r0, #180	@ 00097860 b430
.org 0x97862
	ldr r1, [r4, #84]	@ 00097862 616d
.org 0x97864
	ldr r0, [r0, #0]	@ 00097864 0068
.org 0x97866
	cmp r1, r0	@ 00097866 8142
.org 0x97868
	ble.n 0x9787c	@ 00097868 08dd
.org 0x9786a
	ldr r0, [pc, #8]	@ 0009786a 0248
.org 0x9786c
	str r0, [r4, #92]	@ 0009786c e065
.org 0x9786e
	ldr r0, [pc, #8]	@ 0009786e 0248
.org 0x97870
	b.n 0x97886	@ 00097870 09e0
.org 0x97872
	.byte 0x00	@ 00097872 data
.org 0x97873
	.byte 0x00	@ 00097873 data
.org 0x97874
	.byte 0x40,0xfe,0xff,0xff	@ 00097874 data
.org 0x97878
	.byte 0x00,0xf0,0xff,0xff	@ 00097878 data
.org 0x9787c
	movs r0, #224	@ 0009787c e020
.org 0x9787e
	lsls r0, r0, #1	@ 0009787e 4000
.org 0x97880
	str r0, [r4, #92]	@ 00097880 e065
.org 0x97882
	movs r0, #128	@ 00097882 8020
.org 0x97884
	lsls r0, r0, #5	@ 00097884 4001
.org 0x97886
	str r0, [r4, #100]	@ 00097886 6066
.org 0x97888
	ldrb r1, [r4, #10]	@ 00097888 a17a
.org 0x9788a
	movs r0, #16	@ 0009788a 1020
.org 0x9788c
	ands r0, r1	@ 0009788c 0840
.org 0x9788e
	cmp r0, #0	@ 0009788e 0028
.org 0x97890
	beq.n 0x978a0	@ 00097890 06d0
.org 0x97892
	ldr r0, [r4, #92]	@ 00097892 e06d
.org 0x97894
	cmp r0, #0	@ 00097894 0028
.org 0x97896
	bgt.n 0x978a6	@ 00097896 06dc
.org 0x97898
	ldr r1, [pc, #0]	@ 00097898 0049
.org 0x9789a
	b.n 0x978a8	@ 0009789a 05e0
.org 0x9789c
	.byte 0x04,0x50,0x00,0x00	@ 0009789c data
.org 0x978a0
	ldr r0, [r4, #92]	@ 000978a0 e06d
.org 0x978a2
	cmp r0, #0	@ 000978a2 0028
.org 0x978a4
	bge.n 0x978b4	@ 000978a4 06da
.org 0x978a6
	ldr r1, [pc, #8]	@ 000978a6 0249
.org 0x978a8
	adds r0, r4, #0	@ 000978a8 201c
.org 0x978aa
	bl 0x1cf00	@ 000978aa 85f729fb
.org 0x978ae
	b.n 0x978bc	@ 000978ae 05e0
.org 0x978b0
	.byte 0x03,0x50,0x00,0x00	@ 000978b0 data
.org 0x978b4
	ldr r1, [pc, #80]	@ 000978b4 1449
.org 0x978b6
	adds r0, r4, #0	@ 000978b6 201c
.org 0x978b8
	bl 0x1cf00	@ 000978b8 85f722fb
.org 0x978bc
	movs r0, #0	@ 000978bc 0020
.org 0x978be
	strb r0, [r4, #18]	@ 000978be a074
.org 0x978c0
	ldrb r0, [r4, #14]	@ 000978c0 a07b
.org 0x978c2
	adds r0, #1	@ 000978c2 0130
.org 0x978c4
	strb r0, [r4, #14]	@ 000978c4 a073
.org 0x978c6
	adds r0, r4, #0	@ 000978c6 201c
.org 0x978c8
	bl 0x1cff0	@ 000978c8 85f792fb
.org 0x978cc
	ldrb r0, [r4, #30]	@ 000978cc a07f
.org 0x978ce
	lsls r0, r0, #8	@ 000978ce 0002
.org 0x978d0
	adds r1, r4, #0	@ 000978d0 211c
.org 0x978d2
	adds r1, #112	@ 000978d2 7031
.org 0x978d4
	ldrb r1, [r1, #0]	@ 000978d4 0978
.org 0x978d6
	orrs r0, r1	@ 000978d6 0843
.org 0x978d8
	ldr r1, [pc, #48]	@ 000978d8 0c49
.org 0x978da
	cmp r0, r1	@ 000978da 8842
.org 0x978dc
	bne.n 0x97914	@ 000978dc 1ad1
.org 0x978de
	adds r0, r4, #0	@ 000978de 201c
.org 0x978e0
	adds r0, #113	@ 000978e0 7130
.org 0x978e2
	ldrb r0, [r0, #0]	@ 000978e2 0078
.org 0x978e4
	lsls r0, r0, #24	@ 000978e4 0006
.org 0x978e6
	asrs r0, r0, #24	@ 000978e6 0016
.org 0x978e8
	cmp r0, #2	@ 000978e8 0228
.org 0x978ea
	beq.n 0x978f0	@ 000978ea 01d0
.org 0x978ec
	cmp r0, #6	@ 000978ec 0628
.org 0x978ee
	bne.n 0x9793a	@ 000978ee 24d1
.org 0x978f0
	adds r0, r4, #0	@ 000978f0 201c
.org 0x978f2
	adds r0, #114	@ 000978f2 7230
.org 0x978f4
	ldrb r0, [r0, #0]	@ 000978f4 0078
.org 0x978f6
	lsls r0, r0, #24	@ 000978f6 0006
.org 0x978f8
	asrs r0, r0, #24	@ 000978f8 0016
.org 0x978fa
	cmp r0, #1	@ 000978fa 0128
.org 0x978fc
	bgt.n 0x9793a	@ 000978fc 1ddc
.org 0x978fe
	ldr r0, [pc, #16]	@ 000978fe 0448
.org 0x97900
	bl 0x2b10	@ 00097900 6bf706f9
.org 0x97904
	b.n 0x9793a	@ 00097904 19e0
.org 0x97906
	.byte 0x00	@ 00097906 data
.org 0x97907
	.byte 0x00	@ 00097907 data
.org 0x97908
	.byte 0x04,0x50,0x00,0x00	@ 00097908 data
.org 0x9790c
	.byte 0x03,0x50,0x00,0x00	@ 0009790c data
.org 0x97910
	.byte 0x37,0x01,0x00,0x00	@ 00097910 data
.org 0x97914
	adds r0, r4, #0	@ 00097914 201c
.org 0x97916
	adds r0, #113	@ 00097916 7130
.org 0x97918
	ldrb r0, [r0, #0]	@ 00097918 0078
.org 0x9791a
	lsls r0, r0, #24	@ 0009791a 0006
.org 0x9791c
	asrs r0, r0, #24	@ 0009791c 0016
.org 0x9791e
	cmp r0, #3	@ 0009791e 0328
.org 0x97920
	beq.n 0x97926	@ 00097920 01d0
.org 0x97922
	cmp r0, #7	@ 00097922 0728
.org 0x97924
	bne.n 0x9793a	@ 00097924 09d1
.org 0x97926
	adds r0, r4, #0	@ 00097926 201c
.org 0x97928
	adds r0, #114	@ 00097928 7230
.org 0x9792a
	ldrb r0, [r0, #0]	@ 0009792a 0078
.org 0x9792c
	lsls r0, r0, #24	@ 0009792c 0006
.org 0x9792e
	asrs r0, r0, #24	@ 0009792e 0016
.org 0x97930
	cmp r0, #1	@ 00097930 0128
.org 0x97932
	bgt.n 0x9793a	@ 00097932 02dc
.org 0x97934
	ldr r0, [pc, #92]	@ 00097934 1748
.org 0x97936
	bl 0x2b10	@ 00097936 6bf7ebf8
.org 0x9793a
	ldr r0, [r4, #84]	@ 0009793a 606d
.org 0x9793c
	ldr r1, [r4, #92]	@ 0009793c e16d
.org 0x9793e
	adds r0, r0, r1	@ 0009793e 4018
.org 0x97940
	str r0, [r4, #84]	@ 00097940 6065
.org 0x97942
	ldr r1, [r4, #88]	@ 00097942 a16d
.org 0x97944
	bl 0x8534	@ 00097944 70f7f6fd
.org 0x97948
	adds r3, r0, #0	@ 00097948 031c
.org 0x9794a
	str r3, [r4, #88]	@ 0009794a a365
.org 0x9794c
	ldrb r0, [r4, #18]	@ 0009794c a07c
.org 0x9794e
	adds r1, r0, #1	@ 0009794e 411c
.org 0x97950
	strb r1, [r4, #18]	@ 00097950 a174
.org 0x97952
	lsls r0, r0, #24	@ 00097952 0006
.org 0x97954
	lsrs r0, r0, #24	@ 00097954 000e
.org 0x97956
	cmp r0, #32	@ 00097956 2028
.org 0x97958
	bls.n 0x97980	@ 00097958 12d9
.org 0x9795a
	ldr r0, [pc, #60]	@ 0009795a 0f48
.org 0x9795c
	ldr r2, [r0, #0]	@ 0009795c 0268
.org 0x9795e
	ldr r0, [r2, #84]	@ 0009795e 506d
.org 0x97960
	ldr r1, [r4, #84]	@ 00097960 616d
.org 0x97962
	subs r0, r0, r1	@ 00097962 401a
.org 0x97964
	movs r1, #192	@ 00097964 c021
.org 0x97966
	lsls r1, r1, #6	@ 00097966 8901
.org 0x97968
	adds r0, r0, r1	@ 00097968 4018
.org 0x9796a
	movs r1, #192	@ 0009796a c021
.org 0x9796c
	lsls r1, r1, #7	@ 0009796c c901
.org 0x9796e
	cmp r0, r1	@ 0009796e 8842
.org 0x97970
	bhi.n 0x97980	@ 00097970 06d8
.org 0x97972
	ldr r0, [r2, #88]	@ 00097972 906d
.org 0x97974
	subs r0, r0, r3	@ 00097974 c01a
.org 0x97976
	movs r2, #192	@ 00097976 c022
.org 0x97978
	lsls r2, r2, #6	@ 00097978 9201
.org 0x9797a
	adds r0, r0, r2	@ 0009797a 8018
.org 0x9797c
	cmp r0, r1	@ 0009797c 8842
.org 0x9797e
	bls.n 0x979b2	@ 0009797e 18d9
.org 0x97980
	ldr r0, [r4, #92]	@ 00097980 e06d
.org 0x97982
	cmp r0, #0	@ 00097982 0028
.org 0x97984
	ble.n 0x9799c	@ 00097984 0add
.org 0x97986
	adds r0, r4, #0	@ 00097986 201c
.org 0x97988
	adds r0, #180	@ 00097988 b430
.org 0x9798a
	ldr r1, [r4, #84]	@ 0009798a 616d
.org 0x9798c
	ldr r2, [r0, #0]	@ 0009798c 0268
.org 0x9798e
	cmp r1, r2	@ 0009798e 9142
.org 0x97990
	ble.n 0x979aa	@ 00097990 0bdd
.org 0x97992
	b.n 0x979a8	@ 00097992 09e0
.org 0x97994
	.byte 0x37,0x01,0x00,0x00	@ 00097994 data
