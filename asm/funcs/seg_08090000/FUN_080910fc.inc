@ FUN_080910fc  entry 0x080910fc  size 144
.thumb
.org 0x910fc
FUN_080910fc:
	push {r4, r5, r6, lr}	@ 000910fc 70b5
.org 0x910fe
	adds r4, r0, #0	@ 000910fe 041c
.org 0x91100
	ldr r5, [r4, #40]	@ 00091100 a56a
.org 0x91102
	bl 0x1cd28	@ 00091102 8bf711fe
.org 0x91106
	ldrb r0, [r4, #10]	@ 00091106 a07a
.org 0x91108
	movs r6, #1	@ 00091108 0126
.org 0x9110a
	orrs r0, r6	@ 0009110a 3043
.org 0x9110c
	movs r1, #2	@ 0009110c 0221
.org 0x9110e
	orrs r0, r1	@ 0009110e 0843
.org 0x91110
	strb r0, [r4, #10]	@ 00091110 a072
.org 0x91112
	ldr r1, [pc, #80]	@ 00091112 1449
.org 0x91114
	adds r0, r4, #0	@ 00091114 201c
.org 0x91116
	bl 0x1cf00	@ 00091116 8bf7f3fe
.org 0x9111a
	adds r0, r4, #0	@ 0009111a 201c
.org 0x9111c
	bl 0x1cff0	@ 0009111c 8bf768ff
.org 0x91120
	movs r2, #0	@ 00091120 0022
.org 0x91122
	ldrb r1, [r4, #10]	@ 00091122 a17a
.org 0x91124
	movs r0, #239	@ 00091124 ef20
.org 0x91126
	ands r0, r1	@ 00091126 0840
.org 0x91128
	strb r0, [r4, #10]	@ 00091128 a072
.org 0x9112a
	adds r0, r4, #0	@ 0009112a 201c
.org 0x9112c
	adds r0, #76	@ 0009112c 4c30
.org 0x9112e
	strb r2, [r0, #0]	@ 0009112e 0270
.org 0x91130
	adds r2, r4, #0	@ 00091130 221c
.org 0x91132
	adds r2, #74	@ 00091132 4a32
.org 0x91134
	ldrb r1, [r2, #0]	@ 00091134 1178
.org 0x91136
	movs r0, #17	@ 00091136 1120
.org 0x91138
	negs r0, r0	@ 00091138 4042
.org 0x9113a
	ands r0, r1	@ 0009113a 0840
.org 0x9113c
	strb r0, [r2, #0]	@ 0009113c 1070
.org 0x9113e
	adds r1, r4, #0	@ 0009113e 211c
.org 0x91140
	adds r1, #37	@ 00091140 2531
.org 0x91142
	movs r0, #15	@ 00091142 0f20
.org 0x91144
	strb r0, [r1, #0]	@ 00091144 0870
.org 0x91146
	adds r0, r5, #0	@ 00091146 281c
.org 0x91148
	adds r0, #190	@ 00091148 be30
.org 0x9114a
	ldrb r1, [r0, #0]	@ 0009114a 0178
.org 0x9114c
	cmp r1, #0	@ 0009114c 0029
.org 0x9114e
	bne.n 0x91170	@ 0009114e 0fd1
.org 0x91150
	ldrb r0, [r5, #10]	@ 00091150 a87a
.org 0x91152
	lsrs r0, r0, #4	@ 00091152 0009
.org 0x91154
	ands r0, r6	@ 00091154 3040
.org 0x91156
	strb r0, [r4, #17]	@ 00091156 6074
.org 0x91158
	cmp r0, #0	@ 00091158 0028
.org 0x9115a
	bne.n 0x91168	@ 0009115a 05d1
.org 0x9115c
	adds r1, r4, #0	@ 0009115c 211c
.org 0x9115e
	adds r1, #36	@ 0009115e 2431
.org 0x91160
	movs r0, #128	@ 00091160 8020
.org 0x91162
	b.n 0x9117a	@ 00091162 0ae0
.org 0x91164
	.byte 0x13,0x3c,0x00,0x00	@ 00091164 data
.org 0x91168
	adds r0, r4, #0	@ 00091168 201c
.org 0x9116a
	adds r0, #36	@ 0009116a 2430
.org 0x9116c
	strb r1, [r0, #0]	@ 0009116c 0170
.org 0x9116e
	b.n 0x9117e	@ 0009116e 06e0
.org 0x91170
	movs r0, #2	@ 00091170 0220
.org 0x91172
	strb r0, [r4, #17]	@ 00091172 6074
.org 0x91174
	adds r1, r4, #0	@ 00091174 211c
.org 0x91176
	adds r1, #36	@ 00091176 2431
.org 0x91178
	movs r0, #192	@ 00091178 c020
.org 0x9117a
	strb r0, [r1, #0]	@ 0009117a 0870
.org 0x9117c
	adds r0, r1, #0	@ 0009117c 081c
.org 0x9117e
	ldrb r0, [r0, #0]	@ 0009117e 0078
.org 0x91180
	adds r1, r4, #0	@ 00091180 211c
.org 0x91182
	adds r1, #192	@ 00091182 c031
.org 0x91184
	strb r0, [r1, #0]	@ 00091184 0870
.org 0x91186
	movs r0, #120	@ 00091186 7820
.org 0x91188
	strb r0, [r4, #18]	@ 00091188 a074
.org 0x9118a
	pop {r4, r5, r6}	@ 0009118a 70bc
