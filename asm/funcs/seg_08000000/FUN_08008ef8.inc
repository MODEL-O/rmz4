@ FUN_08008ef8  entry 0x08008ef8  size 24
.thumb
.org 0x8ef8
FUN_08008ef8:
	push {lr}	@ 00008ef8 00b5
.org 0x8efa
	ldr r2, [pc, #16]	@ 00008efa 044a
.org 0x8efc
	adds r1, r1, r2	@ 00008efc 8918
.org 0x8efe
	asrs r0, r0, #2	@ 00008efe 8010
.org 0x8f00
	adds r0, r1, r0	@ 00008f00 0818
.org 0x8f02
	cmp r0, #0	@ 00008f02 0028
.org 0x8f04
	bgt.n 0x8f10	@ 00008f04 04dc
.org 0x8f06
	movs r0, #0	@ 00008f06 0020
.org 0x8f08
	b.n 0x8f12	@ 00008f08 03e0
.org 0x8f0a
	.byte 0x00	@ 00008f0a data
.org 0x8f0b
	.byte 0x00	@ 00008f0b data
.org 0x8f0c
	.byte 0x00,0xf4,0xff,0xff	@ 00008f0c data
