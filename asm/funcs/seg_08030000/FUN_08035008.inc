@ FUN_08035008  entry 0x08035008  size 18
.thumb
.org 0x35008
FUN_08035008:
	push {lr}	@ 00035008 00b5
.org 0x3500a
	movs r1, #0	@ 0003500a 0021
.org 0x3500c
	strb r1, [r0, #13]	@ 0003500c 4173
.org 0x3500e
	strb r1, [r0, #14]	@ 0003500e 8173
.org 0x35010
	strb r1, [r0, #15]	@ 00035010 c173
.org 0x35012
	bl 0x33e0c	@ 00035012 fef7fbfe
.org 0x35016
	pop {r0}	@ 00035016 01bc
.org 0x35018
	bx r0	@ 00035018 0047
