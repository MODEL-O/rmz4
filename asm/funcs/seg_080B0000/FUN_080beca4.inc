@ FUN_080beca4  entry 0x080beca4  size 10
.thumb
.org 0xbeca4
FUN_080beca4:
	push {lr}	@ 000beca4 00b5
.org 0xbeca6
	bl 0xbd3f8	@ 000beca6 fef7a7fb
.org 0xbecaa
	pop {r0}	@ 000becaa 01bc
.org 0xbecac
	bx r0	@ 000becac 0047
