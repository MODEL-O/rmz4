@ FUN_0801e594  entry 0x0801e594  size 36
.thumb
.org 0x1e594
FUN_0801e594:
	push {lr}	@ 0001e594 00b5
.org 0x1e596
	adds r2, r0, #0	@ 0001e596 021c
.org 0x1e598
	ldr r1, [r2, #0]	@ 0001e598 1168
.org 0x1e59a
	ldr r0, [pc, #8]	@ 0001e59a 0248
.org 0x1e59c
	cmp r1, r0	@ 0001e59c 8142
.org 0x1e59e
	ble.n 0x1e5a8	@ 0001e59e 03dd
.org 0x1e5a0
	movs r0, #2	@ 0001e5a0 0220
.org 0x1e5a2
	b.n 0x1e5b8	@ 0001e5a2 09e0
.org 0x1e5a4
	.byte 0x00,0xd0,0x11,0x00	@ 0001e5a4 data
.org 0x1e5a8
	ldr r1, [r2, #4]	@ 0001e5a8 5168
.org 0x1e5aa
	movs r0, #240	@ 0001e5aa f020
.org 0x1e5ac
	lsls r0, r0, #9	@ 0001e5ac 4002
.org 0x1e5ae
	cmp r1, r0	@ 0001e5ae 8142
.org 0x1e5b0
	bgt.n 0x1e5b6	@ 0001e5b0 01dc
.org 0x1e5b2
	movs r0, #0	@ 0001e5b2 0020
.org 0x1e5b4
	b.n 0x1e5b8	@ 0001e5b4 00e0
.org 0x1e5b6
	movs r0, #1	@ 0001e5b6 0120
