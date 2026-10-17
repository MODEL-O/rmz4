@ FUN_08008534  entry 0x08008534  size 234
.thumb
.org 0x8534
FUN_08008534:
	push {r4, r5, r6, r7, lr}	@ 00008534 f0b5
.org 0x8536
	mov r7, sl	@ 00008536 5746
.org 0x8538
	mov r6, r9	@ 00008538 4e46
.org 0x853a
	mov r5, r8	@ 0000853a 4546
.org 0x853c
	push {r5, r6, r7}	@ 0000853c e0b4
.org 0x853e
	adds r6, r0, #0	@ 0000853e 061c
.org 0x8540
	mov r9, r1	@ 00008540 8946
.org 0x8542
	mov r5, r9	@ 00008542 4d46
.org 0x8544
	ldr r4, [pc, #48]	@ 00008544 0c4c
.org 0x8546
	movs r1, #232	@ 00008546 e821
.org 0x8548
	lsls r1, r1, #1	@ 00008548 4900
.org 0x854a
	adds r0, r4, r1	@ 0000854a 6018
.org 0x854c
	ldrh r0, [r0, #0]	@ 0000854c 0088
.org 0x854e
	cmp r0, #4	@ 0000854e 0428
.org 0x8550
	bne.n 0x8564	@ 00008550 08d1
.org 0x8552
	ldr r2, [pc, #40]	@ 00008552 0a4a
.org 0x8554
	adds r0, r6, r2	@ 00008554 b018
.org 0x8556
	movs r1, #240	@ 00008556 f021
.org 0x8558
	lsls r1, r1, #10	@ 00008558 8902
.org 0x855a
	bl 0x129050	@ 0000855a 20f179fd
.org 0x855e
	movs r1, #240	@ 0000855e f021
.org 0x8560
	lsls r1, r1, #8	@ 00008560 0902
.org 0x8562
	adds r6, r0, r1	@ 00008562 4618
.org 0x8564
	asrs r2, r6, #12	@ 00008564 3213
.org 0x8566
	mov r8, r2	@ 00008566 9046
.org 0x8568
	mov r0, r9	@ 00008568 4846
.org 0x856a
	asrs r1, r0, #12	@ 0000856a 0113
.org 0x856c
	ldr r0, [pc, #16]	@ 0000856c 0448
.org 0x856e
	cmp r8, r0	@ 0000856e 8045
.org 0x8570
	bls.n 0x8584	@ 00008570 08d9
.org 0x8572
	movs r0, #1	@ 00008572 0120
.org 0x8574
	negs r0, r0	@ 00008574 4042
.org 0x8576
	b.n 0x863c	@ 00008576 61e0
.org 0x8578
	.byte 0xb0,0x0a,0x00,0x02	@ 00008578 data
.org 0x857c
	.byte 0x00,0x10,0xff,0xff	@ 0000857c data
.org 0x8580
	.byte 0x7f,0x07,0x00,0x00	@ 00008580 data
.org 0x8584
	movs r7, #0	@ 00008584 0027
.org 0x8586
	ldr r0, [pc, #88]	@ 00008586 1648
.org 0x8588
	cmp r1, r0	@ 00008588 8142
.org 0x858a
	bhi.n 0x860e	@ 0000858a 40d8
.org 0x858c
	movs r2, #252	@ 0000858c fc22
.org 0x858e
	lsls r2, r2, #3	@ 0000858e d200
.org 0x8590
	adds r2, r2, r4	@ 00008590 1219
.org 0x8592
	mov sl, r2	@ 00008592 9246
.org 0x8594
	mov r2, sl	@ 00008594 5246
.org 0x8596
	ldrh r0, [r2, #0]	@ 00008596 1088
.org 0x8598
	muls r0, r1	@ 00008598 4843
.org 0x859a
	add r0, r8	@ 0000859a 4044
.org 0x859c
	adds r0, #2	@ 0000859c 0230
.org 0x859e
	lsls r0, r0, #1	@ 0000859e 4000
.org 0x85a0
	add r0, sl	@ 000085a0 5044
.org 0x85a2
	ldrh r0, [r0, #0]	@ 000085a2 0088
.org 0x85a4
	ldr r2, [pc, #60]	@ 000085a4 0f4a
.org 0x85a6
	ldr r1, [r2, #0]	@ 000085a6 1168
.org 0x85a8
	lsls r0, r0, #1	@ 000085a8 4000
.org 0x85aa
	adds r0, r0, r1	@ 000085aa 4018
.org 0x85ac
	ldrh r4, [r0, #0]	@ 000085ac 0488
.org 0x85ae
	movs r0, #15	@ 000085ae 0f20
.org 0x85b0
	ands r0, r4	@ 000085b0 2040
.org 0x85b2
	lsls r0, r0, #2	@ 000085b2 8000
.org 0x85b4
	ldr r1, [pc, #48]	@ 000085b4 0c49
.org 0x85b6
	adds r0, r0, r1	@ 000085b6 4018
.org 0x85b8
	ldr r2, [pc, #48]	@ 000085b8 0c4a
.org 0x85ba
	adds r1, r5, #0	@ 000085ba 291c
.org 0x85bc
	ands r1, r2	@ 000085bc 1140
.org 0x85be
	ldr r3, [r0, #0]	@ 000085be 0368
.org 0x85c0
	adds r0, r6, #0	@ 000085c0 301c
.org 0x85c2
	ands r0, r2	@ 000085c2 1040
.org 0x85c4
	bl 0x128f88	@ 000085c4 20f1e0fc
.org 0x85c8
	cmp r0, #0	@ 000085c8 0028
.org 0x85ca
	beq.n 0x85d2	@ 000085ca 02d0
.org 0x85cc
	ldr r0, [pc, #32]	@ 000085cc 0848
.org 0x85ce
	cmp r4, r0	@ 000085ce 8442
.org 0x85d0
	bne.n 0x860e	@ 000085d0 1dd1
.org 0x85d2
	movs r0, #1	@ 000085d2 0120
.org 0x85d4
	ands r0, r7	@ 000085d4 3840
.org 0x85d6
	cmp r0, #0	@ 000085d6 0028
.org 0x85d8
	beq.n 0x85f4	@ 000085d8 0cd0
.org 0x85da
	adds r5, #1	@ 000085da 0135
.org 0x85dc
	b.n 0x8600	@ 000085dc 10e0
.org 0x85de
	.byte 0x00	@ 000085de data
.org 0x85df
	.byte 0x00	@ 000085df data
.org 0x85e0
	.byte 0xff,0x04,0x00,0x00	@ 000085e0 data
.org 0x85e4
	.byte 0x68,0x0c,0x00,0x02	@ 000085e4 data
.org 0x85e8
	.byte 0xd4,0xb0,0x82,0x08	@ 000085e8 data
.org 0x85ec
	.byte 0xff,0x0f,0x00,0x00	@ 000085ec data
.org 0x85f0
	.byte 0x0f,0x80,0x00,0x00	@ 000085f0 data
.org 0x85f4
	movs r2, #128	@ 000085f4 8022
.org 0x85f6
	lsls r2, r2, #5	@ 000085f6 5201
.org 0x85f8
	adds r0, r5, r2	@ 000085f8 a818
.org 0x85fa
	asrs r0, r0, #12	@ 000085fa 0013
.org 0x85fc
	lsls r0, r0, #12	@ 000085fc 0003
.org 0x85fe
	subs r5, r0, #1	@ 000085fe 451e
.org 0x8600
	asrs r1, r5, #12	@ 00008600 2913
.org 0x8602
	adds r7, #1	@ 00008602 0137
.org 0x8604
	cmp r7, #127	@ 00008604 7f2f
.org 0x8606
	bgt.n 0x8612	@ 00008606 04dc
.org 0x8608
	ldr r0, [pc, #12]	@ 00008608 0348
.org 0x860a
	cmp r1, r0	@ 0000860a 8142
.org 0x860c
	bls.n 0x8594	@ 0000860c c2d9
.org 0x860e
	cmp r7, #127	@ 0000860e 7f2f
.org 0x8610
	ble.n 0x8620	@ 00008610 06dd
.org 0x8612
	ldr r2, [pc, #8]	@ 00008612 024a
.org 0x8614
	b.n 0x8630	@ 00008614 0ce0
.org 0x8616
	.byte 0x00	@ 00008616 data
.org 0x8617
	.byte 0x00	@ 00008617 data
.org 0x8618
	.byte 0xff,0x04,0x00,0x00	@ 00008618 data
.org 0x861c
	.byte 0xff,0xff,0xff,0x7f	@ 0000861c data
