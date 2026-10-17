@ FUN_0803c27c  entry 0x0803c27c  size 256
.thumb
.org 0x3c27c
FUN_0803c27c:
	push {r4, r5, r6, r7, lr}	@ 0003c27c f0b5
.org 0x3c27e
	mov r7, r8	@ 0003c27e 4746
.org 0x3c280
	push {r7}	@ 0003c280 80b4
.org 0x3c282
	mov ip, r0	@ 0003c282 8446
.org 0x3c284
	adds r6, r1, #0	@ 0003c284 0e1c
.org 0x3c286
	mov r7, ip	@ 0003c286 6746
.org 0x3c288
	adds r7, #180	@ 0003c288 b437
.org 0x3c28a
	ldr r5, [r7, #0]	@ 0003c28a 3d68
.org 0x3c28c
	movs r0, #0	@ 0003c28c 0020
.org 0x3c28e
	mov r8, r0	@ 0003c28e 8046
.org 0x3c290
	mov r0, ip	@ 0003c290 6046
.org 0x3c292
	adds r0, #113	@ 0003c292 7130
.org 0x3c294
	ldrb r4, [r0, #0]	@ 0003c294 0478
.org 0x3c296
	ldrb r0, [r5, #12]	@ 0003c296 287b
.org 0x3c298
	cmp r0, #1	@ 0003c298 0128
.org 0x3c29a
	bls.n 0x3c2a0	@ 0003c29a 01d9
.org 0x3c29c
	movs r0, #1	@ 0003c29c 0120
.org 0x3c29e
	b.n 0x3c372	@ 0003c29e 68e0
.org 0x3c2a0
	ldrb r0, [r5, #10]	@ 0003c2a0 a87a
.org 0x3c2a2
	lsrs r0, r0, #4	@ 0003c2a2 0009
.org 0x3c2a4
	movs r3, #1	@ 0003c2a4 0123
.org 0x3c2a6
	adds r1, r3, #0	@ 0003c2a6 191c
.org 0x3c2a8
	bics r1, r0	@ 0003c2a8 8143
.org 0x3c2aa
	mov r0, ip	@ 0003c2aa 6046
.org 0x3c2ac
	ldrb r2, [r0, #10]	@ 0003c2ac 827a
.org 0x3c2ae
	lsrs r0, r2, #4	@ 0003c2ae 1009
.org 0x3c2b0
	ands r0, r3	@ 0003c2b0 1840
.org 0x3c2b2
	cmp r1, r0	@ 0003c2b2 8142
.org 0x3c2b4
	beq.n 0x3c32a	@ 0003c2b4 39d0
.org 0x3c2b6
	mov r1, ip	@ 0003c2b6 6146
.org 0x3c2b8
	ldrb r0, [r1, #14]	@ 0003c2b8 887b
.org 0x3c2ba
	cmp r0, #0	@ 0003c2ba 0028
.org 0x3c2bc
	bne.n 0x3c32a	@ 0003c2bc 35d1
.org 0x3c2be
	ldr r0, [r5, #84]	@ 0003c2be 686d
.org 0x3c2c0
	ldr r1, [r7, #4]	@ 0003c2c0 7968
.org 0x3c2c2
	adds r0, r0, r1	@ 0003c2c2 4018
.org 0x3c2c4
	mov r1, ip	@ 0003c2c4 6146
.org 0x3c2c6
	str r0, [r1, #84]	@ 0003c2c6 4865
.org 0x3c2c8
	mov r0, ip	@ 0003c2c8 6046
.org 0x3c2ca
	adds r0, #114	@ 0003c2ca 7230
.org 0x3c2cc
	ldrb r0, [r0, #0]	@ 0003c2cc 0078
.org 0x3c2ce
	lsls r0, r0, #24	@ 0003c2ce 0006
.org 0x3c2d0
	asrs r0, r0, #24	@ 0003c2d0 0016
.org 0x3c2d2
	cmp r0, #1	@ 0003c2d2 0128
.org 0x3c2d4
	bgt.n 0x3c2e2	@ 0003c2d4 05dc
.org 0x3c2d6
	adds r0, r4, #1	@ 0003c2d6 601c
.org 0x3c2d8
	lsls r0, r0, #24	@ 0003c2d8 0006
.org 0x3c2da
	lsrs r4, r0, #24	@ 0003c2da 040e
.org 0x3c2dc
	cmp r4, #3	@ 0003c2dc 032c
.org 0x3c2de
	bls.n 0x3c2e2	@ 0003c2de 00d9
.org 0x3c2e0
	mov r8, r3	@ 0003c2e0 9846
.org 0x3c2e2
	movs r0, #16	@ 0003c2e2 1020
.org 0x3c2e4
	ands r0, r2	@ 0003c2e4 1040
.org 0x3c2e6
	cmp r0, #0	@ 0003c2e6 0028
.org 0x3c2e8
	beq.n 0x3c30a	@ 0003c2e8 0fd0
.org 0x3c2ea
	cmp r4, #0	@ 0003c2ea 002c
.org 0x3c2ec
	beq.n 0x3c370	@ 0003c2ec 40d0
.org 0x3c2ee
	lsls r0, r4, #1	@ 0003c2ee 6000
.org 0x3c2f0
	adds r0, r0, r6	@ 0003c2f0 8019
.org 0x3c2f2
	movs r2, #0	@ 0003c2f2 0022
.org 0x3c2f4
	ldrsh r1, [r0, r2]	@ 0003c2f4 815e
.org 0x3c2f6
	mov r2, ip	@ 0003c2f6 6246
.org 0x3c2f8
	ldr r0, [r2, #84]	@ 0003c2f8 506d
.org 0x3c2fa
	adds r0, r0, r1	@ 0003c2fa 4018
.org 0x3c2fc
	str r0, [r2, #84]	@ 0003c2fc 5065
.org 0x3c2fe
	subs r0, r4, #1	@ 0003c2fe 601e
.org 0x3c300
	lsls r0, r0, #24	@ 0003c300 0006
.org 0x3c302
	lsrs r4, r0, #24	@ 0003c302 040e
.org 0x3c304
	cmp r4, #0	@ 0003c304 002c
.org 0x3c306
	bne.n 0x3c2ee	@ 0003c306 f2d1
.org 0x3c308
	b.n 0x3c370	@ 0003c308 32e0
.org 0x3c30a
	cmp r4, #0	@ 0003c30a 002c
.org 0x3c30c
	beq.n 0x3c370	@ 0003c30c 30d0
.org 0x3c30e
	lsls r0, r4, #1	@ 0003c30e 6000
.org 0x3c310
	adds r0, r0, r6	@ 0003c310 8019
.org 0x3c312
	movs r2, #0	@ 0003c312 0022
.org 0x3c314
	ldrsh r1, [r0, r2]	@ 0003c314 815e
.org 0x3c316
	mov r2, ip	@ 0003c316 6246
.org 0x3c318
	ldr r0, [r2, #84]	@ 0003c318 506d
.org 0x3c31a
	subs r0, r0, r1	@ 0003c31a 401a
.org 0x3c31c
	str r0, [r2, #84]	@ 0003c31c 5065
.org 0x3c31e
	subs r0, r4, #1	@ 0003c31e 601e
.org 0x3c320
	lsls r0, r0, #24	@ 0003c320 0006
.org 0x3c322
	lsrs r4, r0, #24	@ 0003c322 040e
.org 0x3c324
	cmp r4, #0	@ 0003c324 002c
.org 0x3c326
	bne.n 0x3c30e	@ 0003c326 f2d1
.org 0x3c328
	b.n 0x3c370	@ 0003c328 22e0
.org 0x3c32a
	movs r0, #1	@ 0003c32a 0120
.org 0x3c32c
	mov r1, ip	@ 0003c32c 6146
.org 0x3c32e
	strb r0, [r1, #14]	@ 0003c32e 8873
.org 0x3c330
	mov r0, ip	@ 0003c330 6046
.org 0x3c332
	adds r0, #114	@ 0003c332 7230
.org 0x3c334
	ldrb r0, [r0, #0]	@ 0003c334 0078
.org 0x3c336
	lsls r0, r0, #24	@ 0003c336 0006
.org 0x3c338
	asrs r0, r0, #24	@ 0003c338 0016
.org 0x3c33a
	cmp r0, #1	@ 0003c33a 0128
.org 0x3c33c
	bgt.n 0x3c370	@ 0003c33c 18dc
.org 0x3c33e
	movs r0, #16	@ 0003c33e 1020
.org 0x3c340
	ands r0, r2	@ 0003c340 1040
.org 0x3c342
	cmp r0, #0	@ 0003c342 0028
.org 0x3c344
	beq.n 0x3c356	@ 0003c344 07d0
.org 0x3c346
	lsls r0, r4, #1	@ 0003c346 6000
.org 0x3c348
	adds r0, r0, r6	@ 0003c348 8019
.org 0x3c34a
	movs r2, #0	@ 0003c34a 0022
.org 0x3c34c
	ldrsh r1, [r0, r2]	@ 0003c34c 815e
.org 0x3c34e
	mov r2, ip	@ 0003c34e 6246
.org 0x3c350
	ldr r0, [r2, #84]	@ 0003c350 506d
.org 0x3c352
	adds r0, r0, r1	@ 0003c352 4018
.org 0x3c354
	b.n 0x3c364	@ 0003c354 06e0
.org 0x3c356
	lsls r0, r4, #1	@ 0003c356 6000
.org 0x3c358
	adds r0, r0, r6	@ 0003c358 8019
.org 0x3c35a
	movs r2, #0	@ 0003c35a 0022
.org 0x3c35c
	ldrsh r1, [r0, r2]	@ 0003c35c 815e
.org 0x3c35e
	mov r2, ip	@ 0003c35e 6246
.org 0x3c360
	ldr r0, [r2, #84]	@ 0003c360 506d
.org 0x3c362
	subs r0, r0, r1	@ 0003c362 401a
.org 0x3c364
	str r0, [r2, #84]	@ 0003c364 5065
.org 0x3c366
	adds r0, r4, #1	@ 0003c366 601c
.org 0x3c368
	cmp r0, #3	@ 0003c368 0328
.org 0x3c36a
	ble.n 0x3c370	@ 0003c36a 01dd
.org 0x3c36c
	movs r0, #1	@ 0003c36c 0120
.org 0x3c36e
	mov r8, r0	@ 0003c36e 8046
.org 0x3c370
	mov r0, r8	@ 0003c370 4046
.org 0x3c372
	pop {r3}	@ 0003c372 08bc
.org 0x3c374
	mov r8, r3	@ 0003c374 9846
.org 0x3c376
	pop {r4, r5, r6, r7}	@ 0003c376 f0bc
.org 0x3c378
	pop {r1}	@ 0003c378 02bc
.org 0x3c37a
	bx r1	@ 0003c37a 0847
