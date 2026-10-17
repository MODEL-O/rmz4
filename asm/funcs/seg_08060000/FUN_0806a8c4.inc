@ FUN_0806a8c4  entry 0x0806a8c4  size 564
.thumb
.org 0x6a8c4
FUN_0806a8c4:
	push {r4, r5, r6, r7, lr}	@ 0006a8c4 f0b5
.org 0x6a8c6
	mov r7, sl	@ 0006a8c6 5746
.org 0x6a8c8
	mov r6, r9	@ 0006a8c8 4e46
.org 0x6a8ca
	mov r5, r8	@ 0006a8ca 4546
.org 0x6a8cc
	push {r5, r6, r7}	@ 0006a8cc e0b4
.org 0x6a8ce
	sub sp, #24	@ 0006a8ce 86b0
.org 0x6a8d0
	adds r4, r0, #0	@ 0006a8d0 041c
.org 0x6a8d2
	lsls r1, r1, #24	@ 0006a8d2 0906
.org 0x6a8d4
	lsrs r1, r1, #24	@ 0006a8d4 090e
.org 0x6a8d6
	lsls r2, r2, #24	@ 0006a8d6 1206
.org 0x6a8d8
	lsrs r5, r2, #24	@ 0006a8d8 150e
.org 0x6a8da
	str r5, [sp, #0]	@ 0006a8da 0095
.org 0x6a8dc
	lsls r3, r3, #24	@ 0006a8dc 1b06
.org 0x6a8de
	lsrs r3, r3, #24	@ 0006a8de 1b0e
.org 0x6a8e0
	adds r0, #36	@ 0006a8e0 2430
.org 0x6a8e2
	ldrb r0, [r0, #0]	@ 0006a8e2 0078
.org 0x6a8e4
	mov ip, r0	@ 0006a8e4 8446
.org 0x6a8e6
	movs r0, #160	@ 0006a8e6 a020
.org 0x6a8e8
	lsls r0, r0, #1	@ 0006a8e8 4000
.org 0x6a8ea
	subs r0, r0, r1	@ 0006a8ea 401a
.org 0x6a8ec
	lsls r2, r5, #1	@ 0006a8ec 6a00
.org 0x6a8ee
	muls r0, r2	@ 0006a8ee 5043
.org 0x6a8f0
	adds r1, r1, r0	@ 0006a8f0 0918
.org 0x6a8f2
	adds r1, #128	@ 0006a8f2 8031
.org 0x6a8f4
	lsls r1, r1, #24	@ 0006a8f4 0906
.org 0x6a8f6
	lsrs r1, r1, #24	@ 0006a8f6 090e
.org 0x6a8f8
	mov sl, r1	@ 0006a8f8 8a46
.org 0x6a8fa
	cmp sl, ip	@ 0006a8fa e245
.org 0x6a8fc
	bne.n 0x6a904	@ 0006a8fc 02d1
.org 0x6a8fe
	cmp r3, #0	@ 0006a8fe 002b
.org 0x6a900
	bne.n 0x6a904	@ 0006a900 00d1
.org 0x6a902
	b.n 0x6aae8	@ 0006a902 f1e0
.org 0x6a904
	ldrb r0, [r4, #30]	@ 0006a904 a07f
.org 0x6a906
	lsls r0, r0, #8	@ 0006a906 0002
.org 0x6a908
	mov r9, r0	@ 0006a908 8146
.org 0x6a90a
	adds r6, r4, #0	@ 0006a90a 261c
.org 0x6a90c
	adds r6, #112	@ 0006a90c 7036
.org 0x6a90e
	ldrb r0, [r6, #0]	@ 0006a90e 3078
.org 0x6a910
	mov r1, r9	@ 0006a910 4946
.org 0x6a912
	orrs r1, r0	@ 0006a912 0143
.org 0x6a914
	mov r9, r1	@ 0006a914 8946
.org 0x6a916
	adds r7, r4, #0	@ 0006a916 271c
.org 0x6a918
	adds r7, #113	@ 0006a918 7137
.org 0x6a91a
	movs r2, #0	@ 0006a91a 0022
.org 0x6a91c
	ldrsb r2, [r7, r2]	@ 0006a91c ba56
.org 0x6a91e
	str r2, [sp, #4]	@ 0006a91e 0192
.org 0x6a920
	movs r0, #114	@ 0006a920 7220
.org 0x6a922
	adds r0, r0, r4	@ 0006a922 0019
.org 0x6a924
	mov r8, r0	@ 0006a924 8046
.org 0x6a926
	movs r1, #0	@ 0006a926 0021
.org 0x6a928
	ldrsb r1, [r0, r1]	@ 0006a928 4156
.org 0x6a92a
	str r1, [sp, #8]	@ 0006a92a 0291
.org 0x6a92c
	str r6, [sp, #12]	@ 0006a92c 0396
.org 0x6a92e
	str r7, [sp, #16]	@ 0006a92e 0497
.org 0x6a930
	mov r2, r8	@ 0006a930 4246
.org 0x6a932
	str r2, [sp, #20]	@ 0006a932 0592
.org 0x6a934
	mov r0, sl	@ 0006a934 5046
.org 0x6a936
	cmp r0, #0	@ 0006a936 0028
.org 0x6a938
	bne.n 0x6a996	@ 0006a938 2dd1
.org 0x6a93a
	adds r0, r4, #0	@ 0006a93a 201c
.org 0x6a93c
	bl 0x1cc9c	@ 0006a93c b2f7aef9
.org 0x6a940
	adds r2, r5, #0	@ 0006a940 2a1c
.org 0x6a942
	cmp r2, #0	@ 0006a942 002a
.org 0x6a944
	beq.n 0x6a94e	@ 0006a944 03d0
.org 0x6a946
	ldrb r1, [r4, #10]	@ 0006a946 a17a
.org 0x6a948
	movs r0, #16	@ 0006a948 1020
.org 0x6a94a
	orrs r0, r1	@ 0006a94a 0843
.org 0x6a94c
	b.n 0x6a954	@ 0006a94c 02e0
.org 0x6a94e
	ldrb r1, [r4, #10]	@ 0006a94e a17a
.org 0x6a950
	movs r0, #239	@ 0006a950 ef20
.org 0x6a952
	ands r0, r1	@ 0006a952 0840
.org 0x6a954
	strb r0, [r4, #10]	@ 0006a954 a072
.org 0x6a956
	movs r1, #1	@ 0006a956 0121
.org 0x6a958
	ands r1, r2	@ 0006a958 1140
.org 0x6a95a
	adds r0, r4, #0	@ 0006a95a 201c
.org 0x6a95c
	adds r0, #76	@ 0006a95c 4c30
.org 0x6a95e
	strb r1, [r0, #0]	@ 0006a95e 0170
.org 0x6a960
	adds r3, r4, #0	@ 0006a960 231c
.org 0x6a962
	adds r3, #74	@ 0006a962 4a33
.org 0x6a964
	lsls r1, r1, #4	@ 0006a964 0901
.org 0x6a966
	ldrb r2, [r3, #0]	@ 0006a966 1a78
.org 0x6a968
	movs r0, #17	@ 0006a968 1120
.org 0x6a96a
	negs r0, r0	@ 0006a96a 4042
.org 0x6a96c
	ands r0, r2	@ 0006a96c 1040
.org 0x6a96e
	orrs r0, r1	@ 0006a96e 0843
.org 0x6a970
	strb r0, [r3, #0]	@ 0006a970 1870
.org 0x6a972
	movs r2, #0	@ 0006a972 0022
.org 0x6a974
	ldrb r1, [r4, #10]	@ 0006a974 a17a
.org 0x6a976
	movs r0, #223	@ 0006a976 df20
.org 0x6a978
	ands r0, r1	@ 0006a978 0840
.org 0x6a97a
	strb r0, [r4, #10]	@ 0006a97a a072
.org 0x6a97c
	adds r0, r4, #0	@ 0006a97c 201c
.org 0x6a97e
	adds r0, #77	@ 0006a97e 4d30
.org 0x6a980
	strb r2, [r0, #0]	@ 0006a980 0270
.org 0x6a982
	ldrb r1, [r3, #0]	@ 0006a982 1978
.org 0x6a984
	movs r0, #33	@ 0006a984 2120
.org 0x6a986
	negs r0, r0	@ 0006a986 4042
.org 0x6a988
	ands r0, r1	@ 0006a988 0840
.org 0x6a98a
	strb r0, [r3, #0]	@ 0006a98a 1870
.org 0x6a98c
	adds r0, r4, #0	@ 0006a98c 201c
.org 0x6a98e
	adds r0, #36	@ 0006a98e 2430
.org 0x6a990
	mov r1, sl	@ 0006a990 5146
.org 0x6a992
	strb r1, [r0, #0]	@ 0006a992 0170
.org 0x6a994
	b.n 0x6aa06	@ 0006a994 37e0
.org 0x6a996
	mov r1, sl	@ 0006a996 5146
.org 0x6a998
	cmp r1, #128	@ 0006a998 8029
.org 0x6a99a
	bne.n 0x6aa48	@ 0006a99a 55d1
.org 0x6a99c
	adds r0, r4, #0	@ 0006a99c 201c
.org 0x6a99e
	bl 0x1cc9c	@ 0006a99e b2f77df9
.org 0x6a9a2
	adds r2, r5, #1	@ 0006a9a2 6a1c
.org 0x6a9a4
	movs r0, #1	@ 0006a9a4 0120
.org 0x6a9a6
	ands r2, r0	@ 0006a9a6 0240
.org 0x6a9a8
	cmp r2, #0	@ 0006a9a8 002a
.org 0x6a9aa
	beq.n 0x6a9b4	@ 0006a9aa 03d0
.org 0x6a9ac
	ldrb r1, [r4, #10]	@ 0006a9ac a17a
.org 0x6a9ae
	movs r0, #16	@ 0006a9ae 1020
.org 0x6a9b0
	orrs r0, r1	@ 0006a9b0 0843
.org 0x6a9b2
	b.n 0x6a9ba	@ 0006a9b2 02e0
.org 0x6a9b4
	ldrb r1, [r4, #10]	@ 0006a9b4 a17a
.org 0x6a9b6
	movs r0, #239	@ 0006a9b6 ef20
.org 0x6a9b8
	ands r0, r1	@ 0006a9b8 0840
.org 0x6a9ba
	strb r0, [r4, #10]	@ 0006a9ba a072
.org 0x6a9bc
	movs r3, #1	@ 0006a9bc 0123
.org 0x6a9be
	adds r1, r3, #0	@ 0006a9be 191c
.org 0x6a9c0
	ands r1, r2	@ 0006a9c0 1140
.org 0x6a9c2
	adds r0, r4, #0	@ 0006a9c2 201c
.org 0x6a9c4
	adds r0, #76	@ 0006a9c4 4c30
.org 0x6a9c6
	strb r1, [r0, #0]	@ 0006a9c6 0170
.org 0x6a9c8
	movs r2, #74	@ 0006a9c8 4a22
.org 0x6a9ca
	adds r2, r2, r4	@ 0006a9ca 1219
.org 0x6a9cc
	mov ip, r2	@ 0006a9cc 9446
.org 0x6a9ce
	lsls r1, r1, #4	@ 0006a9ce 0901
.org 0x6a9d0
	ldrb r2, [r2, #0]	@ 0006a9d0 1278
.org 0x6a9d2
	movs r0, #17	@ 0006a9d2 1120
.org 0x6a9d4
	negs r0, r0	@ 0006a9d4 4042
.org 0x6a9d6
	ands r0, r2	@ 0006a9d6 1040
.org 0x6a9d8
	orrs r0, r1	@ 0006a9d8 0843
.org 0x6a9da
	mov r1, ip	@ 0006a9da 6146
.org 0x6a9dc
	strb r0, [r1, #0]	@ 0006a9dc 0870
.org 0x6a9de
	ldrb r1, [r4, #10]	@ 0006a9de a17a
.org 0x6a9e0
	movs r0, #32	@ 0006a9e0 2020
.org 0x6a9e2
	orrs r0, r1	@ 0006a9e2 0843
.org 0x6a9e4
	strb r0, [r4, #10]	@ 0006a9e4 a072
.org 0x6a9e6
	adds r0, r4, #0	@ 0006a9e6 201c
.org 0x6a9e8
	adds r0, #77	@ 0006a9e8 4d30
.org 0x6a9ea
	strb r3, [r0, #0]	@ 0006a9ea 0370
.org 0x6a9ec
	movs r2, #32	@ 0006a9ec 2022
.org 0x6a9ee
	mov r0, ip	@ 0006a9ee 6046
.org 0x6a9f0
	ldrb r1, [r0, #0]	@ 0006a9f0 0178
.org 0x6a9f2
	movs r0, #33	@ 0006a9f2 2120
.org 0x6a9f4
	negs r0, r0	@ 0006a9f4 4042
.org 0x6a9f6
	ands r0, r1	@ 0006a9f6 0840
.org 0x6a9f8
	orrs r0, r2	@ 0006a9f8 1043
.org 0x6a9fa
	mov r1, ip	@ 0006a9fa 6146
.org 0x6a9fc
	strb r0, [r1, #0]	@ 0006a9fc 0870
.org 0x6a9fe
	adds r0, r4, #0	@ 0006a9fe 201c
.org 0x6aa00
	adds r0, #36	@ 0006aa00 2430
.org 0x6aa02
	mov r2, sl	@ 0006aa02 5246
.org 0x6aa04
	strb r2, [r0, #0]	@ 0006aa04 0270
.org 0x6aa06
	mov r1, r9	@ 0006aa06 4946
.org 0x6aa08
	ldr r0, [sp, #4]	@ 0006aa08 0198
.org 0x6aa0a
	lsls r2, r0, #16	@ 0006aa0a 0204
.org 0x6aa0c
	lsrs r2, r2, #16	@ 0006aa0c 120c
.org 0x6aa0e
	ldr r0, [sp, #8]	@ 0006aa0e 0298
.org 0x6aa10
	lsls r3, r0, #16	@ 0006aa10 0304
.org 0x6aa12
	lsrs r3, r3, #16	@ 0006aa12 1b0c
.org 0x6aa14
	adds r0, r4, #0	@ 0006aa14 201c
.org 0x6aa16
	bl 0x1cfc8	@ 0006aa16 b2f7d7fa
.org 0x6aa1a
	ldrb r0, [r4, #30]	@ 0006aa1a a07f
.org 0x6aa1c
	lsls r0, r0, #8	@ 0006aa1c 0002
.org 0x6aa1e
	ldr r2, [sp, #12]	@ 0006aa1e 039a
.org 0x6aa20
	ldrb r1, [r2, #0]	@ 0006aa20 1178
.org 0x6aa22
	orrs r1, r0	@ 0006aa22 0143
.org 0x6aa24
	ldr r0, [sp, #16]	@ 0006aa24 0498
.org 0x6aa26
	movs r2, #0	@ 0006aa26 0022
.org 0x6aa28
	ldrsb r2, [r0, r2]	@ 0006aa28 8256
.org 0x6aa2a
	lsls r2, r2, #16	@ 0006aa2a 1204
.org 0x6aa2c
	lsrs r2, r2, #16	@ 0006aa2c 120c
.org 0x6aa2e
	ldr r0, [sp, #20]	@ 0006aa2e 0598
.org 0x6aa30
	movs r3, #0	@ 0006aa30 0023
.org 0x6aa32
	ldrsb r3, [r0, r3]	@ 0006aa32 c356
.org 0x6aa34
	adds r3, #1	@ 0006aa34 0133
.org 0x6aa36
	lsls r3, r3, #16	@ 0006aa36 1b04
.org 0x6aa38
	lsrs r3, r3, #16	@ 0006aa38 1b0c
.org 0x6aa3a
	adds r0, r4, #0	@ 0006aa3a 201c
.org 0x6aa3c
	bl 0x1cfc8	@ 0006aa3c b2f7c4fa
.org 0x6aa40
	adds r0, r4, #0	@ 0006aa40 201c
.org 0x6aa42
	bl 0x1cff0	@ 0006aa42 b2f7d5fa
.org 0x6aa46
	b.n 0x6aae8	@ 0006aa46 4fe0
.org 0x6aa48
	movs r0, #127	@ 0006aa48 7f20
.org 0x6aa4a
	mov r1, ip	@ 0006aa4a 6146
.org 0x6aa4c
	ands r0, r1	@ 0006aa4c 0840
.org 0x6aa4e
	cmp r0, #0	@ 0006aa4e 0028
.org 0x6aa50
	bne.n 0x6aa94	@ 0006aa50 20d1
.org 0x6aa52
	adds r0, r4, #0	@ 0006aa52 201c
.org 0x6aa54
	bl 0x1cd28	@ 0006aa54 b2f768f9
.org 0x6aa58
	mov r1, r9	@ 0006aa58 4946
.org 0x6aa5a
	ldr r0, [sp, #4]	@ 0006aa5a 0198
.org 0x6aa5c
	lsls r2, r0, #16	@ 0006aa5c 0204
.org 0x6aa5e
	lsrs r2, r2, #16	@ 0006aa5e 120c
.org 0x6aa60
	ldr r0, [sp, #8]	@ 0006aa60 0298
.org 0x6aa62
	lsls r3, r0, #16	@ 0006aa62 0304
.org 0x6aa64
	lsrs r3, r3, #16	@ 0006aa64 1b0c
.org 0x6aa66
	adds r0, r4, #0	@ 0006aa66 201c
.org 0x6aa68
	bl 0x1cfc8	@ 0006aa68 b2f7aefa
.org 0x6aa6c
	ldrb r0, [r4, #30]	@ 0006aa6c a07f
.org 0x6aa6e
	lsls r0, r0, #8	@ 0006aa6e 0002
.org 0x6aa70
	ldrb r1, [r6, #0]	@ 0006aa70 3178
.org 0x6aa72
	orrs r1, r0	@ 0006aa72 0143
.org 0x6aa74
	movs r2, #0	@ 0006aa74 0022
.org 0x6aa76
	ldrsb r2, [r7, r2]	@ 0006aa76 ba56
.org 0x6aa78
	lsls r2, r2, #16	@ 0006aa78 1204
.org 0x6aa7a
	lsrs r2, r2, #16	@ 0006aa7a 120c
.org 0x6aa7c
	mov r0, r8	@ 0006aa7c 4046
.org 0x6aa7e
	movs r3, #0	@ 0006aa7e 0023
.org 0x6aa80
	ldrsb r3, [r0, r3]	@ 0006aa80 c356
.org 0x6aa82
	adds r3, #1	@ 0006aa82 0133
.org 0x6aa84
	lsls r3, r3, #16	@ 0006aa84 1b04
.org 0x6aa86
	lsrs r3, r3, #16	@ 0006aa86 1b0c
.org 0x6aa88
	adds r0, r4, #0	@ 0006aa88 201c
.org 0x6aa8a
	bl 0x1cfc8	@ 0006aa8a b2f79dfa
.org 0x6aa8e
	adds r0, r4, #0	@ 0006aa8e 201c
.org 0x6aa90
	bl 0x1cff0	@ 0006aa90 b2f7aefa
.org 0x6aa94
	ldr r2, [sp, #0]	@ 0006aa94 009a
.org 0x6aa96
	cmp r2, #0	@ 0006aa96 002a
.org 0x6aa98
	beq.n 0x6aaa2	@ 0006aa98 03d0
.org 0x6aa9a
	ldrb r1, [r4, #10]	@ 0006aa9a a17a
.org 0x6aa9c
	movs r0, #16	@ 0006aa9c 1020
.org 0x6aa9e
	orrs r0, r1	@ 0006aa9e 0843
.org 0x6aaa0
	b.n 0x6aaa8	@ 0006aaa0 02e0
.org 0x6aaa2
	ldrb r1, [r4, #10]	@ 0006aaa2 a17a
.org 0x6aaa4
	movs r0, #239	@ 0006aaa4 ef20
.org 0x6aaa6
	ands r0, r1	@ 0006aaa6 0840
.org 0x6aaa8
	strb r0, [r4, #10]	@ 0006aaa8 a072
.org 0x6aaaa
	movs r1, #1	@ 0006aaaa 0121
.org 0x6aaac
	ands r1, r2	@ 0006aaac 1140
.org 0x6aaae
	adds r0, r4, #0	@ 0006aaae 201c
.org 0x6aab0
	adds r0, #76	@ 0006aab0 4c30
.org 0x6aab2
	strb r1, [r0, #0]	@ 0006aab2 0170
.org 0x6aab4
	adds r3, r4, #0	@ 0006aab4 231c
.org 0x6aab6
	adds r3, #74	@ 0006aab6 4a33
.org 0x6aab8
	lsls r1, r1, #4	@ 0006aab8 0901
.org 0x6aaba
	ldrb r2, [r3, #0]	@ 0006aaba 1a78
.org 0x6aabc
	movs r0, #17	@ 0006aabc 1120
.org 0x6aabe
	negs r0, r0	@ 0006aabe 4042
.org 0x6aac0
	ands r0, r2	@ 0006aac0 1040
.org 0x6aac2
	orrs r0, r1	@ 0006aac2 0843
.org 0x6aac4
	strb r0, [r3, #0]	@ 0006aac4 1870
.org 0x6aac6
	movs r2, #0	@ 0006aac6 0022
.org 0x6aac8
	ldrb r1, [r4, #10]	@ 0006aac8 a17a
.org 0x6aaca
	movs r0, #223	@ 0006aaca df20
.org 0x6aacc
	ands r0, r1	@ 0006aacc 0840
.org 0x6aace
	strb r0, [r4, #10]	@ 0006aace a072
.org 0x6aad0
	adds r0, r4, #0	@ 0006aad0 201c
.org 0x6aad2
	adds r0, #77	@ 0006aad2 4d30
.org 0x6aad4
	strb r2, [r0, #0]	@ 0006aad4 0270
.org 0x6aad6
	ldrb r1, [r3, #0]	@ 0006aad6 1978
.org 0x6aad8
	movs r0, #33	@ 0006aad8 2120
.org 0x6aada
	negs r0, r0	@ 0006aada 4042
.org 0x6aadc
	ands r0, r1	@ 0006aadc 0840
.org 0x6aade
	strb r0, [r3, #0]	@ 0006aade 1870
.org 0x6aae0
	adds r0, r4, #0	@ 0006aae0 201c
.org 0x6aae2
	adds r0, #36	@ 0006aae2 2430
.org 0x6aae4
	mov r1, sl	@ 0006aae4 5146
.org 0x6aae6
	strb r1, [r0, #0]	@ 0006aae6 0170
.org 0x6aae8
	add sp, #24	@ 0006aae8 06b0
.org 0x6aaea
	pop {r3, r4, r5}	@ 0006aaea 38bc
.org 0x6aaec
	mov r8, r3	@ 0006aaec 9846
.org 0x6aaee
	mov r9, r4	@ 0006aaee a146
.org 0x6aaf0
	mov sl, r5	@ 0006aaf0 aa46
.org 0x6aaf2
	pop {r4, r5, r6, r7}	@ 0006aaf2 f0bc
.org 0x6aaf4
	pop {r0}	@ 0006aaf4 01bc
.org 0x6aaf6
	bx r0	@ 0006aaf6 0047
