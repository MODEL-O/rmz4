@ FUN_08126164  entry 0x08126164  size 910
.thumb
.org 0x126164
FUN_08126164:
	push {r4, r5, r6, r7, lr}	@ 00126164 f0b5
.org 0x126166
	mov r7, sl	@ 00126166 5746
.org 0x126168
	mov r6, r9	@ 00126168 4e46
.org 0x12616a
	mov r5, r8	@ 0012616a 4546
.org 0x12616c
	push {r5, r6, r7}	@ 0012616c e0b4
.org 0x12616e
	sub sp, #20	@ 0012616e 85b0
.org 0x126170
	str r0, [sp, #12]	@ 00126170 0390
.org 0x126172
	ldr r1, [pc, #896]	@ 00126172 e049
.org 0x126174
	adds r1, r0, r1	@ 00126174 4118
.org 0x126176
	str r1, [sp, #16]	@ 00126176 0491
.org 0x126178
	movs r2, #180	@ 00126178 b422
.org 0x12617a
	lsls r2, r2, #9	@ 0012617a 5202
.org 0x12617c
	str r2, [r1, #0]	@ 0012617c 0a60
.org 0x12617e
	movs r0, #240	@ 0012617e f020
.org 0x126180
	lsls r0, r0, #8	@ 00126180 0002
.org 0x126182
	str r0, [r1, #4]	@ 00126182 4860
.org 0x126184
	movs r0, #25	@ 00126184 1920
.org 0x126186
	ldr r1, [sp, #16]	@ 00126186 0499
.org 0x126188
	bl 0x6a94	@ 00126188 e0f684fc
.org 0x12618c
	movs r0, #0	@ 0012618c 0020
.org 0x12618e
	mov sl, r0	@ 0012618e 8246
.org 0x126190
	ldr r6, [pc, #868]	@ 00126190 d94e
.org 0x126192
	ldr r1, [pc, #872]	@ 00126192 da49
.org 0x126194
	mov r9, r1	@ 00126194 8946
.org 0x126196
	ldrh r1, [r1, #0]	@ 00126196 0988
.org 0x126198
	ldrh r0, [r6, #6]	@ 00126198 f088
.org 0x12619a
	lsrs r0, r0, #6	@ 0012619a 8009
.org 0x12619c
	subs r1, r1, r0	@ 0012619c 091a
.org 0x12619e
	lsls r1, r1, #5	@ 0012619e 4901
.org 0x1261a0
	movs r2, #128	@ 001261a0 8022
.org 0x1261a2
	lsls r2, r2, #9	@ 001261a2 5202
.org 0x1261a4
	adds r1, r1, r2	@ 001261a4 8918
.org 0x1261a6
	adds r0, r6, #0	@ 001261a6 301c
.org 0x1261a8
	bl 0x1d30	@ 001261a8 dbf6c2fd
.org 0x1261ac
	ldr r7, [pc, #848]	@ 001261ac d44f
.org 0x1261ae
	ldr r0, [pc, #852]	@ 001261ae d548
.org 0x1261b0
	mov r8, r0	@ 001261b0 8046
.org 0x1261b2
	ldrh r1, [r0, #0]	@ 001261b2 0188
.org 0x1261b4
	ldrb r0, [r7, #7]	@ 001261b4 f879
.org 0x1261b6
	subs r1, r1, r0	@ 001261b6 091a
.org 0x1261b8
	lsls r1, r1, #5	@ 001261b8 4901
.org 0x1261ba
	movs r2, #128	@ 001261ba 8022
.org 0x1261bc
	lsls r2, r2, #2	@ 001261bc 9200
.org 0x1261be
	adds r1, r1, r2	@ 001261be 8918
.org 0x1261c0
	adds r0, r7, #0	@ 001261c0 381c
.org 0x1261c2
	bl 0x2208	@ 001261c2 dcf621f8
.org 0x1261c6
	adds r0, r6, #0	@ 001261c6 301c
.org 0x1261c8
	adds r0, #20	@ 001261c8 1430
.org 0x1261ca
	mov r2, r9	@ 001261ca 4a46
.org 0x1261cc
	ldrh r1, [r2, #2]	@ 001261cc 5188
.org 0x1261ce
	ldrh r2, [r0, #6]	@ 001261ce c288
.org 0x1261d0
	lsrs r2, r2, #6	@ 001261d0 9209
.org 0x1261d2
	subs r1, r1, r2	@ 001261d2 891a
.org 0x1261d4
	lsls r1, r1, #5	@ 001261d4 4901
.org 0x1261d6
	movs r2, #128	@ 001261d6 8022
.org 0x1261d8
	lsls r2, r2, #9	@ 001261d8 5202
.org 0x1261da
	adds r1, r1, r2	@ 001261da 8918
.org 0x1261dc
	bl 0x1d30	@ 001261dc dbf6a8fd
.org 0x1261e0
	adds r0, r7, #0	@ 001261e0 381c
.org 0x1261e2
	adds r0, #20	@ 001261e2 1430
.org 0x1261e4
	mov r2, r8	@ 001261e4 4246
.org 0x1261e6
	ldrh r1, [r2, #2]	@ 001261e6 5188
.org 0x1261e8
	ldrb r2, [r0, #7]	@ 001261e8 c279
.org 0x1261ea
	subs r1, r1, r2	@ 001261ea 891a
.org 0x1261ec
	lsls r1, r1, #5	@ 001261ec 4901
.org 0x1261ee
	movs r2, #128	@ 001261ee 8022
.org 0x1261f0
	lsls r2, r2, #2	@ 001261f0 9200
.org 0x1261f2
	adds r1, r1, r2	@ 001261f2 8918
.org 0x1261f4
	bl 0x2208	@ 001261f4 dcf608f8
.org 0x1261f8
	adds r0, r6, #0	@ 001261f8 301c
.org 0x1261fa
	adds r0, #40	@ 001261fa 2830
.org 0x1261fc
	mov r2, r9	@ 001261fc 4a46
.org 0x1261fe
	ldrh r1, [r2, #4]	@ 001261fe 9188
.org 0x126200
	ldrh r2, [r0, #6]	@ 00126200 c288
.org 0x126202
	lsrs r2, r2, #6	@ 00126202 9209
.org 0x126204
	subs r1, r1, r2	@ 00126204 891a
.org 0x126206
	lsls r1, r1, #5	@ 00126206 4901
.org 0x126208
	movs r2, #128	@ 00126208 8022
.org 0x12620a
	lsls r2, r2, #9	@ 0012620a 5202
.org 0x12620c
	adds r1, r1, r2	@ 0012620c 8918
.org 0x12620e
	bl 0x1d30	@ 0012620e dbf68ffd
.org 0x126212
	adds r0, r7, #0	@ 00126212 381c
.org 0x126214
	adds r0, #40	@ 00126214 2830
.org 0x126216
	mov r2, r8	@ 00126216 4246
.org 0x126218
	ldrh r1, [r2, #4]	@ 00126218 9188
.org 0x12621a
	ldrb r2, [r0, #7]	@ 0012621a c279
.org 0x12621c
	subs r1, r1, r2	@ 0012621c 891a
.org 0x12621e
	lsls r1, r1, #5	@ 0012621e 4901
.org 0x126220
	movs r2, #128	@ 00126220 8022
.org 0x126222
	lsls r2, r2, #2	@ 00126222 9200
.org 0x126224
	adds r1, r1, r2	@ 00126224 8918
.org 0x126226
	bl 0x2208	@ 00126226 dbf6efff
.org 0x12622a
	adds r0, r6, #0	@ 0012622a 301c
.org 0x12622c
	adds r0, #80	@ 0012622c 5030
.org 0x12622e
	mov r2, r9	@ 0012622e 4a46
.org 0x126230
	ldrh r1, [r2, #8]	@ 00126230 1189
.org 0x126232
	ldrh r2, [r0, #6]	@ 00126232 c288
.org 0x126234
	lsrs r2, r2, #6	@ 00126234 9209
.org 0x126236
	subs r1, r1, r2	@ 00126236 891a
.org 0x126238
	lsls r1, r1, #5	@ 00126238 4901
.org 0x12623a
	movs r2, #128	@ 0012623a 8022
.org 0x12623c
	lsls r2, r2, #9	@ 0012623c 5202
.org 0x12623e
	adds r1, r1, r2	@ 0012623e 8918
.org 0x126240
	bl 0x1d30	@ 00126240 dbf676fd
.org 0x126244
	adds r0, r7, #0	@ 00126244 381c
.org 0x126246
	adds r0, #80	@ 00126246 5030
.org 0x126248
	mov r2, r8	@ 00126248 4246
.org 0x12624a
	ldrh r1, [r2, #8]	@ 0012624a 1189
.org 0x12624c
	ldrb r2, [r0, #7]	@ 0012624c c279
.org 0x12624e
	subs r1, r1, r2	@ 0012624e 891a
.org 0x126250
	lsls r1, r1, #5	@ 00126250 4901
.org 0x126252
	movs r2, #128	@ 00126252 8022
.org 0x126254
	lsls r2, r2, #2	@ 00126254 9200
.org 0x126256
	adds r1, r1, r2	@ 00126256 8918
.org 0x126258
	bl 0x2208	@ 00126258 dbf6d6ff
.org 0x12625c
	adds r0, r6, #0	@ 0012625c 301c
.org 0x12625e
	adds r0, #100	@ 0012625e 6430
.org 0x126260
	mov r2, r9	@ 00126260 4a46
.org 0x126262
	ldrh r1, [r2, #10]	@ 00126262 5189
.org 0x126264
	ldrh r2, [r0, #6]	@ 00126264 c288
.org 0x126266
	lsrs r2, r2, #6	@ 00126266 9209
.org 0x126268
	subs r1, r1, r2	@ 00126268 891a
.org 0x12626a
	lsls r1, r1, #5	@ 0012626a 4901
.org 0x12626c
	movs r2, #128	@ 0012626c 8022
.org 0x12626e
	lsls r2, r2, #9	@ 0012626e 5202
.org 0x126270
	adds r1, r1, r2	@ 00126270 8918
.org 0x126272
	bl 0x1d30	@ 00126272 dbf65dfd
.org 0x126276
	adds r0, r7, #0	@ 00126276 381c
.org 0x126278
	adds r0, #100	@ 00126278 6430
.org 0x12627a
	mov r2, r8	@ 0012627a 4246
.org 0x12627c
	ldrh r1, [r2, #10]	@ 0012627c 5189
.org 0x12627e
	ldrb r2, [r0, #7]	@ 0012627e c279
.org 0x126280
	subs r1, r1, r2	@ 00126280 891a
.org 0x126282
	lsls r1, r1, #5	@ 00126282 4901
.org 0x126284
	movs r2, #128	@ 00126284 8022
.org 0x126286
	lsls r2, r2, #2	@ 00126286 9200
.org 0x126288
	adds r1, r1, r2	@ 00126288 8918
.org 0x12628a
	bl 0x2208	@ 0012628a dbf6bdff
.org 0x12628e
	movs r4, #246	@ 0012628e f624
.org 0x126290
	lsls r5, r4, #1	@ 00126290 6500
.org 0x126292
	mov r1, r9	@ 00126292 4946
.org 0x126294
	adds r0, r1, r5	@ 00126294 4819
.org 0x126296
	movs r2, #128	@ 00126296 8022
.org 0x126298
	lsls r2, r2, #2	@ 00126298 9200
.org 0x12629a
	strh r2, [r0, #0]	@ 0012629a 0280
.org 0x12629c
	add r5, r8	@ 0012629c 4544
.org 0x12629e
	movs r0, #4	@ 0012629e 0420
.org 0x1262a0
	strh r0, [r5, #0]	@ 001262a0 2880
.org 0x1262a2
	lsls r4, r4, #4	@ 001262a2 2401
.org 0x1262a4
	movs r1, #246	@ 001262a4 f621
.org 0x1262a6
	lsls r1, r1, #2	@ 001262a6 8900
.org 0x1262a8
	adds r4, r4, r1	@ 001262a8 6418
.org 0x1262aa
	adds r0, r4, r6	@ 001262aa a019
.org 0x1262ac
	ldrh r1, [r0, #6]	@ 001262ac c188
.org 0x1262ae
	lsrs r1, r1, #6	@ 001262ae 8909
.org 0x1262b0
	subs r1, r2, r1	@ 001262b0 511a
.org 0x1262b2
	lsls r1, r1, #5	@ 001262b2 4901
.org 0x1262b4
	movs r2, #128	@ 001262b4 8022
.org 0x1262b6
	lsls r2, r2, #9	@ 001262b6 5202
.org 0x1262b8
	adds r1, r1, r2	@ 001262b8 8918
.org 0x1262ba
	bl 0x1d30	@ 001262ba dbf639fd
.org 0x1262be
	adds r4, r4, r7	@ 001262be e419
.org 0x1262c0
	ldrh r1, [r5, #0]	@ 001262c0 2988
.org 0x1262c2
	ldrb r0, [r4, #7]	@ 001262c2 e079
.org 0x1262c4
	subs r1, r1, r0	@ 001262c4 091a
.org 0x1262c6
	lsls r1, r1, #5	@ 001262c6 4901
.org 0x1262c8
	movs r0, #128	@ 001262c8 8020
.org 0x1262ca
	lsls r0, r0, #2	@ 001262ca 8000
.org 0x1262cc
	adds r1, r1, r0	@ 001262cc 0918
.org 0x1262ce
	adds r0, r4, #0	@ 001262ce 201c
.org 0x1262d0
	bl 0x2208	@ 001262d0 dbf69aff
.org 0x1262d4
	mov r0, r9	@ 001262d4 4846
.org 0x1262d6
	adds r0, #134	@ 001262d6 8630
.org 0x1262d8
	movs r1, #150	@ 001262d8 9621
.org 0x1262da
	lsls r1, r1, #2	@ 001262da 8900
.org 0x1262dc
	strh r1, [r0, #0]	@ 001262dc 0180
.org 0x1262de
	mov r5, r8	@ 001262de 4546
.org 0x1262e0
	adds r5, #134	@ 001262e0 8635
.org 0x1262e2
	movs r0, #9	@ 001262e2 0920
.org 0x1262e4
	strh r0, [r5, #0]	@ 001262e4 2880
.org 0x1262e6
	ldr r4, [pc, #544]	@ 001262e6 884c
.org 0x1262e8
	adds r0, r4, r6	@ 001262e8 a019
.org 0x1262ea
	ldrh r2, [r0, #6]	@ 001262ea c288
.org 0x1262ec
	lsrs r2, r2, #6	@ 001262ec 9209
.org 0x1262ee
	subs r1, r1, r2	@ 001262ee 891a
.org 0x1262f0
	lsls r1, r1, #5	@ 001262f0 4901
.org 0x1262f2
	movs r2, #128	@ 001262f2 8022
.org 0x1262f4
	lsls r2, r2, #9	@ 001262f4 5202
.org 0x1262f6
	adds r1, r1, r2	@ 001262f6 8918
.org 0x1262f8
	bl 0x1d30	@ 001262f8 dbf61afd
.org 0x1262fc
	adds r4, r4, r7	@ 001262fc e419
.org 0x1262fe
	ldrh r1, [r5, #0]	@ 001262fe 2988
.org 0x126300
	ldrb r0, [r4, #7]	@ 00126300 e079
.org 0x126302
	subs r1, r1, r0	@ 00126302 091a
.org 0x126304
	lsls r1, r1, #5	@ 00126304 4901
.org 0x126306
	movs r0, #128	@ 00126306 8020
.org 0x126308
	lsls r0, r0, #2	@ 00126308 8000
.org 0x12630a
	adds r1, r1, r0	@ 0012630a 0918
.org 0x12630c
	adds r0, r4, #0	@ 0012630c 201c
.org 0x12630e
	bl 0x2208	@ 0012630e dbf67bff
.org 0x126312
	movs r4, #247	@ 00126312 f724
.org 0x126314
	lsls r5, r4, #1	@ 00126314 6500
.org 0x126316
	mov r2, r9	@ 00126316 4a46
.org 0x126318
	adds r1, r2, r5	@ 00126318 5119
.org 0x12631a
	ldr r0, [pc, #496]	@ 0012631a 7c48
.org 0x12631c
	strh r0, [r1, #0]	@ 0012631c 0880
.org 0x12631e
	add r5, r8	@ 0012631e 4544
.org 0x126320
	movs r0, #10	@ 00126320 0a20
.org 0x126322
	strh r0, [r5, #0]	@ 00126322 2880
.org 0x126324
	lsls r4, r4, #4	@ 00126324 2401
.org 0x126326
	movs r2, #247	@ 00126326 f722
.org 0x126328
	lsls r2, r2, #2	@ 00126328 9200
.org 0x12632a
	adds r4, r4, r2	@ 0012632a a418
.org 0x12632c
	adds r0, r4, r6	@ 0012632c a019
.org 0x12632e
	ldrh r1, [r1, #0]	@ 0012632e 0988
.org 0x126330
	ldrh r2, [r0, #6]	@ 00126330 c288
.org 0x126332
	lsrs r2, r2, #6	@ 00126332 9209
.org 0x126334
	subs r1, r1, r2	@ 00126334 891a
.org 0x126336
	lsls r1, r1, #5	@ 00126336 4901
.org 0x126338
	movs r2, #128	@ 00126338 8022
.org 0x12633a
	lsls r2, r2, #9	@ 0012633a 5202
.org 0x12633c
	adds r1, r1, r2	@ 0012633c 8918
.org 0x12633e
	bl 0x1d30	@ 0012633e dbf6f7fc
.org 0x126342
	adds r4, r4, r7	@ 00126342 e419
.org 0x126344
	ldrh r1, [r5, #0]	@ 00126344 2988
.org 0x126346
	ldrb r0, [r4, #7]	@ 00126346 e079
.org 0x126348
	subs r1, r1, r0	@ 00126348 091a
.org 0x12634a
	lsls r1, r1, #5	@ 0012634a 4901
.org 0x12634c
	movs r0, #128	@ 0012634c 8020
.org 0x12634e
	lsls r0, r0, #2	@ 0012634e 8000
.org 0x126350
	adds r1, r1, r0	@ 00126350 0918
.org 0x126352
	adds r0, r4, #0	@ 00126352 201c
.org 0x126354
	bl 0x2208	@ 00126354 dbf658ff
.org 0x126358
	movs r1, #206	@ 00126358 ce21
.org 0x12635a
	add r9, r1	@ 0012635a 8944
.org 0x12635c
	movs r1, #234	@ 0012635c ea21
.org 0x12635e
	lsls r1, r1, #2	@ 0012635e 8900
.org 0x126360
	mov r2, r9	@ 00126360 4a46
.org 0x126362
	strh r1, [r2, #0]	@ 00126362 1180
.org 0x126364
	movs r0, #206	@ 00126364 ce20
.org 0x126366
	add r8, r0	@ 00126366 8044
.org 0x126368
	movs r0, #10	@ 00126368 0a20
.org 0x12636a
	mov r2, r8	@ 0012636a 4246
.org 0x12636c
	strh r0, [r2, #0]	@ 0012636c 1080
.org 0x12636e
	ldr r4, [pc, #416]	@ 0012636e 684c
.org 0x126370
	adds r6, r4, r6	@ 00126370 a619
.org 0x126372
	ldrh r0, [r6, #6]	@ 00126372 f088
.org 0x126374
	lsrs r0, r0, #6	@ 00126374 8009
.org 0x126376
	subs r1, r1, r0	@ 00126376 091a
.org 0x126378
	lsls r1, r1, #5	@ 00126378 4901
.org 0x12637a
	movs r2, #128	@ 0012637a 8022
.org 0x12637c
	lsls r2, r2, #9	@ 0012637c 5202
.org 0x12637e
	adds r1, r1, r2	@ 0012637e 8918
.org 0x126380
	adds r0, r6, #0	@ 00126380 301c
.org 0x126382
	bl 0x1d30	@ 00126382 dbf6d5fc
.org 0x126386
	adds r4, r4, r7	@ 00126386 e419
.org 0x126388
	mov r0, r8	@ 00126388 4046
.org 0x12638a
	ldrh r1, [r0, #0]	@ 0012638a 0188
.org 0x12638c
	ldrb r0, [r4, #7]	@ 0012638c e079
.org 0x12638e
	subs r1, r1, r0	@ 0012638e 091a
.org 0x126390
	lsls r1, r1, #5	@ 00126390 4901
.org 0x126392
	movs r2, #128	@ 00126392 8022
.org 0x126394
	lsls r2, r2, #2	@ 00126394 9200
.org 0x126396
	adds r1, r1, r2	@ 00126396 8918
.org 0x126398
	adds r0, r4, #0	@ 00126398 201c
.org 0x12639a
	bl 0x2208	@ 0012639a dbf635ff
.org 0x12639e
	movs r0, #180	@ 0012639e b420
.org 0x1263a0
	lsls r0, r0, #9	@ 001263a0 4002
.org 0x1263a2
	str r0, [sp, #4]	@ 001263a2 0190
.org 0x1263a4
	movs r0, #220	@ 001263a4 dc20
.org 0x1263a6
	lsls r0, r0, #8	@ 001263a6 0002
.org 0x1263a8
	str r0, [sp, #8]	@ 001263a8 0290
.org 0x1263aa
	add r0, sp, #4	@ 001263aa 01a8
.org 0x1263ac
	bl 0x2f190	@ 001263ac 08f7f0fe
.org 0x1263b0
	ldr r1, [sp, #12]	@ 001263b0 0399
.org 0x1263b2
	ldr r2, [pc, #352]	@ 001263b2 584a
.org 0x1263b4
	adds r4, r1, r2	@ 001263b4 8c18
.org 0x1263b6
	str r0, [r4, #0]	@ 001263b6 2060
.org 0x1263b8
	ldr r1, [sp, #16]	@ 001263b8 0499
.org 0x1263ba
	ldr r3, [r1, #0]	@ 001263ba 0b68
.org 0x1263bc
	ldr r2, [pc, #344]	@ 001263bc 564a
.org 0x1263be
	adds r1, r3, r2	@ 001263be 9918
.org 0x1263c0
	movs r2, #128	@ 001263c0 8022
.org 0x1263c2
	lsls r2, r2, #6	@ 001263c2 9201
.org 0x1263c4
	adds r3, r3, r2	@ 001263c4 9b18
.org 0x1263c6
	ldr r2, [pc, #340]	@ 001263c6 554a
.org 0x1263c8
	str r2, [sp, #0]	@ 001263c8 0092
.org 0x1263ca
	movs r2, #0	@ 001263ca 0022
.org 0x1263cc
	bl 0x2cbec	@ 001263cc 06f70efc
.org 0x1263d0
	ldr r1, [pc, #332]	@ 001263d0 5349
.org 0x1263d2
	ldr r0, [r4, #0]	@ 001263d2 2068
.org 0x1263d4
	str r0, [r1, #0]	@ 001263d4 0860
.org 0x1263d6
	ldr r1, [pc, #332]	@ 001263d6 5349
.org 0x1263d8
	mov r9, r1	@ 001263d8 8946
.org 0x1263da
	bl 0x382b0	@ 001263da 11f769ff
.org 0x1263de
	ldr r0, [r4, #0]	@ 001263de 2068
.org 0x1263e0
	adds r0, #76	@ 001263e0 4c30
.org 0x1263e2
	movs r2, #1	@ 001263e2 0122
.org 0x1263e4
	strb r2, [r0, #0]	@ 001263e4 0270
.org 0x1263e6
	ldr r1, [r4, #0]	@ 001263e6 2168
.org 0x1263e8
	adds r1, #74	@ 001263e8 4a31
.org 0x1263ea
	ldrb r0, [r1, #0]	@ 001263ea 0878
.org 0x1263ec
	movs r2, #16	@ 001263ec 1022
.org 0x1263ee
	orrs r0, r2	@ 001263ee 1043
.org 0x1263f0
	strb r0, [r1, #0]	@ 001263f0 0870
.org 0x1263f2
	ldr r1, [r4, #0]	@ 001263f2 2168
.org 0x1263f4
	ldrb r0, [r1, #10]	@ 001263f4 887a
.org 0x1263f6
	orrs r2, r0	@ 001263f6 0243
.org 0x1263f8
	strb r2, [r1, #10]	@ 001263f8 8a72
.org 0x1263fa
	mov r0, sl	@ 001263fa 5046
.org 0x1263fc
	str r0, [r4, #8]	@ 001263fc a060
.org 0x1263fe
	str r0, [r4, #12]	@ 001263fe e060
.org 0x126400
	ldr r0, [pc, #292]	@ 00126400 4948
.org 0x126402
	ldr r0, [r0, #52]	@ 00126402 406b
.org 0x126404
	str r0, [r4, #16]	@ 00126404 2061
.org 0x126406
	ldr r0, [pc, #292]	@ 00126406 4948
.org 0x126408
	str r0, [r4, #20]	@ 00126408 6061
.org 0x12640a
	movs r1, #0	@ 0012640a 0021
.org 0x12640c
	strb r1, [r4, #24]	@ 0012640c 2176
.org 0x12640e
	strb r1, [r4, #25]	@ 0012640e 6176
.org 0x126410
	strb r1, [r4, #26]	@ 00126410 a176
.org 0x126412
	strb r1, [r4, #27]	@ 00126412 e176
.org 0x126414
	strb r1, [r4, #28]	@ 00126414 2177
.org 0x126416
	strb r1, [r4, #29]	@ 00126416 6177
.org 0x126418
	strb r1, [r4, #30]	@ 00126418 a177
.org 0x12641a
	strb r1, [r4, #31]	@ 0012641a e177
.org 0x12641c
	ldr r2, [sp, #12]	@ 0012641c 039a
.org 0x12641e
	ldr r1, [pc, #272]	@ 0012641e 4449
.org 0x126420
	adds r0, r2, r1	@ 00126420 5018
.org 0x126422
	movs r2, #0	@ 00126422 0022
.org 0x126424
	strb r2, [r0, #0]	@ 00126424 0270
.org 0x126426
	ldr r1, [sp, #12]	@ 00126426 0399
.org 0x126428
	ldr r2, [pc, #264]	@ 00126428 424a
.org 0x12642a
	adds r0, r1, r2	@ 0012642a 8818
.org 0x12642c
	movs r1, #0	@ 0012642c 0021
.org 0x12642e
	strb r1, [r0, #0]	@ 0012642e 0170
.org 0x126430
	ldr r2, [sp, #12]	@ 00126430 039a
.org 0x126432
	ldr r1, [pc, #260]	@ 00126432 4149
.org 0x126434
	adds r0, r2, r1	@ 00126434 5018
.org 0x126436
	movs r2, #0	@ 00126436 0022
.org 0x126438
	strb r2, [r0, #0]	@ 00126438 0270
.org 0x12643a
	ldr r1, [sp, #12]	@ 0012643a 0399
.org 0x12643c
	ldr r2, [pc, #252]	@ 0012643c 3f4a
.org 0x12643e
	adds r0, r1, r2	@ 0012643e 8818
.org 0x126440
	movs r1, #0	@ 00126440 0021
.org 0x126442
	strb r1, [r0, #0]	@ 00126442 0170
.org 0x126444
	mov r2, sl	@ 00126444 5246
.org 0x126446
	str r2, [r4, #36]	@ 00126446 6262
.org 0x126448
	str r2, [r4, #40]	@ 00126448 a262
.org 0x12644a
	str r2, [r4, #44]	@ 0012644a e262
.org 0x12644c
	str r2, [r4, #48]	@ 0012644c 2263
.org 0x12644e
	movs r0, #220	@ 0012644e dc20
.org 0x126450
	negs r0, r0	@ 00126450 4042
.org 0x126452
	add r9, r0	@ 00126452 8144
.org 0x126454
	mov r1, r9	@ 00126454 4946
.org 0x126456
	ldr r0, [r1, #0]	@ 00126456 0868
.org 0x126458
	ldr r2, [pc, #228]	@ 00126458 394a
.org 0x12645a
	mov r8, r2	@ 0012645a 9046
.org 0x12645c
	mov r5, r8	@ 0012645c 4546
.org 0x12645e
	muls r5, r0	@ 0012645e 4543
.org 0x126460
	ldr r6, [pc, #224]	@ 00126460 384e
.org 0x126462
	adds r5, r5, r6	@ 00126462 ad19
.org 0x126464
	str r5, [r1, #0]	@ 00126464 0d60
.org 0x126466
	lsrs r0, r5, #16	@ 00126466 280c
.org 0x126468
	movs r1, #5	@ 00126468 0521
.org 0x12646a
	bl 0x129198	@ 0012646a 02f095fe
.org 0x12646e
	lsls r0, r0, #8	@ 0012646e 0002
.org 0x126470
	str r0, [r4, #52]	@ 00126470 6063
.org 0x126472
	mov r0, r8	@ 00126472 4046
.org 0x126474
	muls r0, r5	@ 00126474 6843
.org 0x126476
	adds r0, r0, r6	@ 00126476 8019
.org 0x126478
	mov r1, r9	@ 00126478 4946
.org 0x12647a
	str r0, [r1, #0]	@ 0012647a 0860
.org 0x12647c
	lsrs r0, r0, #16	@ 0012647c 000c
.org 0x12647e
	movs r1, #5	@ 0012647e 0521
.org 0x126480
	bl 0x129198	@ 00126480 02f08afe
.org 0x126484
	lsls r0, r0, #8	@ 00126484 0002
.org 0x126486
	str r0, [r4, #56]	@ 00126486 a063
.org 0x126488
	mov r2, sl	@ 00126488 5246
.org 0x12648a
	str r2, [r4, #60]	@ 0012648a e263
.org 0x12648c
	str r2, [r4, #64]	@ 0012648c 2264
.org 0x12648e
	str r2, [r4, #68]	@ 0012648e 6264
.org 0x126490
	str r2, [r4, #72]	@ 00126490 a264
.org 0x126492
	movs r0, #255	@ 00126492 ff20
.org 0x126494
	str r0, [r4, #76]	@ 00126494 e064
.org 0x126496
	str r0, [r4, #80]	@ 00126496 2065
.org 0x126498
	str r2, [r4, #84]	@ 00126498 6265
.org 0x12649a
	str r2, [r4, #88]	@ 0012649a a265
.org 0x12649c
	str r2, [r4, #92]	@ 0012649c e265
.org 0x12649e
	str r2, [r4, #96]	@ 0012649e 2266
.org 0x1264a0
	str r2, [r4, #100]	@ 001264a0 6266
.org 0x1264a2
	str r0, [r4, #104]	@ 001264a2 a066
.org 0x1264a4
	str r2, [r4, #108]	@ 001264a4 e266
.org 0x1264a6
	str r2, [r4, #112]	@ 001264a6 2267
.org 0x1264a8
	ldr r0, [sp, #12]	@ 001264a8 0398
.org 0x1264aa
	bl 0x1266fc	@ 001264aa 00f027f9
.org 0x1264ae
	ldr r0, [sp, #16]	@ 001264ae 0498
.org 0x1264b0
	movs r1, #128	@ 001264b0 8021
.org 0x1264b2
	lsls r1, r1, #2	@ 001264b2 8900
.org 0x1264b4
	ldr r2, [sp, #12]	@ 001264b4 039a
.org 0x1264b6
	bl 0x1078d0	@ 001264b6 e1f70bfa
.org 0x1264ba
	movs r1, #160	@ 001264ba a021
.org 0x1264bc
	lsls r1, r1, #3	@ 001264bc c900
.org 0x1264be
	ldr r0, [sp, #16]	@ 001264be 0498
.org 0x1264c0
	movs r2, #0	@ 001264c0 0022
.org 0x1264c2
	bl 0xe8610	@ 001264c2 c2f7a5f8
.org 0x1264c6
	movs r1, #192	@ 001264c6 c021
.org 0x1264c8
	lsls r1, r1, #3	@ 001264c8 c900
.org 0x1264ca
	ldr r0, [sp, #16]	@ 001264ca 0498
.org 0x1264cc
	movs r2, #0	@ 001264cc 0022
.org 0x1264ce
	bl 0xe8610	@ 001264ce c2f79ff8
.org 0x1264d2
	ldr r1, [pc, #116]	@ 001264d2 1d49
.org 0x1264d4
	ldr r0, [sp, #16]	@ 001264d4 0498
.org 0x1264d6
	movs r2, #0	@ 001264d6 0022
.org 0x1264d8
	bl 0xe8610	@ 001264d8 c2f79af8
.org 0x1264dc
	movs r0, #145	@ 001264dc 9120
.org 0x1264de
	bl 0x2a88	@ 001264de dcf6d3fa
.org 0x1264e2
	add sp, #20	@ 001264e2 05b0
.org 0x1264e4
	pop {r3, r4, r5}	@ 001264e4 38bc
.org 0x1264e6
	mov r8, r3	@ 001264e6 9846
.org 0x1264e8
	mov r9, r4	@ 001264e8 a146
.org 0x1264ea
	mov sl, r5	@ 001264ea aa46
.org 0x1264ec
	pop {r4, r5, r6, r7}	@ 001264ec f0bc
.org 0x1264ee
	pop {r0}	@ 001264ee 01bc
.org 0x1264f0
	bx r0	@ 001264f0 0047
