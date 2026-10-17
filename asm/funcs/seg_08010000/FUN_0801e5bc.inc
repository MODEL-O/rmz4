@ FUN_0801e5bc  entry 0x0801e5bc  size 50
.thumb
.org 0x1e5bc
FUN_0801e5bc:
	push {lr}	@ 0001e5bc 00b5
.org 0x1e5be
	ldr r2, [r0, #0]	@ 0001e5be 0268
.org 0x1e5c0
	ldr r0, [pc, #12]	@ 0001e5c0 0348
.org 0x1e5c2
	adds r1, r2, r0	@ 0001e5c2 1118
.org 0x1e5c4
	ldr r0, [pc, #12]	@ 0001e5c4 0348
.org 0x1e5c6
	cmp r1, r0	@ 0001e5c6 8142
.org 0x1e5c8
	bhi.n 0x1e5d8	@ 0001e5c8 06d8
.org 0x1e5ca
	movs r0, #3	@ 0001e5ca 0320
.org 0x1e5cc
	b.n 0x1e602	@ 0001e5cc 19e0
.org 0x1e5ce
	.byte 0x00	@ 0001e5ce data
.org 0x1e5cf
	.byte 0x00	@ 0001e5cf data
.org 0x1e5d0
	.byte 0x00,0x10,0xf0,0xff	@ 0001e5d0 data
.org 0x1e5d4
	.byte 0xff,0x9f,0x05,0x00	@ 0001e5d4 data
.org 0x1e5d8
	ldr r1, [pc, #12]	@ 0001e5d8 0349
.org 0x1e5da
	adds r0, r2, r1	@ 0001e5da 5018
.org 0x1e5dc
	ldr r1, [pc, #12]	@ 0001e5dc 0349
.org 0x1e5de
	cmp r0, r1	@ 0001e5de 8842
.org 0x1e5e0
	bhi.n 0x1e5f0	@ 0001e5e0 06d8
.org 0x1e5e2
	movs r0, #2	@ 0001e5e2 0220
.org 0x1e5e4
	b.n 0x1e602	@ 0001e5e4 0de0
.org 0x1e5e6
	.byte 0x00	@ 0001e5e6 data
.org 0x1e5e7
	.byte 0x00	@ 0001e5e7 data
.org 0x1e5e8
	.byte 0x00,0xd0,0xf3,0xff	@ 0001e5e8 data
.org 0x1e5ec
	.byte 0xff,0xdf,0x01,0x00	@ 0001e5ec data
