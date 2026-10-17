@ FUN_08094e6c  entry 0x08094e6c  size 64
.thumb
.org 0x94e6c
FUN_08094e6c:
	push {r4, r5, r6, r7, lr}	@ 00094e6c f0b5
.org 0x94e6e
	sub sp, #8	@ 00094e6e 82b0
.org 0x94e70
	ldrb r1, [r0, #10]	@ 00094e70 817a
.org 0x94e72
	lsrs r1, r1, #4	@ 00094e72 0909
.org 0x94e74
	movs r2, #1	@ 00094e74 0122
.org 0x94e76
	ands r1, r2	@ 00094e76 1140
.org 0x94e78
	ldr r2, [r0, #84]	@ 00094e78 426d
.org 0x94e7a
	str r2, [sp, #0]	@ 00094e7a 0092
.org 0x94e7c
	ldr r0, [r0, #88]	@ 00094e7c 806d
.org 0x94e7e
	ldr r2, [pc, #44]	@ 00094e7e 0b4a
.org 0x94e80
	adds r0, r0, r2	@ 00094e80 8018
.org 0x94e82
	str r0, [sp, #4]	@ 00094e82 0190
.org 0x94e84
	lsls r0, r1, #4	@ 00094e84 0801
.org 0x94e86
	orrs r1, r0	@ 00094e86 0143
.org 0x94e88
	lsls r6, r1, #24	@ 00094e88 0e06
.org 0x94e8a
	movs r5, #0	@ 00094e8a 0025
.org 0x94e8c
	ldr r7, [pc, #32]	@ 00094e8c 084f
.org 0x94e8e
	movs r4, #1	@ 00094e8e 0124
.org 0x94e90
	adds r1, r5, r7	@ 00094e90 e919
.org 0x94e92
	mov r0, sp	@ 00094e92 6846
.org 0x94e94
	movs r2, #0	@ 00094e94 0022
.org 0x94e96
	lsrs r3, r6, #24	@ 00094e96 330e
.org 0x94e98
	bl 0xd4c8c	@ 00094e98 3ff0f8fe
.org 0x94e9c
	adds r5, #28	@ 00094e9c 1c35
.org 0x94e9e
	subs r4, #1	@ 00094e9e 013c
.org 0x94ea0
	cmp r4, #0	@ 00094ea0 002c
.org 0x94ea2
	bge.n 0x94e90	@ 00094ea2 f5da
.org 0x94ea4
	add sp, #8	@ 00094ea4 02b0
.org 0x94ea6
	pop {r4, r5, r6, r7}	@ 00094ea6 f0bc
.org 0x94ea8
	pop {r0}	@ 00094ea8 01bc
.org 0x94eaa
	bx r0	@ 00094eaa 0047
