@ FUN_08032f8c  entry 0x08032f8c  size 72
.thumb
.org 0x32f8c
FUN_08032f8c:
	push {r4, r5, lr}	@ 00032f8c 30b5
.org 0x32f8e
	adds r4, r0, #0	@ 00032f8e 041c
.org 0x32f90
	ldrb r0, [r4, #15]	@ 00032f90 e07b
.org 0x32f92
	cmp r0, #0	@ 00032f92 0028
.org 0x32f94
	bne.n 0x32fa6	@ 00032f94 07d1
.org 0x32f96
	movs r1, #158	@ 00032f96 9e21
.org 0x32f98
	lsls r1, r1, #7	@ 00032f98 c901
.org 0x32f9a
	adds r0, r4, #0	@ 00032f9a 201c
.org 0x32f9c
	bl 0x1cf00	@ 00032f9c e9f7b0ff
.org 0x32fa0
	ldrb r0, [r4, #15]	@ 00032fa0 e07b
.org 0x32fa2
	adds r0, #1	@ 00032fa2 0130
.org 0x32fa4
	strb r0, [r4, #15]	@ 00032fa4 e073
.org 0x32fa6
	ldr r0, [pc, #44]	@ 00032fa6 0b48
.org 0x32fa8
	ldrb r5, [r0, #0]	@ 00032fa8 0578
.org 0x32faa
	cmp r5, #0	@ 00032faa 002d
.org 0x32fac
	bne.n 0x32fce	@ 00032fac 0fd1
.org 0x32fae
	ldr r0, [pc, #40]	@ 00032fae 0a48
.org 0x32fb0
	movs r1, #232	@ 00032fb0 e821
.org 0x32fb2
	lsls r1, r1, #1	@ 00032fb2 4900
.org 0x32fb4
	adds r0, r0, r1	@ 00032fb4 4018
.org 0x32fb6
	ldrh r0, [r0, #0]	@ 00032fb6 0088
.org 0x32fb8
	cmp r0, #6	@ 00032fb8 0628
.org 0x32fba
	beq.n 0x32fc6	@ 00032fba 04d0
.org 0x32fbc
	ldr r0, [r4, #84]	@ 00032fbc 606d
.org 0x32fbe
	ldr r1, [r4, #88]	@ 00032fbe a16d
.org 0x32fc0
	bl 0x864c	@ 00032fc0 d5f744fb
.org 0x32fc4
	str r0, [r4, #88]	@ 00032fc4 a065
.org 0x32fc6
	strb r5, [r4, #13]	@ 00032fc6 6573
.org 0x32fc8
	strb r5, [r4, #14]	@ 00032fc8 a573
.org 0x32fca
	strb r5, [r4, #15]	@ 00032fca e573
.org 0x32fcc
	str r5, [r4, #92]	@ 00032fcc e565
.org 0x32fce
	pop {r4, r5}	@ 00032fce 30bc
.org 0x32fd0
	pop {r0}	@ 00032fd0 01bc
.org 0x32fd2
	bx r0	@ 00032fd2 0047
