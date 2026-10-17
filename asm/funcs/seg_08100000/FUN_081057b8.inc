@ FUN_081057b8  entry 0x081057b8  size 20
.thumb
.org 0x1057b8
FUN_081057b8:
	push {lr}	@ 001057b8 00b5
.org 0x1057ba
	ldr r2, [pc, #16]	@ 001057ba 044a
.org 0x1057bc
	ldrb r1, [r0, #16]	@ 001057bc 017c
.org 0x1057be
	lsls r1, r1, #2	@ 001057be 8900
.org 0x1057c0
	adds r1, r1, r2	@ 001057c0 8918
.org 0x1057c2
	ldr r1, [r1, #0]	@ 001057c2 0968
.org 0x1057c4
	bl 0x128f80	@ 001057c4 23f0dcfb
.org 0x1057c8
	pop {r0}	@ 001057c8 01bc
.org 0x1057ca
	bx r0	@ 001057ca 0047
