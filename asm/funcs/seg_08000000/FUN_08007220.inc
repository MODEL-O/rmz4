@ FUN_08007220  entry 0x08007220  size 318
.thumb
.org 0x7220
FUN_08007220:
	push {r4, r5, r6, r7, lr}	@ 00007220 f0b5
.org 0x7222
	mov r7, sl	@ 00007222 5746
.org 0x7224
	mov r6, r9	@ 00007224 4e46
.org 0x7226
	mov r5, r8	@ 00007226 4546
.org 0x7228
	push {r5, r6, r7}	@ 00007228 e0b4
.org 0x722a
	sub sp, #44	@ 0000722a 8bb0
.org 0x722c
	mov r8, r1	@ 0000722c 8846
.org 0x722e
	ldr r3, [pc, #220]	@ 0000722e 374b
.org 0x7230
	ldrb r1, [r1, #0]	@ 00007230 0978
.org 0x7232
	mov r4, r8	@ 00007232 4446
.org 0x7234
	ldrb r2, [r4, #2]	@ 00007234 a278
.org 0x7236
	subs r1, r1, r2	@ 00007236 891a
.org 0x7238
	lsls r1, r1, #16	@ 00007238 0904
.org 0x723a
	lsrs r1, r1, #16	@ 0000723a 090c
.org 0x723c
	mov r9, r1	@ 0000723c 8946
.org 0x723e
	ldrb r1, [r4, #1]	@ 0000723e 6178
.org 0x7240
	str r1, [sp, #16]	@ 00007240 0491
.org 0x7242
	ldrb r4, [r4, #3]	@ 00007242 e478
.org 0x7244
	movs r1, #4	@ 00007244 0421
.org 0x7246
	add r8, r1	@ 00007246 8844
.org 0x7248
	ldr r1, [r0, #8]	@ 00007248 8168
.org 0x724a
	ldr r0, [r1, #8]	@ 0000724a 8868
.org 0x724c
	adds r0, r0, r1	@ 0000724c 4018
.org 0x724e
	str r0, [sp, #8]	@ 0000724e 0290
.org 0x7250
	adds r7, r2, #0	@ 00007250 171c
.org 0x7252
	lsls r0, r7, #4	@ 00007252 3801
.org 0x7254
	subs r0, r0, r7	@ 00007254 c01b
.org 0x7256
	strh r0, [r3, #0]	@ 00007256 1880
.org 0x7258
	adds r3, #4	@ 00007258 0433
.org 0x725a
	adds r6, r0, #0	@ 0000725a 061c
.org 0x725c
	lsls r1, r6, #2	@ 0000725c b100
.org 0x725e
	adds r1, r1, r6	@ 0000725e 8919
.org 0x7260
	lsls r1, r1, #1	@ 00007260 4900
.org 0x7262
	movs r0, #15	@ 00007262 0f20
.org 0x7264
	subs r0, r0, r1	@ 00007264 401a
.org 0x7266
	lsls r0, r0, #16	@ 00007266 0004
.org 0x7268
	lsrs r0, r0, #16	@ 00007268 000c
.org 0x726a
	str r0, [sp, #12]	@ 0000726a 0390
.org 0x726c
	ldr r2, [sp, #16]	@ 0000726c 049a
.org 0x726e
	lsls r1, r2, #2	@ 0000726e 9100
.org 0x7270
	adds r1, r1, r2	@ 00007270 8918
.org 0x7272
	lsls r0, r1, #4	@ 00007272 0801
.org 0x7274
	subs r0, r0, r1	@ 00007274 401a
.org 0x7276
	lsls r0, r0, #2	@ 00007276 8000
.org 0x7278
	ldr r1, [sp, #8]	@ 00007278 0299
.org 0x727a
	adds r0, r0, r1	@ 0000727a 4018
.org 0x727c
	ldrh r0, [r0, #0]	@ 0000727c 0088
.org 0x727e
	lsls r1, r0, #16	@ 0000727e 0104
.org 0x7280
	orrs r0, r1	@ 00007280 0843
.org 0x7282
	str r0, [sp, #0]	@ 00007282 0090
.org 0x7284
	ldr r2, [pc, #136]	@ 00007284 224a
.org 0x7286
	mov r0, sp	@ 00007286 6846
.org 0x7288
	adds r1, r3, #0	@ 00007288 191c
.org 0x728a
	str r3, [sp, #40]	@ 0000728a 0a93
.org 0x728c
	bl 0x128be0	@ 0000728c 21f1a8fc
.org 0x7290
	movs r5, #0	@ 00007290 0025
.org 0x7292
	lsls r0, r4, #16	@ 00007292 2004
.org 0x7294
	ldr r3, [sp, #40]	@ 00007294 0a9b
.org 0x7296
	cmp r5, r4	@ 00007296 a542
.org 0x7298
	bge.n 0x734a	@ 00007298 57da
.org 0x729a
	str r7, [sp, #28]	@ 0000729a 0797
.org 0x729c
	str r0, [sp, #32]	@ 0000729c 0890
.org 0x729e
	mov r2, r9	@ 0000729e 4a46
.org 0x72a0
	lsls r0, r2, #16	@ 000072a0 1004
.org 0x72a2
	mov sl, r6	@ 000072a2 b246
.org 0x72a4
	asrs r0, r0, #16	@ 000072a4 0014
.org 0x72a6
	str r0, [sp, #24]	@ 000072a6 0690
.org 0x72a8
	movs r2, #0	@ 000072a8 0022
.org 0x72aa
	lsls r5, r5, #16	@ 000072aa 2d04
.org 0x72ac
	str r5, [sp, #36]	@ 000072ac 0995
.org 0x72ae
	ldr r4, [sp, #28]	@ 000072ae 079c
.org 0x72b0
	cmp r2, r4	@ 000072b0 a242
.org 0x72b2
	bge.n 0x7328	@ 000072b2 39da
.org 0x72b4
	ldr r0, [sp, #16]	@ 000072b4 0498
.org 0x72b6
	str r0, [sp, #20]	@ 000072b6 0590
.org 0x72b8
	mov r1, r8	@ 000072b8 4146
.org 0x72ba
	ldrb r0, [r1, #0]	@ 000072ba 0878
.org 0x72bc
	movs r4, #1	@ 000072bc 0124
.org 0x72be
	add r8, r4	@ 000072be a044
.org 0x72c0
	ldr r1, [sp, #20]	@ 000072c0 0599
.org 0x72c2
	cmp r0, r1	@ 000072c2 8842
.org 0x72c4
	beq.n 0x7314	@ 000072c4 26d0
.org 0x72c6
	lsls r1, r0, #2	@ 000072c6 8100
.org 0x72c8
	adds r1, r1, r0	@ 000072c8 0918
.org 0x72ca
	lsls r0, r1, #4	@ 000072ca 0801
.org 0x72cc
	subs r0, r0, r1	@ 000072cc 401a
.org 0x72ce
	lsls r0, r0, #2	@ 000072ce 8000
.org 0x72d0
	ldr r1, [sp, #8]	@ 000072d0 0299
.org 0x72d2
	adds r4, r1, r0	@ 000072d2 0c18
.org 0x72d4
	movs r6, #0	@ 000072d4 0026
.org 0x72d6
	ldr r0, [sp, #12]	@ 000072d6 0398
.org 0x72d8
	lsls r0, r0, #16	@ 000072d8 0004
.org 0x72da
	mov r9, r0	@ 000072da 8146
.org 0x72dc
	lsls r5, r2, #16	@ 000072dc 1504
.org 0x72de
	mov r1, sl	@ 000072de 5146
.org 0x72e0
	lsls r7, r1, #1	@ 000072e0 4f00
.org 0x72e2
	adds r0, r4, #0	@ 000072e2 201c
.org 0x72e4
	adds r1, r3, #0	@ 000072e4 191c
.org 0x72e6
	movs r2, #30	@ 000072e6 1e22
.org 0x72e8
	str r3, [sp, #40]	@ 000072e8 0a93
.org 0x72ea
	bl 0xb30	@ 000072ea f9f721fc
.org 0x72ee
	ldr r3, [sp, #40]	@ 000072ee 0a9b
.org 0x72f0
	adds r3, r3, r7	@ 000072f0 db19
.org 0x72f2
	adds r4, #30	@ 000072f2 1e34
.org 0x72f4
	lsls r0, r6, #16	@ 000072f4 3004
.org 0x72f6
	movs r2, #128	@ 000072f6 8022
.org 0x72f8
	lsls r2, r2, #9	@ 000072f8 5202
.org 0x72fa
	adds r0, r0, r2	@ 000072fa 8018
.org 0x72fc
	lsrs r6, r0, #16	@ 000072fc 060c
.org 0x72fe
	asrs r0, r0, #16	@ 000072fe 0014
.org 0x7300
	cmp r0, #9	@ 00007300 0928
.org 0x7302
	ble.n 0x72e2	@ 00007302 eedd
.org 0x7304
	mov r4, r9	@ 00007304 4c46
.org 0x7306
	asrs r0, r4, #15	@ 00007306 e013
.org 0x7308
	adds r3, r3, r0	@ 00007308 1b18
.org 0x730a
	b.n 0x7318	@ 0000730a 05e0
.org 0x730c
	.byte 0x90,0x12,0x00,0x02	@ 0000730c data
.org 0x7310
	.byte 0x08,0xae,0x00,0x01	@ 00007310 data
.org 0x7314
	adds r3, #30	@ 00007314 1e33
.org 0x7316
	lsls r5, r2, #16	@ 00007316 1504
.org 0x7318
	movs r1, #128	@ 00007318 8021
.org 0x731a
	lsls r1, r1, #9	@ 0000731a 4902
.org 0x731c
	adds r0, r5, r1	@ 0000731c 6818
.org 0x731e
	lsrs r2, r0, #16	@ 0000731e 020c
.org 0x7320
	asrs r0, r0, #16	@ 00007320 0014
.org 0x7322
	ldr r4, [sp, #28]	@ 00007322 079c
.org 0x7324
	cmp r0, r4	@ 00007324 a042
.org 0x7326
	blt.n 0x72b8	@ 00007326 c7db
.org 0x7328
	ldr r0, [sp, #24]	@ 00007328 0698
.org 0x732a
	add r8, r0	@ 0000732a 8044
.org 0x732c
	mov r1, sl	@ 0000732c 5146
.org 0x732e
	lsls r0, r1, #3	@ 0000732e c800
.org 0x7330
	add r0, sl	@ 00007330 5044
.org 0x7332
	lsls r0, r0, #1	@ 00007332 4000
.org 0x7334
	adds r3, r3, r0	@ 00007334 1b18
.org 0x7336
	ldr r2, [sp, #36]	@ 00007336 099a
.org 0x7338
	movs r4, #128	@ 00007338 8024
.org 0x733a
	lsls r4, r4, #9	@ 0000733a 6402
.org 0x733c
	adds r1, r2, r4	@ 0000733c 1119
.org 0x733e
	lsrs r5, r1, #16	@ 0000733e 0d0c
.org 0x7340
	asrs r1, r1, #16	@ 00007340 0914
.org 0x7342
	ldr r2, [sp, #32]	@ 00007342 089a
.org 0x7344
	asrs r0, r2, #16	@ 00007344 1014
.org 0x7346
	cmp r1, r0	@ 00007346 8142
.org 0x7348
	blt.n 0x72a8	@ 00007348 aedb
.org 0x734a
	ldr r0, [pc, #28]	@ 0000734a 0748
.org 0x734c
	movs r4, #176	@ 0000734c b024
.org 0x734e
	lsls r4, r4, #10	@ 0000734e a402
.org 0x7350
	adds r0, r0, r4	@ 00007350 0019
.org 0x7352
	movs r1, #0	@ 00007352 0021
.org 0x7354
	strh r1, [r0, #0]	@ 00007354 0180
.org 0x7356
	add sp, #44	@ 00007356 0bb0
.org 0x7358
	pop {r3, r4, r5}	@ 00007358 38bc
.org 0x735a
	mov r8, r3	@ 0000735a 9846
.org 0x735c
	mov r9, r4	@ 0000735c a146
