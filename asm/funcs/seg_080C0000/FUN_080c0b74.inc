@ FUN_080c0b74  entry 0x080c0b74  size 20
.thumb
.org 0xc0b74
FUN_080c0b74:
	push {lr}	@ 000c0b74 00b5
.org 0xc0b76
	ldr r2, [pc, #16]	@ 000c0b76 044a
.org 0xc0b78
	ldrb r1, [r0, #14]	@ 000c0b78 817b
.org 0xc0b7a
	lsls r1, r1, #2	@ 000c0b7a 8900
.org 0xc0b7c
	adds r1, r1, r2	@ 000c0b7c 8918
.org 0xc0b7e
	ldr r1, [r1, #0]	@ 000c0b7e 0968
.org 0xc0b80
	bl 0x128f80	@ 000c0b80 68f0fef9
.org 0xc0b84
	pop {r0}	@ 000c0b84 01bc
.org 0xc0b86
	bx r0	@ 000c0b86 0047
