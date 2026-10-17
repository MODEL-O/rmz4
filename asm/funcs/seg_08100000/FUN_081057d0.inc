@ FUN_081057d0  entry 0x081057d0  size 20
.thumb
.org 0x1057d0
FUN_081057d0:
	push {lr}	@ 001057d0 00b5
.org 0x1057d2
	ldr r2, [pc, #16]	@ 001057d2 044a
.org 0x1057d4
	ldrb r1, [r0, #16]	@ 001057d4 017c
.org 0x1057d6
	lsls r1, r1, #2	@ 001057d6 8900
.org 0x1057d8
	adds r1, r1, r2	@ 001057d8 8918
.org 0x1057da
	ldr r1, [r1, #0]	@ 001057da 0968
.org 0x1057dc
	bl 0x128f80	@ 001057dc 23f0d0fb
.org 0x1057e0
	pop {r0}	@ 001057e0 01bc
.org 0x1057e2
	bx r0	@ 001057e2 0047
