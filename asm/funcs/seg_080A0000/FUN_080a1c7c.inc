@ FUN_080a1c7c  entry 0x080a1c7c  size 42
.thumb
.org 0xa1c7c
FUN_080a1c7c:
	push {lr}	@ 000a1c7c 00b5
.org 0xa1c7e
	sub sp, #8	@ 000a1c7e 82b0
.org 0xa1c80
	ldrb r3, [r0, #10]	@ 000a1c80 837a
.org 0xa1c82
	lsrs r3, r3, #4	@ 000a1c82 1b09
.org 0xa1c84
	movs r1, #1	@ 000a1c84 0121
.org 0xa1c86
	ands r3, r1	@ 000a1c86 0b40
.org 0xa1c88
	ldr r1, [r0, #84]	@ 000a1c88 416d
.org 0xa1c8a
	str r1, [sp, #0]	@ 000a1c8a 0091
.org 0xa1c8c
	ldr r0, [r0, #88]	@ 000a1c8c 806d
.org 0xa1c8e
	str r0, [sp, #4]	@ 000a1c8e 0190
.org 0xa1c90
	ldr r1, [pc, #20]	@ 000a1c90 0549
.org 0xa1c92
	adds r1, #28	@ 000a1c92 1c31
.org 0xa1c94
	lsls r0, r3, #4	@ 000a1c94 1801
.org 0xa1c96
	orrs r3, r0	@ 000a1c96 0343
.org 0xa1c98
	mov r0, sp	@ 000a1c98 6846
.org 0xa1c9a
	movs r2, #0	@ 000a1c9a 0022
.org 0xa1c9c
	bl 0xd4c8c	@ 000a1c9c 32f0f6ff
.org 0xa1ca0
	add sp, #8	@ 000a1ca0 02b0
.org 0xa1ca2
	pop {r0}	@ 000a1ca2 01bc
.org 0xa1ca4
	bx r0	@ 000a1ca4 0047
