@ FUN_08127388  entry 0x08127388  size 62
.thumb
.org 0x127388
FUN_08127388:
	push {r4, r5, r6, lr}	@ 00127388 70b5
.org 0x12738a
	adds r5, r1, #0	@ 0012738a 0d1c
.org 0x12738c
	ldrb r1, [r5, #0]	@ 0012738c 2978
.org 0x12738e
	movs r0, #128	@ 0012738e 8020
.org 0x127390
	tst r0, r1	@ 00127390 0842
.org 0x127392
	beq.n 0x1273c0	@ 00127392 15d0
.org 0x127394
	ldr r4, [r5, #32]	@ 00127394 2c6a
.org 0x127396
	cmp r4, #0	@ 00127396 002c
.org 0x127398
	beq.n 0x1273be	@ 00127398 11d0
.org 0x12739a
	movs r6, #0	@ 0012739a 0026
.org 0x12739c
	ldrb r0, [r4, #0]	@ 0012739c 2078
.org 0x12739e
	cmp r0, #0	@ 0012739e 0028
.org 0x1273a0
	beq.n 0x1273b6	@ 001273a0 09d0
.org 0x1273a2
	ldrb r0, [r4, #1]	@ 001273a2 6078
.org 0x1273a4
	movs r3, #7	@ 001273a4 0723
.org 0x1273a6
	ands r0, r3	@ 001273a6 1840
.org 0x1273a8
	beq.n 0x1273b4	@ 001273a8 04d0
.org 0x1273aa
	ldr r3, [pc, #28]	@ 001273aa 074b
.org 0x1273ac
	ldr r3, [r3, #0]	@ 001273ac 1b68
.org 0x1273ae
	ldr r3, [r3, #44]	@ 001273ae db6a
.org 0x1273b0
	bl 0x127378	@ 001273b0 fff7e2ff
.org 0x1273b4
	strb r6, [r4, #0]	@ 001273b4 2670
.org 0x1273b6
	str r6, [r4, #44]	@ 001273b6 e662
.org 0x1273b8
	ldr r4, [r4, #52]	@ 001273b8 646b
.org 0x1273ba
	cmp r4, #0	@ 001273ba 002c
.org 0x1273bc
	bne.n 0x12739c	@ 001273bc eed1
.org 0x1273be
	str r4, [r5, #32]	@ 001273be 2c62
.org 0x1273c0
	pop {r4, r5, r6}	@ 001273c0 70bc
.org 0x1273c2
	pop {r0}	@ 001273c2 01bc
.org 0x1273c4
	bx r0	@ 001273c4 0047
