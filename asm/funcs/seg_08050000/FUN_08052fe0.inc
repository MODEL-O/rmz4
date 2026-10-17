@ FUN_08052fe0  entry 0x08052fe0  size 592
.thumb
.org 0x52fe0
FUN_08052fe0:
	push {r4, r5, r6, r7, lr}	@ 00052fe0 f0b5
.org 0x52fe2
	mov r7, sl	@ 00052fe2 5746
.org 0x52fe4
	mov r6, r9	@ 00052fe4 4e46
.org 0x52fe6
	mov r5, r8	@ 00052fe6 4546
.org 0x52fe8
	push {r5, r6, r7}	@ 00052fe8 e0b4
.org 0x52fea
	adds r7, r0, #0	@ 00052fea 071c
.org 0x52fec
	ldrb r0, [r7, #9]	@ 00052fec 787a
.org 0x52fee
	lsls r0, r0, #2	@ 00052fee 8000
.org 0x52ff0
	ldr r1, [pc, #552]	@ 00052ff0 8a49
.org 0x52ff2
	adds r0, r0, r1	@ 00052ff2 4018
.org 0x52ff4
	movs r1, #1	@ 00052ff4 0121
.org 0x52ff6
	str r1, [r7, #12]	@ 00052ff6 f960
.org 0x52ff8
	ldr r0, [r0, #0]	@ 00052ff8 0068
.org 0x52ffa
	movs r1, #4	@ 00052ffa 0421
.org 0x52ffc
	ldr r0, [r0, #4]	@ 00052ffc 4068
.org 0x52ffe
	str r0, [r7, #20]	@ 00052ffe 7861
.org 0x53000
	strb r1, [r7, #13]	@ 00053000 7973
.org 0x53002
	movs r2, #0	@ 00053002 0022
.org 0x53004
	strb r2, [r7, #14]	@ 00053004 ba73
.org 0x53006
	strb r2, [r7, #15]	@ 00053006 fa73
.org 0x53008
	ldrb r0, [r7, #10]	@ 00053008 b87a
.org 0x5300a
	movs r1, #1	@ 0005300a 0121
.org 0x5300c
	orrs r0, r1	@ 0005300c 0843
.org 0x5300e
	movs r1, #2	@ 0005300e 0221
.org 0x53010
	orrs r0, r1	@ 00053010 0843
.org 0x53012
	strb r0, [r7, #10]	@ 00053012 b872
.org 0x53014
	adds r0, r7, #0	@ 00053014 381c
.org 0x53016
	adds r0, #181	@ 00053016 b530
.org 0x53018
	strb r2, [r0, #0]	@ 00053018 0270
.org 0x5301a
	subs r0, #1	@ 0005301a 0138
.org 0x5301c
	strb r2, [r0, #0]	@ 0005301c 0270
.org 0x5301e
	ldr r0, [r7, #84]	@ 0005301e 786d
.org 0x53020
	ldr r1, [r7, #88]	@ 00053020 b96d
.org 0x53022
	bl 0x8534	@ 00053022 b5f787fa
.org 0x53026
	adds r4, r7, #0	@ 00053026 3c1c
.org 0x53028
	adds r4, #184	@ 00053028 b834
.org 0x5302a
	str r0, [r4, #0]	@ 0005302a 2060
.org 0x5302c
	ldr r0, [r7, #84]	@ 0005302c 786d
.org 0x5302e
	ldr r1, [r7, #88]	@ 0005302e b96d
.org 0x53030
	bl 0x8868	@ 00053030 b5f71afc
.org 0x53034
	adds r1, r7, #0	@ 00053034 391c
.org 0x53036
	adds r1, #188	@ 00053036 bc31
.org 0x53038
	str r0, [r1, #0]	@ 00053038 0860
.org 0x5303a
	ldr r1, [pc, #484]	@ 0005303a 7949
.org 0x5303c
	adds r0, r0, r1	@ 0005303c 4018
.org 0x5303e
	str r0, [r7, #84]	@ 0005303e 7865
.org 0x53040
	ldr r0, [r4, #0]	@ 00053040 2068
.org 0x53042
	ldr r2, [pc, #480]	@ 00053042 784a
.org 0x53044
	adds r0, r0, r2	@ 00053044 8018
.org 0x53046
	str r0, [r7, #88]	@ 00053046 b865
.org 0x53048
	movs r0, #0	@ 00053048 0020
.org 0x5304a
	str r0, [r7, #44]	@ 0005304a f862
.org 0x5304c
	movs r4, #215	@ 0005304c d724
.org 0x5304e
	lsls r4, r4, #2	@ 0005304e a400
.org 0x53050
	ldr r5, [pc, #468]	@ 00053050 754d
.org 0x53052
	adds r0, r4, r5	@ 00053052 6019
.org 0x53054
	ldr r1, [pc, #468]	@ 00053054 7549
.org 0x53056
	mov r9, r1	@ 00053056 8946
.org 0x53058
	adds r1, #86	@ 00053058 5631
.org 0x5305a
	ldrh r1, [r1, #0]	@ 0005305a 0988
.org 0x5305c
	ldrh r2, [r0, #6]	@ 0005305c c288
.org 0x5305e
	lsrs r2, r2, #6	@ 0005305e 9209
.org 0x53060
	subs r1, r1, r2	@ 00053060 891a
.org 0x53062
	lsls r1, r1, #5	@ 00053062 4901
.org 0x53064
	movs r2, #128	@ 00053064 8022
.org 0x53066
	lsls r2, r2, #9	@ 00053066 5202
.org 0x53068
	adds r1, r1, r2	@ 00053068 8918
.org 0x5306a
	bl 0x1d30	@ 0005306a aef761fe
.org 0x5306e
	ldr r0, [pc, #448]	@ 0005306e 7048
.org 0x53070
	mov r8, r0	@ 00053070 8046
.org 0x53072
	add r4, r8	@ 00053072 4444
.org 0x53074
	ldr r1, [pc, #444]	@ 00053074 6f49
.org 0x53076
	mov sl, r1	@ 00053076 8a46
.org 0x53078
	mov r0, sl	@ 00053078 5046
.org 0x5307a
	adds r0, #86	@ 0005307a 5630
.org 0x5307c
	ldrh r1, [r0, #0]	@ 0005307c 0188
.org 0x5307e
	ldrb r0, [r4, #7]	@ 0005307e e079
.org 0x53080
	subs r1, r1, r0	@ 00053080 091a
.org 0x53082
	lsls r1, r1, #5	@ 00053082 4901
.org 0x53084
	movs r6, #128	@ 00053084 8026
.org 0x53086
	lsls r6, r6, #2	@ 00053086 b600
.org 0x53088
	adds r1, r1, r6	@ 00053088 8919
.org 0x5308a
	adds r0, r4, #0	@ 0005308a 201c
.org 0x5308c
	bl 0x2208	@ 0005308c aff7bcf8
.org 0x53090
	movs r4, #200	@ 00053090 c824
.org 0x53092
	lsls r4, r4, #2	@ 00053092 a400
.org 0x53094
	adds r0, r4, r5	@ 00053094 6019
.org 0x53096
	mov r1, r9	@ 00053096 4946
.org 0x53098
	adds r1, #80	@ 00053098 5031
.org 0x5309a
	ldrh r1, [r1, #0]	@ 0005309a 0988
.org 0x5309c
	ldrh r2, [r0, #6]	@ 0005309c c288
.org 0x5309e
	lsrs r2, r2, #6	@ 0005309e 9209
.org 0x530a0
	subs r1, r1, r2	@ 000530a0 891a
.org 0x530a2
	lsls r1, r1, #5	@ 000530a2 4901
.org 0x530a4
	movs r2, #128	@ 000530a4 8022
.org 0x530a6
	lsls r2, r2, #9	@ 000530a6 5202
.org 0x530a8
	adds r1, r1, r2	@ 000530a8 8918
.org 0x530aa
	bl 0x1d30	@ 000530aa aef741fe
.org 0x530ae
	add r4, r8	@ 000530ae 4444
.org 0x530b0
	mov r0, sl	@ 000530b0 5046
.org 0x530b2
	adds r0, #80	@ 000530b2 5030
.org 0x530b4
	ldrh r1, [r0, #0]	@ 000530b4 0188
.org 0x530b6
	ldrb r0, [r4, #7]	@ 000530b6 e079
.org 0x530b8
	subs r1, r1, r0	@ 000530b8 091a
.org 0x530ba
	lsls r1, r1, #5	@ 000530ba 4901
.org 0x530bc
	adds r1, r1, r6	@ 000530bc 8919
.org 0x530be
	adds r0, r4, #0	@ 000530be 201c
.org 0x530c0
	bl 0x2208	@ 000530c0 aff7a2f8
.org 0x530c4
	movs r4, #205	@ 000530c4 cd24
.org 0x530c6
	lsls r4, r4, #2	@ 000530c6 a400
.org 0x530c8
	adds r0, r4, r5	@ 000530c8 6019
.org 0x530ca
	mov r1, r9	@ 000530ca 4946
.org 0x530cc
	adds r1, #82	@ 000530cc 5231
.org 0x530ce
	ldrh r1, [r1, #0]	@ 000530ce 0988
.org 0x530d0
	ldrh r2, [r0, #6]	@ 000530d0 c288
.org 0x530d2
	lsrs r2, r2, #6	@ 000530d2 9209
.org 0x530d4
	subs r1, r1, r2	@ 000530d4 891a
.org 0x530d6
	lsls r1, r1, #5	@ 000530d6 4901
.org 0x530d8
	movs r2, #128	@ 000530d8 8022
.org 0x530da
	lsls r2, r2, #9	@ 000530da 5202
.org 0x530dc
	adds r1, r1, r2	@ 000530dc 8918
.org 0x530de
	bl 0x1d30	@ 000530de aef727fe
.org 0x530e2
	add r4, r8	@ 000530e2 4444
.org 0x530e4
	mov r0, sl	@ 000530e4 5046
.org 0x530e6
	adds r0, #82	@ 000530e6 5230
.org 0x530e8
	ldrh r1, [r0, #0]	@ 000530e8 0188
.org 0x530ea
	ldrb r0, [r4, #7]	@ 000530ea e079
.org 0x530ec
	subs r1, r1, r0	@ 000530ec 091a
.org 0x530ee
	lsls r1, r1, #5	@ 000530ee 4901
.org 0x530f0
	adds r1, r1, r6	@ 000530f0 8919
.org 0x530f2
	adds r0, r4, #0	@ 000530f2 201c
.org 0x530f4
	bl 0x2208	@ 000530f4 aff788f8
.org 0x530f8
	movs r4, #195	@ 000530f8 c324
.org 0x530fa
	lsls r4, r4, #2	@ 000530fa a400
.org 0x530fc
	adds r0, r4, r5	@ 000530fc 6019
.org 0x530fe
	mov r1, r9	@ 000530fe 4946
.org 0x53100
	adds r1, #78	@ 00053100 4e31
.org 0x53102
	ldrh r1, [r1, #0]	@ 00053102 0988
.org 0x53104
	ldrh r2, [r0, #6]	@ 00053104 c288
.org 0x53106
	lsrs r2, r2, #6	@ 00053106 9209
.org 0x53108
	subs r1, r1, r2	@ 00053108 891a
.org 0x5310a
	lsls r1, r1, #5	@ 0005310a 4901
.org 0x5310c
	movs r2, #128	@ 0005310c 8022
.org 0x5310e
	lsls r2, r2, #9	@ 0005310e 5202
.org 0x53110
	adds r1, r1, r2	@ 00053110 8918
.org 0x53112
	bl 0x1d30	@ 00053112 aef70dfe
.org 0x53116
	add r4, r8	@ 00053116 4444
.org 0x53118
	mov r0, sl	@ 00053118 5046
.org 0x5311a
	adds r0, #78	@ 0005311a 4e30
.org 0x5311c
	ldrh r1, [r0, #0]	@ 0005311c 0188
.org 0x5311e
	ldrb r0, [r4, #7]	@ 0005311e e079
.org 0x53120
	subs r1, r1, r0	@ 00053120 091a
.org 0x53122
	lsls r1, r1, #5	@ 00053122 4901
.org 0x53124
	adds r1, r1, r6	@ 00053124 8919
.org 0x53126
	adds r0, r4, #0	@ 00053126 201c
.org 0x53128
	bl 0x2208	@ 00053128 aff76ef8
.org 0x5312c
	movs r4, #160	@ 0005312c a024
.org 0x5312e
	lsls r4, r4, #2	@ 0005312e a400
.org 0x53130
	adds r5, r4, r5	@ 00053130 6519
.org 0x53132
	mov r0, r9	@ 00053132 4846
.org 0x53134
	adds r0, #64	@ 00053134 4030
.org 0x53136
	ldrh r1, [r0, #0]	@ 00053136 0188
.org 0x53138
	ldrh r0, [r5, #6]	@ 00053138 e888
.org 0x5313a
	lsrs r0, r0, #6	@ 0005313a 8009
.org 0x5313c
	subs r1, r1, r0	@ 0005313c 091a
.org 0x5313e
	lsls r1, r1, #5	@ 0005313e 4901
.org 0x53140
	movs r0, #128	@ 00053140 8020
.org 0x53142
	lsls r0, r0, #9	@ 00053142 4002
.org 0x53144
	adds r1, r1, r0	@ 00053144 0918
.org 0x53146
	adds r0, r5, #0	@ 00053146 281c
.org 0x53148
	bl 0x1d30	@ 00053148 aef7f2fd
.org 0x5314c
	add r4, r8	@ 0005314c 4444
.org 0x5314e
	mov r0, sl	@ 0005314e 5046
.org 0x53150
	adds r0, #64	@ 00053150 4030
.org 0x53152
	ldrh r1, [r0, #0]	@ 00053152 0188
.org 0x53154
	ldrb r0, [r4, #7]	@ 00053154 e079
.org 0x53156
	subs r1, r1, r0	@ 00053156 091a
.org 0x53158
	lsls r1, r1, #5	@ 00053158 4901
.org 0x5315a
	adds r1, r1, r6	@ 0005315a 8919
.org 0x5315c
	adds r0, r4, #0	@ 0005315c 201c
.org 0x5315e
	bl 0x2208	@ 0005315e aff753f8
.org 0x53162
	adds r0, r7, #0	@ 00053162 381c
.org 0x53164
	bl 0x1cc9c	@ 00053164 c9f79afd
.org 0x53168
	adds r0, r7, #0	@ 00053168 381c
.org 0x5316a
	bl 0x1ceec	@ 0005316a c9f7bffe
.org 0x5316e
	adds r1, r7, #0	@ 0005316e 391c
.org 0x53170
	adds r1, #37	@ 00053170 2531
.org 0x53172
	movs r0, #26	@ 00053172 1a20
.org 0x53174
	strb r0, [r1, #0]	@ 00053174 0870
.org 0x53176
	adds r0, r7, #0	@ 00053176 381c
.org 0x53178
	adds r0, #76	@ 00053178 4c30
.org 0x5317a
	movs r1, #0	@ 0005317a 0021
.org 0x5317c
	strb r1, [r0, #0]	@ 0005317c 0170
.org 0x5317e
	adds r2, r7, #0	@ 0005317e 3a1c
.org 0x53180
	adds r2, #74	@ 00053180 4a32
.org 0x53182
	ldrb r1, [r2, #0]	@ 00053182 1178
.org 0x53184
	movs r0, #17	@ 00053184 1120
.org 0x53186
	negs r0, r0	@ 00053186 4042
.org 0x53188
	ands r0, r1	@ 00053188 0840
.org 0x5318a
	strb r0, [r2, #0]	@ 0005318a 1070
.org 0x5318c
	ldrb r1, [r7, #10]	@ 0005318c b97a
.org 0x5318e
	movs r0, #239	@ 0005318e ef20
.org 0x53190
	ands r0, r1	@ 00053190 0840
.org 0x53192
	strb r0, [r7, #10]	@ 00053192 b872
.org 0x53194
	ldr r1, [pc, #160]	@ 00053194 2849
.org 0x53196
	adds r0, r7, #0	@ 00053196 381c
.org 0x53198
	movs r2, #64	@ 00053198 4022
.org 0x5319a
	bl 0x503cc	@ 0005319a fdf717f9
.org 0x5319e
	adds r4, r7, #0	@ 0005319e 3c1c
.org 0x531a0
	adds r4, #84	@ 000531a0 5434
.org 0x531a2
	adds r0, r7, #0	@ 000531a2 381c
.org 0x531a4
	adds r1, r4, #0	@ 000531a4 211c
.org 0x531a6
	movs r2, #0	@ 000531a6 0022
.org 0x531a8
	movs r3, #0	@ 000531a8 0023
.org 0x531aa
	bl 0xec9e4	@ 000531aa 99f01bfc
.org 0x531ae
	adds r5, r7, #0	@ 000531ae 3d1c
.org 0x531b0
	adds r5, #192	@ 000531b0 c035
.org 0x531b2
	str r0, [r5, #0]	@ 000531b2 2860
.org 0x531b4
	adds r0, r7, #0	@ 000531b4 381c
.org 0x531b6
	adds r1, r4, #0	@ 000531b6 211c
.org 0x531b8
	movs r2, #0	@ 000531b8 0022
.org 0x531ba
	movs r3, #0	@ 000531ba 0023
.org 0x531bc
	bl 0xec440	@ 000531bc 99f040f9
.org 0x531c0
	adds r6, r7, #0	@ 000531c0 3e1c
.org 0x531c2
	adds r6, #196	@ 000531c2 c436
.org 0x531c4
	str r0, [r6, #0]	@ 000531c4 3060
.org 0x531c6
	adds r0, r7, #0	@ 000531c6 381c
.org 0x531c8
	adds r1, r4, #0	@ 000531c8 211c
.org 0x531ca
	movs r2, #1	@ 000531ca 0122
.org 0x531cc
	movs r3, #0	@ 000531cc 0023
.org 0x531ce
	bl 0xec440	@ 000531ce 99f037f9
.org 0x531d2
	adds r1, r7, #0	@ 000531d2 391c
.org 0x531d4
	adds r1, #200	@ 000531d4 c831
.org 0x531d6
	str r0, [r1, #0]	@ 000531d6 0860
.org 0x531d8
	ldr r0, [r5, #0]	@ 000531d8 2868
.org 0x531da
	cmp r0, #0	@ 000531da 0028
.org 0x531dc
	beq.n 0x531e4	@ 000531dc 02d0
.org 0x531de
	ldr r0, [r6, #0]	@ 000531de 3068
.org 0x531e0
	cmp r0, #0	@ 000531e0 0028
.org 0x531e2
	bne.n 0x5323c	@ 000531e2 2bd1
.org 0x531e4
	ldrb r1, [r7, #10]	@ 000531e4 b97a
.org 0x531e6
	movs r0, #254	@ 000531e6 fe20
.org 0x531e8
	ands r0, r1	@ 000531e8 0840
.org 0x531ea
	movs r1, #253	@ 000531ea fd21
.org 0x531ec
	ands r0, r1	@ 000531ec 0840
.org 0x531ee
	strb r0, [r7, #10]	@ 000531ee b872
.org 0x531f0
	adds r0, r7, #0	@ 000531f0 381c
.org 0x531f2
	adds r0, #140	@ 000531f2 8c30
.org 0x531f4
	movs r2, #0	@ 000531f4 0022
.org 0x531f6
	str r2, [r0, #0]	@ 000531f6 0260
.org 0x531f8
	adds r0, #4	@ 000531f8 0430
.org 0x531fa
	str r2, [r0, #0]	@ 000531fa 0260
.org 0x531fc
	adds r0, #4	@ 000531fc 0430
.org 0x531fe
	strb r2, [r0, #0]	@ 000531fe 0270
.org 0x53200
	ldrb r1, [r7, #10]	@ 00053200 b97a
.org 0x53202
	movs r0, #251	@ 00053202 fb20
.org 0x53204
	ands r0, r1	@ 00053204 0840
.org 0x53206
	strb r0, [r7, #10]	@ 00053206 b872
.org 0x53208
	ldrb r0, [r7, #9]	@ 00053208 787a
.org 0x5320a
	lsls r0, r0, #2	@ 0005320a 8000
.org 0x5320c
	ldr r1, [pc, #12]	@ 0005320c 0349
.org 0x5320e
	adds r0, r0, r1	@ 0005320e 4018
.org 0x53210
	movs r1, #3	@ 00053210 0321
.org 0x53212
	str r1, [r7, #12]	@ 00053212 f960
.org 0x53214
	ldr r0, [r0, #0]	@ 00053214 0068
.org 0x53216
	ldr r0, [r0, #12]	@ 00053216 c068
.org 0x53218
	str r0, [r7, #20]	@ 00053218 7861
.org 0x5321a
	b.n 0x53242	@ 0005321a 12e0
.org 0x5321c
	.byte 0x70,0x7d,0x85,0x08	@ 0005321c data
.org 0x53220
	.byte 0x00,0xc9,0xff,0xff	@ 00053220 data
.org 0x53224
	.byte 0x01,0xc8,0xff,0xff	@ 00053224 data
.org 0x53228
	.byte 0x00,0x40,0xc4,0x08	@ 00053228 data
.org 0x5322c
	.byte 0x40,0xe0,0x02,0x02	@ 0005322c data
