@ FUN_080ff37c  entry 0x080ff37c  size 182
.thumb
.org 0xff37c
FUN_080ff37c:
	push {r4, r5, r6, lr}	@ 000ff37c 70b5
.org 0xff37e
	mov r6, r8	@ 000ff37e 4646
.org 0xff380
	push {r6}	@ 000ff380 40b4
.org 0xff382
	adds r4, r0, #0	@ 000ff382 041c
.org 0xff384
	bl 0x1cc9c	@ 000ff384 1df78afc
.org 0xff388
	ldrb r1, [r4, #10]	@ 000ff388 a17a
.org 0xff38a
	movs r0, #1	@ 000ff38a 0120
.org 0xff38c
	orrs r0, r1	@ 000ff38c 0843
.org 0xff38e
	movs r1, #2	@ 000ff38e 0221
.org 0xff390
	orrs r0, r1	@ 000ff390 0843
.org 0xff392
	strb r0, [r4, #10]	@ 000ff392 a072
.org 0xff394
	ldr r1, [pc, #156]	@ 000ff394 2749
.org 0xff396
	adds r0, r4, #0	@ 000ff396 201c
.org 0xff398
	bl 0x1cf00	@ 000ff398 1df7b2fd
.org 0xff39c
	adds r0, r4, #0	@ 000ff39c 201c
.org 0xff39e
	bl 0x1cff0	@ 000ff39e 1df727fe
.org 0xff3a2
	movs r6, #0	@ 000ff3a2 0026
.org 0xff3a4
	ldrb r1, [r4, #10]	@ 000ff3a4 a17a
.org 0xff3a6
	movs r0, #239	@ 000ff3a6 ef20
.org 0xff3a8
	ands r0, r1	@ 000ff3a8 0840
.org 0xff3aa
	strb r0, [r4, #10]	@ 000ff3aa a072
.org 0xff3ac
	movs r0, #1	@ 000ff3ac 0120
.org 0xff3ae
	mov r8, r0	@ 000ff3ae 8046
.org 0xff3b0
	adds r0, r4, #0	@ 000ff3b0 201c
.org 0xff3b2
	adds r0, #76	@ 000ff3b2 4c30
.org 0xff3b4
	strb r6, [r0, #0]	@ 000ff3b4 0670
.org 0xff3b6
	adds r2, r4, #0	@ 000ff3b6 221c
.org 0xff3b8
	adds r2, #74	@ 000ff3b8 4a32
.org 0xff3ba
	ldrb r1, [r2, #0]	@ 000ff3ba 1178
.org 0xff3bc
	movs r0, #17	@ 000ff3bc 1120
.org 0xff3be
	negs r0, r0	@ 000ff3be 4042
.org 0xff3c0
	ands r0, r1	@ 000ff3c0 0840
.org 0xff3c2
	strb r0, [r2, #0]	@ 000ff3c2 1070
.org 0xff3c4
	ldrb r0, [r4, #10]	@ 000ff3c4 a07a
.org 0xff3c6
	movs r1, #4	@ 000ff3c6 0421
.org 0xff3c8
	orrs r0, r1	@ 000ff3c8 0843
.org 0xff3ca
	strb r0, [r4, #10]	@ 000ff3ca a072
.org 0xff3cc
	adds r5, r4, #0	@ 000ff3cc 251c
.org 0xff3ce
	adds r5, #116	@ 000ff3ce 7435
.org 0xff3d0
	ldr r1, [pc, #100]	@ 000ff3d0 1949
.org 0xff3d2
	adds r2, #10	@ 000ff3d2 0a32
.org 0xff3d4
	adds r0, r5, #0	@ 000ff3d4 281c
.org 0xff3d6
	movs r3, #8	@ 000ff3d6 0823
.org 0xff3d8
	bl 0x5760	@ 000ff3d8 06f7c2f9
.org 0xff3dc
	str r4, [r5, #44]	@ 000ff3dc ec62
.org 0xff3de
	ldr r0, [pc, #92]	@ 000ff3de 1748
.org 0xff3e0
	str r0, [r5, #36]	@ 000ff3e0 6862
.org 0xff3e2
	ldrb r1, [r4, #11]	@ 000ff3e2 e17a
.org 0xff3e4
	movs r0, #8	@ 000ff3e4 0820
.org 0xff3e6
	orrs r0, r1	@ 000ff3e6 0843
.org 0xff3e8
	strb r0, [r4, #11]	@ 000ff3e8 e072
.org 0xff3ea
	ldr r0, [pc, #84]	@ 000ff3ea 1548
.org 0xff3ec
	str r0, [r4, #48]	@ 000ff3ec 2063
.org 0xff3ee
	movs r2, #0	@ 000ff3ee 0022
.org 0xff3f0
	movs r0, #15	@ 000ff3f0 0f20
.org 0xff3f2
	strh r0, [r4, #38]	@ 000ff3f2 e084
.org 0xff3f4
	ldr r0, [r4, #88]	@ 000ff3f4 a06d
.org 0xff3f6
	movs r1, #128	@ 000ff3f6 8021
.org 0xff3f8
	lsls r1, r1, #6	@ 000ff3f8 8901
.org 0xff3fa
	adds r0, r0, r1	@ 000ff3fa 4018
.org 0xff3fc
	str r0, [r4, #88]	@ 000ff3fc a065
.org 0xff3fe
	adds r1, r4, #0	@ 000ff3fe 211c
.org 0xff400
	adds r1, #184	@ 000ff400 b831
.org 0xff402
	str r0, [r1, #0]	@ 000ff402 0860
.org 0xff404
	str r6, [r4, #44]	@ 000ff404 e662
.org 0xff406
	movs r0, #8	@ 000ff406 0820
.org 0xff408
	strb r0, [r4, #18]	@ 000ff408 a074
.org 0xff40a
	adds r0, r4, #0	@ 000ff40a 201c
.org 0xff40c
	adds r0, #189	@ 000ff40c bd30
.org 0xff40e
	strb r2, [r0, #0]	@ 000ff40e 0270
.org 0xff410
	ldr r1, [pc, #48]	@ 000ff410 0c49
.org 0xff412
	ldrb r0, [r4, #9]	@ 000ff412 607a
.org 0xff414
	lsls r0, r0, #2	@ 000ff414 8000
.org 0xff416
	adds r0, r0, r1	@ 000ff416 4018
.org 0xff418
	mov r1, r8	@ 000ff418 4146
.org 0xff41a
	str r1, [r4, #12]	@ 000ff41a e160
.org 0xff41c
	ldr r0, [r0, #0]	@ 000ff41c 0068
.org 0xff41e
	ldr r0, [r0, #4]	@ 000ff41e 4068
.org 0xff420
	str r0, [r4, #20]	@ 000ff420 6061
.org 0xff422
	adds r0, r4, #0	@ 000ff422 201c
.org 0xff424
	bl 0xff134	@ 000ff424 fff786fe
.org 0xff428
	pop {r3}	@ 000ff428 08bc
.org 0xff42a
	mov r8, r3	@ 000ff42a 9846
.org 0xff42c
	pop {r4, r5, r6}	@ 000ff42c 70bc
.org 0xff42e
	pop {r0}	@ 000ff42e 01bc
.org 0xff430
	bx r0	@ 000ff430 0047
