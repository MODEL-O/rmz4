@ FUN_080634cc  entry 0x080634cc  size 232
.thumb
.org 0x634cc
FUN_080634cc:
	push {r4, r5, r6, r7, lr}	@ 000634cc f0b5
.org 0x634ce
	mov r7, r8	@ 000634ce 4746
.org 0x634d0
	push {r7}	@ 000634d0 80b4
.org 0x634d2
	adds r7, r0, #0	@ 000634d2 071c
.org 0x634d4
	ldrb r0, [r7, #10]	@ 000634d4 b87a
.org 0x634d6
	lsrs r4, r0, #4	@ 000634d6 0409
.org 0x634d8
	movs r0, #1	@ 000634d8 0120
.org 0x634da
	mov r8, r0	@ 000634da 8046
.org 0x634dc
	ands r4, r0	@ 000634dc 0440
.org 0x634de
	ldrb r0, [r7, #15]	@ 000634de f87b
.org 0x634e0
	cmp r0, #0	@ 000634e0 0028
.org 0x634e2
	bne.n 0x63516	@ 000634e2 18d1
.org 0x634e4
	adds r0, r7, #0	@ 000634e4 381c
.org 0x634e6
	movs r1, #11	@ 000634e6 0b21
.org 0x634e8
	bl 0x65a94	@ 000634e8 02f0d4fa
.org 0x634ec
	lsls r0, r4, #1	@ 000634ec 6000
.org 0x634ee
	subs r3, r0, #1	@ 000634ee 431e
.org 0x634f0
	lsls r1, r3, #9	@ 000634f0 5902
.org 0x634f2
	str r1, [r7, #92]	@ 000634f2 f965
.org 0x634f4
	adds r0, r7, #0	@ 000634f4 381c
.org 0x634f6
	adds r0, #196	@ 000634f6 c430
.org 0x634f8
	ldr r2, [r0, #0]	@ 000634f8 0268
.org 0x634fa
	lsls r0, r3, #2	@ 000634fa 9800
.org 0x634fc
	adds r0, r0, r3	@ 000634fc c018
.org 0x634fe
	lsls r0, r0, #9	@ 000634fe 4002
.org 0x63500
	ldr r2, [r2, #84]	@ 00063500 526d
.org 0x63502
	subs r2, r2, r0	@ 00063502 121a
.org 0x63504
	ldr r0, [r7, #84]	@ 00063504 786d
.org 0x63506
	subs r3, r2, r0	@ 00063506 131a
.org 0x63508
	adds r0, r3, #0	@ 00063508 181c
.org 0x6350a
	bl 0x128fb8	@ 0006350a c5f055fd
.org 0x6350e
	strb r0, [r7, #18]	@ 0006350e b874
.org 0x63510
	ldrb r0, [r7, #15]	@ 00063510 f87b
.org 0x63512
	adds r0, #1	@ 00063512 0130
.org 0x63514
	strb r0, [r7, #15]	@ 00063514 f873
.org 0x63516
	adds r0, r7, #0	@ 00063516 381c
.org 0x63518
	bl 0x1cff0	@ 00063518 b9f76afd
.org 0x6351c
	adds r6, r7, #0	@ 0006351c 3e1c
.org 0x6351e
	adds r6, #116	@ 0006351e 7436
.org 0x63520
	ldr r5, [pc, #108]	@ 00063520 1b4d
.org 0x63522
	ldr r2, [pc, #112]	@ 00063522 1c4a
.org 0x63524
	adds r0, r7, #0	@ 00063524 381c
.org 0x63526
	adds r0, #180	@ 00063526 b430
.org 0x63528
	ldrb r1, [r0, #0]	@ 00063528 0178
.org 0x6352a
	lsls r0, r1, #1	@ 0006352a 4800
.org 0x6352c
	adds r0, r0, r2	@ 0006352c 8018
.org 0x6352e
	ldrh r0, [r0, #0]	@ 0006352e 0088
.org 0x63530
	lsls r0, r0, #2	@ 00063530 8000
.org 0x63532
	adds r0, r0, r5	@ 00063532 4019
.org 0x63534
	adds r2, r7, #0	@ 00063534 3a1c
.org 0x63536
	adds r2, #113	@ 00063536 7132
.org 0x63538
	movs r4, #0	@ 00063538 0024
.org 0x6353a
	ldrsb r4, [r2, r4]	@ 0006353a 1457
.org 0x6353c
	ldr r0, [r0, #0]	@ 0006353c 0068
.org 0x6353e
	lsls r2, r4, #2	@ 0006353e a200
.org 0x63540
	adds r2, r2, r0	@ 00063540 1218
.org 0x63542
	ldr r3, [pc, #84]	@ 00063542 154b
.org 0x63544
	adds r0, r7, #0	@ 00063544 381c
.org 0x63546
	adds r0, #181	@ 00063546 b530
.org 0x63548
	ldrb r0, [r0, #0]	@ 00063548 0078
.org 0x6354a
	lsls r0, r0, #2	@ 0006354a 8000
.org 0x6354c
	adds r0, r0, r3	@ 0006354c c018
.org 0x6354e
	ldr r0, [r0, #0]	@ 0006354e 0068
.org 0x63550
	lsls r1, r1, #2	@ 00063550 8900
.org 0x63552
	adds r1, r1, r0	@ 00063552 0918
.org 0x63554
	ldr r0, [r1, #0]	@ 00063554 0868
.org 0x63556
	adds r0, r0, r4	@ 00063556 0019
.org 0x63558
	ldrb r1, [r0, #0]	@ 00063558 0178
.org 0x6355a
	lsls r0, r1, #1	@ 0006355a 4800
.org 0x6355c
	adds r0, r0, r1	@ 0006355c 4018
.org 0x6355e
	lsls r0, r0, #3	@ 0006355e c000
.org 0x63560
	ldr r1, [r2, #0]	@ 00063560 1168
.org 0x63562
	adds r1, r1, r0	@ 00063562 0918
.org 0x63564
	adds r0, r6, #0	@ 00063564 301c
.org 0x63566
	bl 0x5784	@ 00063566 a2f70df9
.org 0x6356a
	ldr r0, [r5, #0]	@ 0006356a 2868
.org 0x6356c
	ldr r1, [r0, #0]	@ 0006356c 0168
.org 0x6356e
	adds r0, r6, #0	@ 0006356e 301c
.org 0x63570
	bl 0x5784	@ 00063570 a2f708f9
.org 0x63574
	ldr r0, [r7, #84]	@ 00063574 786d
.org 0x63576
	ldr r1, [r7, #92]	@ 00063576 f96d
.org 0x63578
	adds r0, r0, r1	@ 00063578 4018
.org 0x6357a
	str r0, [r7, #84]	@ 0006357a 7865
.org 0x6357c
	ldrb r1, [r7, #18]	@ 0006357c b97c
.org 0x6357e
	mov r0, r8	@ 0006357e 4046
.org 0x63580
	ands r0, r1	@ 00063580 0840
.org 0x63582
	cmp r0, #0	@ 00063582 0028
.org 0x63584
	beq.n 0x6359c	@ 00063584 0ad0
.org 0x63586
	ldrb r1, [r7, #10]	@ 00063586 b97a
.org 0x63588
	movs r0, #1	@ 00063588 0120
.org 0x6358a
	orrs r0, r1	@ 0006358a 0843
.org 0x6358c
	b.n 0x635a2	@ 0006358c 09e0
.org 0x6358e
	.byte 0x00	@ 0006358e data
.org 0x6358f
	.byte 0x00	@ 0006358f data
.org 0x63590
	.byte 0x80,0xaf,0x85,0x08	@ 00063590 data
.org 0x63594
	.byte 0xa0,0xb0,0x85,0x08	@ 00063594 data
.org 0x63598
	.byte 0x98,0xb0,0x85,0x08	@ 00063598 data
.org 0x6359c
	ldrb r1, [r7, #10]	@ 0006359c b97a
.org 0x6359e
	movs r0, #254	@ 0006359e fe20
.org 0x635a0
	ands r0, r1	@ 000635a0 0840
.org 0x635a2
	strb r0, [r7, #10]	@ 000635a2 b872
.org 0x635a4
	ldrb r0, [r7, #18]	@ 000635a4 b87c
.org 0x635a6
	subs r0, #1	@ 000635a6 0138
.org 0x635a8
	strb r0, [r7, #18]	@ 000635a8 b874
.org 0x635aa
	lsls r0, r0, #24	@ 000635aa 0006
.org 0x635ac
	lsrs r1, r0, #24	@ 000635ac 010e
.org 0x635ae
	cmp r1, #0	@ 000635ae 0029
.org 0x635b0
	bne.n 0x635b8	@ 000635b0 02d1
.org 0x635b2
	movs r0, #5	@ 000635b2 0520
