@ FUN_08009204  entry 0x08009204  size 46
.thumb
.org 0x9204
FUN_08009204:
	push {lr}	@ 00009204 00b5
.org 0x9206
	adds r2, r0, #0	@ 00009206 021c
.org 0x9208
	ldr r0, [pc, #12]	@ 00009208 0348
.org 0x920a
	cmp r2, r0	@ 0000920a 8242
.org 0x920c
	ble.n 0x9230	@ 0000920c 10dd
.org 0x920e
	ldr r0, [pc, #12]	@ 0000920e 0348
.org 0x9210
	cmp r2, r0	@ 00009210 8242
.org 0x9212
	ble.n 0x9220	@ 00009212 05dd
.org 0x9214
	mvns r0, r1	@ 00009214 c843
.org 0x9216
	b.n 0x923e	@ 00009216 12e0
.org 0x9218
	.byte 0xff,0x07,0x00,0x00	@ 00009218 data
.org 0x921c
	.byte 0xff,0x0b,0x00,0x00	@ 0000921c data
.org 0x9220
	ldr r0, [pc, #16]	@ 00009220 0448
.org 0x9222
	adds r1, r1, r0	@ 00009222 0918
.org 0x9224
	ldr r3, [pc, #16]	@ 00009224 044b
.org 0x9226
	adds r0, r2, r3	@ 00009226 d018
.org 0x9228
	lsls r0, r0, #2	@ 00009228 8000
.org 0x922a
	adds r0, r1, r0	@ 0000922a 0818
.org 0x922c
	cmp r0, #0	@ 0000922c 0028
.org 0x922e
	bgt.n 0x923c	@ 0000922e 05dc
.org 0x9230
	movs r0, #0	@ 00009230 0020
