@ FUN_08066408  entry 0x08066408  size 76
.thumb
.org 0x66408
FUN_08066408:
	push {r4, r5, r6, r7, lr}	@ 00066408 f0b5
.org 0x6640a
	adds r7, r0, #0	@ 0006640a 071c
.org 0x6640c
	adds r3, r1, #0	@ 0006640c 0b1c
.org 0x6640e
	adds r4, r7, #0	@ 0006640e 3c1c
.org 0x66410
	adds r4, #192	@ 00066410 c034
.org 0x66412
	ldr r1, [r4, #0]	@ 00066412 2168
.org 0x66414
	adds r6, r3, #0	@ 00066414 1e1c
.org 0x66416
	adds r6, #188	@ 00066416 bc36
.org 0x66418
	ldr r5, [r6, #0]	@ 00066418 3568
.org 0x6641a
	adds r0, r3, #0	@ 0006641a 181c
.org 0x6641c
	adds r0, #192	@ 0006641c c030
.org 0x6641e
	ldr r2, [r0, #0]	@ 0006641e 0268
.org 0x66420
	cmp r3, r1	@ 00066420 8b42
.org 0x66422
	bne.n 0x66432	@ 00066422 06d1
.org 0x66424
	str r2, [r4, #0]	@ 00066424 2260
.org 0x66426
	cmp r2, #0	@ 00066426 002a
.org 0x66428
	beq.n 0x66444	@ 00066428 0cd0
.org 0x6642a
	adds r0, r2, #0	@ 0006642a 101c
.org 0x6642c
	adds r0, #188	@ 0006642c bc30
.org 0x6642e
	str r3, [r0, #0]	@ 0006642e 0360
.org 0x66430
	b.n 0x66444	@ 00066430 08e0
.org 0x66432
	adds r0, r5, #0	@ 00066432 281c
.org 0x66434
	adds r0, #192	@ 00066434 c030
.org 0x66436
	str r2, [r0, #0]	@ 00066436 0260
.org 0x66438
	cmp r2, #0	@ 00066438 002a
.org 0x6643a
	beq.n 0x66444	@ 0006643a 03d0
.org 0x6643c
	adds r1, r2, #0	@ 0006643c 111c
.org 0x6643e
	adds r1, #188	@ 0006643e bc31
.org 0x66440
	ldr r0, [r6, #0]	@ 00066440 3068
.org 0x66442
	str r0, [r1, #0]	@ 00066442 0860
.org 0x66444
	adds r1, r7, #0	@ 00066444 391c
.org 0x66446
	adds r1, #183	@ 00066446 b731
.org 0x66448
	ldrb r0, [r1, #0]	@ 00066448 0878
.org 0x6644a
	subs r0, #1	@ 0006644a 0138
.org 0x6644c
	strb r0, [r1, #0]	@ 0006644c 0870
.org 0x6644e
	pop {r4, r5, r6, r7}	@ 0006644e f0bc
.org 0x66450
	pop {r0}	@ 00066450 01bc
.org 0x66452
	bx r0	@ 00066452 0047
