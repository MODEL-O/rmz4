@ FUN_080732d4  entry 0x080732d4  size 20
.thumb
.org 0x732d4
FUN_080732d4:
	push {lr}	@ 000732d4 00b5
.org 0x732d6
	ldr r2, [pc, #16]	@ 000732d6 044a
.org 0x732d8
	ldrb r1, [r0, #13]	@ 000732d8 417b
.org 0x732da
	lsls r1, r1, #2	@ 000732da 8900
.org 0x732dc
	adds r1, r1, r2	@ 000732dc 8918
.org 0x732de
	ldr r1, [r1, #0]	@ 000732de 0968
.org 0x732e0
	bl 0x128f80	@ 000732e0 b5f04efe
.org 0x732e4
	pop {r0}	@ 000732e4 01bc
.org 0x732e6
	bx r0	@ 000732e6 0047
