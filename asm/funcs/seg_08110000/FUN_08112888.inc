@ FUN_08112888  entry 0x08112888  size 34
.thumb
.org 0x112888
FUN_08112888:
	push {lr}	@ 00112888 00b5
.org 0x11288a
	ldr r0, [pc, #32]	@ 0011288a 0848
.org 0x11288c
	ldr r1, [pc, #32]	@ 0011288c 0849
.org 0x11288e
	movs r2, #16	@ 0011288e 1022
.org 0x112890
	bl 0x128be0	@ 00112890 16f0a6f9
.org 0x112894
	movs r1, #0	@ 00112894 0021
.org 0x112896
	ldr r0, [pc, #28]	@ 00112896 0748
.org 0x112898
	strb r1, [r0, #0]	@ 00112898 0170
.org 0x11289a
	ldr r0, [pc, #28]	@ 0011289a 0748
.org 0x11289c
	movs r1, #129	@ 0011289c 8121
.org 0x11289e
	lsls r1, r1, #3	@ 0011289e c900
.org 0x1128a0
	adds r0, r0, r1	@ 001128a0 4018
.org 0x1128a2
	ldr r1, [pc, #24]	@ 001128a2 0649
.org 0x1128a4
	str r1, [r0, #0]	@ 001128a4 0160
.org 0x1128a6
	pop {r0}	@ 001128a6 01bc
.org 0x1128a8
	bx r0	@ 001128a8 0047
