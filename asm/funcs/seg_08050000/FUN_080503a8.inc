@ FUN_080503a8  entry 0x080503a8  size 28
.thumb
.org 0x503a8
FUN_080503a8:
	push {lr}	@ 000503a8 00b5
.org 0x503aa
	adds r1, r0, #0	@ 000503aa 011c
.org 0x503ac
	ldr r0, [pc, #16]	@ 000503ac 0448
.org 0x503ae
	ldr r0, [r0, #0]	@ 000503ae 0068
.org 0x503b0
	adds r1, #84	@ 000503b0 5431
.org 0x503b2
	bl 0x1cb30	@ 000503b2 ccf7bdfb
.org 0x503b6
	cmp r0, #0	@ 000503b6 0028
.org 0x503b8
	bne.n 0x503c4	@ 000503b8 04d1
.org 0x503ba
	movs r0, #0	@ 000503ba 0020
.org 0x503bc
	b.n 0x503c6	@ 000503bc 03e0
.org 0x503be
	.byte 0x00	@ 000503be data
.org 0x503bf
	.byte 0x00	@ 000503bf data
.org 0x503c0
	.byte 0x88,0xed,0x02,0x02	@ 000503c0 data
