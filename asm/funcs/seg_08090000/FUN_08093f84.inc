@ FUN_08093f84  entry 0x08093f84  size 94
.thumb
.org 0x93f84
FUN_08093f84:
	push {r4, r5, r6, lr}	@ 00093f84 70b5
.org 0x93f86
	adds r5, r0, #0	@ 00093f86 051c
.org 0x93f88
	ldrb r6, [r5, #17]	@ 00093f88 6e7c
.org 0x93f8a
	ldrb r0, [r5, #15]	@ 00093f8a e87b
.org 0x93f8c
	cmp r0, #0	@ 00093f8c 0028
.org 0x93f8e
	bne.n 0x93faa	@ 00093f8e 0cd1
.org 0x93f90
	adds r0, r5, #0	@ 00093f90 281c
.org 0x93f92
	adds r0, #116	@ 00093f92 7430
.org 0x93f94
	ldr r1, [pc, #76]	@ 00093f94 1349
.org 0x93f96
	bl 0x5784	@ 00093f96 71f7f5fb
.org 0x93f9a
	movs r1, #128	@ 00093f9a 8021
.org 0x93f9c
	lsls r1, r1, #7	@ 00093f9c c901
.org 0x93f9e
	adds r0, r5, #0	@ 00093f9e 281c
.org 0x93fa0
	bl 0x1cf00	@ 00093fa0 88f7aeff
.org 0x93fa4
	ldrb r0, [r5, #15]	@ 00093fa4 e87b
.org 0x93fa6
	adds r0, #1	@ 00093fa6 0130
.org 0x93fa8
	strb r0, [r5, #15]	@ 00093fa8 e873
.org 0x93faa
	adds r0, r5, #0	@ 00093faa 281c
.org 0x93fac
	bl 0x1cff0	@ 00093fac 89f720f8
.org 0x93fb0
	adds r0, r5, #0	@ 00093fb0 281c
.org 0x93fb2
	bl 0x94a38	@ 00093fb2 00f041fd
.org 0x93fb6
	ldr r0, [pc, #48]	@ 00093fb6 0c48
.org 0x93fb8
	ldr r1, [pc, #48]	@ 00093fb8 0c49
.org 0x93fba
	adds r0, r0, r1	@ 00093fba 4018
.org 0x93fbc
	ldrb r4, [r0, #0]	@ 00093fbc 0478
.org 0x93fbe
	adds r0, r6, #0	@ 00093fbe 301c
.org 0x93fc0
	movs r1, #3	@ 00093fc0 0321
.org 0x93fc2
	bl 0x129120	@ 00093fc2 95f0adf8
.org 0x93fc6
	lsls r0, r0, #24	@ 00093fc6 0006
.org 0x93fc8
	lsrs r0, r0, #24	@ 00093fc8 000e
.org 0x93fca
	asrs r4, r0	@ 00093fca 0441
.org 0x93fcc
	movs r1, #1	@ 00093fcc 0121
.org 0x93fce
	ands r4, r1	@ 00093fce 0c40
.org 0x93fd0
	cmp r4, #0	@ 00093fd0 002c
.org 0x93fd2
	beq.n 0x93fdc	@ 00093fd2 03d0
.org 0x93fd4
	movs r0, #0	@ 00093fd4 0020
.org 0x93fd6
	strb r1, [r5, #13]	@ 00093fd6 6973
.org 0x93fd8
	strb r0, [r5, #14]	@ 00093fd8 a873
.org 0x93fda
	strb r0, [r5, #15]	@ 00093fda e873
.org 0x93fdc
	pop {r4, r5, r6}	@ 00093fdc 70bc
.org 0x93fde
	pop {r0}	@ 00093fde 01bc
.org 0x93fe0
	bx r0	@ 00093fe0 0047
