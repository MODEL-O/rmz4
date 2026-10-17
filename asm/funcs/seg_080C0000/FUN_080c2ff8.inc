@ FUN_080c2ff8  entry 0x080c2ff8  size 10
.thumb
.org 0xc2ff8
FUN_080c2ff8:
	push {lr}	@ 000c2ff8 00b5
.org 0xc2ffa
	bl 0xbd3f8	@ 000c2ffa faf7fdf9
.org 0xc2ffe
	pop {r0}	@ 000c2ffe 01bc
.org 0xc3000
	bx r0	@ 000c3000 0047
