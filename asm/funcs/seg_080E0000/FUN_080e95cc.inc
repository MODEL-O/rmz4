@ FUN_080e95cc  entry 0x080e95cc  size 298
.thumb
.org 0xe95cc
FUN_080e95cc:
	push {r4, r5, r6, r7, lr}	@ 000e95cc f0b5
.org 0xe95ce
	adds r6, r0, #0	@ 000e95ce 061c
.org 0xe95d0
	ldrb r4, [r6, #16]	@ 000e95d0 347c
.org 0xe95d2
	adds r4, #8	@ 000e95d2 0834
.org 0xe95d4
	lsls r5, r4, #2	@ 000e95d4 a500
.org 0xe95d6
	adds r5, r5, r4	@ 000e95d6 2d19
.org 0xe95d8
	lsls r5, r5, #2	@ 000e95d8 ad00
.org 0xe95da
	ldr r0, [pc, #284]	@ 000e95da 4748
.org 0xe95dc
	adds r0, r5, r0	@ 000e95dc 2818
.org 0xe95de
	ldr r1, [pc, #284]	@ 000e95de 4749
.org 0xe95e0
	lsls r4, r4, #1	@ 000e95e0 6400
.org 0xe95e2
	adds r1, r4, r1	@ 000e95e2 6118
.org 0xe95e4
	ldrh r1, [r1, #0]	@ 000e95e4 0988
.org 0xe95e6
	ldrh r2, [r0, #6]	@ 000e95e6 c288
.org 0xe95e8
	lsrs r2, r2, #6	@ 000e95e8 9209
.org 0xe95ea
	subs r1, r1, r2	@ 000e95ea 891a
.org 0xe95ec
	lsls r1, r1, #5	@ 000e95ec 4901
.org 0xe95ee
	movs r2, #128	@ 000e95ee 8022
.org 0xe95f0
	lsls r2, r2, #9	@ 000e95f0 5202
.org 0xe95f2
	adds r1, r1, r2	@ 000e95f2 8918
.org 0xe95f4
	bl 0x1d30	@ 000e95f4 18f79cfb
.org 0xe95f8
	ldr r0, [pc, #260]	@ 000e95f8 4148
.org 0xe95fa
	adds r5, r5, r0	@ 000e95fa 2d18
.org 0xe95fc
	ldr r0, [pc, #260]	@ 000e95fc 4148
.org 0xe95fe
	adds r4, r4, r0	@ 000e95fe 2418
.org 0xe9600
	ldrh r1, [r4, #0]	@ 000e9600 2188
.org 0xe9602
	ldrb r0, [r5, #7]	@ 000e9602 e879
.org 0xe9604
	subs r1, r1, r0	@ 000e9604 091a
.org 0xe9606
	lsls r1, r1, #5	@ 000e9606 4901
.org 0xe9608
	movs r2, #128	@ 000e9608 8022
.org 0xe960a
	lsls r2, r2, #2	@ 000e960a 9200
.org 0xe960c
	adds r1, r1, r2	@ 000e960c 8918
.org 0xe960e
	adds r0, r5, #0	@ 000e960e 281c
.org 0xe9610
	bl 0x2208	@ 000e9610 18f7fafd
.org 0xe9614
	adds r0, r6, #0	@ 000e9614 301c
.org 0xe9616
	bl 0x1cc9c	@ 000e9616 33f741fb
.org 0xe961a
	ldrb r1, [r6, #10]	@ 000e961a b17a
.org 0xe961c
	movs r0, #1	@ 000e961c 0120
.org 0xe961e
	orrs r0, r1	@ 000e961e 0843
.org 0xe9620
	movs r1, #2	@ 000e9620 0221
.org 0xe9622
	orrs r0, r1	@ 000e9622 0843
.org 0xe9624
	strb r0, [r6, #10]	@ 000e9624 b072
.org 0xe9626
	movs r1, #128	@ 000e9626 8021
.org 0xe9628
	lsls r1, r1, #4	@ 000e9628 0901
.org 0xe962a
	adds r0, r6, #0	@ 000e962a 301c
.org 0xe962c
	bl 0x1cf00	@ 000e962c 33f768fc
.org 0xe9630
	movs r5, #0	@ 000e9630 0025
.org 0xe9632
	ldrb r1, [r6, #10]	@ 000e9632 b17a
.org 0xe9634
	movs r0, #239	@ 000e9634 ef20
.org 0xe9636
	ands r0, r1	@ 000e9636 0840
.org 0xe9638
	strb r0, [r6, #10]	@ 000e9638 b072
.org 0xe963a
	movs r7, #1	@ 000e963a 0127
.org 0xe963c
	adds r0, r6, #0	@ 000e963c 301c
.org 0xe963e
	adds r0, #76	@ 000e963e 4c30
.org 0xe9640
	strb r5, [r0, #0]	@ 000e9640 0570
.org 0xe9642
	adds r2, r6, #0	@ 000e9642 321c
.org 0xe9644
	adds r2, #74	@ 000e9644 4a32
.org 0xe9646
	ldrb r1, [r2, #0]	@ 000e9646 1178
.org 0xe9648
	movs r0, #17	@ 000e9648 1120
.org 0xe964a
	negs r0, r0	@ 000e964a 4042
.org 0xe964c
	ands r0, r1	@ 000e964c 0840
.org 0xe964e
	strb r0, [r2, #0]	@ 000e964e 1070
.org 0xe9650
	ldrb r0, [r6, #10]	@ 000e9650 b07a
.org 0xe9652
	movs r1, #4	@ 000e9652 0421
.org 0xe9654
	orrs r0, r1	@ 000e9654 0843
.org 0xe9656
	strb r0, [r6, #10]	@ 000e9656 b072
.org 0xe9658
	adds r4, r6, #0	@ 000e9658 341c
.org 0xe965a
	adds r4, #116	@ 000e965a 7434
.org 0xe965c
	ldr r1, [pc, #168]	@ 000e965c 2a49
.org 0xe965e
	adds r2, #10	@ 000e965e 0a32
.org 0xe9660
	adds r0, r4, #0	@ 000e9660 201c
.org 0xe9662
	movs r3, #6	@ 000e9662 0623
.org 0xe9664
	bl 0x5760	@ 000e9664 1cf77cf8
.org 0xe9668
	str r6, [r4, #44]	@ 000e9668 e662
.org 0xe966a
	str r5, [r4, #36]	@ 000e966a 6562
.org 0xe966c
	ldrb r1, [r6, #11]	@ 000e966c f17a
.org 0xe966e
	movs r0, #8	@ 000e966e 0820
.org 0xe9670
	orrs r0, r1	@ 000e9670 0843
.org 0xe9672
	strb r0, [r6, #11]	@ 000e9672 f072
.org 0xe9674
	ldr r0, [pc, #148]	@ 000e9674 2548
.org 0xe9676
	str r0, [r6, #48]	@ 000e9676 3063
.org 0xe9678
	strh r7, [r6, #38]	@ 000e9678 f784
.org 0xe967a
	ldr r0, [r6, #84]	@ 000e967a 706d
.org 0xe967c
	ldr r1, [r6, #88]	@ 000e967c b16d
.org 0xe967e
	bl 0x8534	@ 000e967e 1ef759ff
.org 0xe9682
	adds r1, r0, #0	@ 000e9682 011c
.org 0xe9684
	str r1, [r6, #88]	@ 000e9684 b165
.org 0xe9686
	ldr r0, [r6, #84]	@ 000e9686 706d
.org 0xe9688
	ldr r2, [pc, #132]	@ 000e9688 214a
.org 0xe968a
	adds r0, r0, r2	@ 000e968a 8018
.org 0xe968c
	bl 0x7c7c	@ 000e968c 1ef7f6fa
.org 0xe9690
	lsls r0, r0, #16	@ 000e9690 0004
.org 0xe9692
	cmp r0, #0	@ 000e9692 0028
.org 0xe9694
	beq.n 0xe96ac	@ 000e9694 0ad0
.org 0xe9696
	ldr r0, [r6, #84]	@ 000e9696 706d
.org 0xe9698
	ldr r1, [pc, #116]	@ 000e9698 1d49
.org 0xe969a
	adds r0, r0, r1	@ 000e969a 4018
.org 0xe969c
	ldr r1, [r6, #88]	@ 000e969c b16d
.org 0xe969e
	bl 0x834c	@ 000e969e 1ef755fe
.org 0xe96a2
	ldr r1, [r6, #84]	@ 000e96a2 716d
.org 0xe96a4
	ldr r2, [pc, #108]	@ 000e96a4 1b4a
.org 0xe96a6
	adds r1, r1, r2	@ 000e96a6 8918
.org 0xe96a8
	adds r1, r1, r0	@ 000e96a8 0918
.org 0xe96aa
	str r1, [r6, #84]	@ 000e96aa 7165
.org 0xe96ac
	ldr r0, [r6, #84]	@ 000e96ac 706d
.org 0xe96ae
	movs r1, #192	@ 000e96ae c021
.org 0xe96b0
	lsls r1, r1, #4	@ 000e96b0 0901
.org 0xe96b2
	adds r0, r0, r1	@ 000e96b2 4018
.org 0xe96b4
	ldr r1, [r6, #88]	@ 000e96b4 b16d
.org 0xe96b6
	bl 0x7c7c	@ 000e96b6 1ef7e1fa
.org 0xe96ba
	lsls r0, r0, #16	@ 000e96ba 0004
.org 0xe96bc
	cmp r0, #0	@ 000e96bc 0028
.org 0xe96be
	beq.n 0xe96da	@ 000e96be 0cd0
.org 0xe96c0
	ldr r0, [r6, #84]	@ 000e96c0 706d
.org 0xe96c2
	movs r2, #192	@ 000e96c2 c022
.org 0xe96c4
	lsls r2, r2, #4	@ 000e96c4 1201
.org 0xe96c6
	adds r0, r0, r2	@ 000e96c6 8018
.org 0xe96c8
	ldr r1, [r6, #88]	@ 000e96c8 b16d
.org 0xe96ca
	bl 0x816c	@ 000e96ca 1ef74ffd
.org 0xe96ce
	ldr r1, [r6, #84]	@ 000e96ce 716d
.org 0xe96d0
	movs r2, #128	@ 000e96d0 8022
.org 0xe96d2
	lsls r2, r2, #1	@ 000e96d2 5200
.org 0xe96d4
	adds r1, r1, r2	@ 000e96d4 8918
.org 0xe96d6
	adds r1, r1, r0	@ 000e96d6 0918
.org 0xe96d8
	str r1, [r6, #84]	@ 000e96d8 7165
.org 0xe96da
	ldr r1, [pc, #60]	@ 000e96da 0f49
.org 0xe96dc
	ldrb r0, [r6, #9]	@ 000e96dc 707a
.org 0xe96de
	lsls r0, r0, #2	@ 000e96de 8000
.org 0xe96e0
	adds r0, r0, r1	@ 000e96e0 4018
.org 0xe96e2
	str r7, [r6, #12]	@ 000e96e2 f760
.org 0xe96e4
	ldr r0, [r0, #0]	@ 000e96e4 0068
.org 0xe96e6
	ldr r0, [r0, #4]	@ 000e96e6 4068
.org 0xe96e8
	str r0, [r6, #20]	@ 000e96e8 7061
.org 0xe96ea
	adds r0, r6, #0	@ 000e96ea 301c
.org 0xe96ec
	bl 0xe971c	@ 000e96ec 00f016f8
.org 0xe96f0
	pop {r4, r5, r6, r7}	@ 000e96f0 f0bc
.org 0xe96f2
	pop {r0}	@ 000e96f2 01bc
.org 0xe96f4
	bx r0	@ 000e96f4 0047
