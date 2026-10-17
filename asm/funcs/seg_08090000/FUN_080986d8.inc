@ FUN_080986d8  entry 0x080986d8  size 856
.thumb
.org 0x986d8
FUN_080986d8:
	push {r4, r5, r6, lr}	@ 000986d8 70b5
.org 0x986da
	sub sp, #8	@ 000986da 82b0
.org 0x986dc
	adds r5, r0, #0	@ 000986dc 051c
.org 0x986de
	ldrb r0, [r5, #16]	@ 000986de 287c
.org 0x986e0
	cmp r0, #0	@ 000986e0 0028
.org 0x986e2
	beq.n 0x986ec	@ 000986e2 03d0
.org 0x986e4
	adds r0, r5, #0	@ 000986e4 281c
.org 0x986e6
	bl 0x98a8c	@ 000986e6 00f0d1f9
.org 0x986ea
	b.n 0x98a82	@ 000986ea cae1
.org 0x986ec
	ldrb r0, [r5, #17]	@ 000986ec 687c
.org 0x986ee
	cmp r0, #0	@ 000986ee 0028
.org 0x986f0
	beq.n 0x98728	@ 000986f0 1ad0
.org 0x986f2
	ldr r0, [pc, #96]	@ 000986f2 1848
.org 0x986f4
	ldr r1, [pc, #96]	@ 000986f4 1849
.org 0x986f6
	movs r4, #186	@ 000986f6 ba24
.org 0x986f8
	lsls r4, r4, #1	@ 000986f8 6400
.org 0x986fa
	adds r1, r1, r4	@ 000986fa 0919
.org 0x986fc
	ldrh r1, [r1, #0]	@ 000986fc 0988
.org 0x986fe
	ldrh r2, [r0, #6]	@ 000986fe c288
.org 0x98700
	lsrs r2, r2, #6	@ 00098700 9209
.org 0x98702
	subs r1, r1, r2	@ 00098702 891a
.org 0x98704
	lsls r1, r1, #5	@ 00098704 4901
.org 0x98706
	movs r2, #128	@ 00098706 8022
.org 0x98708
	lsls r2, r2, #9	@ 00098708 5202
.org 0x9870a
	adds r1, r1, r2	@ 0009870a 8918
.org 0x9870c
	bl 0x1d30	@ 0009870c 69f710fb
.org 0x98710
	ldr r0, [pc, #72]	@ 00098710 1248
.org 0x98712
	ldr r1, [pc, #76]	@ 00098712 1349
.org 0x98714
	adds r1, r1, r4	@ 00098714 0919
.org 0x98716
	ldrh r1, [r1, #0]	@ 00098716 0988
.org 0x98718
	ldrb r2, [r0, #7]	@ 00098718 c279
.org 0x9871a
	subs r1, r1, r2	@ 0009871a 891a
.org 0x9871c
	lsls r1, r1, #5	@ 0009871c 4901
.org 0x9871e
	movs r3, #128	@ 0009871e 8023
.org 0x98720
	lsls r3, r3, #2	@ 00098720 9b00
.org 0x98722
	adds r1, r1, r3	@ 00098722 c918
.org 0x98724
	bl 0x2208	@ 00098724 69f770fd
.org 0x98728
	adds r0, r5, #0	@ 00098728 281c
.org 0x9872a
	adds r0, #140	@ 0009872a 8c30
.org 0x9872c
	ldr r2, [r0, #0]	@ 0009872c 0268
.org 0x9872e
	movs r0, #128	@ 0009872e 8020
.org 0x98730
	lsls r0, r0, #2	@ 00098730 8000
.org 0x98732
	ands r0, r2	@ 00098732 1040
.org 0x98734
	cmp r0, #0	@ 00098734 0028
.org 0x98736
	beq.n 0x98768	@ 00098736 17d0
.org 0x98738
	ldr r1, [pc, #40]	@ 00098738 0a49
.org 0x9873a
	ldrb r0, [r5, #9]	@ 0009873a 687a
.org 0x9873c
	lsls r0, r0, #2	@ 0009873c 8000
.org 0x9873e
	adds r0, r0, r1	@ 0009873e 4018
.org 0x98740
	movs r1, #2	@ 00098740 0221
.org 0x98742
	str r1, [r5, #12]	@ 00098742 e960
.org 0x98744
	ldr r0, [r0, #0]	@ 00098744 0068
.org 0x98746
	ldr r0, [r0, #8]	@ 00098746 8068
.org 0x98748
	str r0, [r5, #20]	@ 00098748 6861
.org 0x9874a
	adds r0, r5, #0	@ 0009874a 281c
.org 0x9874c
	bl 0x98b20	@ 0009874c 00f0e8f9
.org 0x98750
	b.n 0x98a82	@ 00098750 97e1
.org 0x98752
	.byte 0x00	@ 00098752 data
.org 0x98753
	.byte 0x00	@ 00098753 data
.org 0x98754
	.byte 0x88,0x4e,0xc4,0x08	@ 00098754 data
.org 0x98758
	.byte 0x40,0xe0,0x02,0x02	@ 00098758 data
.org 0x9875c
	.byte 0x94,0x4e,0xc4,0x08	@ 0009875c data
.org 0x98760
	.byte 0x40,0xde,0x02,0x02	@ 00098760 data
.org 0x98764
	.byte 0x40,0xdb,0x85,0x08	@ 00098764 data
.org 0x98768
	adds r0, r5, #0	@ 00098768 281c
.org 0x9876a
	adds r0, #192	@ 0009876a c030
.org 0x9876c
	ldr r1, [r0, #0]	@ 0009876c 0168
.org 0x9876e
	adds r4, r0, #0	@ 0009876e 041c
.org 0x98770
	cmp r1, #0	@ 00098770 0029
.org 0x98772
	bne.n 0x9879c	@ 00098772 13d1
.org 0x98774
	movs r0, #1	@ 00098774 0120
.org 0x98776
	ands r2, r0	@ 00098776 0240
.org 0x98778
	cmp r2, #0	@ 00098778 002a
.org 0x9877a
	beq.n 0x98796	@ 0009877a 0cd0
.org 0x9877c
	ldr r2, [pc, #84]	@ 0009877c 154a
.org 0x9877e
	movs r0, #0	@ 0009877e 0020
.org 0x98780
	adds r1, r5, #0	@ 00098780 291c
.org 0x98782
	bl 0x2adac	@ 00098782 92f713fb
.org 0x98786
	str r0, [r4, #0]	@ 00098786 2060
.org 0x98788
	cmp r0, #0	@ 00098788 0028
.org 0x9878a
	beq.n 0x987ea	@ 0009878a 2ed0
.org 0x9878c
	adds r0, r5, #0	@ 0009878c 281c
.org 0x9878e
	adds r0, #116	@ 0009878e 7430
.org 0x98790
	ldr r1, [pc, #68]	@ 00098790 1149
.org 0x98792
	bl 0x5784	@ 00098792 6cf7f7ff
.org 0x98796
	ldr r0, [r4, #0]	@ 00098796 2068
.org 0x98798
	cmp r0, #0	@ 00098798 0028
.org 0x9879a
	beq.n 0x987ea	@ 0009879a 26d0
.org 0x9879c
	ldr r0, [r4, #0]	@ 0009879c 2068
.org 0x9879e
	bl 0x2b3e4	@ 0009879e 92f721fe
.org 0x987a2
	cmp r0, #0	@ 000987a2 0028
.org 0x987a4
	bne.n 0x987dc	@ 000987a4 1ad1
.org 0x987a6
	ldrb r0, [r5, #30]	@ 000987a6 a87f
.org 0x987a8
	lsls r0, r0, #8	@ 000987a8 0002
.org 0x987aa
	adds r1, r5, #0	@ 000987aa 291c
.org 0x987ac
	adds r1, #112	@ 000987ac 7031
.org 0x987ae
	ldrb r1, [r1, #0]	@ 000987ae 0978
.org 0x987b0
	orrs r1, r0	@ 000987b0 0143
.org 0x987b2
	adds r0, r5, #0	@ 000987b2 281c
.org 0x987b4
	adds r0, #113	@ 000987b4 7130
.org 0x987b6
	movs r2, #0	@ 000987b6 0022
.org 0x987b8
	ldrsb r2, [r0, r2]	@ 000987b8 8256
.org 0x987ba
	lsls r2, r2, #16	@ 000987ba 1204
.org 0x987bc
	lsrs r2, r2, #16	@ 000987bc 120c
.org 0x987be
	adds r3, r1, #1	@ 000987be 4b1c
.org 0x987c0
	lsls r3, r3, #16	@ 000987c0 1b04
.org 0x987c2
	lsrs r3, r3, #16	@ 000987c2 1b0c
.org 0x987c4
	adds r0, r5, #0	@ 000987c4 281c
.org 0x987c6
	bl 0x1cfc8	@ 000987c6 84f7fffb
.org 0x987ca
	adds r0, r5, #0	@ 000987ca 281c
.org 0x987cc
	bl 0x1cff0	@ 000987cc 84f710fc
.org 0x987d0
	b.n 0x98a82	@ 000987d0 57e1
.org 0x987d2
	.byte 0x00	@ 000987d2 data
.org 0x987d3
	.byte 0x00	@ 000987d3 data
.org 0x987d4
	.byte 0x70,0x0c,0x86,0x08	@ 000987d4 data
.org 0x987d8
	.byte 0xd4,0x0b,0x86,0x08	@ 000987d8 data
.org 0x987dc
	adds r0, r5, #0	@ 000987dc 281c
.org 0x987de
	adds r0, #116	@ 000987de 7430
.org 0x987e0
	ldr r1, [pc, #88]	@ 000987e0 1649
.org 0x987e2
	bl 0x5784	@ 000987e2 6cf7cfff
.org 0x987e6
	movs r0, #0	@ 000987e6 0020
.org 0x987e8
	str r0, [r4, #0]	@ 000987e8 2060
.org 0x987ea
	ldrb r3, [r5, #13]	@ 000987ea 6b7b
.org 0x987ec
	cmp r3, #0	@ 000987ec 002b
.org 0x987ee
	beq.n 0x987f2	@ 000987ee 00d0
.org 0x987f0
	b.n 0x9893a	@ 000987f0 a3e0
.org 0x987f2
	ldrb r0, [r5, #19]	@ 000987f2 e87c
.org 0x987f4
	ldrb r6, [r5, #18]	@ 000987f4 ae7c
.org 0x987f6
	adds r4, r0, r6	@ 000987f6 8419
.org 0x987f8
	strb r4, [r5, #18]	@ 000987f8 ac74
.org 0x987fa
	adds r2, r5, #0	@ 000987fa 2a1c
.org 0x987fc
	adds r2, #180	@ 000987fc b432
.org 0x987fe
	ldr r3, [pc, #64]	@ 000987fe 104b
.org 0x98800
	adds r0, r4, #0	@ 00098800 201c
.org 0x98802
	adds r0, #64	@ 00098802 4030
.org 0x98804
	lsls r0, r0, #24	@ 00098804 0006
.org 0x98806
	lsrs r0, r0, #23	@ 00098806 c00d
.org 0x98808
	adds r0, r0, r3	@ 00098808 c018
.org 0x9880a
	movs r6, #0	@ 0009880a 0026
.org 0x9880c
	ldrsh r1, [r0, r6]	@ 0009880c 815f
.org 0x9880e
	lsls r1, r1, #4	@ 0009880e 0901
.org 0x98810
	ldr r0, [r2, #0]	@ 00098810 1068
.org 0x98812
	adds r0, r0, r1	@ 00098812 4018
.org 0x98814
	str r0, [r5, #84]	@ 00098814 6865
.org 0x98816
	adds r2, #4	@ 00098816 0432
.org 0x98818
	ldrb r0, [r5, #18]	@ 00098818 a87c
.org 0x9881a
	lsls r0, r0, #1	@ 0009881a 4000
.org 0x9881c
	adds r0, r0, r3	@ 0009881c c018
.org 0x9881e
	movs r3, #0	@ 0009881e 0023
.org 0x98820
	ldrsh r1, [r0, r3]	@ 00098820 c15e
.org 0x98822
	lsls r1, r1, #4	@ 00098822 0901
.org 0x98824
	ldr r0, [r2, #0]	@ 00098824 1068
.org 0x98826
	adds r0, r0, r1	@ 00098826 4018
.org 0x98828
	str r0, [r5, #88]	@ 00098828 a865
.org 0x9882a
	movs r0, #127	@ 0009882a 7f20
.org 0x9882c
	ands r0, r4	@ 0009882c 2040
.org 0x9882e
	subs r0, #12	@ 0009882e 0c38
.org 0x98830
	lsls r0, r0, #24	@ 00098830 0006
.org 0x98832
	lsrs r0, r0, #24	@ 00098832 000e
.org 0x98834
	cmp r0, #104	@ 00098834 6828
.org 0x98836
	bls.n 0x98848	@ 00098836 07d9
.org 0x98838
	ldr r1, [pc, #8]	@ 00098838 0249
.org 0x9883a
	b.n 0x98868	@ 0009883a 15e0
.org 0x9883c
	.byte 0xbc,0x0b,0x86,0x08	@ 0009883c data
.org 0x98840
	.byte 0x0c,0x93,0x12,0x08	@ 00098840 data
.org 0x98844
	.byte 0x02,0xba,0x00,0x00	@ 00098844 data
.org 0x98848
	ldrb r1, [r5, #10]	@ 00098848 a97a
.org 0x9884a
	movs r0, #16	@ 0009884a 1020
.org 0x9884c
	ands r0, r1	@ 0009884c 0840
.org 0x9884e
	cmp r0, #0	@ 0009884e 0028
.org 0x98850
	beq.n 0x98860	@ 00098850 06d0
.org 0x98852
	lsls r0, r4, #24	@ 00098852 2006
.org 0x98854
	cmp r0, #0	@ 00098854 0028
.org 0x98856
	blt.n 0x98866	@ 00098856 06db
.org 0x98858
	ldr r1, [pc, #0]	@ 00098858 0049
.org 0x9885a
	b.n 0x98868	@ 0009885a 05e0
.org 0x9885c
	.byte 0x03,0xba,0x00,0x00	@ 0009885c data
.org 0x98860
	lsls r0, r4, #24	@ 00098860 2006
.org 0x98862
	cmp r0, #0	@ 00098862 0028
.org 0x98864
	blt.n 0x9888c	@ 00098864 12db
.org 0x98866
	ldr r1, [pc, #32]	@ 00098866 0849
.org 0x98868
	adds r0, r5, #0	@ 00098868 281c
.org 0x9886a
	adds r0, #113	@ 0009886a 7130
.org 0x9886c
	movs r2, #0	@ 0009886c 0022
.org 0x9886e
	ldrsb r2, [r0, r2]	@ 0009886e 8256
.org 0x98870
	lsls r2, r2, #16	@ 00098870 1204
.org 0x98872
	lsrs r2, r2, #16	@ 00098872 120c
.org 0x98874
	adds r0, #1	@ 00098874 0130
.org 0x98876
	movs r3, #0	@ 00098876 0023
.org 0x98878
	ldrsb r3, [r0, r3]	@ 00098878 c356
.org 0x9887a
	lsls r3, r3, #16	@ 0009887a 1b04
.org 0x9887c
	lsrs r3, r3, #16	@ 0009887c 1b0c
.org 0x9887e
	adds r0, r5, #0	@ 0009887e 281c
.org 0x98880
	bl 0x1cfc8	@ 00098880 84f7a2fb
.org 0x98884
	b.n 0x988aa	@ 00098884 11e0
.org 0x98886
	.byte 0x00	@ 00098886 data
.org 0x98887
	.byte 0x00	@ 00098887 data
.org 0x98888
	.byte 0x01,0xba,0x00,0x00	@ 00098888 data
.org 0x9888c
	ldr r1, [pc, #100]	@ 0009888c 1949
.org 0x9888e
	adds r0, r5, #0	@ 0009888e 281c
.org 0x98890
	adds r0, #113	@ 00098890 7130
.org 0x98892
	movs r2, #0	@ 00098892 0022
.org 0x98894
	ldrsb r2, [r0, r2]	@ 00098894 8256
.org 0x98896
	lsls r2, r2, #16	@ 00098896 1204
.org 0x98898
	lsrs r2, r2, #16	@ 00098898 120c
.org 0x9889a
	adds r0, #1	@ 0009889a 0130
.org 0x9889c
	movs r3, #0	@ 0009889c 0023
.org 0x9889e
	ldrsb r3, [r0, r3]	@ 0009889e c356
.org 0x988a0
	lsls r3, r3, #16	@ 000988a0 1b04
.org 0x988a2
	lsrs r3, r3, #16	@ 000988a2 1b0c
.org 0x988a4
	adds r0, r5, #0	@ 000988a4 281c
.org 0x988a6
	bl 0x1cfc8	@ 000988a6 84f78ffb
.org 0x988aa
	adds r1, r5, #0	@ 000988aa 291c
.org 0x988ac
	adds r1, #190	@ 000988ac be31
.org 0x988ae
	ldrb r0, [r1, #0]	@ 000988ae 0878
.org 0x988b0
	cmp r0, #0	@ 000988b0 0028
.org 0x988b2
	bne.n 0x98934	@ 000988b2 3fd1
.org 0x988b4
	ldr r0, [pc, #64]	@ 000988b4 1048
.org 0x988b6
	ldr r4, [r0, #0]	@ 000988b6 0468
.org 0x988b8
	ldr r3, [r4, #84]	@ 000988b8 636d
.org 0x988ba
	ldr r2, [r5, #84]	@ 000988ba 6a6d
.org 0x988bc
	subs r0, r3, r2	@ 000988bc 981a
.org 0x988be
	movs r6, #208	@ 000988be d026
.org 0x988c0
	lsls r6, r6, #7	@ 000988c0 f601
.org 0x988c2
	adds r0, r0, r6	@ 000988c2 8019
.org 0x988c4
	movs r1, #208	@ 000988c4 d021
.org 0x988c6
	lsls r1, r1, #8	@ 000988c6 0902
.org 0x988c8
	cmp r0, r1	@ 000988c8 8842
.org 0x988ca
	bls.n 0x988ce	@ 000988ca 00d9
.org 0x988cc
	b.n 0x98a7c	@ 000988cc d6e0
.org 0x988ce
	ldr r0, [r4, #88]	@ 000988ce a06d
.org 0x988d0
	ldr r1, [r5, #88]	@ 000988d0 a96d
.org 0x988d2
	subs r0, r0, r1	@ 000988d2 401a
.org 0x988d4
	movs r1, #192	@ 000988d4 c021
.org 0x988d6
	lsls r1, r1, #7	@ 000988d6 c901
.org 0x988d8
	adds r0, r0, r1	@ 000988d8 4018
.org 0x988da
	movs r1, #192	@ 000988da c021
.org 0x988dc
	lsls r1, r1, #8	@ 000988dc 0902
.org 0x988de
	cmp r0, r1	@ 000988de 8842
.org 0x988e0
	bls.n 0x988e4	@ 000988e0 00d9
.org 0x988e2
	b.n 0x98a7c	@ 000988e2 cbe0
.org 0x988e4
	ldrb r1, [r5, #10]	@ 000988e4 a97a
.org 0x988e6
	movs r0, #16	@ 000988e6 1020
.org 0x988e8
	ands r0, r1	@ 000988e8 0840
.org 0x988ea
	cmp r0, #0	@ 000988ea 0028
.org 0x988ec
	beq.n 0x988fc	@ 000988ec 06d0
.org 0x988ee
	cmp r2, r3	@ 000988ee 9a42
.org 0x988f0
	blt.n 0x98902	@ 000988f0 07db
.org 0x988f2
	b.n 0x98a7c	@ 000988f2 c3e0
.org 0x988f4
	.byte 0x03,0xba,0x00,0x00	@ 000988f4 data
.org 0x988f8
	.byte 0xf0,0xdb,0x02,0x02	@ 000988f8 data
.org 0x988fc
	cmp r2, r3	@ 000988fc 9a42
.org 0x988fe
	bgt.n 0x98902	@ 000988fe 00dc
.org 0x98900
	b.n 0x98a7c	@ 00098900 bce0
.org 0x98902
	movs r0, #16	@ 00098902 1020
.org 0x98904
	ands r0, r1	@ 00098904 0840
.org 0x98906
	cmp r0, #0	@ 00098906 0028
.org 0x98908
	beq.n 0x98910	@ 00098908 02d0
.org 0x9890a
	movs r0, #128	@ 0009890a 8020
.org 0x9890c
	lsls r0, r0, #2	@ 0009890c 8000
.org 0x9890e
	b.n 0x98912	@ 0009890e 00e0
.org 0x98910
	ldr r0, [pc, #28]	@ 00098910 0748
.org 0x98912
	str r0, [r5, #92]	@ 00098912 e865
.org 0x98914
	movs r0, #8	@ 00098914 0820
.org 0x98916
	str r0, [r5, #104]	@ 00098916 a866
.org 0x98918
	movs r0, #144	@ 00098918 9020
.org 0x9891a
	lsls r0, r0, #1	@ 0009891a 4000
.org 0x9891c
	str r0, [r5, #96]	@ 0009891c 2866
.org 0x9891e
	movs r1, #186	@ 0009891e ba21
.org 0x98920
	lsls r1, r1, #8	@ 00098920 0902
.org 0x98922
	adds r0, r5, #0	@ 00098922 281c
.org 0x98924
	bl 0x1cf00	@ 00098924 84f7ecfa
.org 0x98928
	ldrb r0, [r5, #13]	@ 00098928 687b
.org 0x9892a
	adds r0, #1	@ 0009892a 0130
.org 0x9892c
	strb r0, [r5, #13]	@ 0009892c 6873
.org 0x9892e
	b.n 0x98a7c	@ 0009892e a5e0
.org 0x98930
	.byte 0x00,0xfe,0xff,0xff	@ 00098930 data
.org 0x98934
	subs r0, #1	@ 00098934 0138
.org 0x98936
	strb r0, [r1, #0]	@ 00098936 0870
.org 0x98938
	b.n 0x98a7c	@ 00098938 a0e0
.org 0x9893a
	cmp r3, #1	@ 0009893a 012b
.org 0x9893c
	bne.n 0x98998	@ 0009893c 2cd1
.org 0x9893e
	ldr r0, [pc, #80]	@ 0009893e 1448
.org 0x98940
	ldr r2, [r0, #0]	@ 00098940 0268
.org 0x98942
	ldr r0, [r2, #84]	@ 00098942 506d
.org 0x98944
	ldr r4, [r5, #84]	@ 00098944 6c6d
.org 0x98946
	subs r0, r0, r4	@ 00098946 001b
.org 0x98948
	movs r6, #192	@ 00098948 c026
.org 0x9894a
	lsls r6, r6, #6	@ 0009894a b601
.org 0x9894c
	adds r0, r0, r6	@ 0009894c 8019
.org 0x9894e
	movs r1, #192	@ 0009894e c021
.org 0x98950
	lsls r1, r1, #7	@ 00098950 c901
.org 0x98952
	cmp r0, r1	@ 00098952 8842
.org 0x98954
	bhi.n 0x989bc	@ 00098954 32d8
.org 0x98956
	ldr r0, [r2, #88]	@ 00098956 906d
.org 0x98958
	ldr r2, [r5, #88]	@ 00098958 aa6d
.org 0x9895a
	subs r0, r0, r2	@ 0009895a 801a
.org 0x9895c
	adds r0, r0, r1	@ 0009895c 4018
.org 0x9895e
	movs r1, #192	@ 0009895e c021
.org 0x98960
	lsls r1, r1, #8	@ 00098960 0902
.org 0x98962
	cmp r0, r1	@ 00098962 8842
.org 0x98964
	bhi.n 0x989bc	@ 00098964 2ad8
.org 0x98966
	str r4, [sp, #0]	@ 00098966 0094
.org 0x98968
	movs r1, #192	@ 00098968 c021
.org 0x9896a
	lsls r1, r1, #4	@ 0009896a 0901
.org 0x9896c
	adds r0, r2, r1	@ 0009896c 5018
.org 0x9896e
	str r0, [sp, #4]	@ 0009896e 0190
.org 0x98970
	ldrb r1, [r5, #10]	@ 00098970 a97a
.org 0x98972
	lsrs r1, r1, #4	@ 00098972 0909
.org 0x98974
	ands r1, r3	@ 00098974 1940
.org 0x98976
	mov r0, sp	@ 00098976 6846
.org 0x98978
	bl 0x984bc	@ 00098978 fff7a0fd
.org 0x9897c
	ldr r1, [pc, #20]	@ 0009897c 0549
.org 0x9897e
	adds r0, r5, #0	@ 0009897e 281c
.org 0x98980
	bl 0x1cf00	@ 00098980 84f7befa
.org 0x98984
	adds r1, r5, #0	@ 00098984 291c
.org 0x98986
	adds r1, #190	@ 00098986 be31
.org 0x98988
	movs r0, #4	@ 00098988 0420
.org 0x9898a
	strb r0, [r1, #0]	@ 0009898a 0870
.org 0x9898c
	b.n 0x989b6	@ 0009898c 13e0
.org 0x9898e
	.byte 0x00	@ 0009898e data
.org 0x9898f
	.byte 0x00	@ 0009898f data
.org 0x98990
	.byte 0xf0,0xdb,0x02,0x02	@ 00098990 data
.org 0x98994
	.byte 0x08,0xba,0x00,0x00	@ 00098994 data
.org 0x98998
	cmp r3, #2	@ 00098998 022b
.org 0x9899a
	bne.n 0x989bc	@ 0009899a 0fd1
.org 0x9899c
	adds r1, r5, #0	@ 0009899c 291c
.org 0x9899e
	adds r1, #190	@ 0009899e be31
.org 0x989a0
	ldrb r0, [r1, #0]	@ 000989a0 0878
.org 0x989a2
	subs r0, #1	@ 000989a2 0138
.org 0x989a4
	strb r0, [r1, #0]	@ 000989a4 0870
.org 0x989a6
	lsls r0, r0, #24	@ 000989a6 0006
.org 0x989a8
	lsrs r0, r0, #24	@ 000989a8 000e
.org 0x989aa
	cmp r0, #255	@ 000989aa ff28
.org 0x989ac
	bne.n 0x989bc	@ 000989ac 06d1
.org 0x989ae
	ldr r1, [pc, #132]	@ 000989ae 2149
.org 0x989b0
	adds r0, r5, #0	@ 000989b0 281c
.org 0x989b2
	bl 0x1cf00	@ 000989b2 84f7a5fa
.org 0x989b6
	ldrb r0, [r5, #13]	@ 000989b6 687b
.org 0x989b8
	adds r0, #1	@ 000989b8 0130
.org 0x989ba
	strb r0, [r5, #13]	@ 000989ba 6873
.org 0x989bc
	ldr r0, [r5, #84]	@ 000989bc 686d
.org 0x989be
	ldr r1, [r5, #92]	@ 000989be e96d
.org 0x989c0
	adds r0, r0, r1	@ 000989c0 4018
.org 0x989c2
	str r0, [r5, #84]	@ 000989c2 6865
.org 0x989c4
	ldr r2, [r5, #88]	@ 000989c4 aa6d
.org 0x989c6
	ldr r0, [r5, #96]	@ 000989c6 286e
.org 0x989c8
	adds r2, r2, r0	@ 000989c8 1218
.org 0x989ca
	str r2, [r5, #88]	@ 000989ca aa65
.org 0x989cc
	ldr r1, [r5, #104]	@ 000989cc a96e
.org 0x989ce
	subs r0, r0, r1	@ 000989ce 401a
.org 0x989d0
	str r0, [r5, #96]	@ 000989d0 2866
.org 0x989d2
	adds r4, r5, #0	@ 000989d2 2c1c
.org 0x989d4
	adds r4, #184	@ 000989d4 b834
.org 0x989d6
	ldr r6, [pc, #96]	@ 000989d6 184e
.org 0x989d8
	ldrb r0, [r5, #18]	@ 000989d8 a87c
.org 0x989da
	lsls r0, r0, #1	@ 000989da 4000
.org 0x989dc
	adds r0, r0, r6	@ 000989dc 8019
.org 0x989de
	movs r3, #0	@ 000989de 0023
.org 0x989e0
	ldrsh r1, [r0, r3]	@ 000989e0 c15e
.org 0x989e2
	lsls r1, r1, #4	@ 000989e2 0901
.org 0x989e4
	ldr r0, [r4, #0]	@ 000989e4 2068
.org 0x989e6
	adds r0, r0, r1	@ 000989e6 4018
.org 0x989e8
	cmp r2, r0	@ 000989e8 8242
.org 0x989ea
	bge.n 0x98a7c	@ 000989ea 47da
.org 0x989ec
	ldr r1, [pc, #76]	@ 000989ec 1349
.org 0x989ee
	adds r0, r5, #0	@ 000989ee 281c
.org 0x989f0
	bl 0x1cf00	@ 000989f0 84f786fa
.org 0x989f4
	ldrb r0, [r5, #18]	@ 000989f4 a87c
.org 0x989f6
	lsls r0, r0, #1	@ 000989f6 4000
.org 0x989f8
	adds r0, r0, r6	@ 000989f8 8019
.org 0x989fa
	movs r2, #0	@ 000989fa 0022
.org 0x989fc
	ldrsh r1, [r0, r2]	@ 000989fc 815e
.org 0x989fe
	lsls r1, r1, #4	@ 000989fe 0901
.org 0x98a00
	ldr r0, [r4, #0]	@ 00098a00 2068
.org 0x98a02
	adds r0, r0, r1	@ 00098a02 4018
.org 0x98a04
	str r0, [r5, #88]	@ 00098a04 a865
.org 0x98a06
	adds r2, r5, #0	@ 00098a06 2a1c
.org 0x98a08
	adds r2, #180	@ 00098a08 b432
.org 0x98a0a
	ldrb r0, [r5, #18]	@ 00098a0a a87c
.org 0x98a0c
	adds r0, #64	@ 00098a0c 4030
.org 0x98a0e
	lsls r0, r0, #24	@ 00098a0e 0006
.org 0x98a10
	lsrs r0, r0, #23	@ 00098a10 c00d
.org 0x98a12
	adds r0, r0, r6	@ 00098a12 8019
.org 0x98a14
	movs r3, #0	@ 00098a14 0023
.org 0x98a16
	ldrsh r1, [r0, r3]	@ 00098a16 c15e
.org 0x98a18
	lsls r1, r1, #4	@ 00098a18 0901
.org 0x98a1a
	ldr r0, [r5, #84]	@ 00098a1a 686d
.org 0x98a1c
	subs r0, r0, r1	@ 00098a1c 401a
.org 0x98a1e
	str r0, [r2, #0]	@ 00098a1e 1060
.org 0x98a20
	ldrb r2, [r5, #10]	@ 00098a20 aa7a
.org 0x98a22
	lsrs r0, r2, #4	@ 00098a22 1009
.org 0x98a24
	movs r1, #1	@ 00098a24 0121
.org 0x98a26
	bics r1, r0	@ 00098a26 8143
.org 0x98a28
	cmp r1, #0	@ 00098a28 0029
.org 0x98a2a
	beq.n 0x98a40	@ 00098a2a 09d0
.org 0x98a2c
	movs r0, #16	@ 00098a2c 1020
.org 0x98a2e
	orrs r0, r2	@ 00098a2e 1043
