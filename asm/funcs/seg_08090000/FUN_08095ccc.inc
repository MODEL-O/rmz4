@ FUN_08095ccc  entry 0x08095ccc  size 10
.thumb
.org 0x95ccc
FUN_08095ccc:
	push {lr}	@ 00095ccc 00b5
.org 0x95cce
	bl 0x7f8ec	@ 00095cce e9f70dfe
.org 0x95cd2
	pop {r0}	@ 00095cd2 01bc
.org 0x95cd4
	bx r0	@ 00095cd4 0047
