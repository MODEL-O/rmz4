@ FUN_0809cc94  entry 0x0809cc94  size 10
.thumb
.org 0x9cc94
FUN_0809cc94:
	push {lr}	@ 0009cc94 00b5
.org 0x9cc96
	bl 0x1cff0	@ 0009cc96 80f7abf9
.org 0x9cc9a
	pop {r0}	@ 0009cc9a 01bc
.org 0x9cc9c
	bx r0	@ 0009cc9c 0047
