@ FUN_08071210  entry 0x08071210  size 376
.thumb
.org 0x71210
FUN_08071210:
	push {r4, r5, r6, r7, lr}	@ 00071210 f0b5
.org 0x71212
	mov r7, r8	@ 00071212 4746
.org 0x71214
	push {r7}	@ 00071214 80b4
.org 0x71216
	sub sp, #8	@ 00071216 82b0
.org 0x71218
	adds r6, r0, #0	@ 00071218 061c
.org 0x7121a
	ldr r1, [pc, #176]	@ 0007121a 2c49
.org 0x7121c
	mov r0, sp	@ 0007121c 6846
.org 0x7121e
	movs r2, #6	@ 0007121e 0622
.org 0x71220
	bl 0x129258	@ 00071220 b8f01af8
.org 0x71224
	ldrb r0, [r6, #10]	@ 00071224 b07a
.org 0x71226
	lsrs r7, r0, #4	@ 00071226 0709
.org 0x71228
	movs r0, #1	@ 00071228 0120
.org 0x7122a
	ands r7, r0	@ 0007122a 0740
.org 0x7122c
	movs r0, #0	@ 0007122c 0020
.org 0x7122e
	mov r8, r0	@ 0007122e 8046
.org 0x71230
	adds r0, r6, #0	@ 00071230 301c
.org 0x71232
	adds r0, #195	@ 00071232 c330
.org 0x71234
	ldrb r4, [r0, #0]	@ 00071234 0478
.org 0x71236
	ldrb r0, [r6, #15]	@ 00071236 f07b
.org 0x71238
	cmp r0, #0	@ 00071238 0028
.org 0x7123a
	bne.n 0x71258	@ 0007123a 0dd1
.org 0x7123c
	adds r0, r6, #0	@ 0007123c 301c
.org 0x7123e
	movs r1, #6	@ 0007123e 0621
.org 0x71240
	bl 0x736c4	@ 00071240 02f040fa
.org 0x71244
	mov r1, r8	@ 00071244 4146
.org 0x71246
	str r1, [r6, #96]	@ 00071246 3166
.org 0x71248
	lsls r0, r4, #1	@ 00071248 6000
.org 0x7124a
	add r0, sp	@ 0007124a 6844
.org 0x7124c
	movs r1, #0	@ 0007124c 0021
.org 0x7124e
	ldrsh r0, [r0, r1]	@ 0007124e 405e
.org 0x71250
	str r0, [r6, #104]	@ 00071250 b066
.org 0x71252
	ldrb r0, [r6, #15]	@ 00071252 f07b
.org 0x71254
	adds r0, #1	@ 00071254 0130
.org 0x71256
	strb r0, [r6, #15]	@ 00071256 f073
.org 0x71258
	adds r0, r6, #0	@ 00071258 301c
.org 0x7125a
	bl 0x1cff0	@ 0007125a abf7c9fe
.org 0x7125e
	adds r0, r6, #0	@ 0007125e 301c
.org 0x71260
	adds r0, #116	@ 00071260 7430
.org 0x71262
	ldr r4, [pc, #108]	@ 00071262 1b4c
.org 0x71264
	ldr r3, [pc, #108]	@ 00071264 1b4b
.org 0x71266
	adds r1, r6, #0	@ 00071266 311c
.org 0x71268
	adds r1, #184	@ 00071268 b831
.org 0x7126a
	ldrb r2, [r1, #0]	@ 0007126a 0a78
.org 0x7126c
	lsls r1, r2, #1	@ 0007126c 5100
.org 0x7126e
	adds r1, r1, r3	@ 0007126e c918
.org 0x71270
	ldrh r1, [r1, #0]	@ 00071270 0988
.org 0x71272
	lsls r1, r1, #2	@ 00071272 8900
.org 0x71274
	adds r1, r1, r4	@ 00071274 0919
.org 0x71276
	adds r3, r6, #0	@ 00071276 331c
.org 0x71278
	adds r3, #113	@ 00071278 7133
.org 0x7127a
	movs r5, #0	@ 0007127a 0025
.org 0x7127c
	ldrsb r5, [r3, r5]	@ 0007127c 5d57
.org 0x7127e
	ldr r1, [r1, #0]	@ 0007127e 0968
.org 0x71280
	lsls r3, r5, #2	@ 00071280 ab00
.org 0x71282
	adds r3, r3, r1	@ 00071282 5b18
.org 0x71284
	ldr r4, [pc, #80]	@ 00071284 144c
.org 0x71286
	adds r1, r6, #0	@ 00071286 311c
.org 0x71288
	adds r1, #185	@ 00071288 b931
.org 0x7128a
	ldrb r1, [r1, #0]	@ 0007128a 0978
.org 0x7128c
	lsls r1, r1, #2	@ 0007128c 8900
.org 0x7128e
	adds r1, r1, r4	@ 0007128e 0919
.org 0x71290
	ldr r1, [r1, #0]	@ 00071290 0968
.org 0x71292
	lsls r2, r2, #2	@ 00071292 9200
.org 0x71294
	adds r2, r2, r1	@ 00071294 5218
.org 0x71296
	ldr r1, [r2, #0]	@ 00071296 1168
.org 0x71298
	adds r1, r1, r5	@ 00071298 4919
.org 0x7129a
	ldrb r1, [r1, #0]	@ 0007129a 0978
.org 0x7129c
	lsls r2, r1, #1	@ 0007129c 4a00
.org 0x7129e
	adds r2, r2, r1	@ 0007129e 5218
.org 0x712a0
	lsls r2, r2, #3	@ 000712a0 d200
.org 0x712a2
	ldr r1, [r3, #0]	@ 000712a2 1968
.org 0x712a4
	adds r1, r1, r2	@ 000712a4 8918
.org 0x712a6
	bl 0x5784	@ 000712a6 94f76dfa
.org 0x712aa
	ldr r0, [r6, #88]	@ 000712aa b06d
.org 0x712ac
	ldr r1, [r6, #96]	@ 000712ac 316e
.org 0x712ae
	adds r0, r0, r1	@ 000712ae 4018
.org 0x712b0
	str r0, [r6, #88]	@ 000712b0 b065
.org 0x712b2
	adds r0, r6, #0	@ 000712b2 301c
.org 0x712b4
	bl 0x73850	@ 000712b4 02f0ccfa
.org 0x712b8
	cmp r0, #0	@ 000712b8 0028
.org 0x712ba
	beq.n 0x712dc	@ 000712ba 0fd0
.org 0x712bc
	adds r0, r6, #0	@ 000712bc 301c
.org 0x712be
	bl 0x73a68	@ 000712be 02f0d3fb
.org 0x712c2
	mov r0, r8	@ 000712c2 4046
.org 0x712c4
	str r0, [r6, #96]	@ 000712c4 3066
.org 0x712c6
	movs r1, #1	@ 000712c6 0121
.org 0x712c8
	mov r8, r1	@ 000712c8 8846
.org 0x712ca
	b.n 0x712ee	@ 000712ca 10e0
.org 0x712cc
	.byte 0x5c,0x99,0x12,0x08	@ 000712cc data
.org 0x712d0
	.byte 0x08,0xcb,0x85,0x08	@ 000712d0 data
.org 0x712d4
	.byte 0x04,0xcc,0x85,0x08	@ 000712d4 data
.org 0x712d8
	.byte 0xfc,0xcb,0x85,0x08	@ 000712d8 data
.org 0x712dc
	ldr r0, [r6, #96]	@ 000712dc 306e
.org 0x712de
	ldr r1, [r6, #104]	@ 000712de b16e
.org 0x712e0
	adds r0, r0, r1	@ 000712e0 4018
.org 0x712e2
	str r0, [r6, #96]	@ 000712e2 3066
.org 0x712e4
	movs r1, #224	@ 000712e4 e021
.org 0x712e6
	lsls r1, r1, #3	@ 000712e6 c900
.org 0x712e8
	cmp r0, r1	@ 000712e8 8842
.org 0x712ea
	ble.n 0x712ee	@ 000712ea 00dd
.org 0x712ec
	str r1, [r6, #96]	@ 000712ec 3166
.org 0x712ee
	ldr r0, [r6, #84]	@ 000712ee 706d
.org 0x712f0
	ldr r1, [r6, #92]	@ 000712f0 f16d
.org 0x712f2
	adds r0, r0, r1	@ 000712f2 4018
.org 0x712f4
	str r0, [r6, #84]	@ 000712f4 7065
.org 0x712f6
	cmp r7, #0	@ 000712f6 002f
.org 0x712f8
	bne.n 0x7132c	@ 000712f8 18d1
.org 0x712fa
	adds r0, r6, #0	@ 000712fa 301c
.org 0x712fc
	bl 0x7371c	@ 000712fc 02f00efa
.org 0x71300
	cmp r0, #0	@ 00071300 0028
.org 0x71302
	beq.n 0x7137c	@ 00071302 3bd0
.org 0x71304
	adds r0, r6, #0	@ 00071304 301c
.org 0x71306
	bl 0x738b4	@ 00071306 02f0d5fa
.org 0x7130a
	movs r7, #1	@ 0007130a 0127
.org 0x7130c
	adds r0, r6, #0	@ 0007130c 301c
.org 0x7130e
	adds r0, #76	@ 0007130e 4c30
.org 0x71310
	strb r7, [r0, #0]	@ 00071310 0770
.org 0x71312
	adds r2, r6, #0	@ 00071312 321c
.org 0x71314
	adds r2, #74	@ 00071314 4a32
.org 0x71316
	ldrb r1, [r2, #0]	@ 00071316 1178
.org 0x71318
	movs r0, #17	@ 00071318 1120
.org 0x7131a
	negs r0, r0	@ 0007131a 4042
.org 0x7131c
	ands r0, r1	@ 0007131c 0840
.org 0x7131e
	movs r1, #16	@ 0007131e 1021
.org 0x71320
	orrs r0, r1	@ 00071320 0843
.org 0x71322
	strb r0, [r2, #0]	@ 00071322 1070
.org 0x71324
	ldrb r0, [r6, #10]	@ 00071324 b07a
.org 0x71326
	orrs r1, r0	@ 00071326 0143
.org 0x71328
	strb r1, [r6, #10]	@ 00071328 b172
.org 0x7132a
	b.n 0x71376	@ 0007132a 24e0
.org 0x7132c
	adds r0, r6, #0	@ 0007132c 301c
.org 0x7132e
	bl 0x73784	@ 0007132e 02f029fa
.org 0x71332
	cmp r0, #0	@ 00071332 0028
.org 0x71334
	beq.n 0x7137c	@ 00071334 22d0
.org 0x71336
	adds r0, r6, #0	@ 00071336 301c
.org 0x71338
	bl 0x73940	@ 00071338 02f002fb
.org 0x7133c
	adds r7, #1	@ 0007133c 0137
.org 0x7133e
	movs r0, #1	@ 0007133e 0120
.org 0x71340
	ands r7, r0	@ 00071340 0740
.org 0x71342
	movs r3, #1	@ 00071342 0123
.org 0x71344
	adds r1, r7, #0	@ 00071344 391c
.org 0x71346
	ands r1, r3	@ 00071346 1940
.org 0x71348
	adds r0, r6, #0	@ 00071348 301c
.org 0x7134a
	adds r0, #76	@ 0007134a 4c30
.org 0x7134c
	strb r1, [r0, #0]	@ 0007134c 0170
.org 0x7134e
	adds r4, r6, #0	@ 0007134e 341c
.org 0x71350
	adds r4, #74	@ 00071350 4a34
.org 0x71352
	lsls r1, r1, #4	@ 00071352 0901
.org 0x71354
	ldrb r2, [r4, #0]	@ 00071354 2278
.org 0x71356
	movs r0, #17	@ 00071356 1120
.org 0x71358
	negs r0, r0	@ 00071358 4042
.org 0x7135a
	ands r0, r2	@ 0007135a 1040
.org 0x7135c
	orrs r0, r1	@ 0007135c 0843
.org 0x7135e
	strb r0, [r4, #0]	@ 0007135e 2070
.org 0x71360
	ands r7, r3	@ 00071360 1f40
.org 0x71362
	cmp r7, #0	@ 00071362 002f
.org 0x71364
	beq.n 0x7136e	@ 00071364 03d0
.org 0x71366
	ldrb r0, [r6, #10]	@ 00071366 b07a
.org 0x71368
	movs r1, #16	@ 00071368 1021
.org 0x7136a
	orrs r0, r1	@ 0007136a 0843
.org 0x7136c
	b.n 0x71374	@ 0007136c 02e0
.org 0x7136e
	ldrb r1, [r6, #10]	@ 0007136e b17a
.org 0x71370
	movs r0, #239	@ 00071370 ef20
.org 0x71372
	ands r0, r1	@ 00071372 0840
.org 0x71374
	strb r0, [r6, #10]	@ 00071374 b072
.org 0x71376
	ldr r0, [r6, #92]	@ 00071376 f06d
.org 0x71378
	negs r0, r0	@ 00071378 4042
.org 0x7137a
	str r0, [r6, #92]	@ 0007137a f065
.org 0x7137c
	mov r0, r8	@ 0007137c 4046
.org 0x7137e
	cmp r0, #0	@ 0007137e 0028
.org 0x71380
	beq.n 0x7138c	@ 00071380 04d0
.org 0x71382
	ldrb r0, [r6, #14]	@ 00071382 b07b
.org 0x71384
	adds r0, #1	@ 00071384 0130
.org 0x71386
	movs r1, #0	@ 00071386 0021
