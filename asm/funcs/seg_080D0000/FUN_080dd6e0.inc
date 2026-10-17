@ FUN_080dd6e0  entry 0x080dd6e0  size 20
.thumb
.org 0xdd6e0
FUN_080dd6e0:
	push {lr}	@ 000dd6e0 00b5
.org 0xdd6e2
	ldr r2, [pc, #16]	@ 000dd6e2 044a
.org 0xdd6e4
	ldrb r1, [r0, #16]	@ 000dd6e4 017c
.org 0xdd6e6
	lsls r1, r1, #2	@ 000dd6e6 8900
.org 0xdd6e8
	adds r1, r1, r2	@ 000dd6e8 8918
.org 0xdd6ea
	ldr r1, [r1, #0]	@ 000dd6ea 0968
.org 0xdd6ec
	bl 0x128f80	@ 000dd6ec 4bf048fc
.org 0xdd6f0
	pop {r0}	@ 000dd6f0 01bc
.org 0xdd6f2
	bx r0	@ 000dd6f2 0047
