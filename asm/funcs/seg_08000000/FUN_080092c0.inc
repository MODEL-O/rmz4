@ FUN_080092c0  entry 0x080092c0  size 30
.thumb
.org 0x92c0
FUN_080092c0:
	push {lr}	@ 000092c0 00b5
.org 0x92c2
	adds r2, r0, #0	@ 000092c2 021c
.org 0x92c4
	ldr r0, [pc, #16]	@ 000092c4 0448
.org 0x92c6
	cmp r2, r0	@ 000092c6 8242
.org 0x92c8
	ble.n 0x92e0	@ 000092c8 0add
.org 0x92ca
	ldr r3, [pc, #16]	@ 000092ca 044b
.org 0x92cc
	adds r0, r2, r3	@ 000092cc d018
.org 0x92ce
	lsls r0, r0, #2	@ 000092ce 8000
.org 0x92d0
	cmp r1, r0	@ 000092d0 8142
.org 0x92d2
	bge.n 0x92e0	@ 000092d2 05da
.org 0x92d4
	mvns r0, r1	@ 000092d4 c843
.org 0x92d6
	b.n 0x92e2	@ 000092d6 04e0
.org 0x92d8
	.byte 0xff,0x0b,0x00,0x00	@ 000092d8 data
.org 0x92dc
	.byte 0x00,0xf4,0xff,0xff	@ 000092dc data
