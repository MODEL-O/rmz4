@ FUN_08128d70  entry 0x08128d70  size 20
.thumb
.org 0x128d70
FUN_08128d70:
	push {lr}	@ 00128d70 00b5
.org 0x128d72
	lsls r0, r0, #16	@ 00128d72 0004
.org 0x128d74
	lsrs r0, r0, #16	@ 00128d74 000c
.org 0x128d76
	movs r2, #1	@ 00128d76 0122
.org 0x128d78
	bl 0x128d84	@ 00128d78 00f004f8
.org 0x128d7c
	lsls r0, r0, #16	@ 00128d7c 0004
.org 0x128d7e
	lsrs r0, r0, #16	@ 00128d7e 000c
.org 0x128d80
	pop {r1}	@ 00128d80 02bc
.org 0x128d82
	bx r1	@ 00128d82 0847
