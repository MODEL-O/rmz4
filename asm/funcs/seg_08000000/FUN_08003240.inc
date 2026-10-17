@ FUN_08003240  entry 0x08003240  size 160
.thumb
.org 0x3240
FUN_08003240:
	push {r4, r5, r6, lr}	@ 00003240 70b5
.org 0x3242
	mov r6, sl	@ 00003242 5646
.org 0x3244
	mov r5, r9	@ 00003244 4d46
.org 0x3246
	mov r4, r8	@ 00003246 4446
.org 0x3248
	push {r4, r5, r6}	@ 00003248 70b4
.org 0x324a
	adds r4, r0, #0	@ 0000324a 041c
.org 0x324c
	mov sl, r1	@ 0000324c 8a46
.org 0x324e
	adds r5, r2, #0	@ 0000324e 151c
.org 0x3250
	adds r6, r3, #0	@ 00003250 1e1c
.org 0x3252
	lsls r5, r5, #24	@ 00003252 2d06
.org 0x3254
	lsrs r0, r5, #24	@ 00003254 280e
.org 0x3256
	mov r8, r0	@ 00003256 8046
.org 0x3258
	lsls r6, r6, #16	@ 00003258 3604
.org 0x325a
	lsrs r6, r6, #16	@ 0000325a 360c
.org 0x325c
	ldr r1, [pc, #128]	@ 0000325c 2049
.org 0x325e
	adds r0, r4, #0	@ 0000325e 201c
.org 0x3260
	bl 0x2c94	@ 00003260 fff718fd
.org 0x3264
	ldrb r0, [r4, #13]	@ 00003264 607b
.org 0x3266
	movs r2, #33	@ 00003266 2122
.org 0x3268
	negs r2, r2	@ 00003268 5242
.org 0x326a
	ands r2, r0	@ 0000326a 0240
.org 0x326c
	ldrb r1, [r4, #17]	@ 0000326c 617c
.org 0x326e
	movs r0, #15	@ 0000326e 0f20
.org 0x3270
	ands r0, r1	@ 00003270 0840
.org 0x3272
	movs r1, #0	@ 00003272 0021
.org 0x3274
	mov r9, r1	@ 00003274 8946
.org 0x3276
	mov r3, r9	@ 00003276 4b46
.org 0x3278
	strb r3, [r4, #18]	@ 00003278 a374
.org 0x327a
	strb r3, [r4, #19]	@ 0000327a e374
.org 0x327c
	movs r1, #16	@ 0000327c 1021
.org 0x327e
	orrs r2, r1	@ 0000327e 0a43
.org 0x3280
	movs r3, #13	@ 00003280 0d23
.org 0x3282
	negs r3, r3	@ 00003282 5b42
.org 0x3284
	ands r0, r3	@ 00003284 1840
.org 0x3286
	movs r1, #8	@ 00003286 0821
.org 0x3288
	orrs r0, r1	@ 00003288 0843
.org 0x328a
	strb r0, [r4, #17]	@ 0000328a 6074
.org 0x328c
	ands r2, r3	@ 0000328c 1a40
.org 0x328e
	mov r0, sl	@ 0000328e 5046
.org 0x3290
	str r0, [r4, #8]	@ 00003290 a060
.org 0x3292
	lsrs r5, r5, #26	@ 00003292 ad0e
.org 0x3294
	lsls r5, r5, #6	@ 00003294 ad01
.org 0x3296
	movs r1, #63	@ 00003296 3f21
.org 0x3298
	ands r2, r1	@ 00003298 0a40
.org 0x329a
	orrs r2, r5	@ 0000329a 2a43
.org 0x329c
	movs r0, #3	@ 0000329c 0320
.org 0x329e
	mov r3, r8	@ 0000329e 4346
.org 0x32a0
	ands r3, r0	@ 000032a0 0340
.org 0x32a2
	lsls r3, r3, #6	@ 000032a2 9b01
.org 0x32a4
	ldrb r0, [r4, #15]	@ 000032a4 e07b
.org 0x32a6
	ands r1, r0	@ 000032a6 0140
.org 0x32a8
	orrs r1, r3	@ 000032a8 1943
.org 0x32aa
	ldr r0, [pc, #56]	@ 000032aa 0e48
.org 0x32ac
	ands r6, r0	@ 000032ac 0640
.org 0x32ae
	ldrh r3, [r4, #16]	@ 000032ae 238a
.org 0x32b0
	ldr r0, [pc, #52]	@ 000032b0 0d48
.org 0x32b2
	ands r0, r3	@ 000032b2 1840
.org 0x32b4
	orrs r0, r6	@ 000032b4 3043
.org 0x32b6
	strh r0, [r4, #16]	@ 000032b6 2082
.org 0x32b8
	movs r0, #4	@ 000032b8 0420
.org 0x32ba
	negs r0, r0	@ 000032ba 4042
.org 0x32bc
	ands r2, r0	@ 000032bc 0240
.org 0x32be
	strb r2, [r4, #13]	@ 000032be 6273
.org 0x32c0
	subs r0, #59	@ 000032c0 3b38
.org 0x32c2
	ands r1, r0	@ 000032c2 0140
.org 0x32c4
	strb r1, [r4, #15]	@ 000032c4 e173
.org 0x32c6
	ldrh r1, [r4, #14]	@ 000032c6 e189
.org 0x32c8
	ldr r0, [pc, #32]	@ 000032c8 0848
.org 0x32ca
	ands r0, r1	@ 000032ca 0840
.org 0x32cc
	strh r0, [r4, #14]	@ 000032cc e081
.org 0x32ce
	mov r0, r9	@ 000032ce 4846
.org 0x32d0
	strb r0, [r4, #12]	@ 000032d0 2073
.org 0x32d2
	pop {r3, r4, r5}	@ 000032d2 38bc
.org 0x32d4
	mov r8, r3	@ 000032d4 9846
.org 0x32d6
	mov r9, r4	@ 000032d6 a146
.org 0x32d8
	mov sl, r5	@ 000032d8 aa46
.org 0x32da
	pop {r4, r5, r6}	@ 000032da 70bc
.org 0x32dc
	pop {r0}	@ 000032dc 01bc
.org 0x32de
	bx r0	@ 000032de 0047
