@ FUN_0807eaf8  entry 0x0807eaf8  size 14
.thumb
.org 0x7eaf8
FUN_0807eaf8:
	push {lr}	@ 0007eaf8 00b5
.org 0x7eafa
	movs r2, #0	@ 0007eafa 0022
.org 0x7eafc
	movs r3, #0	@ 0007eafc 0023
.org 0x7eafe
	bl 0xbb03c	@ 0007eafe 3cf09dfa
.org 0x7eb02
	pop {r0}	@ 0007eb02 01bc
.org 0x7eb04
	bx r0	@ 0007eb04 0047
