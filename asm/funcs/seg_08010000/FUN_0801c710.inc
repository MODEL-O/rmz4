@ FUN_0801c710  entry 0x0801c710  size 18
.thumb
.org 0x1c710
FUN_0801c710:
	push {lr}	@ 0001c710 00b5
.org 0x1c712
	movs r0, #222	@ 0001c712 de20
.org 0x1c714
	bl 0x2624	@ 0001c714 e5f786ff
.org 0x1c718
	movs r0, #223	@ 0001c718 df20
.org 0x1c71a
	bl 0x2624	@ 0001c71a e5f783ff
.org 0x1c71e
	pop {r0}	@ 0001c71e 01bc
.org 0x1c720
	bx r0	@ 0001c720 0047
