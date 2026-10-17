@ FUN_08002a88  entry 0x08002a88  size 14
.thumb
.org 0x2a88
FUN_08002a88:
	push {lr}	@ 00002a88 00b5
.org 0x2a8a
	lsls r0, r0, #16	@ 00002a8a 0004
.org 0x2a8c
	lsrs r0, r0, #16	@ 00002a8c 000c
.org 0x2a8e
	bl 0x1277b4	@ 00002a8e 24f191fe
.org 0x2a92
	pop {r0}	@ 00002a92 01bc
.org 0x2a94
	bx r0	@ 00002a94 0047
