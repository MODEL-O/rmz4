@ FUN_0808bdec  entry 0x0808bdec  size 60
.thumb
.org 0x8bdec
FUN_0808bdec:
	push {r4, r5, r6, r7, lr}	@ 0008bdec f0b5
.org 0x8bdee
	sub sp, #8	@ 0008bdee 82b0
.org 0x8bdf0
	ldrb r1, [r0, #10]	@ 0008bdf0 817a
.org 0x8bdf2
	lsrs r1, r1, #4	@ 0008bdf2 0909
.org 0x8bdf4
	movs r2, #1	@ 0008bdf4 0122
.org 0x8bdf6
	ands r1, r2	@ 0008bdf6 1140
.org 0x8bdf8
	ldr r2, [r0, #84]	@ 0008bdf8 426d
.org 0x8bdfa
	str r2, [sp, #0]	@ 0008bdfa 0092
.org 0x8bdfc
	ldr r0, [r0, #88]	@ 0008bdfc 806d
.org 0x8bdfe
	str r0, [sp, #4]	@ 0008bdfe 0190
.org 0x8be00
	lsls r0, r1, #4	@ 0008be00 0801
.org 0x8be02
	orrs r1, r0	@ 0008be02 0143
.org 0x8be04
	lsls r6, r1, #24	@ 0008be04 0e06
.org 0x8be06
	movs r5, #0	@ 0008be06 0025
.org 0x8be08
	ldr r7, [pc, #28]	@ 0008be08 074f
.org 0x8be0a
	movs r4, #2	@ 0008be0a 0224
.org 0x8be0c
	adds r1, r5, r7	@ 0008be0c e919
.org 0x8be0e
	mov r0, sp	@ 0008be0e 6846
.org 0x8be10
	movs r2, #0	@ 0008be10 0022
.org 0x8be12
	lsrs r3, r6, #24	@ 0008be12 330e
.org 0x8be14
	bl 0xd4c8c	@ 0008be14 48f03aff
.org 0x8be18
	adds r5, #28	@ 0008be18 1c35
.org 0x8be1a
	subs r4, #1	@ 0008be1a 013c
.org 0x8be1c
	cmp r4, #0	@ 0008be1c 002c
.org 0x8be1e
	bge.n 0x8be0c	@ 0008be1e f5da
.org 0x8be20
	add sp, #8	@ 0008be20 02b0
.org 0x8be22
	pop {r4, r5, r6, r7}	@ 0008be22 f0bc
.org 0x8be24
	pop {r0}	@ 0008be24 01bc
.org 0x8be26
	bx r0	@ 0008be26 0047
