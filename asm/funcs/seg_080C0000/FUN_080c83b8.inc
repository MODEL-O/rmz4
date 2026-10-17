@ FUN_080c83b8  entry 0x080c83b8  size 10
.thumb
.org 0xc83b8
FUN_080c83b8:
	push {lr}	@ 000c83b8 00b5
.org 0xc83ba
	bl 0xbd3f8	@ 000c83ba f5f71df8
.org 0xc83be
	pop {r0}	@ 000c83be 01bc
.org 0xc83c0
	bx r0	@ 000c83c0 0047
