@ FUN_080577bc  entry 0x080577bc  size 522
.thumb
.org 0x577bc
FUN_080577bc:
	push {r4, r5, r6, lr}	@ 000577bc 70b5
.org 0x577be
	adds r5, r0, #0	@ 000577be 051c
.org 0x577c0
	ldrb r4, [r5, #15]	@ 000577c0 ec7b
.org 0x577c2
	cmp r4, #1	@ 000577c2 012c
.org 0x577c4
	beq.n 0x577ee	@ 000577c4 13d0
.org 0x577c6
	cmp r4, #1	@ 000577c6 012c
.org 0x577c8
	bgt.n 0x577d0	@ 000577c8 02dc
.org 0x577ca
	cmp r4, #0	@ 000577ca 002c
.org 0x577cc
	beq.n 0x577dc	@ 000577cc 06d0
.org 0x577ce
	b.n 0x577d6	@ 000577ce 02e0
.org 0x577d0
	cmp r4, #2	@ 000577d0 022c
.org 0x577d2
	bne.n 0x577d6	@ 000577d2 00d1
.org 0x577d4
	b.n 0x578de	@ 000577d4 83e0
.org 0x577d6
	adds r6, r5, #0	@ 000577d6 2e1c
.org 0x577d8
	adds r6, #212	@ 000577d8 d436
.org 0x577da
	b.n 0x57970	@ 000577da c9e0
.org 0x577dc
	ldr r1, [pc, #216]	@ 000577dc 3649
.org 0x577de
	adds r0, r5, #0	@ 000577de 281c
.org 0x577e0
	bl 0x1cf00	@ 000577e0 c5f78efb
.org 0x577e4
	strb r4, [r5, #19]	@ 000577e4 ec74
.org 0x577e6
	strb r4, [r5, #18]	@ 000577e6 ac74
.org 0x577e8
	ldrb r0, [r5, #15]	@ 000577e8 e87b
.org 0x577ea
	adds r0, #1	@ 000577ea 0130
.org 0x577ec
	strb r0, [r5, #15]	@ 000577ec e873
.org 0x577ee
	adds r0, r5, #0	@ 000577ee 281c
.org 0x577f0
	adds r0, #212	@ 000577f0 d430
.org 0x577f2
	ldr r3, [r0, #0]	@ 000577f2 0368
.org 0x577f4
	adds r6, r0, #0	@ 000577f4 061c
.org 0x577f6
	cmp r3, #0	@ 000577f6 002b
.org 0x577f8
	beq.n 0x57838	@ 000577f8 1ed0
.org 0x577fa
	ldrb r0, [r3, #12]	@ 000577fa 187b
.org 0x577fc
	cmp r0, #1	@ 000577fc 0128
.org 0x577fe
	bls.n 0x57838	@ 000577fe 1bd9
.org 0x57800
	ldrb r1, [r3, #10]	@ 00057800 997a
.org 0x57802
	movs r0, #254	@ 00057802 fe20
.org 0x57804
	ands r0, r1	@ 00057804 0840
.org 0x57806
	movs r2, #0	@ 00057806 0022
.org 0x57808
	movs r1, #253	@ 00057808 fd21
.org 0x5780a
	ands r0, r1	@ 0005780a 0840
.org 0x5780c
	strb r0, [r3, #10]	@ 0005780c 9872
.org 0x5780e
	adds r0, r3, #0	@ 0005780e 181c
.org 0x57810
	adds r0, #140	@ 00057810 8c30
.org 0x57812
	str r2, [r0, #0]	@ 00057812 0260
.org 0x57814
	adds r0, #4	@ 00057814 0430
.org 0x57816
	str r2, [r0, #0]	@ 00057816 0260
.org 0x57818
	adds r0, #4	@ 00057818 0430
.org 0x5781a
	strb r2, [r0, #0]	@ 0005781a 0270
.org 0x5781c
	ldrb r1, [r3, #10]	@ 0005781c 997a
.org 0x5781e
	movs r0, #251	@ 0005781e fb20
.org 0x57820
	ands r0, r1	@ 00057820 0840
.org 0x57822
	strb r0, [r3, #10]	@ 00057822 9872
.org 0x57824
	ldr r1, [pc, #148]	@ 00057824 2549
.org 0x57826
	ldrb r0, [r3, #9]	@ 00057826 587a
.org 0x57828
	lsls r0, r0, #2	@ 00057828 8000
.org 0x5782a
	adds r0, r0, r1	@ 0005782a 4018
.org 0x5782c
	movs r1, #3	@ 0005782c 0321
.org 0x5782e
	str r1, [r3, #12]	@ 0005782e d960
.org 0x57830
	ldr r0, [r0, #0]	@ 00057830 0068
.org 0x57832
	ldr r0, [r0, #12]	@ 00057832 c068
.org 0x57834
	str r0, [r3, #20]	@ 00057834 5861
.org 0x57836
	str r2, [r6, #0]	@ 00057836 3260
.org 0x57838
	adds r0, r5, #0	@ 00057838 281c
.org 0x5783a
	adds r0, #216	@ 0005783a d830
.org 0x5783c
	ldr r3, [r0, #0]	@ 0005783c 0368
.org 0x5783e
	adds r4, r0, #0	@ 0005783e 041c
.org 0x57840
	cmp r3, #0	@ 00057840 002b
.org 0x57842
	beq.n 0x57882	@ 00057842 1ed0
.org 0x57844
	ldrb r0, [r3, #12]	@ 00057844 187b
.org 0x57846
	cmp r0, #1	@ 00057846 0128
.org 0x57848
	bls.n 0x57882	@ 00057848 1bd9
.org 0x5784a
	ldrb r1, [r3, #10]	@ 0005784a 997a
.org 0x5784c
	movs r0, #254	@ 0005784c fe20
.org 0x5784e
	ands r0, r1	@ 0005784e 0840
.org 0x57850
	movs r2, #0	@ 00057850 0022
.org 0x57852
	movs r1, #253	@ 00057852 fd21
.org 0x57854
	ands r0, r1	@ 00057854 0840
.org 0x57856
	strb r0, [r3, #10]	@ 00057856 9872
.org 0x57858
	adds r0, r3, #0	@ 00057858 181c
.org 0x5785a
	adds r0, #140	@ 0005785a 8c30
.org 0x5785c
	str r2, [r0, #0]	@ 0005785c 0260
.org 0x5785e
	adds r0, #4	@ 0005785e 0430
.org 0x57860
	str r2, [r0, #0]	@ 00057860 0260
.org 0x57862
	adds r0, #4	@ 00057862 0430
.org 0x57864
	strb r2, [r0, #0]	@ 00057864 0270
.org 0x57866
	ldrb r1, [r3, #10]	@ 00057866 997a
.org 0x57868
	movs r0, #251	@ 00057868 fb20
.org 0x5786a
	ands r0, r1	@ 0005786a 0840
.org 0x5786c
	strb r0, [r3, #10]	@ 0005786c 9872
.org 0x5786e
	ldr r1, [pc, #76]	@ 0005786e 1349
.org 0x57870
	ldrb r0, [r3, #9]	@ 00057870 587a
.org 0x57872
	lsls r0, r0, #2	@ 00057872 8000
.org 0x57874
	adds r0, r0, r1	@ 00057874 4018
.org 0x57876
	movs r1, #3	@ 00057876 0321
.org 0x57878
	str r1, [r3, #12]	@ 00057878 d960
.org 0x5787a
	ldr r0, [r0, #0]	@ 0005787a 0068
.org 0x5787c
	ldr r0, [r0, #12]	@ 0005787c c068
.org 0x5787e
	str r0, [r3, #20]	@ 0005787e 5861
.org 0x57880
	str r2, [r4, #0]	@ 00057880 2260
.org 0x57882
	ldr r1, [r6, #0]	@ 00057882 3168
.org 0x57884
	cmp r1, #0	@ 00057884 0029
.org 0x57886
	beq.n 0x578c0	@ 00057886 1bd0
.org 0x57888
	ldr r2, [r4, #0]	@ 00057888 2268
.org 0x5788a
	cmp r2, #0	@ 0005788a 002a
.org 0x5788c
	beq.n 0x578c6	@ 0005788c 1bd0
.org 0x5788e
	adds r0, r1, #0	@ 0005788e 081c
.org 0x57890
	adds r0, #180	@ 00057890 b430
.org 0x57892
	ldrb r0, [r0, #0]	@ 00057892 0078
.org 0x57894
	cmp r0, #0	@ 00057894 0028
.org 0x57896
	beq.n 0x57970	@ 00057896 6bd0
.org 0x57898
	adds r0, r2, #0	@ 00057898 101c
.org 0x5789a
	adds r0, #180	@ 0005789a b430
.org 0x5789c
	ldrb r0, [r0, #0]	@ 0005789c 0078
.org 0x5789e
	cmp r0, #0	@ 0005789e 0028
.org 0x578a0
	beq.n 0x57970	@ 000578a0 66d0
.org 0x578a2
	movs r0, #253	@ 000578a2 fd20
.org 0x578a4
	bl 0x2b10	@ 000578a4 abf734f9
.org 0x578a8
	ldr r0, [r6, #0]	@ 000578a8 3068
.org 0x578aa
	adds r0, #181	@ 000578aa b530
.org 0x578ac
	movs r1, #1	@ 000578ac 0121
.org 0x578ae
	strb r1, [r0, #0]	@ 000578ae 0170
.org 0x578b0
	ldr r0, [r4, #0]	@ 000578b0 2068
.org 0x578b2
	adds r0, #181	@ 000578b2 b530
.org 0x578b4
	strb r1, [r0, #0]	@ 000578b4 0170
.org 0x578b6
	b.n 0x578d6	@ 000578b6 0ee0
.org 0x578b8
	.byte 0x06,0xa0,0x00,0x00	@ 000578b8 data
.org 0x578bc
	.byte 0xf4,0x49,0x86,0x08	@ 000578bc data
.org 0x578c0
	ldr r1, [r4, #0]	@ 000578c0 2168
.org 0x578c2
	cmp r1, #0	@ 000578c2 0029
.org 0x578c4
	beq.n 0x57970	@ 000578c4 54d0
.org 0x578c6
	adds r0, r1, #0	@ 000578c6 081c
.org 0x578c8
	adds r0, #180	@ 000578c8 b430
.org 0x578ca
	ldrb r0, [r0, #0]	@ 000578ca 0078
.org 0x578cc
	cmp r0, #0	@ 000578cc 0028
.org 0x578ce
	beq.n 0x57970	@ 000578ce 4fd0
.org 0x578d0
	adds r1, #182	@ 000578d0 b631
.org 0x578d2
	movs r0, #1	@ 000578d2 0120
.org 0x578d4
	strb r0, [r1, #0]	@ 000578d4 0870
.org 0x578d6
	ldrb r0, [r5, #15]	@ 000578d6 e87b
.org 0x578d8
	adds r0, #1	@ 000578d8 0130
.org 0x578da
	strb r0, [r5, #15]	@ 000578da e873
.org 0x578dc
	b.n 0x57970	@ 000578dc 48e0
.org 0x578de
	adds r0, r5, #0	@ 000578de 281c
.org 0x578e0
	adds r0, #212	@ 000578e0 d430
.org 0x578e2
	ldr r3, [r0, #0]	@ 000578e2 0368
.org 0x578e4
	adds r6, r0, #0	@ 000578e4 061c
.org 0x578e6
	cmp r3, #0	@ 000578e6 002b
.org 0x578e8
	beq.n 0x57928	@ 000578e8 1ed0
.org 0x578ea
	ldrb r0, [r3, #12]	@ 000578ea 187b
.org 0x578ec
	cmp r0, #1	@ 000578ec 0128
.org 0x578ee
	bls.n 0x57928	@ 000578ee 1bd9
.org 0x578f0
	ldrb r1, [r3, #10]	@ 000578f0 997a
.org 0x578f2
	movs r0, #254	@ 000578f2 fe20
.org 0x578f4
	ands r0, r1	@ 000578f4 0840
.org 0x578f6
	movs r2, #0	@ 000578f6 0022
.org 0x578f8
	movs r1, #253	@ 000578f8 fd21
.org 0x578fa
	ands r0, r1	@ 000578fa 0840
.org 0x578fc
	strb r0, [r3, #10]	@ 000578fc 9872
.org 0x578fe
	adds r0, r3, #0	@ 000578fe 181c
.org 0x57900
	adds r0, #140	@ 00057900 8c30
.org 0x57902
	str r2, [r0, #0]	@ 00057902 0260
.org 0x57904
	adds r0, #4	@ 00057904 0430
.org 0x57906
	str r2, [r0, #0]	@ 00057906 0260
.org 0x57908
	adds r0, #4	@ 00057908 0430
.org 0x5790a
	strb r2, [r0, #0]	@ 0005790a 0270
.org 0x5790c
	ldrb r1, [r3, #10]	@ 0005790c 997a
.org 0x5790e
	movs r0, #251	@ 0005790e fb20
.org 0x57910
	ands r0, r1	@ 00057910 0840
.org 0x57912
	strb r0, [r3, #10]	@ 00057912 9872
.org 0x57914
	ldr r1, [pc, #184]	@ 00057914 2e49
.org 0x57916
	ldrb r0, [r3, #9]	@ 00057916 587a
.org 0x57918
	lsls r0, r0, #2	@ 00057918 8000
.org 0x5791a
	adds r0, r0, r1	@ 0005791a 4018
.org 0x5791c
	movs r1, #3	@ 0005791c 0321
.org 0x5791e
	str r1, [r3, #12]	@ 0005791e d960
.org 0x57920
	ldr r0, [r0, #0]	@ 00057920 0068
.org 0x57922
	ldr r0, [r0, #12]	@ 00057922 c068
.org 0x57924
	str r0, [r3, #20]	@ 00057924 5861
.org 0x57926
	str r2, [r6, #0]	@ 00057926 3260
.org 0x57928
	adds r4, r5, #0	@ 00057928 2c1c
.org 0x5792a
	adds r4, #216	@ 0005792a d834
.org 0x5792c
	ldr r3, [r4, #0]	@ 0005792c 2368
.org 0x5792e
	cmp r3, #0	@ 0005792e 002b
.org 0x57930
	beq.n 0x57970	@ 00057930 1ed0
.org 0x57932
	ldrb r0, [r3, #12]	@ 00057932 187b
.org 0x57934
	cmp r0, #1	@ 00057934 0128
.org 0x57936
	bls.n 0x57970	@ 00057936 1bd9
.org 0x57938
	ldrb r1, [r3, #10]	@ 00057938 997a
.org 0x5793a
	movs r0, #254	@ 0005793a fe20
.org 0x5793c
	ands r0, r1	@ 0005793c 0840
.org 0x5793e
	movs r2, #0	@ 0005793e 0022
.org 0x57940
	movs r1, #253	@ 00057940 fd21
.org 0x57942
	ands r0, r1	@ 00057942 0840
.org 0x57944
	strb r0, [r3, #10]	@ 00057944 9872
.org 0x57946
	adds r0, r3, #0	@ 00057946 181c
.org 0x57948
	adds r0, #140	@ 00057948 8c30
.org 0x5794a
	str r2, [r0, #0]	@ 0005794a 0260
.org 0x5794c
	adds r0, #4	@ 0005794c 0430
.org 0x5794e
	str r2, [r0, #0]	@ 0005794e 0260
.org 0x57950
	adds r0, #4	@ 00057950 0430
.org 0x57952
	strb r2, [r0, #0]	@ 00057952 0270
.org 0x57954
	ldrb r1, [r3, #10]	@ 00057954 997a
.org 0x57956
	movs r0, #251	@ 00057956 fb20
.org 0x57958
	ands r0, r1	@ 00057958 0840
.org 0x5795a
	strb r0, [r3, #10]	@ 0005795a 9872
.org 0x5795c
	ldr r1, [pc, #112]	@ 0005795c 1c49
.org 0x5795e
	ldrb r0, [r3, #9]	@ 0005795e 587a
.org 0x57960
	lsls r0, r0, #2	@ 00057960 8000
.org 0x57962
	adds r0, r0, r1	@ 00057962 4018
.org 0x57964
	movs r1, #3	@ 00057964 0321
.org 0x57966
	str r1, [r3, #12]	@ 00057966 d960
.org 0x57968
	ldr r0, [r0, #0]	@ 00057968 0068
.org 0x5796a
	ldr r0, [r0, #12]	@ 0005796a c068
.org 0x5796c
	str r0, [r3, #20]	@ 0005796c 5861
.org 0x5796e
	str r2, [r4, #0]	@ 0005796e 2260
.org 0x57970
	adds r0, r5, #0	@ 00057970 281c
.org 0x57972
	bl 0x1cff0	@ 00057972 c5f73dfb
.org 0x57976
	adds r0, r5, #0	@ 00057976 281c
.org 0x57978
	adds r0, #116	@ 00057978 7430
.org 0x5797a
	ldr r3, [pc, #88]	@ 0005797a 164b
.org 0x5797c
	ldrb r1, [r5, #30]	@ 0005797c a97f
.org 0x5797e
	lsls r1, r1, #8	@ 0005797e 0902
.org 0x57980
	adds r2, r5, #0	@ 00057980 2a1c
.org 0x57982
	adds r2, #112	@ 00057982 7032
.org 0x57984
	ldrb r2, [r2, #0]	@ 00057984 1278
.org 0x57986
	orrs r1, r2	@ 00057986 1143
.org 0x57988
	ldr r2, [pc, #76]	@ 00057988 134a
.org 0x5798a
	adds r1, r1, r2	@ 0005798a 8918
.org 0x5798c
	lsls r1, r1, #2	@ 0005798c 8900
.org 0x5798e
	adds r1, r1, r3	@ 0005798e c918
.org 0x57990
	adds r2, r5, #0	@ 00057990 2a1c
.org 0x57992
	adds r2, #113	@ 00057992 7132
.org 0x57994
	ldrb r2, [r2, #0]	@ 00057994 1278
.org 0x57996
	lsls r2, r2, #24	@ 00057996 1206
.org 0x57998
	asrs r2, r2, #24	@ 00057998 1216
.org 0x5799a
	ldr r1, [r1, #0]	@ 0005799a 0968
.org 0x5799c
	lsls r2, r2, #2	@ 0005799c 9200
.org 0x5799e
	adds r2, r2, r1	@ 0005799e 5218
.org 0x579a0
	ldr r1, [r2, #0]	@ 000579a0 1168
.org 0x579a2
	ldrb r2, [r1, #0]	@ 000579a2 0a78
.org 0x579a4
	lsls r1, r2, #1	@ 000579a4 5100
.org 0x579a6
	adds r1, r1, r2	@ 000579a6 8918
.org 0x579a8
	lsls r1, r1, #3	@ 000579a8 c900
.org 0x579aa
	ldr r2, [pc, #48]	@ 000579aa 0c4a
.org 0x579ac
	adds r1, r1, r2	@ 000579ac 8918
.org 0x579ae
	bl 0x5784	@ 000579ae adf7e9fe
.org 0x579b2
	ldr r0, [r6, #0]	@ 000579b2 3068
.org 0x579b4
	cmp r0, #0	@ 000579b4 0028
.org 0x579b6
	bne.n 0x579c8	@ 000579b6 07d1
.org 0x579b8
	adds r0, r5, #0	@ 000579b8 281c
.org 0x579ba
	adds r0, #216	@ 000579ba d830
.org 0x579bc
	ldr r1, [r0, #0]	@ 000579bc 0168
.org 0x579be
	cmp r1, #0	@ 000579be 0029
.org 0x579c0
	bne.n 0x579c8	@ 000579c0 02d1
.org 0x579c2
	movs r0, #10	@ 000579c2 0a20
.org 0x579c4
	strb r0, [r5, #14]	@ 000579c4 a873
