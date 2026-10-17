@ FUN_08092300  entry 0x08092300  size 20
.thumb
.org 0x92300
FUN_08092300:
	push {lr}	@ 00092300 00b5
.org 0x92302
	ldr r2, [pc, #16]	@ 00092302 044a
.org 0x92304
	ldrb r1, [r0, #13]	@ 00092304 417b
.org 0x92306
	lsls r1, r1, #2	@ 00092306 8900
.org 0x92308
	adds r1, r1, r2	@ 00092308 8918
.org 0x9230a
	ldr r1, [r1, #0]	@ 0009230a 0968
.org 0x9230c
	bl 0x128f80	@ 0009230c 96f038fe
.org 0x92310
	pop {r0}	@ 00092310 01bc
.org 0x92312
	bx r0	@ 00092312 0047
