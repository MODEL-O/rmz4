@ FUN_0802657c  entry 0x0802657c  size 240
.thumb
.org 0x2657c
FUN_0802657c:
	push {r4, r5, lr}	@ 0002657c 30b5
.org 0x2657e
	adds r2, r0, #0	@ 0002657e 021c
.org 0x26580
	ldr r3, [r2, #32]	@ 00026580 136a
.org 0x26582
	movs r0, #190	@ 00026582 be20
.org 0x26584
	lsls r0, r0, #1	@ 00026584 4000
.org 0x26586
	adds r5, r2, r0	@ 00026586 1518
.org 0x26588
	ldrb r0, [r5, #0]	@ 00026588 2878
.org 0x2658a
	cmp r0, #0	@ 0002658a 0028
.org 0x2658c
	bne.n 0x26604	@ 0002658c 3ad1
.org 0x2658e
	ldr r3, [pc, #48]	@ 0002658e 0c4b
.org 0x26590
	ldrh r1, [r3, #8]	@ 00026590 1989
.org 0x26592
	movs r0, #1	@ 00026592 0120
.org 0x26594
	orrs r0, r1	@ 00026594 0843
.org 0x26596
	strh r0, [r3, #8]	@ 00026596 1881
.org 0x26598
	ldr r2, [pc, #40]	@ 00026598 0a4a
.org 0x2659a
	ldrb r1, [r2, #4]	@ 0002659a 1179
.org 0x2659c
	movs r0, #8	@ 0002659c 0820
.org 0x2659e
	orrs r0, r1	@ 0002659e 0843
.org 0x265a0
	strb r0, [r2, #4]	@ 000265a0 1071
.org 0x265a2
	ldrb r4, [r3, #2]	@ 000265a2 9c78
.org 0x265a4
	cmp r4, #0	@ 000265a4 002c
.org 0x265a6
	bne.n 0x265cc	@ 000265a6 11d1
.org 0x265a8
	adds r0, r3, #0	@ 000265a8 181c
.org 0x265aa
	adds r0, #16	@ 000265aa 1030
.org 0x265ac
	ldr r1, [pc, #24]	@ 000265ac 0649
.org 0x265ae
	ldr r1, [r1, #60]	@ 000265ae c96b
.org 0x265b0
	ldr r1, [r1, #36]	@ 000265b0 496a
.org 0x265b2
	bl 0x275f0	@ 000265b2 01f01df8
.org 0x265b6
	movs r0, #2	@ 000265b6 0220
.org 0x265b8
	bl 0x1f63c	@ 000265b8 f9f740f8
.org 0x265bc
	movs r0, #2	@ 000265bc 0220
.org 0x265be
	b.n 0x26686	@ 000265be 62e0
.org 0x265c0
	.byte 0x10,0xe9,0x02,0x02	@ 000265c0 data
.org 0x265c4
	.byte 0xb0,0xe8,0x02,0x02	@ 000265c4 data
.org 0x265c8
	.byte 0xf8,0x2c,0x84,0x08	@ 000265c8 data
.org 0x265cc
	cmp r4, #2	@ 000265cc 022c
.org 0x265ce
	bne.n 0x265e8	@ 000265ce 0bd1
.org 0x265d0
	adds r0, r3, #0	@ 000265d0 181c
.org 0x265d2
	adds r0, #16	@ 000265d2 1030
.org 0x265d4
	ldr r1, [pc, #12]	@ 000265d4 0349
.org 0x265d6
	ldr r1, [r1, #60]	@ 000265d6 c96b
.org 0x265d8
	ldr r1, [r1, #8]	@ 000265d8 8968
.org 0x265da
	bl 0x275f0	@ 000265da 01f009f8
.org 0x265de
	strb r4, [r5, #0]	@ 000265de 2c70
.org 0x265e0
	b.n 0x26688	@ 000265e0 52e0
.org 0x265e2
	.byte 0x00	@ 000265e2 data
.org 0x265e3
	.byte 0x00	@ 000265e3 data
.org 0x265e4
	.byte 0xf8,0x2c,0x84,0x08	@ 000265e4 data
.org 0x265e8
	cmp r4, #3	@ 000265e8 032c
.org 0x265ea
	bne.n 0x26688	@ 000265ea 4dd1
.org 0x265ec
	adds r0, r3, #0	@ 000265ec 181c
.org 0x265ee
	adds r0, #16	@ 000265ee 1030
.org 0x265f0
	ldr r1, [pc, #12]	@ 000265f0 0349
.org 0x265f2
	ldr r1, [r1, #60]	@ 000265f2 c96b
.org 0x265f4
	ldr r1, [r1, #12]	@ 000265f4 c968
.org 0x265f6
	bl 0x275f0	@ 000265f6 00f0fbff
.org 0x265fa
	movs r0, #4	@ 000265fa 0420
.org 0x265fc
	b.n 0x26686	@ 000265fc 43e0
.org 0x265fe
	.byte 0x00	@ 000265fe data
.org 0x265ff
	.byte 0x00	@ 000265ff data
.org 0x26600
	.byte 0xf8,0x2c,0x84,0x08	@ 00026600 data
.org 0x26604
	cmp r0, #2	@ 00026604 0228
.org 0x26606
	bne.n 0x26616	@ 00026606 06d1
.org 0x26608
	ldr r1, [r3, #84]	@ 00026608 596d
.org 0x2660a
	movs r0, #254	@ 0002660a fe20
.org 0x2660c
	lsls r0, r0, #12	@ 0002660c 0003
.org 0x2660e
	cmp r1, r0	@ 0002660e 8142
.org 0x26610
	ble.n 0x26616	@ 00026610 01dd
.org 0x26612
	movs r0, #3	@ 00026612 0320
.org 0x26614
	b.n 0x26686	@ 00026614 37e0
.org 0x26616
	movs r0, #190	@ 00026616 be20
.org 0x26618
	lsls r0, r0, #1	@ 00026618 4000
.org 0x2661a
	adds r5, r2, r0	@ 0002661a 1518
.org 0x2661c
	ldrb r0, [r5, #0]	@ 0002661c 2878
.org 0x2661e
	cmp r0, #3	@ 0002661e 0328
.org 0x26620
	bne.n 0x2662c	@ 00026620 04d1
.org 0x26622
	movs r0, #3	@ 00026622 0320
.org 0x26624
	bl 0x1f63c	@ 00026624 f9f70af8
.org 0x26628
	movs r0, #4	@ 00026628 0420
.org 0x2662a
	b.n 0x26686	@ 0002662a 2ce0
.org 0x2662c
	cmp r0, #4	@ 0002662c 0428
.org 0x2662e
	bne.n 0x26660	@ 0002662e 17d1
.org 0x26630
	ldr r1, [r3, #84]	@ 00026630 596d
.org 0x26632
	ldr r0, [pc, #32]	@ 00026632 0848
.org 0x26634
	cmp r1, r0	@ 00026634 8142
.org 0x26636
	ble.n 0x26642	@ 00026636 04dd
.org 0x26638
	ldr r2, [pc, #28]	@ 00026638 074a
.org 0x2663a
	ldrb r1, [r2, #1]	@ 0002663a 5178
.org 0x2663c
	movs r0, #2	@ 0002663c 0220
.org 0x2663e
	orrs r0, r1	@ 0002663e 0843
.org 0x26640
	strb r0, [r2, #1]	@ 00026640 5070
.org 0x26642
	ldr r1, [r3, #84]	@ 00026642 596d
.org 0x26644
	ldr r0, [pc, #20]	@ 00026644 0548
.org 0x26646
	cmp r1, r0	@ 00026646 8142
.org 0x26648
	ble.n 0x26688	@ 00026648 1edd
.org 0x2664a
	ldr r0, [pc, #12]	@ 0002664a 0348
.org 0x2664c
	movs r1, #0	@ 0002664c 0021
.org 0x2664e
	strb r1, [r0, #1]	@ 0002664e 4170
.org 0x26650
	movs r0, #5	@ 00026650 0520
.org 0x26652
	b.n 0x26686	@ 00026652 18e0
.org 0x26654
	.byte 0xff,0xff,0x1c,0x00	@ 00026654 data
.org 0x26658
	.byte 0xe0,0x32,0x00,0x03	@ 00026658 data
.org 0x2665c
	.byte 0xff,0x1f,0x1d,0x00	@ 0002665c data
.org 0x26660
	cmp r0, #5	@ 00026660 0528
.org 0x26662
	bne.n 0x26688	@ 00026662 11d1
.org 0x26664
	ldr r1, [r3, #88]	@ 00026664 996d
.org 0x26666
	ldr r0, [pc, #40]	@ 00026666 0a48
.org 0x26668
	cmp r1, r0	@ 00026668 8142
.org 0x2666a
	ble.n 0x26688	@ 0002666a 0ddd
