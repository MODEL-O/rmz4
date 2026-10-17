@ FUN_0809c3cc  entry 0x0809c3cc  size 190
.thumb
.org 0x9c3cc
FUN_0809c3cc:
	push {r4, r5, r6, r7, lr}	@ 0009c3cc f0b5
.org 0x9c3ce
	mov r7, r9	@ 0009c3ce 4f46
.org 0x9c3d0
	mov r6, r8	@ 0009c3d0 4646
.org 0x9c3d2
	push {r6, r7}	@ 0009c3d2 c0b4
.org 0x9c3d4
	sub sp, #28	@ 0009c3d4 87b0
.org 0x9c3d6
	adds r4, r0, #0	@ 0009c3d6 041c
.org 0x9c3d8
	ldr r1, [pc, #148]	@ 0009c3d8 2549
.org 0x9c3da
	mov r0, sp	@ 0009c3da 6846
.org 0x9c3dc
	movs r2, #16	@ 0009c3dc 1022
.org 0x9c3de
	bl 0x129258	@ 0009c3de 8cf03bff
.org 0x9c3e2
	add r5, sp, #16	@ 0009c3e2 04ad
.org 0x9c3e4
	ldr r1, [pc, #140]	@ 0009c3e4 2349
.org 0x9c3e6
	adds r0, r5, #0	@ 0009c3e6 281c
.org 0x9c3e8
	movs r2, #8	@ 0009c3e8 0822
.org 0x9c3ea
	bl 0x129258	@ 0009c3ea 8cf035ff
.org 0x9c3ee
	ldrb r2, [r4, #17]	@ 0009c3ee 627c
.org 0x9c3f0
	lsls r3, r2, #2	@ 0009c3f0 9300
.org 0x9c3f2
	mov r0, sp	@ 0009c3f2 6846
.org 0x9c3f4
	adds r0, r0, r3	@ 0009c3f4 c018
.org 0x9c3f6
	mov r8, r0	@ 0009c3f6 8046
.org 0x9c3f8
	movs r1, #0	@ 0009c3f8 0021
.org 0x9c3fa
	ldrsh r0, [r0, r1]	@ 0009c3fa 405e
.org 0x9c3fc
	mov r8, r0	@ 0009c3fc 8046
.org 0x9c3fe
	ldr r0, [r4, #84]	@ 0009c3fe 606d
.org 0x9c400
	mov r1, r8	@ 0009c400 4146
.org 0x9c402
	adds r6, r0, r1	@ 0009c402 4618
.org 0x9c404
	mov r0, sp	@ 0009c404 6846
.org 0x9c406
	adds r0, #2	@ 0009c406 0230
.org 0x9c408
	adds r0, r0, r3	@ 0009c408 c018
.org 0x9c40a
	movs r3, #0	@ 0009c40a 0023
.org 0x9c40c
	ldrsh r1, [r0, r3]	@ 0009c40c c15e
.org 0x9c40e
	ldr r0, [r4, #88]	@ 0009c40e a06d
.org 0x9c410
	adds r7, r0, r1	@ 0009c410 4718
.org 0x9c412
	lsls r2, r2, #1	@ 0009c412 5200
.org 0x9c414
	adds r0, r5, r2	@ 0009c414 a818
.org 0x9c416
	ldrb r0, [r0, #0]	@ 0009c416 0078
.org 0x9c418
	lsls r0, r0, #24	@ 0009c418 0006
.org 0x9c41a
	asrs r0, r0, #24	@ 0009c41a 0016
.org 0x9c41c
	lsls r0, r0, #11	@ 0009c41c c002
.org 0x9c41e
	subs r6, r6, r0	@ 0009c41e 361a
.org 0x9c420
	mov r1, sp	@ 0009c420 6946
.org 0x9c422
	adds r1, #17	@ 0009c422 1131
.org 0x9c424
	adds r1, r1, r2	@ 0009c424 8918
.org 0x9c426
	movs r0, #0	@ 0009c426 0020
.org 0x9c428
	ldrsb r0, [r1, r0]	@ 0009c428 0856
.org 0x9c42a
	lsls r0, r0, #11	@ 0009c42a c002
.org 0x9c42c
	subs r7, r7, r0	@ 0009c42c 3f1a
.org 0x9c42e
	movs r3, #0	@ 0009c42e 0023
.org 0x9c430
	mov r9, r5	@ 0009c430 a946
.org 0x9c432
	mov r8, r2	@ 0009c432 9046
.org 0x9c434
	adds r5, r1, #0	@ 0009c434 0d1c
.org 0x9c436
	movs r4, #1	@ 0009c436 0124
.org 0x9c438
	negs r4, r4	@ 0009c438 6442
.org 0x9c43a
	adds r2, r7, #0	@ 0009c43a 3a1c
.org 0x9c43c
	adds r1, r6, #0	@ 0009c43c 311c
.org 0x9c43e
	cmp r3, #0	@ 0009c43e 002b
.org 0x9c440
	beq.n 0x9c458	@ 0009c440 0ad0
.org 0x9c442
	mov r0, r9	@ 0009c442 4846
.org 0x9c444
	add r0, r8	@ 0009c444 4044
.org 0x9c446
	ldrb r0, [r0, #0]	@ 0009c446 0078
.org 0x9c448
	lsls r0, r0, #24	@ 0009c448 0006
.org 0x9c44a
	asrs r0, r0, #24	@ 0009c44a 0016
.org 0x9c44c
	muls r0, r4	@ 0009c44c 6043
.org 0x9c44e
	adds r1, r1, r0	@ 0009c44e 0918
.org 0x9c450
	movs r0, #0	@ 0009c450 0020
.org 0x9c452
	ldrsb r0, [r5, r0]	@ 0009c452 2856
.org 0x9c454
	muls r0, r4	@ 0009c454 6043
.org 0x9c456
	adds r2, r2, r0	@ 0009c456 1218
.org 0x9c458
	adds r0, r1, #0	@ 0009c458 081c
.org 0x9c45a
	adds r1, r2, #0	@ 0009c45a 111c
.org 0x9c45c
	str r3, [sp, #24]	@ 0009c45c 0693
.org 0x9c45e
	bl 0x7c7c	@ 0009c45e 6bf70dfc
.org 0x9c462
	lsls r0, r0, #16	@ 0009c462 0004
.org 0x9c464
	ldr r3, [sp, #24]	@ 0009c464 069b
.org 0x9c466
	cmp r0, #0	@ 0009c466 0028
.org 0x9c468
	beq.n 0x9c478	@ 0009c468 06d0
.org 0x9c46a
	movs r0, #1	@ 0009c46a 0120
.org 0x9c46c
	b.n 0x9c486	@ 0009c46c 0be0
.org 0x9c46e
	.byte 0x00	@ 0009c46e data
.org 0x9c46f
	.byte 0x00	@ 0009c46f data
.org 0x9c470
	.byte 0xd0,0x9c,0x12,0x08	@ 0009c470 data
.org 0x9c474
	.byte 0xe0,0x9c,0x12,0x08	@ 0009c474 data
.org 0x9c478
	movs r0, #128	@ 0009c478 8020
.org 0x9c47a
	lsls r0, r0, #5	@ 0009c47a 4001
.org 0x9c47c
	adds r4, r4, r0	@ 0009c47c 2418
.org 0x9c47e
	adds r3, #1	@ 0009c47e 0133
.org 0x9c480
	cmp r3, #1	@ 0009c480 012b
.org 0x9c482
	ble.n 0x9c43a	@ 0009c482 dadd
.org 0x9c484
	movs r0, #0	@ 0009c484 0020
.org 0x9c486
	add sp, #28	@ 0009c486 07b0
.org 0x9c488
	pop {r3, r4}	@ 0009c488 18bc
