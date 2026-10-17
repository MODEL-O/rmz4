@ FUN_080b9200  entry 0x080b9200  size 278
.thumb
.org 0xb9200
FUN_080b9200:
	push {r4, r5, r6, r7, lr}	@ 000b9200 f0b5
.org 0xb9202
	mov r7, r9	@ 000b9202 4f46
.org 0xb9204
	mov r6, r8	@ 000b9204 4646
.org 0xb9206
	push {r6, r7}	@ 000b9206 c0b4
.org 0xb9208
	sub sp, #92	@ 000b9208 97b0
.org 0xb920a
	adds r4, r0, #0	@ 000b920a 041c
.org 0xb920c
	mov r1, sp	@ 000b920c 6946
.org 0xb920e
	ldr r0, [pc, #264]	@ 000b920e 4248
.org 0xb9210
	ldmia r0!, {r2, r3, r5}	@ 000b9210 2cc8
.org 0xb9212
	stmia r1!, {r2, r3, r5}	@ 000b9212 2cc1
.org 0xb9214
	ldmia r0!, {r2, r3, r5}	@ 000b9214 2cc8
.org 0xb9216
	stmia r1!, {r2, r3, r5}	@ 000b9216 2cc1
.org 0xb9218
	ldr r0, [r0, #0]	@ 000b9218 0068
.org 0xb921a
	str r0, [r1, #0]	@ 000b921a 0860
.org 0xb921c
	add r0, sp, #28	@ 000b921c 07a8
.org 0xb921e
	mov r8, r0	@ 000b921e 8046
.org 0xb9220
	ldr r1, [pc, #248]	@ 000b9220 3e49
.org 0xb9222
	movs r2, #56	@ 000b9222 3822
.org 0xb9224
	bl 0x129258	@ 000b9224 70f018f8
.org 0xb9228
	ldr r2, [r4, #40]	@ 000b9228 a26a
.org 0xb922a
	mov r9, r2	@ 000b922a 9146
.org 0xb922c
	ldrb r0, [r4, #10]	@ 000b922c a07a
.org 0xb922e
	lsrs r7, r0, #4	@ 000b922e 0709
.org 0xb9230
	movs r0, #1	@ 000b9230 0120
.org 0xb9232
	ands r7, r0	@ 000b9232 0740
.org 0xb9234
	ldrb r0, [r4, #15]	@ 000b9234 e07b
.org 0xb9236
	cmp r0, #0	@ 000b9236 0028
.org 0xb9238
	bne.n 0xb9256	@ 000b9238 0dd1
.org 0xb923a
	adds r0, r4, #0	@ 000b923a 201c
.org 0xb923c
	adds r0, #116	@ 000b923c 7430
.org 0xb923e
	ldr r1, [pc, #224]	@ 000b923e 3849
.org 0xb9240
	bl 0x5784	@ 000b9240 4cf7a0fa
.org 0xb9244
	ldr r1, [pc, #220]	@ 000b9244 3749
.org 0xb9246
	adds r0, r4, #0	@ 000b9246 201c
.org 0xb9248
	bl 0x1cf00	@ 000b9248 63f75afe
.org 0xb924c
	movs r0, #70	@ 000b924c 4620
.org 0xb924e
	str r0, [r4, #100]	@ 000b924e 6066
.org 0xb9250
	ldrb r0, [r4, #15]	@ 000b9250 e07b
.org 0xb9252
	adds r0, #1	@ 000b9252 0130
.org 0xb9254
	strb r0, [r4, #15]	@ 000b9254 e073
.org 0xb9256
	ldr r5, [r4, #100]	@ 000b9256 656e
.org 0xb9258
	adds r0, r5, #0	@ 000b9258 281c
.org 0xb925a
	movs r1, #10	@ 000b925a 0a21
.org 0xb925c
	bl 0x128fb8	@ 000b925c 6ff0acfe
.org 0xb9260
	movs r1, #7	@ 000b9260 0721
.org 0xb9262
	subs r1, r1, r0	@ 000b9262 091a
.org 0xb9264
	lsls r1, r1, #24	@ 000b9264 0906
.org 0xb9266
	lsrs r6, r1, #24	@ 000b9266 0e0e
.org 0xb9268
	cmp r6, #6	@ 000b9268 062e
.org 0xb926a
	bls.n 0xb926e	@ 000b926a 00d9
.org 0xb926c
	movs r6, #6	@ 000b926c 0626
.org 0xb926e
	adds r0, r5, #0	@ 000b926e 281c
.org 0xb9270
	movs r1, #10	@ 000b9270 0a21
.org 0xb9272
	bl 0x129050	@ 000b9272 6ff0edfe
.org 0xb9276
	cmp r0, #0	@ 000b9276 0028
.org 0xb9278
	bne.n 0xb9286	@ 000b9278 05d1
.org 0xb927a
	lsls r0, r6, #2	@ 000b927a b000
.org 0xb927c
	add r0, sp	@ 000b927c 6844
.org 0xb927e
	ldrh r1, [r0, #0]	@ 000b927e 0188
.org 0xb9280
	adds r0, r4, #0	@ 000b9280 201c
.org 0xb9282
	bl 0x1cf00	@ 000b9282 63f73dfe
.org 0xb9286
	ldr r0, [r4, #100]	@ 000b9286 606e
.org 0xb9288
	movs r1, #3	@ 000b9288 0321
.org 0xb928a
	ands r0, r1	@ 000b928a 0840
.org 0xb928c
	cmp r0, #0	@ 000b928c 0028
.org 0xb928e
	bne.n 0xb92f0	@ 000b928e 2fd1
.org 0xb9290
	movs r0, #158	@ 000b9290 9e20
.org 0xb9292
	lsls r0, r0, #1	@ 000b9292 4000
.org 0xb9294
	bl 0x2b10	@ 000b9294 49f73cfc
.org 0xb9298
	ldr r1, [r4, #100]	@ 000b9298 616e
.org 0xb929a
	lsls r0, r1, #4	@ 000b929a 0801
.org 0xb929c
	subs r0, r0, r1	@ 000b929c 401a
.org 0xb929e
	lsls r0, r0, #2	@ 000b929e 8000
.org 0xb92a0
	movs r1, #70	@ 000b92a0 4621
.org 0xb92a2
	bl 0x128fb8	@ 000b92a2 6ff089fe
.org 0xb92a6
	adds r0, #150	@ 000b92a6 9630
.org 0xb92a8
	lsls r0, r0, #8	@ 000b92a8 0002
.org 0xb92aa
	movs r1, #180	@ 000b92aa b421
.org 0xb92ac
	lsls r1, r1, #1	@ 000b92ac 4900
.org 0xb92ae
	bl 0x128fb8	@ 000b92ae 6ff083fe
.org 0xb92b2
	adds r2, r0, #0	@ 000b92b2 021c
.org 0xb92b4
	lsls r2, r2, #24	@ 000b92b4 1206
.org 0xb92b6
	lsrs r2, r2, #24	@ 000b92b6 120e
.org 0xb92b8
	movs r0, #160	@ 000b92b8 a020
.org 0xb92ba
	lsls r0, r0, #1	@ 000b92ba 4000
.org 0xb92bc
	subs r0, r0, r2	@ 000b92bc 801a
.org 0xb92be
	lsls r1, r7, #1	@ 000b92be 7900
.org 0xb92c0
	muls r0, r1	@ 000b92c0 4843
.org 0xb92c2
	adds r2, r2, r0	@ 000b92c2 1218
.org 0xb92c4
	lsls r2, r2, #24	@ 000b92c4 1206
.org 0xb92c6
	lsrs r2, r2, #24	@ 000b92c6 120e
.org 0xb92c8
	lsls r3, r6, #3	@ 000b92c8 f300
.org 0xb92ca
	mov r5, r8	@ 000b92ca 4546
.org 0xb92cc
	adds r0, r5, r3	@ 000b92cc e818
.org 0xb92ce
	subs r1, #1	@ 000b92ce 0139
.org 0xb92d0
	ldr r0, [r0, #0]	@ 000b92d0 0068
.org 0xb92d2
	muls r1, r0	@ 000b92d2 4143
.org 0xb92d4
	ldr r0, [r4, #84]	@ 000b92d4 606d
.org 0xb92d6
	adds r0, r0, r1	@ 000b92d6 4018
.org 0xb92d8
	str r0, [sp, #84]	@ 000b92d8 1590
.org 0xb92da
	add r0, sp, #32	@ 000b92da 08a8
.org 0xb92dc
	adds r0, r0, r3	@ 000b92dc c018
.org 0xb92de
	ldr r3, [r4, #88]	@ 000b92de a36d
.org 0xb92e0
	ldr r0, [r0, #0]	@ 000b92e0 0068
.org 0xb92e2
	adds r3, r3, r0	@ 000b92e2 1b18
.org 0xb92e4
	add r1, sp, #84	@ 000b92e4 15a9
.org 0xb92e6
	str r3, [r1, #4]	@ 000b92e6 4b60
.org 0xb92e8
	mov r0, r9	@ 000b92e8 4846
.org 0xb92ea
	movs r3, #0	@ 000b92ea 0023
.org 0xb92ec
	bl 0xcfcf8	@ 000b92ec 16f004fd
.org 0xb92f0
	adds r0, r4, #0	@ 000b92f0 201c
.org 0xb92f2
	bl 0x1cff0	@ 000b92f2 63f77dfe
.org 0xb92f6
	ldr r0, [r4, #100]	@ 000b92f6 606e
.org 0xb92f8
	subs r1, r0, #1	@ 000b92f8 411e
.org 0xb92fa
	str r1, [r4, #100]	@ 000b92fa 6166
.org 0xb92fc
	cmp r1, #0	@ 000b92fc 0029
.org 0xb92fe
	bne.n 0xb9308	@ 000b92fe 03d1
.org 0xb9300
	movs r0, #5	@ 000b9300 0520
.org 0xb9302
	strb r0, [r4, #13]	@ 000b9302 6073
.org 0xb9304
	strb r1, [r4, #14]	@ 000b9304 a173
.org 0xb9306
	strb r1, [r4, #15]	@ 000b9306 e173
.org 0xb9308
	add sp, #92	@ 000b9308 17b0
.org 0xb930a
	pop {r3, r4}	@ 000b930a 18bc
.org 0xb930c
	mov r8, r3	@ 000b930c 9846
.org 0xb930e
	mov r9, r4	@ 000b930e a146
.org 0xb9310
	pop {r4, r5, r6, r7}	@ 000b9310 f0bc
.org 0xb9312
	pop {r0}	@ 000b9312 01bc
.org 0xb9314
	bx r0	@ 000b9314 0047
