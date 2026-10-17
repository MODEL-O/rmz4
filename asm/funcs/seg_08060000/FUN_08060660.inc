@ FUN_08060660  entry 0x08060660  size 488
.thumb
.org 0x60660
FUN_08060660:
	push {r4, r5, r6, lr}	@ 00060660 70b5
.org 0x60662
	adds r5, r0, #0	@ 00060662 051c
.org 0x60664
	ldrb r0, [r5, #14]	@ 00060664 a87b
.org 0x60666
	cmp r0, #0	@ 00060666 0028
.org 0x60668
	bne.n 0x60726	@ 00060668 5dd1
.org 0x6066a
	ldr r1, [pc, #56]	@ 0006066a 0e49
.org 0x6066c
	adds r0, r5, #0	@ 0006066c 281c
.org 0x6066e
	bl 0x1cf00	@ 0006066e bcf747fc
.org 0x60672
	adds r0, r5, #0	@ 00060672 281c
.org 0x60674
	adds r0, #84	@ 00060674 5430
.org 0x60676
	movs r1, #0	@ 00060676 0021
.org 0x60678
	movs r2, #193	@ 00060678 c122
.org 0x6067a
	bl 0xdad0c	@ 0006067a 7af047fb
.org 0x6067e
	adds r1, r0, #0	@ 0006067e 011c
.org 0x60680
	adds r0, r5, #0	@ 00060680 281c
.org 0x60682
	adds r0, #180	@ 00060682 b430
.org 0x60684
	str r1, [r0, #12]	@ 00060684 c160
.org 0x60686
	adds r2, r0, #0	@ 00060686 021c
.org 0x60688
	cmp r1, #0	@ 00060688 0029
.org 0x6068a
	bne.n 0x6068e	@ 0006068a 00d1
.org 0x6068c
	b.n 0x60860	@ 0006068c e8e0
.org 0x6068e
	ldr r0, [pc, #24]	@ 0006068e 0648
.org 0x60690
	ldrh r0, [r0, #0]	@ 00060690 0088
.org 0x60692
	cmp r0, #11	@ 00060692 0b28
.org 0x60694
	bne.n 0x606ac	@ 00060694 0ad1
.org 0x60696
	adds r1, #120	@ 00060696 7831
.org 0x60698
	movs r0, #57	@ 00060698 3920
.org 0x6069a
	strb r0, [r1, #0]	@ 0006069a 0870
.org 0x6069c
	ldr r0, [r2, #12]	@ 0006069c d068
.org 0x6069e
	adds r0, #121	@ 0006069e 7930
.org 0x606a0
	movs r1, #6	@ 000606a0 0621
.org 0x606a2
	b.n 0x606b8	@ 000606a2 09e0
.org 0x606a4
	.byte 0x0c,0xa5,0x00,0x00	@ 000606a4 data
.org 0x606a8
	.byte 0x10,0xe9,0x02,0x02	@ 000606a8 data
.org 0x606ac
	adds r1, #120	@ 000606ac 7831
.org 0x606ae
	movs r0, #53	@ 000606ae 3520
.org 0x606b0
	strb r0, [r1, #0]	@ 000606b0 0870
.org 0x606b2
	ldr r0, [r2, #12]	@ 000606b2 d068
.org 0x606b4
	adds r0, #121	@ 000606b4 7930
.org 0x606b6
	movs r1, #10	@ 000606b6 0a21
.org 0x606b8
	strb r1, [r0, #0]	@ 000606b8 0170
.org 0x606ba
	ldrb r1, [r5, #10]	@ 000606ba a97a
.org 0x606bc
	movs r0, #16	@ 000606bc 1020
.org 0x606be
	ands r0, r1	@ 000606be 0840
.org 0x606c0
	cmp r0, #0	@ 000606c0 0028
.org 0x606c2
	beq.n 0x606d8	@ 000606c2 09d0
.org 0x606c4
	ldr r2, [r2, #12]	@ 000606c4 d268
.org 0x606c6
	ldr r0, [r5, #84]	@ 000606c6 686d
.org 0x606c8
	movs r3, #192	@ 000606c8 c023
.org 0x606ca
	lsls r3, r3, #6	@ 000606ca 9b01
.org 0x606cc
	adds r0, r0, r3	@ 000606cc c018
.org 0x606ce
	str r0, [r2, #84]	@ 000606ce 5065
.org 0x606d0
	ldr r0, [r5, #84]	@ 000606d0 686d
.org 0x606d2
	movs r1, #240	@ 000606d2 f021
.org 0x606d4
	lsls r1, r1, #8	@ 000606d4 0902
.org 0x606d6
	b.n 0x606e6	@ 000606d6 06e0
.org 0x606d8
	ldr r2, [r2, #12]	@ 000606d8 d268
.org 0x606da
	ldr r0, [r5, #84]	@ 000606da 686d
.org 0x606dc
	ldr r3, [pc, #128]	@ 000606dc 204b
.org 0x606de
	adds r0, r0, r3	@ 000606de c018
.org 0x606e0
	str r0, [r2, #84]	@ 000606e0 5065
.org 0x606e2
	ldr r0, [r5, #84]	@ 000606e2 686d
.org 0x606e4
	ldr r1, [pc, #124]	@ 000606e4 1f49
.org 0x606e6
	adds r0, r0, r1	@ 000606e6 4018
.org 0x606e8
	str r0, [r2, #100]	@ 000606e8 5066
.org 0x606ea
	ldr r0, [r5, #84]	@ 000606ea 686d
.org 0x606ec
	adds r0, r0, r1	@ 000606ec 4018
.org 0x606ee
	str r0, [r2, #92]	@ 000606ee d065
.org 0x606f0
	ldr r0, [r5, #84]	@ 000606f0 686d
.org 0x606f2
	adds r0, r0, r3	@ 000606f2 c018
.org 0x606f4
	str r0, [r2, #124]	@ 000606f4 d067
.org 0x606f6
	adds r0, r5, #0	@ 000606f6 281c
.org 0x606f8
	movs r1, #0	@ 000606f8 0021
.org 0x606fa
	bl 0xc639c	@ 000606fa 65f04ffe
.org 0x606fe
	movs r0, #0	@ 000606fe 0020
.org 0x60700
	strb r0, [r5, #19]	@ 00060700 e874
.org 0x60702
	movs r0, #128	@ 00060702 8020
.org 0x60704
	lsls r0, r0, #1	@ 00060704 4000
.org 0x60706
	str r0, [r5, #104]	@ 00060706 a866
.org 0x60708
	adds r0, #26	@ 00060708 1a30
.org 0x6070a
	bl 0x2b10	@ 0006070a a2f701fa
.org 0x6070e
	movs r0, #93	@ 0006070e 5d20
.org 0x60710
	bl 0x2b10	@ 00060710 a2f7fef9
.org 0x60714
	adds r1, r5, #0	@ 00060714 291c
.org 0x60716
	adds r1, #180	@ 00060716 b431
.org 0x60718
	movs r2, #0	@ 00060718 0022
.org 0x6071a
	movs r0, #93	@ 0006071a 5d20
.org 0x6071c
	strh r0, [r1, #22]	@ 0006071c c882
.org 0x6071e
	strb r2, [r5, #15]	@ 0006071e ea73
.org 0x60720
	ldrb r0, [r5, #14]	@ 00060720 a87b
.org 0x60722
	adds r0, #1	@ 00060722 0130
.org 0x60724
	strb r0, [r5, #14]	@ 00060724 a873
.org 0x60726
	adds r4, r5, #0	@ 00060726 2c1c
.org 0x60728
	adds r4, #180	@ 00060728 b434
.org 0x6072a
	ldr r6, [r4, #12]	@ 0006072a e668
.org 0x6072c
	adds r1, r5, #0	@ 0006072c 291c
.org 0x6072e
	adds r1, #84	@ 0006072e 5431
.org 0x60730
	movs r0, #4	@ 00060730 0420
.org 0x60732
	bl 0x1fe64	@ 00060732 bff797fb
.org 0x60736
	adds r0, r5, #0	@ 00060736 281c
.org 0x60738
	bl 0x1cff0	@ 00060738 bcf75afc
.org 0x6073c
	ldrb r2, [r5, #15]	@ 0006073c ea7b
.org 0x6073e
	adds r0, r2, #0	@ 0006073e 101c
.org 0x60740
	cmp r0, #0	@ 00060740 0028
.org 0x60742
	bne.n 0x60768	@ 00060742 11d1
.org 0x60744
	ldr r0, [r5, #104]	@ 00060744 a86e
.org 0x60746
	movs r1, #192	@ 00060746 c021
.org 0x60748
	lsls r1, r1, #1	@ 00060748 4900
.org 0x6074a
	adds r0, r0, r1	@ 0006074a 4018
.org 0x6074c
	str r0, [r5, #104]	@ 0006074c a866
.org 0x6074e
	movs r1, #192	@ 0006074e c021
.org 0x60750
	lsls r1, r1, #4	@ 00060750 0901
.org 0x60752
	cmp r0, r1	@ 00060752 8842
.org 0x60754
	ble.n 0x607b4	@ 00060754 2edd
.org 0x60756
	str r1, [r5, #104]	@ 00060756 a966
.org 0x60758
	movs r0, #8	@ 00060758 0820
.org 0x6075a
	strb r0, [r5, #18]	@ 0006075a a874
.org 0x6075c
	b.n 0x6077a	@ 0006075c 0de0
.org 0x6075e
	.byte 0x00	@ 0006075e data
.org 0x6075f
	.byte 0x00	@ 0006075f data
.org 0x60760
	.byte 0x00,0x10,0xff,0xff	@ 00060760 data
.org 0x60764
	.byte 0x00,0xd0,0xff,0xff	@ 00060764 data
.org 0x60768
	cmp r0, #1	@ 00060768 0128
.org 0x6076a
	bne.n 0x60780	@ 0006076a 09d1
.org 0x6076c
	ldrb r0, [r5, #18]	@ 0006076c a87c
.org 0x6076e
	subs r0, #1	@ 0006076e 0138
.org 0x60770
	strb r0, [r5, #18]	@ 00060770 a874
.org 0x60772
	lsls r0, r0, #24	@ 00060772 0006
.org 0x60774
	lsrs r0, r0, #24	@ 00060774 000e
.org 0x60776
	cmp r0, #255	@ 00060776 ff28
.org 0x60778
	bne.n 0x607b4	@ 00060778 1cd1
.org 0x6077a
	adds r0, r2, #1	@ 0006077a 501c
.org 0x6077c
	strb r0, [r5, #15]	@ 0006077c e873
.org 0x6077e
	b.n 0x607b4	@ 0006077e 19e0
.org 0x60780
	ldr r0, [r5, #104]	@ 00060780 a86e
.org 0x60782
	ldr r1, [pc, #44]	@ 00060782 0b49
.org 0x60784
	adds r0, r0, r1	@ 00060784 4018
.org 0x60786
	str r0, [r5, #104]	@ 00060786 a866
.org 0x60788
	cmp r0, #0	@ 00060788 0028
.org 0x6078a
	bge.n 0x607b4	@ 0006078a 13da
.org 0x6078c
	ldr r0, [r4, #12]	@ 0006078c e068
.org 0x6078e
	cmp r0, #0	@ 0006078e 0028
.org 0x60790
	beq.n 0x6079c	@ 00060790 04d0
.org 0x60792
	adds r0, #119	@ 00060792 7730
.org 0x60794
	movs r2, #0	@ 00060794 0022
.org 0x60796
	movs r1, #1	@ 00060796 0121
.org 0x60798
	strb r1, [r0, #0]	@ 00060798 0170
.org 0x6079a
	str r2, [r4, #12]	@ 0006079a e260
.org 0x6079c
	movs r0, #93	@ 0006079c 5d20
.org 0x6079e
	bl 0x2b5c	@ 0006079e a2f7ddf9
.org 0x607a2
	movs r0, #0	@ 000607a2 0020
.org 0x607a4
	movs r1, #0	@ 000607a4 0021
.org 0x607a6
	strh r1, [r4, #22]	@ 000607a6 e182
.org 0x607a8
	movs r1, #13	@ 000607a8 0d21
.org 0x607aa
	strb r1, [r5, #13]	@ 000607aa 6973
.org 0x607ac
	strb r0, [r5, #14]	@ 000607ac a873
.org 0x607ae
	b.n 0x60860	@ 000607ae 57e0
.org 0x607b0
	.byte 0x00,0xfd,0xff,0xff	@ 000607b0 data
.org 0x607b4
	ldr r0, [r5, #88]	@ 000607b4 a86d
.org 0x607b6
	ldr r1, [pc, #72]	@ 000607b6 1249
.org 0x607b8
	adds r0, r0, r1	@ 000607b8 4018
.org 0x607ba
	str r0, [r6, #88]	@ 000607ba b065
.org 0x607bc
	ldr r0, [r5, #88]	@ 000607bc a86d
.org 0x607be
	adds r0, r0, r1	@ 000607be 4018
.org 0x607c0
	str r0, [r6, #104]	@ 000607c0 b066
.org 0x607c2
	ldr r0, [r5, #88]	@ 000607c2 a86d
.org 0x607c4
	ldr r1, [pc, #60]	@ 000607c4 0f49
.org 0x607c6
	adds r0, r0, r1	@ 000607c6 4018
.org 0x607c8
	str r0, [r6, #96]	@ 000607c8 3066
.org 0x607ca
	adds r4, r6, #0	@ 000607ca 341c
.org 0x607cc
	adds r4, #128	@ 000607cc 8034
.org 0x607ce
	ldr r0, [r5, #88]	@ 000607ce a86d
.org 0x607d0
	adds r0, r0, r1	@ 000607d0 4018
.org 0x607d2
	str r0, [r4, #0]	@ 000607d2 2060
.org 0x607d4
	ldrb r0, [r5, #19]	@ 000607d4 e87c
.org 0x607d6
	adds r0, #1	@ 000607d6 0130
.org 0x607d8
	movs r1, #3	@ 000607d8 0321
.org 0x607da
	bl 0x129050	@ 000607da c8f039fc
.org 0x607de
	strb r0, [r5, #19]	@ 000607de e874
.org 0x607e0
	ldrb r0, [r5, #19]	@ 000607e0 e87c
.org 0x607e2
	cmp r0, #0	@ 000607e2 0028
.org 0x607e4
	beq.n 0x60808	@ 000607e4 10d0
.org 0x607e6
	cmp r0, #1	@ 000607e6 0128
.org 0x607e8
	beq.n 0x60812	@ 000607e8 13d0
.org 0x607ea
	ldr r2, [r5, #104]	@ 000607ea aa6e
.org 0x607ec
	adds r1, r6, #0	@ 000607ec 311c
.org 0x607ee
	adds r1, #116	@ 000607ee 7431
.org 0x607f0
	movs r0, #0	@ 000607f0 0020
.org 0x607f2
	strb r0, [r1, #0]	@ 000607f2 0870
.org 0x607f4
	adds r1, #1	@ 000607f4 0131
.org 0x607f6
	movs r0, #25	@ 000607f6 1920
.org 0x607f8
	strb r0, [r1, #0]	@ 000607f8 0870
.org 0x607fa
	adds r1, #1	@ 000607fa 0131
.org 0x607fc
	movs r0, #31	@ 000607fc 1f20
.org 0x607fe
	b.n 0x6082e	@ 000607fe 16e0
.org 0x60800
	.byte 0x00,0xde,0xff,0xff	@ 00060800 data
.org 0x60804
	.byte 0x00,0xdf,0xff,0xff	@ 00060804 data
.org 0x60808
	ldr r0, [r5, #104]	@ 00060808 a86e
.org 0x6080a
	lsrs r1, r0, #31	@ 0006080a c10f
.org 0x6080c
	adds r0, r0, r1	@ 0006080c 4018
.org 0x6080e
	asrs r2, r0, #1	@ 0006080e 4210
.org 0x60810
	b.n 0x60820	@ 00060810 06e0
.org 0x60812
	ldr r1, [r5, #104]	@ 00060812 a96e
.org 0x60814
	lsls r0, r1, #3	@ 00060814 c800
.org 0x60816
	adds r0, r0, r1	@ 00060816 4018
.org 0x60818
	movs r1, #10	@ 00060818 0a21
.org 0x6081a
	bl 0x128fb8	@ 0006081a c8f0cdfb
.org 0x6081e
	adds r2, r0, #0	@ 0006081e 021c
.org 0x60820
	adds r1, r6, #0	@ 00060820 311c
.org 0x60822
	adds r1, #116	@ 00060822 7431
.org 0x60824
	movs r0, #31	@ 00060824 1f20
.org 0x60826
	strb r0, [r1, #0]	@ 00060826 0870
.org 0x60828
	adds r1, #1	@ 00060828 0131
.org 0x6082a
	strb r0, [r1, #0]	@ 0006082a 0870
.org 0x6082c
	adds r1, #1	@ 0006082c 0131
.org 0x6082e
	strb r0, [r1, #0]	@ 0006082e 0870
.org 0x60830
	ldr r0, [r6, #88]	@ 00060830 b06d
.org 0x60832
	subs r0, r0, r2	@ 00060832 801a
.org 0x60834
	str r0, [r6, #88]	@ 00060834 b065
.org 0x60836
	ldr r0, [r6, #104]	@ 00060836 b06e
.org 0x60838
	subs r0, r0, r2	@ 00060838 801a
.org 0x6083a
	str r0, [r6, #104]	@ 0006083a b066
.org 0x6083c
	ldrb r0, [r5, #19]	@ 0006083c e87c
.org 0x6083e
	cmp r0, #1	@ 0006083e 0128
.org 0x60840
	bne.n 0x6084c	@ 00060840 04d1
.org 0x60842
	ldr r0, [r6, #96]	@ 00060842 306e
.org 0x60844
	adds r0, r0, r2	@ 00060844 8018
.org 0x60846
	str r0, [r6, #96]	@ 00060846 3066
