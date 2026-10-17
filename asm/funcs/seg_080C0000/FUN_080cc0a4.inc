@ FUN_080cc0a4  entry 0x080cc0a4  size 20
.thumb
.org 0xcc0a4
FUN_080cc0a4:
	push {lr}	@ 000cc0a4 00b5
.org 0xcc0a6
	ldr r2, [pc, #16]	@ 000cc0a6 044a
.org 0xcc0a8
	ldrb r1, [r0, #16]	@ 000cc0a8 017c
.org 0xcc0aa
	lsls r1, r1, #2	@ 000cc0aa 8900
.org 0xcc0ac
	adds r1, r1, r2	@ 000cc0ac 8918
.org 0xcc0ae
	ldr r1, [r1, #0]	@ 000cc0ae 0968
.org 0xcc0b0
	bl 0x128f80	@ 000cc0b0 5cf066ff
.org 0xcc0b4
	pop {r0}	@ 000cc0b4 01bc
.org 0xcc0b6
	bx r0	@ 000cc0b6 0047
