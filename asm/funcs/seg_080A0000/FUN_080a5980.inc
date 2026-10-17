@ FUN_080a5980  entry 0x080a5980  size 116
.thumb
.org 0xa5980
FUN_080a5980:
	push {r4, r5, r6, lr}	@ 000a5980 70b5
.org 0xa5982
	adds r4, r0, #0	@ 000a5982 041c
.org 0xa5984
	movs r6, #0	@ 000a5984 0026
.org 0xa5986
	ldr r1, [pc, #108]	@ 000a5986 1b49
.org 0xa5988
	ldrb r0, [r4, #9]	@ 000a5988 607a
.org 0xa598a
	lsls r0, r0, #2	@ 000a598a 8000
.org 0xa598c
	adds r0, r0, r1	@ 000a598c 4018
.org 0xa598e
	movs r1, #1	@ 000a598e 0121
.org 0xa5990
	str r1, [r4, #12]	@ 000a5990 e160
.org 0xa5992
	ldr r0, [r0, #0]	@ 000a5992 0068
.org 0xa5994
	ldr r0, [r0, #4]	@ 000a5994 4068
.org 0xa5996
	str r0, [r4, #20]	@ 000a5996 6061
.org 0xa5998
	movs r2, #1	@ 000a5998 0122
.org 0xa599a
	strb r1, [r4, #13]	@ 000a599a 6173
.org 0xa599c
	strb r6, [r4, #14]	@ 000a599c a673
.org 0xa599e
	strb r6, [r4, #15]	@ 000a599e e673
.org 0xa59a0
	ldrb r0, [r4, #10]	@ 000a59a0 a07a
.org 0xa59a2
	orrs r0, r2	@ 000a59a2 1043
.org 0xa59a4
	movs r1, #2	@ 000a59a4 0221
.org 0xa59a6
	orrs r0, r1	@ 000a59a6 0843
.org 0xa59a8
	strb r0, [r4, #10]	@ 000a59a8 a072
.org 0xa59aa
	adds r0, r4, #0	@ 000a59aa 201c
.org 0xa59ac
	bl 0x1cc9c	@ 000a59ac 77f776f9
.org 0xa59b0
	ldrb r1, [r4, #10]	@ 000a59b0 a17a
.org 0xa59b2
	movs r0, #239	@ 000a59b2 ef20
.org 0xa59b4
	ands r0, r1	@ 000a59b4 0840
.org 0xa59b6
	strb r0, [r4, #10]	@ 000a59b6 a072
.org 0xa59b8
	adds r0, r4, #0	@ 000a59b8 201c
.org 0xa59ba
	adds r0, #76	@ 000a59ba 4c30
.org 0xa59bc
	strb r6, [r0, #0]	@ 000a59bc 0670
.org 0xa59be
	adds r2, r4, #0	@ 000a59be 221c
.org 0xa59c0
	adds r2, #74	@ 000a59c0 4a32
.org 0xa59c2
	ldrb r1, [r2, #0]	@ 000a59c2 1178
.org 0xa59c4
	movs r0, #17	@ 000a59c4 1120
.org 0xa59c6
	negs r0, r0	@ 000a59c6 4042
.org 0xa59c8
	ands r0, r1	@ 000a59c8 0840
.org 0xa59ca
	strb r0, [r2, #0]	@ 000a59ca 1070
.org 0xa59cc
	ldrb r1, [r4, #10]	@ 000a59cc a17a
.org 0xa59ce
	movs r0, #4	@ 000a59ce 0420
.org 0xa59d0
	orrs r0, r1	@ 000a59d0 0843
.org 0xa59d2
	strb r0, [r4, #10]	@ 000a59d2 a072
.org 0xa59d4
	adds r5, r4, #0	@ 000a59d4 251c
.org 0xa59d6
	adds r5, #116	@ 000a59d6 7435
.org 0xa59d8
	ldr r1, [pc, #28]	@ 000a59d8 0749
.org 0xa59da
	adds r2, #10	@ 000a59da 0a32
.org 0xa59dc
	adds r0, r5, #0	@ 000a59dc 281c
.org 0xa59de
	movs r3, #8	@ 000a59de 0823
.org 0xa59e0
	bl 0x5760	@ 000a59e0 5ff7befe
.org 0xa59e4
	str r4, [r5, #44]	@ 000a59e4 ec62
.org 0xa59e6
	str r6, [r5, #36]	@ 000a59e6 6e62
.org 0xa59e8
	adds r0, r4, #0	@ 000a59e8 201c
.org 0xa59ea
	bl 0xa5a70	@ 000a59ea 00f041f8
.org 0xa59ee
	pop {r4, r5, r6}	@ 000a59ee 70bc
.org 0xa59f0
	pop {r0}	@ 000a59f0 01bc
.org 0xa59f2
	bx r0	@ 000a59f2 0047
