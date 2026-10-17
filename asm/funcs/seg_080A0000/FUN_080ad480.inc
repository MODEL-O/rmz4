@ FUN_080ad480  entry 0x080ad480  size 10
.thumb
.org 0xad480
FUN_080ad480:
	push {lr}	@ 000ad480 00b5
.org 0xad482
	bl 0x7f8ec	@ 000ad482 d2f733fa
.org 0xad486
	pop {r0}	@ 000ad486 01bc
.org 0xad488
	bx r0	@ 000ad488 0047
