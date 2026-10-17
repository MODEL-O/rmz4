@ FUN_08053d84  entry 0x08053d84  size 20
.thumb
.org 0x53d84
FUN_08053d84:
	push {lr}	@ 00053d84 00b5
.org 0x53d86
	ldr r2, [pc, #16]	@ 00053d86 044a
.org 0x53d88
	ldrb r1, [r0, #14]	@ 00053d88 817b
.org 0x53d8a
	lsls r1, r1, #2	@ 00053d8a 8900
.org 0x53d8c
	adds r1, r1, r2	@ 00053d8c 8918
.org 0x53d8e
	ldr r1, [r1, #0]	@ 00053d8e 0968
.org 0x53d90
	bl 0x128f80	@ 00053d90 d5f0f6f8
.org 0x53d94
	pop {r0}	@ 00053d94 01bc
.org 0x53d96
	bx r0	@ 00053d96 0047
