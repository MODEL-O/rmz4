@ FUN_08108f48  entry 0x08108f48  size 46
.thumb
.org 0x108f48
FUN_08108f48:
	push {r4, r5, lr}	@ 00108f48 30b5
.org 0x108f4a
	sub sp, #8	@ 00108f4a 82b0
.org 0x108f4c
	adds r4, r0, #0	@ 00108f4c 041c
.org 0x108f4e
	ldr r0, [pc, #40]	@ 00108f4e 0a48
.org 0x108f50
	str r4, [r0, #0]	@ 00108f50 0460
.org 0x108f52
	movs r5, #0	@ 00108f52 0025
.org 0x108f54
	str r5, [sp, #0]	@ 00108f54 0095
.org 0x108f56
	movs r2, #128	@ 00108f56 8022
.org 0x108f58
	lsls r2, r2, #17	@ 00108f58 5204
.org 0x108f5a
	mov r0, sp	@ 00108f5a 6846
.org 0x108f5c
	adds r1, r4, #0	@ 00108f5c 211c
.org 0x108f5e
	bl 0x128be0	@ 00108f5e 1ff03ffe
.org 0x108f62
	str r5, [sp, #4]	@ 00108f62 0195
.org 0x108f64
	add r0, sp, #4	@ 00108f64 01a8
.org 0x108f66
	ldr r2, [pc, #20]	@ 00108f66 054a
.org 0x108f68
	adds r1, r4, #0	@ 00108f68 211c
.org 0x108f6a
	bl 0x128be4	@ 00108f6a 1ff03bfe
.org 0x108f6e
	add sp, #8	@ 00108f6e 02b0
.org 0x108f70
	pop {r4, r5}	@ 00108f70 30bc
.org 0x108f72
	pop {r0}	@ 00108f72 01bc
.org 0x108f74
	bx r0	@ 00108f74 0047
