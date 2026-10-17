@ FUN_080dd6b0  entry 0x080dd6b0  size 20
.thumb
.org 0xdd6b0
FUN_080dd6b0:
	push {lr}	@ 000dd6b0 00b5
.org 0xdd6b2
	ldr r2, [pc, #16]	@ 000dd6b2 044a
.org 0xdd6b4
	ldrb r1, [r0, #16]	@ 000dd6b4 017c
.org 0xdd6b6
	lsls r1, r1, #2	@ 000dd6b6 8900
.org 0xdd6b8
	adds r1, r1, r2	@ 000dd6b8 8918
.org 0xdd6ba
	ldr r1, [r1, #0]	@ 000dd6ba 0968
.org 0xdd6bc
	bl 0x128f80	@ 000dd6bc 4bf060fc
.org 0xdd6c0
	pop {r0}	@ 000dd6c0 01bc
.org 0xdd6c2
	bx r0	@ 000dd6c2 0047
