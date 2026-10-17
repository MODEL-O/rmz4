@ FUN_08008f6c  entry 0x08008f6c  size 24
.thumb
.org 0x8f6c
FUN_08008f6c:
	push {lr}	@ 00008f6c 00b5
.org 0x8f6e
	ldr r2, [pc, #16]	@ 00008f6e 044a
.org 0x8f70
	adds r1, r1, r2	@ 00008f70 8918
.org 0x8f72
	asrs r0, r0, #1	@ 00008f72 4010
.org 0x8f74
	subs r0, r1, r0	@ 00008f74 081a
.org 0x8f76
	cmp r0, #0	@ 00008f76 0028
.org 0x8f78
	bgt.n 0x8f84	@ 00008f78 04dc
.org 0x8f7a
	movs r0, #0	@ 00008f7a 0020
.org 0x8f7c
	b.n 0x8f86	@ 00008f7c 03e0
.org 0x8f7e
	.byte 0x00	@ 00008f7e data
.org 0x8f7f
	.byte 0x00	@ 00008f7f data
.org 0x8f80
	.byte 0x00,0xf8,0xff,0xff	@ 00008f80 data
