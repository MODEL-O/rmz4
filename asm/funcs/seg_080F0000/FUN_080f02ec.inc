@ FUN_080f02ec  entry 0x080f02ec  size 32
.thumb
.org 0xf02ec
FUN_080f02ec:
	push {r4, r5, r6, r7, lr}	@ 000f02ec f0b5
.org 0xf02ee
	sub sp, #16	@ 000f02ee 84b0
.org 0xf02f0
	adds r6, r0, #0	@ 000f02f0 061c
.org 0xf02f2
	ldrb r0, [r6, #13]	@ 000f02f2 707b
.org 0xf02f4
	cmp r0, #5	@ 000f02f4 0528
.org 0xf02f6
	bls.n 0xf02fa	@ 000f02f6 00d9
.org 0xf02f8
	b.n 0xf05b4	@ 000f02f8 5ce1
.org 0xf02fa
	lsls r0, r0, #2	@ 000f02fa 8000
.org 0xf02fc
	ldr r1, [pc, #4]	@ 000f02fc 0149
.org 0xf02fe
	adds r0, r0, r1	@ 000f02fe 4018
.org 0xf0300
	ldr r0, [r0, #0]	@ 000f0300 0068
.org 0xf0302
	mov pc, r0	@ 000f0302 8746
.org 0xf0304
	.byte 0x08,0x03,0x0f,0x08	@ 000f0304 data
.org 0xf0308
	.byte 0x20,0x03,0x0f,0x08	@ 000f0308 data
