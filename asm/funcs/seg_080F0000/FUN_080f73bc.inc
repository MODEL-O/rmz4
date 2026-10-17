@ FUN_080f73bc  entry 0x080f73bc  size 70
.thumb
.org 0xf73bc
FUN_080f73bc:
	push {r4, lr}	@ 000f73bc 10b5
.org 0xf73be
	adds r4, r0, #0	@ 000f73be 041c
.org 0xf73c0
	ldrb r0, [r4, #15]	@ 000f73c0 e07b
.org 0xf73c2
	cmp r0, #0	@ 000f73c2 0028
.org 0xf73c4
	bne.n 0xf73da	@ 000f73c4 09d1
.org 0xf73c6
	adds r0, r4, #0	@ 000f73c6 201c
.org 0xf73c8
	bl 0xf7508	@ 000f73c8 00f09ef8
.org 0xf73cc
	ldrb r0, [r4, #10]	@ 000f73cc a07a
.org 0xf73ce
	movs r1, #254	@ 000f73ce fe21
.org 0xf73d0
	ands r1, r0	@ 000f73d0 0140
.org 0xf73d2
	strb r1, [r4, #10]	@ 000f73d2 a172
.org 0xf73d4
	ldrb r0, [r4, #15]	@ 000f73d4 e07b
.org 0xf73d6
	adds r0, #1	@ 000f73d6 0130
.org 0xf73d8
	strb r0, [r4, #15]	@ 000f73d8 e073
.org 0xf73da
	adds r0, r4, #0	@ 000f73da 201c
.org 0xf73dc
	adds r0, #180	@ 000f73dc b430
.org 0xf73de
	ldrb r0, [r0, #0]	@ 000f73de 0078
.org 0xf73e0
	cmp r0, #0	@ 000f73e0 0028
.org 0xf73e2
	bne.n 0xf73fc	@ 000f73e2 0bd1
.org 0xf73e4
	ldr r1, [pc, #28]	@ 000f73e4 0749
.org 0xf73e6
	ldrb r0, [r4, #9]	@ 000f73e6 607a
.org 0xf73e8
	lsls r0, r0, #2	@ 000f73e8 8000
.org 0xf73ea
	adds r0, r0, r1	@ 000f73ea 4018
.org 0xf73ec
	movs r1, #2	@ 000f73ec 0221
.org 0xf73ee
	str r1, [r4, #12]	@ 000f73ee e160
.org 0xf73f0
	ldr r0, [r0, #0]	@ 000f73f0 0068
.org 0xf73f2
	ldr r0, [r0, #8]	@ 000f73f2 8068
.org 0xf73f4
	str r0, [r4, #20]	@ 000f73f4 6061
.org 0xf73f6
	adds r0, r4, #0	@ 000f73f6 201c
.org 0xf73f8
	bl 0xf7408	@ 000f73f8 00f006f8
.org 0xf73fc
	pop {r4}	@ 000f73fc 10bc
.org 0xf73fe
	pop {r0}	@ 000f73fe 01bc
.org 0xf7400
	bx r0	@ 000f7400 0047
