@ FUN_080478a0  entry 0x080478a0  size 20
.thumb
.org 0x478a0
FUN_080478a0:
	push {lr}	@ 000478a0 00b5
.org 0x478a2
	ldr r2, [pc, #16]	@ 000478a2 044a
.org 0x478a4
	ldrb r1, [r0, #16]	@ 000478a4 017c
.org 0x478a6
	lsls r1, r1, #2	@ 000478a6 8900
.org 0x478a8
	adds r1, r1, r2	@ 000478a8 8918
.org 0x478aa
	ldr r1, [r1, #0]	@ 000478aa 0968
.org 0x478ac
	bl 0x128f80	@ 000478ac e1f068fb
.org 0x478b0
	pop {r0}	@ 000478b0 01bc
.org 0x478b2
	bx r0	@ 000478b2 0047
