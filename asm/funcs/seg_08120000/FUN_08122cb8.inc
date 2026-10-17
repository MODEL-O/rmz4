@ FUN_08122cb8  entry 0x08122cb8  size 20
.thumb
.org 0x122cb8
FUN_08122cb8:
	push {lr}	@ 00122cb8 00b5
.org 0x122cba
	lsls r0, r1, #24	@ 00122cba 0806
.org 0x122cbc
	lsrs r0, r0, #24	@ 00122cbc 000e
.org 0x122cbe
	ldr r1, [pc, #12]	@ 00122cbe 0349
.org 0x122cc0
	movs r2, #166	@ 00122cc0 a622
.org 0x122cc2
	lsls r2, r2, #1	@ 00122cc2 5200
.org 0x122cc4
	bl 0x16f0	@ 00122cc4 def614fd
.org 0x122cc8
	pop {r0}	@ 00122cc8 01bc
.org 0x122cca
	bx r0	@ 00122cca 0047
