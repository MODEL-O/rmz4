@ FUN_080c2f88  entry 0x080c2f88  size 82
.thumb
.org 0xc2f88
FUN_080c2f88:
	push {r4, lr}	@ 000c2f88 10b5
.org 0xc2f8a
	adds r4, r0, #0	@ 000c2f8a 041c
.org 0xc2f8c
	ldr r2, [r4, #40]	@ 000c2f8c a26a
.org 0xc2f8e
	adds r0, #140	@ 000c2f8e 8c30
.org 0xc2f90
	movs r1, #0	@ 000c2f90 0021
.org 0xc2f92
	str r1, [r0, #0]	@ 000c2f92 0160
.org 0xc2f94
	adds r0, #4	@ 000c2f94 0430
.org 0xc2f96
	str r1, [r0, #0]	@ 000c2f96 0160
.org 0xc2f98
	adds r0, #4	@ 000c2f98 0430
.org 0xc2f9a
	strb r1, [r0, #0]	@ 000c2f9a 0170
.org 0xc2f9c
	ldrb r1, [r4, #10]	@ 000c2f9c a17a
.org 0xc2f9e
	movs r0, #251	@ 000c2f9e fb20
.org 0xc2fa0
	ands r0, r1	@ 000c2fa0 0840
.org 0xc2fa2
	movs r1, #254	@ 000c2fa2 fe21
.org 0xc2fa4
	ands r0, r1	@ 000c2fa4 0840
.org 0xc2fa6
	strb r0, [r4, #10]	@ 000c2fa6 a072
.org 0xc2fa8
	ldrb r0, [r2, #12]	@ 000c2fa8 107b
.org 0xc2faa
	cmp r0, #1	@ 000c2faa 0128
.org 0xc2fac
	bhi.n 0xc2fb8	@ 000c2fac 04d8
.org 0xc2fae
	adds r1, r2, #0	@ 000c2fae 111c
.org 0xc2fb0
	adds r1, #181	@ 000c2fb0 b531
.org 0xc2fb2
	ldrb r0, [r1, #0]	@ 000c2fb2 0878
.org 0xc2fb4
	subs r0, #1	@ 000c2fb4 0138
.org 0xc2fb6
	strb r0, [r1, #0]	@ 000c2fb6 0870
.org 0xc2fb8
	adds r1, r4, #0	@ 000c2fb8 211c
.org 0xc2fba
	adds r1, #84	@ 000c2fba 5431
.org 0xc2fbc
	movs r0, #2	@ 000c2fbc 0220
.org 0xc2fbe
	bl 0xd0c88	@ 000c2fbe 0df063fe
.org 0xc2fc2
	ldr r1, [pc, #24]	@ 000c2fc2 0649
.org 0xc2fc4
	ldrb r0, [r4, #9]	@ 000c2fc4 607a
.org 0xc2fc6
	lsls r0, r0, #2	@ 000c2fc6 8000
.org 0xc2fc8
	adds r0, r0, r1	@ 000c2fc8 4018
.org 0xc2fca
	movs r1, #4	@ 000c2fca 0421
.org 0xc2fcc
	str r1, [r4, #12]	@ 000c2fcc e160
.org 0xc2fce
	ldr r0, [r0, #0]	@ 000c2fce 0068
.org 0xc2fd0
	ldr r0, [r0, #16]	@ 000c2fd0 0069
.org 0xc2fd2
	str r0, [r4, #20]	@ 000c2fd2 6061
.org 0xc2fd4
	pop {r4}	@ 000c2fd4 10bc
.org 0xc2fd6
	pop {r0}	@ 000c2fd6 01bc
.org 0xc2fd8
	bx r0	@ 000c2fd8 0047
