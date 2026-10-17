@ FUN_0801e4d8  entry 0x0801e4d8  size 22
.thumb
.org 0x1e4d8
FUN_0801e4d8:
	push {lr}	@ 0001e4d8 00b5
.org 0x1e4da
	ldr r1, [r0, #0]	@ 0001e4da 0168
.org 0x1e4dc
	movs r0, #195	@ 0001e4dc c320
.org 0x1e4de
	lsls r0, r0, #13	@ 0001e4de 4003
.org 0x1e4e0
	cmp r1, r0	@ 0001e4e0 8142
.org 0x1e4e2
	bgt.n 0x1e4e8	@ 0001e4e2 01dc
.org 0x1e4e4
	movs r0, #0	@ 0001e4e4 0020
.org 0x1e4e6
	b.n 0x1e4ea	@ 0001e4e6 00e0
.org 0x1e4e8
	movs r0, #1	@ 0001e4e8 0120
.org 0x1e4ea
	pop {r1}	@ 0001e4ea 02bc
.org 0x1e4ec
	bx r1	@ 0001e4ec 0847
