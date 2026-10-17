@ FUN_08057220  entry 0x08057220  size 114
.thumb
.org 0x57220
FUN_08057220:
	push {r4, lr}	@ 00057220 10b5
.org 0x57222
	adds r4, r0, #0	@ 00057222 041c
.org 0x57224
	ldrb r0, [r4, #15]	@ 00057224 e07b
.org 0x57226
	cmp r0, #0	@ 00057226 0028
.org 0x57228
	bne.n 0x57238	@ 00057228 06d1
.org 0x5722a
	ldr r1, [pc, #104]	@ 0005722a 1a49
.org 0x5722c
	adds r0, r4, #0	@ 0005722c 201c
.org 0x5722e
	bl 0x1cf00	@ 0005722e c5f767fe
.org 0x57232
	ldrb r0, [r4, #15]	@ 00057232 e07b
.org 0x57234
	adds r0, #1	@ 00057234 0130
.org 0x57236
	strb r0, [r4, #15]	@ 00057236 e073
.org 0x57238
	adds r0, r4, #0	@ 00057238 201c
.org 0x5723a
	bl 0x1cff0	@ 0005723a c5f7d9fe
.org 0x5723e
	adds r0, r4, #0	@ 0005723e 201c
.org 0x57240
	adds r0, #116	@ 00057240 7430
.org 0x57242
	ldr r3, [pc, #84]	@ 00057242 154b
.org 0x57244
	ldrb r1, [r4, #30]	@ 00057244 a17f
.org 0x57246
	lsls r1, r1, #8	@ 00057246 0902
.org 0x57248
	adds r2, r4, #0	@ 00057248 221c
.org 0x5724a
	adds r2, #112	@ 0005724a 7032
.org 0x5724c
	ldrb r2, [r2, #0]	@ 0005724c 1278
.org 0x5724e
	orrs r1, r2	@ 0005724e 1143
.org 0x57250
	ldr r2, [pc, #72]	@ 00057250 124a
.org 0x57252
	adds r1, r1, r2	@ 00057252 8918
.org 0x57254
	lsls r1, r1, #2	@ 00057254 8900
.org 0x57256
	adds r1, r1, r3	@ 00057256 c918
.org 0x57258
	adds r2, r4, #0	@ 00057258 221c
.org 0x5725a
	adds r2, #113	@ 0005725a 7132
.org 0x5725c
	ldrb r2, [r2, #0]	@ 0005725c 1278
.org 0x5725e
	lsls r2, r2, #24	@ 0005725e 1206
.org 0x57260
	asrs r2, r2, #24	@ 00057260 1216
.org 0x57262
	ldr r1, [r1, #0]	@ 00057262 0968
.org 0x57264
	lsls r2, r2, #2	@ 00057264 9200
.org 0x57266
	adds r2, r2, r1	@ 00057266 5218
.org 0x57268
	ldr r1, [r2, #0]	@ 00057268 1168
.org 0x5726a
	ldrb r2, [r1, #0]	@ 0005726a 0a78
.org 0x5726c
	lsls r1, r2, #1	@ 0005726c 5100
.org 0x5726e
	adds r1, r1, r2	@ 0005726e 8918
.org 0x57270
	lsls r1, r1, #3	@ 00057270 c900
.org 0x57272
	ldr r2, [pc, #44]	@ 00057272 0b4a
.org 0x57274
	adds r1, r1, r2	@ 00057274 8918
.org 0x57276
	bl 0x5784	@ 00057276 aef785fa
.org 0x5727a
	adds r0, r4, #0	@ 0005727a 201c
.org 0x5727c
	adds r0, #115	@ 0005727c 7330
.org 0x5727e
	ldrb r0, [r0, #0]	@ 0005727e 0078
.org 0x57280
	cmp r0, #3	@ 00057280 0328
.org 0x57282
	bne.n 0x5728c	@ 00057282 03d1
.org 0x57284
	movs r1, #0	@ 00057284 0021
.org 0x57286
	movs r0, #5	@ 00057286 0520
.org 0x57288
	strb r0, [r4, #14]	@ 00057288 a073
.org 0x5728a
	strb r1, [r4, #15]	@ 0005728a e173
.org 0x5728c
	pop {r4}	@ 0005728c 10bc
.org 0x5728e
	pop {r0}	@ 0005728e 01bc
.org 0x57290
	bx r0	@ 00057290 0047
