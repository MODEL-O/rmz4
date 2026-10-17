@ FUN_08103ee8  entry 0x08103ee8  size 10
.thumb
.org 0x103ee8
FUN_08103ee8:
	push {lr}	@ 00103ee8 00b5
.org 0x103eea
	bl 0xe954c	@ 00103eea e5f72ffb
.org 0x103eee
	pop {r0}	@ 00103eee 01bc
.org 0x103ef0
	bx r0	@ 00103ef0 0047
