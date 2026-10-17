@ FUN_0810e5f0  entry 0x0810e5f0  size 20
.thumb
.org 0x10e5f0
FUN_0810e5f0:
	push {lr}	@ 0010e5f0 00b5
.org 0x10e5f2
	lsls r0, r0, #16	@ 0010e5f2 0004
.org 0x10e5f4
	lsrs r0, r0, #16	@ 0010e5f4 000c
.org 0x10e5f6
	bl 0x10e584	@ 0010e5f6 fff7c5ff
.org 0x10e5fa
	ldr r1, [pc, #8]	@ 0010e5fa 0249
.org 0x10e5fc
	movs r0, #0	@ 0010e5fc 0020
.org 0x10e5fe
	str r0, [r1, #8]	@ 0010e5fe 8860
.org 0x10e600
	pop {r0}	@ 0010e600 01bc
.org 0x10e602
	bx r0	@ 0010e602 0047
