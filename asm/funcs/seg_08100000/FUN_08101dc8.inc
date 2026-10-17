@ FUN_08101dc8  entry 0x08101dc8  size 20
.thumb
.org 0x101dc8
FUN_08101dc8:
	push {lr}	@ 00101dc8 00b5
.org 0x101dca
	ldr r2, [pc, #16]	@ 00101dca 044a
.org 0x101dcc
	ldrb r1, [r0, #16]	@ 00101dcc 017c
.org 0x101dce
	lsls r1, r1, #2	@ 00101dce 8900
.org 0x101dd0
	adds r1, r1, r2	@ 00101dd0 8918
.org 0x101dd2
	ldr r1, [r1, #0]	@ 00101dd2 0968
.org 0x101dd4
	bl 0x128f80	@ 00101dd4 27f0d4f8
.org 0x101dd8
	pop {r0}	@ 00101dd8 01bc
.org 0x101dda
	bx r0	@ 00101dda 0047
