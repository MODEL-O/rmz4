@ FUN_08065404  entry 0x08065404  size 130
.thumb
.org 0x65404
FUN_08065404:
	push {r4, r5, r6, lr}	@ 00065404 70b5
.org 0x65406
	adds r6, r0, #0	@ 00065406 061c
.org 0x65408
	ldrb r0, [r6, #15]	@ 00065408 f07b
.org 0x6540a
	cmp r0, #0	@ 0006540a 0028
.org 0x6540c
	bne.n 0x6541c	@ 0006540c 06d1
.org 0x6540e
	adds r0, r6, #0	@ 0006540e 301c
.org 0x65410
	movs r1, #19	@ 00065410 1321
.org 0x65412
	bl 0x65a94	@ 00065412 00f03ffb
.org 0x65416
	ldrb r0, [r6, #15]	@ 00065416 f07b
.org 0x65418
	adds r0, #1	@ 00065418 0130
.org 0x6541a
	strb r0, [r6, #15]	@ 0006541a f073
.org 0x6541c
	adds r0, r6, #0	@ 0006541c 301c
.org 0x6541e
	bl 0x1cff0	@ 0006541e b7f7e7fd
.org 0x65422
	adds r0, r6, #0	@ 00065422 301c
.org 0x65424
	adds r0, #116	@ 00065424 7430
.org 0x65426
	ldr r4, [pc, #96]	@ 00065426 184c
.org 0x65428
	ldr r3, [pc, #96]	@ 00065428 184b
.org 0x6542a
	adds r1, r6, #0	@ 0006542a 311c
.org 0x6542c
	adds r1, #180	@ 0006542c b431
.org 0x6542e
	ldrb r2, [r1, #0]	@ 0006542e 0a78
.org 0x65430
	lsls r1, r2, #1	@ 00065430 5100
.org 0x65432
	adds r1, r1, r3	@ 00065432 c918
.org 0x65434
	ldrh r1, [r1, #0]	@ 00065434 0988
.org 0x65436
	lsls r1, r1, #2	@ 00065436 8900
.org 0x65438
	adds r1, r1, r4	@ 00065438 0919
.org 0x6543a
	adds r3, r6, #0	@ 0006543a 331c
.org 0x6543c
	adds r3, #113	@ 0006543c 7133
.org 0x6543e
	movs r5, #0	@ 0006543e 0025
.org 0x65440
	ldrsb r5, [r3, r5]	@ 00065440 5d57
.org 0x65442
	ldr r1, [r1, #0]	@ 00065442 0968
.org 0x65444
	lsls r3, r5, #2	@ 00065444 ab00
.org 0x65446
	adds r3, r3, r1	@ 00065446 5b18
.org 0x65448
	ldr r4, [pc, #68]	@ 00065448 114c
.org 0x6544a
	adds r1, r6, #0	@ 0006544a 311c
.org 0x6544c
	adds r1, #181	@ 0006544c b531
.org 0x6544e
	ldrb r1, [r1, #0]	@ 0006544e 0978
.org 0x65450
	lsls r1, r1, #2	@ 00065450 8900
.org 0x65452
	adds r1, r1, r4	@ 00065452 0919
.org 0x65454
	ldr r1, [r1, #0]	@ 00065454 0968
.org 0x65456
	lsls r2, r2, #2	@ 00065456 9200
.org 0x65458
	adds r2, r2, r1	@ 00065458 5218
.org 0x6545a
	ldr r1, [r2, #0]	@ 0006545a 1168
.org 0x6545c
	adds r1, r1, r5	@ 0006545c 4919
.org 0x6545e
	ldrb r1, [r1, #0]	@ 0006545e 0978
.org 0x65460
	lsls r2, r1, #1	@ 00065460 4a00
.org 0x65462
	adds r2, r2, r1	@ 00065462 5218
.org 0x65464
	lsls r2, r2, #3	@ 00065464 d200
.org 0x65466
	ldr r1, [r3, #0]	@ 00065466 1968
.org 0x65468
	adds r1, r1, r2	@ 00065468 8918
.org 0x6546a
	bl 0x5784	@ 0006546a a0f78bf9
.org 0x6546e
	adds r0, r6, #0	@ 0006546e 301c
.org 0x65470
	adds r0, #115	@ 00065470 7330
.org 0x65472
	ldrb r0, [r0, #0]	@ 00065472 0078
.org 0x65474
	cmp r0, #3	@ 00065474 0328
.org 0x65476
	bne.n 0x65480	@ 00065476 03d1
.org 0x65478
	movs r1, #0	@ 00065478 0021
.org 0x6547a
	movs r0, #2	@ 0006547a 0220
.org 0x6547c
	strb r0, [r6, #14]	@ 0006547c b073
.org 0x6547e
	strb r1, [r6, #15]	@ 0006547e f173
.org 0x65480
	pop {r4, r5, r6}	@ 00065480 70bc
.org 0x65482
	pop {r0}	@ 00065482 01bc
.org 0x65484
	bx r0	@ 00065484 0047
