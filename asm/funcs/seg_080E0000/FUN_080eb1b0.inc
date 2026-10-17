@ FUN_080eb1b0  entry 0x080eb1b0  size 384
.thumb
.org 0xeb1b0
FUN_080eb1b0:
	push {r4, r5, r6, lr}	@ 000eb1b0 70b5
.org 0xeb1b2
	sub sp, #8	@ 000eb1b2 82b0
.org 0xeb1b4
	adds r6, r0, #0	@ 000eb1b4 061c
.org 0xeb1b6
	ldrb r0, [r6, #17]	@ 000eb1b6 707c
.org 0xeb1b8
	cmp r0, #0	@ 000eb1b8 0028
.org 0xeb1ba
	beq.n 0xeb220	@ 000eb1ba 31d0
.org 0xeb1bc
	ldrb r1, [r6, #10]	@ 000eb1bc b17a
.org 0xeb1be
	movs r0, #2	@ 000eb1be 0220
.org 0xeb1c0
	movs r5, #0	@ 000eb1c0 0025
.org 0xeb1c2
	orrs r0, r1	@ 000eb1c2 0843
.org 0xeb1c4
	movs r1, #4	@ 000eb1c4 0421
.org 0xeb1c6
	orrs r0, r1	@ 000eb1c6 0843
.org 0xeb1c8
	strb r0, [r6, #10]	@ 000eb1c8 b072
.org 0xeb1ca
	adds r4, r6, #0	@ 000eb1ca 341c
.org 0xeb1cc
	adds r4, #116	@ 000eb1cc 7434
.org 0xeb1ce
	ldr r1, [pc, #68]	@ 000eb1ce 1149
.org 0xeb1d0
	adds r2, r6, #0	@ 000eb1d0 321c
.org 0xeb1d2
	adds r2, #84	@ 000eb1d2 5432
.org 0xeb1d4
	adds r0, r4, #0	@ 000eb1d4 201c
.org 0xeb1d6
	movs r3, #0	@ 000eb1d6 0023
.org 0xeb1d8
	bl 0x5760	@ 000eb1d8 1af7c2fa
.org 0xeb1dc
	str r6, [r4, #44]	@ 000eb1dc e662
.org 0xeb1de
	ldr r0, [pc, #56]	@ 000eb1de 0e48
.org 0xeb1e0
	str r0, [r4, #36]	@ 000eb1e0 6062
.org 0xeb1e2
	adds r0, r6, #0	@ 000eb1e2 301c
.org 0xeb1e4
	adds r0, #180	@ 000eb1e4 b430
.org 0xeb1e6
	str r5, [r0, #0]	@ 000eb1e6 0560
.org 0xeb1e8
	ldr r0, [r6, #88]	@ 000eb1e8 b06d
.org 0xeb1ea
	movs r1, #128	@ 000eb1ea 8021
.org 0xeb1ec
	lsls r1, r1, #4	@ 000eb1ec 0901
.org 0xeb1ee
	adds r0, r0, r1	@ 000eb1ee 4018
.org 0xeb1f0
	str r0, [r6, #88]	@ 000eb1f0 b065
.org 0xeb1f2
	ldr r1, [pc, #40]	@ 000eb1f2 0a49
.org 0xeb1f4
	ldrb r0, [r6, #9]	@ 000eb1f4 707a
.org 0xeb1f6
	lsls r0, r0, #2	@ 000eb1f6 8000
.org 0xeb1f8
	adds r0, r0, r1	@ 000eb1f8 4018
.org 0xeb1fa
	movs r1, #1	@ 000eb1fa 0121
.org 0xeb1fc
	str r1, [r6, #12]	@ 000eb1fc f160
.org 0xeb1fe
	ldr r0, [r0, #0]	@ 000eb1fe 0068
.org 0xeb200
	ldr r0, [r0, #4]	@ 000eb200 4068
.org 0xeb202
	str r0, [r6, #20]	@ 000eb202 7061
.org 0xeb204
	movs r0, #2	@ 000eb204 0220
.org 0xeb206
	strb r0, [r6, #13]	@ 000eb206 7073
.org 0xeb208
	strb r5, [r6, #15]	@ 000eb208 f573
.org 0xeb20a
	strb r5, [r6, #14]	@ 000eb20a b573
.org 0xeb20c
	adds r0, r6, #0	@ 000eb20c 301c
.org 0xeb20e
	bl 0xeb368	@ 000eb20e 00f0abf8
.org 0xeb212
	b.n 0xeb358	@ 000eb212 a1e0
.org 0xeb214
	.byte 0x44,0x96,0x86,0x08	@ 000eb214 data
.org 0xeb218
	.byte 0xb5,0xb3,0x0e,0x08	@ 000eb218 data
.org 0xeb21c
	.byte 0xfc,0x92,0x86,0x08	@ 000eb21c data
.org 0xeb220
	adds r0, r6, #0	@ 000eb220 301c
.org 0xeb222
	bl 0x1cc9c	@ 000eb222 31f73bfd
.org 0xeb226
	ldrb r0, [r6, #16]	@ 000eb226 307c
.org 0xeb228
	subs r0, #3	@ 000eb228 0338
.org 0xeb22a
	lsls r0, r0, #24	@ 000eb22a 0006
.org 0xeb22c
	lsrs r0, r0, #24	@ 000eb22c 000e
.org 0xeb22e
	cmp r0, #1	@ 000eb22e 0128
.org 0xeb230
	bhi.n 0xeb23a	@ 000eb230 03d8
.org 0xeb232
	adds r0, r6, #0	@ 000eb232 301c
.org 0xeb234
	bl 0x1ceec	@ 000eb234 31f75afe
.org 0xeb238
	b.n 0xeb286	@ 000eb238 25e0
.org 0xeb23a
	ldr r1, [pc, #208]	@ 000eb23a 3449
.org 0xeb23c
	ldrb r0, [r6, #16]	@ 000eb23c 307c
.org 0xeb23e
	lsls r0, r0, #3	@ 000eb23e c000
.org 0xeb240
	adds r0, r0, r1	@ 000eb240 4018
.org 0xeb242
	ldrh r4, [r0, #0]	@ 000eb242 0488
.org 0xeb244
	lsrs r4, r4, #8	@ 000eb244 240a
.org 0xeb246
	lsls r5, r4, #2	@ 000eb246 a500
.org 0xeb248
	adds r5, r5, r4	@ 000eb248 2d19
.org 0xeb24a
	lsls r5, r5, #2	@ 000eb24a ad00
.org 0xeb24c
	ldr r0, [pc, #192]	@ 000eb24c 3048
.org 0xeb24e
	adds r0, r5, r0	@ 000eb24e 2818
.org 0xeb250
	ldr r1, [pc, #192]	@ 000eb250 3049
.org 0xeb252
	lsls r4, r4, #1	@ 000eb252 6400
.org 0xeb254
	adds r1, r4, r1	@ 000eb254 6118
.org 0xeb256
	ldrh r1, [r1, #0]	@ 000eb256 0988
.org 0xeb258
	ldrh r2, [r0, #6]	@ 000eb258 c288
.org 0xeb25a
	lsrs r2, r2, #6	@ 000eb25a 9209
.org 0xeb25c
	subs r1, r1, r2	@ 000eb25c 891a
.org 0xeb25e
	lsls r1, r1, #5	@ 000eb25e 4901
.org 0xeb260
	movs r2, #128	@ 000eb260 8022
.org 0xeb262
	lsls r2, r2, #9	@ 000eb262 5202
.org 0xeb264
	adds r1, r1, r2	@ 000eb264 8918
.org 0xeb266
	bl 0x1d30	@ 000eb266 16f763fd
.org 0xeb26a
	ldr r0, [pc, #172]	@ 000eb26a 2b48
.org 0xeb26c
	adds r5, r5, r0	@ 000eb26c 2d18
.org 0xeb26e
	ldr r0, [pc, #172]	@ 000eb26e 2b48
.org 0xeb270
	adds r4, r4, r0	@ 000eb270 2418
.org 0xeb272
	ldrh r1, [r4, #0]	@ 000eb272 2188
.org 0xeb274
	ldrb r0, [r5, #7]	@ 000eb274 e879
.org 0xeb276
	subs r1, r1, r0	@ 000eb276 091a
.org 0xeb278
	lsls r1, r1, #5	@ 000eb278 4901
.org 0xeb27a
	movs r2, #128	@ 000eb27a 8022
.org 0xeb27c
	lsls r2, r2, #2	@ 000eb27c 9200
.org 0xeb27e
	adds r1, r1, r2	@ 000eb27e 8918
.org 0xeb280
	adds r0, r5, #0	@ 000eb280 281c
.org 0xeb282
	bl 0x2208	@ 000eb282 16f7c1ff
.org 0xeb286
	ldrb r1, [r6, #10]	@ 000eb286 b17a
.org 0xeb288
	movs r0, #1	@ 000eb288 0120
.org 0xeb28a
	movs r5, #0	@ 000eb28a 0025
.org 0xeb28c
	orrs r0, r1	@ 000eb28c 0843
.org 0xeb28e
	movs r1, #2	@ 000eb28e 0221
.org 0xeb290
	orrs r0, r1	@ 000eb290 0843
.org 0xeb292
	movs r1, #4	@ 000eb292 0421
.org 0xeb294
	orrs r0, r1	@ 000eb294 0843
.org 0xeb296
	strb r0, [r6, #10]	@ 000eb296 b072
.org 0xeb298
	adds r4, r6, #0	@ 000eb298 341c
.org 0xeb29a
	adds r4, #116	@ 000eb29a 7434
.org 0xeb29c
	ldr r1, [pc, #128]	@ 000eb29c 2049
.org 0xeb29e
	adds r2, r6, #0	@ 000eb29e 321c
.org 0xeb2a0
	adds r2, #84	@ 000eb2a0 5432
.org 0xeb2a2
	adds r0, r4, #0	@ 000eb2a2 201c
.org 0xeb2a4
	movs r3, #0	@ 000eb2a4 0023
.org 0xeb2a6
	bl 0x5760	@ 000eb2a6 1af75bfa
.org 0xeb2aa
	str r6, [r4, #44]	@ 000eb2aa e662
.org 0xeb2ac
	str r5, [r4, #36]	@ 000eb2ac 6562
.org 0xeb2ae
	ldr r0, [r6, #84]	@ 000eb2ae 706d
.org 0xeb2b0
	ldr r1, [r6, #88]	@ 000eb2b0 b16d
.org 0xeb2b2
	mov r2, sp	@ 000eb2b2 6a46
.org 0xeb2b4
	bl 0x70b0	@ 000eb2b4 1bf7fcfe
.org 0xeb2b8
	ldr r2, [r6, #84]	@ 000eb2b8 726d
.org 0xeb2ba
	movs r0, #128	@ 000eb2ba 8020
.org 0xeb2bc
	lsls r0, r0, #4	@ 000eb2bc 0001
.org 0xeb2be
	adds r2, r2, r0	@ 000eb2be 1218
.org 0xeb2c0
	str r2, [r6, #84]	@ 000eb2c0 7265
.org 0xeb2c2
	ldr r0, [r6, #88]	@ 000eb2c2 b06d
.org 0xeb2c4
	ldr r1, [pc, #92]	@ 000eb2c4 1749
.org 0xeb2c6
	adds r0, r0, r1	@ 000eb2c6 4018
.org 0xeb2c8
	ldr r1, [sp, #4]	@ 000eb2c8 0199
.org 0xeb2ca
	adds r3, r0, r1	@ 000eb2ca 4318
.org 0xeb2cc
	str r3, [r6, #88]	@ 000eb2cc b365
.org 0xeb2ce
	ldr r1, [pc, #88]	@ 000eb2ce 1649
.org 0xeb2d0
	ldrb r0, [r6, #9]	@ 000eb2d0 707a
.org 0xeb2d2
	lsls r0, r0, #2	@ 000eb2d2 8000
.org 0xeb2d4
	adds r0, r0, r1	@ 000eb2d4 4018
.org 0xeb2d6
	movs r4, #1	@ 000eb2d6 0124
.org 0xeb2d8
	str r4, [r6, #12]	@ 000eb2d8 f460
.org 0xeb2da
	ldr r0, [r0, #0]	@ 000eb2da 0068
.org 0xeb2dc
	ldr r0, [r0, #4]	@ 000eb2dc 4068
.org 0xeb2de
	str r0, [r6, #20]	@ 000eb2de 7061
.org 0xeb2e0
	ldr r0, [pc, #72]	@ 000eb2e0 1248
.org 0xeb2e2
	ldr r1, [r0, #0]	@ 000eb2e2 0168
.org 0xeb2e4
	ldr r0, [r1, #84]	@ 000eb2e4 486d
.org 0xeb2e6
	subs r0, r0, r2	@ 000eb2e6 801a
.org 0xeb2e8
	movs r2, #128	@ 000eb2e8 8022
.org 0xeb2ea
	lsls r2, r2, #6	@ 000eb2ea 9201
.org 0xeb2ec
	adds r0, r0, r2	@ 000eb2ec 8018
.org 0xeb2ee
	movs r2, #128	@ 000eb2ee 8022
.org 0xeb2f0
	lsls r2, r2, #7	@ 000eb2f0 d201
.org 0xeb2f2
	cmp r0, r2	@ 000eb2f2 9042
.org 0xeb2f4
	bhi.n 0xeb330	@ 000eb2f4 1cd8
.org 0xeb2f6
	ldr r0, [r1, #88]	@ 000eb2f6 886d
.org 0xeb2f8
	subs r0, r0, r3	@ 000eb2f8 c01a
.org 0xeb2fa
	movs r1, #128	@ 000eb2fa 8021
.org 0xeb2fc
	lsls r1, r1, #6	@ 000eb2fc 8901
.org 0xeb2fe
	adds r0, r0, r1	@ 000eb2fe 4018
.org 0xeb300
	cmp r0, r2	@ 000eb300 9042
.org 0xeb302
	bhi.n 0xeb330	@ 000eb302 15d8
.org 0xeb304
	strb r4, [r6, #13]	@ 000eb304 7473
.org 0xeb306
	strb r5, [r6, #15]	@ 000eb306 f573
.org 0xeb308
	strb r5, [r6, #14]	@ 000eb308 b573
.org 0xeb30a
	b.n 0xeb338	@ 000eb30a 15e0
.org 0xeb30c
	.byte 0xd4,0x96,0x86,0x08	@ 000eb30c data
.org 0xeb310
	.byte 0x00,0x40,0xc4,0x08	@ 000eb310 data
.org 0xeb314
	.byte 0x40,0xe0,0x02,0x02	@ 000eb314 data
.org 0xeb318
	.byte 0x0c,0x40,0xc4,0x08	@ 000eb318 data
.org 0xeb31c
	.byte 0x40,0xde,0x02,0x02	@ 000eb31c data
.org 0xeb320
	.byte 0x14,0x96,0x86,0x08	@ 000eb320 data
.org 0xeb324
	.byte 0xff,0x0f,0x00,0x00	@ 000eb324 data
.org 0xeb328
	.byte 0xfc,0x92,0x86,0x08	@ 000eb328 data
.org 0xeb32c
	.byte 0xf0,0xdb,0x02,0x02	@ 000eb32c data
