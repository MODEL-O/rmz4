@ FUN_0801e4f0  entry 0x0801e4f0  size 32
.thumb
.org 0x1e4f0
FUN_0801e4f0:
	push {lr}	@ 0001e4f0 00b5
.org 0x1e4f2
	ldr r1, [r0, #0]	@ 0001e4f2 0168
.org 0x1e4f4
	movs r0, #163	@ 0001e4f4 a320
.org 0x1e4f6
	lsls r0, r0, #13	@ 0001e4f6 4003
.org 0x1e4f8
	cmp r1, r0	@ 0001e4f8 8142
.org 0x1e4fa
	ble.n 0x1e500	@ 0001e4fa 01dd
.org 0x1e4fc
	movs r0, #2	@ 0001e4fc 0220
.org 0x1e4fe
	b.n 0x1e512	@ 0001e4fe 08e0
.org 0x1e500
	ldr r0, [pc, #8]	@ 0001e500 0248
.org 0x1e502
	cmp r1, r0	@ 0001e502 8142
.org 0x1e504
	bgt.n 0x1e510	@ 0001e504 04dc
.org 0x1e506
	movs r0, #0	@ 0001e506 0020
.org 0x1e508
	b.n 0x1e512	@ 0001e508 03e0
.org 0x1e50a
	.byte 0x00	@ 0001e50a data
.org 0x1e50b
	.byte 0x00	@ 0001e50b data
.org 0x1e50c
	.byte 0x00,0x90,0x10,0x00	@ 0001e50c data
