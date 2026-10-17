@ FUN_08014648  entry 0x08014648  size 12
.thumb
.org 0x14648
FUN_08014648:
	push {lr}	@ 00014648 00b5
.org 0x1464a
	movs r0, #116	@ 0001464a 7420
.org 0x1464c
	bl 0x2b5c	@ 0001464c eef786fa
.org 0x14650
	pop {r0}	@ 00014650 01bc
.org 0x14652
	bx r0	@ 00014652 0047
