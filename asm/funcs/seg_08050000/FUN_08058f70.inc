@ FUN_08058f70  entry 0x08058f70  size 20
.thumb
.org 0x58f70
FUN_08058f70:
	push {lr}	@ 00058f70 00b5
.org 0x58f72
	ldr r2, [pc, #16]	@ 00058f72 044a
.org 0x58f74
	ldrb r1, [r0, #14]	@ 00058f74 817b
.org 0x58f76
	lsls r1, r1, #2	@ 00058f76 8900
.org 0x58f78
	adds r1, r1, r2	@ 00058f78 8918
.org 0x58f7a
	ldr r1, [r1, #0]	@ 00058f7a 0968
.org 0x58f7c
	bl 0x128f80	@ 00058f7c d0f000f8
.org 0x58f80
	pop {r0}	@ 00058f80 01bc
.org 0x58f82
	bx r0	@ 00058f82 0047
