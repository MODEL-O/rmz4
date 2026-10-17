@ FUN_080fa158  entry 0x080fa158  size 10
.thumb
.org 0xfa158
FUN_080fa158:
	push {lr}	@ 000fa158 00b5
.org 0xfa15a
	bl 0x1cff0	@ 000fa15a 22f749ff
.org 0xfa15e
	pop {r0}	@ 000fa15e 01bc
.org 0xfa160
	bx r0	@ 000fa160 0047
