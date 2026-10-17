@ FUN_0801e558  entry 0x0801e558  size 40
.thumb
.org 0x1e558
FUN_0801e558:
	push {lr}	@ 0001e558 00b5
.org 0x1e55a
	ldr r1, [r0, #0]	@ 0001e55a 0168
.org 0x1e55c
	ldr r0, [pc, #8]	@ 0001e55c 0248
.org 0x1e55e
	cmp r1, r0	@ 0001e55e 8142
.org 0x1e560
	ble.n 0x1e56c	@ 0001e560 04dd
.org 0x1e562
	movs r0, #3	@ 0001e562 0320
.org 0x1e564
	b.n 0x1e58e	@ 0001e564 13e0
.org 0x1e566
	.byte 0x00	@ 0001e566 data
.org 0x1e567
	.byte 0x00	@ 0001e567 data
.org 0x1e568
	.byte 0xff,0xaf,0x2a,0x00	@ 0001e568 data
.org 0x1e56c
	ldr r0, [pc, #8]	@ 0001e56c 0248
.org 0x1e56e
	cmp r1, r0	@ 0001e56e 8142
.org 0x1e570
	ble.n 0x1e57c	@ 0001e570 04dd
.org 0x1e572
	movs r0, #2	@ 0001e572 0220
.org 0x1e574
	b.n 0x1e58e	@ 0001e574 0be0
.org 0x1e576
	.byte 0x00	@ 0001e576 data
.org 0x1e577
	.byte 0x00	@ 0001e577 data
.org 0x1e578
	.byte 0xff,0x3f,0x1a,0x00	@ 0001e578 data
.org 0x1e57c
	ldr r0, [pc, #8]	@ 0001e57c 0248
.org 0x1e57e
	cmp r1, r0	@ 0001e57e 8142
