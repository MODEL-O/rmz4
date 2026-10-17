@ FUN_080932d8  entry 0x080932d8  size 52
.thumb
.org 0x932d8
FUN_080932d8:
	push {r4, lr}	@ 000932d8 10b5
.org 0x932da
	adds r4, r0, #0	@ 000932da 041c
.org 0x932dc
	bl 0x94f38	@ 000932dc 01f02cfe
.org 0x932e0
	cmp r0, #0	@ 000932e0 0028
.org 0x932e2
	beq.n 0x932ee	@ 000932e2 04d0
.org 0x932e4
	movs r1, #0	@ 000932e4 0021
.org 0x932e6
	movs r0, #3	@ 000932e6 0320
.org 0x932e8
	strb r0, [r4, #13]	@ 000932e8 6073
.org 0x932ea
	strb r1, [r4, #14]	@ 000932ea a173
.org 0x932ec
	strb r1, [r4, #15]	@ 000932ec e173
.org 0x932ee
	ldr r1, [r4, #84]	@ 000932ee 616d
.org 0x932f0
	ldr r2, [r4, #88]	@ 000932f0 a26d
.org 0x932f2
	adds r0, r4, #0	@ 000932f2 201c
.org 0x932f4
	bl 0x947b4	@ 000932f4 01f05efa
.org 0x932f8
	adds r1, r0, #0	@ 000932f8 011c
.org 0x932fa
	cmp r1, #0	@ 000932fa 0029
.org 0x932fc
	bne.n 0x93306	@ 000932fc 03d1
.org 0x932fe
	movs r0, #8	@ 000932fe 0820
.org 0x93300
	strb r0, [r4, #13]	@ 00093300 6073
.org 0x93302
	strb r1, [r4, #14]	@ 00093302 a173
.org 0x93304
	strb r1, [r4, #15]	@ 00093304 e173
.org 0x93306
	pop {r4}	@ 00093306 10bc
.org 0x93308
	pop {r0}	@ 00093308 01bc
.org 0x9330a
	bx r0	@ 0009330a 0047
