@ FUN_080ce858  entry 0x080ce858  size 242
.thumb
.org 0xce858
FUN_080ce858:
	push {r4, lr}	@ 000ce858 10b5
.org 0xce85a
	adds r4, r0, #0	@ 000ce85a 041c
.org 0xce85c
	ldr r0, [r4, #84]	@ 000ce85c 606d
.org 0xce85e
	ldr r1, [r4, #92]	@ 000ce85e e16d
.org 0xce860
	adds r0, r0, r1	@ 000ce860 4018
.org 0xce862
	str r0, [r4, #84]	@ 000ce862 6065
.org 0xce864
	ldr r0, [r4, #88]	@ 000ce864 a06d
.org 0xce866
	ldr r1, [r4, #96]	@ 000ce866 216e
.org 0xce868
	adds r0, r0, r1	@ 000ce868 4018
.org 0xce86a
	str r0, [r4, #88]	@ 000ce86a a065
.org 0xce86c
	adds r0, r4, #0	@ 000ce86c 201c
.org 0xce86e
	adds r0, #185	@ 000ce86e b930
.org 0xce870
	ldrb r0, [r0, #0]	@ 000ce870 0078
.org 0xce872
	cmp r0, #0	@ 000ce872 0028
.org 0xce874
	bne.n 0xce87c	@ 000ce874 02d1
.org 0xce876
	adds r0, r1, #0	@ 000ce876 081c
.org 0xce878
	adds r0, #64	@ 000ce878 4030
.org 0xce87a
	str r0, [r4, #96]	@ 000ce87a 2066
.org 0xce87c
	ldr r0, [r4, #96]	@ 000ce87c 206e
.org 0xce87e
	cmp r0, #0	@ 000ce87e 0028
.org 0xce880
	ble.n 0xce890	@ 000ce880 06dd
.org 0xce882
	adds r1, r4, #0	@ 000ce882 211c
.org 0xce884
	adds r1, #180	@ 000ce884 b431
.org 0xce886
	ldr r0, [r1, #0]	@ 000ce886 0868
.org 0xce888
	cmp r0, #0	@ 000ce888 0028
.org 0xce88a
	bne.n 0xce890	@ 000ce88a 01d1
.org 0xce88c
	ldr r0, [r4, #88]	@ 000ce88c a06d
.org 0xce88e
	str r0, [r1, #0]	@ 000ce88e 0860
.org 0xce890
	adds r0, r4, #0	@ 000ce890 201c
.org 0xce892
	adds r0, #186	@ 000ce892 ba30
.org 0xce894
	ldrb r0, [r0, #0]	@ 000ce894 0078
.org 0xce896
	cmp r0, #0	@ 000ce896 0028
.org 0xce898
	bne.n 0xce8a0	@ 000ce898 02d1
.org 0xce89a
	adds r0, r4, #0	@ 000ce89a 201c
.org 0xce89c
	bl 0xcea40	@ 000ce89c 00f0d0f8
.org 0xce8a0
	adds r0, r4, #0	@ 000ce8a0 201c
.org 0xce8a2
	bl 0xcec00	@ 000ce8a2 00f0adf9
.org 0xce8a6
	lsls r0, r0, #24	@ 000ce8a6 0006
.org 0xce8a8
	cmp r0, #0	@ 000ce8a8 0028
.org 0xce8aa
	beq.n 0xce8be	@ 000ce8aa 08d0
.org 0xce8ac
	ldr r1, [pc, #88]	@ 000ce8ac 1649
.org 0xce8ae
	ldrb r0, [r4, #9]	@ 000ce8ae 607a
.org 0xce8b0
	lsls r0, r0, #2	@ 000ce8b0 8000
.org 0xce8b2
	adds r0, r0, r1	@ 000ce8b2 4018
.org 0xce8b4
	movs r1, #2	@ 000ce8b4 0221
.org 0xce8b6
	str r1, [r4, #12]	@ 000ce8b6 e160
.org 0xce8b8
	ldr r0, [r0, #0]	@ 000ce8b8 0068
.org 0xce8ba
	ldr r0, [r0, #8]	@ 000ce8ba 8068
.org 0xce8bc
	str r0, [r4, #20]	@ 000ce8bc 6061
.org 0xce8be
	ldr r0, [pc, #76]	@ 000ce8be 1348
.org 0xce8c0
	adds r1, r4, #0	@ 000ce8c0 211c
.org 0xce8c2
	adds r1, #84	@ 000ce8c2 5431
.org 0xce8c4
	bl 0x1fb14	@ 000ce8c4 51f726f9
.org 0xce8c8
	movs r1, #128	@ 000ce8c8 8021
.org 0xce8ca
	lsls r1, r1, #7	@ 000ce8ca c901
.org 0xce8cc
	cmp r0, r1	@ 000ce8cc 8842
.org 0xce8ce
	bls.n 0xce910	@ 000ce8ce 1fd9
.org 0xce8d0
	ldrb r1, [r4, #10]	@ 000ce8d0 a17a
.org 0xce8d2
	movs r0, #254	@ 000ce8d2 fe20
.org 0xce8d4
	ands r0, r1	@ 000ce8d4 0840
.org 0xce8d6
	movs r2, #0	@ 000ce8d6 0022
.org 0xce8d8
	movs r1, #253	@ 000ce8d8 fd21
.org 0xce8da
	ands r0, r1	@ 000ce8da 0840
.org 0xce8dc
	strb r0, [r4, #10]	@ 000ce8dc a072
.org 0xce8de
	adds r0, r4, #0	@ 000ce8de 201c
.org 0xce8e0
	adds r0, #140	@ 000ce8e0 8c30
.org 0xce8e2
	str r2, [r0, #0]	@ 000ce8e2 0260
.org 0xce8e4
	adds r0, #4	@ 000ce8e4 0430
.org 0xce8e6
	str r2, [r0, #0]	@ 000ce8e6 0260
.org 0xce8e8
	adds r0, #4	@ 000ce8e8 0430
.org 0xce8ea
	strb r2, [r0, #0]	@ 000ce8ea 0270
.org 0xce8ec
	ldrb r1, [r4, #10]	@ 000ce8ec a17a
.org 0xce8ee
	movs r0, #251	@ 000ce8ee fb20
.org 0xce8f0
	ands r0, r1	@ 000ce8f0 0840
.org 0xce8f2
	strb r0, [r4, #10]	@ 000ce8f2 a072
.org 0xce8f4
	ldr r1, [pc, #16]	@ 000ce8f4 0449
.org 0xce8f6
	ldrb r0, [r4, #9]	@ 000ce8f6 607a
.org 0xce8f8
	lsls r0, r0, #2	@ 000ce8f8 8000
.org 0xce8fa
	adds r0, r0, r1	@ 000ce8fa 4018
.org 0xce8fc
	movs r1, #3	@ 000ce8fc 0321
.org 0xce8fe
	str r1, [r4, #12]	@ 000ce8fe e160
.org 0xce900
	ldr r0, [r0, #0]	@ 000ce900 0068
.org 0xce902
	ldr r0, [r0, #12]	@ 000ce902 c068
.org 0xce904
	str r0, [r4, #20]	@ 000ce904 6061
.org 0xce906
	b.n 0xce94c	@ 000ce906 21e0
.org 0xce908
	.byte 0xf4,0x49,0x86,0x08	@ 000ce908 data
.org 0xce90c
	.byte 0xf8,0xe9,0x02,0x02	@ 000ce90c data
.org 0xce910
	ldrb r0, [r4, #18]	@ 000ce910 a07c
.org 0xce912
	cmp r0, #19	@ 000ce912 1328
.org 0xce914
	bhi.n 0xce946	@ 000ce914 17d8
.org 0xce916
	adds r0, r4, #0	@ 000ce916 201c
.org 0xce918
	adds r0, #140	@ 000ce918 8c30
.org 0xce91a
	movs r1, #0	@ 000ce91a 0021
.org 0xce91c
	str r1, [r0, #0]	@ 000ce91c 0160
.org 0xce91e
	adds r0, #4	@ 000ce91e 0430
.org 0xce920
	str r1, [r0, #0]	@ 000ce920 0160
.org 0xce922
	adds r0, #4	@ 000ce922 0430
.org 0xce924
	strb r1, [r0, #0]	@ 000ce924 0170
.org 0xce926
	ldrb r0, [r4, #10]	@ 000ce926 a07a
.org 0xce928
	movs r2, #251	@ 000ce928 fb22
.org 0xce92a
	ands r2, r0	@ 000ce92a 0240
.org 0xce92c
	strb r2, [r4, #10]	@ 000ce92c a272
.org 0xce92e
	ldrb r1, [r4, #18]	@ 000ce92e a17c
.org 0xce930
	movs r0, #2	@ 000ce930 0220
.org 0xce932
	ands r0, r1	@ 000ce932 0840
.org 0xce934
	cmp r0, #0	@ 000ce934 0028
.org 0xce936
	bne.n 0xce93e	@ 000ce936 02d1
.org 0xce938
	movs r0, #254	@ 000ce938 fe20
.org 0xce93a
	ands r0, r2	@ 000ce93a 1040
.org 0xce93c
	b.n 0xce944	@ 000ce93c 02e0
.org 0xce93e
	movs r1, #1	@ 000ce93e 0121
.org 0xce940
	adds r0, r2, #0	@ 000ce940 101c
.org 0xce942
	orrs r0, r1	@ 000ce942 0843
.org 0xce944
	strb r0, [r4, #10]	@ 000ce944 a072
.org 0xce946
	adds r0, r4, #0	@ 000ce946 201c
.org 0xce948
	bl 0x1cff0	@ 000ce948 4ef752fb
