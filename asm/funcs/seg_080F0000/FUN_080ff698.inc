@ FUN_080ff698  entry 0x080ff698  size 10
.thumb
.org 0xff698
FUN_080ff698:
	push {lr}	@ 000ff698 00b5
.org 0xff69a
	bl 0x1cff0	@ 000ff69a 1df7a9fc
.org 0xff69e
	pop {r0}	@ 000ff69e 01bc
.org 0xff6a0
	bx r0	@ 000ff6a0 0047
