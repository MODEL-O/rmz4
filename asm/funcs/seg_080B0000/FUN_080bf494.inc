@ FUN_080bf494  entry 0x080bf494  size 144
.thumb
.org 0xbf494
FUN_080bf494:
	push {r4, r5, lr}	@ 000bf494 30b5
.org 0xbf496
	adds r4, r0, #0	@ 000bf496 041c
.org 0xbf498
	adds r5, r1, #0	@ 000bf498 0d1c
.org 0xbf49a
	cmp r2, #0	@ 000bf49a 002a
.org 0xbf49c
	beq.n 0xbf4c8	@ 000bf49c 14d0
.org 0xbf49e
	ldr r0, [r4, #88]	@ 000bf49e a06d
.org 0xbf4a0
	adds r1, r0, r2	@ 000bf4a0 8118
.org 0xbf4a2
	str r1, [r4, #88]	@ 000bf4a2 a165
.org 0xbf4a4
	cmp r2, #0	@ 000bf4a4 002a
.org 0xbf4a6
	bge.n 0xbf4b6	@ 000bf4a6 06da
.org 0xbf4a8
	ldr r0, [r4, #84]	@ 000bf4a8 606d
.org 0xbf4aa
	bl 0x7f8c	@ 000bf4aa 48f76ffd
.org 0xbf4ae
	adds r2, r0, #0	@ 000bf4ae 021c
.org 0xbf4b0
	cmp r2, #0	@ 000bf4b0 002a
.org 0xbf4b2
	ble.n 0xbf4c8	@ 000bf4b2 09dd
.org 0xbf4b4
	b.n 0xbf4c2	@ 000bf4b4 05e0
.org 0xbf4b6
	ldr r0, [r4, #84]	@ 000bf4b6 606d
.org 0xbf4b8
	bl 0x7db4	@ 000bf4b8 48f77cfc
.org 0xbf4bc
	adds r2, r0, #0	@ 000bf4bc 021c
.org 0xbf4be
	cmp r2, #0	@ 000bf4be 002a
.org 0xbf4c0
	bge.n 0xbf4c8	@ 000bf4c0 02da
.org 0xbf4c2
	ldr r1, [r4, #88]	@ 000bf4c2 a16d
.org 0xbf4c4
	adds r1, r1, r2	@ 000bf4c4 8918
.org 0xbf4c6
	str r1, [r4, #88]	@ 000bf4c6 a165
.org 0xbf4c8
	cmp r5, #0	@ 000bf4c8 002d
.org 0xbf4ca
	beq.n 0xbf528	@ 000bf4ca 2dd0
.org 0xbf4cc
	ldr r0, [r4, #84]	@ 000bf4cc 606d
.org 0xbf4ce
	adds r2, r0, r5	@ 000bf4ce 4219
.org 0xbf4d0
	str r2, [r4, #84]	@ 000bf4d0 6265
.org 0xbf4d2
	cmp r5, #0	@ 000bf4d2 002d
.org 0xbf4d4
	bge.n 0xbf4fc	@ 000bf4d4 12da
.org 0xbf4d6
	adds r0, r4, #0	@ 000bf4d6 201c
.org 0xbf4d8
	adds r0, #180	@ 000bf4d8 b430
.org 0xbf4da
	ldrb r0, [r0, #0]	@ 000bf4da 0078
.org 0xbf4dc
	cmp r0, #0	@ 000bf4dc 0028
.org 0xbf4de
	bne.n 0xbf4ec	@ 000bf4de 05d1
.org 0xbf4e0
	ldr r1, [r4, #88]	@ 000bf4e0 a16d
.org 0xbf4e2
	ldr r0, [pc, #4]	@ 000bf4e2 0148
.org 0xbf4e4
	adds r1, r1, r0	@ 000bf4e4 0918
.org 0xbf4e6
	b.n 0xbf4ee	@ 000bf4e6 02e0
.org 0xbf4e8
	.byte 0x00,0xf8,0xff,0xff	@ 000bf4e8 data
.org 0xbf4ec
	ldr r1, [r4, #88]	@ 000bf4ec a16d
.org 0xbf4ee
	adds r0, r2, #0	@ 000bf4ee 101c
.org 0xbf4f0
	bl 0x834c	@ 000bf4f0 48f72cff
.org 0xbf4f4
	adds r2, r0, #0	@ 000bf4f4 021c
.org 0xbf4f6
	cmp r2, #0	@ 000bf4f6 002a
.org 0xbf4f8
	ble.n 0xbf528	@ 000bf4f8 16dd
.org 0xbf4fa
	b.n 0xbf522	@ 000bf4fa 12e0
.org 0xbf4fc
	adds r0, r4, #0	@ 000bf4fc 201c
.org 0xbf4fe
	adds r0, #180	@ 000bf4fe b430
.org 0xbf500
	ldrb r0, [r0, #0]	@ 000bf500 0078
.org 0xbf502
	cmp r0, #0	@ 000bf502 0028
.org 0xbf504
	bne.n 0xbf514	@ 000bf504 06d1
.org 0xbf506
	ldr r1, [r4, #88]	@ 000bf506 a16d
.org 0xbf508
	ldr r0, [pc, #4]	@ 000bf508 0148
.org 0xbf50a
	adds r1, r1, r0	@ 000bf50a 0918
.org 0xbf50c
	b.n 0xbf516	@ 000bf50c 03e0
.org 0xbf50e
	.byte 0x00	@ 000bf50e data
.org 0xbf50f
	.byte 0x00	@ 000bf50f data
.org 0xbf510
	.byte 0x00,0xf8,0xff,0xff	@ 000bf510 data
.org 0xbf514
	ldr r1, [r4, #88]	@ 000bf514 a16d
.org 0xbf516
	adds r0, r2, #0	@ 000bf516 101c
.org 0xbf518
	bl 0x816c	@ 000bf518 48f728fe
.org 0xbf51c
	adds r2, r0, #0	@ 000bf51c 021c
.org 0xbf51e
	cmp r2, #0	@ 000bf51e 002a
.org 0xbf520
	bge.n 0xbf528	@ 000bf520 02da
.org 0xbf522
	ldr r1, [r4, #84]	@ 000bf522 616d
