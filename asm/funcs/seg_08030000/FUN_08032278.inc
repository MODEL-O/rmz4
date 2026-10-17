@ FUN_08032278  entry 0x08032278  size 20
.thumb
.org 0x32278
FUN_08032278:
	push {lr}	@ 00032278 00b5
.org 0x3227a
	ldr r2, [pc, #16]	@ 0003227a 044a
.org 0x3227c
	ldrb r1, [r0, #14]	@ 0003227c 817b
.org 0x3227e
	lsls r1, r1, #2	@ 0003227e 8900
.org 0x32280
	adds r1, r1, r2	@ 00032280 8918
.org 0x32282
	ldr r1, [r1, #0]	@ 00032282 0968
.org 0x32284
	bl 0x128f80	@ 00032284 f6f07cfe
.org 0x32288
	pop {r0}	@ 00032288 01bc
.org 0x3228a
	bx r0	@ 0003228a 0047
