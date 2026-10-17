@ FUN_08075008  entry 0x08075008  size 442
.thumb
.org 0x75008
FUN_08075008:
	push {r4, r5, r6, lr}	@ 00075008 70b5
.org 0x7500a
	sub sp, #16	@ 0007500a 84b0
.org 0x7500c
	adds r5, r0, #0	@ 0007500c 051c
.org 0x7500e
	ldrb r0, [r5, #14]	@ 0007500e a87b
.org 0x75010
	cmp r0, #0	@ 00075010 0028
.org 0x75012
	beq.n 0x75016	@ 00075012 00d0
.org 0x75014
	b.n 0x75138	@ 00075014 90e0
.org 0x75016
	adds r0, r5, #0	@ 00075016 281c
.org 0x75018
	adds r0, #223	@ 00075018 df30
.org 0x7501a
	ldrb r0, [r0, #0]	@ 0007501a 0078
.org 0x7501c
	cmp r0, #0	@ 0007501c 0028
.org 0x7501e
	beq.n 0x75036	@ 0007501e 0ad0
.org 0x75020
	adds r0, r5, #0	@ 00075020 281c
.org 0x75022
	bl 0x1cc9c	@ 00075022 a7f73bfe
.org 0x75026
	adds r0, r5, #0	@ 00075026 281c
.org 0x75028
	bl 0x1ceec	@ 00075028 a7f760ff
.org 0x7502c
	ldr r0, [r5, #88]	@ 0007502c a86d
.org 0x7502e
	movs r1, #156	@ 0007502e 9c21
.org 0x75030
	lsls r1, r1, #6	@ 00075030 8901
.org 0x75032
	adds r0, r0, r1	@ 00075032 4018
.org 0x75034
	str r0, [r5, #88]	@ 00075034 a865
.org 0x75036
	adds r0, r5, #0	@ 00075036 281c
.org 0x75038
	adds r0, #140	@ 00075038 8c30
.org 0x7503a
	ldr r1, [r0, #0]	@ 0007503a 0168
.org 0x7503c
	movs r2, #128	@ 0007503c 8022
.org 0x7503e
	lsls r2, r2, #9	@ 0007503e 5202
.org 0x75040
	ands r1, r2	@ 00075040 1140
.org 0x75042
	adds r6, r0, #0	@ 00075042 061c
.org 0x75044
	cmp r1, #0	@ 00075044 0029
.org 0x75046
	beq.n 0x750ae	@ 00075046 32d0
.org 0x75048
	ldr r0, [r5, #84]	@ 00075048 686d
.org 0x7504a
	str r0, [sp, #0]	@ 0007504a 0090
.org 0x7504c
	ldr r0, [r5, #88]	@ 0007504c a86d
.org 0x7504e
	ldr r1, [pc, #40]	@ 0007504e 0a49
.org 0x75050
	adds r0, r0, r1	@ 00075050 4018
.org 0x75052
	str r0, [sp, #4]	@ 00075052 0190
.org 0x75054
	ldr r1, [pc, #36]	@ 00075054 0949
.org 0x75056
	adds r0, r5, #0	@ 00075056 281c
.org 0x75058
	bl 0x1cf00	@ 00075058 a7f752ff
.org 0x7505c
	adds r0, r5, #0	@ 0007505c 281c
.org 0x7505e
	bl 0xab848	@ 0007505e 36f0f3fb
.org 0x75062
	str r0, [r5, #44]	@ 00075062 e862
.org 0x75064
	ldrb r1, [r5, #10]	@ 00075064 a97a
.org 0x75066
	movs r0, #16	@ 00075066 1020
.org 0x75068
	ands r0, r1	@ 00075068 0840
.org 0x7506a
	cmp r0, #0	@ 0007506a 0028
.org 0x7506c
	beq.n 0x75080	@ 0007506c 08d0
.org 0x7506e
	movs r0, #32	@ 0007506e 2020
.org 0x75070
	str r0, [r5, #92]	@ 00075070 e865
.org 0x75072
	subs r0, #33	@ 00075072 2138
.org 0x75074
	b.n 0x75088	@ 00075074 08e0
.org 0x75076
	.byte 0x00	@ 00075076 data
.org 0x75077
	.byte 0x00	@ 00075077 data
.org 0x75078
	.byte 0x00,0xde,0xff,0xff	@ 00075078 data
.org 0x7507c
	.byte 0x0e,0xaf,0x00,0x00	@ 0007507c data
.org 0x75080
	movs r0, #32	@ 00075080 2020
.org 0x75082
	negs r0, r0	@ 00075082 4042
.org 0x75084
	str r0, [r5, #92]	@ 00075084 e865
.org 0x75086
	movs r0, #1	@ 00075086 0120
.org 0x75088
	str r0, [r5, #100]	@ 00075088 6866
.org 0x7508a
	movs r2, #128	@ 0007508a 8022
.org 0x7508c
	lsls r2, r2, #2	@ 0007508c 9200
.org 0x7508e
	adds r0, r5, #0	@ 0007508e 281c
.org 0x75090
	adds r0, #216	@ 00075090 d830
.org 0x75092
	ldrb r3, [r0, #0]	@ 00075092 0378
.org 0x75094
	movs r0, #0	@ 00075094 0020
.org 0x75096
	mov r1, sp	@ 00075096 6946
.org 0x75098
	bl 0xd0dc4	@ 00075098 5bf094fe
.org 0x7509c
	movs r4, #0	@ 0007509c 0024
.org 0x7509e
	movs r0, #32	@ 0007509e 2020
.org 0x750a0
	strb r0, [r5, #18]	@ 000750a0 a874
.org 0x750a2
	movs r0, #47	@ 000750a2 2f20
.org 0x750a4
	bl 0x2b10	@ 000750a4 8df734fd
.org 0x750a8
	strb r4, [r5, #13]	@ 000750a8 6c73
.org 0x750aa
	strb r4, [r5, #15]	@ 000750aa ec73
.org 0x750ac
	b.n 0x750c0	@ 000750ac 08e0
.org 0x750ae
	ldr r1, [pc, #40]	@ 000750ae 0a49
.org 0x750b0
	adds r0, r5, #0	@ 000750b0 281c
.org 0x750b2
	bl 0x1cf00	@ 000750b2 a7f725ff
.org 0x750b6
	movs r0, #1	@ 000750b6 0120
.org 0x750b8
	strb r0, [r5, #13]	@ 000750b8 6873
.org 0x750ba
	strb r0, [r5, #15]	@ 000750ba e873
.org 0x750bc
	movs r0, #64	@ 000750bc 4020
.org 0x750be
	strb r0, [r5, #18]	@ 000750be a874
.org 0x750c0
	movs r0, #219	@ 000750c0 db20
.org 0x750c2
	bl 0x2b5c	@ 000750c2 8df74bfd
.org 0x750c6
	ldr r0, [pc, #20]	@ 000750c6 0548
.org 0x750c8
	ldrh r0, [r0, #0]	@ 000750c8 0088
.org 0x750ca
	cmp r0, #3	@ 000750ca 0328
.org 0x750cc
	bne.n 0x750e0	@ 000750cc 08d1
.org 0x750ce
	movs r0, #224	@ 000750ce e020
.org 0x750d0
	bl 0x2b10	@ 000750d0 8df71efd
.org 0x750d4
	b.n 0x750e6	@ 000750d4 07e0
.org 0x750d6
	.byte 0x00	@ 000750d6 data
.org 0x750d7
	.byte 0x00	@ 000750d7 data
.org 0x750d8
	.byte 0x0c,0xaf,0x00,0x00	@ 000750d8 data
.org 0x750dc
	.byte 0x10,0xe9,0x02,0x02	@ 000750dc data
.org 0x750e0
	movs r0, #225	@ 000750e0 e120
.org 0x750e2
	bl 0x2b10	@ 000750e2 8df715fd
.org 0x750e6
	adds r3, r5, #0	@ 000750e6 2b1c
.org 0x750e8
	adds r3, #180	@ 000750e8 b433
.org 0x750ea
	ldr r0, [r3, #12]	@ 000750ea d868
.org 0x750ec
	cmp r0, #0	@ 000750ec 0028
.org 0x750ee
	beq.n 0x750fa	@ 000750ee 04d0
.org 0x750f0
	adds r0, #119	@ 000750f0 7730
.org 0x750f2
	movs r2, #0	@ 000750f2 0022
.org 0x750f4
	movs r1, #1	@ 000750f4 0121
.org 0x750f6
	strb r1, [r0, #0]	@ 000750f6 0170
.org 0x750f8
	str r2, [r3, #12]	@ 000750f8 da60
.org 0x750fa
	movs r1, #0	@ 000750fa 0021
.org 0x750fc
	str r1, [r6, #0]	@ 000750fc 3160
.org 0x750fe
	adds r0, r5, #0	@ 000750fe 281c
.org 0x75100
	adds r0, #144	@ 00075100 9030
.org 0x75102
	str r1, [r0, #0]	@ 00075102 0160
.org 0x75104
	adds r0, #4	@ 00075104 0430
.org 0x75106
	strb r1, [r0, #0]	@ 00075106 0170
.org 0x75108
	ldrb r1, [r5, #10]	@ 00075108 a97a
.org 0x7510a
	movs r0, #251	@ 0007510a fb20
.org 0x7510c
	ands r0, r1	@ 0007510c 0840
.org 0x7510e
	strb r0, [r5, #10]	@ 0007510e a872
.org 0x75110
	ldr r3, [pc, #88]	@ 00075110 164b
.org 0x75112
	ldrh r2, [r3, #8]	@ 00075112 1a89
.org 0x75114
	movs r4, #1	@ 00075114 0124
.org 0x75116
	adds r0, r4, #0	@ 00075116 201c
.org 0x75118
	ands r0, r2	@ 00075118 1040
.org 0x7511a
	cmp r0, #0	@ 0007511a 0028
.org 0x7511c
	beq.n 0x75132	@ 0007511c 09d0
.org 0x7511e
	ldrb r1, [r3, #18]	@ 0007511e 997c
.org 0x75120
	adds r0, r4, #0	@ 00075120 201c
.org 0x75122
	ands r0, r1	@ 00075122 0840
.org 0x75124
	cmp r0, #0	@ 00075124 0028
.org 0x75126
	bne.n 0x75132	@ 00075126 04d1
.org 0x75128
	ldr r0, [pc, #68]	@ 00075128 1148
.org 0x7512a
	ands r0, r2	@ 0007512a 1040
.org 0x7512c
	movs r1, #16	@ 0007512c 1021
.org 0x7512e
	orrs r0, r1	@ 0007512e 0843
.org 0x75130
	strh r0, [r3, #8]	@ 00075130 1881
.org 0x75132
	ldrb r0, [r5, #14]	@ 00075132 a87b
.org 0x75134
	adds r0, #1	@ 00075134 0130
.org 0x75136
	strb r0, [r5, #14]	@ 00075136 a873
.org 0x75138
	adds r0, r5, #0	@ 00075138 281c
.org 0x7513a
	bl 0x1cff0	@ 0007513a a7f759ff
.org 0x7513e
	ldrb r0, [r5, #13]	@ 0007513e 687b
.org 0x75140
	cmp r0, #0	@ 00075140 0028
.org 0x75142
	bne.n 0x75174	@ 00075142 17d1
.org 0x75144
	ldr r0, [r5, #84]	@ 00075144 686d
.org 0x75146
	ldr r1, [r5, #92]	@ 00075146 e96d
.org 0x75148
	adds r0, r0, r1	@ 00075148 4018
.org 0x7514a
	str r0, [r5, #84]	@ 0007514a 6865
.org 0x7514c
	ldr r0, [r5, #100]	@ 0007514c 686e
.org 0x7514e
	adds r1, r1, r0	@ 0007514e 0918
.org 0x75150
	str r1, [r5, #92]	@ 00075150 e965
.org 0x75152
	ldrb r0, [r5, #18]	@ 00075152 a87c
.org 0x75154
	subs r0, #1	@ 00075154 0138
.org 0x75156
	strb r0, [r5, #18]	@ 00075156 a874
.org 0x75158
	lsls r0, r0, #24	@ 00075158 0006
.org 0x7515a
	lsrs r0, r0, #24	@ 0007515a 000e
.org 0x7515c
	cmp r0, #255	@ 0007515c ff28
.org 0x7515e
	bne.n 0x751e6	@ 0007515e 42d1
.org 0x75160
	movs r0, #16	@ 00075160 1020
.org 0x75162
	strb r0, [r5, #18]	@ 00075162 a874
.org 0x75164
	movs r0, #1	@ 00075164 0120
.org 0x75166
	strb r0, [r5, #13]	@ 00075166 6873
.org 0x75168
	b.n 0x751e6	@ 00075168 3de0
.org 0x7516a
	.byte 0x00	@ 0007516a data
.org 0x7516b
	.byte 0x00	@ 0007516b data
.org 0x7516c
	.byte 0x10,0xe9,0x02,0x02	@ 0007516c data
.org 0x75170
	.byte 0xfe,0xff,0x00,0x00	@ 00075170 data
.org 0x75174
	cmp r0, #1	@ 00075174 0128
.org 0x75176
	bne.n 0x751b8	@ 00075176 1fd1
.org 0x75178
	ldr r0, [r5, #24]	@ 00075178 a869
.org 0x7517a
	ldrb r1, [r0, #9]	@ 0007517a 417a
.org 0x7517c
	movs r0, #128	@ 0007517c 8020
.org 0x7517e
	ands r0, r1	@ 0007517e 0840
.org 0x75180
	cmp r0, #0	@ 00075180 0028
.org 0x75182
	beq.n 0x751e6	@ 00075182 30d0
.org 0x75184
	ldrb r0, [r5, #15]	@ 00075184 e87b
.org 0x75186
	cmp r0, #0	@ 00075186 0028
.org 0x75188
	beq.n 0x75198	@ 00075188 06d0
.org 0x7518a
	movs r0, #0	@ 0007518a 0020
.org 0x7518c
	str r0, [sp, #8]	@ 0007518c 0290
.org 0x7518e
	ldr r1, [pc, #4]	@ 0007518e 0149
.org 0x75190
	b.n 0x751a0	@ 00075190 06e0
.org 0x75192
	.byte 0x00	@ 00075192 data
.org 0x75193
	.byte 0x00	@ 00075193 data
.org 0x75194
	.byte 0x00,0xde,0xff,0xff	@ 00075194 data
.org 0x75198
	movs r0, #128	@ 00075198 8020
.org 0x7519a
	lsls r0, r0, #4	@ 0007519a 0001
.org 0x7519c
	str r0, [sp, #8]	@ 0007519c 0290
.org 0x7519e
	ldr r1, [pc, #20]	@ 0007519e 0549
.org 0x751a0
	add r0, sp, #8	@ 000751a0 02a8
.org 0x751a2
	str r1, [r0, #4]	@ 000751a2 4160
.org 0x751a4
	adds r1, r0, #0	@ 000751a4 011c
.org 0x751a6
	adds r0, r5, #0	@ 000751a6 281c
.org 0x751a8
	bl 0xd296c	@ 000751a8 5df0e0fb
.org 0x751ac
	str r0, [r5, #44]	@ 000751ac e862
.org 0x751ae
	movs r0, #2	@ 000751ae 0220
.org 0x751b0
	strb r0, [r5, #13]	@ 000751b0 6873
.org 0x751b2
	b.n 0x751e6	@ 000751b2 18e0
.org 0x751b4
	.byte 0x00,0xd6,0xff,0xff	@ 000751b4 data
.org 0x751b8
	cmp r0, #2	@ 000751b8 0228
.org 0x751ba
	bne.n 0x751d8	@ 000751ba 0dd1
.org 0x751bc
	ldr r0, [r5, #44]	@ 000751bc e86a
.org 0x751be
	ldrb r0, [r0, #12]	@ 000751be 007b
.org 0x751c0
	cmp r0, #1	@ 000751c0 0128
