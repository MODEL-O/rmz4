@ FUN_080f5308  entry 0x080f5308  size 90
.thumb
.org 0xf5308
FUN_080f5308:
	push {r4, r5, r6, lr}	@ 000f5308 70b5
.org 0xf530a
	adds r6, r0, #0	@ 000f530a 061c
.org 0xf530c
	lsls r1, r1, #24	@ 000f530c 0906
.org 0xf530e
	lsrs r5, r1, #24	@ 000f530e 0d0e
.org 0xf5310
	lsls r2, r2, #24	@ 000f5310 1206
.org 0xf5312
	lsrs r4, r2, #24	@ 000f5312 140e
.org 0xf5314
	ldr r0, [pc, #76]	@ 000f5314 1348
.org 0xf5316
	ldr r0, [r0, #0]	@ 000f5316 0068
.org 0xf5318
	bl 0x5500	@ 000f5318 10f7f2f8
.org 0xf531c
	adds r3, r0, #0	@ 000f531c 031c
.org 0xf531e
	cmp r3, #0	@ 000f531e 002b
.org 0xf5320
	beq.n 0xf535a	@ 000f5320 1bd0
.org 0xf5322
	adds r1, r3, #0	@ 000f5322 191c
.org 0xf5324
	adds r1, #37	@ 000f5324 2531
.org 0xf5326
	movs r2, #0	@ 000f5326 0022
.org 0xf5328
	movs r0, #30	@ 000f5328 1e20
.org 0xf532a
	strb r0, [r1, #0]	@ 000f532a 0870
.org 0xf532c
	ldr r1, [pc, #56]	@ 000f532c 0e49
.org 0xf532e
	movs r0, #20	@ 000f532e 1420
.org 0xf5330
	strb r0, [r3, #9]	@ 000f5330 5872
.org 0xf5332
	ldr r0, [r1, #80]	@ 000f5332 086d
.org 0xf5334
	ldr r0, [r0, #0]	@ 000f5334 0068
.org 0xf5336
	str r0, [r3, #20]	@ 000f5336 5861
.org 0xf5338
	movs r0, #0	@ 000f5338 0020
.org 0xf533a
	strh r2, [r3, #32]	@ 000f533a 1a84
.org 0xf533c
	adds r1, r3, #0	@ 000f533c 191c
.org 0xf533e
	adds r1, #34	@ 000f533e 2231
.org 0xf5340
	strb r0, [r1, #0]	@ 000f5340 0870
.org 0xf5342
	ldrb r1, [r3, #11]	@ 000f5342 d97a
.org 0xf5344
	movs r0, #16	@ 000f5344 1020
.org 0xf5346
	orrs r0, r1	@ 000f5346 0843
.org 0xf5348
	strb r0, [r3, #11]	@ 000f5348 d872
.org 0xf534a
	ldrb r0, [r3, #28]	@ 000f534a 187f
.org 0xf534c
	strb r0, [r3, #29]	@ 000f534c 5877
.org 0xf534e
	ldr r0, [r6, #0]	@ 000f534e 3068
.org 0xf5350
	ldr r1, [r6, #4]	@ 000f5350 7168
.org 0xf5352
	str r0, [r3, #84]	@ 000f5352 5865
.org 0xf5354
	str r1, [r3, #88]	@ 000f5354 9965
.org 0xf5356
	strb r5, [r3, #16]	@ 000f5356 1d74
.org 0xf5358
	strb r4, [r3, #17]	@ 000f5358 5c74
.org 0xf535a
	adds r0, r3, #0	@ 000f535a 181c
.org 0xf535c
	pop {r4, r5, r6}	@ 000f535c 70bc
.org 0xf535e
	pop {r1}	@ 000f535e 02bc
.org 0xf5360
	bx r1	@ 000f5360 0847
