@ FUN_080a08f4  entry 0x080a08f4  size 10
.thumb
.org 0xa08f4
FUN_080a08f4:
	push {lr}	@ 000a08f4 00b5
.org 0xa08f6
	bl 0x7f8ec	@ 000a08f6 def7f9ff
.org 0xa08fa
	pop {r0}	@ 000a08fa 01bc
.org 0xa08fc
	bx r0	@ 000a08fc 0047
