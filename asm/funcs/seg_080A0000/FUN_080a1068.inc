@ FUN_080a1068  entry 0x080a1068  size 10
.thumb
.org 0xa1068
FUN_080a1068:
	push {lr}	@ 000a1068 00b5
.org 0xa106a
	bl 0x7f8ec	@ 000a106a def73ffc
.org 0xa106e
	pop {r0}	@ 000a106e 01bc
.org 0xa1070
	bx r0	@ 000a1070 0047
