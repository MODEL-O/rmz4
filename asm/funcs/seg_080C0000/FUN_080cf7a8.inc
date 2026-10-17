@ FUN_080cf7a8  entry 0x080cf7a8  size 20
.thumb
.org 0xcf7a8
FUN_080cf7a8:
	push {lr}	@ 000cf7a8 00b5
.org 0xcf7aa
	ldr r2, [pc, #16]	@ 000cf7aa 044a
.org 0xcf7ac
	ldrb r1, [r0, #16]	@ 000cf7ac 017c
.org 0xcf7ae
	lsls r1, r1, #2	@ 000cf7ae 8900
.org 0xcf7b0
	adds r1, r1, r2	@ 000cf7b0 8918
.org 0xcf7b2
	ldr r1, [r1, #0]	@ 000cf7b2 0968
.org 0xcf7b4
	bl 0x128f80	@ 000cf7b4 59f0e4fb
.org 0xcf7b8
	pop {r0}	@ 000cf7b8 01bc
.org 0xcf7ba
	bx r0	@ 000cf7ba 0047
