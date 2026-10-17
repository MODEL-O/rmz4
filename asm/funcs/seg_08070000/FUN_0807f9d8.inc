@ FUN_0807f9d8  entry 0x0807f9d8  size 22
.thumb
.org 0x7f9d8
FUN_0807f9d8:
	push {lr}	@ 0007f9d8 00b5
.org 0x7f9da
	lsls r1, r1, #24	@ 0007f9da 0906
.org 0x7f9dc
	lsrs r1, r1, #24	@ 0007f9dc 090e
.org 0x7f9de
	ldr r0, [pc, #16]	@ 0007f9de 0448
.org 0x7f9e0
	ldr r0, [r0, #0]	@ 0007f9e0 0068
.org 0x7f9e2
	bl 0x1cbd0	@ 0007f9e2 9df7f5f8
.org 0x7f9e6
	lsls r0, r0, #16	@ 0007f9e6 0004
.org 0x7f9e8
	lsrs r0, r0, #16	@ 0007f9e8 000c
.org 0x7f9ea
	pop {r1}	@ 0007f9ea 02bc
.org 0x7f9ec
	bx r1	@ 0007f9ec 0847
