@ FUN_080c4bc8  entry 0x080c4bc8  size 10
.thumb
.org 0xc4bc8
FUN_080c4bc8:
	push {lr}	@ 000c4bc8 00b5
.org 0xc4bca
	bl 0xbd3f8	@ 000c4bca f8f715fc
.org 0xc4bce
	pop {r0}	@ 000c4bce 01bc
.org 0xc4bd0
	bx r0	@ 000c4bd0 0047
