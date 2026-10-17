@ FUN_080a15c0  entry 0x080a15c0  size 56
.thumb
.org 0xa15c0
FUN_080a15c0:
	push {r4, lr}	@ 000a15c0 10b5
.org 0xa15c2
	adds r4, r0, #0	@ 000a15c2 041c
.org 0xa15c4
	ldrb r0, [r4, #15]	@ 000a15c4 e07b
.org 0xa15c6
	cmp r0, #0	@ 000a15c6 0028
.org 0xa15c8
	bne.n 0xa15e4	@ 000a15c8 0cd1
.org 0xa15ca
	adds r1, r4, #0	@ 000a15ca 211c
.org 0xa15cc
	adds r1, #37	@ 000a15cc 2531
.org 0xa15ce
	movs r0, #24	@ 000a15ce 1820
.org 0xa15d0
	strb r0, [r1, #0]	@ 000a15d0 0870
.org 0xa15d2
	ldr r1, [pc, #36]	@ 000a15d2 0949
.org 0xa15d4
	adds r0, r4, #0	@ 000a15d4 201c
.org 0xa15d6
	bl 0x1cf00	@ 000a15d6 7bf793fc
.org 0xa15da
	ldr r0, [pc, #32]	@ 000a15da 0848
.org 0xa15dc
	str r0, [r4, #96]	@ 000a15dc 2066
.org 0xa15de
	ldrb r0, [r4, #15]	@ 000a15de e07b
.org 0xa15e0
	adds r0, #1	@ 000a15e0 0130
.org 0xa15e2
	strb r0, [r4, #15]	@ 000a15e2 e073
.org 0xa15e4
	adds r0, r4, #0	@ 000a15e4 201c
.org 0xa15e6
	bl 0x1cff0	@ 000a15e6 7bf703fd
.org 0xa15ea
	ldr r0, [r4, #88]	@ 000a15ea a06d
.org 0xa15ec
	ldr r1, [r4, #96]	@ 000a15ec 216e
.org 0xa15ee
	adds r0, r0, r1	@ 000a15ee 4018
.org 0xa15f0
	str r0, [r4, #88]	@ 000a15f0 a065
.org 0xa15f2
	pop {r4}	@ 000a15f2 10bc
.org 0xa15f4
	pop {r0}	@ 000a15f4 01bc
.org 0xa15f6
	bx r0	@ 000a15f6 0047
