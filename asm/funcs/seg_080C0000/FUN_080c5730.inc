@ FUN_080c5730  entry 0x080c5730  size 528
.thumb
.org 0xc5730
FUN_080c5730:
	push {r4, r5, r6, r7, lr}	@ 000c5730 f0b5
.org 0xc5732
	mov r7, sl	@ 000c5732 5746
.org 0xc5734
	mov r6, r9	@ 000c5734 4e46
.org 0xc5736
	mov r5, r8	@ 000c5736 4546
.org 0xc5738
	push {r5, r6, r7}	@ 000c5738 e0b4
.org 0xc573a
	sub sp, #28	@ 000c573a 87b0
.org 0xc573c
	adds r4, r0, #0	@ 000c573c 041c
.org 0xc573e
	ldr r0, [r4, #40]	@ 000c573e a06a
.org 0xc5740
	mov sl, r0	@ 000c5740 8246
.org 0xc5742
	ldrb r0, [r0, #10]	@ 000c5742 807a
.org 0xc5744
	lsrs r7, r0, #4	@ 000c5744 0709
.org 0xc5746
	movs r5, #1	@ 000c5746 0125
.org 0xc5748
	ands r7, r5	@ 000c5748 2f40
.org 0xc574a
	ldrb r1, [r4, #17]	@ 000c574a 617c
.org 0xc574c
	str r1, [sp, #16]	@ 000c574c 0491
.org 0xc574e
	ldrb r0, [r4, #15]	@ 000c574e e07b
.org 0xc5750
	cmp r0, #0	@ 000c5750 0028
.org 0xc5752
	bne.n 0xc576c	@ 000c5752 0bd1
.org 0xc5754
	movs r0, #197	@ 000c5754 c520
.org 0xc5756
	lsls r0, r0, #1	@ 000c5756 4000
.org 0xc5758
	bl 0x2b10	@ 000c5758 3df7daf9
.org 0xc575c
	adds r0, r4, #0	@ 000c575c 201c
.org 0xc575e
	adds r0, #184	@ 000c575e b830
.org 0xc5760
	strb r5, [r0, #0]	@ 000c5760 0570
.org 0xc5762
	movs r0, #60	@ 000c5762 3c20
.org 0xc5764
	strb r0, [r4, #18]	@ 000c5764 a074
.org 0xc5766
	ldrb r0, [r4, #15]	@ 000c5766 e07b
.org 0xc5768
	adds r0, #1	@ 000c5768 0130
.org 0xc576a
	strb r0, [r4, #15]	@ 000c576a e073
.org 0xc576c
	adds r2, r7, #0	@ 000c576c 3a1c
.org 0xc576e
	cmp r7, #0	@ 000c576e 002f
.org 0xc5770
	beq.n 0xc577a	@ 000c5770 03d0
.org 0xc5772
	ldrb r1, [r4, #10]	@ 000c5772 a17a
.org 0xc5774
	movs r0, #16	@ 000c5774 1020
.org 0xc5776
	orrs r0, r1	@ 000c5776 0843
.org 0xc5778
	b.n 0xc5780	@ 000c5778 02e0
.org 0xc577a
	ldrb r1, [r4, #10]	@ 000c577a a17a
.org 0xc577c
	movs r0, #239	@ 000c577c ef20
.org 0xc577e
	ands r0, r1	@ 000c577e 0840
.org 0xc5780
	strb r0, [r4, #10]	@ 000c5780 a072
.org 0xc5782
	adds r1, r2, #0	@ 000c5782 111c
.org 0xc5784
	adds r0, r4, #0	@ 000c5784 201c
.org 0xc5786
	adds r0, #76	@ 000c5786 4c30
.org 0xc5788
	strb r1, [r0, #0]	@ 000c5788 0170
.org 0xc578a
	adds r3, r4, #0	@ 000c578a 231c
.org 0xc578c
	adds r3, #74	@ 000c578c 4a33
.org 0xc578e
	lsls r1, r1, #4	@ 000c578e 0901
.org 0xc5790
	ldrb r2, [r3, #0]	@ 000c5790 1a78
.org 0xc5792
	movs r0, #17	@ 000c5792 1120
.org 0xc5794
	negs r0, r0	@ 000c5794 4042
.org 0xc5796
	ands r0, r2	@ 000c5796 1040
.org 0xc5798
	orrs r0, r1	@ 000c5798 0843
.org 0xc579a
	strb r0, [r3, #0]	@ 000c579a 1870
.org 0xc579c
	mov r0, sl	@ 000c579c 5046
.org 0xc579e
	ldr r2, [r0, #84]	@ 000c579e 426d
.org 0xc57a0
	ldrb r1, [r0, #10]	@ 000c57a0 817a
.org 0xc57a2
	movs r0, #16	@ 000c57a2 1020
.org 0xc57a4
	ands r0, r1	@ 000c57a4 0840
.org 0xc57a6
	cmp r0, #0	@ 000c57a6 0028
.org 0xc57a8
	beq.n 0xc57b0	@ 000c57a8 02d0
.org 0xc57aa
	movs r1, #216	@ 000c57aa d821
.org 0xc57ac
	lsls r1, r1, #6	@ 000c57ac 8901
.org 0xc57ae
	b.n 0xc57b2	@ 000c57ae 00e0
.org 0xc57b0
	ldr r1, [pc, #396]	@ 000c57b0 6349
.org 0xc57b2
	adds r0, r2, r1	@ 000c57b2 5018
.org 0xc57b4
	str r0, [r4, #84]	@ 000c57b4 6065
.org 0xc57b6
	mov r2, sl	@ 000c57b6 5246
.org 0xc57b8
	ldr r0, [r2, #88]	@ 000c57b8 906d
.org 0xc57ba
	ldr r1, [pc, #392]	@ 000c57ba 6249
.org 0xc57bc
	adds r0, r0, r1	@ 000c57bc 4018
.org 0xc57be
	str r0, [r4, #88]	@ 000c57be a065
.org 0xc57c0
	ldrb r0, [r4, #18]	@ 000c57c0 a07c
.org 0xc57c2
	movs r1, #3	@ 000c57c2 0321
.org 0xc57c4
	bl 0x129198	@ 000c57c4 63f0e8fc
.org 0xc57c8
	lsls r0, r0, #24	@ 000c57c8 0006
.org 0xc57ca
	cmp r0, #0	@ 000c57ca 0028
.org 0xc57cc
	bne.n 0xc58a0	@ 000c57cc 68d1
.org 0xc57ce
	ldr r2, [pc, #376]	@ 000c57ce 5e4a
.org 0xc57d0
	mov r9, r2	@ 000c57d0 9146
.org 0xc57d2
	ldr r0, [r2, #0]	@ 000c57d2 1068
.org 0xc57d4
	ldr r1, [pc, #372]	@ 000c57d4 5d49
.org 0xc57d6
	muls r0, r1	@ 000c57d6 4843
.org 0xc57d8
	ldr r2, [pc, #372]	@ 000c57d8 5d4a
.org 0xc57da
	mov ip, r2	@ 000c57da 9446
.org 0xc57dc
	add r0, ip	@ 000c57dc 6044
.org 0xc57de
	lsls r0, r0, #1	@ 000c57de 4000
.org 0xc57e0
	lsrs r5, r0, #1	@ 000c57e0 4508
.org 0xc57e2
	mov r1, r9	@ 000c57e2 4946
.org 0xc57e4
	str r5, [r1, #0]	@ 000c57e4 0d60
.org 0xc57e6
	lsls r0, r0, #6	@ 000c57e6 8001
.org 0xc57e8
	lsrs r0, r0, #23	@ 000c57e8 c00d
.org 0xc57ea
	movs r1, #128	@ 000c57ea 8021
.org 0xc57ec
	lsls r1, r1, #3	@ 000c57ec c900
.org 0xc57ee
	adds r0, r0, r1	@ 000c57ee 4018
.org 0xc57f0
	mov r8, r0	@ 000c57f0 8046
.org 0xc57f2
	ldr r6, [pc, #352]	@ 000c57f2 584e
.org 0xc57f4
	ldrb r0, [r4, #18]	@ 000c57f4 a07c
.org 0xc57f6
	lsrs r0, r0, #1	@ 000c57f6 4008
.org 0xc57f8
	lsls r0, r0, #29	@ 000c57f8 4007
.org 0xc57fa
	lsrs r0, r0, #23	@ 000c57fa c00d
.org 0xc57fc
	adds r0, r0, r6	@ 000c57fc 8019
.org 0xc57fe
	movs r2, #0	@ 000c57fe 0022
.org 0xc5800
	ldrsh r1, [r0, r2]	@ 000c5800 815e
.org 0xc5802
	lsls r0, r1, #1	@ 000c5802 4800
.org 0xc5804
	adds r0, r0, r1	@ 000c5804 4018
.org 0xc5806
	lsls r0, r0, #2	@ 000c5806 8000
.org 0xc5808
	cmp r0, #0	@ 000c5808 0028
.org 0xc580a
	bge.n 0xc580e	@ 000c580a 00da
.org 0xc580c
	adds r0, #255	@ 000c580c ff30
.org 0xc580e
	asrs r2, r0, #8	@ 000c580e 0212
.org 0xc5810
	ldr r1, [pc, #312]	@ 000c5810 4e49
.org 0xc5812
	adds r0, r5, #0	@ 000c5812 281c
.org 0xc5814
	muls r0, r1	@ 000c5814 4843
.org 0xc5816
	add r0, ip	@ 000c5816 6044
.org 0xc5818
	lsls r0, r0, #1	@ 000c5818 4000
.org 0xc581a
	lsrs r3, r0, #1	@ 000c581a 4308
.org 0xc581c
	mov r1, r9	@ 000c581c 4946
.org 0xc581e
	str r3, [r1, #0]	@ 000c581e 0b60
.org 0xc5820
	lsrs r0, r0, #17	@ 000c5820 400c
.org 0xc5822
	movs r1, #7	@ 000c5822 0721
.org 0xc5824
	ands r0, r1	@ 000c5824 0840
.org 0xc5826
	adds r0, #68	@ 000c5826 4430
.org 0xc5828
	adds r2, r2, r0	@ 000c5828 1218
.org 0xc582a
	movs r0, #160	@ 000c582a a020
.org 0xc582c
	lsls r0, r0, #1	@ 000c582c 4000
.org 0xc582e
	subs r0, r0, r2	@ 000c582e 801a
.org 0xc5830
	lsls r1, r7, #1	@ 000c5830 7900
.org 0xc5832
	muls r0, r1	@ 000c5832 4843
.org 0xc5834
	adds r0, r2, r0	@ 000c5834 1018
.org 0xc5836
	lsls r0, r0, #24	@ 000c5836 0006
.org 0xc5838
	lsrs r2, r0, #24	@ 000c5838 020e
.org 0xc583a
	movs r1, #128	@ 000c583a 8021
.org 0xc583c
	lsls r1, r1, #23	@ 000c583c c905
.org 0xc583e
	adds r0, r0, r1	@ 000c583e 4018
.org 0xc5840
	lsrs r0, r0, #23	@ 000c5840 c00d
.org 0xc5842
	adds r0, r0, r6	@ 000c5842 8019
.org 0xc5844
	movs r1, #0	@ 000c5844 0021
.org 0xc5846
	ldrsh r0, [r0, r1]	@ 000c5846 405e
.org 0xc5848
	mov r1, r8	@ 000c5848 4146
.org 0xc584a
	muls r1, r0	@ 000c584a 4143
.org 0xc584c
	adds r0, r1, #0	@ 000c584c 081c
.org 0xc584e
	cmp r0, #0	@ 000c584e 0028
.org 0xc5850
	bge.n 0xc5854	@ 000c5850 00da
.org 0xc5852
	adds r0, #255	@ 000c5852 ff30
.org 0xc5854
	asrs r0, r0, #8	@ 000c5854 0012
.org 0xc5856
	str r0, [sp, #0]	@ 000c5856 0090
.org 0xc5858
	lsls r0, r2, #24	@ 000c5858 1006
.org 0xc585a
	lsrs r0, r0, #23	@ 000c585a c00d
.org 0xc585c
	adds r0, r0, r6	@ 000c585c 8019
.org 0xc585e
	movs r2, #0	@ 000c585e 0022
.org 0xc5860
	ldrsh r0, [r0, r2]	@ 000c5860 805e
.org 0xc5862
	mov r1, r8	@ 000c5862 4146
.org 0xc5864
	muls r1, r0	@ 000c5864 4143
.org 0xc5866
	adds r0, r1, #0	@ 000c5866 081c
.org 0xc5868
	cmp r0, #0	@ 000c5868 0028
.org 0xc586a
	bge.n 0xc586e	@ 000c586a 00da
.org 0xc586c
	adds r0, #255	@ 000c586c ff30
.org 0xc586e
	asrs r0, r0, #8	@ 000c586e 0012
.org 0xc5870
	str r0, [sp, #4]	@ 000c5870 0190
.org 0xc5872
	adds r1, r4, #0	@ 000c5872 211c
.org 0xc5874
	adds r1, #84	@ 000c5874 5431
.org 0xc5876
	ldr r2, [pc, #212]	@ 000c5876 354a
.org 0xc5878
	muls r3, r2	@ 000c5878 5343
.org 0xc587a
	add r3, ip	@ 000c587a 6344
.org 0xc587c
	lsls r3, r3, #1	@ 000c587c 5b00
.org 0xc587e
	lsrs r0, r3, #1	@ 000c587e 5808
.org 0xc5880
	mov r2, r9	@ 000c5880 4a46
.org 0xc5882
	str r0, [r2, #0]	@ 000c5882 1060
.org 0xc5884
	lsrs r3, r3, #17	@ 000c5884 5b0c
.org 0xc5886
	movs r0, #1	@ 000c5886 0120
.org 0xc5888
	ands r3, r0	@ 000c5888 0340
.org 0xc588a
	adds r0, r4, #0	@ 000c588a 201c
.org 0xc588c
	mov r2, sp	@ 000c588c 6a46
.org 0xc588e
	bl 0xc544c	@ 000c588e fff7ddfd
.org 0xc5892
	cmp r0, #0	@ 000c5892 0028
.org 0xc5894
	beq.n 0xc58a0	@ 000c5894 04d0
.org 0xc5896
	adds r1, r4, #0	@ 000c5896 211c
.org 0xc5898
	adds r1, #180	@ 000c5898 b431
.org 0xc589a
	ldrh r0, [r1, #0]	@ 000c589a 0888
.org 0xc589c
	adds r0, #1	@ 000c589c 0130
.org 0xc589e
	strh r0, [r1, #0]	@ 000c589e 0880
.org 0xc58a0
	ldrb r0, [r4, #18]	@ 000c58a0 a07c
.org 0xc58a2
	subs r0, #1	@ 000c58a2 0138
.org 0xc58a4
	strb r0, [r4, #18]	@ 000c58a4 a074
.org 0xc58a6
	lsls r0, r0, #24	@ 000c58a6 0006
.org 0xc58a8
	cmp r0, #0	@ 000c58a8 0028
.org 0xc58aa
	bne.n 0xc5930	@ 000c58aa 41d1
.org 0xc58ac
	movs r0, #64	@ 000c58ac 4020
.org 0xc58ae
	bl 0x2b10	@ 000c58ae 3df72ff9
.org 0xc58b2
	lsls r0, r7, #1	@ 000c58b2 7800
.org 0xc58b4
	subs r0, #1	@ 000c58b4 0138
.org 0xc58b6
	mov r8, r0	@ 000c58b6 8046
.org 0xc58b8
	lsls r1, r0, #12	@ 000c58b8 0103
.org 0xc58ba
	ldr r0, [r4, #84]	@ 000c58ba 606d
.org 0xc58bc
	subs r0, r0, r1	@ 000c58bc 401a
.org 0xc58be
	str r0, [sp, #20]	@ 000c58be 0590
.org 0xc58c0
	mov r0, sl	@ 000c58c0 5046
.org 0xc58c2
	adds r0, #180	@ 000c58c2 b430
.org 0xc58c4
	ldr r0, [r0, #0]	@ 000c58c4 0068
.org 0xc58c6
	str r0, [sp, #24]	@ 000c58c6 0690
.org 0xc58c8
	movs r5, #0	@ 000c58c8 0025
.org 0xc58ca
	ldr r0, [sp, #16]	@ 000c58ca 0498
.org 0xc58cc
	lsls r1, r0, #2	@ 000c58cc 8100
.org 0xc58ce
	ldr r0, [pc, #136]	@ 000c58ce 2248
.org 0xc58d0
	adds r7, r1, r0	@ 000c58d0 0f18
.org 0xc58d2
	add r6, sp, #8	@ 000c58d2 02ae
.org 0xc58d4
	ldr r0, [pc, #132]	@ 000c58d4 2148
.org 0xc58d6
	adds r1, r1, r0	@ 000c58d6 0918
.org 0xc58d8
	mov r9, r1	@ 000c58d8 8946
.org 0xc58da
	ldr r0, [r7, #0]	@ 000c58da 3868
.org 0xc58dc
	lsls r1, r5, #3	@ 000c58dc e900
.org 0xc58de
	adds r0, r1, r0	@ 000c58de 0818
.org 0xc58e0
	ldr r0, [r0, #0]	@ 000c58e0 0068
.org 0xc58e2
	mov r2, r8	@ 000c58e2 4246
.org 0xc58e4
	muls r2, r0	@ 000c58e4 4243
.org 0xc58e6
	adds r0, r2, #0	@ 000c58e6 101c
.org 0xc58e8
	ldr r2, [sp, #20]	@ 000c58e8 059a
.org 0xc58ea
	adds r0, r0, r2	@ 000c58ea 8018
.org 0xc58ec
	str r0, [sp, #8]	@ 000c58ec 0290
.org 0xc58ee
	ldr r0, [r7, #0]	@ 000c58ee 3868
.org 0xc58f0
	adds r1, r1, r0	@ 000c58f0 0918
.org 0xc58f2
	ldr r0, [r1, #4]	@ 000c58f2 4868
.org 0xc58f4
	ldr r1, [sp, #24]	@ 000c58f4 0699
.org 0xc58f6
	adds r0, r0, r1	@ 000c58f6 4018
.org 0xc58f8
	str r0, [r6, #4]	@ 000c58f8 7060
.org 0xc58fa
	mov r2, r9	@ 000c58fa 4a46
.org 0xc58fc
	ldr r1, [r2, #0]	@ 000c58fc 1168
.org 0xc58fe
	lsls r0, r5, #1	@ 000c58fe 6800
.org 0xc5900
	adds r0, r0, r1	@ 000c5900 4018
.org 0xc5902
	movs r1, #0	@ 000c5902 0021
.org 0xc5904
	ldrsh r2, [r0, r1]	@ 000c5904 425e
.org 0xc5906
	lsls r3, r5, #24	@ 000c5906 2b06
.org 0xc5908
	lsrs r3, r3, #24	@ 000c5908 1b0e
.org 0xc590a
	adds r0, r4, #0	@ 000c590a 201c
.org 0xc590c
	adds r1, r6, #0	@ 000c590c 311c
.org 0xc590e
	bl 0xc54b0	@ 000c590e fff7cffd
.org 0xc5912
	cmp r0, #0	@ 000c5912 0028
.org 0xc5914
	beq.n 0xc5926	@ 000c5914 07d0
.org 0xc5916
	adds r1, r4, #0	@ 000c5916 211c
.org 0xc5918
	adds r1, #180	@ 000c5918 b431
.org 0xc591a
	ldrh r0, [r1, #0]	@ 000c591a 0888
.org 0xc591c
	adds r0, #1	@ 000c591c 0130
.org 0xc591e
	strh r0, [r1, #0]	@ 000c591e 0880
.org 0xc5920
	adds r5, #1	@ 000c5920 0135
.org 0xc5922
	cmp r5, #5	@ 000c5922 052d
.org 0xc5924
	ble.n 0xc58da	@ 000c5924 d9dd
.org 0xc5926
	movs r1, #0	@ 000c5926 0021
.org 0xc5928
	movs r0, #1	@ 000c5928 0120
.org 0xc592a
	strb r0, [r4, #13]	@ 000c592a 6073
.org 0xc592c
	strb r1, [r4, #14]	@ 000c592c a173
.org 0xc592e
	strb r1, [r4, #15]	@ 000c592e e173
.org 0xc5930
	add sp, #28	@ 000c5930 07b0
.org 0xc5932
	pop {r3, r4, r5}	@ 000c5932 38bc
.org 0xc5934
	mov r8, r3	@ 000c5934 9846
.org 0xc5936
	mov r9, r4	@ 000c5936 a146
.org 0xc5938
	mov sl, r5	@ 000c5938 aa46
.org 0xc593a
	pop {r4, r5, r6, r7}	@ 000c593a f0bc
.org 0xc593c
	pop {r0}	@ 000c593c 01bc
.org 0xc593e
	bx r0	@ 000c593e 0047
