@ FUN_08035a44  entry 0x08035a44  size 18
.thumb
.org 0x35a44
FUN_08035a44:
	push {lr}	@ 00035a44 00b5
.org 0x35a46
	movs r1, #0	@ 00035a46 0021
.org 0x35a48
	strb r1, [r0, #13]	@ 00035a48 4173
.org 0x35a4a
	strb r1, [r0, #14]	@ 00035a4a 8173
.org 0x35a4c
	strb r1, [r0, #15]	@ 00035a4c c173
.org 0x35a4e
	bl 0x3438c	@ 00035a4e fef79dfc
.org 0x35a52
	pop {r0}	@ 00035a52 01bc
.org 0x35a54
	bx r0	@ 00035a54 0047
