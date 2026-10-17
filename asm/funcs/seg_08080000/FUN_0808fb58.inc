@ FUN_0808fb58  entry 0x0808fb58  size 60
.thumb
.org 0x8fb58
FUN_0808fb58:
	push {r4, r5, r6, r7, lr}	@ 0008fb58 f0b5
.org 0x8fb5a
	sub sp, #8	@ 0008fb5a 82b0
.org 0x8fb5c
	ldrb r1, [r0, #10]	@ 0008fb5c 817a
.org 0x8fb5e
	lsrs r1, r1, #4	@ 0008fb5e 0909
.org 0x8fb60
	movs r2, #1	@ 0008fb60 0122
.org 0x8fb62
	ands r1, r2	@ 0008fb62 1140
.org 0x8fb64
	ldr r2, [r0, #84]	@ 0008fb64 426d
.org 0x8fb66
	str r2, [sp, #0]	@ 0008fb66 0092
.org 0x8fb68
	ldr r0, [r0, #88]	@ 0008fb68 806d
.org 0x8fb6a
	str r0, [sp, #4]	@ 0008fb6a 0190
.org 0x8fb6c
	lsls r0, r1, #4	@ 0008fb6c 0801
.org 0x8fb6e
	orrs r1, r0	@ 0008fb6e 0143
.org 0x8fb70
	lsls r6, r1, #24	@ 0008fb70 0e06
.org 0x8fb72
	movs r5, #0	@ 0008fb72 0025
.org 0x8fb74
	ldr r7, [pc, #28]	@ 0008fb74 074f
.org 0x8fb76
	movs r4, #2	@ 0008fb76 0224
.org 0x8fb78
	adds r1, r5, r7	@ 0008fb78 e919
.org 0x8fb7a
	mov r0, sp	@ 0008fb7a 6846
.org 0x8fb7c
	movs r2, #0	@ 0008fb7c 0022
.org 0x8fb7e
	lsrs r3, r6, #24	@ 0008fb7e 330e
.org 0x8fb80
	bl 0xd4c8c	@ 0008fb80 45f084f8
.org 0x8fb84
	adds r5, #28	@ 0008fb84 1c35
.org 0x8fb86
	subs r4, #1	@ 0008fb86 013c
.org 0x8fb88
	cmp r4, #0	@ 0008fb88 002c
.org 0x8fb8a
	bge.n 0x8fb78	@ 0008fb8a f5da
.org 0x8fb8c
	add sp, #8	@ 0008fb8c 02b0
.org 0x8fb8e
	pop {r4, r5, r6, r7}	@ 0008fb8e f0bc
.org 0x8fb90
	pop {r0}	@ 0008fb90 01bc
.org 0x8fb92
	bx r0	@ 0008fb92 0047
