@ FUN_08094df0  entry 0x08094df0  size 64
.thumb
.org 0x94df0
FUN_08094df0:
	push {r4, r5, r6, r7, lr}	@ 00094df0 f0b5
.org 0x94df2
	sub sp, #8	@ 00094df2 82b0
.org 0x94df4
	ldrb r1, [r0, #10]	@ 00094df4 817a
.org 0x94df6
	lsrs r1, r1, #4	@ 00094df6 0909
.org 0x94df8
	movs r2, #1	@ 00094df8 0122
.org 0x94dfa
	ands r1, r2	@ 00094dfa 1140
.org 0x94dfc
	ldr r2, [r0, #84]	@ 00094dfc 426d
.org 0x94dfe
	str r2, [sp, #0]	@ 00094dfe 0092
.org 0x94e00
	ldr r0, [r0, #88]	@ 00094e00 806d
.org 0x94e02
	ldr r2, [pc, #44]	@ 00094e02 0b4a
.org 0x94e04
	adds r0, r0, r2	@ 00094e04 8018
.org 0x94e06
	str r0, [sp, #4]	@ 00094e06 0190
.org 0x94e08
	lsls r0, r1, #4	@ 00094e08 0801
.org 0x94e0a
	orrs r1, r0	@ 00094e0a 0143
.org 0x94e0c
	lsls r6, r1, #24	@ 00094e0c 0e06
.org 0x94e0e
	movs r5, #0	@ 00094e0e 0025
.org 0x94e10
	ldr r7, [pc, #32]	@ 00094e10 084f
.org 0x94e12
	movs r4, #2	@ 00094e12 0224
.org 0x94e14
	adds r1, r5, r7	@ 00094e14 e919
.org 0x94e16
	mov r0, sp	@ 00094e16 6846
.org 0x94e18
	movs r2, #0	@ 00094e18 0022
.org 0x94e1a
	lsrs r3, r6, #24	@ 00094e1a 330e
.org 0x94e1c
	bl 0xd4c8c	@ 00094e1c 3ff036ff
.org 0x94e20
	adds r5, #28	@ 00094e20 1c35
.org 0x94e22
	subs r4, #1	@ 00094e22 013c
.org 0x94e24
	cmp r4, #0	@ 00094e24 002c
.org 0x94e26
	bge.n 0x94e14	@ 00094e26 f5da
.org 0x94e28
	add sp, #8	@ 00094e28 02b0
.org 0x94e2a
	pop {r4, r5, r6, r7}	@ 00094e2a f0bc
.org 0x94e2c
	pop {r0}	@ 00094e2c 01bc
.org 0x94e2e
	bx r0	@ 00094e2e 0047
