@ FUN_08035290  entry 0x08035290  size 18
.thumb
.org 0x35290
FUN_08035290:
	push {lr}	@ 00035290 00b5
.org 0x35292
	movs r1, #0	@ 00035292 0021
.org 0x35294
	strb r1, [r0, #13]	@ 00035294 4173
.org 0x35296
	strb r1, [r0, #14]	@ 00035296 8173
.org 0x35298
	strb r1, [r0, #15]	@ 00035298 c173
.org 0x3529a
	bl 0x3461c	@ 0003529a fff7bff9
.org 0x3529e
	pop {r0}	@ 0003529e 01bc
.org 0x352a0
	bx r0	@ 000352a0 0047
