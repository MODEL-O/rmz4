@ FUN_08084664  entry 0x08084664  size 276
.thumb
.org 0x84664
FUN_08084664:
	push {r4, r5, r6, r7, lr}	@ 00084664 f0b5
.org 0x84666
	mov r7, r8	@ 00084666 4746
.org 0x84668
	push {r7}	@ 00084668 80b4
.org 0x8466a
	adds r4, r0, #0	@ 0008466a 041c
.org 0x8466c
	ldrb r0, [r4, #15]	@ 0008466c e07b
.org 0x8466e
	cmp r0, #0	@ 0008466e 0028
.org 0x84670
	bne.n 0x8469a	@ 00084670 13d1
.org 0x84672
	ldr r1, [pc, #64]	@ 00084672 1049
.org 0x84674
	adds r0, r4, #0	@ 00084674 201c
.org 0x84676
	bl 0x1cf00	@ 00084676 98f743fc
.org 0x8467a
	adds r0, r4, #0	@ 0008467a 201c
.org 0x8467c
	adds r0, #84	@ 0008467c 5430
.org 0x8467e
	ldrb r1, [r4, #10]	@ 0008467e a17a
.org 0x84680
	lsrs r1, r1, #4	@ 00084680 0909
.org 0x84682
	movs r2, #1	@ 00084682 0122
.org 0x84684
	ands r1, r2	@ 00084684 1140
.org 0x84686
	bl 0xd6e54	@ 00084686 52f0e5fb
.org 0x8468a
	ldr r0, [r4, #44]	@ 0008468a e06a
.org 0x8468c
	ldr r1, [r0, #88]	@ 0008468c 816d
.org 0x8468e
	ldr r0, [r0, #84]	@ 0008468e 406d
.org 0x84690
	str r0, [r4, #84]	@ 00084690 6065
.org 0x84692
	str r1, [r4, #88]	@ 00084692 a165
.org 0x84694
	ldrb r0, [r4, #15]	@ 00084694 e07b
.org 0x84696
	adds r0, #1	@ 00084696 0130
.org 0x84698
	strb r0, [r4, #15]	@ 00084698 e073
.org 0x8469a
	adds r0, r4, #0	@ 0008469a 201c
.org 0x8469c
	bl 0x1cff0	@ 0008469c 98f7a8fc
.org 0x846a0
	ldr r1, [r4, #44]	@ 000846a0 e16a
.org 0x846a2
	cmp r1, #0	@ 000846a2 0029
.org 0x846a4
	beq.n 0x846c6	@ 000846a4 0fd0
.org 0x846a6
	ldrb r0, [r1, #12]	@ 000846a6 087b
.org 0x846a8
	cmp r0, #1	@ 000846a8 0128
.org 0x846aa
	bls.n 0x846b8	@ 000846aa 05d9
.org 0x846ac
	movs r0, #0	@ 000846ac 0020
.org 0x846ae
	str r0, [r4, #44]	@ 000846ae e062
.org 0x846b0
	b.n 0x846c0	@ 000846b0 06e0
.org 0x846b2
	.byte 0x00	@ 000846b2 data
.org 0x846b3
	.byte 0x00	@ 000846b3 data
.org 0x846b4
	.byte 0x07,0x1c,0x00,0x00	@ 000846b4 data
.org 0x846b8
	ldr r0, [r1, #88]	@ 000846b8 886d
.org 0x846ba
	ldr r1, [pc, #44]	@ 000846ba 0b49
.org 0x846bc
	adds r0, r0, r1	@ 000846bc 4018
.org 0x846be
	str r0, [r4, #88]	@ 000846be a065
.org 0x846c0
	ldr r0, [r4, #44]	@ 000846c0 e06a
.org 0x846c2
	cmp r0, #0	@ 000846c2 0028
.org 0x846c4
	bne.n 0x84780	@ 000846c4 5cd1
.org 0x846c6
	adds r7, r4, #0	@ 000846c6 271c
.org 0x846c8
	adds r7, #84	@ 000846c8 5437
.org 0x846ca
	ldr r0, [pc, #32]	@ 000846ca 0848
.org 0x846cc
	mov ip, r0	@ 000846cc 8446
.org 0x846ce
	adds r2, r4, #0	@ 000846ce 221c
.org 0x846d0
	adds r2, #180	@ 000846d0 b432
.org 0x846d2
	ldrb r5, [r2, #8]	@ 000846d2 157a
.org 0x846d4
	ldrb r1, [r4, #10]	@ 000846d4 a17a
.org 0x846d6
	movs r3, #16	@ 000846d6 1023
.org 0x846d8
	adds r0, r3, #0	@ 000846d8 181c
.org 0x846da
	ands r0, r1	@ 000846da 0840
.org 0x846dc
	adds r6, r7, #0	@ 000846dc 3e1c
.org 0x846de
	mov r8, r2	@ 000846de 9046
.org 0x846e0
	cmp r0, #0	@ 000846e0 0028
.org 0x846e2
	beq.n 0x846f0	@ 000846e2 05d0
.org 0x846e4
	orrs r3, r5	@ 000846e4 2b43
.org 0x846e6
	b.n 0x846f2	@ 000846e6 04e0
.org 0x846e8
	.byte 0x00,0xfe,0xff,0xff	@ 000846e8 data
.org 0x846ec
	.byte 0x54,0xea,0x85,0x08	@ 000846ec data
.org 0x846f0
	adds r3, r5, #0	@ 000846f0 2b1c
.org 0x846f2
	adds r0, r7, #0	@ 000846f2 381c
.org 0x846f4
	mov r1, ip	@ 000846f4 6146
.org 0x846f6
	movs r2, #0	@ 000846f6 0022
.org 0x846f8
	bl 0xd4c8c	@ 000846f8 50f0c8fa
.org 0x846fc
	adds r5, r6, #0	@ 000846fc 351c
.org 0x846fe
	ldr r7, [pc, #20]	@ 000846fe 054f
.org 0x84700
	mov r1, r8	@ 00084700 4146
.org 0x84702
	ldrb r2, [r1, #8]	@ 00084702 0a7a
.org 0x84704
	ldrb r1, [r4, #10]	@ 00084704 a17a
.org 0x84706
	movs r3, #16	@ 00084706 1023
.org 0x84708
	adds r0, r3, #0	@ 00084708 181c
.org 0x8470a
	ands r0, r1	@ 0008470a 0840
.org 0x8470c
	cmp r0, #0	@ 0008470c 0028
.org 0x8470e
	beq.n 0x84718	@ 0008470e 03d0
.org 0x84710
	orrs r3, r2	@ 00084710 1343
.org 0x84712
	b.n 0x8471a	@ 00084712 02e0
.org 0x84714
	.byte 0x70,0xea,0x85,0x08	@ 00084714 data
.org 0x84718
	adds r3, r2, #0	@ 00084718 131c
.org 0x8471a
	adds r0, r5, #0	@ 0008471a 281c
.org 0x8471c
	adds r1, r7, #0	@ 0008471c 391c
.org 0x8471e
	movs r2, #0	@ 0008471e 0022
.org 0x84720
	bl 0xd4c8c	@ 00084720 50f0b4fa
.org 0x84724
	movs r0, #1	@ 00084724 0120
.org 0x84726
	adds r1, r6, #0	@ 00084726 311c
.org 0x84728
	bl 0xd0c88	@ 00084728 4cf0aefa
.org 0x8472c
	ldrb r1, [r4, #10]	@ 0008472c a17a
.org 0x8472e
	movs r0, #16	@ 0008472e 1020
.org 0x84730
	ands r0, r1	@ 00084730 0840
.org 0x84732
	cmp r0, #0	@ 00084732 0028
.org 0x84734
	beq.n 0x84740	@ 00084734 04d0
.org 0x84736
	movs r0, #2	@ 00084736 0220
.org 0x84738
	adds r1, r6, #0	@ 00084738 311c
.org 0x8473a
	bl 0xd0c88	@ 0008473a 4cf0a5fa
.org 0x8473e
	b.n 0x84748	@ 0008473e 03e0
.org 0x84740
	movs r0, #2	@ 00084740 0220
.org 0x84742
	adds r1, r6, #0	@ 00084742 311c
.org 0x84744
	bl 0xd0c88	@ 00084744 4cf0a0fa
.org 0x84748
	adds r2, r6, #0	@ 00084748 321c
.org 0x8474a
	movs r0, #4	@ 0008474a 0420
.org 0x8474c
	movs r1, #18	@ 0008474c 1221
.org 0x8474e
	bl 0x2ab88	@ 0008474e a6f71bfa
.org 0x84752
	movs r0, #42	@ 00084752 2a20
.org 0x84754
	bl 0x2b10	@ 00084754 7ef7dcf9
.org 0x84758
	ldr r2, [pc, #48]	@ 00084758 0c4a
.org 0x8475a
	ldrh r1, [r2, #12]	@ 0008475a 9189
.org 0x8475c
	ldr r0, [pc, #48]	@ 0008475c 0c48
.org 0x8475e
	cmp r1, r0	@ 0008475e 8142
.org 0x84760
	bhi.n 0x84766	@ 00084760 01d8
.org 0x84762
	adds r0, r1, #1	@ 00084762 481c
.org 0x84764
	strh r0, [r2, #12]	@ 00084764 9081
.org 0x84766
	adds r0, r4, #0	@ 00084766 201c
.org 0x84768
	adds r1, r6, #0	@ 00084768 311c
.org 0x8476a
	bl 0x2abe0	@ 0008476a a6f739fa
.org 0x8476e
	ldr r1, [pc, #36]	@ 0008476e 0949
.org 0x84770
	ldrb r0, [r4, #9]	@ 00084770 607a
.org 0x84772
	lsls r0, r0, #2	@ 00084772 8000
.org 0x84774
	adds r0, r0, r1	@ 00084774 4018
.org 0x84776
	movs r1, #4	@ 00084776 0421
