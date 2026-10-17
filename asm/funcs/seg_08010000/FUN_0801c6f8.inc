@ FUN_0801c6f8  entry 0x0801c6f8  size 18
.thumb
.org 0x1c6f8
FUN_0801c6f8:
	push {lr}	@ 0001c6f8 00b5
.org 0x1c6fa
	movs r0, #222	@ 0001c6fa de20
.org 0x1c6fc
	bl 0x25d8	@ 0001c6fc e5f76cff
.org 0x1c700
	movs r0, #223	@ 0001c700 df20
.org 0x1c702
	bl 0x25d8	@ 0001c702 e5f769ff
.org 0x1c706
	pop {r0}	@ 0001c706 01bc
.org 0x1c708
	bx r0	@ 0001c708 0047
