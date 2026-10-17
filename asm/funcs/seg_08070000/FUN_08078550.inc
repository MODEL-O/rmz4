@ FUN_08078550  entry 0x08078550  size 142
.thumb
.org 0x78550
FUN_08078550:
	push {r4, lr}	@ 00078550 10b5
.org 0x78552
	adds r4, r0, #0	@ 00078552 041c
.org 0x78554
	ldrb r0, [r4, #15]	@ 00078554 e07b
.org 0x78556
	cmp r0, #0	@ 00078556 0028
.org 0x78558
	bne.n 0x7857c	@ 00078558 10d1
.org 0x7855a
	adds r2, r4, #0	@ 0007855a 221c
.org 0x7855c
	adds r2, #200	@ 0007855c c832
.org 0x7855e
	ldr r0, [r2, #0]	@ 0007855e 1068
.org 0x78560
	adds r0, #181	@ 00078560 b530
.org 0x78562
	movs r1, #3	@ 00078562 0321
.org 0x78564
	strb r1, [r0, #0]	@ 00078564 0170
.org 0x78566
	ldr r0, [r2, #0]	@ 00078566 1068
.org 0x78568
	adds r0, #182	@ 00078568 b630
.org 0x7856a
	movs r1, #1	@ 0007856a 0121
.org 0x7856c
	strb r1, [r0, #0]	@ 0007856c 0170
.org 0x7856e
	adds r0, r4, #0	@ 0007856e 201c
.org 0x78570
	movs r1, #0	@ 00078570 0021
.org 0x78572
	bl 0x78fdc	@ 00078572 00f033fd
.org 0x78576
	ldrb r0, [r4, #15]	@ 00078576 e07b
.org 0x78578
	adds r0, #1	@ 00078578 0130
.org 0x7857a
	strb r0, [r4, #15]	@ 0007857a e073
.org 0x7857c
	adds r0, r4, #0	@ 0007857c 201c
.org 0x7857e
	bl 0x1cff0	@ 0007857e a4f737fd
.org 0x78582
	adds r0, r4, #0	@ 00078582 201c
.org 0x78584
	adds r0, #116	@ 00078584 7430
.org 0x78586
	ldr r3, [pc, #88]	@ 00078586 164b
.org 0x78588
	ldr r2, [pc, #88]	@ 00078588 164a
.org 0x7858a
	adds r1, r4, #0	@ 0007858a 211c
.org 0x7858c
	adds r1, #196	@ 0007858c c431
.org 0x7858e
	ldrb r1, [r1, #0]	@ 0007858e 0978
.org 0x78590
	lsls r1, r1, #1	@ 00078590 4900
.org 0x78592
	adds r1, r1, r2	@ 00078592 8918
.org 0x78594
	ldrh r2, [r1, #0]	@ 00078594 0a88
.org 0x78596
	lsls r2, r2, #2	@ 00078596 9200
.org 0x78598
	adds r2, r2, r3	@ 00078598 d218
.org 0x7859a
	adds r1, r4, #0	@ 0007859a 211c
.org 0x7859c
	adds r1, #113	@ 0007859c 7131
.org 0x7859e
	ldrb r1, [r1, #0]	@ 0007859e 0978
.org 0x785a0
	lsls r1, r1, #24	@ 000785a0 0906
.org 0x785a2
	asrs r1, r1, #24	@ 000785a2 0916
.org 0x785a4
	ldr r2, [r2, #0]	@ 000785a4 1268
.org 0x785a6
	lsls r1, r1, #2	@ 000785a6 8900
.org 0x785a8
	adds r1, r1, r2	@ 000785a8 8918
.org 0x785aa
	ldr r1, [r1, #0]	@ 000785aa 0968
.org 0x785ac
	bl 0x5784	@ 000785ac 8df7eaf8
.org 0x785b0
	adds r0, r4, #0	@ 000785b0 201c
.org 0x785b2
	bl 0x78f28	@ 000785b2 00f0b9fc
.org 0x785b6
	adds r0, r4, #0	@ 000785b6 201c
.org 0x785b8
	adds r0, #200	@ 000785b8 c830
.org 0x785ba
	ldr r1, [r0, #0]	@ 000785ba 0168
.org 0x785bc
	adds r0, r1, #0	@ 000785bc 081c
.org 0x785be
	adds r0, #180	@ 000785be b430
.org 0x785c0
	ldrb r0, [r0, #0]	@ 000785c0 0078
.org 0x785c2
	cmp r0, #0	@ 000785c2 0028
.org 0x785c4
	beq.n 0x785d8	@ 000785c4 08d0
.org 0x785c6
	adds r0, r1, #0	@ 000785c6 081c
.org 0x785c8
	adds r0, #182	@ 000785c8 b630
.org 0x785ca
	ldrb r1, [r0, #0]	@ 000785ca 0178
.org 0x785cc
	cmp r1, #0	@ 000785cc 0029
.org 0x785ce
	bne.n 0x785d8	@ 000785ce 03d1
.org 0x785d0
	ldrb r0, [r4, #14]	@ 000785d0 a07b
.org 0x785d2
	adds r0, #1	@ 000785d2 0130
.org 0x785d4
	strb r0, [r4, #14]	@ 000785d4 a073
.org 0x785d6
	strb r1, [r4, #15]	@ 000785d6 e173
.org 0x785d8
	pop {r4}	@ 000785d8 10bc
.org 0x785da
	pop {r0}	@ 000785da 01bc
.org 0x785dc
	bx r0	@ 000785dc 0047
