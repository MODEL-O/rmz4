@ FUN_08126f60  entry 0x08126f60  size 32
.thumb
.org 0x126f60
FUN_08126f60:
	push {lr}	@ 00126f60 00b5
.org 0x126f62
	ldr r2, [r1, #64]	@ 00126f62 0a6c
.org 0x126f64
	ldrb r0, [r2, #3]	@ 00126f64 d078
.org 0x126f66
	lsls r0, r0, #8	@ 00126f66 0002
.org 0x126f68
	ldrb r3, [r2, #2]	@ 00126f68 9378
.org 0x126f6a
	orrs r0, r3	@ 00126f6a 1843
.org 0x126f6c
	lsls r0, r0, #8	@ 00126f6c 0002
.org 0x126f6e
	ldrb r3, [r2, #1]	@ 00126f6e 5378
.org 0x126f70
	orrs r0, r3	@ 00126f70 1843
.org 0x126f72
	lsls r0, r0, #8	@ 00126f72 0002
.org 0x126f74
	bl 0x126f38	@ 00126f74 fff7e0ff
.org 0x126f78
	orrs r0, r3	@ 00126f78 1843
.org 0x126f7a
	str r0, [r1, #64]	@ 00126f7a 0864
.org 0x126f7c
	pop {r0}	@ 00126f7c 01bc
.org 0x126f7e
	bx r0	@ 00126f7e 0047
