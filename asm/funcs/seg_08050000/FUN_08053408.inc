@ FUN_08053408  entry 0x08053408  size 114
.thumb
.org 0x53408
FUN_08053408:
	push {r4, r5, lr}	@ 00053408 30b5
.org 0x5340a
	sub sp, #8	@ 0005340a 82b0
.org 0x5340c
	adds r4, r0, #0	@ 0005340c 041c
.org 0x5340e
	ldrb r0, [r4, #15]	@ 0005340e e07b
.org 0x53410
	cmp r0, #0	@ 00053410 0028
.org 0x53412
	bne.n 0x53422	@ 00053412 06d1
.org 0x53414
	adds r1, r4, #0	@ 00053414 211c
.org 0x53416
	adds r1, #204	@ 00053416 cc31
.org 0x53418
	movs r0, #19	@ 00053418 1320
.org 0x5341a
	str r0, [r1, #0]	@ 0005341a 0860
.org 0x5341c
	ldrb r0, [r4, #15]	@ 0005341c e07b
.org 0x5341e
	adds r0, #1	@ 0005341e 0130
.org 0x53420
	strb r0, [r4, #15]	@ 00053420 e073
.org 0x53422
	adds r0, r4, #0	@ 00053422 201c
.org 0x53424
	bl 0x1cff0	@ 00053424 c9f7e4fd
.org 0x53428
	adds r5, r4, #0	@ 00053428 251c
.org 0x5342a
	adds r5, #204	@ 0005342a cc35
.org 0x5342c
	ldr r0, [r5, #0]	@ 0005342c 2868
.org 0x5342e
	subs r0, #1	@ 0005342e 0138
.org 0x53430
	str r0, [r5, #0]	@ 00053430 2860
.org 0x53432
	movs r1, #6	@ 00053432 0621
.org 0x53434
	bl 0x129050	@ 00053434 d5f00cfe
.org 0x53438
	cmp r0, #0	@ 00053438 0028
.org 0x5343a
	bne.n 0x53466	@ 0005343a 14d1
.org 0x5343c
	ldr r0, [pc, #60]	@ 0005343c 0f48
.org 0x5343e
	bl 0x2b10	@ 0005343e aff767fb
.org 0x53442
	ldr r0, [r4, #84]	@ 00053442 606d
.org 0x53444
	ldr r1, [pc, #56]	@ 00053444 0e49
.org 0x53446
	adds r0, r0, r1	@ 00053446 4018
.org 0x53448
	str r0, [sp, #0]	@ 00053448 0090
.org 0x5344a
	ldr r0, [r4, #88]	@ 0005344a a06d
.org 0x5344c
	str r0, [sp, #4]	@ 0005344c 0190
.org 0x5344e
	adds r0, r4, #0	@ 0005344e 201c
.org 0x53450
	mov r1, sp	@ 00053450 6946
.org 0x53452
	movs r2, #0	@ 00053452 0022
.org 0x53454
	movs r3, #154	@ 00053454 9a23
.org 0x53456
	bl 0xbf530	@ 00053456 6cf06bf8
.org 0x5345a
	adds r0, r4, #0	@ 0005345a 201c
.org 0x5345c
	mov r1, sp	@ 0005345c 6946
.org 0x5345e
	movs r2, #0	@ 0005345e 0022
.org 0x53460
	movs r3, #102	@ 00053460 6623
.org 0x53462
	bl 0xbf530	@ 00053462 6cf065f8
.org 0x53466
	ldr r1, [r5, #0]	@ 00053466 2968
.org 0x53468
	cmp r1, #0	@ 00053468 0029
.org 0x5346a
	bne.n 0x53472	@ 0005346a 02d1
.org 0x5346c
	movs r0, #3	@ 0005346c 0320
.org 0x5346e
	strb r0, [r4, #14]	@ 0005346e a073
.org 0x53470
	strb r1, [r4, #15]	@ 00053470 e173
.org 0x53472
	add sp, #8	@ 00053472 02b0
.org 0x53474
	pop {r4, r5}	@ 00053474 30bc
.org 0x53476
	pop {r0}	@ 00053476 01bc
.org 0x53478
	bx r0	@ 00053478 0047
