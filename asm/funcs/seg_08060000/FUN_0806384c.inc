@ FUN_0806384c  entry 0x0806384c  size 334
.thumb
.org 0x6384c
FUN_0806384c:
	push {r4, r5, r6, r7, lr}	@ 0006384c f0b5
.org 0x6384e
	mov r7, r9	@ 0006384e 4f46
.org 0x63850
	mov r6, r8	@ 00063850 4646
.org 0x63852
	push {r6, r7}	@ 00063852 c0b4
.org 0x63854
	adds r5, r0, #0	@ 00063854 051c
.org 0x63856
	ldrb r0, [r5, #10]	@ 00063856 a87a
.org 0x63858
	lsrs r4, r0, #4	@ 00063858 0409
.org 0x6385a
	movs r6, #1	@ 0006385a 0126
.org 0x6385c
	ands r4, r6	@ 0006385c 3440
.org 0x6385e
	ldrb r0, [r5, #15]	@ 0006385e e87b
.org 0x63860
	cmp r0, #0	@ 00063860 0028
.org 0x63862
	bne.n 0x638a6	@ 00063862 20d1
.org 0x63864
	movs r0, #136	@ 00063864 8820
.org 0x63866
	lsls r0, r0, #1	@ 00063866 4000
.org 0x63868
	bl 0x2b10	@ 00063868 9ff752f9
.org 0x6386c
	adds r0, r5, #0	@ 0006386c 281c
.org 0x6386e
	adds r0, #84	@ 0006386e 5430
.org 0x63870
	movs r1, #1	@ 00063870 0121
.org 0x63872
	movs r2, #1	@ 00063872 0122
.org 0x63874
	bl 0x664bc	@ 00063874 02f022fe
.org 0x63878
	adds r0, r5, #0	@ 00063878 281c
.org 0x6387a
	movs r1, #11	@ 0006387a 0b21
.org 0x6387c
	bl 0x65a94	@ 0006387c 02f00af9
.org 0x63880
	adds r7, r4, #0	@ 00063880 271c
.org 0x63882
	lsls r0, r7, #1	@ 00063882 7800
.org 0x63884
	subs r2, r0, #1	@ 00063884 421e
.org 0x63886
	lsls r0, r2, #9	@ 00063886 5002
.org 0x63888
	str r0, [r5, #92]	@ 00063888 e865
.org 0x6388a
	lsls r0, r2, #4	@ 0006388a 1001
.org 0x6388c
	str r0, [r5, #100]	@ 0006388c 6866
.org 0x6388e
	lsls r1, r2, #2	@ 0006388e 9100
.org 0x63890
	adds r1, r1, r2	@ 00063890 8918
.org 0x63892
	lsls r1, r1, #9	@ 00063892 4902
.org 0x63894
	ldr r0, [r5, #84]	@ 00063894 686d
.org 0x63896
	adds r0, r0, r1	@ 00063896 4018
.org 0x63898
	str r0, [r5, #84]	@ 00063898 6865
.org 0x6389a
	movs r0, #32	@ 0006389a 2020
.org 0x6389c
	strb r0, [r5, #18]	@ 0006389c a874
.org 0x6389e
	strb r7, [r5, #19]	@ 0006389e ef74
.org 0x638a0
	ldrb r0, [r5, #15]	@ 000638a0 e87b
.org 0x638a2
	adds r0, #1	@ 000638a2 0130
.org 0x638a4
	strb r0, [r5, #15]	@ 000638a4 e873
.org 0x638a6
	ldrb r0, [r5, #19]	@ 000638a6 e87c
.org 0x638a8
	adds r7, r6, #0	@ 000638a8 371c
.org 0x638aa
	ands r7, r0	@ 000638aa 0740
.org 0x638ac
	cmp r7, #0	@ 000638ac 002f
.org 0x638ae
	beq.n 0x638bc	@ 000638ae 05d0
.org 0x638b0
	adds r0, r5, #0	@ 000638b0 281c
.org 0x638b2
	adds r0, #208	@ 000638b2 d030
.org 0x638b4
	ldr r0, [r0, #0]	@ 000638b4 0068
.org 0x638b6
	movs r1, #200	@ 000638b6 c821
.org 0x638b8
	lsls r1, r1, #8	@ 000638b8 0902
.org 0x638ba
	b.n 0x638c6	@ 000638ba 04e0
.org 0x638bc
	adds r0, r5, #0	@ 000638bc 281c
.org 0x638be
	adds r0, #208	@ 000638be d030
.org 0x638c0
	ldr r0, [r0, #0]	@ 000638c0 0068
.org 0x638c2
	movs r1, #160	@ 000638c2 a021
.org 0x638c4
	lsls r1, r1, #6	@ 000638c4 8901
.org 0x638c6
	adds r1, r1, r0	@ 000638c6 0918
.org 0x638c8
	mov r9, r1	@ 000638c8 8946
.org 0x638ca
	adds r0, r5, #0	@ 000638ca 281c
.org 0x638cc
	bl 0x1cff0	@ 000638cc b9f790fb
.org 0x638d0
	adds r6, r5, #0	@ 000638d0 2e1c
.org 0x638d2
	adds r6, #116	@ 000638d2 7436
.org 0x638d4
	ldr r0, [pc, #108]	@ 000638d4 1b48
.org 0x638d6
	mov r8, r0	@ 000638d6 8046
.org 0x638d8
	ldr r2, [pc, #108]	@ 000638d8 1b4a
.org 0x638da
	adds r0, r5, #0	@ 000638da 281c
.org 0x638dc
	adds r0, #180	@ 000638dc b430
.org 0x638de
	ldrb r1, [r0, #0]	@ 000638de 0178
.org 0x638e0
	lsls r0, r1, #1	@ 000638e0 4800
.org 0x638e2
	adds r0, r0, r2	@ 000638e2 8018
.org 0x638e4
	ldrh r0, [r0, #0]	@ 000638e4 0088
.org 0x638e6
	lsls r0, r0, #2	@ 000638e6 8000
.org 0x638e8
	add r0, r8	@ 000638e8 4044
.org 0x638ea
	adds r2, r5, #0	@ 000638ea 2a1c
.org 0x638ec
	adds r2, #113	@ 000638ec 7132
.org 0x638ee
	movs r4, #0	@ 000638ee 0024
.org 0x638f0
	ldrsb r4, [r2, r4]	@ 000638f0 1457
.org 0x638f2
	ldr r0, [r0, #0]	@ 000638f2 0068
.org 0x638f4
	lsls r2, r4, #2	@ 000638f4 a200
.org 0x638f6
	adds r2, r2, r0	@ 000638f6 1218
.org 0x638f8
	ldr r3, [pc, #80]	@ 000638f8 144b
.org 0x638fa
	adds r0, r5, #0	@ 000638fa 281c
.org 0x638fc
	adds r0, #181	@ 000638fc b530
.org 0x638fe
	ldrb r0, [r0, #0]	@ 000638fe 0078
.org 0x63900
	lsls r0, r0, #2	@ 00063900 8000
.org 0x63902
	adds r0, r0, r3	@ 00063902 c018
.org 0x63904
	ldr r0, [r0, #0]	@ 00063904 0068
.org 0x63906
	lsls r1, r1, #2	@ 00063906 8900
.org 0x63908
	adds r1, r1, r0	@ 00063908 0918
.org 0x6390a
	ldr r0, [r1, #0]	@ 0006390a 0868
.org 0x6390c
	adds r0, r0, r4	@ 0006390c 0019
.org 0x6390e
	ldrb r1, [r0, #0]	@ 0006390e 0178
.org 0x63910
	lsls r0, r1, #1	@ 00063910 4800
.org 0x63912
	adds r0, r0, r1	@ 00063912 4018
.org 0x63914
	lsls r0, r0, #3	@ 00063914 c000
.org 0x63916
	ldr r1, [r2, #0]	@ 00063916 1168
.org 0x63918
	adds r1, r1, r0	@ 00063918 0918
.org 0x6391a
	adds r0, r6, #0	@ 0006391a 301c
.org 0x6391c
	bl 0x5784	@ 0006391c a1f732ff
.org 0x63920
	ldrb r0, [r5, #18]	@ 00063920 a87c
.org 0x63922
	cmp r0, #0	@ 00063922 0028
.org 0x63924
	beq.n 0x6395e	@ 00063924 1bd0
.org 0x63926
	mov r1, r8	@ 00063926 4146
.org 0x63928
	ldr r0, [r1, #0]	@ 00063928 0868
.org 0x6392a
	ldr r1, [r0, #0]	@ 0006392a 0168
.org 0x6392c
	adds r0, r6, #0	@ 0006392c 301c
.org 0x6392e
	bl 0x5784	@ 0006392e a1f729ff
.org 0x63932
	ldrb r1, [r5, #18]	@ 00063932 a97c
.org 0x63934
	movs r0, #1	@ 00063934 0120
.org 0x63936
	ands r0, r1	@ 00063936 0840
.org 0x63938
	cmp r0, #0	@ 00063938 0028
.org 0x6393a
	beq.n 0x63950	@ 0006393a 09d0
.org 0x6393c
	ldrb r1, [r5, #10]	@ 0006393c a97a
.org 0x6393e
	movs r0, #1	@ 0006393e 0120
.org 0x63940
	orrs r0, r1	@ 00063940 0843
.org 0x63942
	b.n 0x63956	@ 00063942 08e0
.org 0x63944
	.byte 0x80,0xaf,0x85,0x08	@ 00063944 data
.org 0x63948
	.byte 0xa0,0xb0,0x85,0x08	@ 00063948 data
.org 0x6394c
	.byte 0x98,0xb0,0x85,0x08	@ 0006394c data
.org 0x63950
	ldrb r1, [r5, #10]	@ 00063950 a97a
.org 0x63952
	movs r0, #254	@ 00063952 fe20
.org 0x63954
	ands r0, r1	@ 00063954 0840
.org 0x63956
	strb r0, [r5, #10]	@ 00063956 a872
.org 0x63958
	ldrb r0, [r5, #18]	@ 00063958 a87c
.org 0x6395a
	subs r0, #1	@ 0006395a 0138
.org 0x6395c
	strb r0, [r5, #18]	@ 0006395c a874
.org 0x6395e
	ldr r6, [r5, #92]	@ 0006395e ee6d
.org 0x63960
	negs r0, r6	@ 00063960 7042
.org 0x63962
	ldr r4, [r5, #100]	@ 00063962 6c6e
.org 0x63964
	negs r4, r4	@ 00063964 6442
.org 0x63966
	adds r1, r4, #0	@ 00063966 211c
.org 0x63968
	bl 0x128fb8	@ 00063968 c5f026fb
.org 0x6396c
	adds r2, r0, #1	@ 0006396c 421c
.org 0x6396e
	lsls r1, r6, #1	@ 0006396e 7100
.org 0x63970
	muls r0, r4	@ 00063970 6043
.org 0x63972
	adds r1, r1, r0	@ 00063972 0918
.org 0x63974
	adds r0, r2, #0	@ 00063974 101c
.org 0x63976
	muls r0, r1	@ 00063976 4843
.org 0x63978
	asrs r0, r0, #1	@ 00063978 4010
.org 0x6397a
	ldr r3, [r5, #84]	@ 0006397a 6b6d
.org 0x6397c
	adds r2, r3, r0	@ 0006397c 1a18
.org 0x6397e
	mov r0, r9	@ 0006397e 4846
.org 0x63980
	subs r1, r2, r0	@ 00063980 111a
.org 0x63982
	lsls r0, r7, #1	@ 00063982 7800
.org 0x63984
	subs r0, #1	@ 00063984 0138
.org 0x63986
	muls r0, r1	@ 00063986 4843
.org 0x63988
	cmp r0, #0	@ 00063988 0028
.org 0x6398a
	blt.n 0x63996	@ 0006398a 04db
.org 0x6398c
	movs r1, #0	@ 0006398c 0021
.org 0x6398e
	movs r0, #3	@ 0006398e 0320
.org 0x63990
	strb r0, [r5, #14]	@ 00063990 a873
.org 0x63992
	strb r1, [r5, #15]	@ 00063992 e973
.org 0x63994
	b.n 0x6399a	@ 00063994 01e0
.org 0x63996
	adds r0, r3, r6	@ 00063996 9819
.org 0x63998
	str r0, [r5, #84]	@ 00063998 6865
