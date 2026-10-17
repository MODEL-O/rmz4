@ FUN_080c53cc  entry 0x080c53cc  size 10
.thumb
.org 0xc53cc
FUN_080c53cc:
	push {lr}	@ 000c53cc 00b5
.org 0xc53ce
	bl 0xbd3f8	@ 000c53ce f8f713f8
.org 0xc53d2
	pop {r0}	@ 000c53d2 01bc
.org 0xc53d4
	bx r0	@ 000c53d4 0047
