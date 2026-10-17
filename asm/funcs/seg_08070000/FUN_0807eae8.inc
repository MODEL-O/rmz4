@ FUN_0807eae8  entry 0x0807eae8  size 14
.thumb
.org 0x7eae8
FUN_0807eae8:
	push {lr}	@ 0007eae8 00b5
.org 0x7eaea
	movs r2, #0	@ 0007eaea 0022
.org 0x7eaec
	movs r3, #0	@ 0007eaec 0023
.org 0x7eaee
	bl 0xba5d8	@ 0007eaee 3bf073fd
.org 0x7eaf2
	pop {r0}	@ 0007eaf2 01bc
.org 0x7eaf4
	bx r0	@ 0007eaf4 0047
