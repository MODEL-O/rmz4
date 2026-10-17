@ FUN_080a2ccc  entry 0x080a2ccc  size 10
.thumb
.org 0xa2ccc
FUN_080a2ccc:
	push {lr}	@ 000a2ccc 00b5
.org 0xa2cce
	bl 0x7f8ec	@ 000a2cce dcf70dfe
.org 0xa2cd2
	pop {r0}	@ 000a2cd2 01bc
.org 0xa2cd4
	bx r0	@ 000a2cd4 0047
