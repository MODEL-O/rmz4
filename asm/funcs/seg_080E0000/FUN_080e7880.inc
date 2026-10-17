@ FUN_080e7880  entry 0x080e7880  size 104
.thumb
.org 0xe7880
FUN_080e7880:
	push {r4, lr}	@ 000e7880 10b5
.org 0xe7882
	adds r4, r0, #0	@ 000e7882 041c
.org 0xe7884
	ldrb r2, [r4, #17]	@ 000e7884 627c
.org 0xe7886
	ldr r1, [pc, #96]	@ 000e7886 1849
.org 0xe7888
	ldrb r0, [r4, #9]	@ 000e7888 607a
.org 0xe788a
	lsls r0, r0, #2	@ 000e788a 8000
.org 0xe788c
	adds r0, r0, r1	@ 000e788c 4018
.org 0xe788e
	movs r1, #1	@ 000e788e 0121
.org 0xe7890
	str r1, [r4, #12]	@ 000e7890 e160
.org 0xe7892
	ldr r0, [r0, #0]	@ 000e7892 0068
.org 0xe7894
	ldr r0, [r0, #4]	@ 000e7894 4068
.org 0xe7896
	str r0, [r4, #20]	@ 000e7896 6061
.org 0xe7898
	ldrb r1, [r4, #10]	@ 000e7898 a17a
.org 0xe789a
	movs r0, #1	@ 000e789a 0120
.org 0xe789c
	orrs r0, r1	@ 000e789c 0843
.org 0xe789e
	movs r1, #2	@ 000e789e 0221
.org 0xe78a0
	orrs r0, r1	@ 000e78a0 0843
.org 0xe78a2
	strb r0, [r4, #10]	@ 000e78a2 a072
.org 0xe78a4
	ldr r0, [r4, #84]	@ 000e78a4 606d
.org 0xe78a6
	str r0, [r4, #100]	@ 000e78a6 6066
.org 0xe78a8
	adds r2, #1	@ 000e78a8 0132
.org 0xe78aa
	lsls r2, r2, #1	@ 000e78aa 5200
.org 0xe78ac
	str r2, [r4, #116]	@ 000e78ac 6267
.org 0xe78ae
	adds r0, r4, #0	@ 000e78ae 201c
.org 0xe78b0
	bl 0x1cc9c	@ 000e78b0 35f7f4f9
.org 0xe78b4
	movs r2, #0	@ 000e78b4 0022
.org 0xe78b6
	ldrb r1, [r4, #10]	@ 000e78b6 a17a
.org 0xe78b8
	movs r0, #239	@ 000e78b8 ef20
.org 0xe78ba
	ands r0, r1	@ 000e78ba 0840
.org 0xe78bc
	strb r0, [r4, #10]	@ 000e78bc a072
.org 0xe78be
	adds r0, r4, #0	@ 000e78be 201c
.org 0xe78c0
	adds r0, #76	@ 000e78c0 4c30
.org 0xe78c2
	strb r2, [r0, #0]	@ 000e78c2 0270
.org 0xe78c4
	adds r2, r4, #0	@ 000e78c4 221c
.org 0xe78c6
	adds r2, #74	@ 000e78c6 4a32
.org 0xe78c8
	ldrb r1, [r2, #0]	@ 000e78c8 1178
.org 0xe78ca
	movs r0, #17	@ 000e78ca 1120
.org 0xe78cc
	negs r0, r0	@ 000e78cc 4042
.org 0xe78ce
	ands r0, r1	@ 000e78ce 0840
.org 0xe78d0
	strb r0, [r2, #0]	@ 000e78d0 1070
.org 0xe78d2
	movs r1, #205	@ 000e78d2 cd21
.org 0xe78d4
	lsls r1, r1, #8	@ 000e78d4 0902
.org 0xe78d6
	adds r0, r4, #0	@ 000e78d6 201c
.org 0xe78d8
	bl 0x1cf00	@ 000e78d8 35f712fb
.org 0xe78dc
	adds r0, r4, #0	@ 000e78dc 201c
.org 0xe78de
	bl 0xe78ec	@ 000e78de 00f005f8
.org 0xe78e2
	pop {r4}	@ 000e78e2 10bc
.org 0xe78e4
	pop {r0}	@ 000e78e4 01bc
.org 0xe78e6
	bx r0	@ 000e78e6 0047
