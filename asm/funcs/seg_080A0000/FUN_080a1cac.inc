@ FUN_080a1cac  entry 0x080a1cac  size 60
.thumb
.org 0xa1cac
FUN_080a1cac:
	push {r4, r5, r6, r7, lr}	@ 000a1cac f0b5
.org 0xa1cae
	sub sp, #8	@ 000a1cae 82b0
.org 0xa1cb0
	ldrb r1, [r0, #10]	@ 000a1cb0 817a
.org 0xa1cb2
	lsrs r1, r1, #4	@ 000a1cb2 0909
.org 0xa1cb4
	movs r2, #1	@ 000a1cb4 0122
.org 0xa1cb6
	ands r1, r2	@ 000a1cb6 1140
.org 0xa1cb8
	ldr r2, [r0, #84]	@ 000a1cb8 426d
.org 0xa1cba
	str r2, [sp, #0]	@ 000a1cba 0092
.org 0xa1cbc
	ldr r0, [r0, #88]	@ 000a1cbc 806d
.org 0xa1cbe
	str r0, [sp, #4]	@ 000a1cbe 0190
.org 0xa1cc0
	lsls r0, r1, #4	@ 000a1cc0 0801
.org 0xa1cc2
	orrs r1, r0	@ 000a1cc2 0143
.org 0xa1cc4
	lsls r6, r1, #24	@ 000a1cc4 0e06
.org 0xa1cc6
	movs r5, #0	@ 000a1cc6 0025
.org 0xa1cc8
	ldr r7, [pc, #28]	@ 000a1cc8 074f
.org 0xa1cca
	movs r4, #1	@ 000a1cca 0124
.org 0xa1ccc
	adds r1, r5, r7	@ 000a1ccc e919
.org 0xa1cce
	mov r0, sp	@ 000a1cce 6846
.org 0xa1cd0
	movs r2, #0	@ 000a1cd0 0022
.org 0xa1cd2
	lsrs r3, r6, #24	@ 000a1cd2 330e
.org 0xa1cd4
	bl 0xd4c8c	@ 000a1cd4 32f0daff
.org 0xa1cd8
	adds r5, #28	@ 000a1cd8 1c35
.org 0xa1cda
	subs r4, #1	@ 000a1cda 013c
.org 0xa1cdc
	cmp r4, #0	@ 000a1cdc 002c
.org 0xa1cde
	bge.n 0xa1ccc	@ 000a1cde f5da
.org 0xa1ce0
	add sp, #8	@ 000a1ce0 02b0
.org 0xa1ce2
	pop {r4, r5, r6, r7}	@ 000a1ce2 f0bc
.org 0xa1ce4
	pop {r0}	@ 000a1ce4 01bc
.org 0xa1ce6
	bx r0	@ 000a1ce6 0047
