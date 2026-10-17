@ FUN_0808fb98  entry 0x0808fb98  size 60
.thumb
.org 0x8fb98
FUN_0808fb98:
	push {r4, r5, r6, r7, lr}	@ 0008fb98 f0b5
.org 0x8fb9a
	sub sp, #8	@ 0008fb9a 82b0
.org 0x8fb9c
	ldrb r1, [r0, #10]	@ 0008fb9c 817a
.org 0x8fb9e
	lsrs r1, r1, #4	@ 0008fb9e 0909
.org 0x8fba0
	movs r2, #1	@ 0008fba0 0122
.org 0x8fba2
	ands r1, r2	@ 0008fba2 1140
.org 0x8fba4
	ldr r2, [r0, #84]	@ 0008fba4 426d
.org 0x8fba6
	str r2, [sp, #0]	@ 0008fba6 0092
.org 0x8fba8
	ldr r0, [r0, #88]	@ 0008fba8 806d
.org 0x8fbaa
	str r0, [sp, #4]	@ 0008fbaa 0190
.org 0x8fbac
	lsls r0, r1, #4	@ 0008fbac 0801
.org 0x8fbae
	orrs r1, r0	@ 0008fbae 0143
.org 0x8fbb0
	lsls r6, r1, #24	@ 0008fbb0 0e06
.org 0x8fbb2
	movs r4, #28	@ 0008fbb2 1c24
.org 0x8fbb4
	ldr r7, [pc, #28]	@ 0008fbb4 074f
.org 0x8fbb6
	movs r5, #1	@ 0008fbb6 0125
.org 0x8fbb8
	adds r1, r4, r7	@ 0008fbb8 e119
.org 0x8fbba
	mov r0, sp	@ 0008fbba 6846
.org 0x8fbbc
	movs r2, #0	@ 0008fbbc 0022
.org 0x8fbbe
	lsrs r3, r6, #24	@ 0008fbbe 330e
.org 0x8fbc0
	bl 0xd4c8c	@ 0008fbc0 45f064f8
.org 0x8fbc4
	adds r4, #28	@ 0008fbc4 1c34
.org 0x8fbc6
	subs r5, #1	@ 0008fbc6 013d
.org 0x8fbc8
	cmp r5, #0	@ 0008fbc8 002d
.org 0x8fbca
	bge.n 0x8fbb8	@ 0008fbca f5da
.org 0x8fbcc
	add sp, #8	@ 0008fbcc 02b0
.org 0x8fbce
	pop {r4, r5, r6, r7}	@ 0008fbce f0bc
.org 0x8fbd0
	pop {r0}	@ 0008fbd0 01bc
.org 0x8fbd2
	bx r0	@ 0008fbd2 0047
