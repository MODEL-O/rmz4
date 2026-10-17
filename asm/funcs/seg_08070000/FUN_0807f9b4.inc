@ FUN_0807f9b4  entry 0x0807f9b4  size 28
.thumb
.org 0x7f9b4
FUN_0807f9b4:
	push {lr}	@ 0007f9b4 00b5
.org 0x7f9b6
	adds r1, r0, #0	@ 0007f9b6 011c
.org 0x7f9b8
	ldr r0, [pc, #16]	@ 0007f9b8 0448
.org 0x7f9ba
	ldr r0, [r0, #0]	@ 0007f9ba 0068
.org 0x7f9bc
	adds r1, #84	@ 0007f9bc 5431
.org 0x7f9be
	bl 0x1cb30	@ 0007f9be 9df7b7f8
.org 0x7f9c2
	cmp r0, #0	@ 0007f9c2 0028
.org 0x7f9c4
	bne.n 0x7f9d0	@ 0007f9c4 04d1
.org 0x7f9c6
	movs r0, #0	@ 0007f9c6 0020
.org 0x7f9c8
	b.n 0x7f9d2	@ 0007f9c8 03e0
.org 0x7f9ca
	.byte 0x00	@ 0007f9ca data
.org 0x7f9cb
	.byte 0x00	@ 0007f9cb data
.org 0x7f9cc
	.byte 0x88,0xed,0x02,0x02	@ 0007f9cc data
