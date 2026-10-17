@ FUN_08093ff0  entry 0x08093ff0  size 20
.thumb
.org 0x93ff0
FUN_08093ff0:
	push {lr}	@ 00093ff0 00b5
.org 0x93ff2
	ldr r2, [pc, #16]	@ 00093ff2 044a
.org 0x93ff4
	ldrb r1, [r0, #13]	@ 00093ff4 417b
.org 0x93ff6
	lsls r1, r1, #2	@ 00093ff6 8900
.org 0x93ff8
	adds r1, r1, r2	@ 00093ff8 8918
.org 0x93ffa
	ldr r1, [r1, #0]	@ 00093ffa 0968
.org 0x93ffc
	bl 0x128f80	@ 00093ffc 94f0c0ff
.org 0x94000
	pop {r0}	@ 00094000 01bc
.org 0x94002
	bx r0	@ 00094002 0047
