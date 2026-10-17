@ FUN_080cc0bc  entry 0x080cc0bc  size 20
.thumb
.org 0xcc0bc
FUN_080cc0bc:
	push {lr}	@ 000cc0bc 00b5
.org 0xcc0be
	ldr r2, [pc, #16]	@ 000cc0be 044a
.org 0xcc0c0
	ldrb r1, [r0, #16]	@ 000cc0c0 017c
.org 0xcc0c2
	lsls r1, r1, #2	@ 000cc0c2 8900
.org 0xcc0c4
	adds r1, r1, r2	@ 000cc0c4 8918
.org 0xcc0c6
	ldr r1, [r1, #0]	@ 000cc0c6 0968
.org 0xcc0c8
	bl 0x128f80	@ 000cc0c8 5cf05aff
.org 0xcc0cc
	pop {r0}	@ 000cc0cc 01bc
.org 0xcc0ce
	bx r0	@ 000cc0ce 0047
