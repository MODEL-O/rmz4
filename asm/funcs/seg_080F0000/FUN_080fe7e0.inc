@ FUN_080fe7e0  entry 0x080fe7e0  size 10
.thumb
.org 0xfe7e0
FUN_080fe7e0:
	push {lr}	@ 000fe7e0 00b5
.org 0xfe7e2
	bl 0x1cff0	@ 000fe7e2 1ef705fc
.org 0xfe7e6
	pop {r0}	@ 000fe7e6 01bc
.org 0xfe7e8
	bx r0	@ 000fe7e8 0047
