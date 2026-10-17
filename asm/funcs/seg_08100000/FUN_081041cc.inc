@ FUN_081041cc  entry 0x081041cc  size 370
.thumb
.org 0x1041cc
FUN_081041cc:
	push {r4, r5, r6, r7, lr}	@ 001041cc f0b5
.org 0x1041ce
	mov r7, r9	@ 001041ce 4f46
.org 0x1041d0
	mov r6, r8	@ 001041d0 4646
.org 0x1041d2
	push {r6, r7}	@ 001041d2 c0b4
.org 0x1041d4
	adds r5, r0, #0	@ 001041d4 051c
.org 0x1041d6
	ldrb r0, [r5, #19]	@ 001041d6 e87c
.org 0x1041d8
	cmp r0, #0	@ 001041d8 0028
.org 0x1041da
	beq.n 0x1041e6	@ 001041da 04d0
.org 0x1041dc
	subs r0, #1	@ 001041dc 0138
.org 0x1041de
	strb r0, [r5, #19]	@ 001041de e874
.org 0x1041e0
	adds r7, r5, #0	@ 001041e0 2f1c
.org 0x1041e2
	adds r7, #180	@ 001041e2 b437
.org 0x1041e4
	b.n 0x104308	@ 001041e4 90e0
.org 0x1041e6
	ldrb r0, [r5, #18]	@ 001041e6 a87c
.org 0x1041e8
	cmp r0, #3	@ 001041e8 0328
.org 0x1041ea
	bhi.n 0x104280	@ 001041ea 49d8
.org 0x1041ec
	lsls r0, r0, #2	@ 001041ec 8000
.org 0x1041ee
	adds r1, r5, #0	@ 001041ee 291c
.org 0x1041f0
	adds r1, #180	@ 001041f0 b431
.org 0x1041f2
	adds r0, r1, r0	@ 001041f2 0818
.org 0x1041f4
	ldr r0, [r0, #0]	@ 001041f4 0068
.org 0x1041f6
	adds r7, r1, #0	@ 001041f6 0f1c
.org 0x1041f8
	cmp r0, #0	@ 001041f8 0028
.org 0x1041fa
	beq.n 0x1041fe	@ 001041fa 00d0
.org 0x1041fc
	b.n 0x104308	@ 001041fc 84e0
.org 0x1041fe
	ldr r4, [pc, #104]	@ 001041fe 1a4c
.org 0x104200
	ldr r6, [pc, #104]	@ 00104200 1a4e
.org 0x104202
	ldr r0, [r6, #0]	@ 00104202 3068
.org 0x104204
	ldr r1, [pc, #104]	@ 00104204 1a49
.org 0x104206
	mov r8, r1	@ 00104206 8846
.org 0x104208
	mov r1, r8	@ 00104208 4146
.org 0x10420a
	muls r1, r0	@ 0010420a 4143
.org 0x10420c
	adds r0, r1, #0	@ 0010420c 081c
.org 0x10420e
	ldr r1, [pc, #100]	@ 0010420e 1949
.org 0x104210
	adds r0, r0, r1	@ 00104210 4018
.org 0x104212
	lsls r0, r0, #1	@ 00104212 4000
.org 0x104214
	lsrs r1, r0, #1	@ 00104214 4108
.org 0x104216
	str r1, [r6, #0]	@ 00104216 3160
.org 0x104218
	lsrs r0, r0, #17	@ 00104218 400c
.org 0x10421a
	movs r1, #224	@ 0010421a e021
.org 0x10421c
	lsls r1, r1, #7	@ 0010421c c901
.org 0x10421e
	bl 0x129198	@ 0010421e 24f0bbff
.org 0x104222
	lsls r0, r0, #1	@ 00104222 4000
.org 0x104224
	ldr r1, [pc, #80]	@ 00104224 1449
.org 0x104226
	adds r0, r0, r1	@ 00104226 4018
.org 0x104228
	ldr r2, [r4, #56]	@ 00104228 a26b
.org 0x10422a
	adds r2, r2, r0	@ 0010422a 1218
.org 0x10422c
	ldr r1, [r4, #60]	@ 0010422c e16b
.org 0x10422e
	ldr r0, [pc, #76]	@ 0010422e 1348
.org 0x104230
	adds r1, r1, r0	@ 00104230 0918
.org 0x104232
	adds r0, r2, #0	@ 00104232 101c
.org 0x104234
	movs r2, #2	@ 00104234 0222
.org 0x104236
	bl 0x1040c0	@ 00104236 fff743ff
.org 0x10423a
	ldrb r1, [r5, #18]	@ 0010423a a97c
.org 0x10423c
	lsls r1, r1, #2	@ 0010423c 8900
.org 0x10423e
	adds r1, r7, r1	@ 0010423e 7918
.org 0x104240
	str r0, [r1, #0]	@ 00104240 0860
.org 0x104242
	cmp r0, #0	@ 00104242 0028
.org 0x104244
	beq.n 0x104308	@ 00104244 60d0
.org 0x104246
	ldr r0, [r6, #0]	@ 00104246 3068
.org 0x104248
	mov r1, r8	@ 00104248 4146
.org 0x10424a
	muls r1, r0	@ 0010424a 4143
.org 0x10424c
	adds r0, r1, #0	@ 0010424c 081c
.org 0x10424e
	ldr r1, [pc, #36]	@ 0010424e 0949
.org 0x104250
	adds r0, r0, r1	@ 00104250 4018
.org 0x104252
	lsls r0, r0, #1	@ 00104252 4000
.org 0x104254
	lsrs r1, r0, #1	@ 00104254 4108
.org 0x104256
	str r1, [r6, #0]	@ 00104256 3160
.org 0x104258
	lsrs r0, r0, #17	@ 00104258 400c
.org 0x10425a
	movs r1, #15	@ 0010425a 0f21
.org 0x10425c
	ands r0, r1	@ 0010425c 0840
.org 0x10425e
	adds r0, #8	@ 0010425e 0830
.org 0x104260
	strb r0, [r5, #19]	@ 00104260 e874
.org 0x104262
	ldrb r0, [r5, #18]	@ 00104262 a87c
.org 0x104264
	adds r0, #1	@ 00104264 0130
.org 0x104266
	b.n 0x104306	@ 00104266 4ee0
.org 0x104268
	.byte 0xf8,0xe9,0x02,0x02	@ 00104268 data
.org 0x10426c
	.byte 0x38,0xdc,0x02,0x02	@ 0010426c data
.org 0x104270
	.byte 0xfd,0x43,0x03,0x00	@ 00104270 data
.org 0x104274
	.byte 0xc3,0x9e,0x26,0x00	@ 00104274 data
.org 0x104278
	.byte 0x00,0x90,0xff,0xff	@ 00104278 data
.org 0x10427c
	.byte 0xff,0x6f,0x00,0x00	@ 0010427c data
.org 0x104280
	ldrb r0, [r5, #18]	@ 00104280 a87c
.org 0x104282
	lsls r0, r0, #2	@ 00104282 8000
.org 0x104284
	adds r0, r0, r5	@ 00104284 4019
.org 0x104286
	ldr r0, [r0, #76]	@ 00104286 c06c
.org 0x104288
	mov r8, r0	@ 00104288 8046
.org 0x10428a
	adds r7, r5, #0	@ 0010428a 2f1c
.org 0x10428c
	adds r7, #180	@ 0010428c b437
.org 0x10428e
	cmp r0, #0	@ 0010428e 0028
.org 0x104290
	bne.n 0x104308	@ 00104290 3ad1
.org 0x104292
	ldr r4, [pc, #196]	@ 00104292 314c
.org 0x104294
	ldr r6, [pc, #196]	@ 00104294 314e
.org 0x104296
	ldr r0, [r6, #0]	@ 00104296 3068
.org 0x104298
	ldr r1, [pc, #196]	@ 00104298 3149
.org 0x10429a
	mov r9, r1	@ 0010429a 8946
.org 0x10429c
	mov r1, r9	@ 0010429c 4946
.org 0x10429e
	muls r1, r0	@ 0010429e 4143
.org 0x1042a0
	adds r0, r1, #0	@ 001042a0 081c
.org 0x1042a2
	ldr r1, [pc, #192]	@ 001042a2 3049
.org 0x1042a4
	adds r0, r0, r1	@ 001042a4 4018
.org 0x1042a6
	lsls r0, r0, #1	@ 001042a6 4000
.org 0x1042a8
	lsrs r1, r0, #1	@ 001042a8 4108
.org 0x1042aa
	str r1, [r6, #0]	@ 001042aa 3160
.org 0x1042ac
	lsrs r0, r0, #17	@ 001042ac 400c
.org 0x1042ae
	movs r1, #224	@ 001042ae e021
.org 0x1042b0
	lsls r1, r1, #7	@ 001042b0 c901
.org 0x1042b2
	bl 0x129198	@ 001042b2 24f071ff
.org 0x1042b6
	lsls r0, r0, #1	@ 001042b6 4000
.org 0x1042b8
	ldr r1, [pc, #172]	@ 001042b8 2b49
.org 0x1042ba
	adds r0, r0, r1	@ 001042ba 4018
.org 0x1042bc
	ldr r2, [r4, #56]	@ 001042bc a26b
.org 0x1042be
	adds r2, r2, r0	@ 001042be 1218
.org 0x1042c0
	ldr r1, [r4, #60]	@ 001042c0 e16b
.org 0x1042c2
	ldr r0, [pc, #168]	@ 001042c2 2a48
.org 0x1042c4
	adds r1, r1, r0	@ 001042c4 0918
.org 0x1042c6
	adds r0, r2, #0	@ 001042c6 101c
.org 0x1042c8
	movs r2, #2	@ 001042c8 0222
.org 0x1042ca
	bl 0x1040c0	@ 001042ca fff7f9fe
.org 0x1042ce
	ldrb r1, [r5, #18]	@ 001042ce a97c
.org 0x1042d0
	lsls r1, r1, #2	@ 001042d0 8900
.org 0x1042d2
	adds r1, r1, r5	@ 001042d2 4919
.org 0x1042d4
	str r0, [r1, #76]	@ 001042d4 c864
.org 0x1042d6
	cmp r0, #0	@ 001042d6 0028
.org 0x1042d8
	beq.n 0x104308	@ 001042d8 16d0
.org 0x1042da
	ldr r0, [r6, #0]	@ 001042da 3068
.org 0x1042dc
	mov r1, r9	@ 001042dc 4946
.org 0x1042de
	muls r1, r0	@ 001042de 4143
.org 0x1042e0
	adds r0, r1, #0	@ 001042e0 081c
.org 0x1042e2
	ldr r1, [pc, #128]	@ 001042e2 2049
.org 0x1042e4
	adds r0, r0, r1	@ 001042e4 4018
.org 0x1042e6
	lsls r0, r0, #1	@ 001042e6 4000
.org 0x1042e8
	lsrs r1, r0, #1	@ 001042e8 4108
.org 0x1042ea
	str r1, [r6, #0]	@ 001042ea 3160
.org 0x1042ec
	lsrs r0, r0, #17	@ 001042ec 400c
.org 0x1042ee
	movs r1, #15	@ 001042ee 0f21
.org 0x1042f0
	ands r0, r1	@ 001042f0 0840
.org 0x1042f2
	adds r0, #8	@ 001042f2 0830
.org 0x1042f4
	strb r0, [r5, #19]	@ 001042f4 e874
.org 0x1042f6
	ldrb r0, [r5, #18]	@ 001042f6 a87c
.org 0x1042f8
	adds r0, #1	@ 001042f8 0130
.org 0x1042fa
	strb r0, [r5, #18]	@ 001042fa a874
.org 0x1042fc
	lsls r0, r0, #24	@ 001042fc 0006
.org 0x1042fe
	lsrs r0, r0, #24	@ 001042fe 000e
.org 0x104300
	cmp r0, #7	@ 00104300 0728
.org 0x104302
	bls.n 0x104308	@ 00104302 01d9
.org 0x104304
	mov r0, r8	@ 00104304 4046
.org 0x104306
	strb r0, [r5, #18]	@ 00104306 a874
.org 0x104308
	movs r3, #0	@ 00104308 0023
.org 0x10430a
	adds r1, r7, #0	@ 0010430a 391c
.org 0x10430c
	movs r4, #0	@ 0010430c 0024
.org 0x10430e
	lsls r0, r3, #2	@ 0010430e 9800
.org 0x104310
	adds r2, r1, r0	@ 00104310 0a18
.org 0x104312
	ldr r0, [r2, #0]	@ 00104312 1068
.org 0x104314
	cmp r0, #0	@ 00104314 0028
.org 0x104316
	beq.n 0x104320	@ 00104316 03d0
.org 0x104318
	ldrb r0, [r0, #12]	@ 00104318 007b
.org 0x10431a
	cmp r0, #2	@ 0010431a 0228
.org 0x10431c
	bls.n 0x104320	@ 0010431c 00d9
.org 0x10431e
	str r4, [r2, #0]	@ 0010431e 1460
.org 0x104320
	adds r0, r3, #1	@ 00104320 581c
.org 0x104322
	lsls r0, r0, #24	@ 00104322 0006
.org 0x104324
	lsrs r3, r0, #24	@ 00104324 030e
.org 0x104326
	cmp r3, #3	@ 00104326 032b
.org 0x104328
	bls.n 0x10430e	@ 00104328 f1d9
.org 0x10432a
	movs r3, #0	@ 0010432a 0023
.org 0x10432c
	movs r2, #0	@ 0010432c 0022
.org 0x10432e
	lsls r0, r3, #2	@ 0010432e 9800
.org 0x104330
	adds r1, r0, r5	@ 00104330 4119
.org 0x104332
	ldr r0, [r1, #92]	@ 00104332 c86d
.org 0x104334
	cmp r0, #0	@ 00104334 0028
.org 0x104336
	beq.n 0x104340	@ 00104336 03d0
.org 0x104338
	ldrb r0, [r0, #12]	@ 00104338 007b
.org 0x10433a
	cmp r0, #2	@ 0010433a 0228
.org 0x10433c
	bls.n 0x104340	@ 0010433c 00d9
