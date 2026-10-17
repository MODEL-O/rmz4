@ FUN_0807fad8  entry 0x0807fad8  size 54
.thumb
.org 0x7fad8
FUN_0807fad8:
	push {r4, r5, r6, r7, lr}	@ 0007fad8 f0b5
.org 0x7fada
	adds r6, r0, #0	@ 0007fada 061c
.org 0x7fadc
	ldr r0, [pc, #48]	@ 0007fadc 0c48
.org 0x7fade
	ldr r4, [r0, #0]	@ 0007fade 0468
.org 0x7fae0
	ldr r7, [r4, #12]	@ 0007fae0 e768
.org 0x7fae2
	adds r0, r4, #0	@ 0007fae2 201c
.org 0x7fae4
	bl 0x54c4	@ 0007fae4 85f7eefc
.org 0x7fae8
	ldr r0, [r4, #12]	@ 0007fae8 e068
.org 0x7faea
	ldr r0, [r0, #4]	@ 0007faea 4068
.org 0x7faec
	str r0, [r4, #12]	@ 0007faec e060
.org 0x7faee
	adds r1, r4, #0	@ 0007faee 211c
.org 0x7faf0
	adds r1, #20	@ 0007faf0 1431
.org 0x7faf2
	cmp r0, r1	@ 0007faf2 8842
.org 0x7faf4
	beq.n 0x7fb06	@ 0007faf4 07d0
.org 0x7faf6
	adds r5, r1, #0	@ 0007faf6 0d1c
.org 0x7faf8
	bl 0x128f94	@ 0007faf8 a9f04cfa
.org 0x7fafc
	ldr r0, [r4, #12]	@ 0007fafc e068
.org 0x7fafe
	ldr r0, [r0, #4]	@ 0007fafe 4068
.org 0x7fb00
	str r0, [r4, #12]	@ 0007fb00 e060
.org 0x7fb02
	cmp r0, r5	@ 0007fb02 a842
.org 0x7fb04
	bne.n 0x7faf8	@ 0007fb04 f8d1
.org 0x7fb06
	str r7, [r4, #12]	@ 0007fb06 e760
.org 0x7fb08
	pop {r4, r5, r6, r7}	@ 0007fb08 f0bc
.org 0x7fb0a
	pop {r0}	@ 0007fb0a 01bc
.org 0x7fb0c
	bx r0	@ 0007fb0c 0047
