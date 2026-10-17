@ FUN_0801e6e0  entry 0x0801e6e0  size 44
.thumb
.org 0x1e6e0
FUN_0801e6e0:
	push {lr}	@ 0001e6e0 00b5
.org 0x1e6e2
	ldr r1, [r0, #0]	@ 0001e6e2 0168
.org 0x1e6e4
	ldr r0, [pc, #8]	@ 0001e6e4 0248
.org 0x1e6e6
	cmp r1, r0	@ 0001e6e6 8142
.org 0x1e6e8
	bgt.n 0x1e6f4	@ 0001e6e8 04dc
.org 0x1e6ea
	movs r0, #0	@ 0001e6ea 0020
.org 0x1e6ec
	b.n 0x1e71e	@ 0001e6ec 17e0
.org 0x1e6ee
	.byte 0x00	@ 0001e6ee data
.org 0x1e6ef
	.byte 0x00	@ 0001e6ef data
.org 0x1e6f0
	.byte 0xff,0xaf,0x13,0x00	@ 0001e6f0 data
.org 0x1e6f4
	ldr r0, [pc, #8]	@ 0001e6f4 0248
.org 0x1e6f6
	cmp r1, r0	@ 0001e6f6 8142
.org 0x1e6f8
	bgt.n 0x1e704	@ 0001e6f8 04dc
.org 0x1e6fa
	movs r0, #1	@ 0001e6fa 0120
.org 0x1e6fc
	b.n 0x1e71e	@ 0001e6fc 0fe0
.org 0x1e6fe
	.byte 0x00	@ 0001e6fe data
.org 0x1e6ff
	.byte 0x00	@ 0001e6ff data
.org 0x1e700
	.byte 0xff,0x6f,0x17,0x00	@ 0001e700 data
.org 0x1e704
	ldr r0, [pc, #12]	@ 0001e704 0348
.org 0x1e706
	adds r1, r1, r0	@ 0001e706 0918
.org 0x1e708
	ldr r0, [pc, #12]	@ 0001e708 0348
.org 0x1e70a
	cmp r1, r0	@ 0001e70a 8142
