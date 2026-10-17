@ FUN_08009000  entry 0x08009000  size 18
.thumb
.org 0x9000
FUN_08009000:
	push {lr}	@ 00009000 00b5
.org 0x9002
	asrs r0, r0, #1	@ 00009002 4010
.org 0x9004
	cmp r1, r0	@ 00009004 8142
.org 0x9006
	blt.n 0x900c	@ 00009006 01db
.org 0x9008
	movs r0, #0	@ 00009008 0020
.org 0x900a
	b.n 0x900e	@ 0000900a 00e0
.org 0x900c
	mvns r0, r1	@ 0000900c c843
.org 0x900e
	pop {r1}	@ 0000900e 02bc
.org 0x9010
	bx r1	@ 00009010 0847
