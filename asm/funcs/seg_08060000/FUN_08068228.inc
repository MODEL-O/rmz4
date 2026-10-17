@ FUN_08068228  entry 0x08068228  size 210
.thumb
.org 0x68228
FUN_08068228:
	push {r4, r5, r6, r7, lr}	@ 00068228 f0b5
.org 0x6822a
	sub sp, #8	@ 0006822a 82b0
.org 0x6822c
	adds r6, r0, #0	@ 0006822c 061c
.org 0x6822e
	ldrb r7, [r6, #14]	@ 0006822e b77b
.org 0x68230
	cmp r7, #0	@ 00068230 002f
.org 0x68232
	bne.n 0x682d6	@ 00068232 50d1
.org 0x68234
	ldr r1, [pc, #196]	@ 00068234 3149
.org 0x68236
	bl 0x1cf00	@ 00068236 b4f763fe
.org 0x6823a
	adds r0, r6, #0	@ 0006823a 301c
.org 0x6823c
	adds r0, #116	@ 0006823c 7430
.org 0x6823e
	ldr r1, [pc, #192]	@ 0006823e 3049
.org 0x68240
	bl 0x5784	@ 00068240 9df7a0fa
.org 0x68244
	ldr r1, [r6, #88]	@ 00068244 b16d
.org 0x68246
	ldr r2, [pc, #188]	@ 00068246 2f4a
.org 0x68248
	adds r0, r1, r2	@ 00068248 8818
.org 0x6824a
	str r0, [r6, #88]	@ 0006824a b065
.org 0x6824c
	ldr r0, [r6, #84]	@ 0006824c 706d
.org 0x6824e
	ldr r2, [pc, #184]	@ 0006824e 2e4a
.org 0x68250
	adds r0, r0, r2	@ 00068250 8018
.org 0x68252
	str r0, [sp, #0]	@ 00068252 0090
.org 0x68254
	movs r0, #176	@ 00068254 b020
.org 0x68256
	lsls r0, r0, #4	@ 00068256 0001
.org 0x68258
	adds r1, r1, r0	@ 00068258 0918
.org 0x6825a
	str r1, [sp, #4]	@ 0006825a 0191
.org 0x6825c
	adds r0, r6, #0	@ 0006825c 301c
.org 0x6825e
	mov r1, sp	@ 0006825e 6946
.org 0x68260
	movs r2, #1	@ 00068260 0122
.org 0x68262
	movs r3, #1	@ 00068262 0123
.org 0x68264
	bl 0x9cd78	@ 00068264 34f088fd
.org 0x68268
	adds r5, r6, #0	@ 00068268 351c
.org 0x6826a
	adds r5, #180	@ 0006826a b435
.org 0x6826c
	str r0, [r5, #32]	@ 0006826c 2862
.org 0x6826e
	ldr r0, [r6, #84]	@ 0006826e 706d
.org 0x68270
	movs r1, #152	@ 00068270 9821
.org 0x68272
	lsls r1, r1, #5	@ 00068272 4901
.org 0x68274
	adds r0, r0, r1	@ 00068274 4018
.org 0x68276
	str r0, [sp, #0]	@ 00068276 0090
.org 0x68278
	ldr r0, [r6, #88]	@ 00068278 b06d
.org 0x6827a
	movs r2, #156	@ 0006827a 9c22
.org 0x6827c
	lsls r2, r2, #6	@ 0006827c 9201
.org 0x6827e
	adds r0, r0, r2	@ 0006827e 8018
.org 0x68280
	str r0, [sp, #4]	@ 00068280 0190
.org 0x68282
	adds r0, r6, #0	@ 00068282 301c
.org 0x68284
	mov r1, sp	@ 00068284 6946
.org 0x68286
	movs r2, #1	@ 00068286 0122
.org 0x68288
	movs r3, #0	@ 00068288 0023
.org 0x6828a
	bl 0x9cd78	@ 0006828a 34f075fd
.org 0x6828e
	ldr r0, [r6, #84]	@ 0006828e 706d
.org 0x68290
	ldr r1, [pc, #120]	@ 00068290 1e49
.org 0x68292
	adds r0, r0, r1	@ 00068292 4018
.org 0x68294
	str r0, [sp, #0]	@ 00068294 0090
.org 0x68296
	ldr r0, [r6, #88]	@ 00068296 b06d
.org 0x68298
	ldr r4, [pc, #116]	@ 00068298 1d4c
.org 0x6829a
	adds r0, r0, r4	@ 0006829a 0019
.org 0x6829c
	str r0, [sp, #4]	@ 0006829c 0190
.org 0x6829e
	adds r0, r6, #0	@ 0006829e 301c
.org 0x682a0
	mov r1, sp	@ 000682a0 6946
.org 0x682a2
	movs r2, #0	@ 000682a2 0022
.org 0x682a4
	movs r3, #1	@ 000682a4 0123
.org 0x682a6
	bl 0x9cd78	@ 000682a6 34f067fd
.org 0x682aa
	str r0, [r5, #28]	@ 000682aa e861
.org 0x682ac
	ldr r0, [r6, #84]	@ 000682ac 706d
.org 0x682ae
	movs r2, #148	@ 000682ae 9422
.org 0x682b0
	lsls r2, r2, #6	@ 000682b0 9201
.org 0x682b2
	adds r0, r0, r2	@ 000682b2 8018
.org 0x682b4
	str r0, [sp, #0]	@ 000682b4 0090
.org 0x682b6
	ldr r0, [r6, #88]	@ 000682b6 b06d
.org 0x682b8
	adds r0, r0, r4	@ 000682b8 0019
.org 0x682ba
	str r0, [sp, #4]	@ 000682ba 0190
.org 0x682bc
	adds r0, r6, #0	@ 000682bc 301c
.org 0x682be
	mov r1, sp	@ 000682be 6946
.org 0x682c0
	movs r2, #0	@ 000682c0 0022
.org 0x682c2
	movs r3, #0	@ 000682c2 0023
.org 0x682c4
	bl 0x9cd78	@ 000682c4 34f058fd
.org 0x682c8
	movs r0, #102	@ 000682c8 6620
.org 0x682ca
	bl 0x2b10	@ 000682ca 9af721fc
.org 0x682ce
	strb r7, [r6, #15]	@ 000682ce f773
.org 0x682d0
	ldrb r0, [r6, #14]	@ 000682d0 b07b
.org 0x682d2
	adds r0, #1	@ 000682d2 0130
.org 0x682d4
	strb r0, [r6, #14]	@ 000682d4 b073
.org 0x682d6
	adds r0, r6, #0	@ 000682d6 301c
.org 0x682d8
	bl 0x1cff0	@ 000682d8 b4f78afe
.org 0x682dc
	adds r0, r6, #0	@ 000682dc 301c
.org 0x682de
	adds r0, #180	@ 000682de b430
.org 0x682e0
	ldr r0, [r0, #28]	@ 000682e0 c069
.org 0x682e2
	ldrb r0, [r0, #13]	@ 000682e2 407b
.org 0x682e4
	cmp r0, #6	@ 000682e4 0628
.org 0x682e6
	bls.n 0x682f2	@ 000682e6 04d9
.org 0x682e8
	movs r1, #0	@ 000682e8 0021
.org 0x682ea
	movs r0, #30	@ 000682ea 1e20
.org 0x682ec
	strb r0, [r6, #13]	@ 000682ec 7073
.org 0x682ee
	strb r1, [r6, #14]	@ 000682ee b173
.org 0x682f0
	strb r1, [r6, #15]	@ 000682f0 f173
.org 0x682f2
	add sp, #8	@ 000682f2 02b0
.org 0x682f4
	pop {r4, r5, r6, r7}	@ 000682f4 f0bc
.org 0x682f6
	pop {r0}	@ 000682f6 01bc
.org 0x682f8
	bx r0	@ 000682f8 0047
