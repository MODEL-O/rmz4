@ FUN_080c5300  entry 0x080c5300  size 20
.thumb
.org 0xc5300
FUN_080c5300:
	push {lr}	@ 000c5300 00b5
.org 0xc5302
	ldr r2, [pc, #16]	@ 000c5302 044a
.org 0xc5304
	ldrb r1, [r0, #16]	@ 000c5304 017c
.org 0xc5306
	lsls r1, r1, #2	@ 000c5306 8900
.org 0xc5308
	adds r1, r1, r2	@ 000c5308 8918
.org 0xc530a
	ldr r1, [r1, #0]	@ 000c530a 0968
.org 0xc530c
	bl 0x128f80	@ 000c530c 63f038fe
.org 0xc5310
	pop {r0}	@ 000c5310 01bc
.org 0xc5312
	bx r0	@ 000c5312 0047
