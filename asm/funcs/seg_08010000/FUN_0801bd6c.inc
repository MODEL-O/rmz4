@ FUN_0801bd6c  entry 0x0801bd6c  size 10
.thumb
.org 0x1bd6c
FUN_0801bd6c:
	push {lr}	@ 0001bd6c 00b5
.org 0x1bd6e
	bl 0x7638	@ 0001bd6e ebf763fc
.org 0x1bd72
	pop {r0}	@ 0001bd72 01bc
.org 0x1bd74
	bx r0	@ 0001bd74 0047
