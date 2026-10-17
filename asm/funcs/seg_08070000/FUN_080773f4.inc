@ FUN_080773f4  entry 0x080773f4  size 28
.thumb
.org 0x773f4
FUN_080773f4:
	push {r4, r5, lr}	@ 000773f4 30b5
.org 0x773f6
	adds r4, r0, #0	@ 000773f6 041c
.org 0x773f8
	ldrb r0, [r4, #15]	@ 000773f8 e07b
.org 0x773fa
	cmp r0, #4	@ 000773fa 0428
.org 0x773fc
	bls.n 0x77400	@ 000773fc 00d9
.org 0x773fe
	b.n 0x775e2	@ 000773fe f0e0
.org 0x77400
	lsls r0, r0, #2	@ 00077400 8000
.org 0x77402
	ldr r1, [pc, #8]	@ 00077402 0249
.org 0x77404
	adds r0, r0, r1	@ 00077404 4018
.org 0x77406
	ldr r0, [r0, #0]	@ 00077406 0068
.org 0x77408
	mov pc, r0	@ 00077408 8746
.org 0x7740a
	.byte 0x00	@ 0007740a data
.org 0x7740b
	.byte 0x00	@ 0007740b data
.org 0x7740c
	.byte 0x10,0x74,0x07,0x08	@ 0007740c data
