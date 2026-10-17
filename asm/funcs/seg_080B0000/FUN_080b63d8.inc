@ FUN_080b63d8  entry 0x080b63d8  size 20
.thumb
.org 0xb63d8
FUN_080b63d8:
	push {lr}	@ 000b63d8 00b5
.org 0xb63da
	ldr r2, [pc, #16]	@ 000b63da 044a
.org 0xb63dc
	ldrb r1, [r0, #13]	@ 000b63dc 417b
.org 0xb63de
	lsls r1, r1, #2	@ 000b63de 8900
.org 0xb63e0
	adds r1, r1, r2	@ 000b63e0 8918
.org 0xb63e2
	ldr r1, [r1, #0]	@ 000b63e2 0968
.org 0xb63e4
	bl 0x128f80	@ 000b63e4 72f0ccfd
.org 0xb63e8
	pop {r0}	@ 000b63e8 01bc
.org 0xb63ea
	bx r0	@ 000b63ea 0047
