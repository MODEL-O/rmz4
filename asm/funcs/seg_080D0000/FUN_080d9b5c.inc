@ FUN_080d9b5c  entry 0x080d9b5c  size 60
.thumb
.org 0xd9b5c
FUN_080d9b5c:
	push {r4, r5, r6, r7, lr}	@ 000d9b5c f0b5
.org 0xd9b5e
	sub sp, #8	@ 000d9b5e 82b0
.org 0xd9b60
	ldrb r1, [r0, #10]	@ 000d9b60 817a
.org 0xd9b62
	lsrs r1, r1, #4	@ 000d9b62 0909
.org 0xd9b64
	movs r2, #1	@ 000d9b64 0122
.org 0xd9b66
	ands r1, r2	@ 000d9b66 1140
.org 0xd9b68
	ldr r2, [r0, #84]	@ 000d9b68 426d
.org 0xd9b6a
	str r2, [sp, #0]	@ 000d9b6a 0092
.org 0xd9b6c
	ldr r0, [r0, #88]	@ 000d9b6c 806d
.org 0xd9b6e
	str r0, [sp, #4]	@ 000d9b6e 0190
.org 0xd9b70
	lsls r0, r1, #4	@ 000d9b70 0801
.org 0xd9b72
	orrs r1, r0	@ 000d9b72 0143
.org 0xd9b74
	lsls r6, r1, #24	@ 000d9b74 0e06
.org 0xd9b76
	movs r5, #0	@ 000d9b76 0025
.org 0xd9b78
	ldr r7, [pc, #28]	@ 000d9b78 074f
.org 0xd9b7a
	movs r4, #1	@ 000d9b7a 0124
.org 0xd9b7c
	adds r1, r5, r7	@ 000d9b7c e919
.org 0xd9b7e
	mov r0, sp	@ 000d9b7e 6846
.org 0xd9b80
	movs r2, #0	@ 000d9b80 0022
.org 0xd9b82
	lsrs r3, r6, #24	@ 000d9b82 330e
.org 0xd9b84
	bl 0xd4c8c	@ 000d9b84 fbf782f8
.org 0xd9b88
	adds r5, #28	@ 000d9b88 1c35
.org 0xd9b8a
	subs r4, #1	@ 000d9b8a 013c
.org 0xd9b8c
	cmp r4, #0	@ 000d9b8c 002c
.org 0xd9b8e
	bge.n 0xd9b7c	@ 000d9b8e f5da
.org 0xd9b90
	add sp, #8	@ 000d9b90 02b0
.org 0xd9b92
	pop {r4, r5, r6, r7}	@ 000d9b92 f0bc
.org 0xd9b94
	pop {r0}	@ 000d9b94 01bc
.org 0xd9b96
	bx r0	@ 000d9b96 0047
