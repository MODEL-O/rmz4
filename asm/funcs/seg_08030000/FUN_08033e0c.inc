@ FUN_08033e0c  entry 0x08033e0c  size 24
.thumb
.org 0x33e0c
FUN_08033e0c:
	push {lr}	@ 00033e0c 00b5
.org 0x33e0e
	ldr r2, [pc, #20]	@ 00033e0e 054a
.org 0x33e10
	ldr r3, [pc, #20]	@ 00033e10 054b
.org 0x33e12
	adds r1, r0, r3	@ 00033e12 c118
.org 0x33e14
	ldrb r1, [r1, #0]	@ 00033e14 0978
.org 0x33e16
	lsls r1, r1, #2	@ 00033e16 8900
.org 0x33e18
	adds r1, r1, r2	@ 00033e18 8918
.org 0x33e1a
	ldr r1, [r1, #0]	@ 00033e1a 0968
.org 0x33e1c
	bl 0x128f80	@ 00033e1c f5f0b0f8
.org 0x33e20
	pop {r0}	@ 00033e20 01bc
.org 0x33e22
	bx r0	@ 00033e22 0047
