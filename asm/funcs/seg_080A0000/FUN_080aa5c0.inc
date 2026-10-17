@ FUN_080aa5c0  entry 0x080aa5c0  size 18
.thumb
.org 0xaa5c0
FUN_080aa5c0:
	push {lr}	@ 000aa5c0 00b5
.org 0xaa5c2
	adds r2, r0, #0	@ 000aa5c2 021c
.org 0xaa5c4
	adds r2, #180	@ 000aa5c4 b432
.org 0xaa5c6
	movs r1, #0	@ 000aa5c6 0021
.org 0xaa5c8
	strb r1, [r2, #0]	@ 000aa5c8 1170
.org 0xaa5ca
	bl 0x7f8ec	@ 000aa5ca d5f78ff9
.org 0xaa5ce
	pop {r0}	@ 000aa5ce 01bc
.org 0xaa5d0
	bx r0	@ 000aa5d0 0047
