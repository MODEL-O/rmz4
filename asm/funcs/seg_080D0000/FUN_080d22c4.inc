@ FUN_080d22c4  entry 0x080d22c4  size 168
.thumb
.org 0xd22c4
FUN_080d22c4:
	push {r4, r5, r6, lr}	@ 000d22c4 70b5
.org 0xd22c6
	adds r6, r0, #0	@ 000d22c6 061c
.org 0xd22c8
	bl 0x1cc9c	@ 000d22c8 4af7e8fc
.org 0xd22cc
	ldrb r1, [r6, #10]	@ 000d22cc b17a
.org 0xd22ce
	movs r0, #1	@ 000d22ce 0120
.org 0xd22d0
	orrs r0, r1	@ 000d22d0 0843
.org 0xd22d2
	movs r1, #2	@ 000d22d2 0221
.org 0xd22d4
	orrs r0, r1	@ 000d22d4 0843
.org 0xd22d6
	strb r0, [r6, #10]	@ 000d22d6 b072
.org 0xd22d8
	adds r0, r6, #0	@ 000d22d8 301c
.org 0xd22da
	movs r1, #13	@ 000d22da 0d21
.org 0xd22dc
	bl 0x1cf00	@ 000d22dc 4af710fe
.org 0xd22e0
	ldr r5, [pc, #100]	@ 000d22e0 194d
.org 0xd22e2
	ldr r0, [r5, #0]	@ 000d22e2 2868
.org 0xd22e4
	ldr r3, [pc, #100]	@ 000d22e4 194b
.org 0xd22e6
	muls r0, r3	@ 000d22e6 5843
.org 0xd22e8
	ldr r2, [pc, #100]	@ 000d22e8 194a
.org 0xd22ea
	adds r0, r0, r2	@ 000d22ea 8018
.org 0xd22ec
	lsls r0, r0, #1	@ 000d22ec 4000
.org 0xd22ee
	lsrs r4, r0, #1	@ 000d22ee 4408
.org 0xd22f0
	lsrs r0, r0, #17	@ 000d22f0 400c
.org 0xd22f2
	movs r1, #7	@ 000d22f2 0721
.org 0xd22f4
	ands r0, r1	@ 000d22f4 0840
.org 0xd22f6
	adds r0, #60	@ 000d22f6 3c30
.org 0xd22f8
	strb r0, [r6, #18]	@ 000d22f8 b074
.org 0xd22fa
	adds r0, r4, #0	@ 000d22fa 201c
.org 0xd22fc
	muls r0, r3	@ 000d22fc 5843
.org 0xd22fe
	adds r0, r0, r2	@ 000d22fe 8018
.org 0xd2300
	lsls r0, r0, #1	@ 000d2300 4000
.org 0xd2302
	lsrs r4, r0, #1	@ 000d2302 4408
.org 0xd2304
	lsrs r0, r0, #17	@ 000d2304 400c
.org 0xd2306
	movs r1, #3	@ 000d2306 0321
.org 0xd2308
	ands r0, r1	@ 000d2308 0840
.org 0xd230a
	subs r0, #2	@ 000d230a 0238
.org 0xd230c
	lsls r0, r0, #8	@ 000d230c 0002
.org 0xd230e
	ldr r1, [r6, #84]	@ 000d230e 716d
.org 0xd2310
	adds r1, r1, r0	@ 000d2310 0918
.org 0xd2312
	str r1, [r6, #84]	@ 000d2312 7165
.org 0xd2314
	adds r0, r4, #0	@ 000d2314 201c
.org 0xd2316
	muls r0, r3	@ 000d2316 5843
.org 0xd2318
	adds r0, r0, r2	@ 000d2318 8018
.org 0xd231a
	lsls r0, r0, #1	@ 000d231a 4000
.org 0xd231c
	lsrs r1, r0, #1	@ 000d231c 4108
.org 0xd231e
	str r1, [r5, #0]	@ 000d231e 2960
.org 0xd2320
	lsrs r0, r0, #17	@ 000d2320 400c
.org 0xd2322
	movs r1, #63	@ 000d2322 3f21
.org 0xd2324
	ands r0, r1	@ 000d2324 0840
.org 0xd2326
	adds r0, #192	@ 000d2326 c030
.org 0xd2328
	str r0, [r6, #96]	@ 000d2328 3066
.org 0xd232a
	ldr r2, [pc, #40]	@ 000d232a 0a4a
.org 0xd232c
	movs r1, #232	@ 000d232c e821
.org 0xd232e
	lsls r1, r1, #1	@ 000d232e 4900
.org 0xd2330
	adds r0, r2, r1	@ 000d2330 5018
.org 0xd2332
	ldrh r1, [r0, #0]	@ 000d2332 0188
.org 0xd2334
	movs r0, #127	@ 000d2334 7f20
.org 0xd2336
	ands r0, r1	@ 000d2336 0840
.org 0xd2338
	cmp r0, #2	@ 000d2338 0228
.org 0xd233a
	bne.n 0xd2358	@ 000d233a 0dd1
.org 0xd233c
	adds r0, r6, #0	@ 000d233c 301c
.org 0xd233e
	adds r0, #84	@ 000d233e 5430
.org 0xd2340
	bl 0x7b84	@ 000d2340 35f720fc
.org 0xd2344
	b.n 0xd235e	@ 000d2344 0be0
.org 0xd2346
	.byte 0x00	@ 000d2346 data
.org 0xd2347
	.byte 0x00	@ 000d2347 data
.org 0xd2348
	.byte 0x38,0xdc,0x02,0x02	@ 000d2348 data
.org 0xd234c
	.byte 0xfd,0x43,0x03,0x00	@ 000d234c data
.org 0xd2350
	.byte 0xc3,0x9e,0x26,0x00	@ 000d2350 data
.org 0xd2354
	.byte 0xb0,0x0a,0x00,0x02	@ 000d2354 data
.org 0xd2358
	ldr r1, [pc, #36]	@ 000d2358 0949
.org 0xd235a
	adds r0, r2, r1	@ 000d235a 5018
.org 0xd235c
	ldr r0, [r0, #0]	@ 000d235c 0068
.org 0xd235e
	str r0, [r6, #116]	@ 000d235e 7067
.org 0xd2360
	ldr r1, [pc, #32]	@ 000d2360 0849
.org 0xd2362
	ldrb r0, [r6, #9]	@ 000d2362 707a
.org 0xd2364
	lsls r0, r0, #2	@ 000d2364 8000
.org 0xd2366
	adds r0, r0, r1	@ 000d2366 4018
.org 0xd2368
	movs r1, #1	@ 000d2368 0121
.org 0xd236a
	str r1, [r6, #12]	@ 000d236a f160
