@ FUN_0801e724  entry 0x0801e724  size 44
.thumb
.org 0x1e724
FUN_0801e724:
	push {lr}	@ 0001e724 00b5
.org 0x1e726
	adds r2, r0, #0	@ 0001e726 021c
.org 0x1e728
	ldr r1, [r2, #4]	@ 0001e728 5168
.org 0x1e72a
	ldr r0, [pc, #8]	@ 0001e72a 0248
.org 0x1e72c
	cmp r1, r0	@ 0001e72c 8142
.org 0x1e72e
	ble.n 0x1e738	@ 0001e72e 03dd
.org 0x1e730
	movs r0, #3	@ 0001e730 0320
.org 0x1e732
	b.n 0x1e75a	@ 0001e732 12e0
.org 0x1e734
	.byte 0xff,0xff,0x04,0x00	@ 0001e734 data
.org 0x1e738
	ldr r1, [r2, #0]	@ 0001e738 1168
.org 0x1e73a
	ldr r0, [pc, #8]	@ 0001e73a 0248
.org 0x1e73c
	cmp r1, r0	@ 0001e73c 8142
.org 0x1e73e
	ble.n 0x1e748	@ 0001e73e 03dd
.org 0x1e740
	movs r0, #2	@ 0001e740 0220
.org 0x1e742
	b.n 0x1e75a	@ 0001e742 0ae0
.org 0x1e744
	.byte 0xff,0x7f,0x1e,0x00	@ 0001e744 data
.org 0x1e748
	ldr r0, [pc, #8]	@ 0001e748 0248
.org 0x1e74a
	cmp r1, r0	@ 0001e74a 8142
.org 0x1e74c
	bgt.n 0x1e758	@ 0001e74c 04dc
.org 0x1e74e
	movs r0, #0	@ 0001e74e 0020
