@ FUN_080f13f0  entry 0x080f13f0  size 34
.thumb
.org 0xf13f0
FUN_080f13f0:
	push {r4, lr}	@ 000f13f0 10b5
.org 0xf13f2
	adds r4, r0, #0	@ 000f13f2 041c
.org 0xf13f4
	ldrb r0, [r4, #17]	@ 000f13f4 607c
.org 0xf13f6
	cmp r0, #6	@ 000f13f6 0628
.org 0xf13f8
	bls.n 0xf13fc	@ 000f13f8 00d9
.org 0xf13fa
	b.n 0xf152c	@ 000f13fa 97e0
.org 0xf13fc
	lsls r0, r0, #2	@ 000f13fc 8000
.org 0xf13fe
	ldr r1, [pc, #8]	@ 000f13fe 0249
.org 0xf1400
	adds r0, r0, r1	@ 000f1400 4018
.org 0xf1402
	ldr r0, [r0, #0]	@ 000f1402 0068
.org 0xf1404
	mov pc, r0	@ 000f1404 8746
.org 0xf1406
	.byte 0x00	@ 000f1406 data
.org 0xf1407
	.byte 0x00	@ 000f1407 data
.org 0xf1408
	.byte 0x0c,0x14,0x0f,0x08	@ 000f1408 data
.org 0xf140c
	.byte 0x28,0x14,0x0f,0x08	@ 000f140c data
.org 0xf1410
	.byte 0x84,0x14,0x0f,0x08	@ 000f1410 data
