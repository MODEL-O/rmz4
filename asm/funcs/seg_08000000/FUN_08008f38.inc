@ FUN_08008f38  entry 0x08008f38  size 24
.thumb
.org 0x8f38
FUN_08008f38:
	push {lr}	@ 00008f38 00b5
.org 0x8f3a
	ldr r2, [pc, #16]	@ 00008f3a 044a
.org 0x8f3c
	adds r1, r1, r2	@ 00008f3c 8918
.org 0x8f3e
	asrs r0, r0, #2	@ 00008f3e 8010
.org 0x8f40
	adds r0, r1, r0	@ 00008f40 0818
.org 0x8f42
	cmp r0, #0	@ 00008f42 0028
.org 0x8f44
	bgt.n 0x8f50	@ 00008f44 04dc
.org 0x8f46
	movs r0, #0	@ 00008f46 0020
.org 0x8f48
	b.n 0x8f52	@ 00008f48 03e0
.org 0x8f4a
	.byte 0x00	@ 00008f4a data
.org 0x8f4b
	.byte 0x00	@ 00008f4b data
.org 0x8f4c
	.byte 0x00,0xfc,0xff,0xff	@ 00008f4c data
