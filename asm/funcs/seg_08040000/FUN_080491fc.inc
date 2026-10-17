@ FUN_080491fc  entry 0x080491fc  size 228
.thumb
.org 0x491fc
FUN_080491fc:
	push {r4, r5, r6, lr}	@ 000491fc 70b5
.org 0x491fe
	adds r5, r0, #0	@ 000491fe 051c
.org 0x49200
	adds r4, r1, #0	@ 00049200 0c1c
.org 0x49202
	lsls r2, r2, #24	@ 00049202 1206
.org 0x49204
	lsrs r6, r2, #24	@ 00049204 160e
.org 0x49206
	ldr r0, [pc, #64]	@ 00049206 1048
.org 0x49208
	ldr r0, [r0, #0]	@ 00049208 0068
.org 0x4920a
	bl 0x5500	@ 0004920a bcf779f9
.org 0x4920e
	adds r3, r0, #0	@ 0004920e 031c
.org 0x49210
	cmp r3, #0	@ 00049210 002b
.org 0x49212
	beq.n 0x492f8	@ 00049212 71d0
.org 0x49214
	adds r0, r5, #0	@ 00049214 281c
.org 0x49216
	adds r0, #248	@ 00049216 f830
.org 0x49218
	ldrb r0, [r0, #0]	@ 00049218 0078
.org 0x4921a
	cmp r0, #2	@ 0004921a 0228
.org 0x4921c
	bne.n 0x49258	@ 0004921c 1cd1
.org 0x4921e
	ldr r0, [pc, #44]	@ 0004921e 0b48
.org 0x49220
	movs r1, #34	@ 00049220 2221
.org 0x49222
	strb r1, [r3, #9]	@ 00049222 5972
.org 0x49224
	adds r0, #136	@ 00049224 8830
.org 0x49226
	ldr r0, [r0, #0]	@ 00049226 0068
.org 0x49228
	ldr r0, [r0, #0]	@ 00049228 0068
.org 0x4922a
	str r0, [r3, #20]	@ 0004922a 5861
.org 0x4922c
	ldrb r1, [r3, #11]	@ 0004922c d97a
.org 0x4922e
	movs r0, #191	@ 0004922e bf20
.org 0x49230
	ands r0, r1	@ 00049230 0840
.org 0x49232
	strb r0, [r3, #11]	@ 00049232 d872
.org 0x49234
	adds r1, r3, #0	@ 00049234 191c
.org 0x49236
	adds r1, #37	@ 00049236 2531
.org 0x49238
	movs r0, #16	@ 00049238 1020
.org 0x4923a
	strb r0, [r1, #0]	@ 0004923a 0870
.org 0x4923c
	ldr r0, [pc, #16]	@ 0004923c 0448
.org 0x4923e
	ldrh r0, [r0, #0]	@ 0004923e 0088
.org 0x49240
	strh r0, [r3, #32]	@ 00049240 1884
.org 0x49242
	ldr r0, [pc, #16]	@ 00049242 0448
.org 0x49244
	ldrb r0, [r0, #0]	@ 00049244 0078
.org 0x49246
	b.n 0x49280	@ 00049246 1be0
.org 0x49248
	.byte 0x88,0xed,0x02,0x02	@ 00049248 data
.org 0x4924c
	.byte 0xf8,0x39,0x85,0x08	@ 0004924c data
.org 0x49250
	.byte 0xfc,0x36,0x85,0x08	@ 00049250 data
.org 0x49254
	.byte 0x04,0x37,0x85,0x08	@ 00049254 data
.org 0x49258
	ldr r0, [pc, #72]	@ 00049258 1248
.org 0x4925a
	movs r1, #34	@ 0004925a 2221
.org 0x4925c
	strb r1, [r3, #9]	@ 0004925c 5972
.org 0x4925e
	adds r0, #136	@ 0004925e 8830
.org 0x49260
	ldr r0, [r0, #0]	@ 00049260 0068
.org 0x49262
	ldr r0, [r0, #0]	@ 00049262 0068
.org 0x49264
	str r0, [r3, #20]	@ 00049264 5861
.org 0x49266
	ldrb r1, [r3, #11]	@ 00049266 d97a
.org 0x49268
	movs r0, #191	@ 00049268 bf20
.org 0x4926a
	ands r0, r1	@ 0004926a 0840
.org 0x4926c
	strb r0, [r3, #11]	@ 0004926c d872
.org 0x4926e
	adds r1, r3, #0	@ 0004926e 191c
.org 0x49270
	adds r1, #37	@ 00049270 2531
.org 0x49272
	movs r0, #16	@ 00049272 1020
.org 0x49274
	strb r0, [r1, #0]	@ 00049274 0870
.org 0x49276
	ldr r0, [pc, #48]	@ 00049276 0c48
.org 0x49278
	ldrh r0, [r0, #2]	@ 00049278 4088
.org 0x4927a
	strh r0, [r3, #32]	@ 0004927a 1884
.org 0x4927c
	ldr r0, [pc, #44]	@ 0004927c 0b48
.org 0x4927e
	ldrb r0, [r0, #1]	@ 0004927e 4078
.org 0x49280
	subs r1, #3	@ 00049280 0339
.org 0x49282
	strb r0, [r1, #0]	@ 00049282 0870
.org 0x49284
	str r4, [r3, #40]	@ 00049284 9c62
.org 0x49286
	str r5, [r3, #44]	@ 00049286 dd62
.org 0x49288
	movs r0, #0	@ 00049288 0020
.org 0x4928a
	strb r0, [r3, #16]	@ 0004928a 1874
.org 0x4928c
	strb r6, [r3, #17]	@ 0004928c 5e74
.org 0x4928e
	ldrb r0, [r4, #10]	@ 0004928e a07a
.org 0x49290
	lsrs r2, r0, #4	@ 00049290 0209
.org 0x49292
	movs r0, #1	@ 00049292 0120
.org 0x49294
	ands r2, r0	@ 00049294 0240
.org 0x49296
	cmp r2, #0	@ 00049296 002a
.org 0x49298
	beq.n 0x492b0	@ 00049298 0ad0
.org 0x4929a
	ldrb r0, [r3, #10]	@ 0004929a 987a
.org 0x4929c
	movs r1, #16	@ 0004929c 1021
.org 0x4929e
	orrs r0, r1	@ 0004929e 0843
.org 0x492a0
	b.n 0x492b6	@ 000492a0 09e0
.org 0x492a2
	.byte 0x00	@ 000492a2 data
.org 0x492a3
	.byte 0x00	@ 000492a3 data
.org 0x492a4
	.byte 0xf8,0x39,0x85,0x08	@ 000492a4 data
.org 0x492a8
	.byte 0xfc,0x36,0x85,0x08	@ 000492a8 data
.org 0x492ac
	.byte 0x04,0x37,0x85,0x08	@ 000492ac data
.org 0x492b0
	ldrb r1, [r3, #10]	@ 000492b0 997a
.org 0x492b2
	movs r0, #239	@ 000492b2 ef20
.org 0x492b4
	ands r0, r1	@ 000492b4 0840
.org 0x492b6
	strb r0, [r3, #10]	@ 000492b6 9872
.org 0x492b8
	adds r1, r2, #0	@ 000492b8 111c
.org 0x492ba
	adds r0, r3, #0	@ 000492ba 181c
.org 0x492bc
	adds r0, #76	@ 000492bc 4c30
.org 0x492be
	strb r1, [r0, #0]	@ 000492be 0170
.org 0x492c0
	movs r0, #74	@ 000492c0 4a20
.org 0x492c2
	adds r0, r0, r3	@ 000492c2 c018
.org 0x492c4
	mov ip, r0	@ 000492c4 8446
.org 0x492c6
	lsls r1, r1, #4	@ 000492c6 0901
.org 0x492c8
	ldrb r2, [r0, #0]	@ 000492c8 0278
.org 0x492ca
	movs r0, #17	@ 000492ca 1120
.org 0x492cc
	negs r0, r0	@ 000492cc 4042
.org 0x492ce
	ands r0, r2	@ 000492ce 1040
.org 0x492d0
	orrs r0, r1	@ 000492d0 0843
.org 0x492d2
	mov r1, ip	@ 000492d2 6146
.org 0x492d4
	strb r0, [r1, #0]	@ 000492d4 0870
.org 0x492d6
	ldrb r1, [r3, #10]	@ 000492d6 997a
.org 0x492d8
	movs r0, #16	@ 000492d8 1020
.org 0x492da
	ands r0, r1	@ 000492da 0840
.org 0x492dc
	cmp r0, #0	@ 000492dc 0028
.org 0x492de
	beq.n 0x492e8	@ 000492de 03d0
