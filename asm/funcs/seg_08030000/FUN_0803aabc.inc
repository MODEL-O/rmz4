@ FUN_0803aabc  entry 0x0803aabc  size 14
.thumb
.org 0x3aabc
FUN_0803aabc:
	push {lr}	@ 0003aabc 00b5
.org 0x3aabe
	bl 0x3aa4c	@ 0003aabe fff7c5ff
.org 0x3aac2
	lsls r0, r0, #24	@ 0003aac2 0006
.org 0x3aac4
	lsrs r0, r0, #24	@ 0003aac4 000e
.org 0x3aac6
	pop {r1}	@ 0003aac6 02bc
.org 0x3aac8
	bx r1	@ 0003aac8 0847
