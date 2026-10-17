@ FUN_080ff6a4  entry 0x080ff6a4  size 378
.thumb
.org 0xff6a4
FUN_080ff6a4:
	push {r4, r5, r6, r7, lr}	@ 000ff6a4 f0b5
.org 0xff6a6
	adds r4, r0, #0	@ 000ff6a6 041c
.org 0xff6a8
	ldr r2, [r4, #44]	@ 000ff6a8 e26a
.org 0xff6aa
	ldr r7, [r4, #40]	@ 000ff6aa a76a
.org 0xff6ac
	ldrb r0, [r7, #12]	@ 000ff6ac 387b
.org 0xff6ae
	cmp r0, #1	@ 000ff6ae 0128
.org 0xff6b0
	bls.n 0xff6f0	@ 000ff6b0 1ed9
.org 0xff6b2
	ldrb r1, [r4, #10]	@ 000ff6b2 a17a
.org 0xff6b4
	movs r0, #254	@ 000ff6b4 fe20
.org 0xff6b6
	ands r0, r1	@ 000ff6b6 0840
.org 0xff6b8
	movs r2, #0	@ 000ff6b8 0022
.org 0xff6ba
	movs r1, #253	@ 000ff6ba fd21
.org 0xff6bc
	ands r0, r1	@ 000ff6bc 0840
.org 0xff6be
	strb r0, [r4, #10]	@ 000ff6be a072
.org 0xff6c0
	adds r0, r4, #0	@ 000ff6c0 201c
.org 0xff6c2
	adds r0, #140	@ 000ff6c2 8c30
.org 0xff6c4
	str r2, [r0, #0]	@ 000ff6c4 0260
.org 0xff6c6
	adds r0, #4	@ 000ff6c6 0430
.org 0xff6c8
	str r2, [r0, #0]	@ 000ff6c8 0260
.org 0xff6ca
	adds r0, #4	@ 000ff6ca 0430
.org 0xff6cc
	strb r2, [r0, #0]	@ 000ff6cc 0270
.org 0xff6ce
	ldrb r1, [r4, #10]	@ 000ff6ce a17a
.org 0xff6d0
	movs r0, #251	@ 000ff6d0 fb20
.org 0xff6d2
	ands r0, r1	@ 000ff6d2 0840
.org 0xff6d4
	strb r0, [r4, #10]	@ 000ff6d4 a072
.org 0xff6d6
	ldr r1, [pc, #20]	@ 000ff6d6 0549
.org 0xff6d8
	ldrb r0, [r4, #9]	@ 000ff6d8 607a
.org 0xff6da
	lsls r0, r0, #2	@ 000ff6da 8000
.org 0xff6dc
	adds r0, r0, r1	@ 000ff6dc 4018
.org 0xff6de
	movs r1, #3	@ 000ff6de 0321
.org 0xff6e0
	str r1, [r4, #12]	@ 000ff6e0 e160
.org 0xff6e2
	ldr r0, [r0, #0]	@ 000ff6e2 0068
.org 0xff6e4
	ldr r0, [r0, #12]	@ 000ff6e4 c068
.org 0xff6e6
	str r0, [r4, #20]	@ 000ff6e6 6061
.org 0xff6e8
	b.n 0xff858	@ 000ff6e8 b6e0
.org 0xff6ea
	.byte 0x00	@ 000ff6ea data
.org 0xff6eb
	.byte 0x00	@ 000ff6eb data
.org 0xff6ec
	.byte 0xfc,0x92,0x86,0x08	@ 000ff6ec data
.org 0xff6f0
	ldr r6, [r4, #88]	@ 000ff6f0 a66d
.org 0xff6f2
	ldrb r5, [r4, #13]	@ 000ff6f2 657b
.org 0xff6f4
	adds r3, r5, #0	@ 000ff6f4 2b1c
.org 0xff6f6
	cmp r3, #0	@ 000ff6f6 002b
.org 0xff6f8
	bne.n 0xff734	@ 000ff6f8 1cd1
.org 0xff6fa
	cmp r2, #0	@ 000ff6fa 002a
.org 0xff6fc
	beq.n 0xff718	@ 000ff6fc 0cd0
.org 0xff6fe
	ldrb r0, [r2, #13]	@ 000ff6fe 507b
.org 0xff700
	cmp r0, #3	@ 000ff700 0328
.org 0xff702
	bne.n 0xff718	@ 000ff702 09d1
.org 0xff704
	ldr r0, [pc, #12]	@ 000ff704 0348
.org 0xff706
	bl 0x2b10	@ 000ff706 03f703fa
.org 0xff70a
	movs r0, #32	@ 000ff70a 2020
.org 0xff70c
	strb r0, [r4, #18]	@ 000ff70c a074
.org 0xff70e
	ldrb r0, [r4, #13]	@ 000ff70e 607b
.org 0xff710
	adds r0, #1	@ 000ff710 0130
.org 0xff712
	b.n 0xff7d4	@ 000ff712 5fe0
.org 0xff714
	.byte 0x85,0x01,0x00,0x00	@ 000ff714 data
.org 0xff718
	ldr r0, [r4, #88]	@ 000ff718 a06d
.org 0xff71a
	ldr r1, [pc, #20]	@ 000ff71a 0549
.org 0xff71c
	adds r0, r0, r1	@ 000ff71c 4018
.org 0xff71e
	str r0, [r4, #88]	@ 000ff71e a065
.org 0xff720
	adds r1, r4, #0	@ 000ff720 211c
.org 0xff722
	adds r1, #184	@ 000ff722 b831
.org 0xff724
	ldr r1, [r1, #0]	@ 000ff724 0968
.org 0xff726
	cmp r0, r1	@ 000ff726 8842
.org 0xff728
	bge.n 0xff7d6	@ 000ff728 55da
.org 0xff72a
	str r1, [r4, #88]	@ 000ff72a a165
.org 0xff72c
	b.n 0xff7d6	@ 000ff72c 53e0
.org 0xff72e
	.byte 0x00	@ 000ff72e data
.org 0xff72f
	.byte 0x00	@ 000ff72f data
.org 0xff730
	.byte 0x00,0xff,0xff,0xff	@ 000ff730 data
.org 0xff734
	ldr r1, [pc, #56]	@ 000ff734 0e49
.org 0xff736
	ldr r0, [pc, #60]	@ 000ff736 0f48
.org 0xff738
	adds r1, r1, r0	@ 000ff738 0918
.org 0xff73a
	ldrh r0, [r1, #0]	@ 000ff73a 0888
.org 0xff73c
	adds r0, #2	@ 000ff73c 0230
.org 0xff73e
	strh r0, [r1, #0]	@ 000ff73e 0880
.org 0xff740
	cmp r2, #0	@ 000ff740 002a
.org 0xff742
	beq.n 0xff7c0	@ 000ff742 3dd0
.org 0xff744
	ldrb r0, [r2, #13]	@ 000ff744 507b
.org 0xff746
	cmp r0, #3	@ 000ff746 0328
.org 0xff748
	bne.n 0xff7c0	@ 000ff748 3ad1
.org 0xff74a
	adds r2, r5, #0	@ 000ff74a 2a1c
.org 0xff74c
	cmp r3, #1	@ 000ff74c 012b
.org 0xff74e
	bne.n 0xff778	@ 000ff74e 13d1
.org 0xff750
	movs r1, #128	@ 000ff750 8021
.org 0xff752
	lsls r1, r1, #1	@ 000ff752 4900
.org 0xff754
	adds r0, r6, r1	@ 000ff754 7018
.org 0xff756
	str r0, [r4, #88]	@ 000ff756 a065
.org 0xff758
	adds r1, r4, #0	@ 000ff758 211c
.org 0xff75a
	adds r1, #184	@ 000ff75a b831
.org 0xff75c
	ldr r1, [r1, #0]	@ 000ff75c 0968
.org 0xff75e
	movs r3, #136	@ 000ff75e 8823
.org 0xff760
	lsls r3, r3, #5	@ 000ff760 5b01
.org 0xff762
	adds r1, r1, r3	@ 000ff762 c918
.org 0xff764
	cmp r0, r1	@ 000ff764 8842
.org 0xff766
	ble.n 0xff7ba	@ 000ff766 28dd
.org 0xff768
	str r1, [r4, #88]	@ 000ff768 a165
.org 0xff76a
	adds r0, r2, #1	@ 000ff76a 501c
.org 0xff76c
	strb r0, [r4, #13]	@ 000ff76c 6073
.org 0xff76e
	b.n 0xff7ba	@ 000ff76e 24e0
.org 0xff770
	.byte 0xb0,0x0a,0x00,0x02	@ 000ff770 data
.org 0xff774
	.byte 0x3c,0xd0,0x02,0x00	@ 000ff774 data
.org 0xff778
	cmp r3, #2	@ 000ff778 022b
.org 0xff77a
	bne.n 0xff7a0	@ 000ff77a 11d1
.org 0xff77c
	ldr r1, [pc, #28]	@ 000ff77c 0749
.org 0xff77e
	adds r0, r6, r1	@ 000ff77e 7018
.org 0xff780
	str r0, [r4, #88]	@ 000ff780 a065
.org 0xff782
	adds r1, r4, #0	@ 000ff782 211c
.org 0xff784
	adds r1, #184	@ 000ff784 b831
.org 0xff786
	ldr r1, [r1, #0]	@ 000ff786 0968
.org 0xff788
	movs r2, #128	@ 000ff788 8022
.org 0xff78a
	lsls r2, r2, #5	@ 000ff78a 5201
.org 0xff78c
	adds r1, r1, r2	@ 000ff78c 8918
.org 0xff78e
	cmp r0, r1	@ 000ff78e 8842
.org 0xff790
	bge.n 0xff7ba	@ 000ff790 13da
.org 0xff792
	str r1, [r4, #88]	@ 000ff792 a165
.org 0xff794
	adds r0, r5, #1	@ 000ff794 681c
.org 0xff796
	strb r0, [r4, #13]	@ 000ff796 6073
.org 0xff798
	b.n 0xff7ba	@ 000ff798 0fe0
.org 0xff79a
	.byte 0x00	@ 000ff79a data
.org 0xff79b
	.byte 0x00	@ 000ff79b data
.org 0xff79c
	.byte 0x00,0xff,0xff,0xff	@ 000ff79c data
.org 0xff7a0
	movs r3, #128	@ 000ff7a0 8023
.org 0xff7a2
	lsls r3, r3, #1	@ 000ff7a2 5b00
.org 0xff7a4
	adds r0, r6, r3	@ 000ff7a4 f018
.org 0xff7a6
	str r0, [r4, #88]	@ 000ff7a6 a065
.org 0xff7a8
	adds r1, r4, #0	@ 000ff7a8 211c
.org 0xff7aa
	adds r1, #184	@ 000ff7aa b831
.org 0xff7ac
	ldr r1, [r1, #0]	@ 000ff7ac 0968
.org 0xff7ae
	movs r2, #128	@ 000ff7ae 8022
.org 0xff7b0
	lsls r2, r2, #5	@ 000ff7b0 5201
.org 0xff7b2
	adds r1, r1, r2	@ 000ff7b2 8918
.org 0xff7b4
	cmp r0, r1	@ 000ff7b4 8842
.org 0xff7b6
	ble.n 0xff7ba	@ 000ff7b6 00dd
.org 0xff7b8
	str r1, [r4, #88]	@ 000ff7b8 a165
.org 0xff7ba
	movs r0, #32	@ 000ff7ba 2020
.org 0xff7bc
	strb r0, [r4, #18]	@ 000ff7bc a074
.org 0xff7be
	b.n 0xff7d6	@ 000ff7be 0ae0
.org 0xff7c0
	movs r0, #1	@ 000ff7c0 0120
.org 0xff7c2
	strb r0, [r4, #13]	@ 000ff7c2 6073
.org 0xff7c4
	ldrb r0, [r4, #18]	@ 000ff7c4 a07c
.org 0xff7c6
	subs r0, #1	@ 000ff7c6 0138
.org 0xff7c8
	strb r0, [r4, #18]	@ 000ff7c8 a074
.org 0xff7ca
	lsls r0, r0, #24	@ 000ff7ca 0006
.org 0xff7cc
	lsrs r0, r0, #24	@ 000ff7cc 000e
.org 0xff7ce
	cmp r0, #255	@ 000ff7ce ff28
.org 0xff7d0
	bne.n 0xff7d6	@ 000ff7d0 01d1
.org 0xff7d2
	movs r0, #0	@ 000ff7d2 0020
.org 0xff7d4
	strb r0, [r4, #13]	@ 000ff7d4 6073
.org 0xff7d6
	ldr r0, [r4, #88]	@ 000ff7d6 a06d
.org 0xff7d8
	ldr r1, [r7, #88]	@ 000ff7d8 b96d
.org 0xff7da
	subs r1, r0, r1	@ 000ff7da 411a
.org 0xff7dc
	ldr r0, [pc, #8]	@ 000ff7dc 0248
.org 0xff7de
	cmp r1, r0	@ 000ff7de 8142
.org 0xff7e0
	bgt.n 0xff7f0	@ 000ff7e0 06dc
.org 0xff7e2
	ldr r1, [pc, #8]	@ 000ff7e2 0249
.org 0xff7e4
	b.n 0xff80c	@ 000ff7e4 12e0
.org 0xff7e6
	.byte 0x00	@ 000ff7e6 data
.org 0xff7e7
	.byte 0x00	@ 000ff7e7 data
.org 0xff7e8
	.byte 0xff,0x23,0x00,0x00	@ 000ff7e8 data
.org 0xff7ec
	.byte 0x04,0xa9,0x00,0x00	@ 000ff7ec data
.org 0xff7f0
	ldr r0, [pc, #8]	@ 000ff7f0 0248
.org 0xff7f2
	cmp r1, r0	@ 000ff7f2 8142
.org 0xff7f4
	bgt.n 0xff804	@ 000ff7f4 06dc
.org 0xff7f6
	ldr r1, [pc, #8]	@ 000ff7f6 0249
.org 0xff7f8
	b.n 0xff80c	@ 000ff7f8 08e0
.org 0xff7fa
	.byte 0x00	@ 000ff7fa data
.org 0xff7fb
	.byte 0x00	@ 000ff7fb data
.org 0xff7fc
	.byte 0xff,0x33,0x00,0x00	@ 000ff7fc data
.org 0xff800
	.byte 0x05,0xa9,0x00,0x00	@ 000ff800 data
.org 0xff804
	ldr r0, [pc, #12]	@ 000ff804 0348
.org 0xff806
	cmp r1, r0	@ 000ff806 8142
.org 0xff808
	bgt.n 0xff81c	@ 000ff808 08dc
.org 0xff80a
	ldr r1, [pc, #12]	@ 000ff80a 0349
.org 0xff80c
	adds r0, r4, #0	@ 000ff80c 201c
.org 0xff80e
	bl 0x1cf00	@ 000ff80e 1df777fb
.org 0xff812
	b.n 0xff824	@ 000ff812 07e0
.org 0xff814
	.byte 0xff,0x43,0x00,0x00	@ 000ff814 data
.org 0xff818
	.byte 0x06,0xa9,0x00,0x00	@ 000ff818 data
.org 0xff81c
	ldr r1, [pc, #40]	@ 000ff81c 0a49
