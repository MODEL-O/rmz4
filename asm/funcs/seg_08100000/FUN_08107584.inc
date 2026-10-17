@ FUN_08107584  entry 0x08107584  size 228
.thumb
.org 0x107584
FUN_08107584:
	push {r4, r5, lr}	@ 00107584 30b5
.org 0x107586
	adds r5, r0, #0	@ 00107586 051c
.org 0x107588
	ldrb r0, [r5, #13]	@ 00107588 687b
.org 0x10758a
	cmp r0, #0	@ 0010758a 0028
.org 0x10758c
	beq.n 0x107594	@ 0010758c 02d0
.org 0x10758e
	cmp r0, #1	@ 0010758e 0128
.org 0x107590
	beq.n 0x1075f2	@ 00107590 2fd0
.org 0x107592
	b.n 0x107660	@ 00107592 65e0
.org 0x107594
	ldr r0, [pc, #116]	@ 00107594 1d48
.org 0x107596
	movs r1, #160	@ 00107596 a021
.org 0x107598
	lsls r1, r1, #2	@ 00107598 8900
.org 0x10759a
	strh r1, [r0, #26]	@ 0010759a 4183
.org 0x10759c
	ldr r4, [pc, #112]	@ 0010759c 1c4c
.org 0x10759e
	movs r0, #7	@ 0010759e 0720
.org 0x1075a0
	strh r0, [r4, #26]	@ 001075a0 6083
.org 0x1075a2
	ldr r0, [pc, #112]	@ 001075a2 1c48
.org 0x1075a4
	ldrh r2, [r0, #6]	@ 001075a4 c288
.org 0x1075a6
	lsrs r2, r2, #6	@ 001075a6 9209
.org 0x1075a8
	subs r1, r1, r2	@ 001075a8 891a
.org 0x1075aa
	lsls r1, r1, #5	@ 001075aa 4901
.org 0x1075ac
	movs r2, #128	@ 001075ac 8022
.org 0x1075ae
	lsls r2, r2, #9	@ 001075ae 5202
.org 0x1075b0
	adds r1, r1, r2	@ 001075b0 8918
.org 0x1075b2
	bl 0x1d30	@ 001075b2 faf6bdfb
.org 0x1075b6
	ldr r0, [pc, #96]	@ 001075b6 1848
.org 0x1075b8
	ldrh r1, [r4, #26]	@ 001075b8 618b
.org 0x1075ba
	ldrb r2, [r0, #7]	@ 001075ba c279
.org 0x1075bc
	subs r1, r1, r2	@ 001075bc 891a
.org 0x1075be
	lsls r1, r1, #5	@ 001075be 4901
.org 0x1075c0
	movs r2, #128	@ 001075c0 8022
.org 0x1075c2
	lsls r2, r2, #2	@ 001075c2 9200
.org 0x1075c4
	adds r1, r1, r2	@ 001075c4 8918
.org 0x1075c6
	bl 0x2208	@ 001075c6 faf61ffe
.org 0x1075ca
	movs r1, #208	@ 001075ca d021
.org 0x1075cc
	lsls r1, r1, #4	@ 001075cc 0901
.org 0x1075ce
	adds r0, r5, #0	@ 001075ce 281c
.org 0x1075d0
	bl 0x1cf00	@ 001075d0 15f796fc
.org 0x1075d4
	ldr r1, [r5, #40]	@ 001075d4 a96a
.org 0x1075d6
	ldr r0, [r1, #84]	@ 001075d6 486d
.org 0x1075d8
	movs r2, #144	@ 001075d8 9022
.org 0x1075da
	lsls r2, r2, #5	@ 001075da 5201
.org 0x1075dc
	adds r0, r0, r2	@ 001075dc 8018
.org 0x1075de
	str r0, [r5, #84]	@ 001075de 6865
.org 0x1075e0
	ldr r0, [r1, #88]	@ 001075e0 886d
.org 0x1075e2
	ldr r1, [pc, #56]	@ 001075e2 0e49
.org 0x1075e4
	adds r0, r0, r1	@ 001075e4 4018
.org 0x1075e6
	str r0, [r5, #88]	@ 001075e6 a865
.org 0x1075e8
	ldr r0, [pc, #52]	@ 001075e8 0d48
.org 0x1075ea
	str r0, [r5, #96]	@ 001075ea 2866
.org 0x1075ec
	ldrb r0, [r5, #13]	@ 001075ec 687b
.org 0x1075ee
	adds r0, #1	@ 001075ee 0130
.org 0x1075f0
	strb r0, [r5, #13]	@ 001075f0 6873
.org 0x1075f2
	adds r0, r5, #0	@ 001075f2 281c
.org 0x1075f4
	bl 0x1cff0	@ 001075f4 15f7fcfc
.org 0x1075f8
	ldr r0, [r5, #96]	@ 001075f8 286e
.org 0x1075fa
	cmp r0, #0	@ 001075fa 0028
.org 0x1075fc
	bge.n 0x107624	@ 001075fc 12da
.org 0x1075fe
	adds r0, #64	@ 001075fe 4030
.org 0x107600
	str r0, [r5, #96]	@ 00107600 2866
.org 0x107602
	ldr r0, [r5, #84]	@ 00107602 686d
.org 0x107604
	movs r2, #160	@ 00107604 a022
.org 0x107606
	lsls r2, r2, #1	@ 00107606 5200
.org 0x107608
	adds r0, r0, r2	@ 00107608 8018
.org 0x10760a
	b.n 0x107656	@ 0010760a 24e0
.org 0x10760c
	.byte 0x40,0xe0,0x02,0x02	@ 0010760c data
.org 0x107610
	.byte 0x40,0xde,0x02,0x02	@ 00107610 data
.org 0x107614
	.byte 0x04,0x41,0xc4,0x08	@ 00107614 data
.org 0x107618
	.byte 0x10,0x41,0xc4,0x08	@ 00107618 data
.org 0x10761c
	.byte 0x00,0xec,0xff,0xff	@ 0010761c data
.org 0x107620
	.byte 0x00,0xfa,0xff,0xff	@ 00107620 data
.org 0x107624
	ldrb r0, [r5, #30]	@ 00107624 a87f
.org 0x107626
	lsls r0, r0, #8	@ 00107626 0002
.org 0x107628
	adds r1, r5, #0	@ 00107628 291c
.org 0x10762a
	adds r1, #112	@ 0010762a 7031
.org 0x10762c
	ldrb r1, [r1, #0]	@ 0010762c 0978
.org 0x10762e
	orrs r0, r1	@ 0010762e 0843
.org 0x107630
	ldr r4, [pc, #76]	@ 00107630 134c
.org 0x107632
	cmp r0, r4	@ 00107632 a042
.org 0x107634
	beq.n 0x10764c	@ 00107634 0ad0
.org 0x107636
	movs r0, #53	@ 00107636 3520
.org 0x107638
	bl 0x2b10	@ 00107638 fbf66afa
.org 0x10763c
	movs r0, #153	@ 0010763c 9920
.org 0x10763e
	lsls r0, r0, #1	@ 0010763e 4000
.org 0x107640
	bl 0x2b10	@ 00107640 fbf666fa
.org 0x107644
	adds r0, r5, #0	@ 00107644 281c
.org 0x107646
	adds r1, r4, #0	@ 00107646 211c
.org 0x107648
	bl 0x1cf00	@ 00107648 15f75afc
.org 0x10764c
	ldr r0, [r5, #96]	@ 0010764c 286e
.org 0x10764e
	adds r0, #4	@ 0010764e 0430
.org 0x107650
	str r0, [r5, #96]	@ 00107650 2866
.org 0x107652
	ldr r0, [r5, #84]	@ 00107652 686d
.org 0x107654
	adds r0, #20	@ 00107654 1430
.org 0x107656
	str r0, [r5, #84]	@ 00107656 6865
.org 0x107658
	ldr r0, [r5, #88]	@ 00107658 a86d
.org 0x10765a
	ldr r1, [r5, #96]	@ 0010765a 296e
.org 0x10765c
	adds r0, r0, r1	@ 0010765c 4018
.org 0x10765e
	str r0, [r5, #88]	@ 0010765e a865
.org 0x107660
	ldr r0, [r5, #40]	@ 00107660 a86a
.org 0x107662
	ldrb r0, [r0, #12]	@ 00107662 007b
.org 0x107664
	cmp r0, #1	@ 00107664 0128
.org 0x107666
	bls.n 0x10767a	@ 00107666 08d9
