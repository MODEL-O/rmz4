@ FUN_080230d0  entry 0x080230d0  size 642
.thumb
.org 0x230d0
FUN_080230d0:
	push {r4, r5, r6, r7, lr}	@ 000230d0 f0b5
.org 0x230d2
	sub sp, #8	@ 000230d2 82b0
.org 0x230d4
	adds r4, r0, #0	@ 000230d4 041c
.org 0x230d6
	ldr r2, [r4, #32]	@ 000230d6 226a
.org 0x230d8
	movs r0, #190	@ 000230d8 be20
.org 0x230da
	lsls r0, r0, #1	@ 000230da 4000
.org 0x230dc
	adds r6, r4, r0	@ 000230dc 2618
.org 0x230de
	ldrb r0, [r6, #0]	@ 000230de 3078
.org 0x230e0
	cmp r0, #0	@ 000230e0 0028
.org 0x230e2
	beq.n 0x230e6	@ 000230e2 00d0
.org 0x230e4
	b.n 0x231e4	@ 000230e4 7ee0
.org 0x230e6
	movs r0, #0	@ 000230e6 0020
.org 0x230e8
	movs r1, #0	@ 000230e8 0021
.org 0x230ea
	str r0, [sp, #0]	@ 000230ea 0090
.org 0x230ec
	str r1, [sp, #4]	@ 000230ec 0191
.org 0x230ee
	ldr r5, [pc, #104]	@ 000230ee 1a4d
.org 0x230f0
	ldrh r1, [r5, #8]	@ 000230f0 2989
.org 0x230f2
	movs r0, #1	@ 000230f2 0120
.org 0x230f4
	orrs r0, r1	@ 000230f4 0843
.org 0x230f6
	strh r0, [r5, #8]	@ 000230f6 2881
.org 0x230f8
	ldr r7, [pc, #96]	@ 000230f8 184f
.org 0x230fa
	ldrb r1, [r7, #4]	@ 000230fa 3979
.org 0x230fc
	movs r0, #8	@ 000230fc 0820
.org 0x230fe
	orrs r0, r1	@ 000230fe 0843
.org 0x23100
	strb r0, [r7, #4]	@ 00023100 3871
.org 0x23102
	mov r0, sp	@ 00023102 6846
.org 0x23104
	movs r1, #0	@ 00023104 0021
.org 0x23106
	movs r2, #0	@ 00023106 0022
.org 0x23108
	bl 0xf7558	@ 00023108 d4f026fa
.org 0x2310c
	movs r2, #161	@ 0002310c a122
.org 0x2310e
	lsls r2, r2, #2	@ 0002310e 9200
.org 0x23110
	adds r1, r4, r2	@ 00023110 a118
.org 0x23112
	str r0, [r1, #0]	@ 00023112 0860
.org 0x23114
	ldrb r4, [r5, #2]	@ 00023114 ac78
.org 0x23116
	cmp r4, #0	@ 00023116 002c
.org 0x23118
	bne.n 0x23168	@ 00023118 26d1
.org 0x2311a
	adds r0, r5, #0	@ 0002311a 281c
.org 0x2311c
	adds r0, #16	@ 0002311c 1030
.org 0x2311e
	ldr r1, [pc, #64]	@ 0002311e 1049
.org 0x23120
	ldr r1, [r1, #28]	@ 00023120 c969
.org 0x23122
	ldr r1, [r1, #56]	@ 00023122 896b
.org 0x23124
	bl 0x275f0	@ 00023124 04f064fa
.org 0x23128
	movs r0, #2	@ 00023128 0220
.org 0x2312a
	bl 0x1f63c	@ 0002312a fcf787fa
.org 0x2312e
	ldrb r2, [r7, #10]	@ 0002312e ba7a
.org 0x23130
	movs r1, #239	@ 00023130 ef21
.org 0x23132
	adds r0, r1, #0	@ 00023132 081c
.org 0x23134
	ands r0, r2	@ 00023134 1040
.org 0x23136
	movs r5, #223	@ 00023136 df25
.org 0x23138
	ands r0, r5	@ 00023138 2840
.org 0x2313a
	movs r4, #191	@ 0002313a bf24
.org 0x2313c
	ands r0, r4	@ 0002313c 2040
.org 0x2313e
	movs r3, #127	@ 0002313e 7f23
.org 0x23140
	ands r0, r3	@ 00023140 1840
.org 0x23142
	strb r0, [r7, #10]	@ 00023142 b872
.org 0x23144
	ldr r2, [pc, #28]	@ 00023144 074a
.org 0x23146
	ldrb r0, [r2, #6]	@ 00023146 9079
.org 0x23148
	ands r1, r0	@ 00023148 0140
.org 0x2314a
	ands r1, r5	@ 0002314a 2940
.org 0x2314c
	ands r1, r4	@ 0002314c 2140
.org 0x2314e
	ands r1, r3	@ 0002314e 1940
.org 0x23150
	strb r1, [r2, #6]	@ 00023150 9171
.org 0x23152
	movs r0, #2	@ 00023152 0220
.org 0x23154
	strb r0, [r6, #0]	@ 00023154 3070
.org 0x23156
	b.n 0x233c2	@ 00023156 34e1
.org 0x23158
	.byte 0x10,0xe9,0x02,0x02	@ 00023158 data
.org 0x2315c
	.byte 0xb0,0xe8,0x02,0x02	@ 0002315c data
.org 0x23160
	.byte 0xf8,0x2c,0x84,0x08	@ 00023160 data
.org 0x23164
	.byte 0x80,0x58,0x03,0x02	@ 00023164 data
.org 0x23168
	cmp r4, #2	@ 00023168 022c
.org 0x2316a
	bne.n 0x23184	@ 0002316a 0bd1
.org 0x2316c
	adds r0, r5, #0	@ 0002316c 281c
.org 0x2316e
	adds r0, #16	@ 0002316e 1030
.org 0x23170
	ldr r1, [pc, #12]	@ 00023170 0349
.org 0x23172
	ldr r1, [r1, #28]	@ 00023172 c969
.org 0x23174
	ldr r1, [r1, #8]	@ 00023174 8968
.org 0x23176
	bl 0x275f0	@ 00023176 04f03bfa
.org 0x2317a
	strb r4, [r6, #0]	@ 0002317a 3470
.org 0x2317c
	b.n 0x233c2	@ 0002317c 21e1
.org 0x2317e
	.byte 0x00	@ 0002317e data
.org 0x2317f
	.byte 0x00	@ 0002317f data
.org 0x23180
	.byte 0xf8,0x2c,0x84,0x08	@ 00023180 data
.org 0x23184
	cmp r4, #3	@ 00023184 032c
.org 0x23186
	bne.n 0x231a8	@ 00023186 0fd1
.org 0x23188
	adds r0, r5, #0	@ 00023188 281c
.org 0x2318a
	adds r0, #16	@ 0002318a 1030
.org 0x2318c
	ldr r1, [pc, #20]	@ 0002318c 0549
.org 0x2318e
	ldr r1, [r1, #28]	@ 0002318e c969
.org 0x23190
	ldr r1, [r1, #16]	@ 00023190 0969
.org 0x23192
	bl 0x275f0	@ 00023192 04f02dfa
.org 0x23196
	movs r0, #4	@ 00023196 0420
.org 0x23198
	bl 0x1f63c	@ 00023198 fcf750fa
.org 0x2319c
	movs r0, #4	@ 0002319c 0420
.org 0x2319e
	strb r0, [r6, #0]	@ 0002319e 3070
.org 0x231a0
	b.n 0x233c2	@ 000231a0 0fe1
.org 0x231a2
	.byte 0x00	@ 000231a2 data
.org 0x231a3
	.byte 0x00	@ 000231a3 data
.org 0x231a4
	.byte 0xf8,0x2c,0x84,0x08	@ 000231a4 data
.org 0x231a8
	cmp r4, #4	@ 000231a8 042c
.org 0x231aa
	bne.n 0x231c4	@ 000231aa 0bd1
.org 0x231ac
	adds r0, r5, #0	@ 000231ac 281c
.org 0x231ae
	adds r0, #16	@ 000231ae 1030
.org 0x231b0
	ldr r1, [pc, #12]	@ 000231b0 0349
.org 0x231b2
	ldr r1, [r1, #28]	@ 000231b2 c969
.org 0x231b4
	ldr r1, [r1, #24]	@ 000231b4 8969
.org 0x231b6
	bl 0x275f0	@ 000231b6 04f01bfa
.org 0x231ba
	movs r0, #5	@ 000231ba 0520
.org 0x231bc
	strb r0, [r6, #0]	@ 000231bc 3070
.org 0x231be
	b.n 0x233c2	@ 000231be 00e1
.org 0x231c0
	.byte 0xf8,0x2c,0x84,0x08	@ 000231c0 data
.org 0x231c4
	cmp r4, #5	@ 000231c4 052c
.org 0x231c6
	beq.n 0x231ca	@ 000231c6 00d0
.org 0x231c8
	b.n 0x233c2	@ 000231c8 fbe0
.org 0x231ca
	adds r0, r5, #0	@ 000231ca 281c
.org 0x231cc
	adds r0, #16	@ 000231cc 1030
.org 0x231ce
	ldr r1, [pc, #16]	@ 000231ce 0449
.org 0x231d0
	ldr r1, [r1, #28]	@ 000231d0 c969
.org 0x231d2
	ldr r1, [r1, #32]	@ 000231d2 096a
.org 0x231d4
	bl 0x275f0	@ 000231d4 04f00cfa
.org 0x231d8
	movs r0, #9	@ 000231d8 0920
.org 0x231da
	strb r0, [r6, #0]	@ 000231da 3070
.org 0x231dc
	b.n 0x233c2	@ 000231dc f1e0
.org 0x231de
	.byte 0x00	@ 000231de data
.org 0x231df
	.byte 0x00	@ 000231df data
.org 0x231e0
	.byte 0xf8,0x2c,0x84,0x08	@ 000231e0 data
.org 0x231e4
	cmp r0, #2	@ 000231e4 0228
.org 0x231e6
	bne.n 0x23204	@ 000231e6 0dd1
.org 0x231e8
	ldr r1, [r2, #84]	@ 000231e8 516d
.org 0x231ea
	movs r0, #240	@ 000231ea f020
.org 0x231ec
	lsls r0, r0, #11	@ 000231ec c002
.org 0x231ee
	cmp r1, r0	@ 000231ee 8142
.org 0x231f0
	ble.n 0x23204	@ 000231f0 08dd
.org 0x231f2
	ldr r0, [pc, #12]	@ 000231f2 0348
.org 0x231f4
	cmp r1, r0	@ 000231f4 8142
.org 0x231f6
	bgt.n 0x23204	@ 000231f6 05dc
.org 0x231f8
	movs r0, #3	@ 000231f8 0320
.org 0x231fa
	strb r0, [r6, #0]	@ 000231fa 3070
.org 0x231fc
	b.n 0x233c2	@ 000231fc e1e0
.org 0x231fe
	.byte 0x00	@ 000231fe data
.org 0x231ff
	.byte 0x00	@ 000231ff data
.org 0x23200
	.byte 0xff,0x6f,0x08,0x00	@ 00023200 data
.org 0x23204
	movs r0, #190	@ 00023204 be20
.org 0x23206
	lsls r0, r0, #1	@ 00023206 4000
.org 0x23208
	adds r5, r4, r0	@ 00023208 2518
.org 0x2320a
	ldrb r0, [r5, #0]	@ 0002320a 2878
.org 0x2320c
	cmp r0, #3	@ 0002320c 0328
.org 0x2320e
	bne.n 0x23248	@ 0002320e 1bd1
.org 0x23210
	ldr r1, [r2, #84]	@ 00023210 516d
.org 0x23212
	movs r0, #135	@ 00023212 8720
.org 0x23214
	lsls r0, r0, #12	@ 00023214 0003
.org 0x23216
	cmp r1, r0	@ 00023216 8142
.org 0x23218
	ble.n 0x23248	@ 00023218 16dd
.org 0x2321a
	ldr r0, [pc, #32]	@ 0002321a 0848
.org 0x2321c
	ldr r1, [pc, #32]	@ 0002321c 0849
.org 0x2321e
	ldr r1, [r1, #28]	@ 0002321e c969
.org 0x23220
	ldr r1, [r1, #20]	@ 00023220 4969
.org 0x23222
	bl 0x275f0	@ 00023222 04f0e5f9
.org 0x23226
	movs r0, #4	@ 00023226 0420
.org 0x23228
	bl 0x1f63c	@ 00023228 fcf708fa
.org 0x2322c
	ldr r2, [pc, #20]	@ 0002322c 054a
.org 0x2322e
	ldrb r1, [r2, #4]	@ 0002322e 1179
.org 0x23230
	movs r0, #8	@ 00023230 0820
.org 0x23232
	orrs r0, r1	@ 00023232 0843
.org 0x23234
	strb r0, [r2, #4]	@ 00023234 1071
.org 0x23236
	movs r0, #5	@ 00023236 0520
.org 0x23238
	b.n 0x233c0	@ 00023238 c2e0
.org 0x2323a
	.byte 0x00	@ 0002323a data
.org 0x2323b
	.byte 0x00	@ 0002323b data
.org 0x2323c
	.byte 0x20,0xe9,0x02,0x02	@ 0002323c data
.org 0x23240
	.byte 0xf8,0x2c,0x84,0x08	@ 00023240 data
.org 0x23244
	.byte 0xb0,0xe8,0x02,0x02	@ 00023244 data
.org 0x23248
	movs r1, #190	@ 00023248 be21
.org 0x2324a
	lsls r1, r1, #1	@ 0002324a 4900
.org 0x2324c
	adds r5, r4, r1	@ 0002324c 6518
.org 0x2324e
	ldrb r0, [r5, #0]	@ 0002324e 2878
.org 0x23250
	cmp r0, #4	@ 00023250 0428
.org 0x23252
	bne.n 0x2328c	@ 00023252 1bd1
.org 0x23254
	ldr r1, [r2, #84]	@ 00023254 516d
.org 0x23256
	movs r0, #135	@ 00023256 8720
.org 0x23258
	lsls r0, r0, #12	@ 00023258 0003
.org 0x2325a
	cmp r1, r0	@ 0002325a 8142
.org 0x2325c
	ble.n 0x2328c	@ 0002325c 16dd
.org 0x2325e
	ldr r0, [pc, #32]	@ 0002325e 0848
.org 0x23260
	ldr r1, [pc, #32]	@ 00023260 0849
.org 0x23262
	ldr r1, [r1, #28]	@ 00023262 c969
.org 0x23264
	ldr r1, [r1, #20]	@ 00023264 4969
.org 0x23266
	bl 0x275f0	@ 00023266 04f0c3f9
.org 0x2326a
	movs r0, #4	@ 0002326a 0420
.org 0x2326c
	bl 0x1f63c	@ 0002326c fcf7e6f9
.org 0x23270
	ldr r2, [pc, #20]	@ 00023270 054a
.org 0x23272
	ldrb r1, [r2, #4]	@ 00023272 1179
.org 0x23274
	movs r0, #8	@ 00023274 0820
.org 0x23276
	orrs r0, r1	@ 00023276 0843
.org 0x23278
	strb r0, [r2, #4]	@ 00023278 1071
.org 0x2327a
	movs r0, #5	@ 0002327a 0520
.org 0x2327c
	b.n 0x233c0	@ 0002327c a0e0
.org 0x2327e
	.byte 0x00	@ 0002327e data
.org 0x2327f
	.byte 0x00	@ 0002327f data
.org 0x23280
	.byte 0x20,0xe9,0x02,0x02	@ 00023280 data
.org 0x23284
	.byte 0xf8,0x2c,0x84,0x08	@ 00023284 data
.org 0x23288
	.byte 0xb0,0xe8,0x02,0x02	@ 00023288 data
.org 0x2328c
	movs r0, #190	@ 0002328c be20
.org 0x2328e
	lsls r0, r0, #1	@ 0002328e 4000
.org 0x23290
	adds r6, r4, r0	@ 00023290 2618
.org 0x23292
	ldrb r0, [r6, #0]	@ 00023292 3078
.org 0x23294
	cmp r0, #5	@ 00023294 0528
.org 0x23296
	bne.n 0x232a4	@ 00023296 05d1
.org 0x23298
	movs r0, #3	@ 00023298 0320
.org 0x2329a
	bl 0x1f63c	@ 0002329a fcf7cff9
.org 0x2329e
	movs r0, #6	@ 0002329e 0620
.org 0x232a0
	strb r0, [r6, #0]	@ 000232a0 3070
.org 0x232a2
	b.n 0x233c2	@ 000232a2 8ee0
.org 0x232a4
	cmp r0, #6	@ 000232a4 0628
.org 0x232a6
	bne.n 0x2330c	@ 000232a6 31d1
.org 0x232a8
	ldr r5, [pc, #76]	@ 000232a8 134d
.org 0x232aa
	ldrh r1, [r5, #8]	@ 000232aa 2989
.org 0x232ac
	movs r0, #16	@ 000232ac 1020
.org 0x232ae
	ands r0, r1	@ 000232ae 0840
.org 0x232b0
	cmp r0, #0	@ 000232b0 0028
.org 0x232b2
	beq.n 0x2330c	@ 000232b2 2bd0
.org 0x232b4
	ldr r1, [pc, #68]	@ 000232b4 1149
.org 0x232b6
	ldrb r2, [r1, #0]	@ 000232b6 0a78
.org 0x232b8
	movs r0, #128	@ 000232b8 8020
.org 0x232ba
	orrs r0, r2	@ 000232ba 1043
.org 0x232bc
	strb r0, [r1, #0]	@ 000232bc 0870
.org 0x232be
	ldrb r2, [r1, #1]	@ 000232be 4a78
.org 0x232c0
	movs r0, #2	@ 000232c0 0220
.org 0x232c2
	orrs r0, r2	@ 000232c2 1043
.org 0x232c4
	strb r0, [r1, #1]	@ 000232c4 4870
.org 0x232c6
	adds r0, r5, #0	@ 000232c6 281c
.org 0x232c8
	adds r0, #16	@ 000232c8 1030
.org 0x232ca
	ldr r1, [pc, #52]	@ 000232ca 0d49
.org 0x232cc
	ldr r1, [r1, #28]	@ 000232cc c969
.org 0x232ce
	ldr r1, [r1, #28]	@ 000232ce c969
.org 0x232d0
	bl 0x275f0	@ 000232d0 04f08ef9
.org 0x232d4
	ldrh r0, [r5, #8]	@ 000232d4 2889
.org 0x232d6
	ldr r2, [pc, #44]	@ 000232d6 0b4a
.org 0x232d8
	ands r2, r0	@ 000232d8 0240
.org 0x232da
	ldrb r1, [r5, #18]	@ 000232da a97c
.org 0x232dc
	movs r0, #253	@ 000232dc fd20
.org 0x232de
	ands r0, r1	@ 000232de 0840
.org 0x232e0
	strb r0, [r5, #18]	@ 000232e0 a874
.org 0x232e2
	ldr r3, [pc, #36]	@ 000232e2 094b
.org 0x232e4
	ldrb r1, [r3, #4]	@ 000232e4 1979
.org 0x232e6
	movs r0, #247	@ 000232e6 f720
.org 0x232e8
	ands r0, r1	@ 000232e8 0840
.org 0x232ea
	strb r0, [r3, #4]	@ 000232ea 1871
.org 0x232ec
	movs r0, #1	@ 000232ec 0120
.org 0x232ee
	orrs r2, r0	@ 000232ee 0243
.org 0x232f0
	strh r2, [r5, #8]	@ 000232f0 2a81
.org 0x232f2
	movs r0, #7	@ 000232f2 0720
.org 0x232f4
	strb r0, [r6, #0]	@ 000232f4 3070
.org 0x232f6
	b.n 0x233c2	@ 000232f6 64e0
.org 0x232f8
	.byte 0x10,0xe9,0x02,0x02	@ 000232f8 data
.org 0x232fc
	.byte 0xe0,0x32,0x00,0x03	@ 000232fc data
.org 0x23300
	.byte 0xf8,0x2c,0x84,0x08	@ 00023300 data
.org 0x23304
	.byte 0xef,0xff,0x00,0x00	@ 00023304 data
.org 0x23308
	.byte 0xb0,0xe8,0x02,0x02	@ 00023308 data
.org 0x2330c
	movs r1, #190	@ 0002330c be21
.org 0x2330e
	lsls r1, r1, #1	@ 0002330e 4900
.org 0x23310
	adds r5, r4, r1	@ 00023310 6518
.org 0x23312
	ldrb r0, [r5, #0]	@ 00023312 2878
.org 0x23314
	cmp r0, #7	@ 00023314 0728
.org 0x23316
	bne.n 0x23330	@ 00023316 0bd1
.org 0x23318
	ldr r1, [pc, #16]	@ 00023318 0449
.org 0x2331a
	ldrb r2, [r1, #0]	@ 0002331a 0a78
.org 0x2331c
	movs r0, #127	@ 0002331c 7f20
.org 0x2331e
	ands r0, r2	@ 0002331e 1040
.org 0x23320
	movs r2, #0	@ 00023320 0022
.org 0x23322
	strb r0, [r1, #0]	@ 00023322 0870
.org 0x23324
	strb r2, [r1, #1]	@ 00023324 4a70
.org 0x23326
	movs r0, #8	@ 00023326 0820
.org 0x23328
	b.n 0x233c0	@ 00023328 4ae0
.org 0x2332a
	.byte 0x00	@ 0002332a data
.org 0x2332b
	.byte 0x00	@ 0002332b data
.org 0x2332c
	.byte 0xe0,0x32,0x00,0x03	@ 0002332c data
.org 0x23330
	cmp r0, #8	@ 00023330 0828
.org 0x23332
	bne.n 0x23368	@ 00023332 19d1
.org 0x23334
	ldr r1, [r2, #84]	@ 00023334 516d
.org 0x23336
	movs r0, #150	@ 00023336 9620
.org 0x23338
	lsls r0, r0, #12	@ 00023338 0003
.org 0x2333a
	cmp r1, r0	@ 0002333a 8142
.org 0x2333c
	ble.n 0x23368	@ 0002333c 14dd
.org 0x2333e
	ldr r0, [pc, #28]	@ 0002333e 0748
.org 0x23340
	ldr r2, [pc, #28]	@ 00023340 074a
.org 0x23342
	adds r0, r0, r2	@ 00023342 8018
.org 0x23344
	movs r1, #255	@ 00023344 ff21
.org 0x23346
	strb r1, [r0, #0]	@ 00023346 0170
.org 0x23348
	movs r0, #5	@ 00023348 0520
.org 0x2334a
	bl 0x1f63c	@ 0002334a fcf777f9
.org 0x2334e
	ldr r2, [pc, #20]	@ 0002334e 054a
.org 0x23350
	ldrb r1, [r2, #4]	@ 00023350 1179
