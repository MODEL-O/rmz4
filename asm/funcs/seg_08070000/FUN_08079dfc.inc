@ FUN_08079dfc  entry 0x08079dfc  size 20
.thumb
.org 0x79dfc
FUN_08079dfc:
	push {lr}	@ 00079dfc 00b5
.org 0x79dfe
	ldr r2, [pc, #16]	@ 00079dfe 044a
.org 0x79e00
	ldrb r1, [r0, #15]	@ 00079e00 c17b
.org 0x79e02
	lsls r1, r1, #2	@ 00079e02 8900
.org 0x79e04
	adds r1, r1, r2	@ 00079e04 8918
.org 0x79e06
	ldr r1, [r1, #0]	@ 00079e06 0968
.org 0x79e08
	bl 0x128f80	@ 00079e08 aff0baf8
.org 0x79e0c
	pop {r0}	@ 00079e0c 01bc
.org 0x79e0e
	bx r0	@ 00079e0e 0047
