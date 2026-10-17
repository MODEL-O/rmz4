@ FUN_0805b294  entry 0x0805b294  size 20
.thumb
.org 0x5b294
FUN_0805b294:
	push {lr}	@ 0005b294 00b5
.org 0x5b296
	ldr r2, [pc, #16]	@ 0005b296 044a
.org 0x5b298
	ldrb r1, [r0, #14]	@ 0005b298 817b
.org 0x5b29a
	lsls r1, r1, #2	@ 0005b29a 8900
.org 0x5b29c
	adds r1, r1, r2	@ 0005b29c 8918
.org 0x5b29e
	ldr r1, [r1, #0]	@ 0005b29e 0968
.org 0x5b2a0
	bl 0x128f80	@ 0005b2a0 cdf06efe
.org 0x5b2a4
	pop {r0}	@ 0005b2a4 01bc
.org 0x5b2a6
	bx r0	@ 0005b2a6 0047
