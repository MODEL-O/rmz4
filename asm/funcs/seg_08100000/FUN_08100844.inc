@ FUN_08100844  entry 0x08100844  size 282
.thumb
.org 0x100844
FUN_08100844:
	push {r4, r5, r6, lr}	@ 00100844 70b5
.org 0x100846
	adds r6, r0, #0	@ 00100846 061c
.org 0x100848
	ldr r0, [pc, #24]	@ 00100848 0648
.org 0x10084a
	ldr r0, [r0, #0]	@ 0010084a 0068
.org 0x10084c
	ldrb r2, [r6, #16]	@ 0010084c 327c
.org 0x10084e
	cmp r2, #0	@ 0010084e 002a
.org 0x100850
	bne.n 0x100868	@ 00100850 0ad1
.org 0x100852
	adds r0, #180	@ 00100852 b430
.org 0x100854
	ldrb r0, [r0, #10]	@ 00100854 807a
.org 0x100856
	cmp r0, #255	@ 00100856 ff28
.org 0x100858
	beq.n 0x1008ac	@ 00100858 28d0
.org 0x10085a
	ldrb r1, [r6, #10]	@ 0010085a b17a
.org 0x10085c
	movs r0, #254	@ 0010085c fe20
.org 0x10085e
	ands r0, r1	@ 0010085e 0840
.org 0x100860
	b.n 0x100878	@ 00100860 0ae0
.org 0x100862
	.byte 0x00	@ 00100862 data
.org 0x100863
	.byte 0x00	@ 00100863 data
.org 0x100864
	.byte 0xf0,0xdb,0x02,0x02	@ 00100864 data
.org 0x100868
	adds r0, #180	@ 00100868 b430
.org 0x10086a
	ldrb r0, [r0, #11]	@ 0010086a c07a
.org 0x10086c
	cmp r0, #255	@ 0010086c ff28
.org 0x10086e
	beq.n 0x1008ac	@ 0010086e 1dd0
.org 0x100870
	ldrb r1, [r6, #10]	@ 00100870 b17a
.org 0x100872
	movs r0, #254	@ 00100872 fe20
.org 0x100874
	ands r0, r1	@ 00100874 0840
.org 0x100876
	movs r2, #0	@ 00100876 0022
.org 0x100878
	movs r1, #253	@ 00100878 fd21
.org 0x10087a
	ands r0, r1	@ 0010087a 0840
.org 0x10087c
	strb r0, [r6, #10]	@ 0010087c b072
.org 0x10087e
	adds r0, r6, #0	@ 0010087e 301c
.org 0x100880
	adds r0, #140	@ 00100880 8c30
.org 0x100882
	str r2, [r0, #0]	@ 00100882 0260
.org 0x100884
	adds r0, #4	@ 00100884 0430
.org 0x100886
	str r2, [r0, #0]	@ 00100886 0260
.org 0x100888
	adds r0, #4	@ 00100888 0430
.org 0x10088a
	strb r2, [r0, #0]	@ 0010088a 0270
.org 0x10088c
	ldrb r1, [r6, #10]	@ 0010088c b17a
.org 0x10088e
	movs r0, #251	@ 0010088e fb20
.org 0x100890
	ands r0, r1	@ 00100890 0840
.org 0x100892
	strb r0, [r6, #10]	@ 00100892 b072
.org 0x100894
	ldr r1, [pc, #16]	@ 00100894 0449
.org 0x100896
	ldrb r0, [r6, #9]	@ 00100896 707a
.org 0x100898
	lsls r0, r0, #2	@ 00100898 8000
.org 0x10089a
	adds r0, r0, r1	@ 0010089a 4018
.org 0x10089c
	movs r1, #3	@ 0010089c 0321
.org 0x10089e
	str r1, [r6, #12]	@ 0010089e f160
.org 0x1008a0
	ldr r0, [r0, #0]	@ 001008a0 0068
.org 0x1008a2
	ldr r0, [r0, #12]	@ 001008a2 c068
.org 0x1008a4
	str r0, [r6, #20]	@ 001008a4 7061
.org 0x1008a6
	b.n 0x100962	@ 001008a6 5ce0
.org 0x1008a8
	.byte 0xfc,0x92,0x86,0x08	@ 001008a8 data
.org 0x1008ac
	ldr r0, [pc, #184]	@ 001008ac 2e48
.org 0x1008ae
	ldr r1, [pc, #188]	@ 001008ae 2f49
.org 0x1008b0
	movs r4, #193	@ 001008b0 c124
.org 0x1008b2
	lsls r4, r4, #1	@ 001008b2 6400
.org 0x1008b4
	adds r1, r1, r4	@ 001008b4 0919
.org 0x1008b6
	ldrh r1, [r1, #0]	@ 001008b6 0988
.org 0x1008b8
	ldrh r2, [r0, #6]	@ 001008b8 c288
.org 0x1008ba
	lsrs r2, r2, #6	@ 001008ba 9209
.org 0x1008bc
	subs r1, r1, r2	@ 001008bc 891a
.org 0x1008be
	lsls r1, r1, #5	@ 001008be 4901
.org 0x1008c0
	movs r2, #128	@ 001008c0 8022
.org 0x1008c2
	lsls r2, r2, #9	@ 001008c2 5202
.org 0x1008c4
	adds r1, r1, r2	@ 001008c4 8918
.org 0x1008c6
	bl 0x1d30	@ 001008c6 01f733fa
.org 0x1008ca
	ldr r0, [pc, #164]	@ 001008ca 2948
.org 0x1008cc
	ldr r1, [pc, #164]	@ 001008cc 2949
.org 0x1008ce
	adds r1, r1, r4	@ 001008ce 0919
.org 0x1008d0
	ldrh r1, [r1, #0]	@ 001008d0 0988
.org 0x1008d2
	ldrb r2, [r0, #7]	@ 001008d2 c279
.org 0x1008d4
	subs r1, r1, r2	@ 001008d4 891a
.org 0x1008d6
	lsls r1, r1, #5	@ 001008d6 4901
.org 0x1008d8
	movs r2, #128	@ 001008d8 8022
.org 0x1008da
	lsls r2, r2, #2	@ 001008da 9200
.org 0x1008dc
	adds r1, r1, r2	@ 001008dc 8918
.org 0x1008de
	bl 0x2208	@ 001008de 01f793fc
.org 0x1008e2
	adds r0, r6, #0	@ 001008e2 301c
.org 0x1008e4
	bl 0x1cc9c	@ 001008e4 1cf7daf9
.org 0x1008e8
	ldrb r1, [r6, #10]	@ 001008e8 b17a
.org 0x1008ea
	movs r0, #1	@ 001008ea 0120
.org 0x1008ec
	orrs r0, r1	@ 001008ec 0843
.org 0x1008ee
	movs r1, #2	@ 001008ee 0221
.org 0x1008f0
	orrs r0, r1	@ 001008f0 0843
.org 0x1008f2
	strb r0, [r6, #10]	@ 001008f2 b072
.org 0x1008f4
	movs r1, #193	@ 001008f4 c121
.org 0x1008f6
	lsls r1, r1, #8	@ 001008f6 0902
.org 0x1008f8
	adds r0, r6, #0	@ 001008f8 301c
.org 0x1008fa
	bl 0x1cf00	@ 001008fa 1cf701fb
.org 0x1008fe
	adds r0, r6, #0	@ 001008fe 301c
.org 0x100900
	bl 0x1cff0	@ 00100900 1cf776fb
.org 0x100904
	movs r2, #0	@ 00100904 0022
.org 0x100906
	ldrb r1, [r6, #10]	@ 00100906 b17a
.org 0x100908
	movs r0, #239	@ 00100908 ef20
.org 0x10090a
	ands r0, r1	@ 0010090a 0840
.org 0x10090c
	strb r0, [r6, #10]	@ 0010090c b072
.org 0x10090e
	movs r5, #1	@ 0010090e 0125
.org 0x100910
	adds r0, r6, #0	@ 00100910 301c
.org 0x100912
	adds r0, #76	@ 00100912 4c30
.org 0x100914
	strb r2, [r0, #0]	@ 00100914 0270
.org 0x100916
	adds r2, r6, #0	@ 00100916 321c
.org 0x100918
	adds r2, #74	@ 00100918 4a32
.org 0x10091a
	ldrb r1, [r2, #0]	@ 0010091a 1178
.org 0x10091c
	movs r0, #17	@ 0010091c 1120
.org 0x10091e
	negs r0, r0	@ 0010091e 4042
.org 0x100920
	ands r0, r1	@ 00100920 0840
.org 0x100922
	strb r0, [r2, #0]	@ 00100922 1070
.org 0x100924
	ldrb r1, [r6, #10]	@ 00100924 b17a
.org 0x100926
	movs r0, #4	@ 00100926 0420
.org 0x100928
	orrs r0, r1	@ 00100928 0843
.org 0x10092a
	strb r0, [r6, #10]	@ 0010092a b072
.org 0x10092c
	adds r4, r6, #0	@ 0010092c 341c
.org 0x10092e
	adds r4, #116	@ 0010092e 7434
.org 0x100930
	ldr r1, [pc, #68]	@ 00100930 1149
.org 0x100932
	adds r2, #10	@ 00100932 0a32
.org 0x100934
	adds r0, r4, #0	@ 00100934 201c
.org 0x100936
	movs r3, #8	@ 00100936 0823
.org 0x100938
	bl 0x5760	@ 00100938 04f712ff
.org 0x10093c
	str r6, [r4, #44]	@ 0010093c e662
.org 0x10093e
	ldr r0, [pc, #60]	@ 0010093e 0f48
.org 0x100940
	str r0, [r4, #36]	@ 00100940 6062
.org 0x100942
	ldr r0, [r6, #84]	@ 00100942 706d
.org 0x100944
	ldr r1, [r6, #88]	@ 00100944 b16d
.org 0x100946
	bl 0x8534	@ 00100946 07f7f5fd
.org 0x10094a
	str r0, [r6, #88]	@ 0010094a b065
.org 0x10094c
	ldr r1, [pc, #48]	@ 0010094c 0c49
.org 0x10094e
	ldrb r0, [r6, #9]	@ 0010094e 707a
.org 0x100950
	lsls r0, r0, #2	@ 00100950 8000
.org 0x100952
	adds r0, r0, r1	@ 00100952 4018
.org 0x100954
	str r5, [r6, #12]	@ 00100954 f560
.org 0x100956
	ldr r0, [r0, #0]	@ 00100956 0068
.org 0x100958
	ldr r0, [r0, #4]	@ 00100958 4068
.org 0x10095a
	str r0, [r6, #20]	@ 0010095a 7061
.org 0x10095c
	adds r0, r6, #0	@ 0010095c 301c
