@ FUN_080f7e80  entry 0x080f7e80  size 20
.thumb
.org 0xf7e80
FUN_080f7e80:
	push {lr}	@ 000f7e80 00b5
.org 0xf7e82
	ldr r2, [pc, #16]	@ 000f7e82 044a
.org 0xf7e84
	ldrb r1, [r0, #13]	@ 000f7e84 417b
.org 0xf7e86
	lsls r1, r1, #2	@ 000f7e86 8900
.org 0xf7e88
	adds r1, r1, r2	@ 000f7e88 8918
.org 0xf7e8a
	ldr r1, [r1, #0]	@ 000f7e8a 0968
.org 0xf7e8c
	bl 0x128f80	@ 000f7e8c 31f078f8
.org 0xf7e90
	pop {r0}	@ 000f7e90 01bc
.org 0xf7e92
	bx r0	@ 000f7e92 0047
