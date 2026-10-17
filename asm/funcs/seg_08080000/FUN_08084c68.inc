@ FUN_08084c68  entry 0x08084c68  size 20
.thumb
.org 0x84c68
FUN_08084c68:
	push {lr}	@ 00084c68 00b5
.org 0x84c6a
	ldr r2, [pc, #16]	@ 00084c6a 044a
.org 0x84c6c
	ldrb r1, [r0, #13]	@ 00084c6c 417b
.org 0x84c6e
	lsls r1, r1, #2	@ 00084c6e 8900
.org 0x84c70
	adds r1, r1, r2	@ 00084c70 8918
.org 0x84c72
	ldr r1, [r1, #0]	@ 00084c72 0968
.org 0x84c74
	bl 0x128f80	@ 00084c74 a4f084f9
.org 0x84c78
	pop {r0}	@ 00084c78 01bc
.org 0x84c7a
	bx r0	@ 00084c7a 0047
