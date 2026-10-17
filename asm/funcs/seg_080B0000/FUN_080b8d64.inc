@ FUN_080b8d64  entry 0x080b8d64  size 60
.thumb
.org 0xb8d64
FUN_080b8d64:
	push {r4, r5, r6, r7, lr}	@ 000b8d64 f0b5
.org 0xb8d66
	sub sp, #8	@ 000b8d66 82b0
.org 0xb8d68
	ldrb r1, [r0, #10]	@ 000b8d68 817a
.org 0xb8d6a
	lsrs r1, r1, #4	@ 000b8d6a 0909
.org 0xb8d6c
	movs r2, #1	@ 000b8d6c 0122
.org 0xb8d6e
	ands r1, r2	@ 000b8d6e 1140
.org 0xb8d70
	ldr r2, [r0, #84]	@ 000b8d70 426d
.org 0xb8d72
	str r2, [sp, #0]	@ 000b8d72 0092
.org 0xb8d74
	ldr r0, [r0, #88]	@ 000b8d74 806d
.org 0xb8d76
	str r0, [sp, #4]	@ 000b8d76 0190
.org 0xb8d78
	lsls r0, r1, #4	@ 000b8d78 0801
.org 0xb8d7a
	orrs r1, r0	@ 000b8d7a 0143
.org 0xb8d7c
	lsls r6, r1, #24	@ 000b8d7c 0e06
.org 0xb8d7e
	movs r5, #0	@ 000b8d7e 0025
.org 0xb8d80
	ldr r7, [pc, #28]	@ 000b8d80 074f
.org 0xb8d82
	movs r4, #3	@ 000b8d82 0324
.org 0xb8d84
	adds r1, r5, r7	@ 000b8d84 e919
.org 0xb8d86
	mov r0, sp	@ 000b8d86 6846
.org 0xb8d88
	movs r2, #0	@ 000b8d88 0022
.org 0xb8d8a
	lsrs r3, r6, #24	@ 000b8d8a 330e
.org 0xb8d8c
	bl 0xd4c8c	@ 000b8d8c 1bf07eff
.org 0xb8d90
	adds r5, #28	@ 000b8d90 1c35
.org 0xb8d92
	subs r4, #1	@ 000b8d92 013c
.org 0xb8d94
	cmp r4, #0	@ 000b8d94 002c
.org 0xb8d96
	bge.n 0xb8d84	@ 000b8d96 f5da
.org 0xb8d98
	add sp, #8	@ 000b8d98 02b0
.org 0xb8d9a
	pop {r4, r5, r6, r7}	@ 000b8d9a f0bc
.org 0xb8d9c
	pop {r0}	@ 000b8d9c 01bc
.org 0xb8d9e
	bx r0	@ 000b8d9e 0047
