@ FUN_080383f0  entry 0x080383f0  size 60
.thumb
.org 0x383f0
FUN_080383f0:
	push {lr}	@ 000383f0 00b5
.org 0x383f2
	adds r1, r0, #0	@ 000383f2 011c
.org 0x383f4
	movs r0, #128	@ 000383f4 8020
.org 0x383f6
	lsls r0, r0, #1	@ 000383f6 4000
.org 0x383f8
	adds r2, r1, r0	@ 000383f8 0a18
.org 0x383fa
	ldrb r0, [r2, #0]	@ 000383fa 1078
.org 0x383fc
	cmp r0, #3	@ 000383fc 0328
.org 0x383fe
	bne.n 0x38428	@ 000383fe 13d1
.org 0x38400
	movs r3, #162	@ 00038400 a223
.org 0x38402
	lsls r3, r3, #1	@ 00038402 5b00
.org 0x38404
	adds r0, r1, r3	@ 00038404 c818
.org 0x38406
	ldrb r0, [r0, #0]	@ 00038406 0078
.org 0x38408
	cmp r0, #1	@ 00038408 0128
.org 0x3840a
	bne.n 0x38428	@ 0003840a 0dd1
.org 0x3840c
	ldrb r0, [r1, #13]	@ 0003840c 487b
.org 0x3840e
	cmp r0, #1	@ 0003840e 0128
.org 0x38410
	bne.n 0x38428	@ 00038410 0ad1
.org 0x38412
	subs r3, #67	@ 00038412 433b
.org 0x38414
	adds r0, r1, r3	@ 00038414 c818
.org 0x38416
	ldrb r0, [r0, #0]	@ 00038416 0078
.org 0x38418
	cmp r0, #2	@ 00038418 0228
.org 0x3841a
	bne.n 0x38428	@ 0003841a 05d1
.org 0x3841c
	ldr r0, [pc, #12]	@ 0003841c 0348
.org 0x3841e
	adds r1, r1, r0	@ 0003841e 0918
.org 0x38420
	movs r0, #255	@ 00038420 ff20
.org 0x38422
	strb r0, [r1, #0]	@ 00038422 0870
.org 0x38424
	movs r0, #0	@ 00038424 0020
.org 0x38426
	strb r0, [r2, #0]	@ 00038426 1070
.org 0x38428
	pop {r0}	@ 00038428 01bc
.org 0x3842a
	bx r0	@ 0003842a 0047
