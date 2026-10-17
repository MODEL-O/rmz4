@ FUN_0803aacc  entry 0x0803aacc  size 14
.thumb
.org 0x3aacc
FUN_0803aacc:
	push {lr}	@ 0003aacc 00b5
.org 0x3aace
	bl 0x3aa4c	@ 0003aace fff7bdff
.org 0x3aad2
	lsls r0, r0, #24	@ 0003aad2 0006
.org 0x3aad4
	lsrs r0, r0, #24	@ 0003aad4 000e
.org 0x3aad6
	pop {r1}	@ 0003aad6 02bc
.org 0x3aad8
	bx r1	@ 0003aad8 0847
