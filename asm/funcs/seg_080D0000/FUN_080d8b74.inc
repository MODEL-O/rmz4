@ FUN_080d8b74  entry 0x080d8b74  size 20
.thumb
.org 0xd8b74
FUN_080d8b74:
	push {lr}	@ 000d8b74 00b5
.org 0xd8b76
	ldr r2, [pc, #16]	@ 000d8b76 044a
.org 0xd8b78
	ldrb r1, [r0, #13]	@ 000d8b78 417b
.org 0xd8b7a
	lsls r1, r1, #2	@ 000d8b7a 8900
.org 0xd8b7c
	adds r1, r1, r2	@ 000d8b7c 8918
.org 0xd8b7e
	ldr r1, [r1, #0]	@ 000d8b7e 0968
.org 0xd8b80
	bl 0x128f80	@ 000d8b80 50f0fef9
.org 0xd8b84
	pop {r0}	@ 000d8b84 01bc
.org 0xd8b86
	bx r0	@ 000d8b86 0047
