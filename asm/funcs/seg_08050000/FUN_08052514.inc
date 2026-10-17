@ FUN_08052514  entry 0x08052514  size 446
.thumb
.org 0x52514
FUN_08052514:
	push {r4, r5, r6, r7, lr}	@ 00052514 f0b5
.org 0x52516
	mov r7, r9	@ 00052516 4f46
.org 0x52518
	mov r6, r8	@ 00052518 4646
.org 0x5251a
	push {r6, r7}	@ 0005251a c0b4
.org 0x5251c
	sub sp, #8	@ 0005251c 82b0
.org 0x5251e
	adds r4, r0, #0	@ 0005251e 041c
.org 0x52520
	ldrb r0, [r4, #14]	@ 00052520 a07b
.org 0x52522
	cmp r0, #0	@ 00052522 0028
.org 0x52524
	bne.n 0x52566	@ 00052524 1fd1
.org 0x52526
	ldr r1, [pc, #36]	@ 00052526 0949
.org 0x52528
	adds r0, r4, #0	@ 00052528 201c
.org 0x5252a
	bl 0x1cf00	@ 0005252a caf7e9fc
.org 0x5252e
	adds r0, r4, #0	@ 0005252e 201c
.org 0x52530
	adds r0, #226	@ 00052530 e230
.org 0x52532
	ldrb r0, [r0, #0]	@ 00052532 0078
.org 0x52534
	cmp r0, #0	@ 00052534 0028
.org 0x52536
	bne.n 0x5253e	@ 00052536 02d1
.org 0x52538
	movs r0, #233	@ 00052538 e920
.org 0x5253a
	bl 0x2b10	@ 0005253a b0f7e9fa
.org 0x5253e
	ldrb r1, [r4, #10]	@ 0005253e a17a
.org 0x52540
	movs r0, #32	@ 00052540 2020
.org 0x52542
	ands r0, r1	@ 00052542 0840
.org 0x52544
	cmp r0, #0	@ 00052544 0028
.org 0x52546
	beq.n 0x52554	@ 00052546 05d0
.org 0x52548
	ldr r0, [pc, #4]	@ 00052548 0148
.org 0x5254a
	b.n 0x52558	@ 0005254a 05e0
.org 0x5254c
	.byte 0x19,0xa1,0x00,0x00	@ 0005254c data
.org 0x52550
	.byte 0x40,0xfd,0xff,0xff	@ 00052550 data
.org 0x52554
	movs r0, #176	@ 00052554 b020
.org 0x52556
	lsls r0, r0, #2	@ 00052556 8000
.org 0x52558
	str r0, [r4, #96]	@ 00052558 2066
.org 0x5255a
	movs r1, #0	@ 0005255a 0021
.org 0x5255c
	movs r0, #21	@ 0005255c 1520
.org 0x5255e
	strb r0, [r4, #18]	@ 0005255e a074
.org 0x52560
	strb r1, [r4, #19]	@ 00052560 e174
.org 0x52562
	strb r1, [r4, #15]	@ 00052562 e173
.org 0x52564
	b.n 0x525a0	@ 00052564 1ce0
.org 0x52566
	cmp r0, #1	@ 00052566 0128
.org 0x52568
	bne.n 0x52584	@ 00052568 0cd1
.org 0x5256a
	adds r0, r4, #0	@ 0005256a 201c
.org 0x5256c
	adds r0, #113	@ 0005256c 7130
.org 0x5256e
	ldrb r0, [r0, #0]	@ 0005256e 0078
.org 0x52570
	lsls r0, r0, #24	@ 00052570 0006
.org 0x52572
	asrs r0, r0, #24	@ 00052572 0016
.org 0x52574
	cmp r0, #2	@ 00052574 0228
.org 0x52576
	ble.n 0x525a6	@ 00052576 16dd
.org 0x52578
	adds r0, r4, #0	@ 00052578 201c
.org 0x5257a
	adds r0, #116	@ 0005257a 7430
.org 0x5257c
	ldr r1, [pc, #0]	@ 0005257c 0049
.org 0x5257e
	b.n 0x5259c	@ 0005257e 0de0
.org 0x52580
	.byte 0x64,0x80,0x85,0x08	@ 00052580 data
.org 0x52584
	cmp r0, #2	@ 00052584 0228
.org 0x52586
	bne.n 0x525a6	@ 00052586 0ed1
.org 0x52588
	adds r0, r4, #0	@ 00052588 201c
.org 0x5258a
	adds r0, #113	@ 0005258a 7130
.org 0x5258c
	ldrb r0, [r0, #0]	@ 0005258c 0078
.org 0x5258e
	lsls r0, r0, #24	@ 0005258e 0006
.org 0x52590
	asrs r0, r0, #24	@ 00052590 0016
.org 0x52592
	cmp r0, #4	@ 00052592 0428
.org 0x52594
	ble.n 0x525a6	@ 00052594 07dd
.org 0x52596
	adds r0, r4, #0	@ 00052596 201c
.org 0x52598
	adds r0, #116	@ 00052598 7430
.org 0x5259a
	ldr r1, [pc, #52]	@ 0005259a 0d49
.org 0x5259c
	bl 0x5784	@ 0005259c b3f7f2f8
.org 0x525a0
	ldrb r0, [r4, #14]	@ 000525a0 a07b
.org 0x525a2
	adds r0, #1	@ 000525a2 0130
.org 0x525a4
	strb r0, [r4, #14]	@ 000525a4 a073
.org 0x525a6
	adds r0, r4, #0	@ 000525a6 201c
.org 0x525a8
	bl 0x1cff0	@ 000525a8 caf722fd
.org 0x525ac
	ldrb r0, [r4, #15]	@ 000525ac e07b
.org 0x525ae
	cmp r0, #0	@ 000525ae 0028
.org 0x525b0
	bne.n 0x525d4	@ 000525b0 10d1
.org 0x525b2
	adds r0, r4, #0	@ 000525b2 201c
.org 0x525b4
	adds r0, #113	@ 000525b4 7130
.org 0x525b6
	ldrb r0, [r0, #0]	@ 000525b6 0078
.org 0x525b8
	lsls r0, r0, #24	@ 000525b8 0006
.org 0x525ba
	asrs r0, r0, #24	@ 000525ba 0016
.org 0x525bc
	cmp r0, #9	@ 000525bc 0928
.org 0x525be
	bgt.n 0x525c2	@ 000525be 00dc
.org 0x525c0
	b.n 0x526f6	@ 000525c0 99e0
.org 0x525c2
	movs r0, #235	@ 000525c2 eb20
.org 0x525c4
	bl 0x2b10	@ 000525c4 b0f7a4fa
.org 0x525c8
	ldrb r0, [r4, #15]	@ 000525c8 e07b
.org 0x525ca
	adds r0, #1	@ 000525ca 0130
.org 0x525cc
	strb r0, [r4, #15]	@ 000525cc e073
.org 0x525ce
	b.n 0x526f6	@ 000525ce 92e0
.org 0x525d0
	.byte 0xd4,0x7f,0x85,0x08	@ 000525d0 data
.org 0x525d4
	ldrb r6, [r4, #19]	@ 000525d4 e67c
.org 0x525d6
	movs r0, #1	@ 000525d6 0120
.org 0x525d8
	mov r9, r0	@ 000525d8 8146
.org 0x525da
	movs r0, #1	@ 000525da 0120
.org 0x525dc
	ands r0, r6	@ 000525dc 3040
.org 0x525de
	cmp r0, #0	@ 000525de 0028
.org 0x525e0
	beq.n 0x526b6	@ 000525e0 69d0
.org 0x525e2
	ldr r3, [r4, #84]	@ 000525e2 636d
.org 0x525e4
	movs r1, #128	@ 000525e4 8021
.org 0x525e6
	lsls r1, r1, #5	@ 000525e6 4901
.org 0x525e8
	adds r2, r3, r1	@ 000525e8 5a18
.org 0x525ea
	ldr r5, [pc, #64]	@ 000525ea 104d
.org 0x525ec
	ldr r0, [r5, #0]	@ 000525ec 2868
.org 0x525ee
	ldr r7, [pc, #64]	@ 000525ee 104f
.org 0x525f0
	muls r0, r7	@ 000525f0 7843
.org 0x525f2
	ldr r1, [pc, #64]	@ 000525f2 1049
.org 0x525f4
	mov r8, r1	@ 000525f4 8846
.org 0x525f6
	add r0, r8	@ 000525f6 4044
.org 0x525f8
	lsls r0, r0, #1	@ 000525f8 4000
.org 0x525fa
	lsrs r1, r0, #1	@ 000525fa 4108
.org 0x525fc
	str r1, [r5, #0]	@ 000525fc 2960
.org 0x525fe
	lsrs r0, r0, #17	@ 000525fe 400c
.org 0x52600
	movs r1, #31	@ 00052600 1f21
.org 0x52602
	ands r0, r1	@ 00052602 0840
.org 0x52604
	lsls r0, r0, #8	@ 00052604 0002
.org 0x52606
	subs r2, r2, r0	@ 00052606 121a
.org 0x52608
	str r2, [sp, #0]	@ 00052608 0092
.org 0x5260a
	movs r0, #3	@ 0005260a 0320
.org 0x5260c
	ands r0, r6	@ 0005260c 3040
.org 0x5260e
	cmp r0, #1	@ 0005260e 0128
.org 0x52610
	bne.n 0x52650	@ 00052610 1ed1
.org 0x52612
	ldrb r1, [r4, #10]	@ 00052612 a17a
.org 0x52614
	movs r0, #32	@ 00052614 2020
.org 0x52616
	ands r0, r1	@ 00052616 0840
.org 0x52618
	cmp r0, #0	@ 00052618 0028
.org 0x5261a
	beq.n 0x5263c	@ 0005261a 0fd0
.org 0x5261c
	ldr r1, [r4, #88]	@ 0005261c a16d
.org 0x5261e
	adds r0, r3, #0	@ 0005261e 181c
.org 0x52620
	bl 0x8748	@ 00052620 b6f792f8
.org 0x52624
	str r0, [sp, #4]	@ 00052624 0190
.org 0x52626
	ldr r1, [pc, #16]	@ 00052626 0449
.org 0x52628
	b.n 0x52666	@ 00052628 1de0
.org 0x5262a
	.byte 0x00	@ 0005262a data
.org 0x5262b
	.byte 0x00	@ 0005262b data
.org 0x5262c
	.byte 0x38,0xdc,0x02,0x02	@ 0005262c data
.org 0x52630
	.byte 0xfd,0x43,0x03,0x00	@ 00052630 data
.org 0x52634
	.byte 0xc3,0x9e,0x26,0x00	@ 00052634 data
.org 0x52638
	.byte 0xb8,0x81,0x85,0x08	@ 00052638 data
.org 0x5263c
	ldr r1, [r4, #88]	@ 0005263c a16d
.org 0x5263e
	adds r0, r3, #0	@ 0005263e 181c
.org 0x52640
	bl 0x8534	@ 00052640 b5f778ff
.org 0x52644
	str r0, [sp, #4]	@ 00052644 0190
.org 0x52646
	ldr r1, [pc, #4]	@ 00052646 0149
.org 0x52648
	b.n 0x52666	@ 00052648 0de0
.org 0x5264a
	.byte 0x00	@ 0005264a data
.org 0x5264b
	.byte 0x00	@ 0005264b data
.org 0x5264c
	.byte 0x80,0x81,0x85,0x08	@ 0005264c data
.org 0x52650
	ldrb r1, [r4, #10]	@ 00052650 a17a
.org 0x52652
	movs r0, #32	@ 00052652 2020
.org 0x52654
	ands r0, r1	@ 00052654 0840
.org 0x52656
	cmp r0, #0	@ 00052656 0028
.org 0x52658
	beq.n 0x5268c	@ 00052658 18d0
.org 0x5265a
	ldr r1, [r4, #88]	@ 0005265a a16d
.org 0x5265c
	adds r0, r3, #0	@ 0005265c 181c
.org 0x5265e
	bl 0x8748	@ 0005265e b6f773f8
.org 0x52662
	str r0, [sp, #4]	@ 00052662 0190
.org 0x52664
	ldr r1, [pc, #32]	@ 00052664 0849
.org 0x52666
	ldr r0, [r5, #0]	@ 00052666 2868
.org 0x52668
	adds r3, r0, #0	@ 00052668 031c
.org 0x5266a
	muls r3, r7	@ 0005266a 7b43
.org 0x5266c
	add r3, r8	@ 0005266c 4344
.org 0x5266e
	lsls r3, r3, #1	@ 0005266e 5b00
.org 0x52670
	lsrs r0, r3, #1	@ 00052670 5808
.org 0x52672
	str r0, [r5, #0]	@ 00052672 2860
.org 0x52674
	lsrs r3, r3, #17	@ 00052674 5b0c
.org 0x52676
	mov r0, r9	@ 00052676 4846
.org 0x52678
	ands r3, r0	@ 00052678 0340
.org 0x5267a
	lsls r3, r3, #4	@ 0005267a 1b01
.org 0x5267c
	mov r0, sp	@ 0005267c 6846
.org 0x5267e
	movs r2, #0	@ 0005267e 0022
.org 0x52680
	bl 0xd4c8c	@ 00052680 82f004fb
.org 0x52684
	b.n 0x526b6	@ 00052684 17e0
.org 0x52686
	.byte 0x00	@ 00052686 data
.org 0x52687
	.byte 0x00	@ 00052687 data
.org 0x52688
	.byte 0x9c,0x81,0x85,0x08	@ 00052688 data
.org 0x5268c
	ldr r1, [r4, #88]	@ 0005268c a16d
.org 0x5268e
	adds r0, r3, #0	@ 0005268e 181c
.org 0x52690
	bl 0x8534	@ 00052690 b5f750ff
.org 0x52694
	str r0, [sp, #4]	@ 00052694 0190
.org 0x52696
	ldr r1, [pc, #52]	@ 00052696 0d49
.org 0x52698
	ldr r0, [r5, #0]	@ 00052698 2868
.org 0x5269a
	adds r3, r0, #0	@ 0005269a 031c
.org 0x5269c
	muls r3, r7	@ 0005269c 7b43
.org 0x5269e
	add r3, r8	@ 0005269e 4344
.org 0x526a0
	lsls r3, r3, #1	@ 000526a0 5b00
.org 0x526a2
	lsrs r0, r3, #1	@ 000526a2 5808
.org 0x526a4
	str r0, [r5, #0]	@ 000526a4 2860
.org 0x526a6
	lsrs r3, r3, #17	@ 000526a6 5b0c
.org 0x526a8
	mov r0, r9	@ 000526a8 4846
.org 0x526aa
	ands r3, r0	@ 000526aa 0340
.org 0x526ac
	lsls r3, r3, #4	@ 000526ac 1b01
.org 0x526ae
	mov r0, sp	@ 000526ae 6846
.org 0x526b0
	movs r2, #0	@ 000526b0 0022
.org 0x526b2
	bl 0xd4c8c	@ 000526b2 82f0ebfa
.org 0x526b6
	ldrb r1, [r4, #19]	@ 000526b6 e17c
.org 0x526b8
	adds r0, r1, #1	@ 000526b8 481c
.org 0x526ba
	strb r0, [r4, #19]	@ 000526ba e074
.org 0x526bc
	movs r0, #3	@ 000526bc 0320
.org 0x526be
	ands r0, r1	@ 000526be 0840
.org 0x526c0
	cmp r0, #1	@ 000526c0 0128
.org 0x526c2
	bhi.n 0x526d0	@ 000526c2 05d8
.org 0x526c4
	ldr r0, [r4, #84]	@ 000526c4 606d
.org 0x526c6
	movs r1, #128	@ 000526c6 8021
.org 0x526c8
	lsls r1, r1, #1	@ 000526c8 4900
.org 0x526ca
	b.n 0x526d4	@ 000526ca 03e0
.org 0x526cc
	.byte 0x64,0x81,0x85,0x08	@ 000526cc data
.org 0x526d0
	ldr r0, [r4, #84]	@ 000526d0 606d
