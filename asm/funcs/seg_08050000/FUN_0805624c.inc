@ FUN_0805624c  entry 0x0805624c  size 114
.thumb
.org 0x5624c
FUN_0805624c:
	push {r4, lr}	@ 0005624c 10b5
.org 0x5624e
	adds r4, r0, #0	@ 0005624e 041c
.org 0x56250
	ldrb r0, [r4, #15]	@ 00056250 e07b
.org 0x56252
	cmp r0, #0	@ 00056252 0028
.org 0x56254
	bne.n 0x56264	@ 00056254 06d1
.org 0x56256
	ldr r1, [pc, #104]	@ 00056256 1a49
.org 0x56258
	adds r0, r4, #0	@ 00056258 201c
.org 0x5625a
	bl 0x1cf00	@ 0005625a c6f751fe
.org 0x5625e
	ldrb r0, [r4, #15]	@ 0005625e e07b
.org 0x56260
	adds r0, #1	@ 00056260 0130
.org 0x56262
	strb r0, [r4, #15]	@ 00056262 e073
.org 0x56264
	adds r0, r4, #0	@ 00056264 201c
.org 0x56266
	bl 0x1cff0	@ 00056266 c6f7c3fe
.org 0x5626a
	adds r0, r4, #0	@ 0005626a 201c
.org 0x5626c
	adds r0, #116	@ 0005626c 7430
.org 0x5626e
	ldr r3, [pc, #84]	@ 0005626e 154b
.org 0x56270
	ldrb r1, [r4, #30]	@ 00056270 a17f
.org 0x56272
	lsls r1, r1, #8	@ 00056272 0902
.org 0x56274
	adds r2, r4, #0	@ 00056274 221c
.org 0x56276
	adds r2, #112	@ 00056276 7032
.org 0x56278
	ldrb r2, [r2, #0]	@ 00056278 1278
.org 0x5627a
	orrs r1, r2	@ 0005627a 1143
.org 0x5627c
	ldr r2, [pc, #72]	@ 0005627c 124a
.org 0x5627e
	adds r1, r1, r2	@ 0005627e 8918
.org 0x56280
	lsls r1, r1, #2	@ 00056280 8900
.org 0x56282
	adds r1, r1, r3	@ 00056282 c918
.org 0x56284
	adds r2, r4, #0	@ 00056284 221c
.org 0x56286
	adds r2, #113	@ 00056286 7132
.org 0x56288
	ldrb r2, [r2, #0]	@ 00056288 1278
.org 0x5628a
	lsls r2, r2, #24	@ 0005628a 1206
.org 0x5628c
	asrs r2, r2, #24	@ 0005628c 1216
.org 0x5628e
	ldr r1, [r1, #0]	@ 0005628e 0968
.org 0x56290
	lsls r2, r2, #2	@ 00056290 9200
.org 0x56292
	adds r2, r2, r1	@ 00056292 5218
.org 0x56294
	ldr r1, [r2, #0]	@ 00056294 1168
.org 0x56296
	ldrb r2, [r1, #0]	@ 00056296 0a78
.org 0x56298
	lsls r1, r2, #1	@ 00056298 5100
.org 0x5629a
	adds r1, r1, r2	@ 0005629a 8918
.org 0x5629c
	lsls r1, r1, #3	@ 0005629c c900
.org 0x5629e
	ldr r2, [pc, #44]	@ 0005629e 0b4a
.org 0x562a0
	adds r1, r1, r2	@ 000562a0 8918
.org 0x562a2
	bl 0x5784	@ 000562a2 aff76ffa
.org 0x562a6
	adds r0, r4, #0	@ 000562a6 201c
.org 0x562a8
	adds r0, #115	@ 000562a8 7330
.org 0x562aa
	ldrb r0, [r0, #0]	@ 000562aa 0078
.org 0x562ac
	cmp r0, #3	@ 000562ac 0328
.org 0x562ae
	bne.n 0x562b8	@ 000562ae 03d1
.org 0x562b0
	movs r1, #0	@ 000562b0 0021
.org 0x562b2
	movs r0, #6	@ 000562b2 0620
.org 0x562b4
	strb r0, [r4, #14]	@ 000562b4 a073
.org 0x562b6
	strb r1, [r4, #15]	@ 000562b6 e173
.org 0x562b8
	pop {r4}	@ 000562b8 10bc
.org 0x562ba
	pop {r0}	@ 000562ba 01bc
.org 0x562bc
	bx r0	@ 000562bc 0047
