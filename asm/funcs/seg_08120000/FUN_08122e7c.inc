@ FUN_08122e7c  entry 0x08122e7c  size 20
.thumb
.org 0x122e7c
FUN_08122e7c:
	push {lr}	@ 00122e7c 00b5
.org 0x122e7e
	ldr r2, [pc, #16]	@ 00122e7e 044a
.org 0x122e80
	ldrb r1, [r0, #2]	@ 00122e80 8178
.org 0x122e82
	lsls r1, r1, #2	@ 00122e82 8900
.org 0x122e84
	adds r1, r1, r2	@ 00122e84 8918
.org 0x122e86
	ldr r1, [r1, #0]	@ 00122e86 0968
.org 0x122e88
	bl 0x128f80	@ 00122e88 06f07af8
.org 0x122e8c
	pop {r0}	@ 00122e8c 01bc
.org 0x122e8e
	bx r0	@ 00122e8e 0047
