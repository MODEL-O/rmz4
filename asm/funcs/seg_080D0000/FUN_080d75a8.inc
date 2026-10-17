@ FUN_080d75a8  entry 0x080d75a8  size 132
.thumb
.org 0xd75a8
FUN_080d75a8:
	push {r4, r5, r6, r7, lr}	@ 000d75a8 f0b5
.org 0xd75aa
	mov r7, sl	@ 000d75aa 5746
.org 0xd75ac
	mov r6, r9	@ 000d75ac 4e46
.org 0xd75ae
	mov r5, r8	@ 000d75ae 4546
.org 0xd75b0
	push {r5, r6, r7}	@ 000d75b0 e0b4
.org 0xd75b2
	sub sp, #4	@ 000d75b2 81b0
.org 0xd75b4
	mov r9, r0	@ 000d75b4 8146
.org 0xd75b6
	adds r5, r1, #0	@ 000d75b6 0d1c
.org 0xd75b8
	mov r8, r2	@ 000d75b8 9046
.org 0xd75ba
	lsls r3, r3, #24	@ 000d75ba 1b06
.org 0xd75bc
	lsrs r6, r3, #24	@ 000d75bc 1e0e
.org 0xd75be
	movs r4, #0	@ 000d75be 0024
.org 0xd75c0
	cmp r4, r6	@ 000d75c0 b442
.org 0xd75c2
	bge.n 0xd761c	@ 000d75c2 2bda
.org 0xd75c4
	movs r7, #0	@ 000d75c4 0027
.org 0xd75c6
	movs r2, #1	@ 000d75c6 0122
.org 0xd75c8
	ldr r0, [pc, #96]	@ 000d75c8 1848
.org 0xd75ca
	mov sl, r0	@ 000d75ca 8246
.org 0xd75cc
	ldr r0, [pc, #96]	@ 000d75cc 1848
.org 0xd75ce
	ldr r0, [r0, #0]	@ 000d75ce 0068
.org 0xd75d0
	str r2, [sp, #0]	@ 000d75d0 0092
.org 0xd75d2
	bl 0x5500	@ 000d75d2 2df795ff
.org 0xd75d6
	adds r1, r0, #0	@ 000d75d6 011c
.org 0xd75d8
	ldr r2, [sp, #0]	@ 000d75d8 009a
.org 0xd75da
	cmp r1, #0	@ 000d75da 0029
.org 0xd75dc
	beq.n 0xd7616	@ 000d75dc 1bd0
.org 0xd75de
	adds r0, #37	@ 000d75de 2530
.org 0xd75e0
	strb r2, [r0, #0]	@ 000d75e0 0270
.org 0xd75e2
	movs r0, #23	@ 000d75e2 1720
.org 0xd75e4
	strb r0, [r1, #9]	@ 000d75e4 4872
.org 0xd75e6
	mov r3, sl	@ 000d75e6 5346
.org 0xd75e8
	ldr r0, [r3, #92]	@ 000d75e8 d86d
.org 0xd75ea
	ldr r0, [r0, #0]	@ 000d75ea 0068
.org 0xd75ec
	str r0, [r1, #20]	@ 000d75ec 4861
.org 0xd75ee
	strh r7, [r1, #32]	@ 000d75ee 0f84
.org 0xd75f0
	adds r0, r1, #0	@ 000d75f0 081c
.org 0xd75f2
	adds r0, #34	@ 000d75f2 2230
.org 0xd75f4
	strb r7, [r0, #0]	@ 000d75f4 0770
.org 0xd75f6
	movs r0, #2	@ 000d75f6 0220
.org 0xd75f8
	strb r0, [r1, #16]	@ 000d75f8 0874
.org 0xd75fa
	strb r4, [r1, #17]	@ 000d75fa 4c74
.org 0xd75fc
	mov r0, r9	@ 000d75fc 4846
.org 0xd75fe
	str r0, [r1, #40]	@ 000d75fe 8862
.org 0xd7600
	mov r3, r8	@ 000d7600 4346
.org 0xd7602
	str r3, [r1, #116]	@ 000d7602 4b67
.org 0xd7604
	ldr r0, [r5, #0]	@ 000d7604 2868
.org 0xd7606
	str r0, [r1, #84]	@ 000d7606 4865
.org 0xd7608
	ldr r0, [r5, #4]	@ 000d7608 6868
.org 0xd760a
	str r0, [r1, #88]	@ 000d760a 8865
.org 0xd760c
	adds r0, r1, #0	@ 000d760c 081c
.org 0xd760e
	adds r0, #120	@ 000d760e 7830
.org 0xd7610
	strb r2, [r0, #0]	@ 000d7610 0270
.org 0xd7612
	adds r0, #1	@ 000d7612 0130
.org 0xd7614
	strb r7, [r0, #0]	@ 000d7614 0770
.org 0xd7616
	adds r4, #1	@ 000d7616 0134
.org 0xd7618
	cmp r4, r6	@ 000d7618 b442
.org 0xd761a
	blt.n 0xd75cc	@ 000d761a d7db
.org 0xd761c
	add sp, #4	@ 000d761c 01b0
.org 0xd761e
	pop {r3, r4, r5}	@ 000d761e 38bc
.org 0xd7620
	mov r8, r3	@ 000d7620 9846
.org 0xd7622
	mov r9, r4	@ 000d7622 a146
.org 0xd7624
	mov sl, r5	@ 000d7624 aa46
.org 0xd7626
	pop {r4, r5, r6, r7}	@ 000d7626 f0bc
.org 0xd7628
	pop {r0}	@ 000d7628 01bc
.org 0xd762a
	bx r0	@ 000d762a 0047
