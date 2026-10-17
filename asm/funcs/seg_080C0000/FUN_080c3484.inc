@ FUN_080c3484  entry 0x080c3484  size 10
.thumb
.org 0xc3484
FUN_080c3484:
	push {lr}	@ 000c3484 00b5
.org 0xc3486
	bl 0xbd3f8	@ 000c3486 f9f7b7ff
.org 0xc348a
	pop {r0}	@ 000c348a 01bc
.org 0xc348c
	bx r0	@ 000c348c 0047
