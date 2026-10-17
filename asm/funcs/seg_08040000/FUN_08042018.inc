@ FUN_08042018  entry 0x08042018  size 20
.thumb
.org 0x42018
FUN_08042018:
	push {lr}	@ 00042018 00b5
.org 0x4201a
	ldr r2, [pc, #16]	@ 0004201a 044a
.org 0x4201c
	ldrb r1, [r0, #16]	@ 0004201c 017c
.org 0x4201e
	lsls r1, r1, #2	@ 0004201e 8900
.org 0x42020
	adds r1, r1, r2	@ 00042020 8918
.org 0x42022
	ldr r1, [r1, #0]	@ 00042022 0968
.org 0x42024
	bl 0x128f80	@ 00042024 e6f0acff
.org 0x42028
	pop {r0}	@ 00042028 01bc
.org 0x4202a
	bx r0	@ 0004202a 0047
