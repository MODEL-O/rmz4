@ FUN_0809e1d0  entry 0x0809e1d0  size 28
.thumb
.org 0x9e1d0
FUN_0809e1d0:
	push {lr}	@ 0009e1d0 00b5
.org 0x9e1d2
	adds r2, r0, #0	@ 0009e1d2 021c
.org 0x9e1d4
	ldrb r1, [r2, #10]	@ 0009e1d4 917a
.org 0x9e1d6
	movs r0, #16	@ 0009e1d6 1020
.org 0x9e1d8
	ands r0, r1	@ 0009e1d8 0840
.org 0x9e1da
	cmp r0, #0	@ 0009e1da 0028
.org 0x9e1dc
	beq.n 0x9e1e4	@ 0009e1dc 02d0
.org 0x9e1de
	movs r0, #192	@ 0009e1de c020
.org 0x9e1e0
	lsls r0, r0, #1	@ 0009e1e0 4000
.org 0x9e1e2
	b.n 0x9e1e6	@ 0009e1e2 00e0
.org 0x9e1e4
	ldr r0, [pc, #4]	@ 0009e1e4 0148
.org 0x9e1e6
	str r0, [r2, #92]	@ 0009e1e6 d065
.org 0x9e1e8
	pop {r0}	@ 0009e1e8 01bc
.org 0x9e1ea
	bx r0	@ 0009e1ea 0047
