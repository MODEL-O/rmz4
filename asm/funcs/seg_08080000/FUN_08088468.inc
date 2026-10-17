@ FUN_08088468  entry 0x08088468  size 206
.thumb
.org 0x88468
FUN_08088468:
	push {r4, r5, lr}	@ 00088468 30b5
.org 0x8846a
	sub sp, #24	@ 0008846a 86b0
.org 0x8846c
	adds r4, r0, #0	@ 0008846c 041c
.org 0x8846e
	ldrb r5, [r4, #15]	@ 0008846e e57b
.org 0x88470
	cmp r5, #0	@ 00088470 002d
.org 0x88472
	bne.n 0x8848c	@ 00088472 0bd1
.org 0x88474
	adds r0, #116	@ 00088474 7430
.org 0x88476
	ldr r1, [pc, #60]	@ 00088476 0f49
.org 0x88478
	bl 0x5784	@ 00088478 7df784f9
.org 0x8847c
	ldr r1, [pc, #56]	@ 0008847c 0e49
.org 0x8847e
	adds r0, r4, #0	@ 0008847e 201c
.org 0x88480
	bl 0x1cf00	@ 00088480 94f73efd
.org 0x88484
	strb r5, [r4, #18]	@ 00088484 a574
.org 0x88486
	ldrb r0, [r4, #15]	@ 00088486 e07b
.org 0x88488
	adds r0, #1	@ 00088488 0130
.org 0x8848a
	strb r0, [r4, #15]	@ 0008848a e073
.org 0x8848c
	adds r0, r4, #0	@ 0008848c 201c
.org 0x8848e
	bl 0x1cff0	@ 0008848e 94f7affd
.org 0x88492
	ldrb r0, [r4, #18]	@ 00088492 a07c
.org 0x88494
	adds r0, #1	@ 00088494 0130
.org 0x88496
	strb r0, [r4, #18]	@ 00088496 a074
.org 0x88498
	movs r1, #31	@ 00088498 1f21
.org 0x8849a
	ands r0, r1	@ 0008849a 0840
.org 0x8849c
	cmp r0, #0	@ 0008849c 0028
.org 0x8849e
	bne.n 0x884dc	@ 0008849e 1dd1
.org 0x884a0
	ldr r2, [r4, #84]	@ 000884a0 626d
.org 0x884a2
	ldrb r1, [r4, #10]	@ 000884a2 a17a
.org 0x884a4
	movs r0, #16	@ 000884a4 1020
.org 0x884a6
	ands r0, r1	@ 000884a6 0840
.org 0x884a8
	cmp r0, #0	@ 000884a8 0028
.org 0x884aa
	beq.n 0x884bc	@ 000884aa 07d0
.org 0x884ac
	movs r1, #128	@ 000884ac 8021
.org 0x884ae
	lsls r1, r1, #3	@ 000884ae c900
.org 0x884b0
	b.n 0x884be	@ 000884b0 05e0
.org 0x884b2
	.byte 0x00	@ 000884b2 data
.org 0x884b3
	.byte 0x00	@ 000884b3 data
.org 0x884b4
	.byte 0x34,0xf0,0x85,0x08	@ 000884b4 data
.org 0x884b8
	.byte 0x1c,0x1d,0x00,0x00	@ 000884b8 data
.org 0x884bc
	ldr r1, [pc, #44]	@ 000884bc 0b49
.org 0x884be
	adds r0, r2, r1	@ 000884be 5018
.org 0x884c0
	str r0, [sp, #0]	@ 000884c0 0090
.org 0x884c2
	ldr r0, [r4, #88]	@ 000884c2 a06d
.org 0x884c4
	str r0, [sp, #4]	@ 000884c4 0190
.org 0x884c6
	movs r0, #128	@ 000884c6 8020
.org 0x884c8
	lsls r0, r0, #2	@ 000884c8 8000
.org 0x884ca
	str r0, [sp, #8]	@ 000884ca 0290
.org 0x884cc
	add r1, sp, #8	@ 000884cc 02a9
.org 0x884ce
	movs r0, #0	@ 000884ce 0020
.org 0x884d0
	str r0, [r1, #4]	@ 000884d0 4860
.org 0x884d2
	mov r0, sp	@ 000884d2 6846
.org 0x884d4
	movs r2, #0	@ 000884d4 0022
.org 0x884d6
	movs r3, #2	@ 000884d6 0223
.org 0x884d8
	bl 0x88ff0	@ 000884d8 00f08afd
.org 0x884dc
	ldrb r0, [r4, #18]	@ 000884dc a07c
.org 0x884de
	cmp r0, #32	@ 000884de 2028
.org 0x884e0
	beq.n 0x884fa	@ 000884e0 0bd0
.org 0x884e2
	cmp r0, #32	@ 000884e2 2028
.org 0x884e4
	bgt.n 0x884f0	@ 000884e4 04dc
.org 0x884e6
	cmp r0, #16	@ 000884e6 1028
.org 0x884e8
	beq.n 0x884fa	@ 000884e8 07d0
.org 0x884ea
	b.n 0x8854a	@ 000884ea 2ee0
.org 0x884ec
	.byte 0x00,0xfc,0xff,0xff	@ 000884ec data
.org 0x884f0
	cmp r0, #48	@ 000884f0 3028
.org 0x884f2
	beq.n 0x884fa	@ 000884f2 02d0
.org 0x884f4
	cmp r0, #64	@ 000884f4 4028
.org 0x884f6
	beq.n 0x88540	@ 000884f6 23d0
.org 0x884f8
	b.n 0x8854a	@ 000884f8 27e0
.org 0x884fa
	movs r0, #44	@ 000884fa 2c20
.org 0x884fc
	bl 0x2b10	@ 000884fc 7af708fb
.org 0x88500
	ldr r0, [r4, #84]	@ 00088500 606d
.org 0x88502
	str r0, [sp, #16]	@ 00088502 0490
.org 0x88504
	ldr r3, [r4, #88]	@ 00088504 a36d
.org 0x88506
	ldr r2, [pc, #44]	@ 00088506 0b4a
.org 0x88508
	adds r3, r3, r2	@ 00088508 9b18
.org 0x8850a
	add r4, sp, #16	@ 0008850a 04ac
.org 0x8850c
	str r3, [r4, #4]	@ 0008850c 6360
.org 0x8850e
	ldr r0, [pc, #40]	@ 0008850e 0a48
.org 0x88510
	ldr r1, [r0, #0]	@ 00088510 0168
.org 0x88512
	ldr r0, [r1, #84]	@ 00088512 486d
.org 0x88514
	ldr r1, [r1, #88]	@ 00088514 896d
.org 0x88516
	ldr r2, [pc, #36]	@ 00088516 094a
.org 0x88518
	adds r1, r1, r2	@ 00088518 8918
.org 0x8851a
	ldr r2, [sp, #16]	@ 0008851a 049a
.org 0x8851c
	bl 0x10d398	@ 0008851c 84f03cff
.org 0x88520
	adds r2, r0, #0	@ 00088520 021c
.org 0x88522
	lsls r2, r2, #24	@ 00088522 1206
.org 0x88524
	lsrs r2, r2, #24	@ 00088524 120e
.org 0x88526
	movs r1, #192	@ 00088526 c021
.org 0x88528
	lsls r1, r1, #1	@ 00088528 4900
.org 0x8852a
	adds r0, r4, #0	@ 0008852a 201c
.org 0x8852c
	bl 0xbd43c	@ 0008852c 34f086ff
.org 0x88530
	b.n 0x8854a	@ 00088530 0be0
.org 0x88532
	.byte 0x00	@ 00088532 data
.org 0x88533
	.byte 0x00	@ 00088533 data
.org 0x88534
	.byte 0x00,0xf6,0xff,0xff	@ 00088534 data
