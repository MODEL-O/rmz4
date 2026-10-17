@ FUN_08095ecc  entry 0x08095ecc  size 20
.thumb
.org 0x95ecc
FUN_08095ecc:
	push {lr}	@ 00095ecc 00b5
.org 0x95ece
	ldr r2, [pc, #16]	@ 00095ece 044a
.org 0x95ed0
	ldrb r1, [r0, #16]	@ 00095ed0 017c
.org 0x95ed2
	lsls r1, r1, #2	@ 00095ed2 8900
.org 0x95ed4
	adds r1, r1, r2	@ 00095ed4 8918
.org 0x95ed6
	ldr r1, [r1, #0]	@ 00095ed6 0968
.org 0x95ed8
	bl 0x128f80	@ 00095ed8 93f052f8
.org 0x95edc
	pop {r0}	@ 00095edc 01bc
.org 0x95ede
	bx r0	@ 00095ede 0047
