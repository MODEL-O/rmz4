@ FUN_080a2218  entry 0x080a2218  size 212
.thumb
.org 0xa2218
FUN_080a2218:
	push {r4, r5, r6, lr}	@ 000a2218 70b5
.org 0xa221a
	adds r6, r0, #0	@ 000a221a 061c
.org 0xa221c
	bl 0x1cc9c	@ 000a221c 7af73efd
.org 0xa2220
	ldrb r1, [r6, #10]	@ 000a2220 b17a
.org 0xa2222
	movs r0, #1	@ 000a2222 0120
.org 0xa2224
	orrs r0, r1	@ 000a2224 0843
.org 0xa2226
	movs r1, #2	@ 000a2226 0221
.org 0xa2228
	orrs r0, r1	@ 000a2228 0843
.org 0xa222a
	movs r5, #0	@ 000a222a 0025
.org 0xa222c
	movs r1, #239	@ 000a222c ef21
.org 0xa222e
	ands r0, r1	@ 000a222e 0840
.org 0xa2230
	strb r0, [r6, #10]	@ 000a2230 b072
.org 0xa2232
	movs r2, #1	@ 000a2232 0122
.org 0xa2234
	adds r0, r6, #0	@ 000a2234 301c
.org 0xa2236
	adds r0, #76	@ 000a2236 4c30
.org 0xa2238
	strb r5, [r0, #0]	@ 000a2238 0570
.org 0xa223a
	adds r3, r6, #0	@ 000a223a 331c
.org 0xa223c
	adds r3, #74	@ 000a223c 4a33
.org 0xa223e
	ldrb r1, [r3, #0]	@ 000a223e 1978
.org 0xa2240
	movs r0, #17	@ 000a2240 1120
.org 0xa2242
	negs r0, r0	@ 000a2242 4042
.org 0xa2244
	ands r0, r1	@ 000a2244 0840
.org 0xa2246
	strb r0, [r3, #0]	@ 000a2246 1870
.org 0xa2248
	ldr r0, [pc, #132]	@ 000a2248 2148
.org 0xa224a
	adds r4, r6, #0	@ 000a224a 341c
.org 0xa224c
	adds r4, #116	@ 000a224c 7434
.org 0xa224e
	str r0, [r4, #36]	@ 000a224e 6062
.org 0xa2250
	ldr r1, [pc, #128]	@ 000a2250 2049
.org 0xa2252
	ldrb r0, [r6, #9]	@ 000a2252 707a
.org 0xa2254
	lsls r0, r0, #2	@ 000a2254 8000
.org 0xa2256
	adds r0, r0, r1	@ 000a2256 4018
.org 0xa2258
	str r2, [r6, #12]	@ 000a2258 f260
.org 0xa225a
	ldr r0, [r0, #0]	@ 000a225a 0068
.org 0xa225c
	ldr r0, [r0, #4]	@ 000a225c 4068
.org 0xa225e
	str r0, [r6, #20]	@ 000a225e 7061
.org 0xa2260
	adds r1, r6, #0	@ 000a2260 311c
.org 0xa2262
	adds r1, #180	@ 000a2262 b431
.org 0xa2264
	ldr r0, [r6, #84]	@ 000a2264 706d
.org 0xa2266
	str r0, [r1, #0]	@ 000a2266 0860
.org 0xa2268
	ldr r1, [pc, #108]	@ 000a2268 1b49
.org 0xa226a
	ldrb r0, [r6, #16]	@ 000a226a 307c
.org 0xa226c
	lsls r0, r0, #3	@ 000a226c c000
.org 0xa226e
	adds r0, r0, r1	@ 000a226e 4018
.org 0xa2270
	ldr r0, [r0, #0]	@ 000a2270 0068
.org 0xa2272
	str r0, [r6, #92]	@ 000a2272 f065
.org 0xa2274
	ldrb r0, [r6, #16]	@ 000a2274 307c
.org 0xa2276
	lsls r0, r0, #3	@ 000a2276 c000
.org 0xa2278
	adds r1, #4	@ 000a2278 0431
.org 0xa227a
	adds r0, r0, r1	@ 000a227a 4018
.org 0xa227c
	ldr r0, [r0, #0]	@ 000a227c 0068
.org 0xa227e
	str r0, [r6, #96]	@ 000a227e 3066
.org 0xa2280
	ldrb r1, [r6, #10]	@ 000a2280 b17a
.org 0xa2282
	movs r0, #4	@ 000a2282 0420
.org 0xa2284
	orrs r0, r1	@ 000a2284 0843
.org 0xa2286
	strb r0, [r6, #10]	@ 000a2286 b072
.org 0xa2288
	ldrb r0, [r6, #16]	@ 000a2288 307c
.org 0xa228a
	lsls r1, r0, #1	@ 000a228a 4100
.org 0xa228c
	adds r1, r1, r0	@ 000a228c 0918
.org 0xa228e
	lsls r1, r1, #4	@ 000a228e 0901
.org 0xa2290
	ldr r0, [pc, #72]	@ 000a2290 1248
.org 0xa2292
	adds r1, r1, r0	@ 000a2292 0918
.org 0xa2294
	adds r2, r6, #0	@ 000a2294 321c
.org 0xa2296
	adds r2, #84	@ 000a2296 5432
.org 0xa2298
	adds r0, r4, #0	@ 000a2298 201c
.org 0xa229a
	movs r3, #4	@ 000a229a 0423
.org 0xa229c
	bl 0x5760	@ 000a229c 63f760fa
.org 0xa22a0
	str r6, [r4, #44]	@ 000a22a0 e662
.org 0xa22a2
	str r5, [r4, #36]	@ 000a22a2 6562
.org 0xa22a4
	ldrb r0, [r6, #17]	@ 000a22a4 707c
.org 0xa22a6
	cmp r0, #1	@ 000a22a6 0128
.org 0xa22a8
	bne.n 0xa22be	@ 000a22a8 09d1
.org 0xa22aa
	ldr r1, [r6, #92]	@ 000a22aa f16d
.org 0xa22ac
	lsls r0, r1, #1	@ 000a22ac 4800
.org 0xa22ae
	adds r0, r0, r1	@ 000a22ae 4018
.org 0xa22b0
	lsls r0, r0, #7	@ 000a22b0 c001
.org 0xa22b2
	subs r0, r0, r1	@ 000a22b2 401a
.org 0xa22b4
	cmp r0, #0	@ 000a22b4 0028
.org 0xa22b6
	bge.n 0xa22ba	@ 000a22b6 00da
.org 0xa22b8
	adds r0, #255	@ 000a22b8 ff30
.org 0xa22ba
	asrs r0, r0, #8	@ 000a22ba 0012
.org 0xa22bc
	str r0, [r6, #92]	@ 000a22bc f065
.org 0xa22be
	ldrb r0, [r6, #16]	@ 000a22be 307c
.org 0xa22c0
	cmp r0, #3	@ 000a22c0 0328
.org 0xa22c2
	bne.n 0xa22e4	@ 000a22c2 0fd1
.org 0xa22c4
	ldr r1, [pc, #24]	@ 000a22c4 0649
.org 0xa22c6
	adds r0, r6, #0	@ 000a22c6 301c
.org 0xa22c8
	bl 0x1cf00	@ 000a22c8 7af71afe
.org 0xa22cc
	b.n 0xa22f6	@ 000a22cc 13e0
.org 0xa22ce
	.byte 0x00	@ 000a22ce data
.org 0xa22cf
	.byte 0x00	@ 000a22cf data
.org 0xa22d0
	.byte 0x81,0x23,0x0a,0x08	@ 000a22d0 data
.org 0xa22d4
	.byte 0x40,0xdb,0x85,0x08	@ 000a22d4 data
.org 0xa22d8
	.byte 0x98,0x1c,0x86,0x08	@ 000a22d8 data
.org 0xa22dc
	.byte 0xd8,0x1b,0x86,0x08	@ 000a22dc data
.org 0xa22e0
	.byte 0x0e,0xd2,0x00,0x00	@ 000a22e0 data
.org 0xa22e4
	ldr r0, [pc, #28]	@ 000a22e4 0748
.org 0xa22e6
	adds r1, r0, #0	@ 000a22e6 011c
.org 0xa22e8
	ldrb r0, [r6, #16]	@ 000a22e8 307c
.org 0xa22ea
	adds r1, r1, r0	@ 000a22ea 0918
