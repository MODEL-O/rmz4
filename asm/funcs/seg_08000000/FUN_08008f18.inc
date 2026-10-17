@ FUN_08008f18  entry 0x08008f18  size 24
.thumb
.org 0x8f18
FUN_08008f18:
	push {lr}	@ 00008f18 00b5
.org 0x8f1a
	ldr r2, [pc, #16]	@ 00008f1a 044a
.org 0x8f1c
	adds r1, r1, r2	@ 00008f1c 8918
.org 0x8f1e
	asrs r0, r0, #2	@ 00008f1e 8010
.org 0x8f20
	adds r0, r1, r0	@ 00008f20 0818
.org 0x8f22
	cmp r0, #0	@ 00008f22 0028
.org 0x8f24
	bgt.n 0x8f30	@ 00008f24 04dc
.org 0x8f26
	movs r0, #0	@ 00008f26 0020
.org 0x8f28
	b.n 0x8f32	@ 00008f28 03e0
.org 0x8f2a
	.byte 0x00	@ 00008f2a data
.org 0x8f2b
	.byte 0x00	@ 00008f2b data
.org 0x8f2c
	.byte 0x00,0xf8,0xff,0xff	@ 00008f2c data
