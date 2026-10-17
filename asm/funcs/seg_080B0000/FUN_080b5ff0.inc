@ FUN_080b5ff0  entry 0x080b5ff0  size 8
.thumb
.org 0xb5ff0
FUN_080b5ff0:
	push {r0, lr}	@ 000b5ff0 01b5
.org 0xb5ff2
	movs r0, r0	@ 000b5ff2 0000
.org 0xb5ff4
	blt.n 0xb6078	@ 000b5ff4 40db
.org 0xb5ff6
	lsrs r5, r0, #2	@ 000b5ff6 8508
