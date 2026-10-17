@ FUN_080fbd38  entry 0x080fbd38  size 10
.thumb
.org 0xfbd38
FUN_080fbd38:
	push {lr}	@ 000fbd38 00b5
.org 0xfbd3a
	bl 0x1cff0	@ 000fbd3a 21f759f9
.org 0xfbd3e
	pop {r0}	@ 000fbd3e 01bc
.org 0xfbd40
	bx r0	@ 000fbd40 0047
