@ FUN_080f2230  entry 0x080f2230  size 28
.thumb
.org 0xf2230
FUN_080f2230:
	push {lr}	@ 000f2230 00b5
.org 0xf2232
	ldr r2, [pc, #24]	@ 000f2232 064a
.org 0xf2234
	ldrb r1, [r0, #9]	@ 000f2234 417a
.org 0xf2236
	lsls r1, r1, #2	@ 000f2236 8900
.org 0xf2238
	adds r1, r1, r2	@ 000f2238 8918
.org 0xf223a
	movs r2, #1	@ 000f223a 0122
.org 0xf223c
	str r2, [r0, #12]	@ 000f223c c260
.org 0xf223e
	ldr r1, [r1, #0]	@ 000f223e 0968
.org 0xf2240
	ldr r1, [r1, #4]	@ 000f2240 4968
.org 0xf2242
	str r1, [r0, #20]	@ 000f2242 4161
.org 0xf2244
	bl 0xf2200	@ 000f2244 fff7dcff
.org 0xf2248
	pop {r0}	@ 000f2248 01bc
.org 0xf224a
	bx r0	@ 000f224a 0047
