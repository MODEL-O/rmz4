@ FUN_080666d4  entry 0x080666d4  size 366
.thumb
.org 0x666d4
FUN_080666d4:
	push {r4, r5, r6, r7, lr}	@ 000666d4 f0b5
.org 0x666d6
	mov r7, sl	@ 000666d6 5746
.org 0x666d8
	mov r6, r9	@ 000666d8 4e46
.org 0x666da
	mov r5, r8	@ 000666da 4546
.org 0x666dc
	push {r5, r6, r7}	@ 000666dc e0b4
.org 0x666de
	adds r7, r0, #0	@ 000666de 071c
.org 0x666e0
	bl 0x1cc9c	@ 000666e0 b6f7dcfa
.org 0x666e4
	ldrb r1, [r7, #10]	@ 000666e4 b97a
.org 0x666e6
	movs r0, #1	@ 000666e6 0120
.org 0x666e8
	orrs r0, r1	@ 000666e8 0843
.org 0x666ea
	movs r1, #2	@ 000666ea 0221
.org 0x666ec
	orrs r0, r1	@ 000666ec 0843
.org 0x666ee
	strb r0, [r7, #10]	@ 000666ee b872
.org 0x666f0
	adds r0, r7, #0	@ 000666f0 381c
.org 0x666f2
	bl 0x1ceec	@ 000666f2 b6f7fbfb
.org 0x666f6
	ldr r1, [pc, #332]	@ 000666f6 5349
.org 0x666f8
	adds r0, r7, #0	@ 000666f8 381c
.org 0x666fa
	bl 0x1cf00	@ 000666fa b6f701fc
.org 0x666fe
	adds r0, r7, #0	@ 000666fe 381c
.org 0x66700
	bl 0x1cff0	@ 00066700 b6f776fc
.org 0x66704
	adds r0, r7, #0	@ 00066704 381c
.org 0x66706
	adds r0, #76	@ 00066706 4c30
.org 0x66708
	movs r1, #0	@ 00066708 0021
.org 0x6670a
	strb r1, [r0, #0]	@ 0006670a 0170
.org 0x6670c
	adds r2, r7, #0	@ 0006670c 3a1c
.org 0x6670e
	adds r2, #74	@ 0006670e 4a32
.org 0x66710
	ldrb r1, [r2, #0]	@ 00066710 1178
.org 0x66712
	movs r0, #17	@ 00066712 1120
.org 0x66714
	negs r0, r0	@ 00066714 4042
.org 0x66716
	ands r0, r1	@ 00066716 0840
.org 0x66718
	strb r0, [r2, #0]	@ 00066718 1070
.org 0x6671a
	ldrb r1, [r7, #10]	@ 0006671a b97a
.org 0x6671c
	movs r0, #239	@ 0006671c ef20
.org 0x6671e
	ands r0, r1	@ 0006671e 0840
.org 0x66720
	strb r0, [r7, #10]	@ 00066720 b872
.org 0x66722
	ldr r1, [pc, #292]	@ 00066722 4949
.org 0x66724
	adds r0, r7, #0	@ 00066724 381c
.org 0x66726
	movs r2, #64	@ 00066726 4022
.org 0x66728
	bl 0x503cc	@ 00066728 e9f750fe
.org 0x6672c
	ldr r1, [pc, #284]	@ 0006672c 4749
.org 0x6672e
	adds r0, r7, #0	@ 0006672e 381c
.org 0x66730
	adds r0, #116	@ 00066730 7430
.org 0x66732
	str r1, [r0, #36]	@ 00066732 4162
.org 0x66734
	ldr r0, [r7, #84]	@ 00066734 786d
.org 0x66736
	ldr r1, [r7, #88]	@ 00066736 b96d
.org 0x66738
	bl 0x8534	@ 00066738 a1f7fcfe
.org 0x6673c
	ldr r2, [pc, #272]	@ 0006673c 444a
.org 0x6673e
	adds r0, r0, r2	@ 0006673e 8018
.org 0x66740
	str r0, [r7, #88]	@ 00066740 b865
.org 0x66742
	movs r0, #180	@ 00066742 b420
.org 0x66744
	adds r0, r0, r7	@ 00066744 c019
.org 0x66746
	mov r9, r0	@ 00066746 8146
.org 0x66748
	ldr r0, [r7, #84]	@ 00066748 786d
.org 0x6674a
	mov r1, r9	@ 0006674a 4946
.org 0x6674c
	str r0, [r1, #0]	@ 0006674c 0860
.org 0x6674e
	ldr r0, [r7, #88]	@ 0006674e b86d
.org 0x66750
	str r0, [r1, #4]	@ 00066750 4860
.org 0x66752
	ldr r0, [r7, #84]	@ 00066752 786d
.org 0x66754
	ldr r1, [r7, #88]	@ 00066754 b96d
.org 0x66756
	bl 0x8988	@ 00066756 a2f717f9
.org 0x6675a
	mov r2, r9	@ 0006675a 4a46
.org 0x6675c
	str r0, [r2, #8]	@ 0006675c 9060
.org 0x6675e
	ldr r0, [r7, #84]	@ 0006675e 786d
.org 0x66760
	ldr r1, [r7, #88]	@ 00066760 b96d
.org 0x66762
	bl 0x8868	@ 00066762 a2f781f8
.org 0x66766
	mov r1, r9	@ 00066766 4946
.org 0x66768
	str r0, [r1, #12]	@ 00066768 c860
.org 0x6676a
	ldr r1, [r1, #8]	@ 0006676a 8968
.org 0x6676c
	subs r0, r0, r1	@ 0006676c 401a
.org 0x6676e
	asrs r0, r0, #1	@ 0006676e 4010
.org 0x66770
	adds r1, r1, r0	@ 00066770 0918
.org 0x66772
	mov r2, r9	@ 00066772 4a46
.org 0x66774
	str r1, [r2, #16]	@ 00066774 1161
.org 0x66776
	movs r0, #0	@ 00066776 0020
.org 0x66778
	str r0, [r2, #24]	@ 00066778 9061
.org 0x6677a
	adds r0, r7, #0	@ 0006677a 381c
.org 0x6677c
	adds r0, #222	@ 0006677c de30
.org 0x6677e
	movs r1, #0	@ 0006677e 0021
.org 0x66780
	strb r1, [r0, #0]	@ 00066780 0170
.org 0x66782
	movs r4, #135	@ 00066782 8724
.org 0x66784
	lsls r4, r4, #4	@ 00066784 2401
.org 0x66786
	ldr r2, [pc, #204]	@ 00066786 334a
.org 0x66788
	mov r8, r2	@ 00066788 9046
.org 0x6678a
	adds r0, r4, r2	@ 0006678a a018
.org 0x6678c
	ldr r6, [pc, #200]	@ 0006678c 324e
.org 0x6678e
	adds r1, r6, #0	@ 0006678e 311c
.org 0x66790
	adds r1, #216	@ 00066790 d831
.org 0x66792
	ldrh r1, [r1, #0]	@ 00066792 0988
.org 0x66794
	ldrh r2, [r0, #6]	@ 00066794 c288
.org 0x66796
	lsrs r2, r2, #6	@ 00066796 9209
.org 0x66798
	subs r1, r1, r2	@ 00066798 891a
.org 0x6679a
	lsls r1, r1, #5	@ 0006679a 4901
.org 0x6679c
	movs r2, #128	@ 0006679c 8022
.org 0x6679e
	lsls r2, r2, #9	@ 0006679e 5202
.org 0x667a0
	adds r1, r1, r2	@ 000667a0 8918
.org 0x667a2
	bl 0x1d30	@ 000667a2 9bf7c5fa
.org 0x667a6
	ldr r0, [pc, #180]	@ 000667a6 2d48
.org 0x667a8
	adds r4, r4, r0	@ 000667a8 2418
.org 0x667aa
	ldr r5, [pc, #180]	@ 000667aa 2d4d
.org 0x667ac
	adds r0, r5, #0	@ 000667ac 281c
.org 0x667ae
	adds r0, #216	@ 000667ae d830
.org 0x667b0
	ldrh r1, [r0, #0]	@ 000667b0 0188
.org 0x667b2
	ldrb r0, [r4, #7]	@ 000667b2 e079
.org 0x667b4
	subs r1, r1, r0	@ 000667b4 091a
.org 0x667b6
	lsls r1, r1, #5	@ 000667b6 4901
.org 0x667b8
	movs r2, #128	@ 000667b8 8022
.org 0x667ba
	lsls r2, r2, #2	@ 000667ba 9200
.org 0x667bc
	mov sl, r2	@ 000667bc 9246
.org 0x667be
	add r1, sl	@ 000667be 5144
.org 0x667c0
	adds r0, r4, #0	@ 000667c0 201c
.org 0x667c2
	bl 0x2208	@ 000667c2 9bf721fd
.org 0x667c6
	ldr r4, [pc, #156]	@ 000667c6 274c
.org 0x667c8
	add r8, r4	@ 000667c8 a044
.org 0x667ca
	adds r6, #214	@ 000667ca d636
.org 0x667cc
	ldrh r1, [r6, #0]	@ 000667cc 3188
.org 0x667ce
	mov r2, r8	@ 000667ce 4246
.org 0x667d0
	ldrh r0, [r2, #6]	@ 000667d0 d088
.org 0x667d2
	lsrs r0, r0, #6	@ 000667d2 8009
.org 0x667d4
	subs r1, r1, r0	@ 000667d4 091a
.org 0x667d6
	lsls r1, r1, #5	@ 000667d6 4901
.org 0x667d8
	movs r0, #128	@ 000667d8 8020
.org 0x667da
	lsls r0, r0, #9	@ 000667da 4002
.org 0x667dc
	adds r1, r1, r0	@ 000667dc 0918
.org 0x667de
	mov r0, r8	@ 000667de 4046
.org 0x667e0
	bl 0x1d30	@ 000667e0 9bf7a6fa
.org 0x667e4
	ldr r1, [pc, #116]	@ 000667e4 1d49
.org 0x667e6
	adds r4, r4, r1	@ 000667e6 6418
.org 0x667e8
	adds r5, #214	@ 000667e8 d635
.org 0x667ea
	ldrh r1, [r5, #0]	@ 000667ea 2988
.org 0x667ec
	ldrb r0, [r4, #7]	@ 000667ec e079
.org 0x667ee
	subs r1, r1, r0	@ 000667ee 091a
.org 0x667f0
	lsls r1, r1, #5	@ 000667f0 4901
.org 0x667f2
	add r1, sl	@ 000667f2 5144
.org 0x667f4
	adds r0, r4, #0	@ 000667f4 201c
.org 0x667f6
	bl 0x2208	@ 000667f6 9bf707fd
.org 0x667fa
	adds r0, r7, #0	@ 000667fa 381c
.org 0x667fc
	adds r0, #217	@ 000667fc d930
.org 0x667fe
	movs r2, #0	@ 000667fe 0022
.org 0x66800
	strb r2, [r0, #0]	@ 00066800 0270
.org 0x66802
	adds r0, #1	@ 00066802 0130
.org 0x66804
	strb r2, [r0, #0]	@ 00066804 0270
.org 0x66806
	adds r0, #1	@ 00066806 0130
.org 0x66808
	strb r2, [r0, #0]	@ 00066808 0270
.org 0x6680a
	adds r1, r7, #0	@ 0006680a 391c
.org 0x6680c
	adds r1, #220	@ 0006680c dc31
.org 0x6680e
	movs r0, #32	@ 0006680e 2020
.org 0x66810
	strb r0, [r1, #0]	@ 00066810 0870
.org 0x66812
	movs r0, #0	@ 00066812 0020
.org 0x66814
	str r0, [r7, #40]	@ 00066814 b862
.org 0x66816
	mov r1, r9	@ 00066816 4946
.org 0x66818
	str r0, [r1, #20]	@ 00066818 4861
.org 0x6681a
	ldr r1, [pc, #76]	@ 0006681a 1349
.org 0x6681c
	ldrb r0, [r7, #9]	@ 0006681c 787a
.org 0x6681e
	lsls r0, r0, #2	@ 0006681e 8000
.org 0x66820
	adds r0, r0, r1	@ 00066820 4018
.org 0x66822
	movs r1, #1	@ 00066822 0121
.org 0x66824
	str r1, [r7, #12]	@ 00066824 f960
.org 0x66826
	ldr r0, [r0, #0]	@ 00066826 0068
.org 0x66828
	ldr r0, [r0, #4]	@ 00066828 4068
.org 0x6682a
	str r0, [r7, #20]	@ 0006682a 7861
.org 0x6682c
	strb r2, [r7, #13]	@ 0006682c 7a73
.org 0x6682e
	adds r0, r7, #0	@ 0006682e 381c
.org 0x66830
	bl 0x6686c	@ 00066830 00f01cf8
.org 0x66834
	pop {r3, r4, r5}	@ 00066834 38bc
.org 0x66836
	mov r8, r3	@ 00066836 9846
.org 0x66838
	mov r9, r4	@ 00066838 a146
.org 0x6683a
	mov sl, r5	@ 0006683a aa46
.org 0x6683c
	pop {r4, r5, r6, r7}	@ 0006683c f0bc
.org 0x6683e
	pop {r0}	@ 0006683e 01bc
.org 0x66840
	bx r0	@ 00066840 0047
