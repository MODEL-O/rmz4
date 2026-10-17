@ FUN_080ad7d4  entry 0x080ad7d4  size 10
.thumb
.org 0xad7d4
FUN_080ad7d4:
	push {lr}	@ 000ad7d4 00b5
.org 0xad7d6
	bl 0x7f8ec	@ 000ad7d6 d2f789f8
.org 0xad7da
	pop {r0}	@ 000ad7da 01bc
.org 0xad7dc
	bx r0	@ 000ad7dc 0047
