@ FUN_0804a8b8  entry 0x0804a8b8  size 20
.thumb
.org 0x4a8b8
FUN_0804a8b8:
	push {lr}	@ 0004a8b8 00b5
.org 0x4a8ba
	ldr r2, [pc, #16]	@ 0004a8ba 044a
.org 0x4a8bc
	ldrb r1, [r0, #16]	@ 0004a8bc 017c
.org 0x4a8be
	lsls r1, r1, #2	@ 0004a8be 8900
.org 0x4a8c0
	adds r1, r1, r2	@ 0004a8c0 8918
.org 0x4a8c2
	ldr r1, [r1, #0]	@ 0004a8c2 0968
.org 0x4a8c4
	bl 0x128f80	@ 0004a8c4 def05cfb
.org 0x4a8c8
	pop {r0}	@ 0004a8c8 01bc
.org 0x4a8ca
	bx r0	@ 0004a8ca 0047
