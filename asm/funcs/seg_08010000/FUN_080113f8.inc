@ FUN_080113f8  entry 0x080113f8  size 240
.thumb
.org 0x113f8
FUN_080113f8:
	push {r4, r5, r6, r7, lr}	@ 000113f8 f0b5
.org 0x113fa
	sub sp, #8	@ 000113fa 82b0
.org 0x113fc
	adds r5, r0, #0	@ 000113fc 051c
.org 0x113fe
	ldr r0, [r5, #92]	@ 000113fe e86d
.org 0x11400
	lsls r3, r0, #16	@ 00011400 0304
.org 0x11402
	ldr r7, [pc, #176]	@ 00011402 2c4f
.org 0x11404
	ldr r1, [pc, #176]	@ 00011404 2c49
.org 0x11406
	adds r0, r7, r1	@ 00011406 7818
.org 0x11408
	ldrb r1, [r0, #0]	@ 00011408 0178
.org 0x1140a
	movs r0, #15	@ 0001140a 0f20
.org 0x1140c
	ands r0, r1	@ 0001140c 0840
.org 0x1140e
	cmp r0, #3	@ 0001140e 0328
.org 0x11410
	bne.n 0x114e0	@ 00011410 66d1
.org 0x11412
	ldrb r6, [r5, #14]	@ 00011412 ae7b
.org 0x11414
	cmp r6, #0	@ 00011414 002e
.org 0x11416
	bne.n 0x1146e	@ 00011416 2ad1
.org 0x11418
	lsrs r3, r3, #20	@ 00011418 1b0d
.org 0x1141a
	lsls r2, r3, #1	@ 0001141a 5a00
.org 0x1141c
	ldr r4, [pc, #156]	@ 0001141c 274c
.org 0x1141e
	adds r2, r2, r4	@ 0001141e 1219
.org 0x11420
	ldr r1, [r5, #100]	@ 00011420 696e
.org 0x11422
	movs r0, #69	@ 00011422 4520
.org 0x11424
	orrs r1, r0	@ 00011424 0143
.org 0x11426
	strh r1, [r2, #0]	@ 00011426 1180
.org 0x11428
	lsls r3, r3, #2	@ 00011428 9b00
.org 0x1142a
	adds r4, #8	@ 0001142a 0834
.org 0x1142c
	adds r3, r3, r4	@ 0001142c 1b19
.org 0x1142e
	str r6, [r3, #0]	@ 0001142e 1e60
.org 0x11430
	ldr r0, [pc, #140]	@ 00011430 2348
.org 0x11432
	ldr r0, [r0, #0]	@ 00011432 0068
.org 0x11434
	ldr r2, [pc, #140]	@ 00011434 234a
.org 0x11436
	adds r0, r0, r2	@ 00011436 8018
.org 0x11438
	movs r2, #248	@ 00011438 f822
.org 0x1143a
	lsls r2, r2, #5	@ 0001143a 5201
.org 0x1143c
	ands r1, r2	@ 0001143c 1140
.org 0x1143e
	lsls r1, r1, #3	@ 0001143e c900
.org 0x11440
	movs r2, #192	@ 00011440 c022
.org 0x11442
	lsls r2, r2, #19	@ 00011442 d204
.org 0x11444
	adds r1, r1, r2	@ 00011444 8918
.org 0x11446
	movs r2, #128	@ 00011446 8022
.org 0x11448
	lsls r2, r2, #2	@ 00011448 9200
.org 0x1144a
	bl 0x128be0	@ 0001144a 17f1c9fb
.org 0x1144e
	adds r0, r5, #0	@ 0001144e 281c
.org 0x11450
	adds r0, #104	@ 00011450 6830
.org 0x11452
	strh r6, [r0, #0]	@ 00011452 0680
.org 0x11454
	adds r0, #2	@ 00011454 0230
.org 0x11456
	strh r6, [r0, #0]	@ 00011456 0680
.org 0x11458
	strh r6, [r5, #16]	@ 00011458 2e82
.org 0x1145a
	strh r6, [r5, #18]	@ 0001145a 6e82
.org 0x1145c
	ldr r1, [pc, #104]	@ 0001145c 1a49
.org 0x1145e
	ldr r0, [pc, #108]	@ 0001145e 1b48
.org 0x11460
	strh r0, [r1, #0]	@ 00011460 0880
.org 0x11462
	movs r0, #128	@ 00011462 8020
.org 0x11464
	lsls r0, r0, #5	@ 00011464 4001
.org 0x11466
	strh r0, [r1, #2]	@ 00011466 4880
.org 0x11468
	ldrb r0, [r5, #14]	@ 00011468 a87b
.org 0x1146a
	adds r0, #1	@ 0001146a 0130
.org 0x1146c
	strb r0, [r5, #14]	@ 0001146c a873
.org 0x1146e
	ldr r1, [pc, #96]	@ 0001146e 1849
.org 0x11470
	ldr r3, [pc, #96]	@ 00011470 184b
.org 0x11472
	adds r0, r7, r3	@ 00011472 f818
.org 0x11474
	ldrb r0, [r0, #0]	@ 00011474 0078
.org 0x11476
	lsls r0, r0, #2	@ 00011476 8000
.org 0x11478
	adds r0, r0, r1	@ 00011478 4018
.org 0x1147a
	ldr r1, [r0, #0]	@ 0001147a 0168
.org 0x1147c
	adds r0, r5, #0	@ 0001147c 281c
.org 0x1147e
	bl 0x128f80	@ 0001147e 17f17ffd
.org 0x11482
	ldr r2, [pc, #84]	@ 00011482 154a
.org 0x11484
	ldrh r1, [r2, #8]	@ 00011484 1189
.org 0x11486
	movs r0, #8	@ 00011486 0820
.org 0x11488
	ands r0, r1	@ 00011488 0840
.org 0x1148a
	cmp r0, #0	@ 0001148a 0028
.org 0x1148c
	bne.n 0x1150e	@ 0001148c 3fd1
.org 0x1148e
	ldrb r1, [r2, #18]	@ 0001148e 917c
.org 0x11490
	movs r0, #1	@ 00011490 0120
.org 0x11492
	ands r0, r1	@ 00011492 0840
.org 0x11494
	cmp r0, #0	@ 00011494 0028
.org 0x11496
	bne.n 0x1150e	@ 00011496 3ad1
.org 0x11498
	ldr r0, [pc, #64]	@ 00011498 1048
.org 0x1149a
	ldr r1, [r0, #0]	@ 0001149a 0168
.org 0x1149c
	movs r0, #222	@ 0001149c de20
.org 0x1149e
	lsls r0, r0, #1	@ 0001149e 4000
.org 0x114a0
	adds r1, r1, r0	@ 000114a0 0918
.org 0x114a2
	adds r0, r5, #0	@ 000114a2 281c
.org 0x114a4
	adds r0, #106	@ 000114a4 6a30
.org 0x114a6
	movs r3, #0	@ 000114a6 0023
.org 0x114a8
	ldrsh r2, [r0, r3]	@ 000114a8 c25e
.org 0x114aa
	ldr r0, [r1, #0]	@ 000114aa 0868
.org 0x114ac
	adds r0, r0, r2	@ 000114ac 8018
.org 0x114ae
	str r0, [r1, #0]	@ 000114ae 0860
.org 0x114b0
	b.n 0x1150e	@ 000114b0 2de0
.org 0x114b2
	.byte 0x00	@ 000114b2 data
.org 0x114b3
	.byte 0x00	@ 000114b3 data
.org 0x114b4
	.byte 0xb0,0x0a,0x00,0x02	@ 000114b4 data
.org 0x114b8
	.byte 0x10,0xc0,0x02,0x00	@ 000114b8 data
.org 0x114bc
	.byte 0x04,0x0a,0x00,0x02	@ 000114bc data
.org 0x114c0
	.byte 0x18,0xc1,0xb2,0x08	@ 000114c0 data
.org 0x114c4
	.byte 0x20,0xc1,0xb2,0x08	@ 000114c4 data
.org 0x114c8
	.byte 0x40,0x0a,0x00,0x02	@ 000114c8 data
.org 0x114cc
	.byte 0x44,0x3b,0x00,0x00	@ 000114cc data
.org 0x114d0
	.byte 0x04,0x02,0x83,0x08	@ 000114d0 data
.org 0x114d4
	.byte 0x24,0xd0,0x02,0x00	@ 000114d4 data
.org 0x114d8
	.byte 0x10,0xe9,0x02,0x02	@ 000114d8 data
.org 0x114dc
	.byte 0xf0,0xdb,0x02,0x02	@ 000114dc data
.org 0x114e0
	ldrb r2, [r5, #14]	@ 000114e0 aa7b
.org 0x114e2
	cmp r2, #0	@ 000114e2 002a
.org 0x114e4
	bne.n 0x1150e	@ 000114e4 13d1
.org 0x114e6
	lsrs r0, r3, #20	@ 000114e6 180d
