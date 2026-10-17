@ FUN_080de4c0  entry 0x080de4c0  size 116
.thumb
.org 0xde4c0
FUN_080de4c0:
	push {r4, r5, r6, lr}	@ 000de4c0 70b5
.org 0xde4c2
	adds r5, r0, #0	@ 000de4c2 051c
.org 0xde4c4
	ldrb r4, [r5, #17]	@ 000de4c4 6c7c
.org 0xde4c6
	ldr r1, [pc, #52]	@ 000de4c6 0d49
.org 0xde4c8
	ldrb r0, [r5, #9]	@ 000de4c8 687a
.org 0xde4ca
	lsls r0, r0, #2	@ 000de4ca 8000
.org 0xde4cc
	adds r0, r0, r1	@ 000de4cc 4018
.org 0xde4ce
	movs r1, #1	@ 000de4ce 0121
.org 0xde4d0
	str r1, [r5, #12]	@ 000de4d0 e960
.org 0xde4d2
	ldr r0, [r0, #0]	@ 000de4d2 0068
.org 0xde4d4
	ldr r0, [r0, #4]	@ 000de4d4 4068
.org 0xde4d6
	str r0, [r5, #20]	@ 000de4d6 6861
.org 0xde4d8
	ldrb r1, [r5, #10]	@ 000de4d8 a97a
.org 0xde4da
	movs r0, #1	@ 000de4da 0120
.org 0xde4dc
	movs r6, #0	@ 000de4dc 0026
.org 0xde4de
	orrs r0, r1	@ 000de4de 0843
.org 0xde4e0
	movs r1, #2	@ 000de4e0 0221
.org 0xde4e2
	orrs r0, r1	@ 000de4e2 0843
.org 0xde4e4
	strb r0, [r5, #10]	@ 000de4e4 a872
.org 0xde4e6
	movs r0, #24	@ 000de4e6 1820
.org 0xde4e8
	strb r0, [r5, #18]	@ 000de4e8 a874
.org 0xde4ea
	adds r0, r5, #0	@ 000de4ea 281c
.org 0xde4ec
	bl 0x1cc9c	@ 000de4ec 3ef7d6fb
.org 0xde4f0
	cmp r4, #0	@ 000de4f0 002c
.org 0xde4f2
	beq.n 0xde500	@ 000de4f2 05d0
.org 0xde4f4
	ldrb r0, [r5, #10]	@ 000de4f4 a87a
.org 0xde4f6
	movs r1, #16	@ 000de4f6 1021
.org 0xde4f8
	orrs r0, r1	@ 000de4f8 0843
.org 0xde4fa
	b.n 0xde506	@ 000de4fa 04e0
.org 0xde4fc
	.byte 0x64,0x6f,0x86,0x08	@ 000de4fc data
.org 0xde500
	ldrb r1, [r5, #10]	@ 000de500 a97a
.org 0xde502
	movs r0, #239	@ 000de502 ef20
.org 0xde504
	ands r0, r1	@ 000de504 0840
.org 0xde506
	strb r0, [r5, #10]	@ 000de506 a872
.org 0xde508
	movs r1, #1	@ 000de508 0121
.org 0xde50a
	ands r1, r4	@ 000de50a 2140
.org 0xde50c
	adds r0, r5, #0	@ 000de50c 281c
.org 0xde50e
	adds r0, #76	@ 000de50e 4c30
.org 0xde510
	strb r1, [r0, #0]	@ 000de510 0170
.org 0xde512
	adds r3, r5, #0	@ 000de512 2b1c
.org 0xde514
	adds r3, #74	@ 000de514 4a33
.org 0xde516
	lsls r1, r1, #4	@ 000de516 0901
.org 0xde518
	ldrb r2, [r3, #0]	@ 000de518 1a78
.org 0xde51a
	movs r0, #17	@ 000de51a 1120
.org 0xde51c
	negs r0, r0	@ 000de51c 4042
.org 0xde51e
	ands r0, r2	@ 000de51e 1040
.org 0xde520
	orrs r0, r1	@ 000de520 0843
.org 0xde522
	strb r0, [r3, #0]	@ 000de522 1870
.org 0xde524
	ldr r1, [pc, #16]	@ 000de524 0449
.org 0xde526
	adds r0, r5, #0	@ 000de526 281c
.org 0xde528
	bl 0x1cf00	@ 000de528 3ef7eafc
.org 0xde52c
	adds r0, r5, #0	@ 000de52c 281c
.org 0xde52e
	bl 0xde53c	@ 000de52e 00f005f8
.org 0xde532
	pop {r4, r5, r6}	@ 000de532 70bc
