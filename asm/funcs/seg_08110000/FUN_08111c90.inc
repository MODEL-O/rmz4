@ FUN_08111c90  entry 0x08111c90  size 20
.thumb
.org 0x111c90
FUN_08111c90:
	push {lr}	@ 00111c90 00b5
.org 0x111c92
	ldr r2, [pc, #16]	@ 00111c92 044a
.org 0x111c94
	ldrb r1, [r0, #5]	@ 00111c94 4179
.org 0x111c96
	lsls r1, r1, #2	@ 00111c96 8900
.org 0x111c98
	adds r1, r1, r2	@ 00111c98 8918
.org 0x111c9a
	ldr r1, [r1, #0]	@ 00111c9a 0968
.org 0x111c9c
	bl 0x128f80	@ 00111c9c 17f070f9
.org 0x111ca0
	pop {r0}	@ 00111ca0 01bc
.org 0x111ca2
	bx r0	@ 00111ca2 0047
