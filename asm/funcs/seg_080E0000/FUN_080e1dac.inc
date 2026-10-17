@ FUN_080e1dac  entry 0x080e1dac  size 20
.thumb
.org 0xe1dac
FUN_080e1dac:
	push {lr}	@ 000e1dac 00b5
.org 0xe1dae
	ldr r2, [pc, #16]	@ 000e1dae 044a
.org 0xe1db0
	ldrb r1, [r0, #16]	@ 000e1db0 017c
.org 0xe1db2
	lsls r1, r1, #2	@ 000e1db2 8900
.org 0xe1db4
	adds r1, r1, r2	@ 000e1db4 8918
.org 0xe1db6
	ldr r1, [r1, #0]	@ 000e1db6 0968
.org 0xe1db8
	bl 0x128f80	@ 000e1db8 47f0e2f8
.org 0xe1dbc
	pop {r0}	@ 000e1dbc 01bc
.org 0xe1dbe
	bx r0	@ 000e1dbe 0047
