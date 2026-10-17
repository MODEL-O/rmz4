@ FUN_081031e0  entry 0x081031e0  size 256
.thumb
.org 0x1031e0
FUN_081031e0:
	push {r4, r5, r6, lr}	@ 001031e0 70b5
.org 0x1031e2
	adds r6, r0, #0	@ 001031e2 061c
.org 0x1031e4
	ldrb r0, [r6, #14]	@ 001031e4 b07b
.org 0x1031e6
	cmp r0, #0	@ 001031e6 0028
.org 0x1031e8
	bne.n 0x103204	@ 001031e8 0cd1
.org 0x1031ea
	ldr r1, [pc, #20]	@ 001031ea 0549
.org 0x1031ec
	adds r0, r6, #0	@ 001031ec 301c
.org 0x1031ee
	adds r0, #180	@ 001031ee b430
.org 0x1031f0
	ldrb r0, [r0, #0]	@ 001031f0 0078
.org 0x1031f2
	lsls r0, r0, #2	@ 001031f2 8000
.org 0x1031f4
	adds r0, r0, r1	@ 001031f4 4018
.org 0x1031f6
	ldrh r1, [r0, #0]	@ 001031f6 0188
.org 0x1031f8
	adds r0, r6, #0	@ 001031f8 301c
.org 0x1031fa
	bl 0x1cf00	@ 001031fa 19f781fe
.org 0x1031fe
	b.n 0x103282	@ 001031fe 40e0
.org 0x103200
	.byte 0xf8,0xbc,0x86,0x08	@ 00103200 data
.org 0x103204
	cmp r0, #1	@ 00103204 0128
.org 0x103206
	bne.n 0x10324c	@ 00103206 21d1
.org 0x103208
	adds r0, r6, #0	@ 00103208 301c
.org 0x10320a
	adds r0, #113	@ 0010320a 7130
.org 0x10320c
	ldrb r0, [r0, #0]	@ 0010320c 0078
.org 0x10320e
	lsls r0, r0, #24	@ 0010320e 0006
.org 0x103210
	asrs r0, r0, #24	@ 00103210 0016
.org 0x103212
	cmp r0, #2	@ 00103212 0228
.org 0x103214
	bne.n 0x103288	@ 00103214 38d1
.org 0x103216
	ldrb r1, [r6, #10]	@ 00103216 b17a
.org 0x103218
	movs r0, #4	@ 00103218 0420
.org 0x10321a
	movs r5, #0	@ 0010321a 0025
.org 0x10321c
	orrs r0, r1	@ 0010321c 0843
.org 0x10321e
	strb r0, [r6, #10]	@ 0010321e b072
.org 0x103220
	adds r4, r6, #0	@ 00103220 341c
.org 0x103222
	adds r4, #116	@ 00103222 7434
.org 0x103224
	adds r0, r6, #0	@ 00103224 301c
.org 0x103226
	adds r0, #180	@ 00103226 b430
.org 0x103228
	ldrb r0, [r0, #0]	@ 00103228 0078
.org 0x10322a
	lsls r1, r0, #1	@ 0010322a 4100
.org 0x10322c
	adds r1, r1, r0	@ 0010322c 0918
.org 0x10322e
	lsls r1, r1, #3	@ 0010322e c900
.org 0x103230
	ldr r0, [pc, #20]	@ 00103230 0548
.org 0x103232
	adds r1, r1, r0	@ 00103232 0918
.org 0x103234
	adds r2, r6, #0	@ 00103234 321c
.org 0x103236
	adds r2, #84	@ 00103236 5432
.org 0x103238
	adds r0, r4, #0	@ 00103238 201c
.org 0x10323a
	movs r3, #128	@ 0010323a 8023
.org 0x10323c
	bl 0x5760	@ 0010323c 02f790fa
.org 0x103240
	str r6, [r4, #44]	@ 00103240 e662
.org 0x103242
	str r5, [r4, #36]	@ 00103242 6562
.org 0x103244
	movs r0, #16	@ 00103244 1020
.org 0x103246
	b.n 0x103280	@ 00103246 1be0
.org 0x103248
	.byte 0x08,0xbd,0x86,0x08	@ 00103248 data
.org 0x10324c
	ldrb r4, [r6, #18]	@ 0010324c b47c
.org 0x10324e
	cmp r4, #0	@ 0010324e 002c
.org 0x103250
	bne.n 0x103288	@ 00103250 1ad1
.org 0x103252
	ldr r1, [pc, #88]	@ 00103252 1649
.org 0x103254
	adds r0, r6, #0	@ 00103254 301c
.org 0x103256
	adds r0, #180	@ 00103256 b430
.org 0x103258
	ldrb r0, [r0, #0]	@ 00103258 0078
.org 0x10325a
	lsls r0, r0, #2	@ 0010325a 8000
.org 0x10325c
	adds r1, #2	@ 0010325c 0231
.org 0x10325e
	adds r0, r0, r1	@ 0010325e 4018
.org 0x103260
	ldrh r1, [r0, #0]	@ 00103260 0188
.org 0x103262
	adds r0, r6, #0	@ 00103262 301c
.org 0x103264
	bl 0x1cf00	@ 00103264 19f74cfe
.org 0x103268
	adds r0, r6, #0	@ 00103268 301c
.org 0x10326a
	adds r0, #140	@ 0010326a 8c30
.org 0x10326c
	str r4, [r0, #0]	@ 0010326c 0460
.org 0x10326e
	adds r0, #4	@ 0010326e 0430
.org 0x103270
	str r4, [r0, #0]	@ 00103270 0460
.org 0x103272
	adds r0, #4	@ 00103272 0430
.org 0x103274
	strb r4, [r0, #0]	@ 00103274 0470
.org 0x103276
	ldrb r1, [r6, #10]	@ 00103276 b17a
.org 0x103278
	movs r0, #251	@ 00103278 fb20
.org 0x10327a
	ands r0, r1	@ 0010327a 0840
.org 0x10327c
	strb r0, [r6, #10]	@ 0010327c b072
.org 0x10327e
	movs r0, #255	@ 0010327e ff20
.org 0x103280
	strb r0, [r6, #18]	@ 00103280 b074
.org 0x103282
	ldrb r0, [r6, #14]	@ 00103282 b07b
.org 0x103284
	adds r0, #1	@ 00103284 0130
.org 0x103286
	strb r0, [r6, #14]	@ 00103286 b073
.org 0x103288
	adds r0, r6, #0	@ 00103288 301c
.org 0x10328a
	adds r0, #115	@ 0010328a 7330
.org 0x10328c
	ldrb r3, [r0, #0]	@ 0010328c 0378
.org 0x10328e
	cmp r3, #3	@ 0010328e 032b
.org 0x103290
	bne.n 0x1032cc	@ 00103290 1cd1
.org 0x103292
	movs r0, #0	@ 00103292 0020
.org 0x103294
	strb r0, [r6, #18]	@ 00103294 b074
.org 0x103296
	strb r0, [r6, #19]	@ 00103296 f074
.org 0x103298
	ldrb r2, [r6, #16]	@ 00103298 327c
.org 0x10329a
	cmp r2, #0	@ 0010329a 002a
.org 0x10329c
	bne.n 0x1032b4	@ 0010329c 0ad1
.org 0x10329e
	adds r1, r6, #0	@ 0010329e 311c
.org 0x1032a0
	adds r1, #180	@ 001032a0 b431
.org 0x1032a2
	ldrb r0, [r1, #0]	@ 001032a2 0878
.org 0x1032a4
	cmp r0, #3	@ 001032a4 0328
.org 0x1032a6
	bne.n 0x1032b0	@ 001032a6 03d1
.org 0x1032a8
	strb r2, [r1, #0]	@ 001032a8 0a70
.org 0x1032aa
	b.n 0x1032c6	@ 001032aa 0ce0
.org 0x1032ac
	.byte 0xf8,0xbc,0x86,0x08	@ 001032ac data
.org 0x1032b0
	adds r0, #1	@ 001032b0 0130
.org 0x1032b2
	b.n 0x1032c4	@ 001032b2 07e0
.org 0x1032b4
	adds r1, r6, #0	@ 001032b4 311c
.org 0x1032b6
	adds r1, #180	@ 001032b6 b431
.org 0x1032b8
	ldrb r0, [r1, #0]	@ 001032b8 0878
.org 0x1032ba
	cmp r0, #0	@ 001032ba 0028
.org 0x1032bc
	bne.n 0x1032c2	@ 001032bc 01d1
.org 0x1032be
	strb r3, [r1, #0]	@ 001032be 0b70
.org 0x1032c0
	b.n 0x1032c6	@ 001032c0 01e0
.org 0x1032c2
	subs r0, #1	@ 001032c2 0138
.org 0x1032c4
	strb r0, [r1, #0]	@ 001032c4 0870
.org 0x1032c6
	movs r0, #0	@ 001032c6 0020
.org 0x1032c8
	strb r0, [r6, #14]	@ 001032c8 b073
.org 0x1032ca
	b.n 0x1032e6	@ 001032ca 0ce0
.org 0x1032cc
	ldrb r0, [r6, #18]	@ 001032cc b07c
.org 0x1032ce
	cmp r0, #0	@ 001032ce 0028
.org 0x1032d0
	beq.n 0x1032d6	@ 001032d0 01d0
.org 0x1032d2
	subs r0, #1	@ 001032d2 0138
.org 0x1032d4
	strb r0, [r6, #18]	@ 001032d4 b074
.org 0x1032d6
	ldr r0, [pc, #20]	@ 001032d6 0548
.org 0x1032d8
	ldr r1, [pc, #20]	@ 001032d8 0549
.org 0x1032da
	adds r0, r0, r1	@ 001032da 4018
.org 0x1032dc
	ldrb r0, [r0, #0]	@ 001032dc 0078
.org 0x1032de
	strb r0, [r6, #19]	@ 001032de f074
