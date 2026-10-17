@ FUN_08119de8  entry 0x08119de8  size 44
.thumb
.org 0x119de8
FUN_08119de8:
	push {lr}	@ 00119de8 00b5
.org 0x119dea
	ldr r1, [pc, #40]	@ 00119dea 0a49
.org 0x119dec
	movs r2, #0	@ 00119dec 0022
.org 0x119dee
	strh r2, [r1, #0]	@ 00119dee 0a80
.org 0x119df0
	ldr r3, [pc, #36]	@ 00119df0 094b
.org 0x119df2
	strh r2, [r3, #0]	@ 00119df2 1a80
.org 0x119df4
	movs r1, #255	@ 00119df4 ff21
.org 0x119df6
	strb r1, [r3, #14]	@ 00119df6 9973
.org 0x119df8
	movs r1, #221	@ 00119df8 dd21
.org 0x119dfa
	lsls r1, r1, #4	@ 00119dfa 0901
.org 0x119dfc
	adds r0, r0, r1	@ 00119dfc 4018
.org 0x119dfe
	movs r1, #1	@ 00119dfe 0121
.org 0x119e00
	strb r1, [r0, #1]	@ 00119e00 4170
.org 0x119e02
	ldrb r0, [r0, #0]	@ 00119e02 0078
.org 0x119e04
	adds r0, #20	@ 00119e04 1430
.org 0x119e06
	bl 0x2624	@ 00119e06 e8f60dfc
.org 0x119e0a
	movs r0, #67	@ 00119e0a 4320
.org 0x119e0c
	bl 0x2624	@ 00119e0c e8f60afc
.org 0x119e10
	pop {r0}	@ 00119e10 01bc
.org 0x119e12
	bx r0	@ 00119e12 0047
