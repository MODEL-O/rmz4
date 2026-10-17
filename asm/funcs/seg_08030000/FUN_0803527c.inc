@ FUN_0803527c  entry 0x0803527c  size 18
.thumb
.org 0x3527c
FUN_0803527c:
	push {lr}	@ 0003527c 00b5
.org 0x3527e
	movs r1, #0	@ 0003527e 0021
.org 0x35280
	strb r1, [r0, #13]	@ 00035280 4173
.org 0x35282
	strb r1, [r0, #14]	@ 00035282 8173
.org 0x35284
	strb r1, [r0, #15]	@ 00035284 c173
.org 0x35286
	bl 0x3456c	@ 00035286 fff771f9
.org 0x3528a
	pop {r0}	@ 0003528a 01bc
.org 0x3528c
	bx r0	@ 0003528c 0047
