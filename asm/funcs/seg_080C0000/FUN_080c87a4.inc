@ FUN_080c87a4  entry 0x080c87a4  size 10
.thumb
.org 0xc87a4
FUN_080c87a4:
	push {lr}	@ 000c87a4 00b5
.org 0xc87a6
	bl 0xbd3f8	@ 000c87a6 f4f727fe
.org 0xc87aa
	pop {r0}	@ 000c87aa 01bc
.org 0xc87ac
	bx r0	@ 000c87ac 0047
