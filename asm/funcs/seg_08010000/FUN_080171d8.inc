@ FUN_080171d8  entry 0x080171d8  size 10
.thumb
.org 0x171d8
FUN_080171d8:
	push {lr}	@ 000171d8 00b5
.org 0x171da
	bl 0x7638	@ 000171da f0f72dfa
.org 0x171de
	pop {r0}	@ 000171de 01bc
.org 0x171e0
	bx r0	@ 000171e0 0047
