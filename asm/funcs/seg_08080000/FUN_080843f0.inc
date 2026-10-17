@ FUN_080843f0  entry 0x080843f0  size 90
.thumb
.org 0x843f0
FUN_080843f0:
	push {r4, r5, lr}	@ 000843f0 30b5
.org 0x843f2
	adds r4, r0, #0	@ 000843f2 041c
.org 0x843f4
	ldrb r0, [r4, #14]	@ 000843f4 a07b
.org 0x843f6
	cmp r0, #0	@ 000843f6 0028
.org 0x843f8
	bne.n 0x8440e	@ 000843f8 09d1
.org 0x843fa
	movs r1, #224	@ 000843fa e021
.org 0x843fc
	lsls r1, r1, #5	@ 000843fc 4901
.org 0x843fe
	adds r0, r4, #0	@ 000843fe 201c
.org 0x84400
	bl 0x1cf00	@ 00084400 98f77efd
.org 0x84404
	movs r0, #120	@ 00084404 7820
.org 0x84406
	strb r0, [r4, #18]	@ 00084406 a074
.org 0x84408
	ldrb r0, [r4, #14]	@ 00084408 a07b
.org 0x8440a
	adds r0, #1	@ 0008440a 0130
.org 0x8440c
	strb r0, [r4, #14]	@ 0008440c a073
.org 0x8440e
	adds r1, r4, #0	@ 0008440e 211c
.org 0x84410
	adds r1, #180	@ 00084410 b431
.org 0x84412
	movs r5, #0	@ 00084412 0025
.org 0x84414
	movs r0, #1	@ 00084414 0120
.org 0x84416
	strb r0, [r1, #11]	@ 00084416 c872
.org 0x84418
	ldr r0, [r4, #84]	@ 00084418 606d
.org 0x8441a
	ldr r1, [r4, #88]	@ 0008441a a16d
.org 0x8441c
	movs r2, #176	@ 0008441c b022
.org 0x8441e
	lsls r2, r2, #4	@ 0008441e 1201
.org 0x84420
	adds r1, r1, r2	@ 00084420 8918
.org 0x84422
	bl 0x7c7c	@ 00084422 83f72bfc
.org 0x84426
	lsls r0, r0, #16	@ 00084426 0004
.org 0x84428
	cmp r0, #0	@ 00084428 0028
.org 0x8442a
	bne.n 0x84430	@ 0008442a 01d1
.org 0x8442c
	strb r5, [r4, #13]	@ 0008442c 6573
.org 0x8442e
	b.n 0x84442	@ 0008442e 08e0
.org 0x84430
	ldrb r0, [r4, #18]	@ 00084430 a07c
.org 0x84432
	subs r0, #1	@ 00084432 0138
.org 0x84434
	strb r0, [r4, #18]	@ 00084434 a074
.org 0x84436
	lsls r0, r0, #24	@ 00084436 0006
.org 0x84438
	lsrs r0, r0, #24	@ 00084438 000e
.org 0x8443a
	cmp r0, #255	@ 0008443a ff28
.org 0x8443c
	bne.n 0x84444	@ 0008443c 02d1
.org 0x8443e
	movs r0, #3	@ 0008443e 0320
.org 0x84440
	strb r0, [r4, #13]	@ 00084440 6073
.org 0x84442
	strb r5, [r4, #14]	@ 00084442 a573
.org 0x84444
	pop {r4, r5}	@ 00084444 30bc
.org 0x84446
	pop {r0}	@ 00084446 01bc
.org 0x84448
	bx r0	@ 00084448 0047
