@ FUN_080211b0  entry 0x080211b0  size 1738
.thumb
.org 0x211b0
FUN_080211b0:
	push {r4, r5, r6, r7, lr}	@ 000211b0 f0b5
.org 0x211b2
	mov r7, sl	@ 000211b2 5746
.org 0x211b4
	mov r6, r9	@ 000211b4 4e46
.org 0x211b6
	mov r5, r8	@ 000211b6 4546
.org 0x211b8
	push {r5, r6, r7}	@ 000211b8 e0b4
.org 0x211ba
	mov r8, r0	@ 000211ba 8046
.org 0x211bc
	ldr r0, [r0, #32]	@ 000211bc 006a
.org 0x211be
	mov r9, r0	@ 000211be 8146
.org 0x211c0
	movs r6, #190	@ 000211c0 be26
.org 0x211c2
	lsls r6, r6, #1	@ 000211c2 7600
.org 0x211c4
	add r6, r8	@ 000211c4 4644
.org 0x211c6
	ldrb r0, [r6, #0]	@ 000211c6 3078
.org 0x211c8
	cmp r0, #0	@ 000211c8 0028
.org 0x211ca
	beq.n 0x211ce	@ 000211ca 00d0
.org 0x211cc
	b.n 0x21358	@ 000211cc c4e0
.org 0x211ce
	ldr r5, [pc, #80]	@ 000211ce 144d
.org 0x211d0
	ldrh r0, [r5, #8]	@ 000211d0 2889
.org 0x211d2
	movs r1, #1	@ 000211d2 0121
.org 0x211d4
	mov sl, r1	@ 000211d4 8a46
.org 0x211d6
	movs r7, #0	@ 000211d6 0027
.org 0x211d8
	mov r1, sl	@ 000211d8 5146
.org 0x211da
	orrs r0, r1	@ 000211da 0843
.org 0x211dc
	strh r0, [r5, #8]	@ 000211dc 2881
.org 0x211de
	ldr r2, [pc, #68]	@ 000211de 114a
.org 0x211e0
	ldrb r1, [r2, #4]	@ 000211e0 1179
.org 0x211e2
	movs r0, #8	@ 000211e2 0820
.org 0x211e4
	orrs r0, r1	@ 000211e4 0843
.org 0x211e6
	strb r0, [r2, #4]	@ 000211e6 1071
.org 0x211e8
	ldr r1, [pc, #60]	@ 000211e8 0f49
.org 0x211ea
	add r1, r8	@ 000211ea 4144
.org 0x211ec
	strb r7, [r1, #0]	@ 000211ec 0f70
.org 0x211ee
	movs r1, #64	@ 000211ee 4021
.org 0x211f0
	ands r0, r1	@ 000211f0 0840
.org 0x211f2
	cmp r0, #0	@ 000211f2 0028
.org 0x211f4
	beq.n 0x21234	@ 000211f4 1ed0
.org 0x211f6
	movs r0, #161	@ 000211f6 a120
.org 0x211f8
	lsls r0, r0, #2	@ 000211f8 8000
.org 0x211fa
	adds r1, r5, r0	@ 000211fa 2918
.org 0x211fc
	ldr r0, [pc, #44]	@ 000211fc 0b48
.org 0x211fe
	str r0, [r1, #0]	@ 000211fe 0860
.org 0x21200
	adds r0, r5, #0	@ 00021200 281c
.org 0x21202
	adds r0, #16	@ 00021202 1030
.org 0x21204
	ldr r1, [pc, #40]	@ 00021204 0a49
.org 0x21206
	ldr r1, [r1, #16]	@ 00021206 0969
.org 0x21208
	ldr r1, [r1, #64]	@ 00021208 096c
.org 0x2120a
	bl 0x275f0	@ 0002120a 06f0f1f9
.org 0x2120e
	movs r1, #192	@ 0002120e c021
.org 0x21210
	lsls r1, r1, #1	@ 00021210 4900
.org 0x21212
	add r1, r8	@ 00021212 4144
.org 0x21214
	movs r0, #225	@ 00021214 e120
.org 0x21216
	lsls r0, r0, #3	@ 00021216 c000
.org 0x21218
	str r0, [r1, #0]	@ 00021218 0860
.org 0x2121a
	movs r0, #20	@ 0002121a 1420
.org 0x2121c
	b.n 0x217c0	@ 0002121c d0e2
.org 0x2121e
	.byte 0x00	@ 0002121e data
.org 0x2121f
	.byte 0x00	@ 0002121f data
.org 0x21220
	.byte 0x10,0xe9,0x02,0x02	@ 00021220 data
.org 0x21224
	.byte 0xb0,0xe8,0x02,0x02	@ 00021224 data
.org 0x21228
	.byte 0x7d,0x01,0x00,0x00	@ 00021228 data
.org 0x2122c
	.byte 0xd0,0x20,0x00,0x00	@ 0002122c data
.org 0x21230
	.byte 0xf8,0x2c,0x84,0x08	@ 00021230 data
.org 0x21234
	ldrb r4, [r5, #2]	@ 00021234 ac78
.org 0x21236
	cmp r4, #0	@ 00021236 002c
.org 0x21238
	bne.n 0x21268	@ 00021238 16d1
.org 0x2123a
	movs r0, #161	@ 0002123a a120
.org 0x2123c
	lsls r0, r0, #2	@ 0002123c 8000
.org 0x2123e
	adds r1, r5, r0	@ 0002123e 2918
.org 0x21240
	ldr r0, [pc, #28]	@ 00021240 0748
.org 0x21242
	str r0, [r1, #0]	@ 00021242 0860
.org 0x21244
	adds r0, r5, #0	@ 00021244 281c
.org 0x21246
	adds r0, #16	@ 00021246 1030
.org 0x21248
	ldr r1, [pc, #24]	@ 00021248 0649
.org 0x2124a
	ldr r1, [r1, #16]	@ 0002124a 0969
.org 0x2124c
	ldr r1, [r1, #0]	@ 0002124c 0968
.org 0x2124e
	bl 0x275f0	@ 0002124e 06f0cff9
.org 0x21252
	movs r0, #1	@ 00021252 0120
.org 0x21254
	bl 0x1f63c	@ 00021254 fef7f2f9
.org 0x21258
	mov r1, sl	@ 00021258 5146
.org 0x2125a
	strb r1, [r6, #0]	@ 0002125a 3170
.org 0x2125c
	b.n 0x217c2	@ 0002125c b1e2
.org 0x2125e
	.byte 0x00	@ 0002125e data
.org 0x2125f
	.byte 0x00	@ 0002125f data
.org 0x21260
	.byte 0xd0,0x20,0x00,0x00	@ 00021260 data
.org 0x21264
	.byte 0xf8,0x2c,0x84,0x08	@ 00021264 data
.org 0x21268
	cmp r4, #1	@ 00021268 012c
.org 0x2126a
	bne.n 0x21298	@ 0002126a 15d1
.org 0x2126c
	movs r0, #161	@ 0002126c a120
.org 0x2126e
	lsls r0, r0, #2	@ 0002126e 8000
.org 0x21270
	adds r1, r5, r0	@ 00021270 2918
.org 0x21272
	ldr r0, [pc, #28]	@ 00021272 0748
.org 0x21274
	str r0, [r1, #0]	@ 00021274 0860
.org 0x21276
	adds r0, r5, #0	@ 00021276 281c
.org 0x21278
	adds r0, #16	@ 00021278 1030
.org 0x2127a
	ldr r1, [pc, #24]	@ 0002127a 0649
.org 0x2127c
	ldr r1, [r1, #16]	@ 0002127c 0969
.org 0x2127e
	ldr r1, [r1, #4]	@ 0002127e 4968
.org 0x21280
	bl 0x275f0	@ 00021280 06f0b6f9
.org 0x21284
	movs r0, #2	@ 00021284 0220
.org 0x21286
	bl 0x1f63c	@ 00021286 fef7d9f9
.org 0x2128a
	movs r0, #2	@ 0002128a 0220
.org 0x2128c
	b.n 0x217c0	@ 0002128c 98e2
.org 0x2128e
	.byte 0x00	@ 0002128e data
.org 0x2128f
	.byte 0x00	@ 0002128f data
.org 0x21290
	.byte 0xd0,0x20,0x00,0x00	@ 00021290 data
.org 0x21294
	.byte 0xf8,0x2c,0x84,0x08	@ 00021294 data
.org 0x21298
	cmp r4, #2	@ 00021298 022c
.org 0x2129a
	bne.n 0x212c0	@ 0002129a 11d1
.org 0x2129c
	movs r0, #161	@ 0002129c a120
.org 0x2129e
	lsls r0, r0, #2	@ 0002129e 8000
.org 0x212a0
	adds r1, r5, r0	@ 000212a0 2918
.org 0x212a2
	ldr r0, [pc, #20]	@ 000212a2 0548
.org 0x212a4
	str r0, [r1, #0]	@ 000212a4 0860
.org 0x212a6
	adds r0, r5, #0	@ 000212a6 281c
.org 0x212a8
	adds r0, #16	@ 000212a8 1030
.org 0x212aa
	ldr r1, [pc, #16]	@ 000212aa 0449
.org 0x212ac
	ldr r1, [r1, #16]	@ 000212ac 0969
.org 0x212ae
	ldr r1, [r1, #8]	@ 000212ae 8968
.org 0x212b0
	bl 0x275f0	@ 000212b0 06f09ef9
.org 0x212b4
	strb r4, [r6, #0]	@ 000212b4 3470
.org 0x212b6
	b.n 0x217c2	@ 000212b6 84e2
.org 0x212b8
	.byte 0xd0,0x20,0x00,0x00	@ 000212b8 data
.org 0x212bc
	.byte 0xf8,0x2c,0x84,0x08	@ 000212bc data
.org 0x212c0
	cmp r4, #3	@ 000212c0 032c
.org 0x212c2
	bne.n 0x212e0	@ 000212c2 0dd1
.org 0x212c4
	adds r0, r5, #0	@ 000212c4 281c
.org 0x212c6
	adds r0, #16	@ 000212c6 1030
.org 0x212c8
	ldr r1, [pc, #16]	@ 000212c8 0449
.org 0x212ca
	ldr r1, [r1, #16]	@ 000212ca 0969
.org 0x212cc
	ldr r1, [r1, #16]	@ 000212cc 0969
.org 0x212ce
	bl 0x275f0	@ 000212ce 06f08ff9
.org 0x212d2
	movs r0, #4	@ 000212d2 0420
.org 0x212d4
	bl 0x1f63c	@ 000212d4 fef7b2f9
.org 0x212d8
	movs r0, #4	@ 000212d8 0420
.org 0x212da
	b.n 0x217c0	@ 000212da 71e2
.org 0x212dc
	.byte 0xf8,0x2c,0x84,0x08	@ 000212dc data
.org 0x212e0
	cmp r4, #4	@ 000212e0 042c
.org 0x212e2
	bne.n 0x21304	@ 000212e2 0fd1
.org 0x212e4
	adds r0, r5, #0	@ 000212e4 281c
.org 0x212e6
	adds r0, #16	@ 000212e6 1030
.org 0x212e8
	ldr r1, [pc, #20]	@ 000212e8 0549
.org 0x212ea
	ldr r1, [r1, #16]	@ 000212ea 0969
.org 0x212ec
	ldr r1, [r1, #24]	@ 000212ec 8969
.org 0x212ee
	bl 0x275f0	@ 000212ee 06f07ff9
.org 0x212f2
	ldrh r0, [r5, #8]	@ 000212f2 2889
.org 0x212f4
	movs r1, #2	@ 000212f4 0221
.org 0x212f6
	orrs r0, r1	@ 000212f6 0843
.org 0x212f8
	strh r0, [r5, #8]	@ 000212f8 2881
.org 0x212fa
	movs r0, #5	@ 000212fa 0520
.org 0x212fc
	b.n 0x217c0	@ 000212fc 60e2
.org 0x212fe
	.byte 0x00	@ 000212fe data
.org 0x212ff
	.byte 0x00	@ 000212ff data
.org 0x21300
	.byte 0xf8,0x2c,0x84,0x08	@ 00021300 data
.org 0x21304
	cmp r4, #5	@ 00021304 052c
.org 0x21306
	bne.n 0x21320	@ 00021306 0bd1
.org 0x21308
	adds r0, r5, #0	@ 00021308 281c
.org 0x2130a
	adds r0, #16	@ 0002130a 1030
.org 0x2130c
	ldr r1, [pc, #12]	@ 0002130c 0349
.org 0x2130e
	ldr r1, [r1, #16]	@ 0002130e 0969
.org 0x21310
	ldr r1, [r1, #32]	@ 00021310 096a
.org 0x21312
	bl 0x275f0	@ 00021312 06f06df9
.org 0x21316
	movs r0, #9	@ 00021316 0920
.org 0x21318
	b.n 0x217c0	@ 00021318 52e2
.org 0x2131a
	.byte 0x00	@ 0002131a data
.org 0x2131b
	.byte 0x00	@ 0002131b data
.org 0x2131c
	.byte 0xf8,0x2c,0x84,0x08	@ 0002131c data
.org 0x21320
	cmp r4, #6	@ 00021320 062c
.org 0x21322
	bne.n 0x2133c	@ 00021322 0bd1
.org 0x21324
	adds r0, r5, #0	@ 00021324 281c
.org 0x21326
	adds r0, #16	@ 00021326 1030
.org 0x21328
	ldr r1, [pc, #12]	@ 00021328 0349
.org 0x2132a
	ldr r1, [r1, #16]	@ 0002132a 0969
.org 0x2132c
	ldr r1, [r1, #40]	@ 0002132c 896a
.org 0x2132e
	bl 0x275f0	@ 0002132e 06f05ff9
.org 0x21332
	movs r0, #11	@ 00021332 0b20
.org 0x21334
	b.n 0x217c0	@ 00021334 44e2
.org 0x21336
	.byte 0x00	@ 00021336 data
.org 0x21337
	.byte 0x00	@ 00021337 data
.org 0x21338
	.byte 0xf8,0x2c,0x84,0x08	@ 00021338 data
.org 0x2133c
	cmp r4, #7	@ 0002133c 072c
.org 0x2133e
	beq.n 0x21342	@ 0002133e 00d0
.org 0x21340
	b.n 0x217c2	@ 00021340 3fe2
.org 0x21342
	adds r0, r5, #0	@ 00021342 281c
.org 0x21344
	adds r0, #16	@ 00021344 1030
.org 0x21346
	ldr r1, [pc, #12]	@ 00021346 0349
.org 0x21348
	ldr r1, [r1, #16]	@ 00021348 0969
.org 0x2134a
	ldr r1, [r1, #48]	@ 0002134a 096b
.org 0x2134c
	bl 0x275f0	@ 0002134c 06f050f9
.org 0x21350
	movs r0, #12	@ 00021350 0c20
.org 0x21352
	b.n 0x217c0	@ 00021352 35e2
.org 0x21354
	.byte 0xf8,0x2c,0x84,0x08	@ 00021354 data
.org 0x21358
	cmp r0, #1	@ 00021358 0128
.org 0x2135a
	bne.n 0x21366	@ 0002135a 04d1
.org 0x2135c
	movs r0, #2	@ 0002135c 0220
.org 0x2135e
	bl 0x1f63c	@ 0002135e fef76df9
.org 0x21362
	movs r0, #2	@ 00021362 0220
.org 0x21364
	b.n 0x217c0	@ 00021364 2ce2
.org 0x21366
	cmp r0, #2	@ 00021366 0228
.org 0x21368
	bne.n 0x213a0	@ 00021368 1ad1
.org 0x2136a
	mov r1, r9	@ 0002136a 4946
.org 0x2136c
	ldr r0, [r1, #84]	@ 0002136c 486d
.org 0x2136e
	ldr r1, [pc, #36]	@ 0002136e 0949
.org 0x21370
	adds r0, r0, r1	@ 00021370 4018
.org 0x21372
	movs r1, #240	@ 00021372 f021
.org 0x21374
	lsls r1, r1, #10	@ 00021374 8902
.org 0x21376
	bl 0x129050	@ 00021376 07f16bfe
.org 0x2137a
	movs r1, #240	@ 0002137a f021
.org 0x2137c
	lsls r1, r1, #8	@ 0002137c 0902
.org 0x2137e
	adds r0, r0, r1	@ 0002137e 4018
.org 0x21380
	ldr r1, [pc, #20]	@ 00021380 0549
.org 0x21382
	cmp r0, r1	@ 00021382 8842
.org 0x21384
	ble.n 0x213a0	@ 00021384 0cdd
.org 0x21386
	mov r0, r9	@ 00021386 4846
.org 0x21388
	ldr r1, [r0, #88]	@ 00021388 816d
.org 0x2138a
	ldr r0, [pc, #16]	@ 0002138a 0448
.org 0x2138c
	cmp r1, r0	@ 0002138c 8142
.org 0x2138e
	ble.n 0x213a0	@ 0002138e 07dd
.org 0x21390
	movs r0, #3	@ 00021390 0320
.org 0x21392
	b.n 0x217c0	@ 00021392 15e2
.org 0x21394
	.byte 0x00,0x10,0xff,0xff	@ 00021394 data
.org 0x21398
	.byte 0xff,0x8f,0x01,0x00	@ 00021398 data
.org 0x2139c
	.byte 0xff,0xbf,0x12,0x00	@ 0002139c data
.org 0x213a0
	.byte 0xbe,0x25	@ 000213a0 (raw)
.org 0x213a2
	.byte 0x6d,0x00	@ 000213a2 (raw)
.org 0x213a4
	.byte 0x45,0x44	@ 000213a4 (raw)
.org 0x213a6
	ldrb r0, [r5, #0]	@ 000213a6 2878
.org 0x213a8
	cmp r0, #3	@ 000213a8 0328
.org 0x213aa
	bne.n 0x213e0	@ 000213aa 19d1
.org 0x213ac
	mov r1, r9	@ 000213ac 4946
.org 0x213ae
	ldr r0, [r1, #84]	@ 000213ae 486d
.org 0x213b0
	ldr r1, [pc, #32]	@ 000213b0 0849
.org 0x213b2
	adds r0, r0, r1	@ 000213b2 4018
.org 0x213b4
	movs r1, #240	@ 000213b4 f021
.org 0x213b6
	lsls r1, r1, #10	@ 000213b6 8902
.org 0x213b8
	bl 0x129050	@ 000213b8 07f14afe
.org 0x213bc
	movs r1, #240	@ 000213bc f021
.org 0x213be
	lsls r1, r1, #8	@ 000213be 0902
.org 0x213c0
	adds r0, r0, r1	@ 000213c0 4018
.org 0x213c2
	movs r1, #240	@ 000213c2 f021
.org 0x213c4
	lsls r1, r1, #9	@ 000213c4 4902
.org 0x213c6
	cmp r0, r1	@ 000213c6 8842
.org 0x213c8
	ble.n 0x213e0	@ 000213c8 0add
.org 0x213ca
	ldr r4, [pc, #12]	@ 000213ca 034c
.org 0x213cc
	ldr r0, [pc, #12]	@ 000213cc 0348
.org 0x213ce
	ldr r0, [r0, #16]	@ 000213ce 0069
.org 0x213d0
	ldr r1, [r0, #12]	@ 000213d0 c168
.org 0x213d2
	b.n 0x21412	@ 000213d2 1ee0
.org 0x213d4
	.byte 0x00,0x10,0xff,0xff	@ 000213d4 data
.org 0x213d8
	.byte 0x20,0xe9,0x02,0x02	@ 000213d8 data
.org 0x213dc
	.byte 0xf8,0x2c,0x84,0x08	@ 000213dc data
.org 0x213e0
	movs r5, #190	@ 000213e0 be25
.org 0x213e2
	lsls r5, r5, #1	@ 000213e2 6d00
.org 0x213e4
	add r5, r8	@ 000213e4 4544
.org 0x213e6
	ldrb r0, [r5, #0]	@ 000213e6 2878
.org 0x213e8
	cmp r0, #4	@ 000213e8 0428
.org 0x213ea
	bne.n 0x21448	@ 000213ea 2dd1
.org 0x213ec
	mov r1, r9	@ 000213ec 4946
.org 0x213ee
	ldr r0, [r1, #84]	@ 000213ee 486d
.org 0x213f0
	ldr r1, [pc, #68]	@ 000213f0 1149
.org 0x213f2
	adds r0, r0, r1	@ 000213f2 4018
.org 0x213f4
	movs r1, #240	@ 000213f4 f021
.org 0x213f6
	lsls r1, r1, #10	@ 000213f6 8902
.org 0x213f8
	bl 0x129050	@ 000213f8 07f12afe
.org 0x213fc
	movs r1, #240	@ 000213fc f021
.org 0x213fe
	lsls r1, r1, #8	@ 000213fe 0902
.org 0x21400
	adds r0, r0, r1	@ 00021400 4018
.org 0x21402
	movs r1, #240	@ 00021402 f021
.org 0x21404
	lsls r1, r1, #9	@ 00021404 4902
.org 0x21406
	cmp r0, r1	@ 00021406 8842
.org 0x21408
	ble.n 0x21448	@ 00021408 1edd
.org 0x2140a
	ldr r4, [pc, #48]	@ 0002140a 0c4c
.org 0x2140c
	ldr r0, [pc, #48]	@ 0002140c 0c48
.org 0x2140e
	ldr r0, [r0, #16]	@ 0002140e 0069
.org 0x21410
	ldr r1, [r0, #20]	@ 00021410 4169
.org 0x21412
	adds r0, r4, #0	@ 00021412 201c
.org 0x21414
	bl 0x275f0	@ 00021414 06f0ecf8
.org 0x21418
	movs r0, #4	@ 00021418 0420
.org 0x2141a
	bl 0x1f63c	@ 0002141a fef70ff9
.org 0x2141e
	ldr r2, [pc, #36]	@ 0002141e 094a
.org 0x21420
	ldrb r1, [r2, #4]	@ 00021420 1179
.org 0x21422
	movs r0, #8	@ 00021422 0820
.org 0x21424
	orrs r0, r1	@ 00021424 0843
.org 0x21426
	strb r0, [r2, #4]	@ 00021426 1071
.org 0x21428
	subs r4, #16	@ 00021428 103c
.org 0x2142a
	ldrh r1, [r4, #8]	@ 0002142a 2189
.org 0x2142c
	movs r0, #2	@ 0002142c 0220
.org 0x2142e
	orrs r0, r1	@ 0002142e 0843
.org 0x21430
	strh r0, [r4, #8]	@ 00021430 2081
.org 0x21432
	movs r0, #5	@ 00021432 0520
.org 0x21434
	strb r0, [r5, #0]	@ 00021434 2870
.org 0x21436
	b.n 0x217c2	@ 00021436 c4e1
.org 0x21438
	.byte 0x00,0x10,0xff,0xff	@ 00021438 data
.org 0x2143c
	.byte 0x20,0xe9,0x02,0x02	@ 0002143c data
.org 0x21440
	.byte 0xf8,0x2c,0x84,0x08	@ 00021440 data
.org 0x21444
	.byte 0xb0,0xe8,0x02,0x02	@ 00021444 data
.org 0x21448
	movs r5, #190	@ 00021448 be25
.org 0x2144a
	lsls r5, r5, #1	@ 0002144a 6d00
.org 0x2144c
	add r5, r8	@ 0002144c 4544
.org 0x2144e
	ldrb r0, [r5, #0]	@ 0002144e 2878
.org 0x21450
	cmp r0, #5	@ 00021450 0528
.org 0x21452
	bne.n 0x21460	@ 00021452 05d1
.org 0x21454
	movs r0, #3	@ 00021454 0320
.org 0x21456
	bl 0x1f63c	@ 00021456 fef7f1f8
.org 0x2145a
	movs r0, #6	@ 0002145a 0620
.org 0x2145c
	strb r0, [r5, #0]	@ 0002145c 2870
.org 0x2145e
	b.n 0x217c2	@ 0002145e b0e1
.org 0x21460
	cmp r0, #6	@ 00021460 0628
.org 0x21462
	bne.n 0x214d0	@ 00021462 35d1
.org 0x21464
	ldr r4, [pc, #80]	@ 00021464 144c
.org 0x21466
	ldrh r1, [r4, #8]	@ 00021466 2189
.org 0x21468
	movs r0, #16	@ 00021468 1020
.org 0x2146a
	ands r0, r1	@ 0002146a 0840
.org 0x2146c
	cmp r0, #0	@ 0002146c 0028
.org 0x2146e
	beq.n 0x214d0	@ 0002146e 2fd0
.org 0x21470
	ldr r1, [pc, #72]	@ 00021470 1249
.org 0x21472
	ldrb r2, [r1, #0]	@ 00021472 0a78
.org 0x21474
	movs r0, #128	@ 00021474 8020
.org 0x21476
	orrs r0, r2	@ 00021476 1043
.org 0x21478
	strb r0, [r1, #0]	@ 00021478 0870
.org 0x2147a
	ldrb r2, [r1, #1]	@ 0002147a 4a78
.org 0x2147c
	movs r0, #2	@ 0002147c 0220
.org 0x2147e
	orrs r0, r2	@ 0002147e 1043
.org 0x21480
	strb r0, [r1, #1]	@ 00021480 4870
.org 0x21482
	adds r0, r4, #0	@ 00021482 201c
.org 0x21484
	adds r0, #16	@ 00021484 1030
.org 0x21486
	ldr r1, [pc, #56]	@ 00021486 0e49
.org 0x21488
	ldr r1, [r1, #16]	@ 00021488 0969
.org 0x2148a
	ldr r1, [r1, #28]	@ 0002148a c969
.org 0x2148c
	bl 0x275f0	@ 0002148c 06f0b0f8
.org 0x21490
	ldrh r0, [r4, #8]	@ 00021490 2089
.org 0x21492
	ldr r1, [pc, #48]	@ 00021492 0c49
.org 0x21494
	ands r1, r0	@ 00021494 0140
.org 0x21496
	ldr r0, [pc, #48]	@ 00021496 0c48
.org 0x21498
	ands r1, r0	@ 00021498 0140
.org 0x2149a
	ldrb r2, [r4, #18]	@ 0002149a a27c
.org 0x2149c
	movs r0, #253	@ 0002149c fd20
.org 0x2149e
	ands r0, r2	@ 0002149e 1040
.org 0x214a0
	strb r0, [r4, #18]	@ 000214a0 a074
.org 0x214a2
	ldr r3, [pc, #40]	@ 000214a2 0a4b
.org 0x214a4
	ldrb r2, [r3, #4]	@ 000214a4 1a79
.org 0x214a6
	movs r0, #247	@ 000214a6 f720
.org 0x214a8
	ands r0, r2	@ 000214a8 1040
.org 0x214aa
	strb r0, [r3, #4]	@ 000214aa 1871
.org 0x214ac
	movs r0, #1	@ 000214ac 0120
.org 0x214ae
	orrs r1, r0	@ 000214ae 0143
.org 0x214b0
	strh r1, [r4, #8]	@ 000214b0 2181
.org 0x214b2
	movs r0, #7	@ 000214b2 0720
.org 0x214b4
	strb r0, [r5, #0]	@ 000214b4 2870
.org 0x214b6
	b.n 0x217c2	@ 000214b6 84e1
.org 0x214b8
	.byte 0x10,0xe9,0x02,0x02	@ 000214b8 data
.org 0x214bc
	.byte 0xe0,0x32,0x00,0x03	@ 000214bc data
.org 0x214c0
	.byte 0xf8,0x2c,0x84,0x08	@ 000214c0 data
.org 0x214c4
	.byte 0xfd,0xff,0x00,0x00	@ 000214c4 data
.org 0x214c8
	.byte 0xef,0xff,0x00,0x00	@ 000214c8 data
.org 0x214cc
	.byte 0xb0,0xe8,0x02,0x02	@ 000214cc data
.org 0x214d0
	movs r4, #190	@ 000214d0 be24
.org 0x214d2
	lsls r4, r4, #1	@ 000214d2 6400
.org 0x214d4
	add r4, r8	@ 000214d4 4444
.org 0x214d6
	ldrb r0, [r4, #0]	@ 000214d6 2078
.org 0x214d8
	cmp r0, #7	@ 000214d8 0728
.org 0x214da
	bne.n 0x214f4	@ 000214da 0bd1
.org 0x214dc
	ldr r1, [pc, #16]	@ 000214dc 0449
.org 0x214de
	ldrb r2, [r1, #0]	@ 000214de 0a78
.org 0x214e0
	movs r0, #127	@ 000214e0 7f20
.org 0x214e2
	ands r0, r2	@ 000214e2 1040
.org 0x214e4
	movs r2, #0	@ 000214e4 0022
.org 0x214e6
	strb r0, [r1, #0]	@ 000214e6 0870
.org 0x214e8
	strb r2, [r1, #1]	@ 000214e8 4a70
.org 0x214ea
	movs r0, #8	@ 000214ea 0820
.org 0x214ec
	strb r0, [r4, #0]	@ 000214ec 2070
.org 0x214ee
	b.n 0x217c2	@ 000214ee 68e1
.org 0x214f0
	.byte 0xe0,0x32,0x00,0x03	@ 000214f0 data
.org 0x214f4
	cmp r0, #8	@ 000214f4 0828
.org 0x214f6
	bne.n 0x21538	@ 000214f6 1fd1
.org 0x214f8
	mov r1, r9	@ 000214f8 4946
.org 0x214fa
	ldr r0, [r1, #84]	@ 000214fa 486d
.org 0x214fc
	ldr r1, [pc, #44]	@ 000214fc 0b49
.org 0x214fe
	adds r0, r0, r1	@ 000214fe 4018
.org 0x21500
	movs r1, #240	@ 00021500 f021
.org 0x21502
	lsls r1, r1, #10	@ 00021502 8902
.org 0x21504
	bl 0x129050	@ 00021504 07f1a4fd
.org 0x21508
	movs r1, #240	@ 00021508 f021
.org 0x2150a
	lsls r1, r1, #8	@ 0002150a 0902
.org 0x2150c
	adds r0, r0, r1	@ 0002150c 4018
.org 0x2150e
	ldr r1, [pc, #32]	@ 0002150e 0849
.org 0x21510
	cmp r0, r1	@ 00021510 8842
.org 0x21512
	ble.n 0x21538	@ 00021512 11dd
.org 0x21514
	movs r0, #5	@ 00021514 0520
.org 0x21516
	bl 0x1f63c	@ 00021516 fef791f8
.org 0x2151a
	ldr r2, [pc, #24]	@ 0002151a 064a
.org 0x2151c
	ldrb r1, [r2, #4]	@ 0002151c 1179
.org 0x2151e
	movs r0, #8	@ 0002151e 0820
.org 0x21520
	orrs r0, r1	@ 00021520 0843
.org 0x21522
	strb r0, [r2, #4]	@ 00021522 1071
.org 0x21524
	movs r0, #9	@ 00021524 0920
.org 0x21526
	strb r0, [r4, #0]	@ 00021526 2070
.org 0x21528
	b.n 0x217c2	@ 00021528 4be1
.org 0x2152a
	.byte 0x00	@ 0002152a data
.org 0x2152b
	.byte 0x00	@ 0002152b data
.org 0x2152c
	.byte 0x00,0x10,0xff,0xff	@ 0002152c data
.org 0x21530
	.byte 0xff,0xcf,0x03,0x00	@ 00021530 data
.org 0x21534
	.byte 0xb0,0xe8,0x02,0x02	@ 00021534 data
.org 0x21538
	movs r0, #190	@ 00021538 be20
.org 0x2153a
	lsls r0, r0, #1	@ 0002153a 4000
.org 0x2153c
	add r0, r8	@ 0002153c 4044
.org 0x2153e
	ldrb r0, [r0, #0]	@ 0002153e 0078
.org 0x21540
	cmp r0, #9	@ 00021540 0928
.org 0x21542
	beq.n 0x21546	@ 00021542 00d0
.org 0x21544
	b.n 0x2164c	@ 00021544 82e0
.org 0x21546
	mov r0, r9	@ 00021546 4846
.org 0x21548
	ldr r1, [r0, #88]	@ 00021548 816d
.org 0x2154a
	ldr r0, [pc, #88]	@ 0002154a 1648
.org 0x2154c
	cmp r1, r0	@ 0002154c 8142
.org 0x2154e
	ble.n 0x21552	@ 0002154e 00dd
.org 0x21550
	b.n 0x2164c	@ 00021550 7ce0
.org 0x21552
	ldr r6, [pc, #84]	@ 00021552 154e
.org 0x21554
	add r6, r8	@ 00021554 4644
.org 0x21556
	ldrb r0, [r6, #0]	@ 00021556 3078
.org 0x21558
	cmp r0, #0	@ 00021558 0028
.org 0x2155a
	bne.n 0x215bc	@ 0002155a 2fd1
.org 0x2155c
	mov r1, r9	@ 0002155c 4946
.org 0x2155e
	ldr r0, [r1, #84]	@ 0002155e 486d
.org 0x21560
	ldr r1, [pc, #72]	@ 00021560 1249
.org 0x21562
	adds r0, r0, r1	@ 00021562 4018
.org 0x21564
	movs r1, #240	@ 00021564 f021
.org 0x21566
	lsls r1, r1, #10	@ 00021566 8902
.org 0x21568
	bl 0x129050	@ 00021568 07f172fd
.org 0x2156c
	movs r1, #240	@ 0002156c f021
.org 0x2156e
	lsls r1, r1, #8	@ 0002156e 0902
.org 0x21570
	adds r0, r0, r1	@ 00021570 4018
.org 0x21572
	ldr r1, [pc, #60]	@ 00021572 0f49
.org 0x21574
	cmp r0, r1	@ 00021574 8842
.org 0x21576
	ble.n 0x215bc	@ 00021576 21dd
.org 0x21578
	ldr r2, [pc, #56]	@ 00021578 0e4a
.org 0x2157a
	ldrb r1, [r2, #1]	@ 0002157a 5178
.org 0x2157c
	movs r0, #2	@ 0002157c 0220
.org 0x2157e
	orrs r0, r1	@ 0002157e 0843
.org 0x21580
	strb r0, [r2, #1]	@ 00021580 5070
.org 0x21582
	ldr r0, [pc, #52]	@ 00021582 0d48
.org 0x21584
	movs r1, #180	@ 00021584 b421
.org 0x21586
	lsls r1, r1, #1	@ 00021586 4900
.org 0x21588
	adds r5, r0, r1	@ 00021588 4518
.org 0x2158a
	ldr r0, [r5, #0]	@ 0002158a 2868
.org 0x2158c
	movs r4, #1	@ 0002158c 0124
.org 0x2158e
	negs r4, r4	@ 0002158e 6442
.org 0x21590
	cmp r0, r4	@ 00021590 a042
.org 0x21592
	beq.n 0x2159e	@ 00021592 04d0
.org 0x21594
	lsls r0, r0, #16	@ 00021594 0004
.org 0x21596
	lsrs r0, r0, #16	@ 00021596 000c
.org 0x21598
	bl 0x2a98	@ 00021598 e1f77efa
.org 0x2159c
	str r4, [r5, #0]	@ 0002159c 2c60
.org 0x2159e
	movs r0, #1	@ 0002159e 0120
.org 0x215a0
	b.n 0x217c0	@ 000215a0 0ee1
.org 0x215a2
	.byte 0x00	@ 000215a2 data
.org 0x215a3
	.byte 0x00	@ 000215a3 data
.org 0x215a4
	.byte 0xff,0x6f,0x0d,0x00	@ 000215a4 data
.org 0x215a8
	.byte 0x7d,0x01,0x00,0x00	@ 000215a8 data
.org 0x215ac
	.byte 0x00,0x10,0xff,0xff	@ 000215ac data
.org 0x215b0
	.byte 0xff,0xcf,0x01,0x00	@ 000215b0 data
.org 0x215b4
	.byte 0xe0,0x32,0x00,0x03	@ 000215b4 data
.org 0x215b8
	.byte 0x10,0xe9,0x02,0x02	@ 000215b8 data
.org 0x215bc
	ldr r2, [pc, #20]	@ 000215bc 054a
.org 0x215be
	add r2, r8	@ 000215be 4244
.org 0x215c0
	ldrb r0, [r2, #0]	@ 000215c0 1078
.org 0x215c2
	cmp r0, #1	@ 000215c2 0128
.org 0x215c4
	bne.n 0x215dc	@ 000215c4 0ad1
.org 0x215c6
	ldr r0, [pc, #16]	@ 000215c6 0448
.org 0x215c8
	movs r1, #0	@ 000215c8 0021
.org 0x215ca
	strb r1, [r0, #1]	@ 000215ca 4170
.org 0x215cc
	movs r0, #2	@ 000215cc 0220
.org 0x215ce
	strb r0, [r2, #0]	@ 000215ce 1070
.org 0x215d0
	b.n 0x217c2	@ 000215d0 f7e0
.org 0x215d2
	.byte 0x00	@ 000215d2 data
.org 0x215d3
	.byte 0x00	@ 000215d3 data
.org 0x215d4
	.byte 0x7d,0x01,0x00,0x00	@ 000215d4 data
.org 0x215d8
	.byte 0xe0,0x32,0x00,0x03	@ 000215d8 data
.org 0x215dc
	cmp r0, #2	@ 000215dc 0228
.org 0x215de
	beq.n 0x215e2	@ 000215de 00d0
.org 0x215e0
	b.n 0x217c2	@ 000215e0 efe0
.org 0x215e2
	mov r1, r9	@ 000215e2 4946
.org 0x215e4
	ldr r0, [r1, #84]	@ 000215e4 486d
.org 0x215e6
	ldr r1, [pc, #84]	@ 000215e6 1549
.org 0x215e8
	adds r0, r0, r1	@ 000215e8 4018
.org 0x215ea
	movs r1, #240	@ 000215ea f021
.org 0x215ec
	lsls r1, r1, #10	@ 000215ec 8902
.org 0x215ee
	bl 0x129050	@ 000215ee 07f12ffd
.org 0x215f2
	movs r1, #240	@ 000215f2 f021
.org 0x215f4
	lsls r1, r1, #8	@ 000215f4 0902
.org 0x215f6
	adds r0, r0, r1	@ 000215f6 4018
.org 0x215f8
	ldr r1, [pc, #68]	@ 000215f8 1149
.org 0x215fa
	cmp r0, r1	@ 000215fa 8842
.org 0x215fc
	bgt.n 0x21600	@ 000215fc 00dc
.org 0x215fe
	b.n 0x217c2	@ 000215fe e0e0
.org 0x21600
	ldr r0, [pc, #64]	@ 00021600 1048
.org 0x21602
	movs r1, #0	@ 00021602 0021
.org 0x21604
	strb r1, [r0, #1]	@ 00021604 4170
.org 0x21606
	ldr r0, [pc, #64]	@ 00021606 1048
.org 0x21608
	movs r1, #180	@ 00021608 b421
.org 0x2160a
	lsls r1, r1, #1	@ 0002160a 4900
.org 0x2160c
	adds r4, r0, r1	@ 0002160c 4418
.org 0x2160e
	ldr r0, [r4, #0]	@ 0002160e 2068
.org 0x21610
	cmp r0, #155	@ 00021610 9b28
.org 0x21612
	beq.n 0x21630	@ 00021612 0dd0
.org 0x21614
	movs r5, #1	@ 00021614 0125
.org 0x21616
	negs r5, r5	@ 00021616 6d42
.org 0x21618
	cmp r0, r5	@ 00021618 a842
.org 0x2161a
	beq.n 0x21626	@ 0002161a 04d0
.org 0x2161c
	lsls r0, r0, #16	@ 0002161c 0004
.org 0x2161e
	lsrs r0, r0, #16	@ 0002161e 000c
.org 0x21620
	bl 0x2a98	@ 00021620 e1f73afa
.org 0x21624
	str r5, [r4, #0]	@ 00021624 2560
.org 0x21626
	movs r0, #155	@ 00021626 9b20
.org 0x21628
	bl 0x2a88	@ 00021628 e1f72efa
.org 0x2162c
	movs r0, #155	@ 0002162c 9b20
.org 0x2162e
	str r0, [r4, #0]	@ 0002162e 2060
.org 0x21630
	movs r1, #190	@ 00021630 be21
.org 0x21632
	lsls r1, r1, #1	@ 00021632 4900
.org 0x21634
	add r1, r8	@ 00021634 4144
.org 0x21636
	movs r0, #10	@ 00021636 0a20
.org 0x21638
	strb r0, [r1, #0]	@ 00021638 0870
.org 0x2163a
	b.n 0x217c2	@ 0002163a c2e0
.org 0x2163c
	.byte 0x00,0x10,0xff,0xff	@ 0002163c data
.org 0x21640
	.byte 0xff,0xef,0x01,0x00	@ 00021640 data
.org 0x21644
	.byte 0xe0,0x32,0x00,0x03	@ 00021644 data
.org 0x21648
	.byte 0x10,0xe9,0x02,0x02	@ 00021648 data
.org 0x2164c
	movs r4, #190	@ 0002164c be24
.org 0x2164e
	lsls r4, r4, #1	@ 0002164e 6400
.org 0x21650
	add r4, r8	@ 00021650 4444
.org 0x21652
	ldrb r0, [r4, #0]	@ 00021652 2078
.org 0x21654
	cmp r0, #10	@ 00021654 0a28
.org 0x21656
	bne.n 0x21690	@ 00021656 1bd1
.org 0x21658
	mov r1, r9	@ 00021658 4946
.org 0x2165a
	ldr r0, [r1, #84]	@ 0002165a 486d
.org 0x2165c
	ldr r1, [pc, #32]	@ 0002165c 0849
.org 0x2165e
	adds r0, r0, r1	@ 0002165e 4018
.org 0x21660
	movs r1, #240	@ 00021660 f021
.org 0x21662
	lsls r1, r1, #10	@ 00021662 8902
.org 0x21664
	bl 0x129050	@ 00021664 07f1f4fc
.org 0x21668
	movs r1, #240	@ 00021668 f021
.org 0x2166a
	lsls r1, r1, #8	@ 0002166a 0902
.org 0x2166c
	adds r0, r0, r1	@ 0002166c 4018
.org 0x2166e
	ldr r1, [pc, #20]	@ 0002166e 0549
.org 0x21670
	cmp r0, r1	@ 00021670 8842
.org 0x21672
	ble.n 0x21690	@ 00021672 0ddd
.org 0x21674
	ldr r0, [pc, #16]	@ 00021674 0448
.org 0x21676
	ldr r1, [pc, #20]	@ 00021676 0549
.org 0x21678
	ldr r1, [r1, #16]	@ 00021678 0969
.org 0x2167a
	ldr r1, [r1, #36]	@ 0002167a 496a
.org 0x2167c
	b.n 0x216c0	@ 0002167c 20e0
.org 0x2167e
	.byte 0x00	@ 0002167e data
.org 0x2167f
	.byte 0x00	@ 0002167f data
.org 0x21680
	.byte 0x00,0x10,0xff,0xff	@ 00021680 data
.org 0x21684
	.byte 0xff,0xcf,0x02,0x00	@ 00021684 data
.org 0x21688
	.byte 0x20,0xe9,0x02,0x02	@ 00021688 data
.org 0x2168c
	.byte 0xf8,0x2c,0x84,0x08	@ 0002168c data
.org 0x21690
	movs r4, #190	@ 00021690 be24
.org 0x21692
	lsls r4, r4, #1	@ 00021692 6400
.org 0x21694
	add r4, r8	@ 00021694 4444
.org 0x21696
	ldrb r0, [r4, #0]	@ 00021696 2078
.org 0x21698
	cmp r0, #11	@ 00021698 0b28
.org 0x2169a
	bne.n 0x216e0	@ 0002169a 21d1
.org 0x2169c
	mov r1, r9	@ 0002169c 4946
.org 0x2169e
	ldr r0, [r1, #84]	@ 0002169e 486d
.org 0x216a0
	ldr r1, [pc, #44]	@ 000216a0 0b49
.org 0x216a2
	adds r0, r0, r1	@ 000216a2 4018
.org 0x216a4
	movs r1, #240	@ 000216a4 f021
.org 0x216a6
	lsls r1, r1, #10	@ 000216a6 8902
.org 0x216a8
	bl 0x129050	@ 000216a8 07f1d2fc
.org 0x216ac
	movs r1, #240	@ 000216ac f021
.org 0x216ae
	lsls r1, r1, #8	@ 000216ae 0902
.org 0x216b0
	adds r0, r0, r1	@ 000216b0 4018
.org 0x216b2
	ldr r1, [pc, #32]	@ 000216b2 0849
.org 0x216b4
	cmp r0, r1	@ 000216b4 8842
.org 0x216b6
	ble.n 0x216e0	@ 000216b6 13dd
.org 0x216b8
	ldr r0, [pc, #28]	@ 000216b8 0748
.org 0x216ba
	ldr r1, [pc, #32]	@ 000216ba 0849
.org 0x216bc
	ldr r1, [r1, #16]	@ 000216bc 0969
.org 0x216be
	ldr r1, [r1, #44]	@ 000216be c96a
.org 0x216c0
	bl 0x275f0	@ 000216c0 05f096ff
.org 0x216c4
	movs r0, #7	@ 000216c4 0720
.org 0x216c6
	bl 0x1f63c	@ 000216c6 fdf7b9ff
.org 0x216ca
	movs r0, #12	@ 000216ca 0c20
.org 0x216cc
	strb r0, [r4, #0]	@ 000216cc 2070
.org 0x216ce
	b.n 0x217c2	@ 000216ce 78e0
.org 0x216d0
	.byte 0x00,0x10,0xff,0xff	@ 000216d0 data
.org 0x216d4
	.byte 0xff,0xcf,0x02,0x00	@ 000216d4 data
.org 0x216d8
	.byte 0x20,0xe9,0x02,0x02	@ 000216d8 data
.org 0x216dc
	.byte 0xf8,0x2c,0x84,0x08	@ 000216dc data
.org 0x216e0
	movs r5, #190	@ 000216e0 be25
.org 0x216e2
	lsls r5, r5, #1	@ 000216e2 6d00
.org 0x216e4
	add r5, r8	@ 000216e4 4544
.org 0x216e6
	ldrb r0, [r5, #0]	@ 000216e6 2878
.org 0x216e8
	cmp r0, #12	@ 000216e8 0c28
.org 0x216ea
	bne.n 0x216f8	@ 000216ea 05d1
.org 0x216ec
	movs r0, #6	@ 000216ec 0620
.org 0x216ee
	bl 0x1f63c	@ 000216ee fdf7a5ff
.org 0x216f2
	movs r0, #13	@ 000216f2 0d20
.org 0x216f4
	strb r0, [r5, #0]	@ 000216f4 2870
.org 0x216f6
	b.n 0x217c2	@ 000216f6 64e0
.org 0x216f8
	cmp r0, #13	@ 000216f8 0d28
.org 0x216fa
	bne.n 0x21754	@ 000216fa 2bd1
.org 0x216fc
	ldr r4, [pc, #68]	@ 000216fc 114c
.org 0x216fe
	ldrh r1, [r4, #8]	@ 000216fe 2189
.org 0x21700
	movs r0, #16	@ 00021700 1020
.org 0x21702
	ands r0, r1	@ 00021702 0840
.org 0x21704
	cmp r0, #0	@ 00021704 0028
.org 0x21706
	beq.n 0x21754	@ 00021706 25d0
.org 0x21708
	ldr r1, [pc, #60]	@ 00021708 0f49
.org 0x2170a
	ldrb r2, [r1, #0]	@ 0002170a 0a78
.org 0x2170c
	movs r0, #128	@ 0002170c 8020
.org 0x2170e
	orrs r0, r2	@ 0002170e 1043
.org 0x21710
	strb r0, [r1, #0]	@ 00021710 0870
.org 0x21712
	ldrb r2, [r1, #1]	@ 00021712 4a78
.org 0x21714
	movs r0, #2	@ 00021714 0220
.org 0x21716
	orrs r0, r2	@ 00021716 1043
.org 0x21718
	strb r0, [r1, #1]	@ 00021718 4870
.org 0x2171a
	adds r0, r4, #0	@ 0002171a 201c
.org 0x2171c
	adds r0, #16	@ 0002171c 1030
.org 0x2171e
	ldr r1, [pc, #44]	@ 0002171e 0b49
.org 0x21720
	ldr r1, [r1, #16]	@ 00021720 0969
.org 0x21722
	ldr r1, [r1, #52]	@ 00021722 496b
.org 0x21724
	bl 0x275f0	@ 00021724 05f064ff
.org 0x21728
	ldrh r0, [r4, #8]	@ 00021728 2089
.org 0x2172a
	ldr r1, [pc, #36]	@ 0002172a 0949
.org 0x2172c
	ands r1, r0	@ 0002172c 0140
.org 0x2172e
	ldrb r2, [r4, #18]	@ 0002172e a27c
.org 0x21730
	movs r0, #253	@ 00021730 fd20
.org 0x21732
	ands r0, r2	@ 00021732 1040
.org 0x21734
	strb r0, [r4, #18]	@ 00021734 a074
.org 0x21736
	movs r0, #4	@ 00021736 0420
.org 0x21738
	orrs r1, r0	@ 00021738 0143
.org 0x2173a
	strh r1, [r4, #8]	@ 0002173a 2181
.org 0x2173c
	movs r0, #14	@ 0002173c 0e20
.org 0x2173e
	strb r0, [r5, #0]	@ 0002173e 2870
.org 0x21740
	b.n 0x217c2	@ 00021740 3fe0
.org 0x21742
	.byte 0x00	@ 00021742 data
.org 0x21743
	.byte 0x00	@ 00021743 data
.org 0x21744
	.byte 0x10,0xe9,0x02,0x02	@ 00021744 data
.org 0x21748
	.byte 0xe0,0x32,0x00,0x03	@ 00021748 data
.org 0x2174c
	.byte 0xf8,0x2c,0x84,0x08	@ 0002174c data
.org 0x21750
	.byte 0xef,0xff,0x00,0x00	@ 00021750 data
.org 0x21754
	movs r6, #190	@ 00021754 be26
.org 0x21756
	lsls r6, r6, #1	@ 00021756 7600
.org 0x21758
	add r6, r8	@ 00021758 4644
.org 0x2175a
	ldrb r0, [r6, #0]	@ 0002175a 3078
.org 0x2175c
	cmp r0, #20	@ 0002175c 1428
.org 0x2175e
	bne.n 0x217a0	@ 0002175e 1fd1
.org 0x21760
	movs r1, #192	@ 00021760 c021
.org 0x21762
	lsls r1, r1, #1	@ 00021762 4900
.org 0x21764
	add r1, r8	@ 00021764 4144
.org 0x21766
	ldr r0, [r1, #0]	@ 00021766 0868
.org 0x21768
	cmp r0, #0	@ 00021768 0028
.org 0x2176a
	beq.n 0x21772	@ 0002176a 02d0
.org 0x2176c
	subs r0, #1	@ 0002176c 0138
.org 0x2176e
	str r0, [r1, #0]	@ 0002176e 0860
.org 0x21770
	b.n 0x217c2	@ 00021770 27e0
.org 0x21772
	ldr r4, [pc, #40]	@ 00021772 0a4c
.org 0x21774
	movs r0, #180	@ 00021774 b420
.org 0x21776
	lsls r0, r0, #1	@ 00021776 4000
.org 0x21778
	adds r7, r4, r0	@ 00021778 2718
.org 0x2177a
	ldr r0, [r7, #0]	@ 0002177a 3868
.org 0x2177c
	movs r5, #1	@ 0002177c 0125
.org 0x2177e
	negs r5, r5	@ 0002177e 6d42
.org 0x21780
	cmp r0, r5	@ 00021780 a842
.org 0x21782
	beq.n 0x2178e	@ 00021782 04d0
.org 0x21784
	lsls r0, r0, #16	@ 00021784 0004
.org 0x21786
	lsrs r0, r0, #16	@ 00021786 000c
.org 0x21788
	bl 0x2a98	@ 00021788 e1f786f9
.org 0x2178c
	str r5, [r7, #0]	@ 0002178c 3d60
.org 0x2178e
	movs r1, #170	@ 0002178e aa21
.org 0x21790
	lsls r1, r1, #1	@ 00021790 4900
.org 0x21792
	adds r0, r4, r1	@ 00021792 6018
.org 0x21794
	movs r1, #2	@ 00021794 0221
.org 0x21796
	str r1, [r0, #0]	@ 00021796 0160
.org 0x21798
	movs r0, #21	@ 00021798 1520
.org 0x2179a
	b.n 0x217c0	@ 0002179a 11e0
.org 0x2179c
	.byte 0x10,0xe9,0x02,0x02	@ 0002179c data
.org 0x217a0
	cmp r0, #21	@ 000217a0 1528
.org 0x217a2
	bne.n 0x217c2	@ 000217a2 0ed1
.org 0x217a4
	ldr r2, [pc, #108]	@ 000217a4 1b4a
.org 0x217a6
	movs r1, #170	@ 000217a6 aa21
.org 0x217a8
	lsls r1, r1, #1	@ 000217a8 4900
.org 0x217aa
	adds r0, r2, r1	@ 000217aa 5018
.org 0x217ac
	ldr r0, [r0, #0]	@ 000217ac 0068
.org 0x217ae
	cmp r0, #0	@ 000217ae 0028
.org 0x217b0
	bne.n 0x217c2	@ 000217b0 07d1
.org 0x217b2
	ldrh r1, [r2, #8]	@ 000217b2 1189
.org 0x217b4
	movs r0, #4	@ 000217b4 0420
.org 0x217b6
	orrs r0, r1	@ 000217b6 0843
.org 0x217b8
	ldr r1, [pc, #92]	@ 000217b8 1749
.org 0x217ba
	ands r0, r1	@ 000217ba 0840
.org 0x217bc
	strh r0, [r2, #8]	@ 000217bc 1081
.org 0x217be
	movs r0, #22	@ 000217be 1620
.org 0x217c0
	strb r0, [r6, #0]	@ 000217c0 3070
.org 0x217c2
	movs r0, #190	@ 000217c2 be20
.org 0x217c4
	lsls r0, r0, #1	@ 000217c4 4000
.org 0x217c6
	add r0, r8	@ 000217c6 4044
.org 0x217c8
	ldrb r0, [r0, #0]	@ 000217c8 0078
.org 0x217ca
	cmp r0, #2	@ 000217ca 0228
.org 0x217cc
	beq.n 0x217d0	@ 000217cc 00d0
.org 0x217ce
	b.n 0x219f2	@ 000217ce 10e1
.org 0x217d0
	ldr r0, [pc, #64]	@ 000217d0 1048
.org 0x217d2
	ldrh r1, [r0, #8]	@ 000217d2 0189
.org 0x217d4
	movs r0, #8	@ 000217d4 0820
.org 0x217d6
	ands r0, r1	@ 000217d6 0840
.org 0x217d8
	cmp r0, #0	@ 000217d8 0028
.org 0x217da
	beq.n 0x217de	@ 000217da 00d0
.org 0x217dc
	b.n 0x219f2	@ 000217dc 09e1
.org 0x217de
	ldr r2, [pc, #60]	@ 000217de 0f4a
.org 0x217e0
	ldr r1, [pc, #60]	@ 000217e0 0f49
.org 0x217e2
	adds r0, r2, r1	@ 000217e2 5018
.org 0x217e4
	ldrb r1, [r0, #0]	@ 000217e4 0178
.org 0x217e6
	movs r0, #1	@ 000217e6 0120
.org 0x217e8
	ands r0, r1	@ 000217e8 0840
.org 0x217ea
	cmp r0, #0	@ 000217ea 0028
.org 0x217ec
	bne.n 0x21846	@ 000217ec 2bd1
.org 0x217ee
	mov r0, r9	@ 000217ee 4846
.org 0x217f0
	ldr r1, [r0, #88]	@ 000217f0 816d
.org 0x217f2
	movs r0, #150	@ 000217f2 9620
.org 0x217f4
	lsls r0, r0, #11	@ 000217f4 c002
.org 0x217f6
	cmp r1, r0	@ 000217f6 8142
.org 0x217f8
	ble.n 0x21846	@ 000217f8 25dd
.org 0x217fa
	ldr r1, [pc, #40]	@ 000217fa 0a49
.org 0x217fc
	adds r0, r2, r1	@ 000217fc 5018
.org 0x217fe
	ldrb r1, [r0, #0]	@ 000217fe 0178
.org 0x21800
	movs r0, #15	@ 00021800 0f20
.org 0x21802
	ands r0, r1	@ 00021802 0840
.org 0x21804
	cmp r0, #2	@ 00021804 0228
.org 0x21806
	bne.n 0x2182c	@ 00021806 11d1
.org 0x21808
	ldr r0, [pc, #28]	@ 00021808 0748
.org 0x2180a
	movs r1, #90	@ 0002180a 5a21
.org 0x2180c
	bl 0x10e528	@ 0002180c ecf08cfe
.org 0x21810
	b.n 0x21836	@ 00021810 11e0
.org 0x21812
	.byte 0x00	@ 00021812 data
.org 0x21813
	.byte 0x00	@ 00021813 data
.org 0x21814
	.byte 0x10,0xe9,0x02,0x02	@ 00021814 data
.org 0x21818
	.byte 0xfe,0xff,0x00,0x00	@ 00021818 data
.org 0x2181c
	.byte 0xb0,0x0a,0x00,0x02	@ 0002181c data
.org 0x21820
	.byte 0x34,0xd0,0x02,0x00	@ 00021820 data
.org 0x21824
	.byte 0x10,0xc0,0x02,0x00	@ 00021824 data
.org 0x21828
	.byte 0x15,0x06,0x00,0x00	@ 00021828 data
.org 0x2182c
	movs r0, #194	@ 0002182c c220
.org 0x2182e
	lsls r0, r0, #3	@ 0002182e c000
.org 0x21830
	movs r1, #90	@ 00021830 5a21
.org 0x21832
	bl 0x10e528	@ 00021832 ecf079fe
.org 0x21836
	ldr r3, [pc, #64]	@ 00021836 104b
.org 0x21838
	ldr r0, [pc, #64]	@ 00021838 1048
.org 0x2183a
	adds r2, r3, r0	@ 0002183a 1a18
.org 0x2183c
	ldrb r1, [r2, #0]	@ 0002183c 1178
.org 0x2183e
	movs r0, #1	@ 0002183e 0120
.org 0x21840
	orrs r0, r1	@ 00021840 0843
.org 0x21842
	strb r0, [r2, #0]	@ 00021842 1070
.org 0x21844
	adds r2, r3, #0	@ 00021844 1a1c
.org 0x21846
	ldr r1, [pc, #52]	@ 00021846 0d49
.org 0x21848
	adds r0, r2, r1	@ 00021848 5018
.org 0x2184a
	ldrb r1, [r0, #0]	@ 0002184a 0178
.org 0x2184c
	movs r0, #2	@ 0002184c 0220
.org 0x2184e
	ands r0, r1	@ 0002184e 0840
.org 0x21850
	cmp r0, #0	@ 00021850 0028
.org 0x21852
	bne.n 0x218a0	@ 00021852 25d1
.org 0x21854
	mov r0, r9	@ 00021854 4846
.org 0x21856
	ldr r1, [r0, #88]	@ 00021856 816d
.org 0x21858
	movs r0, #140	@ 00021858 8c20
.org 0x2185a
	lsls r0, r0, #12	@ 0002185a 0003
.org 0x2185c
	cmp r1, r0	@ 0002185c 8142
.org 0x2185e
	ble.n 0x218a0	@ 0002185e 1fdd
.org 0x21860
	ldr r1, [pc, #28]	@ 00021860 0749
.org 0x21862
	adds r0, r2, r1	@ 00021862 5018
.org 0x21864
	ldrb r1, [r0, #0]	@ 00021864 0178
.org 0x21866
	movs r0, #15	@ 00021866 0f20
.org 0x21868
	ands r0, r1	@ 00021868 0840
.org 0x2186a
	cmp r0, #2	@ 0002186a 0228
.org 0x2186c
	bne.n 0x21888	@ 0002186c 0cd1
.org 0x2186e
	ldr r0, [pc, #20]	@ 0002186e 0548
.org 0x21870
	movs r1, #90	@ 00021870 5a21
.org 0x21872
	bl 0x10e528	@ 00021872 ecf059fe
.org 0x21876
	b.n 0x21890	@ 00021876 0be0
.org 0x21878
	.byte 0xb0,0x0a,0x00,0x02	@ 00021878 data
