@ FUN_080a2cb4  entry 0x080a2cb4  size 20
.thumb
.org 0xa2cb4
FUN_080a2cb4:
	push {lr}	@ 000a2cb4 00b5
.org 0xa2cb6
	ldr r2, [pc, #16]	@ 000a2cb6 044a
.org 0xa2cb8
	ldrb r1, [r0, #16]	@ 000a2cb8 017c
.org 0xa2cba
	lsls r1, r1, #2	@ 000a2cba 8900
.org 0xa2cbc
	adds r1, r1, r2	@ 000a2cbc 8918
.org 0xa2cbe
	ldr r1, [r1, #0]	@ 000a2cbe 0968
.org 0xa2cc0
	bl 0x128f80	@ 000a2cc0 86f05ef9
.org 0xa2cc4
	pop {r0}	@ 000a2cc4 01bc
.org 0xa2cc6
	bx r0	@ 000a2cc6 0047
