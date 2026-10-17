@ FUN_080962c4  entry 0x080962c4  size 10
.thumb
.org 0x962c4
FUN_080962c4:
	push {lr}	@ 000962c4 00b5
.org 0x962c6
	bl 0x7f8ec	@ 000962c6 e9f711fb
.org 0x962ca
	pop {r0}	@ 000962ca 01bc
.org 0x962cc
	bx r0	@ 000962cc 0047
