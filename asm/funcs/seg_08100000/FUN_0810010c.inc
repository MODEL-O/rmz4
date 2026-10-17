@ FUN_0810010c  entry 0x0810010c  size 20
.thumb
.org 0x10010c
FUN_0810010c:
	push {lr}	@ 0010010c 00b5
.org 0x10010e
	ldr r2, [pc, #16]	@ 0010010e 044a
.org 0x100110
	ldrb r1, [r0, #13]	@ 00100110 417b
.org 0x100112
	lsls r1, r1, #2	@ 00100112 8900
.org 0x100114
	adds r1, r1, r2	@ 00100114 8918
.org 0x100116
	ldr r1, [r1, #0]	@ 00100116 0968
.org 0x100118
	bl 0x128f80	@ 00100118 28f032ff
.org 0x10011c
	pop {r0}	@ 0010011c 01bc
.org 0x10011e
	bx r0	@ 0010011e 0047
