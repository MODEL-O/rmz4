@ FUN_080d2a48  entry 0x080d2a48  size 20
.thumb
.org 0xd2a48
FUN_080d2a48:
	push {lr}	@ 000d2a48 00b5
.org 0xd2a4a
	ldr r2, [pc, #16]	@ 000d2a4a 044a
.org 0xd2a4c
	ldrb r1, [r0, #16]	@ 000d2a4c 017c
.org 0xd2a4e
	lsls r1, r1, #2	@ 000d2a4e 8900
.org 0xd2a50
	adds r1, r1, r2	@ 000d2a50 8918
.org 0xd2a52
	ldr r1, [r1, #0]	@ 000d2a52 0968
.org 0xd2a54
	bl 0x128f80	@ 000d2a54 56f094fa
.org 0xd2a58
	pop {r0}	@ 000d2a58 01bc
.org 0xd2a5a
	bx r0	@ 000d2a5a 0047
