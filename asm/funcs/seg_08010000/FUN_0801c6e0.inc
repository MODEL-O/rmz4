@ FUN_0801c6e0  entry 0x0801c6e0  size 22
.thumb
.org 0x1c6e0
FUN_0801c6e0:
	push {lr}	@ 0001c6e0 00b5
.org 0x1c6e2
	movs r0, #222	@ 0001c6e2 de20
.org 0x1c6e4
	movs r1, #0	@ 0001c6e4 0021
.org 0x1c6e6
	bl 0x249c	@ 0001c6e6 e5f7d9fe
.org 0x1c6ea
	movs r0, #223	@ 0001c6ea df20
.org 0x1c6ec
	movs r1, #0	@ 0001c6ec 0021
.org 0x1c6ee
	bl 0x249c	@ 0001c6ee e5f7d5fe
.org 0x1c6f2
	pop {r0}	@ 0001c6f2 01bc
.org 0x1c6f4
	bx r0	@ 0001c6f4 0047
