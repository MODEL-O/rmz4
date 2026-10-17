@ FUN_08046174  entry 0x08046174  size 224
.thumb
.org 0x46174
FUN_08046174:
	push {r4, r5, r6, lr}	@ 00046174 70b5
.org 0x46176
	adds r5, r0, #0	@ 00046176 051c
.org 0x46178
	adds r4, r1, #0	@ 00046178 0c1c
.org 0x4617a
	lsls r2, r2, #24	@ 0004617a 1206
.org 0x4617c
	lsrs r6, r2, #24	@ 0004617c 160e
.org 0x4617e
	ldr r0, [pc, #64]	@ 0004617e 1048
.org 0x46180
	ldr r0, [r0, #0]	@ 00046180 0068
.org 0x46182
	bl 0x5500	@ 00046182 bff7bdf9
.org 0x46186
	adds r3, r0, #0	@ 00046186 031c
.org 0x46188
	cmp r3, #0	@ 00046188 002b
.org 0x4618a
	beq.n 0x4626c	@ 0004618a 6fd0
.org 0x4618c
	adds r0, r5, #0	@ 0004618c 281c
.org 0x4618e
	adds r0, #248	@ 0004618e f830
.org 0x46190
	ldrb r0, [r0, #0]	@ 00046190 0078
.org 0x46192
	cmp r0, #2	@ 00046192 0228
.org 0x46194
	bne.n 0x461d0	@ 00046194 1cd1
.org 0x46196
	ldr r1, [pc, #44]	@ 00046196 0b49
.org 0x46198
	movs r0, #24	@ 00046198 1820
.org 0x4619a
	strb r0, [r3, #9]	@ 0004619a 5872
.org 0x4619c
	ldr r0, [r1, #96]	@ 0004619c 086e
.org 0x4619e
	ldr r0, [r0, #0]	@ 0004619e 0068
.org 0x461a0
	str r0, [r3, #20]	@ 000461a0 5861
.org 0x461a2
	ldrb r1, [r3, #11]	@ 000461a2 d97a
.org 0x461a4
	movs r0, #191	@ 000461a4 bf20
.org 0x461a6
	ands r0, r1	@ 000461a6 0840
.org 0x461a8
	strb r0, [r3, #11]	@ 000461a8 d872
.org 0x461aa
	adds r1, r3, #0	@ 000461aa 191c
.org 0x461ac
	adds r1, #37	@ 000461ac 2531
.org 0x461ae
	movs r0, #16	@ 000461ae 1020
.org 0x461b0
	strb r0, [r1, #0]	@ 000461b0 0870
.org 0x461b2
	ldr r0, [pc, #20]	@ 000461b2 0548
.org 0x461b4
	ldrh r0, [r0, #0]	@ 000461b4 0088
.org 0x461b6
	strh r0, [r3, #32]	@ 000461b6 1884
.org 0x461b8
	ldr r0, [pc, #16]	@ 000461b8 0448
.org 0x461ba
	ldrb r0, [r0, #0]	@ 000461ba 0078
.org 0x461bc
	b.n 0x461f6	@ 000461bc 1be0
.org 0x461be
	.byte 0x00	@ 000461be data
.org 0x461bf
	.byte 0x00	@ 000461bf data
.org 0x461c0
	.byte 0x88,0xed,0x02,0x02	@ 000461c0 data
.org 0x461c4
	.byte 0xf8,0x39,0x85,0x08	@ 000461c4 data
.org 0x461c8
	.byte 0xfc,0x36,0x85,0x08	@ 000461c8 data
.org 0x461cc
	.byte 0x04,0x37,0x85,0x08	@ 000461cc data
.org 0x461d0
	ldr r1, [pc, #68]	@ 000461d0 1149
.org 0x461d2
	movs r0, #24	@ 000461d2 1820
.org 0x461d4
	strb r0, [r3, #9]	@ 000461d4 5872
.org 0x461d6
	ldr r0, [r1, #96]	@ 000461d6 086e
.org 0x461d8
	ldr r0, [r0, #0]	@ 000461d8 0068
.org 0x461da
	str r0, [r3, #20]	@ 000461da 5861
.org 0x461dc
	ldrb r1, [r3, #11]	@ 000461dc d97a
.org 0x461de
	movs r0, #191	@ 000461de bf20
.org 0x461e0
	ands r0, r1	@ 000461e0 0840
.org 0x461e2
	strb r0, [r3, #11]	@ 000461e2 d872
.org 0x461e4
	adds r1, r3, #0	@ 000461e4 191c
.org 0x461e6
	adds r1, #37	@ 000461e6 2531
.org 0x461e8
	movs r0, #16	@ 000461e8 1020
.org 0x461ea
	strb r0, [r1, #0]	@ 000461ea 0870
.org 0x461ec
	ldr r0, [pc, #44]	@ 000461ec 0b48
.org 0x461ee
	ldrh r0, [r0, #2]	@ 000461ee 4088
.org 0x461f0
	strh r0, [r3, #32]	@ 000461f0 1884
.org 0x461f2
	ldr r0, [pc, #44]	@ 000461f2 0b48
.org 0x461f4
	ldrb r0, [r0, #1]	@ 000461f4 4078
.org 0x461f6
	subs r1, #3	@ 000461f6 0339
.org 0x461f8
	strb r0, [r1, #0]	@ 000461f8 0870
.org 0x461fa
	str r4, [r3, #40]	@ 000461fa 9c62
.org 0x461fc
	str r5, [r3, #44]	@ 000461fc dd62
.org 0x461fe
	movs r0, #0	@ 000461fe 0020
.org 0x46200
	strb r0, [r3, #16]	@ 00046200 1874
.org 0x46202
	strb r6, [r3, #17]	@ 00046202 5e74
.org 0x46204
	ldrb r0, [r4, #10]	@ 00046204 a07a
.org 0x46206
	lsrs r2, r0, #4	@ 00046206 0209
.org 0x46208
	movs r0, #1	@ 00046208 0120
.org 0x4620a
	ands r2, r0	@ 0004620a 0240
.org 0x4620c
	cmp r2, #0	@ 0004620c 002a
.org 0x4620e
	beq.n 0x46224	@ 0004620e 09d0
.org 0x46210
	ldrb r0, [r3, #10]	@ 00046210 987a
.org 0x46212
	movs r1, #16	@ 00046212 1021
.org 0x46214
	orrs r0, r1	@ 00046214 0843
.org 0x46216
	b.n 0x4622a	@ 00046216 08e0
.org 0x46218
	.byte 0xf8,0x39,0x85,0x08	@ 00046218 data
.org 0x4621c
	.byte 0xfc,0x36,0x85,0x08	@ 0004621c data
.org 0x46220
	.byte 0x04,0x37,0x85,0x08	@ 00046220 data
.org 0x46224
	ldrb r1, [r3, #10]	@ 00046224 997a
.org 0x46226
	movs r0, #239	@ 00046226 ef20
.org 0x46228
	ands r0, r1	@ 00046228 0840
.org 0x4622a
	strb r0, [r3, #10]	@ 0004622a 9872
.org 0x4622c
	adds r1, r2, #0	@ 0004622c 111c
.org 0x4622e
	adds r0, r3, #0	@ 0004622e 181c
.org 0x46230
	adds r0, #76	@ 00046230 4c30
.org 0x46232
	strb r1, [r0, #0]	@ 00046232 0170
.org 0x46234
	movs r0, #74	@ 00046234 4a20
.org 0x46236
	adds r0, r0, r3	@ 00046236 c018
.org 0x46238
	mov ip, r0	@ 00046238 8446
.org 0x4623a
	lsls r1, r1, #4	@ 0004623a 0901
.org 0x4623c
	ldrb r2, [r0, #0]	@ 0004623c 0278
.org 0x4623e
	movs r0, #17	@ 0004623e 1120
.org 0x46240
	negs r0, r0	@ 00046240 4042
.org 0x46242
	ands r0, r2	@ 00046242 1040
.org 0x46244
	orrs r0, r1	@ 00046244 0843
.org 0x46246
	mov r1, ip	@ 00046246 6146
.org 0x46248
	strb r0, [r1, #0]	@ 00046248 0870
.org 0x4624a
	ldrb r1, [r3, #10]	@ 0004624a 997a
.org 0x4624c
	movs r0, #16	@ 0004624c 1020
.org 0x4624e
	ands r0, r1	@ 0004624e 0840
.org 0x46250
	cmp r0, #0	@ 00046250 0028
.org 0x46252
	beq.n 0x4625c	@ 00046252 03d0
