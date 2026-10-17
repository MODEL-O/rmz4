@ FUN_080892ac  entry 0x080892ac  size 278
.thumb
.org 0x892ac
FUN_080892ac:
	push {r4, r5, r6, r7, lr}	@ 000892ac f0b5
.org 0x892ae
	mov r7, r9	@ 000892ae 4f46
.org 0x892b0
	mov r6, r8	@ 000892b0 4646
.org 0x892b2
	push {r6, r7}	@ 000892b2 c0b4
.org 0x892b4
	adds r4, r0, #0	@ 000892b4 041c
.org 0x892b6
	mov r8, r1	@ 000892b6 8846
.org 0x892b8
	ldr r5, [r4, #44]	@ 000892b8 e56a
.org 0x892ba
	ldr r0, [r4, #12]	@ 000892ba e068
.org 0x892bc
	ldr r7, [r0, #44]	@ 000892bc c76a
.org 0x892be
	adds r6, r5, #0	@ 000892be 2e1c
.org 0x892c0
	adds r6, #180	@ 000892c0 b436
.org 0x892c2
	ldr r0, [pc, #128]	@ 000892c2 2048
.org 0x892c4
	ldr r0, [r0, #0]	@ 000892c4 0068
.org 0x892c6
	ldr r0, [r0, #84]	@ 000892c6 406d
.org 0x892c8
	ldr r1, [r5, #84]	@ 000892c8 696d
.org 0x892ca
	subs r0, r0, r1	@ 000892ca 401a
.org 0x892cc
	str r0, [r6, #0]	@ 000892cc 3060
.org 0x892ce
	movs r0, #57	@ 000892ce 3920
.org 0x892d0
	bl 0x6984	@ 000892d0 7df758fb
.org 0x892d4
	ldr r0, [r4, #20]	@ 000892d4 6069
.org 0x892d6
	movs r1, #64	@ 000892d6 4021
.org 0x892d8
	ands r0, r1	@ 000892d8 0840
.org 0x892da
	cmp r0, #0	@ 000892da 0028
.org 0x892dc
	beq.n 0x89394	@ 000892dc 5ad0
.org 0x892de
	adds r0, r5, #0	@ 000892de 281c
.org 0x892e0
	adds r0, #140	@ 000892e0 8c30
.org 0x892e2
	ldr r1, [r0, #0]	@ 000892e2 0168
.org 0x892e4
	movs r2, #128	@ 000892e4 8022
.org 0x892e6
	lsls r2, r2, #2	@ 000892e6 9200
.org 0x892e8
	ands r1, r2	@ 000892e8 1140
.org 0x892ea
	mov r9, r0	@ 000892ea 8146
.org 0x892ec
	cmp r1, #0	@ 000892ec 0029
.org 0x892ee
	beq.n 0x892fa	@ 000892ee 04d0
.org 0x892f0
	mov r1, r8	@ 000892f0 4146
.org 0x892f2
	ldr r0, [r1, #0]	@ 000892f2 0868
.org 0x892f4
	ldr r1, [r5, #84]	@ 000892f4 696d
.org 0x892f6
	subs r0, r0, r1	@ 000892f6 401a
.org 0x892f8
	str r0, [r6, #0]	@ 000892f8 3060
.org 0x892fa
	adds r0, r5, #0	@ 000892fa 281c
.org 0x892fc
	adds r0, #192	@ 000892fc c030
.org 0x892fe
	ldrb r1, [r0, #0]	@ 000892fe 0178
.org 0x89300
	mov r8, r0	@ 00089300 8046
.org 0x89302
	cmp r1, #0	@ 00089302 0029
.org 0x89304
	bne.n 0x89394	@ 00089304 46d1
.org 0x89306
	ldr r1, [r4, #12]	@ 00089306 e168
.org 0x89308
	ldr r0, [r1, #4]	@ 00089308 4868
.org 0x8930a
	ldrb r0, [r0, #4]	@ 0008930a 0079
.org 0x8930c
	cmp r0, #4	@ 0008930c 0428
.org 0x8930e
	bne.n 0x89394	@ 0008930e 41d1
.org 0x89310
	adds r0, r1, #0	@ 00089310 081c
.org 0x89312
	adds r0, #57	@ 00089312 3930
.org 0x89314
	ldrb r1, [r0, #0]	@ 00089314 0178
.org 0x89316
	movs r0, #32	@ 00089316 2020
.org 0x89318
	ands r0, r1	@ 00089318 0840
.org 0x8931a
	cmp r0, #0	@ 0008931a 0028
.org 0x8931c
	beq.n 0x89394	@ 0008931c 3ad0
.org 0x8931e
	ldrb r2, [r5, #10]	@ 0008931e aa7a
.org 0x89320
	movs r1, #1	@ 00089320 0121
.org 0x89322
	ldrb r0, [r7, #10]	@ 00089322 b87a
.org 0x89324
	eors r0, r2	@ 00089324 5040
.org 0x89326
	lsrs r0, r0, #4	@ 00089326 0009
.org 0x89328
	ands r0, r1	@ 00089328 0840
.org 0x8932a
	cmp r0, #0	@ 0008932a 0028
.org 0x8932c
	beq.n 0x89394	@ 0008932c 32d0
.org 0x8932e
	movs r0, #16	@ 0008932e 1020
.org 0x89330
	ands r0, r2	@ 00089330 1040
.org 0x89332
	cmp r0, #0	@ 00089332 0028
.org 0x89334
	beq.n 0x89348	@ 00089334 08d0
.org 0x89336
	ldr r0, [r5, #84]	@ 00089336 686d
.org 0x89338
	ldr r1, [r7, #84]	@ 00089338 796d
.org 0x8933a
	subs r0, r0, r1	@ 0008933a 401a
.org 0x8933c
	cmp r0, #0	@ 0008933c 0028
.org 0x8933e
	blt.n 0x89352	@ 0008933e 08db
.org 0x89340
	b.n 0x89394	@ 00089340 28e0
.org 0x89342
	.byte 0x00	@ 00089342 data
.org 0x89343
	.byte 0x00	@ 00089343 data
.org 0x89344
	.byte 0xf0,0xdb,0x02,0x02	@ 00089344 data
.org 0x89348
	ldr r0, [r5, #84]	@ 00089348 686d
.org 0x8934a
	ldr r1, [r7, #84]	@ 0008934a 796d
.org 0x8934c
	subs r0, r0, r1	@ 0008934c 401a
.org 0x8934e
	cmp r0, #0	@ 0008934e 0028
.org 0x89350
	ble.n 0x89394	@ 00089350 20dd
.org 0x89352
	ldr r4, [pc, #60]	@ 00089352 0f4c
.org 0x89354
	ldr r0, [r4, #0]	@ 00089354 2068
.org 0x89356
	movs r1, #4	@ 00089356 0421
.org 0x89358
	movs r2, #1	@ 00089358 0122
.org 0x8935a
	bl 0x3a578	@ 0008935a b1f70df9
.org 0x8935e
	movs r3, #0	@ 0008935e 0023
.org 0x89360
	movs r6, #1	@ 00089360 0126
.org 0x89362
	mov r0, r8	@ 00089362 4046
.org 0x89364
	strb r6, [r0, #0]	@ 00089364 0670
.org 0x89366
	adds r2, r5, #0	@ 00089366 2a1c
.org 0x89368
	adds r2, #180	@ 00089368 b432
.org 0x8936a
	ldr r0, [r4, #0]	@ 0008936a 2068
.org 0x8936c
	ldr r0, [r0, #84]	@ 0008936c 406d
.org 0x8936e
	ldr r1, [r5, #84]	@ 0008936e 696d
.org 0x89370
	subs r0, r0, r1	@ 00089370 401a
.org 0x89372
	str r0, [r2, #0]	@ 00089372 1060
.org 0x89374
	movs r0, #6	@ 00089374 0620
.org 0x89376
	strb r0, [r5, #13]	@ 00089376 6873
.org 0x89378
	strb r3, [r5, #14]	@ 00089378 ab73
.org 0x8937a
	mov r1, r9	@ 0008937a 4946
.org 0x8937c
	ldr r0, [r1, #0]	@ 0008937c 0868
.org 0x8937e
	movs r1, #128	@ 0008937e 8021
.org 0x89380
	lsls r1, r1, #2	@ 00089380 8900
.org 0x89382
	ands r0, r1	@ 00089382 0840
.org 0x89384
	cmp r0, #0	@ 00089384 0028
.org 0x89386
	beq.n 0x893c0	@ 00089386 1bd0
.org 0x89388
	adds r0, r5, #0	@ 00089388 281c
.org 0x8938a
	adds r0, #164	@ 0008938a a430
.org 0x8938c
	strh r6, [r0, #0]	@ 0008938c 0680
.org 0x8938e
	b.n 0x893c0	@ 0008938e 17e0
.org 0x89390
	.byte 0xf0,0xdb,0x02,0x02	@ 00089390 data
.org 0x89394
	ldr r1, [r4, #20]	@ 00089394 6169
.org 0x89396
	movs r0, #128	@ 00089396 8020
.org 0x89398
	lsls r0, r0, #2	@ 00089398 8000
.org 0x8939a
	ands r0, r1	@ 0008939a 0840
.org 0x8939c
	cmp r0, #0	@ 0008939c 0028
.org 0x8939e
	beq.n 0x893c0	@ 0008939e 0fd0
.org 0x893a0
	movs r0, #128	@ 000893a0 8020
.org 0x893a2
	lsls r0, r0, #10	@ 000893a2 8002
.org 0x893a4
	ands r1, r0	@ 000893a4 0140
.org 0x893a6
	cmp r1, #0	@ 000893a6 0029
.org 0x893a8
	beq.n 0x893c0	@ 000893a8 0ad0
.org 0x893aa
	ldr r0, [pc, #32]	@ 000893aa 0848
.org 0x893ac
	ldr r0, [r0, #0]	@ 000893ac 0068
.org 0x893ae
	cmp r0, #0	@ 000893ae 0028
.org 0x893b0
	beq.n 0x893c0	@ 000893b0 06d0
.org 0x893b2
	movs r1, #3	@ 000893b2 0321
.org 0x893b4
	movs r2, #4	@ 000893b4 0422
.org 0x893b6
	bl 0x3a578	@ 000893b6 b1f7dff8
.org 0x893ba
	adds r1, r5, #0	@ 000893ba 291c
.org 0x893bc
	adds r1, #193	@ 000893bc c131
.org 0x893be
	strb r0, [r1, #0]	@ 000893be 0870
.org 0x893c0
	pop {r3, r4}	@ 000893c0 18bc
