@ FUN_080ad7e0  entry 0x080ad7e0  size 10
.thumb
.org 0xad7e0
FUN_080ad7e0:
	push {lr}	@ 000ad7e0 00b5
.org 0xad7e2
	bl 0x7f8ec	@ 000ad7e2 d2f783f8
.org 0xad7e6
	pop {r0}	@ 000ad7e6 01bc
.org 0xad7e8
	bx r0	@ 000ad7e8 0047
