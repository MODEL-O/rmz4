@ FUN_08108f80  entry 0x08108f80  size 46
.thumb
.org 0x108f80
FUN_08108f80:
	push {r4, r5, lr}	@ 00108f80 30b5
.org 0x108f82
	sub sp, #8	@ 00108f82 82b0
.org 0x108f84
	adds r4, r0, #0	@ 00108f84 041c
.org 0x108f86
	ldr r0, [pc, #40]	@ 00108f86 0a48
.org 0x108f88
	str r4, [r0, #0]	@ 00108f88 0460
.org 0x108f8a
	movs r5, #0	@ 00108f8a 0025
.org 0x108f8c
	str r5, [sp, #0]	@ 00108f8c 0095
.org 0x108f8e
	movs r2, #128	@ 00108f8e 8022
.org 0x108f90
	lsls r2, r2, #17	@ 00108f90 5204
.org 0x108f92
	mov r0, sp	@ 00108f92 6846
.org 0x108f94
	adds r1, r4, #0	@ 00108f94 211c
.org 0x108f96
	bl 0x128be0	@ 00108f96 1ff023fe
.org 0x108f9a
	str r5, [sp, #4]	@ 00108f9a 0195
.org 0x108f9c
	add r0, sp, #4	@ 00108f9c 01a8
.org 0x108f9e
	ldr r2, [pc, #20]	@ 00108f9e 054a
.org 0x108fa0
	adds r1, r4, #0	@ 00108fa0 211c
.org 0x108fa2
	bl 0x128be4	@ 00108fa2 1ff01ffe
.org 0x108fa6
	add sp, #8	@ 00108fa6 02b0
.org 0x108fa8
	pop {r4, r5}	@ 00108fa8 30bc
.org 0x108faa
	pop {r0}	@ 00108faa 01bc
.org 0x108fac
	bx r0	@ 00108fac 0047
