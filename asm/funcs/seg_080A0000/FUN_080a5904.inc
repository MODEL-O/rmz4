@ FUN_080a5904  entry 0x080a5904  size 114
.thumb
.org 0xa5904
FUN_080a5904:
	push {r4, r5, r6, lr}	@ 000a5904 70b5
.org 0xa5906
	adds r4, r0, #0	@ 000a5906 041c
.org 0xa5908
	movs r6, #0	@ 000a5908 0026
.org 0xa590a
	ldr r1, [pc, #108]	@ 000a590a 1b49
.org 0xa590c
	ldrb r0, [r4, #9]	@ 000a590c 607a
.org 0xa590e
	lsls r0, r0, #2	@ 000a590e 8000
.org 0xa5910
	adds r0, r0, r1	@ 000a5910 4018
.org 0xa5912
	movs r1, #1	@ 000a5912 0121
.org 0xa5914
	str r1, [r4, #12]	@ 000a5914 e160
.org 0xa5916
	ldr r0, [r0, #0]	@ 000a5916 0068
.org 0xa5918
	ldr r0, [r0, #4]	@ 000a5918 4068
.org 0xa591a
	str r0, [r4, #20]	@ 000a591a 6061
.org 0xa591c
	strb r6, [r4, #13]	@ 000a591c 6673
.org 0xa591e
	strb r6, [r4, #14]	@ 000a591e a673
.org 0xa5920
	strb r6, [r4, #15]	@ 000a5920 e673
.org 0xa5922
	ldrb r0, [r4, #10]	@ 000a5922 a07a
.org 0xa5924
	orrs r0, r1	@ 000a5924 0843
.org 0xa5926
	movs r1, #2	@ 000a5926 0221
.org 0xa5928
	orrs r0, r1	@ 000a5928 0843
.org 0xa592a
	strb r0, [r4, #10]	@ 000a592a a072
.org 0xa592c
	adds r0, r4, #0	@ 000a592c 201c
.org 0xa592e
	bl 0x1cc9c	@ 000a592e 77f7b5f9
.org 0xa5932
	ldrb r1, [r4, #10]	@ 000a5932 a17a
.org 0xa5934
	movs r0, #239	@ 000a5934 ef20
.org 0xa5936
	ands r0, r1	@ 000a5936 0840
.org 0xa5938
	strb r0, [r4, #10]	@ 000a5938 a072
.org 0xa593a
	adds r0, r4, #0	@ 000a593a 201c
.org 0xa593c
	adds r0, #76	@ 000a593c 4c30
.org 0xa593e
	strb r6, [r0, #0]	@ 000a593e 0670
.org 0xa5940
	adds r2, r4, #0	@ 000a5940 221c
.org 0xa5942
	adds r2, #74	@ 000a5942 4a32
.org 0xa5944
	ldrb r1, [r2, #0]	@ 000a5944 1178
.org 0xa5946
	movs r0, #17	@ 000a5946 1120
.org 0xa5948
	negs r0, r0	@ 000a5948 4042
.org 0xa594a
	ands r0, r1	@ 000a594a 0840
.org 0xa594c
	strb r0, [r2, #0]	@ 000a594c 1070
.org 0xa594e
	ldrb r1, [r4, #10]	@ 000a594e a17a
.org 0xa5950
	movs r0, #4	@ 000a5950 0420
.org 0xa5952
	orrs r0, r1	@ 000a5952 0843
.org 0xa5954
	strb r0, [r4, #10]	@ 000a5954 a072
.org 0xa5956
	adds r5, r4, #0	@ 000a5956 251c
.org 0xa5958
	adds r5, #116	@ 000a5958 7435
.org 0xa595a
	ldr r1, [pc, #32]	@ 000a595a 0849
.org 0xa595c
	adds r2, #10	@ 000a595c 0a32
.org 0xa595e
	adds r0, r5, #0	@ 000a595e 281c
.org 0xa5960
	movs r3, #8	@ 000a5960 0823
.org 0xa5962
	bl 0x5760	@ 000a5962 5ff7fdfe
.org 0xa5966
	str r4, [r5, #44]	@ 000a5966 ec62
.org 0xa5968
	str r6, [r5, #36]	@ 000a5968 6e62
.org 0xa596a
	adds r0, r4, #0	@ 000a596a 201c
.org 0xa596c
	bl 0xa5a70	@ 000a596c 00f080f8
.org 0xa5970
	pop {r4, r5, r6}	@ 000a5970 70bc
.org 0xa5972
	pop {r0}	@ 000a5972 01bc
.org 0xa5974
	bx r0	@ 000a5974 0047
