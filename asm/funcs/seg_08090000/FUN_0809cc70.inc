@ FUN_0809cc70  entry 0x0809cc70  size 10
.thumb
.org 0x9cc70
FUN_0809cc70:
	push {lr}	@ 0009cc70 00b5
.org 0x9cc72
	bl 0x1cff0	@ 0009cc72 80f7bdf9
.org 0x9cc76
	pop {r0}	@ 0009cc76 01bc
.org 0x9cc78
	bx r0	@ 0009cc78 0047
