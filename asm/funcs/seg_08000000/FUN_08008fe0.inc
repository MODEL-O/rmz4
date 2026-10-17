@ FUN_08008fe0  entry 0x08008fe0  size 24
.thumb
.org 0x8fe0
FUN_08008fe0:
	push {lr}	@ 00008fe0 00b5
.org 0x8fe2
	ldr r2, [pc, #16]	@ 00008fe2 044a
.org 0x8fe4
	adds r1, r1, r2	@ 00008fe4 8918
.org 0x8fe6
	asrs r0, r0, #2	@ 00008fe6 8010
.org 0x8fe8
	subs r0, r1, r0	@ 00008fe8 081a
.org 0x8fea
	cmp r0, #0	@ 00008fea 0028
.org 0x8fec
	bgt.n 0x8ff8	@ 00008fec 04dc
.org 0x8fee
	movs r0, #0	@ 00008fee 0020
.org 0x8ff0
	b.n 0x8ffa	@ 00008ff0 03e0
.org 0x8ff2
	.byte 0x00	@ 00008ff2 data
.org 0x8ff3
	.byte 0x00	@ 00008ff3 data
.org 0x8ff4
	.byte 0x00,0xf4,0xff,0xff	@ 00008ff4 data
