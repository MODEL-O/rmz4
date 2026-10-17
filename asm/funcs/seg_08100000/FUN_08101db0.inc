@ FUN_08101db0  entry 0x08101db0  size 20
.thumb
.org 0x101db0
FUN_08101db0:
	push {lr}	@ 00101db0 00b5
.org 0x101db2
	ldr r2, [pc, #16]	@ 00101db2 044a
.org 0x101db4
	ldrb r1, [r0, #16]	@ 00101db4 017c
.org 0x101db6
	lsls r1, r1, #2	@ 00101db6 8900
.org 0x101db8
	adds r1, r1, r2	@ 00101db8 8918
.org 0x101dba
	ldr r1, [r1, #0]	@ 00101dba 0968
.org 0x101dbc
	bl 0x128f80	@ 00101dbc 27f0e0f8
.org 0x101dc0
	pop {r0}	@ 00101dc0 01bc
.org 0x101dc2
	bx r0	@ 00101dc2 0047
