@ FUN_0800a404  entry 0x0800a404  size 82
.thumb
.org 0xa404
FUN_0800a404:
	push {r4, r5, r6, lr}	@ 0000a404 70b5
.org 0xa406
	sub sp, #8	@ 0000a406 82b0
.org 0xa408
	asrs r2, r0, #12	@ 0000a408 0213
.org 0xa40a
	subs r2, #1	@ 0000a40a 013a
.org 0xa40c
	asrs r3, r1, #12	@ 0000a40c 0b13
.org 0xa40e
	subs r3, #1	@ 0000a40e 013b
.org 0xa410
	lsls r2, r2, #16	@ 0000a410 1204
.org 0xa412
	asrs r6, r2, #16	@ 0000a412 1614
.org 0xa414
	movs r4, #240	@ 0000a414 f024
.org 0xa416
	lsls r4, r4, #15	@ 0000a416 e403
.org 0xa418
	adds r2, r2, r4	@ 0000a418 1219
.org 0xa41a
	lsls r4, r3, #16	@ 0000a41a 1c04
.org 0xa41c
	ldr r5, [pc, #56]	@ 0000a41c 0e4d
.org 0xa41e
	lsrs r2, r2, #16	@ 0000a41e 120c
.org 0xa420
	orrs r2, r4	@ 0000a420 2243
.org 0xa422
	str r2, [sp, #0]	@ 0000a422 0092
.org 0xa424
	ldr r2, [pc, #52]	@ 0000a424 0d4a
.org 0xa426
	str r2, [sp, #4]	@ 0000a426 0192
.org 0xa428
	movs r2, #192	@ 0000a428 c022
.org 0xa42a
	lsls r2, r2, #6	@ 0000a42a 9201
.org 0xa42c
	adds r1, r1, r2	@ 0000a42c 8918
.org 0xa42e
	bl 0xa3c4	@ 0000a42e fff7c9ff
.org 0xa432
	lsls r0, r0, #16	@ 0000a432 0004
.org 0xa434
	cmp r0, #0	@ 0000a434 0028
.org 0xa436
	bne.n 0xa444	@ 0000a436 05d1
.org 0xa438
	ldr r0, [sp, #4]	@ 0000a438 0198
.org 0xa43a
	ands r0, r5	@ 0000a43a 2840
.org 0xa43c
	movs r1, #192	@ 0000a43c c021
.org 0xa43e
	lsls r1, r1, #10	@ 0000a43e 8902
.org 0xa440
	orrs r0, r1	@ 0000a440 0843
.org 0xa442
	str r0, [sp, #4]	@ 0000a442 0190
.org 0xa444
	asrs r1, r4, #16	@ 0000a444 2114
.org 0xa446
	adds r0, r6, #0	@ 0000a446 301c
.org 0xa448
	mov r2, sp	@ 0000a448 6a46
.org 0xa44a
	bl 0x736c	@ 0000a44a fcf78fff
.org 0xa44e
	add sp, #8	@ 0000a44e 02b0
.org 0xa450
	pop {r4, r5, r6}	@ 0000a450 70bc
.org 0xa452
	pop {r0}	@ 0000a452 01bc
.org 0xa454
	bx r0	@ 0000a454 0047
