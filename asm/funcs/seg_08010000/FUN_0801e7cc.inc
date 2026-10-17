@ FUN_0801e7cc  entry 0x0801e7cc  size 30
.thumb
.org 0x1e7cc
FUN_0801e7cc:
	push {lr}	@ 0001e7cc 00b5
.org 0x1e7ce
	ldr r1, [r0, #0]	@ 0001e7ce 0168
.org 0x1e7d0
	ldr r0, [pc, #8]	@ 0001e7d0 0248
.org 0x1e7d2
	cmp r1, r0	@ 0001e7d2 8142
.org 0x1e7d4
	ble.n 0x1e7e0	@ 0001e7d4 04dd
.org 0x1e7d6
	movs r0, #2	@ 0001e7d6 0220
.org 0x1e7d8
	b.n 0x1e7f2	@ 0001e7d8 0be0
.org 0x1e7da
	.byte 0x00	@ 0001e7da data
.org 0x1e7db
	.byte 0x00	@ 0001e7db data
.org 0x1e7dc
	.byte 0xff,0x0f,0x1d,0x00	@ 0001e7dc data
.org 0x1e7e0
	ldr r0, [pc, #8]	@ 0001e7e0 0248
.org 0x1e7e2
	cmp r1, r0	@ 0001e7e2 8142
.org 0x1e7e4
	bgt.n 0x1e7f0	@ 0001e7e4 04dc
.org 0x1e7e6
	movs r0, #0	@ 0001e7e6 0020
.org 0x1e7e8
	b.n 0x1e7f2	@ 0001e7e8 03e0
