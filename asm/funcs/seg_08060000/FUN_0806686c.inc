@ FUN_0806686c  entry 0x0806686c  size 304
.thumb
.org 0x6686c
FUN_0806686c:
	push {r4, r5, r6, lr}	@ 0006686c 70b5
.org 0x6686e
	adds r4, r0, #0	@ 0006686e 041c
.org 0x66870
	ldr r0, [pc, #68]	@ 00066870 1148
.org 0x66872
	ldr r5, [r0, #0]	@ 00066872 0568
.org 0x66874
	adds r0, r4, #0	@ 00066874 201c
.org 0x66876
	adds r0, #140	@ 00066876 8c30
.org 0x66878
	ldr r0, [r0, #0]	@ 00066878 0068
.org 0x6687a
	movs r1, #128	@ 0006687a 8021
.org 0x6687c
	lsls r1, r1, #2	@ 0006687c 8900
.org 0x6687e
	ands r0, r1	@ 0006687e 0840
.org 0x66880
	cmp r0, #0	@ 00066880 0028
.org 0x66882
	bne.n 0x66890	@ 00066882 05d1
.org 0x66884
	adds r0, r4, #0	@ 00066884 201c
.org 0x66886
	adds r0, #164	@ 00066886 a430
.org 0x66888
	movs r1, #0	@ 00066888 0021
.org 0x6688a
	ldrsh r0, [r0, r1]	@ 0006688a 405e
.org 0x6688c
	cmp r0, #0	@ 0006688c 0028
.org 0x6688e
	bne.n 0x668c4	@ 0006688e 19d1
.org 0x66890
	ldr r0, [pc, #40]	@ 00066890 0a48
.org 0x66892
	ldrh r1, [r0, #8]	@ 00066892 0189
.org 0x66894
	movs r0, #8	@ 00066894 0820
.org 0x66896
	ands r0, r1	@ 00066896 0840
.org 0x66898
	cmp r0, #0	@ 00066898 0028
.org 0x6689a
	bne.n 0x668c4	@ 0006689a 13d1
.org 0x6689c
	ldr r1, [pc, #32]	@ 0006689c 0849
.org 0x6689e
	ldrb r0, [r4, #9]	@ 0006689e 607a
.org 0x668a0
	lsls r0, r0, #2	@ 000668a0 8000
.org 0x668a2
	adds r0, r0, r1	@ 000668a2 4018
.org 0x668a4
	movs r1, #2	@ 000668a4 0221
.org 0x668a6
	str r1, [r4, #12]	@ 000668a6 e160
.org 0x668a8
	ldr r0, [r0, #0]	@ 000668a8 0068
.org 0x668aa
	ldr r0, [r0, #8]	@ 000668aa 8068
.org 0x668ac
	str r0, [r4, #20]	@ 000668ac 6061
.org 0x668ae
	adds r0, r4, #0	@ 000668ae 201c
.org 0x668b0
	bl 0x669ec	@ 000668b0 00f09cf8
.org 0x668b4
	b.n 0x669e2	@ 000668b4 95e0
.org 0x668b6
	.byte 0x00	@ 000668b6 data
.org 0x668b7
	.byte 0x00	@ 000668b7 data
.org 0x668b8
	.byte 0xf0,0xdb,0x02,0x02	@ 000668b8 data
.org 0x668bc
	.byte 0x10,0xe9,0x02,0x02	@ 000668bc data
.org 0x668c0
	.byte 0x70,0x7d,0x85,0x08	@ 000668c0 data
.org 0x668c4
	ldr r2, [r4, #40]	@ 000668c4 a26a
.org 0x668c6
	adds r6, r2, #0	@ 000668c6 161c
.org 0x668c8
	cmp r2, #0	@ 000668c8 002a
.org 0x668ca
	bne.n 0x668fe	@ 000668ca 18d1
.org 0x668cc
	adds r0, r4, #0	@ 000668cc 201c
.org 0x668ce
	adds r0, #140	@ 000668ce 8c30
.org 0x668d0
	ldr r0, [r0, #0]	@ 000668d0 0068
.org 0x668d2
	movs r1, #1	@ 000668d2 0121
.org 0x668d4
	ands r0, r1	@ 000668d4 0840
.org 0x668d6
	cmp r0, #0	@ 000668d6 0028
.org 0x668d8
	beq.n 0x668e6	@ 000668d8 05d0
.org 0x668da
	ldr r2, [pc, #208]	@ 000668da 344a
.org 0x668dc
	movs r0, #17	@ 000668dc 1120
.org 0x668de
	adds r1, r4, #0	@ 000668de 211c
.org 0x668e0
	bl 0x2adac	@ 000668e0 c4f764fa
.org 0x668e4
	str r0, [r4, #40]	@ 000668e4 a062
.org 0x668e6
	ldr r2, [r4, #40]	@ 000668e6 a26a
.org 0x668e8
	cmp r2, #0	@ 000668e8 002a
.org 0x668ea
	beq.n 0x6690c	@ 000668ea 0fd0
.org 0x668ec
	ldr r0, [pc, #192]	@ 000668ec 3048
.org 0x668ee
	ldrb r1, [r4, #13]	@ 000668ee 617b
.org 0x668f0
	adds r1, r1, r0	@ 000668f0 0918
.org 0x668f2
	ldrb r0, [r1, #0]	@ 000668f2 0878
.org 0x668f4
	cmp r0, #0	@ 000668f4 0028
.org 0x668f6
	beq.n 0x668fe	@ 000668f6 02d0
.org 0x668f8
	movs r0, #41	@ 000668f8 2920
.org 0x668fa
	strb r0, [r4, #13]	@ 000668fa 6073
.org 0x668fc
	strb r6, [r4, #14]	@ 000668fc a673
.org 0x668fe
	adds r0, r2, #0	@ 000668fe 101c
.org 0x66900
	bl 0x2b3e4	@ 00066900 c4f770fd
.org 0x66904
	cmp r0, #0	@ 00066904 0028
.org 0x66906
	beq.n 0x6690c	@ 00066906 01d0
.org 0x66908
	movs r0, #0	@ 00066908 0020
.org 0x6690a
	str r0, [r4, #40]	@ 0006690a a062
.org 0x6690c
	adds r0, r4, #0	@ 0006690c 201c
.org 0x6690e
	adds r0, #180	@ 0006690e b430
.org 0x66910
	ldr r1, [r0, #20]	@ 00066910 4169
.org 0x66912
	adds r2, r0, #0	@ 00066912 021c
.org 0x66914
	cmp r1, #0	@ 00066914 0029
.org 0x66916
	beq.n 0x66922	@ 00066916 04d0
.org 0x66918
	ldrb r0, [r1, #12]	@ 00066918 087b
.org 0x6691a
	cmp r0, #1	@ 0006691a 0128
.org 0x6691c
	bls.n 0x66922	@ 0006691c 01d9
.org 0x6691e
	movs r0, #0	@ 0006691e 0020
.org 0x66920
	str r0, [r2, #20]	@ 00066920 5061
.org 0x66922
	ldrb r0, [r4, #13]	@ 00066922 607b
.org 0x66924
	cmp r0, #1	@ 00066924 0128
.org 0x66926
	bls.n 0x66946	@ 00066926 0ed9
.org 0x66928
	ldr r0, [r2, #8]	@ 00066928 9068
.org 0x6692a
	movs r3, #160	@ 0006692a a023
.org 0x6692c
	lsls r3, r3, #6	@ 0006692c 9b01
.org 0x6692e
	adds r1, r0, r3	@ 0006692e c118
.org 0x66930
	ldr r0, [r4, #84]	@ 00066930 606d
.org 0x66932
	cmp r0, r1	@ 00066932 8842
.org 0x66934
	bge.n 0x66938	@ 00066934 00da
.org 0x66936
	str r1, [r4, #84]	@ 00066936 6165
.org 0x66938
	ldr r0, [r2, #12]	@ 00066938 d068
.org 0x6693a
	ldr r2, [pc, #120]	@ 0006693a 1e4a
.org 0x6693c
	adds r1, r0, r2	@ 0006693c 8118
.org 0x6693e
	ldr r0, [r4, #84]	@ 0006693e 606d
.org 0x66940
	cmp r0, r1	@ 00066940 8842
.org 0x66942
	ble.n 0x66946	@ 00066942 00dd
.org 0x66944
	str r1, [r4, #84]	@ 00066944 6165
.org 0x66946
	ldr r0, [pc, #112]	@ 00066946 1c48
.org 0x66948
	ldr r3, [pc, #112]	@ 00066948 1c4b
.org 0x6694a
	adds r0, r0, r3	@ 0006694a c018
.org 0x6694c
	ldrb r1, [r0, #0]	@ 0006694c 0178
.org 0x6694e
	movs r0, #16	@ 0006694e 1020
.org 0x66950
	ands r0, r1	@ 00066950 0840
.org 0x66952
	cmp r0, #0	@ 00066952 0028
.org 0x66954
	beq.n 0x66962	@ 00066954 05d0
.org 0x66956
	ldr r0, [pc, #104]	@ 00066956 1a48
.org 0x66958
	ldrb r1, [r0, #4]	@ 00066958 0179
.org 0x6695a
	movs r0, #4	@ 0006695a 0420
.org 0x6695c
	ands r0, r1	@ 0006695c 0840
.org 0x6695e
	cmp r0, #0	@ 0006695e 0028
.org 0x66960
	beq.n 0x6696a	@ 00066960 03d0
.org 0x66962
	ldr r0, [pc, #96]	@ 00066962 1848
.org 0x66964
	ldrh r0, [r0, #0]	@ 00066964 0088
.org 0x66966
	cmp r0, #16	@ 00066966 1028
.org 0x66968
	bne.n 0x669d2	@ 00066968 33d1
.org 0x6696a
	adds r0, r5, #0	@ 0006696a 281c
.org 0x6696c
	adds r0, #180	@ 0006696c b430
.org 0x6696e
	ldr r1, [r0, #56]	@ 0006696e 816b
.org 0x66970
	cmp r1, #0	@ 00066970 0029
.org 0x66972
	beq.n 0x669cc	@ 00066972 2bd0
.org 0x66974
	ldr r1, [pc, #80]	@ 00066974 1449
.org 0x66976
	adds r0, r5, r1	@ 00066976 6818
.org 0x66978
	ldrb r0, [r0, #0]	@ 00066978 0078
.org 0x6697a
	cmp r0, #0	@ 0006697a 0028
.org 0x6697c
	beq.n 0x669d2	@ 0006697c 29d0
.org 0x6697e
	adds r1, r4, #0	@ 0006697e 211c
.org 0x66980
	adds r1, #222	@ 00066980 de31
.org 0x66982
	ldrb r0, [r1, #0]	@ 00066982 0878
.org 0x66984
	adds r0, #1	@ 00066984 0130
.org 0x66986
	strb r0, [r1, #0]	@ 00066986 0870
.org 0x66988
	movs r1, #31	@ 00066988 1f21
.org 0x6698a
	ands r0, r1	@ 0006698a 0840
.org 0x6698c
	cmp r0, #0	@ 0006698c 0028
.org 0x6698e
	bne.n 0x669d2	@ 0006698e 20d1
.org 0x66990
	adds r0, r5, #0	@ 00066990 281c
.org 0x66992
	movs r1, #0	@ 00066992 0021
.org 0x66994
	bl 0x2b6b0	@ 00066994 c4f78cfe
.org 0x66998
	lsls r0, r0, #24	@ 00066998 0006
.org 0x6699a
	lsrs r0, r0, #24	@ 0006699a 000e
