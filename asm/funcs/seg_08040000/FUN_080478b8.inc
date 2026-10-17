@ FUN_080478b8  entry 0x080478b8  size 20
.thumb
.org 0x478b8
FUN_080478b8:
	push {lr}	@ 000478b8 00b5
.org 0x478ba
	ldr r2, [pc, #16]	@ 000478ba 044a
.org 0x478bc
	ldrb r1, [r0, #16]	@ 000478bc 017c
.org 0x478be
	lsls r1, r1, #2	@ 000478be 8900
.org 0x478c0
	adds r1, r1, r2	@ 000478c0 8918
.org 0x478c2
	ldr r1, [r1, #0]	@ 000478c2 0968
.org 0x478c4
	bl 0x128f80	@ 000478c4 e1f05cfb
.org 0x478c8
	pop {r0}	@ 000478c8 01bc
.org 0x478ca
	bx r0	@ 000478ca 0047
