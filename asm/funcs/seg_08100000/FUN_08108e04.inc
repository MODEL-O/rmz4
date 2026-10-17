@ FUN_08108e04  entry 0x08108e04  size 46
.thumb
.org 0x108e04
FUN_08108e04:
	push {r4, r5, lr}	@ 00108e04 30b5
.org 0x108e06
	sub sp, #8	@ 00108e06 82b0
.org 0x108e08
	adds r4, r0, #0	@ 00108e08 041c
.org 0x108e0a
	ldr r0, [pc, #40]	@ 00108e0a 0a48
.org 0x108e0c
	str r4, [r0, #0]	@ 00108e0c 0460
.org 0x108e0e
	movs r5, #0	@ 00108e0e 0025
.org 0x108e10
	str r5, [sp, #0]	@ 00108e10 0095
.org 0x108e12
	movs r2, #128	@ 00108e12 8022
.org 0x108e14
	lsls r2, r2, #17	@ 00108e14 5204
.org 0x108e16
	mov r0, sp	@ 00108e16 6846
.org 0x108e18
	adds r1, r4, #0	@ 00108e18 211c
.org 0x108e1a
	bl 0x128be0	@ 00108e1a 1ff0e1fe
.org 0x108e1e
	str r5, [sp, #4]	@ 00108e1e 0195
.org 0x108e20
	add r0, sp, #4	@ 00108e20 01a8
.org 0x108e22
	ldr r2, [pc, #20]	@ 00108e22 054a
.org 0x108e24
	adds r1, r4, #0	@ 00108e24 211c
.org 0x108e26
	bl 0x128be4	@ 00108e26 1ff0ddfe
.org 0x108e2a
	add sp, #8	@ 00108e2a 02b0
.org 0x108e2c
	pop {r4, r5}	@ 00108e2c 30bc
.org 0x108e2e
	pop {r0}	@ 00108e2e 01bc
.org 0x108e30
	bx r0	@ 00108e30 0047
