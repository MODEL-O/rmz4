@ FUN_080c227c  entry 0x080c227c  size 194
.thumb
.org 0xc227c
FUN_080c227c:
	push {r4, r5, lr}	@ 000c227c 30b5
.org 0xc227e
	adds r4, r0, #0	@ 000c227e 041c
.org 0xc2280
	ldr r1, [r4, #96]	@ 000c2280 216e
.org 0xc2282
	ldr r0, [pc, #64]	@ 000c2282 1048
.org 0xc2284
	cmp r1, r0	@ 000c2284 8142
.org 0xc2286
	bne.n 0xc2290	@ 000c2286 03d1
.org 0xc2288
	ldr r1, [pc, #60]	@ 000c2288 0f49
.org 0xc228a
	adds r0, r4, #0	@ 000c228a 201c
.org 0xc228c
	bl 0x1cf00	@ 000c228c 5af738fe
.org 0xc2290
	adds r0, r4, #0	@ 000c2290 201c
.org 0xc2292
	bl 0x1cff0	@ 000c2292 5af7adfe
.org 0xc2296
	ldr r0, [r4, #88]	@ 000c2296 a06d
.org 0xc2298
	ldr r1, [r4, #96]	@ 000c2298 216e
.org 0xc229a
	adds r0, r0, r1	@ 000c229a 4018
.org 0xc229c
	str r0, [r4, #88]	@ 000c229c a065
.org 0xc229e
	adds r1, #64	@ 000c229e 4031
.org 0xc22a0
	str r1, [r4, #96]	@ 000c22a0 2166
.org 0xc22a2
	ldrb r0, [r4, #18]	@ 000c22a2 a07c
.org 0xc22a4
	cmp r0, #11	@ 000c22a4 0b28
.org 0xc22a6
	bne.n 0xc22e2	@ 000c22a6 1cd1
.org 0xc22a8
	adds r0, r4, #0	@ 000c22a8 201c
.org 0xc22aa
	adds r0, #189	@ 000c22aa bd30
.org 0xc22ac
	ldrb r1, [r0, #0]	@ 000c22ac 0178
.org 0xc22ae
	adds r3, r0, #0	@ 000c22ae 031c
.org 0xc22b0
	cmp r1, #0	@ 000c22b0 0029
.org 0xc22b2
	beq.n 0xc22e2	@ 000c22b2 16d0
.org 0xc22b4
	ldrb r0, [r4, #17]	@ 000c22b4 607c
.org 0xc22b6
	cmp r0, #0	@ 000c22b6 0028
.org 0xc22b8
	beq.n 0xc22cc	@ 000c22b8 08d0
.org 0xc22ba
	ldr r0, [r4, #84]	@ 000c22ba 606d
.org 0xc22bc
	movs r1, #128	@ 000c22bc 8021
.org 0xc22be
	lsls r1, r1, #6	@ 000c22be 8901
.org 0xc22c0
	b.n 0xc22d0	@ 000c22c0 06e0
.org 0xc22c2
	.byte 0x00	@ 000c22c2 data
.org 0xc22c3
	.byte 0x00	@ 000c22c3 data
.org 0xc22c4
	.byte 0x00,0xfe,0xff,0xff	@ 000c22c4 data
.org 0xc22c8
	.byte 0x01,0x3d,0x00,0x00	@ 000c22c8 data
.org 0xc22cc
	ldr r0, [r4, #84]	@ 000c22cc 606d
.org 0xc22ce
	ldr r1, [pc, #68]	@ 000c22ce 1149
.org 0xc22d0
	adds r5, r0, r1	@ 000c22d0 4518
.org 0xc22d2
	adds r0, r4, #0	@ 000c22d2 201c
.org 0xc22d4
	adds r0, #184	@ 000c22d4 b830
.org 0xc22d6
	ldr r1, [r0, #0]	@ 000c22d6 0168
.org 0xc22d8
	ldrb r2, [r4, #17]	@ 000c22d8 627c
.org 0xc22da
	ldrb r3, [r3, #0]	@ 000c22da 1b78
.org 0xc22dc
	adds r0, r5, #0	@ 000c22dc 281c
.org 0xc22de
	bl 0xc1a78	@ 000c22de fff7cbfb
.org 0xc22e2
	ldr r0, [r4, #96]	@ 000c22e2 206e
.org 0xc22e4
	cmp r0, #0	@ 000c22e4 0028
.org 0xc22e6
	ble.n 0xc2320	@ 000c22e6 1bdd
.org 0xc22e8
	adds r0, r4, #0	@ 000c22e8 201c
.org 0xc22ea
	adds r0, #140	@ 000c22ea 8c30
.org 0xc22ec
	movs r1, #0	@ 000c22ec 0021
.org 0xc22ee
	str r1, [r0, #0]	@ 000c22ee 0160
.org 0xc22f0
	adds r0, #4	@ 000c22f0 0430
.org 0xc22f2
	str r1, [r0, #0]	@ 000c22f2 0160
.org 0xc22f4
	adds r0, #4	@ 000c22f4 0430
.org 0xc22f6
	strb r1, [r0, #0]	@ 000c22f6 0170
.org 0xc22f8
	ldrb r0, [r4, #10]	@ 000c22f8 a07a
.org 0xc22fa
	movs r2, #251	@ 000c22fa fb22
.org 0xc22fc
	ands r2, r0	@ 000c22fc 0240
.org 0xc22fe
	strb r2, [r4, #10]	@ 000c22fe a272
.org 0xc2300
	ldrb r0, [r4, #19]	@ 000c2300 e07c
.org 0xc2302
	adds r0, #1	@ 000c2302 0130
.org 0xc2304
	strb r0, [r4, #19]	@ 000c2304 e074
.org 0xc2306
	movs r1, #1	@ 000c2306 0121
.org 0xc2308
	ands r0, r1	@ 000c2308 0840
.org 0xc230a
	cmp r0, #0	@ 000c230a 0028
.org 0xc230c
	beq.n 0xc2318	@ 000c230c 04d0
.org 0xc230e
	movs r0, #254	@ 000c230e fe20
.org 0xc2310
	ands r0, r2	@ 000c2310 1040
.org 0xc2312
	b.n 0xc231e	@ 000c2312 04e0
.org 0xc2314
	.byte 0x00,0xe0,0xff,0xff	@ 000c2314 data
.org 0xc2318
	adds r0, r2, #0	@ 000c2318 101c
.org 0xc231a
	movs r1, #1	@ 000c231a 0121
.org 0xc231c
	orrs r0, r1	@ 000c231c 0843
.org 0xc231e
	strb r0, [r4, #10]	@ 000c231e a072
.org 0xc2320
	ldrb r0, [r4, #18]	@ 000c2320 a07c
.org 0xc2322
	adds r1, r0, #1	@ 000c2322 411c
.org 0xc2324
	strb r1, [r4, #18]	@ 000c2324 a174
.org 0xc2326
	lsls r0, r0, #24	@ 000c2326 0006
.org 0xc2328
	lsrs r0, r0, #24	@ 000c2328 000e
.org 0xc232a
	cmp r0, #64	@ 000c232a 4028
.org 0xc232c
	bls.n 0xc2346	@ 000c232c 0bd9
.org 0xc232e
	ldr r1, [pc, #28]	@ 000c232e 0749
.org 0xc2330
	ldrb r0, [r4, #9]	@ 000c2330 607a
.org 0xc2332
	lsls r0, r0, #2	@ 000c2332 8000
.org 0xc2334
	adds r0, r0, r1	@ 000c2334 4018
.org 0xc2336
	movs r1, #2	@ 000c2336 0221
.org 0xc2338
	str r1, [r4, #12]	@ 000c2338 e160
.org 0xc233a
	ldr r0, [r0, #0]	@ 000c233a 0068
.org 0xc233c
	ldr r0, [r0, #8]	@ 000c233c 8068
