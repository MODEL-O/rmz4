@ FUN_0808bd6c  entry 0x0808bd6c  size 60
.thumb
.org 0x8bd6c
FUN_0808bd6c:
	push {r4, r5, r6, r7, lr}	@ 0008bd6c f0b5
.org 0x8bd6e
	sub sp, #8	@ 0008bd6e 82b0
.org 0x8bd70
	ldrb r1, [r0, #10]	@ 0008bd70 817a
.org 0x8bd72
	lsrs r1, r1, #4	@ 0008bd72 0909
.org 0x8bd74
	movs r2, #1	@ 0008bd74 0122
.org 0x8bd76
	ands r1, r2	@ 0008bd76 1140
.org 0x8bd78
	ldr r2, [r0, #84]	@ 0008bd78 426d
.org 0x8bd7a
	str r2, [sp, #0]	@ 0008bd7a 0092
.org 0x8bd7c
	ldr r0, [r0, #88]	@ 0008bd7c 806d
.org 0x8bd7e
	str r0, [sp, #4]	@ 0008bd7e 0190
.org 0x8bd80
	lsls r0, r1, #4	@ 0008bd80 0801
.org 0x8bd82
	orrs r1, r0	@ 0008bd82 0143
.org 0x8bd84
	lsls r6, r1, #24	@ 0008bd84 0e06
.org 0x8bd86
	movs r5, #0	@ 0008bd86 0025
.org 0x8bd88
	ldr r7, [pc, #28]	@ 0008bd88 074f
.org 0x8bd8a
	movs r4, #2	@ 0008bd8a 0224
.org 0x8bd8c
	adds r1, r5, r7	@ 0008bd8c e919
.org 0x8bd8e
	mov r0, sp	@ 0008bd8e 6846
.org 0x8bd90
	movs r2, #0	@ 0008bd90 0022
.org 0x8bd92
	lsrs r3, r6, #24	@ 0008bd92 330e
.org 0x8bd94
	bl 0xd4c8c	@ 0008bd94 48f07aff
.org 0x8bd98
	adds r5, #28	@ 0008bd98 1c35
.org 0x8bd9a
	subs r4, #1	@ 0008bd9a 013c
.org 0x8bd9c
	cmp r4, #0	@ 0008bd9c 002c
.org 0x8bd9e
	bge.n 0x8bd8c	@ 0008bd9e f5da
.org 0x8bda0
	add sp, #8	@ 0008bda0 02b0
.org 0x8bda2
	pop {r4, r5, r6, r7}	@ 0008bda2 f0bc
.org 0x8bda4
	pop {r0}	@ 0008bda4 01bc
.org 0x8bda6
	bx r0	@ 0008bda6 0047
