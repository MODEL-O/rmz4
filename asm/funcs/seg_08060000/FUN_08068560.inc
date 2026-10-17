@ FUN_08068560  entry 0x08068560  size 200
.thumb
.org 0x68560
FUN_08068560:
	push {r4, lr}	@ 00068560 10b5
.org 0x68562
	adds r4, r0, #0	@ 00068562 041c
.org 0x68564
	ldrb r0, [r4, #14]	@ 00068564 a07b
.org 0x68566
	cmp r0, #0	@ 00068566 0028
.org 0x68568
	bne.n 0x685d8	@ 00068568 36d1
.org 0x6856a
	ldr r1, [pc, #64]	@ 0006856a 1049
.org 0x6856c
	adds r0, r4, #0	@ 0006856c 201c
.org 0x6856e
	bl 0x1cf00	@ 0006856e b4f7c7fc
.org 0x68572
	movs r0, #96	@ 00068572 6020
.org 0x68574
	bl 0x2b10	@ 00068574 9af7ccfa
.org 0x68578
	movs r0, #97	@ 00068578 6120
.org 0x6857a
	bl 0x2b10	@ 0006857a 9af7c9fa
.org 0x6857e
	adds r1, r4, #0	@ 0006857e 211c
.org 0x68580
	adds r1, #180	@ 00068580 b431
.org 0x68582
	movs r0, #97	@ 00068582 6120
.org 0x68584
	strh r0, [r1, #44]	@ 00068584 8885
.org 0x68586
	ldr r1, [r1, #16]	@ 00068586 0969
.org 0x68588
	ldr r0, [r4, #84]	@ 00068588 606d
.org 0x6858a
	cmp r1, r0	@ 0006858a 8142
.org 0x6858c
	ble.n 0x685b0	@ 0006858c 10dd
.org 0x6858e
	adds r1, r4, #0	@ 0006858e 211c
.org 0x68590
	adds r1, #76	@ 00068590 4c31
.org 0x68592
	movs r0, #1	@ 00068592 0120
.org 0x68594
	strb r0, [r1, #0]	@ 00068594 0870
.org 0x68596
	adds r2, r4, #0	@ 00068596 221c
.org 0x68598
	adds r2, #74	@ 00068598 4a32
.org 0x6859a
	ldrb r0, [r2, #0]	@ 0006859a 1078
.org 0x6859c
	movs r1, #16	@ 0006859c 1021
.org 0x6859e
	orrs r0, r1	@ 0006859e 0843
.org 0x685a0
	strb r0, [r2, #0]	@ 000685a0 1070
.org 0x685a2
	ldrb r0, [r4, #10]	@ 000685a2 a07a
.org 0x685a4
	orrs r1, r0	@ 000685a4 0143
.org 0x685a6
	strb r1, [r4, #10]	@ 000685a6 a172
.org 0x685a8
	b.n 0x685ce	@ 000685a8 11e0
.org 0x685aa
	.byte 0x00	@ 000685aa data
.org 0x685ab
	.byte 0x00	@ 000685ab data
.org 0x685ac
	.byte 0x0c,0xa9,0x00,0x00	@ 000685ac data
.org 0x685b0
	adds r1, r4, #0	@ 000685b0 211c
.org 0x685b2
	adds r1, #76	@ 000685b2 4c31
.org 0x685b4
	movs r0, #0	@ 000685b4 0020
.org 0x685b6
	strb r0, [r1, #0]	@ 000685b6 0870
.org 0x685b8
	adds r2, r4, #0	@ 000685b8 221c
.org 0x685ba
	adds r2, #74	@ 000685ba 4a32
.org 0x685bc
	ldrb r1, [r2, #0]	@ 000685bc 1178
.org 0x685be
	movs r0, #17	@ 000685be 1120
.org 0x685c0
	negs r0, r0	@ 000685c0 4042
.org 0x685c2
	ands r0, r1	@ 000685c2 0840
.org 0x685c4
	strb r0, [r2, #0]	@ 000685c4 1070
.org 0x685c6
	ldrb r1, [r4, #10]	@ 000685c6 a17a
.org 0x685c8
	movs r0, #239	@ 000685c8 ef20
.org 0x685ca
	ands r0, r1	@ 000685ca 0840
.org 0x685cc
	strb r0, [r4, #10]	@ 000685cc a072
.org 0x685ce
	movs r0, #0	@ 000685ce 0020
.org 0x685d0
	strb r0, [r4, #15]	@ 000685d0 e073
.org 0x685d2
	ldrb r0, [r4, #14]	@ 000685d2 a07b
.org 0x685d4
	adds r0, #1	@ 000685d4 0130
.org 0x685d6
	strb r0, [r4, #14]	@ 000685d6 a073
.org 0x685d8
	adds r0, r4, #0	@ 000685d8 201c
.org 0x685da
	bl 0x1cff0	@ 000685da b4f709fd
.org 0x685de
	ldrb r0, [r4, #15]	@ 000685de e07b
.org 0x685e0
	cmp r0, #0	@ 000685e0 0028
.org 0x685e2
	bne.n 0x6861c	@ 000685e2 1bd1
.org 0x685e4
	adds r0, r4, #0	@ 000685e4 201c
.org 0x685e6
	adds r0, #113	@ 000685e6 7130
.org 0x685e8
	ldrb r0, [r0, #0]	@ 000685e8 0078
.org 0x685ea
	lsls r0, r0, #24	@ 000685ea 0006
.org 0x685ec
	asrs r0, r0, #24	@ 000685ec 0016
.org 0x685ee
	cmp r0, #4	@ 000685ee 0428
.org 0x685f0
	ble.n 0x6862c	@ 000685f0 1cdd
.org 0x685f2
	ldrb r3, [r4, #10]	@ 000685f2 a37a
.org 0x685f4
	lsrs r3, r3, #4	@ 000685f4 1b09
.org 0x685f6
	movs r0, #1	@ 000685f6 0120
.org 0x685f8
	ands r3, r0	@ 000685f8 0340
.org 0x685fa
	adds r0, r4, #0	@ 000685fa 201c
.org 0x685fc
	movs r1, #1	@ 000685fc 0121
.org 0x685fe
	movs r2, #0	@ 000685fe 0022
.org 0x68600
	bl 0x9c494	@ 00068600 33f048ff
.org 0x68604
	str r0, [r4, #44]	@ 00068604 e062
.org 0x68606
	adds r0, r4, #0	@ 00068606 201c
.org 0x68608
	adds r0, #116	@ 00068608 7430
.org 0x6860a
	ldr r1, [pc, #12]	@ 0006860a 0349
.org 0x6860c
	bl 0x5784	@ 0006860c 9df7baf8
.org 0x68610
	ldrb r0, [r4, #15]	@ 00068610 e07b
.org 0x68612
	adds r0, #1	@ 00068612 0130
.org 0x68614
	strb r0, [r4, #15]	@ 00068614 e073
.org 0x68616
	b.n 0x6862c	@ 00068616 09e0
.org 0x68618
	.byte 0x8c,0xb2,0x85,0x08	@ 00068618 data
.org 0x6861c
	ldr r0, [r4, #44]	@ 0006861c e06a
.org 0x6861e
	ldrb r0, [r0, #13]	@ 0006861e 407b
.org 0x68620
	cmp r0, #0	@ 00068620 0028
.org 0x68622
	beq.n 0x6862c	@ 00068622 03d0
.org 0x68624
	movs r1, #0	@ 00068624 0021
.org 0x68626
	movs r0, #36	@ 00068626 2420
