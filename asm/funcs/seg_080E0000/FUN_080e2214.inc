@ FUN_080e2214  entry 0x080e2214  size 266
.thumb
.org 0xe2214
FUN_080e2214:
	push {r4, lr}	@ 000e2214 10b5
.org 0xe2216
	adds r4, r0, #0	@ 000e2216 041c
.org 0xe2218
	bl 0x1cc9c	@ 000e2218 3af740fd
.org 0xe221c
	ldrb r1, [r4, #10]	@ 000e221c a17a
.org 0xe221e
	movs r0, #1	@ 000e221e 0120
.org 0xe2220
	orrs r0, r1	@ 000e2220 0843
.org 0xe2222
	movs r1, #2	@ 000e2222 0221
.org 0xe2224
	orrs r0, r1	@ 000e2224 0843
.org 0xe2226
	strb r0, [r4, #10]	@ 000e2226 a072
.org 0xe2228
	ldrb r0, [r4, #16]	@ 000e2228 207c
.org 0xe222a
	cmp r0, #3	@ 000e222a 0328
.org 0xe222c
	beq.n 0xe223e	@ 000e222c 07d0
.org 0xe222e
	ldr r0, [pc, #108]	@ 000e222e 1b48
.org 0xe2230
	ldrb r1, [r4, #16]	@ 000e2230 217c
.org 0xe2232
	lsls r1, r1, #2	@ 000e2232 8900
.org 0xe2234
	adds r1, r1, r0	@ 000e2234 0918
.org 0xe2236
	ldr r1, [r1, #0]	@ 000e2236 0968
.org 0xe2238
	adds r0, r4, #0	@ 000e2238 201c
.org 0xe223a
	bl 0x128f80	@ 000e223a 46f0a1fe
.org 0xe223e
	ldr r0, [pc, #96]	@ 000e223e 1848
.org 0xe2240
	adds r1, r0, #0	@ 000e2240 011c
.org 0xe2242
	ldrb r0, [r4, #17]	@ 000e2242 607c
.org 0xe2244
	adds r1, r1, r0	@ 000e2244 0918
.org 0xe2246
	lsls r1, r1, #16	@ 000e2246 0904
.org 0xe2248
	lsrs r1, r1, #16	@ 000e2248 090c
.org 0xe224a
	adds r0, r4, #0	@ 000e224a 201c
.org 0xe224c
	bl 0x1cf00	@ 000e224c 3af758fe
.org 0xe2250
	ldr r2, [pc, #80]	@ 000e2250 144a
.org 0xe2252
	ldrb r0, [r4, #17]	@ 000e2252 607c
.org 0xe2254
	lsls r0, r0, #3	@ 000e2254 c000
.org 0xe2256
	adds r0, r0, r2	@ 000e2256 8018
.org 0xe2258
	ldr r1, [r4, #84]	@ 000e2258 616d
.org 0xe225a
	ldr r0, [r0, #0]	@ 000e225a 0068
.org 0xe225c
	adds r1, r1, r0	@ 000e225c 0918
.org 0xe225e
	str r1, [r4, #84]	@ 000e225e 6165
.org 0xe2260
	ldrb r0, [r4, #17]	@ 000e2260 607c
.org 0xe2262
	lsls r0, r0, #3	@ 000e2262 c000
.org 0xe2264
	adds r2, #4	@ 000e2264 0432
.org 0xe2266
	adds r0, r0, r2	@ 000e2266 8018
.org 0xe2268
	ldr r2, [r4, #88]	@ 000e2268 a26d
.org 0xe226a
	ldr r0, [r0, #0]	@ 000e226a 0068
.org 0xe226c
	adds r2, r2, r0	@ 000e226c 1218
.org 0xe226e
	str r2, [r4, #88]	@ 000e226e a265
.org 0xe2270
	ldr r1, [pc, #52]	@ 000e2270 0d49
.org 0xe2272
	ldrb r0, [r4, #17]	@ 000e2272 607c
.org 0xe2274
	lsls r0, r0, #3	@ 000e2274 c000
.org 0xe2276
	adds r0, r0, r1	@ 000e2276 4018
.org 0xe2278
	ldr r0, [r0, #0]	@ 000e2278 0068
.org 0xe227a
	str r0, [r4, #92]	@ 000e227a e065
.org 0xe227c
	ldrb r0, [r4, #17]	@ 000e227c 607c
.org 0xe227e
	lsls r0, r0, #3	@ 000e227e c000
.org 0xe2280
	adds r1, #4	@ 000e2280 0431
.org 0xe2282
	adds r0, r0, r1	@ 000e2282 4018
.org 0xe2284
	ldr r0, [r0, #0]	@ 000e2284 0068
.org 0xe2286
	str r0, [r4, #96]	@ 000e2286 2066
.org 0xe2288
	ldr r0, [pc, #32]	@ 000e2288 0848
.org 0xe228a
	ldr r1, [pc, #36]	@ 000e228a 0949
.org 0xe228c
	adds r0, r0, r1	@ 000e228c 4018
.org 0xe228e
	ldr r1, [pc, #36]	@ 000e228e 0949
.org 0xe2290
	adds r2, r2, r1	@ 000e2290 5218
.org 0xe2292
	ldr r0, [r0, #0]	@ 000e2292 0068
.org 0xe2294
	cmp r0, r2	@ 000e2294 9042
.org 0xe2296
	bge.n 0xe22b8	@ 000e2296 0fda
.org 0xe2298
	movs r0, #16	@ 000e2298 1020
.org 0xe229a
	b.n 0xe22ba	@ 000e229a 0ee0
.org 0xe229c
	.byte 0xf8,0x8a,0x86,0x08	@ 000e229c data
.org 0xe22a0
	.byte 0x0a,0x8a,0x00,0x00	@ 000e22a0 data
.org 0xe22a4
	.byte 0x04,0x8b,0x86,0x08	@ 000e22a4 data
.org 0xe22a8
	.byte 0x2c,0x8b,0x86,0x08	@ 000e22a8 data
.org 0xe22ac
	.byte 0xb0,0x0a,0x00,0x02	@ 000e22ac data
.org 0xe22b0
	.byte 0x0c,0xc0,0x02,0x00	@ 000e22b0 data
.org 0xe22b4
	.byte 0x00,0xf0,0xff,0xff	@ 000e22b4 data
.org 0xe22b8
	movs r0, #64	@ 000e22b8 4020
.org 0xe22ba
	str r0, [r4, #104]	@ 000e22ba a066
.org 0xe22bc
	ldrb r0, [r4, #17]	@ 000e22bc 607c
.org 0xe22be
	ldr r3, [pc, #124]	@ 000e22be 1f4b
.org 0xe22c0
	cmp r0, #2	@ 000e22c0 0228
.org 0xe22c2
	bhi.n 0xe22e2	@ 000e22c2 0ed8
.org 0xe22c4
	ldr r2, [r4, #92]	@ 000e22c4 e26d
.org 0xe22c6
	subs r2, #128	@ 000e22c6 803a
.org 0xe22c8
	ldr r1, [r3, #0]	@ 000e22c8 1968
.org 0xe22ca
	ldr r0, [pc, #116]	@ 000e22ca 1d48
.org 0xe22cc
	muls r0, r1	@ 000e22cc 4843
.org 0xe22ce
	ldr r1, [pc, #116]	@ 000e22ce 1d49
.org 0xe22d0
	adds r0, r0, r1	@ 000e22d0 4018
.org 0xe22d2
	lsls r0, r0, #1	@ 000e22d2 4000
.org 0xe22d4
	lsrs r1, r0, #1	@ 000e22d4 4108
.org 0xe22d6
	str r1, [r3, #0]	@ 000e22d6 1960
.org 0xe22d8
	lsrs r0, r0, #17	@ 000e22d8 400c
.org 0xe22da
	movs r1, #255	@ 000e22da ff21
.org 0xe22dc
	ands r0, r1	@ 000e22dc 0840
.org 0xe22de
	adds r2, r2, r0	@ 000e22de 1218
.org 0xe22e0
	str r2, [r4, #92]	@ 000e22e0 e265
.org 0xe22e2
	ldrb r1, [r4, #10]	@ 000e22e2 a17a
.org 0xe22e4
	movs r0, #16	@ 000e22e4 1020
.org 0xe22e6
	ands r0, r1	@ 000e22e6 0840
.org 0xe22e8
	cmp r0, #0	@ 000e22e8 0028
.org 0xe22ea
	beq.n 0xe22fc	@ 000e22ea 07d0
.org 0xe22ec
	ldr r0, [r4, #92]	@ 000e22ec e06d
.org 0xe22ee
	lsls r0, r0, #8	@ 000e22ee 0002
.org 0xe22f0
	negs r0, r0	@ 000e22f0 4042
.org 0xe22f2
	cmp r0, #0	@ 000e22f2 0028
.org 0xe22f4
	bge.n 0xe22f8	@ 000e22f4 00da
.org 0xe22f6
	adds r0, #255	@ 000e22f6 ff30
.org 0xe22f8
	asrs r0, r0, #8	@ 000e22f8 0012
.org 0xe22fa
	str r0, [r4, #92]	@ 000e22fa e065
.org 0xe22fc
	ldr r1, [r3, #0]	@ 000e22fc 1968
.org 0xe22fe
	ldr r0, [pc, #64]	@ 000e22fe 1048
.org 0xe2300
	muls r0, r1	@ 000e2300 4843
.org 0xe2302
	ldr r1, [pc, #64]	@ 000e2302 1049
.org 0xe2304
	adds r0, r0, r1	@ 000e2304 4018
.org 0xe2306
	lsls r0, r0, #1	@ 000e2306 4000
.org 0xe2308
	lsrs r1, r0, #1	@ 000e2308 4108
.org 0xe230a
	str r1, [r3, #0]	@ 000e230a 1960
.org 0xe230c
	lsrs r0, r0, #17	@ 000e230c 400c
.org 0xe230e
	movs r1, #31	@ 000e230e 1f21
.org 0xe2310
	ands r0, r1	@ 000e2310 0840
.org 0xe2312
	adds r0, #30	@ 000e2312 1e30
.org 0xe2314
	strb r0, [r4, #18]	@ 000e2314 a074
.org 0xe2316
	adds r0, r4, #0	@ 000e2316 201c
.org 0xe2318
	adds r0, #116	@ 000e2318 7430
.org 0xe231a
	movs r2, #1	@ 000e231a 0122
.org 0xe231c
	strb r2, [r0, #0]	@ 000e231c 0270
