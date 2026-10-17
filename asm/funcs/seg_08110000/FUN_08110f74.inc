@ FUN_08110f74  entry 0x08110f74  size 20
.thumb
.org 0x110f74
FUN_08110f74:
	push {lr}	@ 00110f74 00b5
.org 0x110f76
	ldr r2, [pc, #16]	@ 00110f76 044a
.org 0x110f78
	ldrb r1, [r0, #6]	@ 00110f78 8179
.org 0x110f7a
	lsls r1, r1, #2	@ 00110f7a 8900
.org 0x110f7c
	adds r1, r1, r2	@ 00110f7c 8918
.org 0x110f7e
	ldr r1, [r1, #0]	@ 00110f7e 0968
.org 0x110f80
	bl 0x128f80	@ 00110f80 17f0feff
.org 0x110f84
	pop {r0}	@ 00110f84 01bc
.org 0x110f86
	bx r0	@ 00110f86 0047
