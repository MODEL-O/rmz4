@ FUN_080bbec0  entry 0x080bbec0  size 20
.thumb
.org 0xbbec0
FUN_080bbec0:
	push {lr}	@ 000bbec0 00b5
.org 0xbbec2
	ldr r2, [pc, #16]	@ 000bbec2 044a
.org 0xbbec4
	ldrb r1, [r0, #13]	@ 000bbec4 417b
.org 0xbbec6
	lsls r1, r1, #2	@ 000bbec6 8900
.org 0xbbec8
	adds r1, r1, r2	@ 000bbec8 8918
.org 0xbbeca
	ldr r1, [r1, #0]	@ 000bbeca 0968
.org 0xbbecc
	bl 0x128f80	@ 000bbecc 6df058f8
.org 0xbbed0
	pop {r0}	@ 000bbed0 01bc
.org 0xbbed2
	bx r0	@ 000bbed2 0047
