@ FUN_0801e760  entry 0x0801e760  size 30
.thumb
.org 0x1e760
FUN_0801e760:
	push {lr}	@ 0001e760 00b5
.org 0x1e762
	ldr r1, [r0, #0]	@ 0001e762 0168
.org 0x1e764
	ldr r0, [pc, #8]	@ 0001e764 0248
.org 0x1e766
	cmp r1, r0	@ 0001e766 8142
.org 0x1e768
	ble.n 0x1e774	@ 0001e768 04dd
.org 0x1e76a
	movs r0, #2	@ 0001e76a 0220
.org 0x1e76c
	b.n 0x1e786	@ 0001e76c 0be0
.org 0x1e76e
	.byte 0x00	@ 0001e76e data
.org 0x1e76f
	.byte 0x00	@ 0001e76f data
.org 0x1e770
	.byte 0xff,0x4f,0x19,0x00	@ 0001e770 data
.org 0x1e774
	ldr r0, [pc, #8]	@ 0001e774 0248
.org 0x1e776
	cmp r1, r0	@ 0001e776 8142
.org 0x1e778
	bgt.n 0x1e784	@ 0001e778 04dc
.org 0x1e77a
	movs r0, #0	@ 0001e77a 0020
.org 0x1e77c
	b.n 0x1e786	@ 0001e77c 03e0
