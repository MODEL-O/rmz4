@ FUN_080463ac  entry 0x080463ac  size 248
.thumb
.org 0x463ac
FUN_080463ac:
	push {r4, r5, lr}	@ 000463ac 30b5
.org 0x463ae
	adds r5, r0, #0	@ 000463ae 051c
.org 0x463b0
	ldr r1, [pc, #100]	@ 000463b0 1949
.org 0x463b2
	ldrb r0, [r5, #9]	@ 000463b2 687a
.org 0x463b4
	lsls r0, r0, #2	@ 000463b4 8000
.org 0x463b6
	adds r0, r0, r1	@ 000463b6 4018
.org 0x463b8
	movs r1, #1	@ 000463b8 0121
.org 0x463ba
	str r1, [r5, #12]	@ 000463ba e960
.org 0x463bc
	ldr r0, [r0, #0]	@ 000463bc 0068
.org 0x463be
	ldr r0, [r0, #4]	@ 000463be 4068
.org 0x463c0
	str r0, [r5, #20]	@ 000463c0 6861
.org 0x463c2
	adds r0, r5, #0	@ 000463c2 281c
.org 0x463c4
	bl 0x1cc9c	@ 000463c4 d6f76afc
.org 0x463c8
	adds r0, r5, #0	@ 000463c8 281c
.org 0x463ca
	bl 0x1ceec	@ 000463ca d6f78ffd
.org 0x463ce
	ldrb r1, [r5, #10]	@ 000463ce a97a
.org 0x463d0
	movs r0, #1	@ 000463d0 0120
.org 0x463d2
	orrs r0, r1	@ 000463d2 0843
.org 0x463d4
	movs r1, #2	@ 000463d4 0221
.org 0x463d6
	orrs r0, r1	@ 000463d6 0843
.org 0x463d8
	strb r0, [r5, #10]	@ 000463d8 a872
.org 0x463da
	ldr r1, [pc, #64]	@ 000463da 1049
.org 0x463dc
	adds r0, r5, #0	@ 000463dc 281c
.org 0x463de
	bl 0x1cf00	@ 000463de d6f78ffd
.org 0x463e2
	adds r0, r5, #0	@ 000463e2 281c
.org 0x463e4
	bl 0x1cff0	@ 000463e4 d6f704fe
.org 0x463e8
	ldrb r1, [r5, #10]	@ 000463e8 a97a
.org 0x463ea
	movs r0, #4	@ 000463ea 0420
.org 0x463ec
	orrs r0, r1	@ 000463ec 0843
.org 0x463ee
	strb r0, [r5, #10]	@ 000463ee a872
.org 0x463f0
	adds r4, r5, #0	@ 000463f0 2c1c
.org 0x463f2
	adds r4, #116	@ 000463f2 7434
.org 0x463f4
	ldr r1, [pc, #40]	@ 000463f4 0a49
.org 0x463f6
	adds r2, r5, #0	@ 000463f6 2a1c
.org 0x463f8
	adds r2, #84	@ 000463f8 5432
.org 0x463fa
	adds r0, r4, #0	@ 000463fa 201c
.org 0x463fc
	movs r3, #8	@ 000463fc 0823
.org 0x463fe
	bl 0x5760	@ 000463fe bff7aff9
.org 0x46402
	str r5, [r4, #44]	@ 00046402 e562
.org 0x46404
	ldr r0, [pc, #28]	@ 00046404 0748
.org 0x46406
	str r0, [r4, #36]	@ 00046406 6062
.org 0x46408
	ldrb r0, [r5, #17]	@ 00046408 687c
.org 0x4640a
	cmp r0, #0	@ 0004640a 0028
.org 0x4640c
	beq.n 0x46428	@ 0004640c 0cd0
.org 0x4640e
	ldr r0, [r5, #88]	@ 0004640e a86d
.org 0x46410
	movs r1, #160	@ 00046410 a021
.org 0x46412
	lsls r1, r1, #4	@ 00046412 0901
.org 0x46414
	adds r0, r0, r1	@ 00046414 4018
.org 0x46416
	b.n 0x4642e	@ 00046416 0ae0
.org 0x46418
	.byte 0xf8,0x39,0x85,0x08	@ 00046418 data
.org 0x4641c
	.byte 0x06,0x83,0x00,0x00	@ 0004641c data
.org 0x46420
	.byte 0x98,0x6c,0x85,0x08	@ 00046420 data
.org 0x46424
	.byte 0x0d,0x69,0x04,0x08	@ 00046424 data
.org 0x46428
	ldr r0, [r5, #88]	@ 00046428 a86d
.org 0x4642a
	ldr r2, [pc, #24]	@ 0004642a 064a
.org 0x4642c
	adds r0, r0, r2	@ 0004642c 8018
.org 0x4642e
	str r0, [r5, #88]	@ 0004642e a865
.org 0x46430
	ldrb r1, [r5, #10]	@ 00046430 a97a
.org 0x46432
	movs r0, #16	@ 00046432 1020
.org 0x46434
	ands r0, r1	@ 00046434 0840
.org 0x46436
	cmp r0, #0	@ 00046436 0028
.org 0x46438
	beq.n 0x4644c	@ 00046438 08d0
.org 0x4643a
	ldrb r0, [r5, #17]	@ 0004643a 687c
.org 0x4643c
	cmp r0, #0	@ 0004643c 0028
.org 0x4643e
	beq.n 0x46448	@ 0004643e 03d0
.org 0x46440
	movs r0, #20	@ 00046440 1420
.org 0x46442
	b.n 0x46458	@ 00046442 09e0
.org 0x46444
	.byte 0x00,0xf6,0xff,0xff	@ 00046444 data
.org 0x46448
	movs r0, #236	@ 00046448 ec20
.org 0x4644a
	b.n 0x46458	@ 0004644a 05e0
.org 0x4644c
	ldrb r0, [r5, #17]	@ 0004644c 687c
.org 0x4644e
	cmp r0, #0	@ 0004644e 0028
.org 0x46450
	beq.n 0x46456	@ 00046450 01d0
.org 0x46452
	movs r0, #108	@ 00046452 6c20
.org 0x46454
	b.n 0x46458	@ 00046454 00e0
.org 0x46456
	movs r0, #148	@ 00046456 9420
.org 0x46458
	strb r0, [r5, #18]	@ 00046458 a874
.org 0x4645a
	ldr r2, [pc, #92]	@ 0004645a 174a
.org 0x4645c
	ldrb r0, [r5, #18]	@ 0004645c a87c
.org 0x4645e
	adds r0, #64	@ 0004645e 4030
.org 0x46460
	lsls r0, r0, #24	@ 00046460 0006
.org 0x46462
	lsrs r0, r0, #23	@ 00046462 c00d
.org 0x46464
	adds r0, r0, r2	@ 00046464 8018
.org 0x46466
	movs r3, #0	@ 00046466 0023
.org 0x46468
	ldrsh r1, [r0, r3]	@ 00046468 c15e
.org 0x4646a
	lsls r0, r1, #1	@ 0004646a 4800
.org 0x4646c
	adds r0, r0, r1	@ 0004646c 4018
.org 0x4646e
	lsls r0, r0, #1	@ 0004646e 4000
.org 0x46470
	str r0, [r5, #92]	@ 00046470 e865
.org 0x46472
	ldrb r0, [r5, #18]	@ 00046472 a87c
.org 0x46474
	lsls r0, r0, #1	@ 00046474 4000
.org 0x46476
	adds r0, r0, r2	@ 00046476 8018
.org 0x46478
	movs r2, #0	@ 00046478 0022
.org 0x4647a
	ldrsh r1, [r0, r2]	@ 0004647a 815e
.org 0x4647c
	lsls r0, r1, #1	@ 0004647c 4800
.org 0x4647e
	adds r0, r0, r1	@ 0004647e 4018
.org 0x46480
	lsls r0, r0, #1	@ 00046480 4000
.org 0x46482
	str r0, [r5, #96]	@ 00046482 2866
.org 0x46484
	movs r0, #0	@ 00046484 0020
.org 0x46486
	strb r0, [r5, #19]	@ 00046486 e874
.org 0x46488
	adds r1, r5, #0	@ 00046488 291c
.org 0x4648a
	adds r1, #180	@ 0004648a b431
.org 0x4648c
	ldr r0, [r5, #84]	@ 0004648c 686d
.org 0x4648e
	str r0, [r1, #0]	@ 0004648e 0860
.org 0x46490
	adds r1, #4	@ 00046490 0431
.org 0x46492
	ldr r0, [r5, #88]	@ 00046492 a86d
.org 0x46494
	str r0, [r1, #0]	@ 00046494 0860
.org 0x46496
	adds r1, #4	@ 00046496 0431
.org 0x46498
	ldr r0, [r5, #84]	@ 00046498 686d
.org 0x4649a
	str r0, [r1, #0]	@ 0004649a 0860
.org 0x4649c
	adds r1, #4	@ 0004649c 0431
.org 0x4649e
	ldr r0, [r5, #88]	@ 0004649e a86d
.org 0x464a0
	str r0, [r1, #0]	@ 000464a0 0860
.org 0x464a2
	ldr r0, [r5, #44]	@ 000464a2 e86a
