@ FUN_08009350  entry 0x08009350  size 26
.thumb
.org 0x9350
FUN_08009350:
	push {lr}	@ 00009350 00b5
.org 0x9352
	adds r2, r0, #0	@ 00009352 021c
.org 0x9354
	ldr r0, [pc, #12]	@ 00009354 0348
.org 0x9356
	cmp r2, r0	@ 00009356 8242
.org 0x9358
	bgt.n 0x9360	@ 00009358 02dc
.org 0x935a
	lsls r0, r2, #2	@ 0000935a 9000
.org 0x935c
	cmp r1, r0	@ 0000935c 8142
.org 0x935e
	bge.n 0x9368	@ 0000935e 03da
.org 0x9360
	mvns r0, r1	@ 00009360 c843
.org 0x9362
	b.n 0x936a	@ 00009362 02e0
.org 0x9364
	.byte 0xff,0x03,0x00,0x00	@ 00009364 data
.org 0x9368
	movs r0, #0	@ 00009368 0020
