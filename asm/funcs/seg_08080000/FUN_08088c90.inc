@ FUN_08088c90  entry 0x08088c90  size 12
.thumb
.org 0x88c90
FUN_08088c90:
	push {lr}	@ 00088c90 00b5
.org 0x88c92
	ldr r1, [r0, #92]	@ 00088c92 c16d
.org 0x88c94
	bl 0x88db4	@ 00088c94 00f08ef8
.org 0x88c98
	pop {r1}	@ 00088c98 02bc
.org 0x88c9a
	bx r1	@ 00088c9a 0847
