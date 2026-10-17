@ FUN_080e73d4  entry 0x080e73d4  size 164
.thumb
.org 0xe73d4
FUN_080e73d4:
	push {r4, r5, lr}	@ 000e73d4 30b5
.org 0xe73d6
	sub sp, #8	@ 000e73d6 82b0
.org 0xe73d8
	adds r5, r0, #0	@ 000e73d8 051c
.org 0xe73da
	movs r1, #0	@ 000e73da 0021
.org 0xe73dc
	movs r0, #20	@ 000e73dc 1420
.org 0xe73de
	strb r0, [r5, #18]	@ 000e73de a874
.org 0xe73e0
	ldrb r0, [r5, #17]	@ 000e73e0 687c
.org 0xe73e2
	cmp r0, #0	@ 000e73e2 0028
.org 0xe73e4
	bne.n 0xe7430	@ 000e73e4 24d1
.org 0xe73e6
	ldr r0, [r5, #84]	@ 000e73e6 686d
.org 0xe73e8
	str r0, [sp, #0]	@ 000e73e8 0090
.org 0xe73ea
	ldr r0, [r5, #88]	@ 000e73ea a86d
.org 0xe73ec
	ldr r2, [pc, #56]	@ 000e73ec 0e4a
.org 0xe73ee
	adds r0, r0, r2	@ 000e73ee 8018
.org 0xe73f0
	str r0, [sp, #4]	@ 000e73f0 0190
.org 0xe73f2
	str r1, [r5, #92]	@ 000e73f2 e965
.org 0xe73f4
	str r1, [r5, #96]	@ 000e73f4 2966
.org 0xe73f6
	str r1, [r5, #104]	@ 000e73f6 a966
.org 0xe73f8
	str r1, [r5, #100]	@ 000e73f8 6966
.org 0xe73fa
	movs r2, #128	@ 000e73fa 8022
.org 0xe73fc
	lsls r2, r2, #2	@ 000e73fc 9200
.org 0xe73fe
	ldrb r3, [r5, #10]	@ 000e73fe ab7a
.org 0xe7400
	lsrs r3, r3, #4	@ 000e7400 1b09
.org 0xe7402
	movs r4, #1	@ 000e7402 0124
.org 0xe7404
	ands r3, r4	@ 000e7404 2340
.org 0xe7406
	movs r0, #0	@ 000e7406 0020
.org 0xe7408
	mov r1, sp	@ 000e7408 6946
.org 0xe740a
	bl 0xd0dc4	@ 000e740a e9f7dbfc
.org 0xe740e
	adds r0, r5, #0	@ 000e740e 281c
.org 0xe7410
	adds r0, #84	@ 000e7410 5430
.org 0xe7412
	ldr r1, [pc, #24]	@ 000e7412 0649
.org 0xe7414
	ldrb r2, [r5, #10]	@ 000e7414 aa7a
.org 0xe7416
	lsrs r2, r2, #4	@ 000e7416 1209
.org 0xe7418
	ands r2, r4	@ 000e7418 2240
.org 0xe741a
	bl 0xe70d4	@ 000e741a fff75bfe
.org 0xe741e
	adds r1, r5, #0	@ 000e741e 291c
.org 0xe7420
	adds r1, #37	@ 000e7420 2531
.org 0xe7422
	movs r0, #24	@ 000e7422 1820
.org 0xe7424
	strb r0, [r1, #0]	@ 000e7424 0870
.org 0xe7426
	b.n 0xe743a	@ 000e7426 08e0
.org 0xe7428
	.byte 0x00,0xf3,0xff,0xff	@ 000e7428 data
.org 0xe742c
	.byte 0x01,0x01,0x00,0x00	@ 000e742c data
.org 0xe7430
	str r1, [r5, #92]	@ 000e7430 e965
.org 0xe7432
	str r1, [r5, #96]	@ 000e7432 2966
.org 0xe7434
	str r1, [r5, #104]	@ 000e7434 a966
.org 0xe7436
	movs r0, #15	@ 000e7436 0f20
.org 0xe7438
	str r0, [r5, #100]	@ 000e7438 6866
.org 0xe743a
	ldrb r1, [r5, #10]	@ 000e743a a97a
.org 0xe743c
	movs r0, #16	@ 000e743c 1020
.org 0xe743e
	ands r0, r1	@ 000e743e 0840
.org 0xe7440
	cmp r0, #0	@ 000e7440 0028
.org 0xe7442
	beq.n 0xe7464	@ 000e7442 0fd0
.org 0xe7444
	ldr r0, [r5, #92]	@ 000e7444 e86d
.org 0xe7446
	lsls r0, r0, #8	@ 000e7446 0002
.org 0xe7448
	negs r0, r0	@ 000e7448 4042
.org 0xe744a
	cmp r0, #0	@ 000e744a 0028
.org 0xe744c
	bge.n 0xe7450	@ 000e744c 00da
.org 0xe744e
	adds r0, #255	@ 000e744e ff30
.org 0xe7450
	asrs r0, r0, #8	@ 000e7450 0012
.org 0xe7452
	str r0, [r5, #92]	@ 000e7452 e865
.org 0xe7454
	ldr r0, [r5, #100]	@ 000e7454 686e
.org 0xe7456
	lsls r0, r0, #8	@ 000e7456 0002
.org 0xe7458
	negs r0, r0	@ 000e7458 4042
.org 0xe745a
	cmp r0, #0	@ 000e745a 0028
.org 0xe745c
	bge.n 0xe7460	@ 000e745c 00da
.org 0xe745e
	adds r0, #255	@ 000e745e ff30
.org 0xe7460
	asrs r0, r0, #8	@ 000e7460 0012
.org 0xe7462
	str r0, [r5, #100]	@ 000e7462 6866
.org 0xe7464
	ldr r1, [pc, #24]	@ 000e7464 0649
.org 0xe7466
	ldrb r0, [r5, #17]	@ 000e7466 687c
.org 0xe7468
	lsls r0, r0, #1	@ 000e7468 4000
.org 0xe746a
	adds r0, r0, r1	@ 000e746a 4018
.org 0xe746c
	ldrh r1, [r0, #0]	@ 000e746c 0188
.org 0xe746e
	adds r0, r5, #0	@ 000e746e 281c
.org 0xe7470
	bl 0x1cf00	@ 000e7470 35f746fd
.org 0xe7474
	movs r0, #0	@ 000e7474 0020
.org 0xe7476
	strb r0, [r5, #13]	@ 000e7476 6873
