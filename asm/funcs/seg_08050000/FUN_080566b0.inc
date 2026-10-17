@ FUN_080566b0  entry 0x080566b0  size 20
.thumb
.org 0x566b0
FUN_080566b0:
	push {lr}	@ 000566b0 00b5
.org 0x566b2
	ldr r2, [pc, #16]	@ 000566b2 044a
.org 0x566b4
	ldrb r1, [r0, #14]	@ 000566b4 817b
.org 0x566b6
	lsls r1, r1, #2	@ 000566b6 8900
.org 0x566b8
	adds r1, r1, r2	@ 000566b8 8918
.org 0x566ba
	ldr r1, [r1, #0]	@ 000566ba 0968
.org 0x566bc
	bl 0x128f80	@ 000566bc d2f060fc
.org 0x566c0
	pop {r0}	@ 000566c0 01bc
.org 0x566c2
	bx r0	@ 000566c2 0047
