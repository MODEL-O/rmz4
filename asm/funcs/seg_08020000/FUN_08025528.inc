@ FUN_08025528  entry 0x08025528  size 250
.thumb
.org 0x25528
FUN_08025528:
	push {r4, r5, lr}	@ 00025528 30b5
.org 0x2552a
	adds r2, r0, #0	@ 0002552a 021c
.org 0x2552c
	ldr r3, [r2, #32]	@ 0002552c 136a
.org 0x2552e
	movs r0, #190	@ 0002552e be20
.org 0x25530
	lsls r0, r0, #1	@ 00025530 4000
.org 0x25532
	adds r5, r2, r0	@ 00025532 1518
.org 0x25534
	ldrb r0, [r5, #0]	@ 00025534 2878
.org 0x25536
	cmp r0, #0	@ 00025536 0028
.org 0x25538
	bne.n 0x255b0	@ 00025538 3ad1
.org 0x2553a
	ldr r3, [pc, #48]	@ 0002553a 0c4b
.org 0x2553c
	ldrh r1, [r3, #8]	@ 0002553c 1989
.org 0x2553e
	movs r0, #1	@ 0002553e 0120
.org 0x25540
	orrs r0, r1	@ 00025540 0843
.org 0x25542
	strh r0, [r3, #8]	@ 00025542 1881
.org 0x25544
	ldr r2, [pc, #40]	@ 00025544 0a4a
.org 0x25546
	ldrb r1, [r2, #4]	@ 00025546 1179
.org 0x25548
	movs r0, #8	@ 00025548 0820
.org 0x2554a
	orrs r0, r1	@ 0002554a 0843
.org 0x2554c
	strb r0, [r2, #4]	@ 0002554c 1071
.org 0x2554e
	ldrb r4, [r3, #2]	@ 0002554e 9c78
.org 0x25550
	cmp r4, #0	@ 00025550 002c
.org 0x25552
	bne.n 0x25578	@ 00025552 11d1
.org 0x25554
	adds r0, r3, #0	@ 00025554 181c
.org 0x25556
	adds r0, #16	@ 00025556 1030
.org 0x25558
	ldr r1, [pc, #24]	@ 00025558 0649
.org 0x2555a
	ldr r1, [r1, #52]	@ 0002555a 496b
.org 0x2555c
	ldr r1, [r1, #36]	@ 0002555c 496a
.org 0x2555e
	bl 0x275f0	@ 0002555e 02f047f8
.org 0x25562
	movs r0, #2	@ 00025562 0220
.org 0x25564
	bl 0x1f63c	@ 00025564 faf76af8
.org 0x25568
	movs r0, #2	@ 00025568 0220
.org 0x2556a
	b.n 0x25642	@ 0002556a 6ae0
.org 0x2556c
	.byte 0x10,0xe9,0x02,0x02	@ 0002556c data
.org 0x25570
	.byte 0xb0,0xe8,0x02,0x02	@ 00025570 data
.org 0x25574
	.byte 0xf8,0x2c,0x84,0x08	@ 00025574 data
.org 0x25578
	cmp r4, #2	@ 00025578 022c
.org 0x2557a
	bne.n 0x25594	@ 0002557a 0bd1
.org 0x2557c
	adds r0, r3, #0	@ 0002557c 181c
.org 0x2557e
	adds r0, #16	@ 0002557e 1030
.org 0x25580
	ldr r1, [pc, #12]	@ 00025580 0349
.org 0x25582
	ldr r1, [r1, #52]	@ 00025582 496b
.org 0x25584
	ldr r1, [r1, #8]	@ 00025584 8968
.org 0x25586
	bl 0x275f0	@ 00025586 02f033f8
.org 0x2558a
	strb r4, [r5, #0]	@ 0002558a 2c70
.org 0x2558c
	b.n 0x25644	@ 0002558c 5ae0
.org 0x2558e
	.byte 0x00	@ 0002558e data
.org 0x2558f
	.byte 0x00	@ 0002558f data
.org 0x25590
	.byte 0xf8,0x2c,0x84,0x08	@ 00025590 data
.org 0x25594
	cmp r4, #3	@ 00025594 032c
.org 0x25596
	bne.n 0x25644	@ 00025596 55d1
.org 0x25598
	adds r0, r3, #0	@ 00025598 181c
.org 0x2559a
	adds r0, #16	@ 0002559a 1030
.org 0x2559c
	ldr r1, [pc, #12]	@ 0002559c 0349
.org 0x2559e
	ldr r1, [r1, #52]	@ 0002559e 496b
.org 0x255a0
	ldr r1, [r1, #12]	@ 000255a0 c968
.org 0x255a2
	bl 0x275f0	@ 000255a2 02f025f8
.org 0x255a6
	movs r0, #4	@ 000255a6 0420
.org 0x255a8
	b.n 0x25642	@ 000255a8 4be0
.org 0x255aa
	.byte 0x00	@ 000255aa data
.org 0x255ab
	.byte 0x00	@ 000255ab data
.org 0x255ac
	.byte 0xf8,0x2c,0x84,0x08	@ 000255ac data
.org 0x255b0
	cmp r0, #2	@ 000255b0 0228
.org 0x255b2
	bne.n 0x255c2	@ 000255b2 06d1
.org 0x255b4
	ldr r1, [r3, #84]	@ 000255b4 596d
.org 0x255b6
	movs r0, #164	@ 000255b6 a420
.org 0x255b8
	lsls r0, r0, #12	@ 000255b8 0003
.org 0x255ba
	cmp r1, r0	@ 000255ba 8142
.org 0x255bc
	ble.n 0x255c2	@ 000255bc 01dd
.org 0x255be
	movs r0, #3	@ 000255be 0320
.org 0x255c0
	b.n 0x25642	@ 000255c0 3fe0
.org 0x255c2
	movs r0, #190	@ 000255c2 be20
.org 0x255c4
	lsls r0, r0, #1	@ 000255c4 4000
.org 0x255c6
	adds r5, r2, r0	@ 000255c6 1518
.org 0x255c8
	ldrb r0, [r5, #0]	@ 000255c8 2878
.org 0x255ca
	cmp r0, #3	@ 000255ca 0328
.org 0x255cc
	bne.n 0x255d8	@ 000255cc 04d1
.org 0x255ce
	movs r0, #3	@ 000255ce 0320
.org 0x255d0
	bl 0x1f63c	@ 000255d0 faf734f8
.org 0x255d4
	movs r0, #4	@ 000255d4 0420
.org 0x255d6
	b.n 0x25642	@ 000255d6 34e0
.org 0x255d8
	cmp r0, #4	@ 000255d8 0428
.org 0x255da
	bne.n 0x2561c	@ 000255da 1fd1
.org 0x255dc
	ldr r1, [r3, #84]	@ 000255dc 596d
.org 0x255de
	ldr r0, [pc, #44]	@ 000255de 0b48
.org 0x255e0
	cmp r1, r0	@ 000255e0 8142
.org 0x255e2
	ble.n 0x255ee	@ 000255e2 04dd
.org 0x255e4
	ldr r2, [pc, #40]	@ 000255e4 0a4a
.org 0x255e6
	ldrb r1, [r2, #1]	@ 000255e6 5178
.org 0x255e8
	movs r0, #2	@ 000255e8 0220
.org 0x255ea
	orrs r0, r1	@ 000255ea 0843
.org 0x255ec
	strb r0, [r2, #1]	@ 000255ec 5070
.org 0x255ee
	ldr r1, [r3, #84]	@ 000255ee 596d
.org 0x255f0
	ldr r0, [pc, #32]	@ 000255f0 0848
.org 0x255f2
	cmp r1, r0	@ 000255f2 8142
.org 0x255f4
	ble.n 0x25644	@ 000255f4 26dd
.org 0x255f6
	ldr r1, [pc, #24]	@ 000255f6 0649
.org 0x255f8
	movs r0, #0	@ 000255f8 0020
.org 0x255fa
	strb r0, [r1, #1]	@ 000255fa 4870
.org 0x255fc
	ldr r2, [pc, #24]	@ 000255fc 064a
.org 0x255fe
	ldrb r1, [r2, #4]	@ 000255fe 1179
.org 0x25600
	movs r0, #247	@ 00025600 f720
.org 0x25602
	ands r0, r1	@ 00025602 0840
.org 0x25604
	strb r0, [r2, #4]	@ 00025604 1071
.org 0x25606
	movs r0, #5	@ 00025606 0520
.org 0x25608
	b.n 0x25642	@ 00025608 1be0
.org 0x2560a
	.byte 0x00	@ 0002560a data
.org 0x2560b
	.byte 0x00	@ 0002560b data
.org 0x2560c
	.byte 0xff,0x5f,0x17,0x00	@ 0002560c data
.org 0x25610
	.byte 0xe0,0x32,0x00,0x03	@ 00025610 data
.org 0x25614
	.byte 0xff,0x7f,0x17,0x00	@ 00025614 data
.org 0x25618
	.byte 0xb0,0xe8,0x02,0x02	@ 00025618 data
.org 0x2561c
	cmp r0, #5	@ 0002561c 0528
.org 0x2561e
	bne.n 0x25644	@ 0002561e 11d1
.org 0x25620
	ldr r1, [r3, #84]	@ 00025620 596d
