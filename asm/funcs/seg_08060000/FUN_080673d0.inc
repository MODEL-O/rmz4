@ FUN_080673d0  entry 0x080673d0  size 92
.thumb
.org 0x673d0
FUN_080673d0:
	push {r4, lr}	@ 000673d0 10b5
.org 0x673d2
	adds r4, r0, #0	@ 000673d2 041c
.org 0x673d4
	ldrb r0, [r4, #14]	@ 000673d4 a07b
.org 0x673d6
	cmp r0, #0	@ 000673d6 0028
.org 0x673d8
	bne.n 0x67402	@ 000673d8 13d1
.org 0x673da
	ldrb r3, [r4, #10]	@ 000673da a37a
.org 0x673dc
	lsrs r3, r3, #4	@ 000673dc 1b09
.org 0x673de
	movs r0, #1	@ 000673de 0120
.org 0x673e0
	ands r3, r0	@ 000673e0 0340
.org 0x673e2
	adds r0, r4, #0	@ 000673e2 201c
.org 0x673e4
	movs r1, #0	@ 000673e4 0021
.org 0x673e6
	movs r2, #0	@ 000673e6 0022
.org 0x673e8
	bl 0x9c494	@ 000673e8 35f054f8
.org 0x673ec
	str r0, [r4, #44]	@ 000673ec e062
.org 0x673ee
	cmp r0, #0	@ 000673ee 0028
.org 0x673f0
	beq.n 0x67426	@ 000673f0 19d0
.org 0x673f2
	adds r0, r4, #0	@ 000673f2 201c
.org 0x673f4
	adds r0, #116	@ 000673f4 7430
.org 0x673f6
	ldr r1, [pc, #52]	@ 000673f6 0d49
.org 0x673f8
	bl 0x5784	@ 000673f8 9ef7c4f9
.org 0x673fc
	ldrb r0, [r4, #14]	@ 000673fc a07b
.org 0x673fe
	adds r0, #1	@ 000673fe 0130
.org 0x67400
	strb r0, [r4, #14]	@ 00067400 a073
.org 0x67402
	adds r0, r4, #0	@ 00067402 201c
.org 0x67404
	bl 0x1cff0	@ 00067404 b5f7f4fd
.org 0x67408
	ldr r0, [r4, #44]	@ 00067408 e06a
.org 0x6740a
	ldrb r0, [r0, #13]	@ 0006740a 407b
.org 0x6740c
	cmp r0, #0	@ 0006740c 0028
.org 0x6740e
	beq.n 0x67426	@ 0006740e 0ad0
.org 0x67410
	movs r0, #97	@ 00067410 6120
.org 0x67412
	bl 0x2b5c	@ 00067412 9bf7a3fb
.org 0x67416
	adds r1, r4, #0	@ 00067416 211c
.org 0x67418
	adds r1, #180	@ 00067418 b431
.org 0x6741a
	movs r2, #0	@ 0006741a 0022
.org 0x6741c
	movs r0, #0	@ 0006741c 0020
.org 0x6741e
	strh r0, [r1, #44]	@ 0006741e 8885
.org 0x67420
	movs r0, #8	@ 00067420 0820
.org 0x67422
	strb r0, [r4, #13]	@ 00067422 6073
.org 0x67424
	strb r2, [r4, #14]	@ 00067424 a273
.org 0x67426
	pop {r4}	@ 00067426 10bc
.org 0x67428
	pop {r0}	@ 00067428 01bc
.org 0x6742a
	bx r0	@ 0006742a 0047
