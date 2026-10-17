@ FUN_08071e74  entry 0x08071e74  size 30
.thumb
.org 0x71e74
FUN_08071e74:
	push {lr}	@ 00071e74 00b5
.org 0x71e76
	ldrb r1, [r0, #14]	@ 00071e76 817b
.org 0x71e78
	adds r1, #1	@ 00071e78 0131
.org 0x71e7a
	movs r2, #0	@ 00071e7a 0022
.org 0x71e7c
	strb r1, [r0, #14]	@ 00071e7c 8173
.org 0x71e7e
	strb r2, [r0, #15]	@ 00071e7e c273
.org 0x71e80
	ldr r2, [pc, #16]	@ 00071e80 044a
.org 0x71e82
	ldrb r1, [r0, #13]	@ 00071e82 417b
.org 0x71e84
	lsls r1, r1, #2	@ 00071e84 8900
.org 0x71e86
	adds r1, r1, r2	@ 00071e86 8918
.org 0x71e88
	ldr r1, [r1, #0]	@ 00071e88 0968
.org 0x71e8a
	bl 0x128f80	@ 00071e8a b7f079f8
.org 0x71e8e
	pop {r0}	@ 00071e8e 01bc
.org 0x71e90
	bx r0	@ 00071e90 0047
