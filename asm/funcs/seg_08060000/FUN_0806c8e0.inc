@ FUN_0806c8e0  entry 0x0806c8e0  size 180
.thumb
.org 0x6c8e0
FUN_0806c8e0:
	push {r4, r5, lr}	@ 0006c8e0 30b5
.org 0x6c8e2
	adds r4, r0, #0	@ 0006c8e2 041c
.org 0x6c8e4
	ldrb r5, [r4, #14]	@ 0006c8e4 a57b
.org 0x6c8e6
	cmp r5, #0	@ 0006c8e6 002d
.org 0x6c8e8
	bne.n 0x6c902	@ 0006c8e8 0bd1
.org 0x6c8ea
	ldr r1, [pc, #108]	@ 0006c8ea 1b49
.org 0x6c8ec
	bl 0x1cf00	@ 0006c8ec b0f708fb
.org 0x6c8f0
	adds r0, r4, #0	@ 0006c8f0 201c
.org 0x6c8f2
	adds r0, #116	@ 0006c8f2 7430
.org 0x6c8f4
	ldr r1, [pc, #100]	@ 0006c8f4 1949
.org 0x6c8f6
	bl 0x5784	@ 0006c8f6 98f745ff
.org 0x6c8fa
	strb r5, [r4, #15]	@ 0006c8fa e573
.org 0x6c8fc
	ldrb r0, [r4, #14]	@ 0006c8fc a07b
.org 0x6c8fe
	adds r0, #1	@ 0006c8fe 0130
.org 0x6c900
	strb r0, [r4, #14]	@ 0006c900 a073
.org 0x6c902
	adds r0, r4, #0	@ 0006c902 201c
.org 0x6c904
	bl 0x1cff0	@ 0006c904 b0f774fb
.org 0x6c908
	ldrb r0, [r4, #15]	@ 0006c908 e07b
.org 0x6c90a
	cmp r0, #0	@ 0006c90a 0028
.org 0x6c90c
	bne.n 0x6c974	@ 0006c90c 32d1
.org 0x6c90e
	adds r0, r4, #0	@ 0006c90e 201c
.org 0x6c910
	adds r0, #113	@ 0006c910 7130
.org 0x6c912
	ldrb r0, [r0, #0]	@ 0006c912 0078
.org 0x6c914
	lsls r0, r0, #24	@ 0006c914 0006
.org 0x6c916
	asrs r0, r0, #24	@ 0006c916 0016
.org 0x6c918
	cmp r0, #0	@ 0006c918 0028
.org 0x6c91a
	ble.n 0x6c998	@ 0006c91a 3ddd
.org 0x6c91c
	ldrb r0, [r4, #10]	@ 0006c91c a07a
.org 0x6c91e
	lsrs r0, r0, #4	@ 0006c91e 0009
.org 0x6c920
	movs r2, #1	@ 0006c920 0122
.org 0x6c922
	eors r0, r2	@ 0006c922 5040
.org 0x6c924
	ands r0, r2	@ 0006c924 1040
.org 0x6c926
	adds r1, r4, #0	@ 0006c926 211c
.org 0x6c928
	adds r1, #76	@ 0006c928 4c31
.org 0x6c92a
	strb r0, [r1, #0]	@ 0006c92a 0870
.org 0x6c92c
	ldrb r1, [r4, #10]	@ 0006c92c a17a
.org 0x6c92e
	lsrs r1, r1, #4	@ 0006c92e 0909
.org 0x6c930
	eors r1, r2	@ 0006c930 5140
.org 0x6c932
	ands r1, r2	@ 0006c932 1140
.org 0x6c934
	movs r0, #74	@ 0006c934 4a20
.org 0x6c936
	adds r0, r0, r4	@ 0006c936 0019
.org 0x6c938
	mov ip, r0	@ 0006c938 8446
.org 0x6c93a
	lsls r3, r1, #4	@ 0006c93a 0b01
.org 0x6c93c
	ldrb r2, [r0, #0]	@ 0006c93c 0278
.org 0x6c93e
	movs r0, #17	@ 0006c93e 1120
.org 0x6c940
	negs r0, r0	@ 0006c940 4042
.org 0x6c942
	ands r0, r2	@ 0006c942 1040
.org 0x6c944
	orrs r0, r3	@ 0006c944 1843
.org 0x6c946
	mov r2, ip	@ 0006c946 6246
.org 0x6c948
	strb r0, [r2, #0]	@ 0006c948 1070
.org 0x6c94a
	cmp r1, #0	@ 0006c94a 0029
.org 0x6c94c
	beq.n 0x6c960	@ 0006c94c 08d0
.org 0x6c94e
	ldrb r0, [r4, #10]	@ 0006c94e a07a
.org 0x6c950
	movs r1, #16	@ 0006c950 1021
.org 0x6c952
	orrs r0, r1	@ 0006c952 0843
.org 0x6c954
	b.n 0x6c966	@ 0006c954 07e0
.org 0x6c956
	.byte 0x00	@ 0006c956 data
.org 0x6c957
	.byte 0x00	@ 0006c957 data
.org 0x6c958
	.byte 0x19,0xaa,0x00,0x00	@ 0006c958 data
.org 0x6c95c
	.byte 0xec,0xc3,0x85,0x08	@ 0006c95c data
.org 0x6c960
	ldrb r1, [r4, #10]	@ 0006c960 a17a
.org 0x6c962
	movs r0, #239	@ 0006c962 ef20
.org 0x6c964
	ands r0, r1	@ 0006c964 0840
.org 0x6c966
	strb r0, [r4, #10]	@ 0006c966 a072
.org 0x6c968
	movs r0, #8	@ 0006c968 0820
.org 0x6c96a
	strb r0, [r4, #18]	@ 0006c96a a074
.org 0x6c96c
	ldrb r0, [r4, #15]	@ 0006c96c e07b
.org 0x6c96e
	adds r0, #1	@ 0006c96e 0130
.org 0x6c970
	strb r0, [r4, #15]	@ 0006c970 e073
.org 0x6c972
	b.n 0x6c998	@ 0006c972 11e0
.org 0x6c974
	cmp r0, #1	@ 0006c974 0128
.org 0x6c976
	bne.n 0x6c998	@ 0006c976 0fd1
.org 0x6c978
	adds r0, r4, #0	@ 0006c978 201c
.org 0x6c97a
	adds r0, #115	@ 0006c97a 7330
.org 0x6c97c
	ldrb r0, [r0, #0]	@ 0006c97c 0078
.org 0x6c97e
	cmp r0, #3	@ 0006c97e 0328
.org 0x6c980
	bne.n 0x6c998	@ 0006c980 0ad1
.org 0x6c982
	ldrb r0, [r4, #18]	@ 0006c982 a07c
.org 0x6c984
	subs r0, #1	@ 0006c984 0138
.org 0x6c986
	strb r0, [r4, #18]	@ 0006c986 a074
.org 0x6c988
	lsls r0, r0, #24	@ 0006c988 0006
.org 0x6c98a
	lsrs r0, r0, #24	@ 0006c98a 000e
.org 0x6c98c
	cmp r0, #255	@ 0006c98c ff28
.org 0x6c98e
	bne.n 0x6c998	@ 0006c98e 03d1
.org 0x6c990
	movs r0, #27	@ 0006c990 1b20
.org 0x6c992
	strb r0, [r4, #13]	@ 0006c992 6073
