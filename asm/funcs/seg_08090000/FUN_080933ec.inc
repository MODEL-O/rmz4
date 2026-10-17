@ FUN_080933ec  entry 0x080933ec  size 32
.thumb
.org 0x933ec
FUN_080933ec:
	push {r4, lr}	@ 000933ec 10b5
.org 0x933ee
	adds r4, r0, #0	@ 000933ee 041c
.org 0x933f0
	ldr r1, [r4, #84]	@ 000933f0 616d
.org 0x933f2
	ldr r2, [r4, #88]	@ 000933f2 a26d
.org 0x933f4
	bl 0x947b4	@ 000933f4 01f0def9
.org 0x933f8
	adds r1, r0, #0	@ 000933f8 011c
.org 0x933fa
	cmp r1, #0	@ 000933fa 0029
.org 0x933fc
	bne.n 0x93406	@ 000933fc 03d1
.org 0x933fe
	movs r0, #8	@ 000933fe 0820
.org 0x93400
	strb r0, [r4, #13]	@ 00093400 6073
.org 0x93402
	strb r1, [r4, #14]	@ 00093402 a173
.org 0x93404
	strb r1, [r4, #15]	@ 00093404 e173
.org 0x93406
	pop {r4}	@ 00093406 10bc
.org 0x93408
	pop {r0}	@ 00093408 01bc
.org 0x9340a
	bx r0	@ 0009340a 0047
