@ FUN_080fc218  entry 0x080fc218  size 216
.thumb
.org 0xfc218
FUN_080fc218:
	push {r4, r5, r6, r7, lr}	@ 000fc218 f0b5
.org 0xfc21a
	adds r7, r0, #0	@ 000fc21a 071c
.org 0xfc21c
	ldrb r0, [r7, #16]	@ 000fc21c 387c
.org 0xfc21e
	cmp r0, #0	@ 000fc21e 0028
.org 0xfc220
	bne.n 0xfc270	@ 000fc220 26d1
.org 0xfc222
	adds r6, r7, #0	@ 000fc222 3e1c
.org 0xfc224
	adds r6, #84	@ 000fc224 5436
.org 0xfc226
	ldr r5, [pc, #68]	@ 000fc226 114d
.org 0xfc228
	ldrb r0, [r7, #10]	@ 000fc228 b87a
.org 0xfc22a
	movs r4, #16	@ 000fc22a 1024
.org 0xfc22c
	adds r3, r4, #0	@ 000fc22c 231c
.org 0xfc22e
	ands r3, r0	@ 000fc22e 0340
.org 0xfc230
	lsls r3, r3, #24	@ 000fc230 1b06
.org 0xfc232
	lsrs r3, r3, #24	@ 000fc232 1b0e
.org 0xfc234
	adds r0, r6, #0	@ 000fc234 301c
.org 0xfc236
	adds r1, r5, #0	@ 000fc236 291c
.org 0xfc238
	movs r2, #0	@ 000fc238 0022
.org 0xfc23a
	bl 0xd4c8c	@ 000fc23a d8f727fd
.org 0xfc23e
	adds r1, r5, #0	@ 000fc23e 291c
.org 0xfc240
	adds r1, #28	@ 000fc240 1c31
.org 0xfc242
	ldrb r0, [r7, #10]	@ 000fc242 b87a
.org 0xfc244
	adds r3, r4, #0	@ 000fc244 231c
.org 0xfc246
	ands r3, r0	@ 000fc246 0340
.org 0xfc248
	lsls r3, r3, #24	@ 000fc248 1b06
.org 0xfc24a
	lsrs r3, r3, #24	@ 000fc24a 1b0e
.org 0xfc24c
	adds r0, r6, #0	@ 000fc24c 301c
.org 0xfc24e
	movs r2, #0	@ 000fc24e 0022
.org 0xfc250
	bl 0xd4c8c	@ 000fc250 d8f71cfd
.org 0xfc254
	adds r5, #56	@ 000fc254 3835
.org 0xfc256
	ldrb r0, [r7, #10]	@ 000fc256 b87a
.org 0xfc258
	ands r4, r0	@ 000fc258 0440
.org 0xfc25a
	lsls r4, r4, #24	@ 000fc25a 2406
.org 0xfc25c
	lsrs r4, r4, #24	@ 000fc25c 240e
.org 0xfc25e
	adds r0, r6, #0	@ 000fc25e 301c
.org 0xfc260
	adds r1, r5, #0	@ 000fc260 291c
.org 0xfc262
	movs r2, #0	@ 000fc262 0022
.org 0xfc264
	adds r3, r4, #0	@ 000fc264 231c
.org 0xfc266
	bl 0xd4c8c	@ 000fc266 d8f711fd
.org 0xfc26a
	b.n 0xfc2b8	@ 000fc26a 25e0
.org 0xfc26c
	.byte 0x24,0xad,0x86,0x08	@ 000fc26c data
.org 0xfc270
	adds r6, r7, #0	@ 000fc270 3e1c
.org 0xfc272
	adds r6, #84	@ 000fc272 5436
.org 0xfc274
	ldr r5, [pc, #124]	@ 000fc274 1f4d
.org 0xfc276
	ldrb r0, [r7, #10]	@ 000fc276 b87a
.org 0xfc278
	movs r4, #16	@ 000fc278 1024
.org 0xfc27a
	adds r3, r4, #0	@ 000fc27a 231c
.org 0xfc27c
	ands r3, r0	@ 000fc27c 0340
.org 0xfc27e
	lsls r3, r3, #24	@ 000fc27e 1b06
.org 0xfc280
	lsrs r3, r3, #24	@ 000fc280 1b0e
.org 0xfc282
	adds r0, r6, #0	@ 000fc282 301c
.org 0xfc284
	adds r1, r5, #0	@ 000fc284 291c
.org 0xfc286
	movs r2, #0	@ 000fc286 0022
.org 0xfc288
	bl 0xd4c8c	@ 000fc288 d8f700fd
.org 0xfc28c
	adds r1, r5, #0	@ 000fc28c 291c
.org 0xfc28e
	adds r1, #28	@ 000fc28e 1c31
.org 0xfc290
	ldrb r0, [r7, #10]	@ 000fc290 b87a
.org 0xfc292
	adds r3, r4, #0	@ 000fc292 231c
.org 0xfc294
	ands r3, r0	@ 000fc294 0340
.org 0xfc296
	lsls r3, r3, #24	@ 000fc296 1b06
.org 0xfc298
	lsrs r3, r3, #24	@ 000fc298 1b0e
.org 0xfc29a
	adds r0, r6, #0	@ 000fc29a 301c
.org 0xfc29c
	movs r2, #0	@ 000fc29c 0022
.org 0xfc29e
	bl 0xd4c8c	@ 000fc29e d8f7f5fc
.org 0xfc2a2
	adds r5, #56	@ 000fc2a2 3835
.org 0xfc2a4
	ldrb r0, [r7, #10]	@ 000fc2a4 b87a
.org 0xfc2a6
	ands r4, r0	@ 000fc2a6 0440
.org 0xfc2a8
	lsls r4, r4, #24	@ 000fc2a8 2406
.org 0xfc2aa
	lsrs r4, r4, #24	@ 000fc2aa 240e
.org 0xfc2ac
	adds r0, r6, #0	@ 000fc2ac 301c
.org 0xfc2ae
	adds r1, r5, #0	@ 000fc2ae 291c
.org 0xfc2b0
	movs r2, #0	@ 000fc2b0 0022
.org 0xfc2b2
	adds r3, r4, #0	@ 000fc2b2 231c
.org 0xfc2b4
	bl 0xd4c8c	@ 000fc2b4 d8f7eafc
.org 0xfc2b8
	ldrb r1, [r7, #11]	@ 000fc2b8 f97a
.org 0xfc2ba
	movs r0, #247	@ 000fc2ba f720
.org 0xfc2bc
	ands r0, r1	@ 000fc2bc 0840
.org 0xfc2be
	movs r1, #0	@ 000fc2be 0021
.org 0xfc2c0
	strb r0, [r7, #11]	@ 000fc2c0 f872
.org 0xfc2c2
	adds r0, r7, #0	@ 000fc2c2 381c
.org 0xfc2c4
	adds r0, #140	@ 000fc2c4 8c30
.org 0xfc2c6
	str r1, [r0, #0]	@ 000fc2c6 0160
.org 0xfc2c8
	adds r0, #4	@ 000fc2c8 0430
.org 0xfc2ca
	str r1, [r0, #0]	@ 000fc2ca 0160
.org 0xfc2cc
	adds r0, #4	@ 000fc2cc 0430
.org 0xfc2ce
	strb r1, [r0, #0]	@ 000fc2ce 0170
.org 0xfc2d0
	ldrb r1, [r7, #10]	@ 000fc2d0 b97a
.org 0xfc2d2
	movs r0, #251	@ 000fc2d2 fb20
.org 0xfc2d4
	ands r0, r1	@ 000fc2d4 0840
.org 0xfc2d6
	movs r1, #254	@ 000fc2d6 fe21
.org 0xfc2d8
	ands r0, r1	@ 000fc2d8 0840
.org 0xfc2da
	strb r0, [r7, #10]	@ 000fc2da b872
.org 0xfc2dc
	ldr r1, [pc, #24]	@ 000fc2dc 0649
.org 0xfc2de
	ldrb r0, [r7, #9]	@ 000fc2de 787a
.org 0xfc2e0
	lsls r0, r0, #2	@ 000fc2e0 8000
.org 0xfc2e2
	adds r0, r0, r1	@ 000fc2e2 4018
.org 0xfc2e4
	movs r1, #4	@ 000fc2e4 0421
.org 0xfc2e6
	str r1, [r7, #12]	@ 000fc2e6 f960
.org 0xfc2e8
	ldr r0, [r0, #0]	@ 000fc2e8 0068
.org 0xfc2ea
	ldr r0, [r0, #16]	@ 000fc2ea 0069
.org 0xfc2ec
	str r0, [r7, #20]	@ 000fc2ec 7861
.org 0xfc2ee
	pop {r4, r5, r6, r7}	@ 000fc2ee f0bc
