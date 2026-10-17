@ FUN_080fb1d4  entry 0x080fb1d4  size 178
.thumb
.org 0xfb1d4
FUN_080fb1d4:
	push {r4, r5, r6, r7, lr}	@ 000fb1d4 f0b5
.org 0xfb1d6
	adds r7, r0, #0	@ 000fb1d6 071c
.org 0xfb1d8
	bl 0x1cc9c	@ 000fb1d8 21f760fd
.org 0xfb1dc
	ldrb r0, [r7, #10]	@ 000fb1dc b87a
.org 0xfb1de
	movs r2, #1	@ 000fb1de 0122
.org 0xfb1e0
	movs r1, #0	@ 000fb1e0 0021
.org 0xfb1e2
	movs r6, #0	@ 000fb1e2 0026
.org 0xfb1e4
	orrs r2, r0	@ 000fb1e4 0243
.org 0xfb1e6
	movs r0, #2	@ 000fb1e6 0220
.org 0xfb1e8
	orrs r2, r0	@ 000fb1e8 0243
.org 0xfb1ea
	orrs r2, r1	@ 000fb1ea 0a43
.org 0xfb1ec
	strb r2, [r7, #10]	@ 000fb1ec ba72
.org 0xfb1ee
	ldr r1, [pc, #152]	@ 000fb1ee 2649
.org 0xfb1f0
	ldrb r0, [r7, #9]	@ 000fb1f0 787a
.org 0xfb1f2
	lsls r0, r0, #2	@ 000fb1f2 8000
.org 0xfb1f4
	adds r0, r0, r1	@ 000fb1f4 4018
.org 0xfb1f6
	movs r3, #1	@ 000fb1f6 0123
.org 0xfb1f8
	str r3, [r7, #12]	@ 000fb1f8 fb60
.org 0xfb1fa
	ldr r0, [r0, #0]	@ 000fb1fa 0068
.org 0xfb1fc
	ldr r0, [r0, #4]	@ 000fb1fc 4068
.org 0xfb1fe
	str r0, [r7, #20]	@ 000fb1fe 7861
.org 0xfb200
	ldrb r0, [r7, #11]	@ 000fb200 f87a
.org 0xfb202
	movs r1, #8	@ 000fb202 0821
.org 0xfb204
	orrs r0, r1	@ 000fb204 0843
.org 0xfb206
	strb r0, [r7, #11]	@ 000fb206 f872
.org 0xfb208
	ldr r0, [pc, #128]	@ 000fb208 2048
.org 0xfb20a
	str r0, [r7, #48]	@ 000fb20a 3863
.org 0xfb20c
	movs r5, #0	@ 000fb20c 0025
.org 0xfb20e
	strh r3, [r7, #38]	@ 000fb20e fb84
.org 0xfb210
	movs r0, #4	@ 000fb210 0420
.org 0xfb212
	orrs r2, r0	@ 000fb212 0243
.org 0xfb214
	strb r2, [r7, #10]	@ 000fb214 ba72
.org 0xfb216
	adds r4, r7, #0	@ 000fb216 3c1c
.org 0xfb218
	adds r4, #116	@ 000fb218 7434
.org 0xfb21a
	ldr r1, [pc, #116]	@ 000fb21a 1d49
.org 0xfb21c
	adds r2, r7, #0	@ 000fb21c 3a1c
.org 0xfb21e
	adds r2, #84	@ 000fb21e 5432
.org 0xfb220
	adds r0, r4, #0	@ 000fb220 201c
.org 0xfb222
	movs r3, #16	@ 000fb222 1023
.org 0xfb224
	bl 0x5760	@ 000fb224 0af79cfa
.org 0xfb228
	str r7, [r4, #44]	@ 000fb228 e762
.org 0xfb22a
	ldr r0, [pc, #104]	@ 000fb22a 1a48
.org 0xfb22c
	str r0, [r4, #36]	@ 000fb22c 6062
.org 0xfb22e
	strb r5, [r7, #18]	@ 000fb22e bd74
.org 0xfb230
	adds r0, r7, #0	@ 000fb230 381c
.org 0xfb232
	adds r0, #180	@ 000fb232 b430
.org 0xfb234
	strb r5, [r0, #0]	@ 000fb234 0570
.org 0xfb236
	adds r0, #1	@ 000fb236 0130
.org 0xfb238
	strb r5, [r0, #0]	@ 000fb238 0570
.org 0xfb23a
	adds r0, #11	@ 000fb23a 0b30
.org 0xfb23c
	str r6, [r0, #0]	@ 000fb23c 0660
.org 0xfb23e
	ldr r0, [r7, #84]	@ 000fb23e 786d
.org 0xfb240
	ldr r1, [r7, #88]	@ 000fb240 b96d
.org 0xfb242
	bl 0x8534	@ 000fb242 0df777f9
.org 0xfb246
	str r0, [r7, #88]	@ 000fb246 b865
.org 0xfb248
	ldr r1, [r7, #84]	@ 000fb248 796d
.org 0xfb24a
	ldr r2, [r7, #88]	@ 000fb24a ba6d
.org 0xfb24c
	str r1, [r7, #100]	@ 000fb24c 7966
.org 0xfb24e
	str r2, [r7, #104]	@ 000fb24e ba66
.org 0xfb250
	adds r1, r7, #0	@ 000fb250 391c
.org 0xfb252
	adds r1, #100	@ 000fb252 6431
.org 0xfb254
	str r1, [r7, #64]	@ 000fb254 3964
.org 0xfb256
	adds r1, #84	@ 000fb256 5431
.org 0xfb258
	str r0, [r1, #0]	@ 000fb258 0860
.org 0xfb25a
	strb r5, [r7, #13]	@ 000fb25a 7d73
.org 0xfb25c
	strb r5, [r7, #14]	@ 000fb25c bd73
.org 0xfb25e
	ldrb r1, [r7, #10]	@ 000fb25e b97a
.org 0xfb260
	movs r0, #239	@ 000fb260 ef20
.org 0xfb262
	ands r0, r1	@ 000fb262 0840
.org 0xfb264
	strb r0, [r7, #10]	@ 000fb264 b872
.org 0xfb266
	adds r0, r7, #0	@ 000fb266 381c
.org 0xfb268
	adds r0, #76	@ 000fb268 4c30
.org 0xfb26a
	strb r6, [r0, #0]	@ 000fb26a 0670
.org 0xfb26c
	adds r2, r7, #0	@ 000fb26c 3a1c
.org 0xfb26e
	adds r2, #74	@ 000fb26e 4a32
.org 0xfb270
	ldrb r1, [r2, #0]	@ 000fb270 1178
.org 0xfb272
	movs r0, #17	@ 000fb272 1120
.org 0xfb274
	negs r0, r0	@ 000fb274 4042
.org 0xfb276
	ands r0, r1	@ 000fb276 0840
.org 0xfb278
	strb r0, [r2, #0]	@ 000fb278 1070
.org 0xfb27a
	adds r0, r7, #0	@ 000fb27a 381c
.org 0xfb27c
	bl 0xfb298	@ 000fb27c 00f00cf8
.org 0xfb280
	pop {r4, r5, r6, r7}	@ 000fb280 f0bc
.org 0xfb282
	pop {r0}	@ 000fb282 01bc
.org 0xfb284
	bx r0	@ 000fb284 0047
