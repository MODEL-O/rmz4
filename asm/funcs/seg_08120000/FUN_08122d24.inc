@ FUN_08122d24  entry 0x08122d24  size 14
.thumb
.org 0x122d24
FUN_08122d24:
	push {lr}	@ 00122d24 00b5
.org 0x122d26
	lsls r0, r0, #24	@ 00122d26 0006
.org 0x122d28
	lsrs r0, r0, #24	@ 00122d28 000e
.org 0x122d2a
	bl 0x1658	@ 00122d2a def695fc
.org 0x122d2e
	pop {r0}	@ 00122d2e 01bc
.org 0x122d30
	bx r0	@ 00122d30 0047
