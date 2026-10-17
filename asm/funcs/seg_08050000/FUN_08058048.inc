@ FUN_08058048  entry 0x08058048  size 404
.thumb
.org 0x58048
FUN_08058048:
	push {r4, r5, lr}	@ 00058048 30b5
.org 0x5804a
	adds r4, r0, #0	@ 0005804a 041c
.org 0x5804c
	ldrb r0, [r4, #15]	@ 0005804c e07b
.org 0x5804e
	cmp r0, #0	@ 0005804e 0028
.org 0x58050
	bne.n 0x5812c	@ 00058050 6cd1
.org 0x58052
	movs r0, #128	@ 00058052 8020
.org 0x58054
	lsls r0, r0, #1	@ 00058054 4000
.org 0x58056
	bl 0x2b10	@ 00058056 aaf75bfd
.org 0x5805a
	ldr r1, [pc, #80]	@ 0005805a 1449
.org 0x5805c
	adds r0, r4, #0	@ 0005805c 201c
.org 0x5805e
	bl 0x1cf00	@ 0005805e c4f74fff
.org 0x58062
	movs r2, #0	@ 00058062 0022
.org 0x58064
	adds r0, r4, #0	@ 00058064 201c
.org 0x58066
	adds r0, #204	@ 00058066 cc30
.org 0x58068
	ldr r0, [r0, #0]	@ 00058068 0068
.org 0x5806a
	movs r1, #240	@ 0005806a f021
.org 0x5806c
	lsls r1, r1, #8	@ 0005806c 0902
.org 0x5806e
	adds r0, r0, r1	@ 0005806e 4018
.org 0x58070
	ldr r1, [r4, #84]	@ 00058070 616d
.org 0x58072
	cmp r1, r0	@ 00058072 8142
.org 0x58074
	bge.n 0x58078	@ 00058074 00da
.org 0x58076
	movs r2, #1	@ 00058076 0122
.org 0x58078
	adds r5, r2, #0	@ 00058078 151c
.org 0x5807a
	movs r3, #1	@ 0005807a 0123
.org 0x5807c
	adds r1, r5, #0	@ 0005807c 291c
.org 0x5807e
	ands r1, r3	@ 0005807e 1940
.org 0x58080
	adds r0, r4, #0	@ 00058080 201c
.org 0x58082
	adds r0, #76	@ 00058082 4c30
.org 0x58084
	strb r1, [r0, #0]	@ 00058084 0170
.org 0x58086
	movs r2, #74	@ 00058086 4a22
.org 0x58088
	adds r2, r2, r4	@ 00058088 1219
.org 0x5808a
	mov ip, r2	@ 0005808a 9446
.org 0x5808c
	lsls r1, r1, #4	@ 0005808c 0901
.org 0x5808e
	ldrb r2, [r2, #0]	@ 0005808e 1278
.org 0x58090
	movs r0, #17	@ 00058090 1120
.org 0x58092
	negs r0, r0	@ 00058092 4042
.org 0x58094
	ands r0, r2	@ 00058094 1040
.org 0x58096
	orrs r0, r1	@ 00058096 0843
.org 0x58098
	mov r1, ip	@ 00058098 6146
.org 0x5809a
	strb r0, [r1, #0]	@ 0005809a 0870
.org 0x5809c
	adds r0, r5, #0	@ 0005809c 281c
.org 0x5809e
	ands r0, r3	@ 0005809e 1840
.org 0x580a0
	cmp r0, #0	@ 000580a0 0028
.org 0x580a2
	beq.n 0x580b0	@ 000580a2 05d0
.org 0x580a4
	ldrb r0, [r4, #10]	@ 000580a4 a07a
.org 0x580a6
	movs r1, #16	@ 000580a6 1021
.org 0x580a8
	orrs r0, r1	@ 000580a8 0843
.org 0x580aa
	b.n 0x580b6	@ 000580aa 04e0
.org 0x580ac
	.byte 0x19,0xa0,0x00,0x00	@ 000580ac data
.org 0x580b0
	ldrb r1, [r4, #10]	@ 000580b0 a17a
.org 0x580b2
	movs r0, #239	@ 000580b2 ef20
.org 0x580b4
	ands r0, r1	@ 000580b4 0840
.org 0x580b6
	strb r0, [r4, #10]	@ 000580b6 a072
.org 0x580b8
	ldr r0, [pc, #36]	@ 000580b8 0948
.org 0x580ba
	ldr r0, [r0, #0]	@ 000580ba 0068
.org 0x580bc
	ldr r0, [r0, #84]	@ 000580bc 406d
.org 0x580be
	adds r1, r4, #0	@ 000580be 211c
.org 0x580c0
	adds r1, #204	@ 000580c0 cc31
.org 0x580c2
	ldr r1, [r1, #0]	@ 000580c2 0968
.org 0x580c4
	subs r0, r0, r1	@ 000580c4 401a
.org 0x580c6
	ldr r2, [pc, #28]	@ 000580c6 074a
.org 0x580c8
	adds r0, r0, r2	@ 000580c8 8018
.org 0x580ca
	movs r1, #160	@ 000580ca a021
.org 0x580cc
	lsls r1, r1, #8	@ 000580cc 0902
.org 0x580ce
	cmp r0, r1	@ 000580ce 8842
.org 0x580d0
	bhi.n 0x580e8	@ 000580d0 0ad8
.org 0x580d2
	adds r0, r4, #0	@ 000580d2 201c
.org 0x580d4
	adds r0, #184	@ 000580d4 b830
.org 0x580d6
	ldr r0, [r0, #0]	@ 000580d6 0068
.org 0x580d8
	movs r1, #128	@ 000580d8 8021
.org 0x580da
	lsls r1, r1, #6	@ 000580da 8901
.org 0x580dc
	adds r3, r0, r1	@ 000580dc 4318
.org 0x580de
	b.n 0x580f4	@ 000580de 09e0
.org 0x580e0
	.byte 0xf0,0xdb,0x02,0x02	@ 000580e0 data
.org 0x580e4
	.byte 0x00,0x60,0xff,0xff	@ 000580e4 data
.org 0x580e8
	adds r0, r4, #0	@ 000580e8 201c
.org 0x580ea
	adds r0, #184	@ 000580ea b830
.org 0x580ec
	ldr r0, [r0, #0]	@ 000580ec 0068
.org 0x580ee
	movs r2, #128	@ 000580ee 8022
.org 0x580f0
	lsls r2, r2, #5	@ 000580f0 5201
.org 0x580f2
	adds r3, r0, r2	@ 000580f2 8318
.org 0x580f4
	adds r0, r4, #0	@ 000580f4 201c
.org 0x580f6
	adds r0, #188	@ 000580f6 bc30
.org 0x580f8
	str r3, [r0, #0]	@ 000580f8 0360
.org 0x580fa
	ldr r1, [pc, #236]	@ 000580fa 3b49
.org 0x580fc
	subs r0, #7	@ 000580fc 0738
.org 0x580fe
	ldrb r0, [r0, #0]	@ 000580fe 0078
.org 0x58100
	lsls r0, r0, #1	@ 00058100 4000
.org 0x58102
	adds r0, r0, r1	@ 00058102 4018
.org 0x58104
	movs r1, #0	@ 00058104 0021
.org 0x58106
	ldrsh r0, [r0, r1]	@ 00058106 405e
.org 0x58108
	lsls r0, r0, #1	@ 00058108 4000
.org 0x5810a
	adds r0, r3, r0	@ 0005810a 1818
.org 0x5810c
	str r0, [r4, #88]	@ 0005810c a065
.org 0x5810e
	lsls r1, r5, #1	@ 0005810e 6900
.org 0x58110
	subs r1, #1	@ 00058110 0139
.org 0x58112
	lsls r0, r1, #3	@ 00058112 c800
.org 0x58114
	subs r0, r0, r1	@ 00058114 401a
.org 0x58116
	lsls r0, r0, #7	@ 00058116 c001
.org 0x58118
	str r0, [r4, #92]	@ 00058118 e065
.org 0x5811a
	movs r1, #0	@ 0005811a 0021
.org 0x5811c
	str r1, [r4, #96]	@ 0005811c 2166
.org 0x5811e
	movs r0, #16	@ 0005811e 1020
.org 0x58120
	negs r0, r0	@ 00058120 4042
.org 0x58122
	str r0, [r4, #104]	@ 00058122 a066
.org 0x58124
	strb r1, [r4, #18]	@ 00058124 a174
.org 0x58126
	ldrb r0, [r4, #15]	@ 00058126 e07b
.org 0x58128
	adds r0, #1	@ 00058128 0130
.org 0x5812a
	strb r0, [r4, #15]	@ 0005812a e073
.org 0x5812c
	adds r0, r4, #0	@ 0005812c 201c
.org 0x5812e
	bl 0x1cff0	@ 0005812e c4f75fff
.org 0x58132
	adds r0, r4, #0	@ 00058132 201c
.org 0x58134
	adds r0, #116	@ 00058134 7430
.org 0x58136
	ldr r3, [pc, #180]	@ 00058136 2d4b
.org 0x58138
	ldrb r1, [r4, #30]	@ 00058138 a17f
.org 0x5813a
	lsls r1, r1, #8	@ 0005813a 0902
.org 0x5813c
	adds r2, r4, #0	@ 0005813c 221c
.org 0x5813e
	adds r2, #112	@ 0005813e 7032
.org 0x58140
	ldrb r2, [r2, #0]	@ 00058140 1278
.org 0x58142
	orrs r1, r2	@ 00058142 1143
.org 0x58144
	ldr r2, [pc, #168]	@ 00058144 2a4a
.org 0x58146
	adds r1, r1, r2	@ 00058146 8918
.org 0x58148
	lsls r1, r1, #2	@ 00058148 8900
.org 0x5814a
	adds r1, r1, r3	@ 0005814a c918
.org 0x5814c
	adds r2, r4, #0	@ 0005814c 221c
.org 0x5814e
	adds r2, #113	@ 0005814e 7132
.org 0x58150
	ldrb r2, [r2, #0]	@ 00058150 1278
.org 0x58152
	lsls r2, r2, #24	@ 00058152 1206
.org 0x58154
	asrs r2, r2, #24	@ 00058154 1216
.org 0x58156
	ldr r1, [r1, #0]	@ 00058156 0968
.org 0x58158
	lsls r2, r2, #2	@ 00058158 9200
.org 0x5815a
	adds r2, r2, r1	@ 0005815a 5218
.org 0x5815c
	ldr r1, [r2, #0]	@ 0005815c 1168
.org 0x5815e
	ldrb r2, [r1, #0]	@ 0005815e 0a78
.org 0x58160
	lsls r1, r2, #1	@ 00058160 5100
.org 0x58162
	adds r1, r1, r2	@ 00058162 8918
.org 0x58164
	lsls r1, r1, #3	@ 00058164 c900
.org 0x58166
	ldr r2, [pc, #140]	@ 00058166 234a
.org 0x58168
	adds r1, r1, r2	@ 00058168 8918
.org 0x5816a
	bl 0x5784	@ 0005816a adf70bfb
.org 0x5816e
	ldrb r0, [r4, #18]	@ 0005816e a07c
.org 0x58170
	cmp r0, #0	@ 00058170 0028
.org 0x58172
	bne.n 0x58184	@ 00058172 07d1
.org 0x58174
	ldr r0, [pc, #128]	@ 00058174 2048
.org 0x58176
	ldr r0, [r0, #0]	@ 00058176 0068
.org 0x58178
	ldr r1, [r0, #88]	@ 00058178 816d
.org 0x5817a
	ldr r0, [r4, #88]	@ 0005817a a06d
.org 0x5817c
	cmp r1, r0	@ 0005817c 8142
.org 0x5817e
	bge.n 0x58184	@ 0005817e 01da
.org 0x58180
	movs r0, #1	@ 00058180 0120
.org 0x58182
	strb r0, [r4, #18]	@ 00058182 a074
.org 0x58184
	ldr r3, [r4, #84]	@ 00058184 636d
.org 0x58186
	ldr r0, [r4, #92]	@ 00058186 e06d
.org 0x58188
	adds r3, r3, r0	@ 00058188 1b18
.org 0x5818a
	str r3, [r4, #84]	@ 0005818a 6365
.org 0x5818c
	ldrb r0, [r4, #18]	@ 0005818c a07c
.org 0x5818e
	cmp r0, #0	@ 0005818e 0028
.org 0x58190
	beq.n 0x581c4	@ 00058190 18d0
.org 0x58192
	ldr r0, [r4, #96]	@ 00058192 206e
.org 0x58194
	ldr r1, [r4, #104]	@ 00058194 a16e
.org 0x58196
	adds r0, r0, r1	@ 00058196 4018
.org 0x58198
	str r0, [r4, #96]	@ 00058198 2066
.org 0x5819a
	ldr r1, [pc, #96]	@ 0005819a 1849
.org 0x5819c
	cmp r0, r1	@ 0005819c 8842
.org 0x5819e
	bge.n 0x581a2	@ 0005819e 00da
.org 0x581a0
	str r1, [r4, #96]	@ 000581a0 2166
.org 0x581a2
	adds r2, r4, #0	@ 000581a2 221c
.org 0x581a4
	adds r2, #188	@ 000581a4 bc32
.org 0x581a6
	ldr r1, [r2, #0]	@ 000581a6 1168
.org 0x581a8
	ldr r0, [r4, #96]	@ 000581a8 206e
.org 0x581aa
	adds r1, r1, r0	@ 000581aa 0918
.org 0x581ac
	str r1, [r2, #0]	@ 000581ac 1160
.org 0x581ae
	ldr r2, [pc, #56]	@ 000581ae 0e4a
.org 0x581b0
	adds r0, r4, #0	@ 000581b0 201c
.org 0x581b2
	adds r0, #181	@ 000581b2 b530
.org 0x581b4
	ldrb r0, [r0, #0]	@ 000581b4 0078
.org 0x581b6
	lsls r0, r0, #1	@ 000581b6 4000
.org 0x581b8
	adds r0, r0, r2	@ 000581b8 8018
.org 0x581ba
	movs r2, #0	@ 000581ba 0022
.org 0x581bc
	ldrsh r0, [r0, r2]	@ 000581bc 805e
.org 0x581be
	lsls r0, r0, #1	@ 000581be 4000
.org 0x581c0
	adds r1, r1, r0	@ 000581c0 0918
.org 0x581c2
	str r1, [r4, #88]	@ 000581c2 a165
.org 0x581c4
	adds r0, r4, #0	@ 000581c4 201c
.org 0x581c6
	adds r0, #204	@ 000581c6 cc30
.org 0x581c8
	ldr r0, [r0, #0]	@ 000581c8 0068
.org 0x581ca
	subs r0, r3, r0	@ 000581ca 181a
.org 0x581cc
	movs r1, #160	@ 000581cc a021
.org 0x581ce
	lsls r1, r1, #7	@ 000581ce c901
.org 0x581d0
	adds r0, r0, r1	@ 000581d0 4018
.org 0x581d2
	movs r1, #160	@ 000581d2 a021
.org 0x581d4
	lsls r1, r1, #10	@ 000581d4 8902
.org 0x581d6
	cmp r0, r1	@ 000581d6 8842
.org 0x581d8
	bls.n 0x581e2	@ 000581d8 03d9
.org 0x581da
	movs r1, #0	@ 000581da 0021
