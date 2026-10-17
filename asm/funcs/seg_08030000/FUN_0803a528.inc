@ FUN_0803a528  entry 0x0803a528  size 62
.thumb
.org 0x3a528
FUN_0803a528:
	push {lr}	@ 0003a528 00b5
.org 0x3a52a
	adds r1, r0, #0	@ 0003a52a 011c
.org 0x3a52c
	adds r0, #180	@ 0003a52c b430
.org 0x3a52e
	ldrb r0, [r0, #19]	@ 0003a52e c07c
.org 0x3a530
	cmp r0, #2	@ 0003a530 0228
.org 0x3a532
	bne.n 0x3a542	@ 0003a532 06d1
.org 0x3a534
	adds r0, r1, #0	@ 0003a534 081c
.org 0x3a536
	adds r0, #243	@ 0003a536 f330
.org 0x3a538
	ldrb r0, [r0, #0]	@ 0003a538 0078
.org 0x3a53a
	movs r2, #0	@ 0003a53a 0022
.org 0x3a53c
	cmp r0, #2	@ 0003a53c 0228
.org 0x3a53e
	bls.n 0x3a550	@ 0003a53e 07d9
.org 0x3a540
	b.n 0x3a54e	@ 0003a540 05e0
.org 0x3a542
	adds r0, r1, #0	@ 0003a542 081c
.org 0x3a544
	adds r0, #243	@ 0003a544 f330
.org 0x3a546
	ldrb r0, [r0, #0]	@ 0003a546 0078
.org 0x3a548
	movs r2, #0	@ 0003a548 0022
.org 0x3a54a
	cmp r0, #3	@ 0003a54a 0328
.org 0x3a54c
	bne.n 0x3a550	@ 0003a54c 00d1
.org 0x3a54e
	movs r2, #1	@ 0003a54e 0122
.org 0x3a550
	adds r0, r1, #0	@ 0003a550 081c
.org 0x3a552
	adds r0, #180	@ 0003a552 b430
.org 0x3a554
	ldrb r0, [r0, #19]	@ 0003a554 c07c
.org 0x3a556
	cmp r0, #3	@ 0003a556 0328
.org 0x3a558
	bne.n 0x3a560	@ 0003a558 02d1
.org 0x3a55a
	adds r0, r2, #3	@ 0003a55a d01c
.org 0x3a55c
	lsls r0, r0, #24	@ 0003a55c 0006
.org 0x3a55e
	lsrs r2, r0, #24	@ 0003a55e 020e
.org 0x3a560
	adds r0, r2, #0	@ 0003a560 101c
.org 0x3a562
	pop {r1}	@ 0003a562 02bc
.org 0x3a564
	bx r1	@ 0003a564 0847
