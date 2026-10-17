@ FUN_080ecefc  entry 0x080ecefc  size 20
.thumb
.org 0xecefc
FUN_080ecefc:
	push {lr}	@ 000ecefc 00b5
.org 0xecefe
	ldr r2, [pc, #16]	@ 000ecefe 044a
.org 0xecf00
	ldrb r1, [r0, #16]	@ 000ecf00 017c
.org 0xecf02
	lsls r1, r1, #2	@ 000ecf02 8900
.org 0xecf04
	adds r1, r1, r2	@ 000ecf04 8918
.org 0xecf06
	ldr r1, [r1, #0]	@ 000ecf06 0968
.org 0xecf08
	bl 0x128f80	@ 000ecf08 3cf03af8
.org 0xecf0c
	pop {r0}	@ 000ecf0c 01bc
.org 0xecf0e
	bx r0	@ 000ecf0e 0047
