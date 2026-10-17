@ FUN_080e7350  entry 0x080e7350  size 116
.thumb
.org 0xe7350
FUN_080e7350:
	push {r4, r5, lr}	@ 000e7350 30b5
.org 0xe7352
	sub sp, #8	@ 000e7352 82b0
.org 0xe7354
	adds r5, r0, #0	@ 000e7354 051c
.org 0xe7356
	ldrb r1, [r5, #17]	@ 000e7356 697c
.org 0xe7358
	cmp r1, #0	@ 000e7358 0029
.org 0xe735a
	bne.n 0xe73a0	@ 000e735a 21d1
.org 0xe735c
	ldr r0, [r5, #84]	@ 000e735c 686d
.org 0xe735e
	str r0, [sp, #0]	@ 000e735e 0090
.org 0xe7360
	ldr r0, [r5, #88]	@ 000e7360 a86d
.org 0xe7362
	ldr r2, [pc, #56]	@ 000e7362 0e4a
.org 0xe7364
	adds r0, r0, r2	@ 000e7364 8018
.org 0xe7366
	str r0, [sp, #4]	@ 000e7366 0190
.org 0xe7368
	str r1, [r5, #92]	@ 000e7368 e965
.org 0xe736a
	str r1, [r5, #96]	@ 000e736a 2966
.org 0xe736c
	movs r2, #128	@ 000e736c 8022
.org 0xe736e
	lsls r2, r2, #2	@ 000e736e 9200
.org 0xe7370
	ldrb r3, [r5, #10]	@ 000e7370 ab7a
.org 0xe7372
	lsrs r3, r3, #4	@ 000e7372 1b09
.org 0xe7374
	movs r4, #1	@ 000e7374 0124
.org 0xe7376
	ands r3, r4	@ 000e7376 2340
.org 0xe7378
	movs r0, #0	@ 000e7378 0020
.org 0xe737a
	mov r1, sp	@ 000e737a 6946
.org 0xe737c
	bl 0xd0dc4	@ 000e737c e9f722fd
.org 0xe7380
	adds r0, r5, #0	@ 000e7380 281c
.org 0xe7382
	adds r0, #84	@ 000e7382 5430
.org 0xe7384
	ldrb r2, [r5, #10]	@ 000e7384 aa7a
.org 0xe7386
	lsrs r2, r2, #4	@ 000e7386 1209
.org 0xe7388
	ands r2, r4	@ 000e7388 2240
.org 0xe738a
	movs r1, #1	@ 000e738a 0121
.org 0xe738c
	bl 0xe70d4	@ 000e738c fff7a2fe
.org 0xe7390
	adds r1, r5, #0	@ 000e7390 291c
.org 0xe7392
	adds r1, #37	@ 000e7392 2531
.org 0xe7394
	movs r0, #24	@ 000e7394 1820
.org 0xe7396
	strb r0, [r1, #0]	@ 000e7396 0870
.org 0xe7398
	b.n 0xe73a8	@ 000e7398 06e0
.org 0xe739a
	.byte 0x00	@ 000e739a data
.org 0xe739b
	.byte 0x00	@ 000e739b data
.org 0xe739c
	.byte 0x00,0xf3,0xff,0xff	@ 000e739c data
.org 0xe73a0
	movs r0, #0	@ 000e73a0 0020
.org 0xe73a2
	str r0, [r5, #92]	@ 000e73a2 e865
.org 0xe73a4
	ldr r0, [pc, #36]	@ 000e73a4 0948
.org 0xe73a6
	str r0, [r5, #96]	@ 000e73a6 2866
.org 0xe73a8
	movs r0, #64	@ 000e73a8 4020
.org 0xe73aa
	str r0, [r5, #104]	@ 000e73aa a866
.org 0xe73ac
	movs r4, #0	@ 000e73ac 0024
.org 0xe73ae
	str r4, [r5, #100]	@ 000e73ae 6c66
.org 0xe73b0
	ldr r1, [pc, #28]	@ 000e73b0 0749
.org 0xe73b2
	ldrb r0, [r5, #17]	@ 000e73b2 687c
.org 0xe73b4
	lsls r0, r0, #1	@ 000e73b4 4000
.org 0xe73b6
	adds r0, r0, r1	@ 000e73b6 4018
.org 0xe73b8
	ldrh r1, [r0, #0]	@ 000e73b8 0188
.org 0xe73ba
	adds r0, r5, #0	@ 000e73ba 281c
.org 0xe73bc
	bl 0x1cf00	@ 000e73bc 35f7a0fd
.org 0xe73c0
	strb r4, [r5, #13]	@ 000e73c0 6c73
.org 0xe73c2
	add sp, #8	@ 000e73c2 02b0
