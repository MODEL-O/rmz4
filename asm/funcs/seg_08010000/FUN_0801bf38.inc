@ FUN_0801bf38  entry 0x0801bf38  size 18
.thumb
.org 0x1bf38
FUN_0801bf38:
	push {lr}	@ 0001bf38 00b5
.org 0x1bf3a
	movs r0, #118	@ 0001bf3a 7620
.org 0x1bf3c
	bl 0x2b5c	@ 0001bf3c e6f70efe
.org 0x1bf40
	ldr r1, [pc, #8]	@ 0001bf40 0249
.org 0x1bf42
	movs r0, #0	@ 0001bf42 0020
.org 0x1bf44
	strh r0, [r1, #0]	@ 0001bf44 0880
.org 0x1bf46
	pop {r0}	@ 0001bf46 01bc
.org 0x1bf48
	bx r0	@ 0001bf48 0047
