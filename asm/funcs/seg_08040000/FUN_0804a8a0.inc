@ FUN_0804a8a0  entry 0x0804a8a0  size 20
.thumb
.org 0x4a8a0
FUN_0804a8a0:
	push {lr}	@ 0004a8a0 00b5
.org 0x4a8a2
	ldr r2, [pc, #16]	@ 0004a8a2 044a
.org 0x4a8a4
	ldrb r1, [r0, #16]	@ 0004a8a4 017c
.org 0x4a8a6
	lsls r1, r1, #2	@ 0004a8a6 8900
.org 0x4a8a8
	adds r1, r1, r2	@ 0004a8a8 8918
.org 0x4a8aa
	ldr r1, [r1, #0]	@ 0004a8aa 0968
.org 0x4a8ac
	bl 0x128f80	@ 0004a8ac def068fb
.org 0x4a8b0
	pop {r0}	@ 0004a8b0 01bc
.org 0x4a8b2
	bx r0	@ 0004a8b2 0047
