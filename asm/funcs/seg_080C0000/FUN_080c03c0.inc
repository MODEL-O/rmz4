@ FUN_080c03c0  entry 0x080c03c0  size 20
.thumb
.org 0xc03c0
FUN_080c03c0:
	push {lr}	@ 000c03c0 00b5
.org 0xc03c2
	ldr r2, [pc, #16]	@ 000c03c2 044a
.org 0xc03c4
	ldrb r1, [r0, #16]	@ 000c03c4 017c
.org 0xc03c6
	lsls r1, r1, #2	@ 000c03c6 8900
.org 0xc03c8
	adds r1, r1, r2	@ 000c03c8 8918
.org 0xc03ca
	ldr r1, [r1, #0]	@ 000c03ca 0968
.org 0xc03cc
	bl 0x128f80	@ 000c03cc 68f0d8fd
.org 0xc03d0
	pop {r0}	@ 000c03d0 01bc
.org 0xc03d2
	bx r0	@ 000c03d2 0047
