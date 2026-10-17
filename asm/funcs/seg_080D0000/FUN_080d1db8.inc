@ FUN_080d1db8  entry 0x080d1db8  size 20
.thumb
.org 0xd1db8
FUN_080d1db8:
	push {lr}	@ 000d1db8 00b5
.org 0xd1dba
	ldr r2, [pc, #16]	@ 000d1dba 044a
.org 0xd1dbc
	ldrb r1, [r0, #16]	@ 000d1dbc 017c
.org 0xd1dbe
	lsls r1, r1, #2	@ 000d1dbe 8900
.org 0xd1dc0
	adds r1, r1, r2	@ 000d1dc0 8918
.org 0xd1dc2
	ldr r1, [r1, #0]	@ 000d1dc2 0968
.org 0xd1dc4
	bl 0x128f80	@ 000d1dc4 57f0dcf8
.org 0xd1dc8
	pop {r0}	@ 000d1dc8 01bc
.org 0xd1dca
	bx r0	@ 000d1dca 0047
