@ FUN_080334fc  entry 0x080334fc  size 24
.thumb
.org 0x334fc
FUN_080334fc:
	push {lr}	@ 000334fc 00b5
.org 0x334fe
	ldr r2, [pc, #20]	@ 000334fe 054a
.org 0x33500
	ldr r3, [pc, #20]	@ 00033500 054b
.org 0x33502
	adds r1, r0, r3	@ 00033502 c118
.org 0x33504
	ldrb r1, [r1, #0]	@ 00033504 0978
.org 0x33506
	lsls r1, r1, #2	@ 00033506 8900
.org 0x33508
	adds r1, r1, r2	@ 00033508 8918
.org 0x3350a
	ldr r1, [r1, #0]	@ 0003350a 0968
.org 0x3350c
	bl 0x128f80	@ 0003350c f5f038fd
.org 0x33510
	pop {r0}	@ 00033510 01bc
.org 0x33512
	bx r0	@ 00033512 0047
