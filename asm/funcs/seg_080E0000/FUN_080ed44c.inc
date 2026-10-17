@ FUN_080ed44c  entry 0x080ed44c  size 84
.thumb
.org 0xed44c
FUN_080ed44c:
	push {r4, lr}	@ 000ed44c 10b5
.org 0xed44e
	adds r4, r0, #0	@ 000ed44e 041c
.org 0xed450
	ldrb r0, [r4, #18]	@ 000ed450 a07c
.org 0xed452
	subs r0, #1	@ 000ed452 0138
.org 0xed454
	strb r0, [r4, #18]	@ 000ed454 a074
.org 0xed456
	lsls r0, r0, #24	@ 000ed456 0006
.org 0xed458
	cmp r0, #0	@ 000ed458 0028
.org 0xed45a
	bne.n 0xed48c	@ 000ed45a 17d1
.org 0xed45c
	ldr r2, [pc, #64]	@ 000ed45c 104a
.org 0xed45e
	ldr r1, [r2, #0]	@ 000ed45e 1168
.org 0xed460
	ldr r0, [pc, #64]	@ 000ed460 1048
.org 0xed462
	muls r0, r1	@ 000ed462 4843
.org 0xed464
	ldr r1, [pc, #64]	@ 000ed464 1049
.org 0xed466
	adds r0, r0, r1	@ 000ed466 4018
.org 0xed468
	lsls r0, r0, #1	@ 000ed468 4000
.org 0xed46a
	lsrs r1, r0, #1	@ 000ed46a 4108
.org 0xed46c
	str r1, [r2, #0]	@ 000ed46c 1160
.org 0xed46e
	lsrs r0, r0, #17	@ 000ed46e 400c
.org 0xed470
	movs r1, #9	@ 000ed470 0921
.org 0xed472
	bl 0x129198	@ 000ed472 3bf091fe
.org 0xed476
	adds r1, r0, #0	@ 000ed476 011c
.org 0xed478
	lsls r1, r1, #24	@ 000ed478 0906
.org 0xed47a
	lsrs r1, r1, #24	@ 000ed47a 090e
.org 0xed47c
	movs r0, #3	@ 000ed47c 0320
.org 0xed47e
	ands r0, r1	@ 000ed47e 0840
.org 0xed480
	adds r0, #1	@ 000ed480 0130
.org 0xed482
	strb r0, [r4, #18]	@ 000ed482 a074
.org 0xed484
	adds r0, r4, #0	@ 000ed484 201c
.org 0xed486
	adds r0, #84	@ 000ed486 5430
.org 0xed488
	bl 0xed4f0	@ 000ed488 00f032f8
.org 0xed48c
	ldr r0, [r4, #40]	@ 000ed48c a06a
.org 0xed48e
	ldrb r0, [r0, #12]	@ 000ed48e 007b
.org 0xed490
	cmp r0, #1	@ 000ed490 0128
.org 0xed492
	bls.n 0xed49a	@ 000ed492 02d9
.org 0xed494
	adds r0, r4, #0	@ 000ed494 201c
.org 0xed496
	bl 0xe954c	@ 000ed496 fcf759f8
.org 0xed49a
	pop {r4}	@ 000ed49a 10bc
.org 0xed49c
	pop {r0}	@ 000ed49c 01bc
.org 0xed49e
	bx r0	@ 000ed49e 0047
