@ FUN_080f2250  entry 0x080f2250  size 28
.thumb
.org 0xf2250
FUN_080f2250:
	push {lr}	@ 000f2250 00b5
.org 0xf2252
	ldr r2, [pc, #24]	@ 000f2252 064a
.org 0xf2254
	ldrb r1, [r0, #9]	@ 000f2254 417a
.org 0xf2256
	lsls r1, r1, #2	@ 000f2256 8900
.org 0xf2258
	adds r1, r1, r2	@ 000f2258 8918
.org 0xf225a
	movs r2, #2	@ 000f225a 0222
.org 0xf225c
	str r2, [r0, #12]	@ 000f225c c260
.org 0xf225e
	ldr r1, [r1, #0]	@ 000f225e 0968
.org 0xf2260
	ldr r1, [r1, #8]	@ 000f2260 8968
.org 0xf2262
	str r1, [r0, #20]	@ 000f2262 4161
.org 0xf2264
	bl 0xf2218	@ 000f2264 fff7d8ff
.org 0xf2268
	pop {r0}	@ 000f2268 01bc
.org 0xf226a
	bx r0	@ 000f226a 0047
