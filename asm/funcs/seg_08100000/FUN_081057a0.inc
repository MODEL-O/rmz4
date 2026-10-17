@ FUN_081057a0  entry 0x081057a0  size 20
.thumb
.org 0x1057a0
FUN_081057a0:
	push {lr}	@ 001057a0 00b5
.org 0x1057a2
	ldr r2, [pc, #16]	@ 001057a2 044a
.org 0x1057a4
	ldrb r1, [r0, #16]	@ 001057a4 017c
.org 0x1057a6
	lsls r1, r1, #2	@ 001057a6 8900
.org 0x1057a8
	adds r1, r1, r2	@ 001057a8 8918
.org 0x1057aa
	ldr r1, [r1, #0]	@ 001057aa 0968
.org 0x1057ac
	bl 0x128f80	@ 001057ac 23f0e8fb
.org 0x1057b0
	pop {r0}	@ 001057b0 01bc
.org 0x1057b2
	bx r0	@ 001057b2 0047
