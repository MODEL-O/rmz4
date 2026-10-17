@ FUN_0801c6a8  entry 0x0801c6a8  size 12
.thumb
.org 0x1c6a8
FUN_0801c6a8:
	push {lr}	@ 0001c6a8 00b5
.org 0x1c6aa
	movs r0, #200	@ 0001c6aa c820
.org 0x1c6ac
	bl 0x2624	@ 0001c6ac e5f7baff
.org 0x1c6b0
	pop {r0}	@ 0001c6b0 01bc
.org 0x1c6b2
	bx r0	@ 0001c6b2 0047
