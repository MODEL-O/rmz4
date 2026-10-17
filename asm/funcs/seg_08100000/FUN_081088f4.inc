@ FUN_081088f4  entry 0x081088f4  size 20
.thumb
.org 0x1088f4
FUN_081088f4:
	push {lr}	@ 001088f4 00b5
.org 0x1088f6
	bl 0x7c7c	@ 001088f6 fff6c1f9
.org 0x1088fa
	lsls r0, r0, #16	@ 001088fa 0004
.org 0x1088fc
	lsrs r0, r0, #16	@ 001088fc 000c
.org 0x1088fe
	cmp r0, #15	@ 001088fe 0f28
.org 0x108900
	bne.n 0x108904	@ 00108900 00d1
.org 0x108902
	movs r0, #0	@ 00108902 0020
.org 0x108904
	pop {r1}	@ 00108904 02bc
.org 0x108906
	bx r1	@ 00108906 0847
