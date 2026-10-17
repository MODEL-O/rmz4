@ FUN_080dd6c8  entry 0x080dd6c8  size 20
.thumb
.org 0xdd6c8
FUN_080dd6c8:
	push {lr}	@ 000dd6c8 00b5
.org 0xdd6ca
	ldr r2, [pc, #16]	@ 000dd6ca 044a
.org 0xdd6cc
	ldrb r1, [r0, #16]	@ 000dd6cc 017c
.org 0xdd6ce
	lsls r1, r1, #2	@ 000dd6ce 8900
.org 0xdd6d0
	adds r1, r1, r2	@ 000dd6d0 8918
.org 0xdd6d2
	ldr r1, [r1, #0]	@ 000dd6d2 0968
.org 0xdd6d4
	bl 0x128f80	@ 000dd6d4 4bf054fc
.org 0xdd6d8
	pop {r0}	@ 000dd6d8 01bc
.org 0xdd6da
	bx r0	@ 000dd6da 0047
