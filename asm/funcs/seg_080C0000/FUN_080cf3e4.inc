@ FUN_080cf3e4  entry 0x080cf3e4  size 208
.thumb
.org 0xcf3e4
FUN_080cf3e4:
	push {r4, r5, r6, lr}	@ 000cf3e4 70b5
.org 0xcf3e6
	mov r6, r9	@ 000cf3e6 4e46
.org 0xcf3e8
	mov r5, r8	@ 000cf3e8 4546
.org 0xcf3ea
	push {r5, r6}	@ 000cf3ea 60b4
.org 0xcf3ec
	sub sp, #20	@ 000cf3ec 85b0
.org 0xcf3ee
	adds r4, r0, #0	@ 000cf3ee 041c
.org 0xcf3f0
	ldr r1, [pc, #192]	@ 000cf3f0 3049
.org 0xcf3f2
	mov r0, sp	@ 000cf3f2 6846
.org 0xcf3f4
	movs r2, #3	@ 000cf3f4 0322
.org 0xcf3f6
	bl 0x129258	@ 000cf3f6 59f02fff
.org 0xcf3fa
	add r5, sp, #4	@ 000cf3fa 01ad
.org 0xcf3fc
	adds r1, r5, #0	@ 000cf3fc 291c
.org 0xcf3fe
	ldr r0, [pc, #184]	@ 000cf3fe 2e48
.org 0xcf400
	ldmia r0!, {r2, r3, r6}	@ 000cf400 4cc8
.org 0xcf402
	stmia r1!, {r2, r3, r6}	@ 000cf402 4cc1
.org 0xcf404
	add r6, sp, #16	@ 000cf404 04ae
.org 0xcf406
	ldr r1, [pc, #180]	@ 000cf406 2d49
.org 0xcf408
	adds r0, r6, #0	@ 000cf408 301c
.org 0xcf40a
	movs r2, #3	@ 000cf40a 0322
.org 0xcf40c
	bl 0x129258	@ 000cf40c 59f024ff
.org 0xcf410
	ldrb r0, [r4, #16]	@ 000cf410 207c
.org 0xcf412
	mov r8, r0	@ 000cf412 8046
.org 0xcf414
	movs r1, #0	@ 000cf414 0021
.org 0xcf416
	mov r9, r1	@ 000cf416 8946
.org 0xcf418
	ldr r1, [pc, #164]	@ 000cf418 2949
.org 0xcf41a
	ldrb r0, [r4, #9]	@ 000cf41a 607a
.org 0xcf41c
	lsls r0, r0, #2	@ 000cf41c 8000
.org 0xcf41e
	adds r0, r0, r1	@ 000cf41e 4018
.org 0xcf420
	movs r1, #1	@ 000cf420 0121
.org 0xcf422
	str r1, [r4, #12]	@ 000cf422 e160
.org 0xcf424
	ldr r0, [r0, #0]	@ 000cf424 0068
.org 0xcf426
	ldr r0, [r0, #4]	@ 000cf426 4068
.org 0xcf428
	str r0, [r4, #20]	@ 000cf428 6061
.org 0xcf42a
	mov r0, sp	@ 000cf42a 6846
.org 0xcf42c
	add r0, r8	@ 000cf42c 4044
.org 0xcf42e
	ldrb r0, [r0, #0]	@ 000cf42e 0078
.org 0xcf430
	strb r0, [r4, #13]	@ 000cf430 6073
.org 0xcf432
	mov r2, r9	@ 000cf432 4a46
.org 0xcf434
	strb r2, [r4, #14]	@ 000cf434 a273
.org 0xcf436
	strb r2, [r4, #15]	@ 000cf436 e273
.org 0xcf438
	ldrb r0, [r4, #10]	@ 000cf438 a07a
.org 0xcf43a
	orrs r0, r1	@ 000cf43a 0843
.org 0xcf43c
	movs r1, #2	@ 000cf43c 0221
.org 0xcf43e
	orrs r0, r1	@ 000cf43e 0843
.org 0xcf440
	strb r0, [r4, #10]	@ 000cf440 a072
.org 0xcf442
	adds r0, r4, #0	@ 000cf442 201c
.org 0xcf444
	bl 0x1cc9c	@ 000cf444 4df72afc
.org 0xcf448
	ldrb r1, [r4, #10]	@ 000cf448 a17a
.org 0xcf44a
	movs r0, #239	@ 000cf44a ef20
.org 0xcf44c
	ands r0, r1	@ 000cf44c 0840
.org 0xcf44e
	strb r0, [r4, #10]	@ 000cf44e a072
.org 0xcf450
	adds r0, r4, #0	@ 000cf450 201c
.org 0xcf452
	adds r0, #76	@ 000cf452 4c30
.org 0xcf454
	mov r3, r9	@ 000cf454 4b46
.org 0xcf456
	strb r3, [r0, #0]	@ 000cf456 0370
.org 0xcf458
	adds r2, r4, #0	@ 000cf458 221c
.org 0xcf45a
	adds r2, #74	@ 000cf45a 4a32
.org 0xcf45c
	ldrb r1, [r2, #0]	@ 000cf45c 1178
.org 0xcf45e
	movs r0, #17	@ 000cf45e 1120
.org 0xcf460
	negs r0, r0	@ 000cf460 4042
.org 0xcf462
	ands r0, r1	@ 000cf462 0840
.org 0xcf464
	strb r0, [r2, #0]	@ 000cf464 1070
.org 0xcf466
	mov r1, r8	@ 000cf466 4146
.org 0xcf468
	lsls r0, r1, #2	@ 000cf468 8800
.org 0xcf46a
	adds r5, r5, r0	@ 000cf46a 2d18
.org 0xcf46c
	ldrh r1, [r5, #0]	@ 000cf46c 2988
.org 0xcf46e
	adds r0, r4, #0	@ 000cf46e 201c
.org 0xcf470
	bl 0x1cf00	@ 000cf470 4df746fd
.org 0xcf474
	ldrb r1, [r4, #10]	@ 000cf474 a17a
.org 0xcf476
	movs r0, #4	@ 000cf476 0420
.org 0xcf478
	orrs r0, r1	@ 000cf478 0843
.org 0xcf47a
	strb r0, [r4, #10]	@ 000cf47a a072
.org 0xcf47c
	adds r5, r4, #0	@ 000cf47c 251c
.org 0xcf47e
	adds r5, #116	@ 000cf47e 7435
.org 0xcf480
	add r6, r8	@ 000cf480 4644
.org 0xcf482
	ldrb r0, [r6, #0]	@ 000cf482 3078
.org 0xcf484
	lsls r1, r0, #1	@ 000cf484 4100
.org 0xcf486
	adds r1, r1, r0	@ 000cf486 0918
.org 0xcf488
	lsls r1, r1, #3	@ 000cf488 c900
.org 0xcf48a
	ldr r0, [pc, #56]	@ 000cf48a 0e48
.org 0xcf48c
	adds r1, r1, r0	@ 000cf48c 0918
.org 0xcf48e
	adds r2, r4, #0	@ 000cf48e 221c
.org 0xcf490
	adds r2, #84	@ 000cf490 5432
.org 0xcf492
	adds r0, r5, #0	@ 000cf492 281c
.org 0xcf494
	movs r3, #64	@ 000cf494 4023
.org 0xcf496
	bl 0x5760	@ 000cf496 36f763f9
.org 0xcf49a
	str r4, [r5, #44]	@ 000cf49a ec62
.org 0xcf49c
	mov r2, r9	@ 000cf49c 4a46
.org 0xcf49e
	str r2, [r5, #36]	@ 000cf49e 6a62
.org 0xcf4a0
	adds r0, r4, #0	@ 000cf4a0 201c
.org 0xcf4a2
	bl 0xcf4c8	@ 000cf4a2 00f011f8
.org 0xcf4a6
	add sp, #20	@ 000cf4a6 05b0
.org 0xcf4a8
	pop {r3, r4}	@ 000cf4a8 18bc
.org 0xcf4aa
	mov r8, r3	@ 000cf4aa 9846
.org 0xcf4ac
	mov r9, r4	@ 000cf4ac a146
.org 0xcf4ae
	pop {r4, r5, r6}	@ 000cf4ae 70bc
.org 0xcf4b0
	pop {r0}	@ 000cf4b0 01bc
.org 0xcf4b2
	bx r0	@ 000cf4b2 0047
