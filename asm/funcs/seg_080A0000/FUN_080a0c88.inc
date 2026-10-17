@ FUN_080a0c88  entry 0x080a0c88  size 60
.thumb
.org 0xa0c88
FUN_080a0c88:
	push {r4, r5, r6, r7, lr}	@ 000a0c88 f0b5
.org 0xa0c8a
	sub sp, #8	@ 000a0c8a 82b0
.org 0xa0c8c
	ldrb r1, [r0, #10]	@ 000a0c8c 817a
.org 0xa0c8e
	lsrs r1, r1, #4	@ 000a0c8e 0909
.org 0xa0c90
	movs r2, #1	@ 000a0c90 0122
.org 0xa0c92
	ands r1, r2	@ 000a0c92 1140
.org 0xa0c94
	ldr r2, [r0, #84]	@ 000a0c94 426d
.org 0xa0c96
	str r2, [sp, #0]	@ 000a0c96 0092
.org 0xa0c98
	ldr r0, [r0, #88]	@ 000a0c98 806d
.org 0xa0c9a
	str r0, [sp, #4]	@ 000a0c9a 0190
.org 0xa0c9c
	lsls r0, r1, #4	@ 000a0c9c 0801
.org 0xa0c9e
	orrs r1, r0	@ 000a0c9e 0143
.org 0xa0ca0
	lsls r6, r1, #24	@ 000a0ca0 0e06
.org 0xa0ca2
	movs r5, #0	@ 000a0ca2 0025
.org 0xa0ca4
	ldr r7, [pc, #28]	@ 000a0ca4 074f
.org 0xa0ca6
	movs r4, #1	@ 000a0ca6 0124
.org 0xa0ca8
	adds r1, r5, r7	@ 000a0ca8 e919
.org 0xa0caa
	mov r0, sp	@ 000a0caa 6846
.org 0xa0cac
	movs r2, #0	@ 000a0cac 0022
.org 0xa0cae
	lsrs r3, r6, #24	@ 000a0cae 330e
.org 0xa0cb0
	bl 0xd4c8c	@ 000a0cb0 33f0ecff
.org 0xa0cb4
	adds r5, #28	@ 000a0cb4 1c35
.org 0xa0cb6
	subs r4, #1	@ 000a0cb6 013c
.org 0xa0cb8
	cmp r4, #0	@ 000a0cb8 002c
.org 0xa0cba
	bge.n 0xa0ca8	@ 000a0cba f5da
.org 0xa0cbc
	add sp, #8	@ 000a0cbc 02b0
.org 0xa0cbe
	pop {r4, r5, r6, r7}	@ 000a0cbe f0bc
.org 0xa0cc0
	pop {r0}	@ 000a0cc0 01bc
.org 0xa0cc2
	bx r0	@ 000a0cc2 0047
