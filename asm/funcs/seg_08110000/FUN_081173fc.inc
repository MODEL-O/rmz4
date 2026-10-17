@ FUN_081173fc  entry 0x081173fc  size 28
.thumb
.org 0x1173fc
FUN_081173fc:
	push {r4, r5, r6, r7, lr}	@ 001173fc f0b5
.org 0x1173fe
	adds r5, r0, #0	@ 001173fe 051c
.org 0x117400
	ldrb r0, [r5, #3]	@ 00117400 e878
.org 0x117402
	cmp r0, #21	@ 00117402 1528
.org 0x117404
	bls.n 0x117408	@ 00117404 00d9
.org 0x117406
	b.n 0x11763c	@ 00117406 19e1
.org 0x117408
	lsls r0, r0, #2	@ 00117408 8000
.org 0x11740a
	ldr r1, [pc, #8]	@ 0011740a 0249
.org 0x11740c
	adds r0, r0, r1	@ 0011740c 4018
.org 0x11740e
	ldr r0, [r0, #0]	@ 0011740e 0068
.org 0x117410
	mov pc, r0	@ 00117410 8746
.org 0x117412
	.byte 0x00	@ 00117412 data
.org 0x117413
	.byte 0x00	@ 00117413 data
.org 0x117414
	.byte 0x18,0x74,0x11,0x08	@ 00117414 data
