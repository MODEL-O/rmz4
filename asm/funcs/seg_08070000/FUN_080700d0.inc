@ FUN_080700d0  entry 0x080700d0  size 558
.thumb
.org 0x700d0
FUN_080700d0:
	push {r4, r5, r6, r7, lr}	@ 000700d0 f0b5
.org 0x700d2
	mov r7, sl	@ 000700d2 5746
.org 0x700d4
	mov r6, r9	@ 000700d4 4e46
.org 0x700d6
	mov r5, r8	@ 000700d6 4546
.org 0x700d8
	push {r5, r6, r7}	@ 000700d8 e0b4
.org 0x700da
	adds r7, r0, #0	@ 000700da 071c
.org 0x700dc
	movs r0, #0	@ 000700dc 0020
.org 0x700de
	mov r9, r0	@ 000700de 8146
.org 0x700e0
	ldr r0, [pc, #204]	@ 000700e0 3348
.org 0x700e2
	ldr r0, [r0, #0]	@ 000700e2 0068
.org 0x700e4
	ldr r1, [r7, #84]	@ 000700e4 796d
.org 0x700e6
	ldr r0, [r0, #84]	@ 000700e6 406d
.org 0x700e8
	cmp r1, r0	@ 000700e8 8142
.org 0x700ea
	bge.n 0x700f0	@ 000700ea 01da
.org 0x700ec
	movs r1, #1	@ 000700ec 0121
.org 0x700ee
	mov r9, r1	@ 000700ee 8946
.org 0x700f0
	ldr r1, [pc, #192]	@ 000700f0 3049
.org 0x700f2
	ldrb r0, [r7, #9]	@ 000700f2 787a
.org 0x700f4
	lsls r0, r0, #2	@ 000700f4 8000
.org 0x700f6
	adds r0, r0, r1	@ 000700f6 4018
.org 0x700f8
	movs r2, #1	@ 000700f8 0122
.org 0x700fa
	mov r8, r2	@ 000700fa 9046
.org 0x700fc
	str r2, [r7, #12]	@ 000700fc fa60
.org 0x700fe
	ldr r0, [r0, #0]	@ 000700fe 0068
.org 0x70100
	ldr r0, [r0, #4]	@ 00070100 4068
.org 0x70102
	str r0, [r7, #20]	@ 00070102 7861
.org 0x70104
	movs r6, #0	@ 00070104 0026
.org 0x70106
	movs r1, #1	@ 00070106 0121
.org 0x70108
	mov r3, r8	@ 00070108 4346
.org 0x7010a
	strb r3, [r7, #13]	@ 0007010a 7b73
.org 0x7010c
	strb r6, [r7, #14]	@ 0007010c be73
.org 0x7010e
	strb r6, [r7, #15]	@ 0007010e fe73
.org 0x70110
	ldrb r0, [r7, #10]	@ 00070110 b87a
.org 0x70112
	movs r2, #0	@ 00070112 0022
.org 0x70114
	mov sl, r2	@ 00070114 9246
.org 0x70116
	orrs r0, r1	@ 00070116 0843
.org 0x70118
	movs r1, #2	@ 00070118 0221
.org 0x7011a
	orrs r0, r1	@ 0007011a 0843
.org 0x7011c
	strb r0, [r7, #10]	@ 0007011c b872
.org 0x7011e
	ldr r4, [r7, #84]	@ 0007011e 7c6d
.org 0x70120
	ldr r5, [r7, #88]	@ 00070120 bd6d
.org 0x70122
	adds r0, r4, #0	@ 00070122 201c
.org 0x70124
	adds r1, r5, #0	@ 00070124 291c
.org 0x70126
	bl 0x8988	@ 00070126 98f72ffc
.org 0x7012a
	adds r1, r7, #0	@ 0007012a 391c
.org 0x7012c
	adds r1, #204	@ 0007012c cc31
.org 0x7012e
	str r0, [r1, #0]	@ 0007012e 0860
.org 0x70130
	adds r0, r4, #0	@ 00070130 201c
.org 0x70132
	adds r1, r5, #0	@ 00070132 291c
.org 0x70134
	bl 0x8748	@ 00070134 98f708fb
.org 0x70138
	adds r1, r7, #0	@ 00070138 391c
.org 0x7013a
	adds r1, #208	@ 0007013a d031
.org 0x7013c
	str r0, [r1, #0]	@ 0007013c 0860
.org 0x7013e
	ldr r3, [pc, #120]	@ 0007013e 1e4b
.org 0x70140
	adds r0, r0, r3	@ 00070140 c018
.org 0x70142
	str r0, [r7, #88]	@ 00070142 b865
.org 0x70144
	subs r1, #24	@ 00070144 1839
.org 0x70146
	movs r0, #255	@ 00070146 ff20
.org 0x70148
	strb r0, [r1, #0]	@ 00070148 0870
.org 0x7014a
	adds r0, r7, #0	@ 0007014a 381c
.org 0x7014c
	adds r0, #186	@ 0007014c ba30
.org 0x7014e
	strb r6, [r0, #0]	@ 0007014e 0670
.org 0x70150
	adds r1, #8	@ 00070150 0831
.org 0x70152
	movs r0, #255	@ 00070152 ff20
.org 0x70154
	strb r0, [r1, #0]	@ 00070154 0870
.org 0x70156
	adds r0, r7, #0	@ 00070156 381c
.org 0x70158
	adds r0, #193	@ 00070158 c130
.org 0x7015a
	strb r6, [r0, #0]	@ 0007015a 0670
.org 0x7015c
	adds r1, #3	@ 0007015c 0331
.org 0x7015e
	movs r0, #2	@ 0007015e 0220
.org 0x70160
	strb r0, [r1, #0]	@ 00070160 0870
.org 0x70162
	adds r0, r7, #0	@ 00070162 381c
.org 0x70164
	adds r0, #187	@ 00070164 bb30
.org 0x70166
	strb r6, [r0, #0]	@ 00070166 0670
.org 0x70168
	adds r1, #7	@ 00070168 0731
.org 0x7016a
	movs r0, #0	@ 0007016a 0020
.org 0x7016c
	strh r6, [r1, #0]	@ 0007016c 0e80
.org 0x7016e
	subs r1, #1	@ 0007016e 0139
.org 0x70170
	strb r0, [r1, #0]	@ 00070170 0870
.org 0x70172
	str r6, [r7, #44]	@ 00070172 fe62
.org 0x70174
	adds r0, r7, #0	@ 00070174 381c
.org 0x70176
	bl 0x1cc9c	@ 00070176 acf791fd
.org 0x7017a
	adds r0, r7, #0	@ 0007017a 381c
.org 0x7017c
	bl 0x1ceec	@ 0007017c acf7b6fe
.org 0x70180
	mov r1, r9	@ 00070180 4946
.org 0x70182
	mov r0, r8	@ 00070182 4046
.org 0x70184
	ands r1, r0	@ 00070184 0140
.org 0x70186
	adds r0, r7, #0	@ 00070186 381c
.org 0x70188
	adds r0, #76	@ 00070188 4c30
.org 0x7018a
	strb r1, [r0, #0]	@ 0007018a 0170
.org 0x7018c
	adds r3, r7, #0	@ 0007018c 3b1c
.org 0x7018e
	adds r3, #74	@ 0007018e 4a33
.org 0x70190
	lsls r1, r1, #4	@ 00070190 0901
.org 0x70192
	ldrb r2, [r3, #0]	@ 00070192 1a78
.org 0x70194
	movs r0, #17	@ 00070194 1120
.org 0x70196
	negs r0, r0	@ 00070196 4042
.org 0x70198
	ands r0, r2	@ 00070198 1040
.org 0x7019a
	orrs r0, r1	@ 0007019a 0843
.org 0x7019c
	strb r0, [r3, #0]	@ 0007019c 1870
.org 0x7019e
	mov r1, r9	@ 0007019e 4946
.org 0x701a0
	mov r2, r8	@ 000701a0 4246
.org 0x701a2
	ands r1, r2	@ 000701a2 1140
.org 0x701a4
	cmp r1, #0	@ 000701a4 0029
.org 0x701a6
	beq.n 0x701bc	@ 000701a6 09d0
.org 0x701a8
	ldrb r0, [r7, #10]	@ 000701a8 b87a
.org 0x701aa
	movs r1, #16	@ 000701aa 1021
.org 0x701ac
	orrs r0, r1	@ 000701ac 0843
.org 0x701ae
	b.n 0x701c2	@ 000701ae 08e0
.org 0x701b0
	.byte 0xf0,0xdb,0x02,0x02	@ 000701b0 data
.org 0x701b4
	.byte 0x70,0x7d,0x85,0x08	@ 000701b4 data
.org 0x701b8
	.byte 0xff,0x7f,0x00,0x00	@ 000701b8 data
.org 0x701bc
	ldrb r1, [r7, #10]	@ 000701bc b97a
.org 0x701be
	movs r0, #239	@ 000701be ef20
.org 0x701c0
	ands r0, r1	@ 000701c0 0840
.org 0x701c2
	strb r0, [r7, #10]	@ 000701c2 b872
.org 0x701c4
	ldr r0, [pc, #248]	@ 000701c4 3e48
.org 0x701c6
	ldr r0, [r0, #0]	@ 000701c6 0068
.org 0x701c8
	ldr r1, [r0, #0]	@ 000701c8 0168
.org 0x701ca
	adds r0, r7, #0	@ 000701ca 381c
.org 0x701cc
	movs r2, #64	@ 000701cc 4022
.org 0x701ce
	bl 0x503cc	@ 000701ce e0f7fdf8
.org 0x701d2
	ldr r1, [pc, #240]	@ 000701d2 3c49
.org 0x701d4
	adds r0, r7, #0	@ 000701d4 381c
.org 0x701d6
	adds r0, #116	@ 000701d6 7430
.org 0x701d8
	str r1, [r0, #36]	@ 000701d8 4162
.org 0x701da
	ldr r5, [pc, #236]	@ 000701da 3b4d
.org 0x701dc
	ldr r3, [pc, #236]	@ 000701dc 3b4b
.org 0x701de
	mov r8, r3	@ 000701de 9846
.org 0x701e0
	adds r0, r5, r3	@ 000701e0 e818
.org 0x701e2
	ldr r1, [pc, #236]	@ 000701e2 3b49
.org 0x701e4
	mov r9, r1	@ 000701e4 8946
.org 0x701e6
	movs r4, #146	@ 000701e6 9224
.org 0x701e8
	lsls r4, r4, #1	@ 000701e8 6400
.org 0x701ea
	adds r1, r1, r4	@ 000701ea 0919
.org 0x701ec
	ldrh r1, [r1, #0]	@ 000701ec 0988
.org 0x701ee
	ldrh r2, [r0, #6]	@ 000701ee c288
.org 0x701f0
	lsrs r2, r2, #6	@ 000701f0 9209
.org 0x701f2
	subs r1, r1, r2	@ 000701f2 891a
.org 0x701f4
	lsls r1, r1, #5	@ 000701f4 4901
.org 0x701f6
	movs r2, #128	@ 000701f6 8022
.org 0x701f8
	lsls r2, r2, #9	@ 000701f8 5202
.org 0x701fa
	adds r1, r1, r2	@ 000701fa 8918
.org 0x701fc
	bl 0x1d30	@ 000701fc 91f798fd
.org 0x70200
	ldr r3, [pc, #208]	@ 00070200 344b
.org 0x70202
	adds r5, r5, r3	@ 00070202 ed18
.org 0x70204
	ldr r6, [pc, #208]	@ 00070204 344e
.org 0x70206
	adds r4, r6, r4	@ 00070206 3419
.org 0x70208
	ldrh r1, [r4, #0]	@ 00070208 2188
.org 0x7020a
	ldrb r0, [r5, #7]	@ 0007020a e879
.org 0x7020c
	subs r1, r1, r0	@ 0007020c 091a
.org 0x7020e
	lsls r1, r1, #5	@ 0007020e 4901
.org 0x70210
	movs r0, #128	@ 00070210 8020
.org 0x70212
	lsls r0, r0, #2	@ 00070212 8000
.org 0x70214
	mov sl, r0	@ 00070214 8246
.org 0x70216
	add r1, sl	@ 00070216 5144
.org 0x70218
	adds r0, r5, #0	@ 00070218 281c
.org 0x7021a
	bl 0x2208	@ 0007021a 91f7f5ff
.org 0x7021e
	movs r5, #180	@ 0007021e b425
.org 0x70220
	lsls r5, r5, #4	@ 00070220 2d01
.org 0x70222
	mov r1, r8	@ 00070222 4146
.org 0x70224
	adds r0, r5, r1	@ 00070224 6818
.org 0x70226
	movs r4, #144	@ 00070226 9024
.org 0x70228
	lsls r4, r4, #1	@ 00070228 6400
.org 0x7022a
	mov r2, r9	@ 0007022a 4a46
.org 0x7022c
	adds r1, r2, r4	@ 0007022c 1119
.org 0x7022e
	ldrh r1, [r1, #0]	@ 0007022e 0988
.org 0x70230
	ldrh r2, [r0, #6]	@ 00070230 c288
.org 0x70232
	lsrs r2, r2, #6	@ 00070232 9209
.org 0x70234
	subs r1, r1, r2	@ 00070234 891a
.org 0x70236
	lsls r1, r1, #5	@ 00070236 4901
.org 0x70238
	movs r3, #128	@ 00070238 8023
.org 0x7023a
	lsls r3, r3, #9	@ 0007023a 5b02
.org 0x7023c
	adds r1, r1, r3	@ 0007023c c918
.org 0x7023e
	bl 0x1d30	@ 0007023e 91f777fd
.org 0x70242
	ldr r0, [pc, #144]	@ 00070242 2448
.org 0x70244
	adds r5, r5, r0	@ 00070244 2d18
.org 0x70246
	adds r4, r6, r4	@ 00070246 3419
.org 0x70248
	ldrh r1, [r4, #0]	@ 00070248 2188
.org 0x7024a
	ldrb r0, [r5, #7]	@ 0007024a e879
.org 0x7024c
	subs r1, r1, r0	@ 0007024c 091a
.org 0x7024e
	lsls r1, r1, #5	@ 0007024e 4901
.org 0x70250
	add r1, sl	@ 00070250 5144
.org 0x70252
	adds r0, r5, #0	@ 00070252 281c
.org 0x70254
	bl 0x2208	@ 00070254 91f7d8ff
.org 0x70258
	ldr r4, [pc, #128]	@ 00070258 204c
.org 0x7025a
	add r8, r4	@ 0007025a a044
.org 0x7025c
	movs r5, #145	@ 0007025c 9125
.org 0x7025e
	lsls r5, r5, #1	@ 0007025e 6d00
.org 0x70260
	add r9, r5	@ 00070260 a944
.org 0x70262
	mov r2, r9	@ 00070262 4a46
.org 0x70264
	ldrh r1, [r2, #0]	@ 00070264 1188
.org 0x70266
	mov r3, r8	@ 00070266 4346
.org 0x70268
	ldrh r0, [r3, #6]	@ 00070268 d888
.org 0x7026a
	lsrs r0, r0, #6	@ 0007026a 8009
.org 0x7026c
	subs r1, r1, r0	@ 0007026c 091a
.org 0x7026e
	lsls r1, r1, #5	@ 0007026e 4901
.org 0x70270
	movs r0, #128	@ 00070270 8020
.org 0x70272
	lsls r0, r0, #9	@ 00070272 4002
.org 0x70274
	adds r1, r1, r0	@ 00070274 0918
.org 0x70276
	mov r0, r8	@ 00070276 4046
.org 0x70278
	bl 0x1d30	@ 00070278 91f75afd
.org 0x7027c
	ldr r1, [pc, #84]	@ 0007027c 1549
.org 0x7027e
	adds r4, r4, r1	@ 0007027e 6418
.org 0x70280
	adds r6, r6, r5	@ 00070280 7619
.org 0x70282
	ldrh r1, [r6, #0]	@ 00070282 3188
.org 0x70284
	ldrb r0, [r4, #7]	@ 00070284 e079
.org 0x70286
	subs r1, r1, r0	@ 00070286 091a
.org 0x70288
	lsls r1, r1, #5	@ 00070288 4901
.org 0x7028a
	add r1, sl	@ 0007028a 5144
.org 0x7028c
	adds r0, r4, #0	@ 0007028c 201c
.org 0x7028e
	bl 0x2208	@ 0007028e 91f7bbff
.org 0x70292
	ldr r0, [pc, #76]	@ 00070292 1348
.org 0x70294
	ldr r2, [pc, #76]	@ 00070294 134a
.org 0x70296
	adds r0, r0, r2	@ 00070296 8018
.org 0x70298
	ldrb r1, [r0, #0]	@ 00070298 0178
.org 0x7029a
	movs r0, #16	@ 0007029a 1020
.org 0x7029c
	ands r0, r1	@ 0007029c 0840
.org 0x7029e
	cmp r0, #0	@ 0007029e 0028
.org 0x702a0
	beq.n 0x702ae	@ 000702a0 05d0
.org 0x702a2
	ldr r0, [pc, #68]	@ 000702a2 1148
.org 0x702a4
	ldrb r1, [r0, #4]	@ 000702a4 0179
.org 0x702a6
	movs r0, #4	@ 000702a6 0420
.org 0x702a8
	ands r0, r1	@ 000702a8 0840
.org 0x702aa
	cmp r0, #0	@ 000702aa 0028
.org 0x702ac
	beq.n 0x702b6	@ 000702ac 03d0
.org 0x702ae
	ldr r0, [pc, #60]	@ 000702ae 0f48
.org 0x702b0
	ldrh r0, [r0, #0]	@ 000702b0 0088
.org 0x702b2
	cmp r0, #16	@ 000702b2 1028
.org 0x702b4
	bne.n 0x702f0	@ 000702b4 1cd1
.org 0x702b6
	adds r0, r7, #0	@ 000702b6 381c
.org 0x702b8
	adds r0, #84	@ 000702b8 5430
.org 0x702ba
	movs r1, #1	@ 000702ba 0121
.org 0x702bc
	b.n 0x702f6	@ 000702bc 1be0
.org 0x702be
	.byte 0x00	@ 000702be data
.org 0x702bf
	.byte 0x00	@ 000702bf data
.org 0x702c0
	.byte 0x08,0xcb,0x85,0x08	@ 000702c0 data
.org 0x702c4
	.byte 0x81,0x36,0x07,0x08	@ 000702c4 data
.org 0x702c8
	.byte 0x68,0x0b,0x00,0x00	@ 000702c8 data
.org 0x702cc
	.byte 0x00,0x40,0xc4,0x08	@ 000702cc data
.org 0x702d0
	.byte 0x40,0xe0,0x02,0x02	@ 000702d0 data
.org 0x702d4
	.byte 0x0c,0x40,0xc4,0x08	@ 000702d4 data
.org 0x702d8
	.byte 0x40,0xde,0x02,0x02	@ 000702d8 data
.org 0x702dc
	.byte 0x54,0x0b,0x00,0x00	@ 000702dc data
.org 0x702e0
	.byte 0xb0,0x0a,0x00,0x02	@ 000702e0 data
.org 0x702e4
	.byte 0x10,0xc0,0x02,0x00	@ 000702e4 data
.org 0x702e8
	.byte 0xb0,0xe8,0x02,0x02	@ 000702e8 data
.org 0x702ec
	.byte 0x10,0xe9,0x02,0x02	@ 000702ec data
.org 0x702f0
	adds r0, r7, #0	@ 000702f0 381c
.org 0x702f2
	adds r0, #84	@ 000702f2 5430
.org 0x702f4
	movs r1, #0	@ 000702f4 0021
.org 0x702f6
	bl 0xfaca0	@ 000702f6 8af0d3fc
.org 0x702fa
	adds r1, r7, #0	@ 000702fa 391c
.org 0x702fc
	adds r1, #180	@ 000702fc b431
