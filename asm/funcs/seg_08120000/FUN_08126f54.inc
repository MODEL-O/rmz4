@ FUN_08126f54  entry 0x08126f54  size 10
.thumb
.org 0x126f54
FUN_08126f54:
	ldr r2, [r1, #64]	@ 00126f54 0a6c
.org 0x126f56
	adds r3, r2, #1	@ 00126f56 531c
.org 0x126f58
	str r3, [r1, #64]	@ 00126f58 0b64
.org 0x126f5a
	ldrb r3, [r2, #0]	@ 00126f5a 1378
.org 0x126f5c
	b.n 0x126f3a	@ 00126f5c ede7
