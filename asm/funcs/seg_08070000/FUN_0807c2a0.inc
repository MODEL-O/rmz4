@ FUN_0807c2a0  entry 0x0807c2a0  size 20
.thumb
.org 0x7c2a0
FUN_0807c2a0:
	push {lr}	@ 0007c2a0 00b5
.org 0x7c2a2
	ldr r2, [pc, #16]	@ 0007c2a2 044a
.org 0x7c2a4
	ldrb r1, [r0, #14]	@ 0007c2a4 817b
.org 0x7c2a6
	lsls r1, r1, #2	@ 0007c2a6 8900
.org 0x7c2a8
	adds r1, r1, r2	@ 0007c2a8 8918
.org 0x7c2aa
	ldr r1, [r1, #0]	@ 0007c2aa 0968
.org 0x7c2ac
	bl 0x128f80	@ 0007c2ac acf068fe
.org 0x7c2b0
	pop {r0}	@ 0007c2b0 01bc
.org 0x7c2b2
	bx r0	@ 0007c2b2 0047
