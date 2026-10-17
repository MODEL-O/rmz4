@ FUN_080563e4  entry 0x080563e4  size 244
.thumb
.org 0x563e4
FUN_080563e4:
	push {r4, r5, r6, r7, lr}	@ 000563e4 f0b5
.org 0x563e6
	adds r4, r0, #0	@ 000563e6 041c
.org 0x563e8
	ldrb r0, [r4, #15]	@ 000563e8 e07b
.org 0x563ea
	cmp r0, #0	@ 000563ea 0028
.org 0x563ec
	bne.n 0x5643e	@ 000563ec 27d1
.org 0x563ee
	ldr r1, [pc, #232]	@ 000563ee 3a49
.org 0x563f0
	adds r0, r4, #0	@ 000563f0 201c
.org 0x563f2
	bl 0x1cf00	@ 000563f2 c6f785fd
.org 0x563f6
	adds r0, r4, #0	@ 000563f6 201c
.org 0x563f8
	bl 0x5977c	@ 000563f8 03f0c0f9
.org 0x563fc
	movs r5, #160	@ 000563fc a025
.org 0x563fe
	lsls r5, r5, #3	@ 000563fe ed00
.org 0x56400
	adds r0, r4, #0	@ 00056400 201c
.org 0x56402
	bl 0x599a4	@ 00056402 03f0cffa
.org 0x56406
	adds r1, r0, #0	@ 00056406 011c
.org 0x56408
	ldr r2, [pc, #208]	@ 00056408 344a
.org 0x5640a
	adds r0, #64	@ 0005640a 4030
.org 0x5640c
	lsls r0, r0, #24	@ 0005640c 0006
.org 0x5640e
	lsrs r0, r0, #23	@ 0005640e c00d
.org 0x56410
	adds r0, r0, r2	@ 00056410 8018
.org 0x56412
	movs r3, #0	@ 00056412 0023
.org 0x56414
	ldrsh r0, [r0, r3]	@ 00056414 c05e
.org 0x56416
	muls r0, r5	@ 00056416 6843
.org 0x56418
	cmp r0, #0	@ 00056418 0028
.org 0x5641a
	bge.n 0x5641e	@ 0005641a 00da
.org 0x5641c
	adds r0, #255	@ 0005641c ff30
.org 0x5641e
	asrs r0, r0, #8	@ 0005641e 0012
.org 0x56420
	str r0, [r4, #92]	@ 00056420 e065
.org 0x56422
	lsls r0, r1, #24	@ 00056422 0806
.org 0x56424
	lsrs r0, r0, #23	@ 00056424 c00d
.org 0x56426
	adds r0, r0, r2	@ 00056426 8018
.org 0x56428
	movs r1, #0	@ 00056428 0021
.org 0x5642a
	ldrsh r0, [r0, r1]	@ 0005642a 405e
.org 0x5642c
	muls r0, r5	@ 0005642c 6843
.org 0x5642e
	cmp r0, #0	@ 0005642e 0028
.org 0x56430
	bge.n 0x56434	@ 00056430 00da
.org 0x56432
	adds r0, #255	@ 00056432 ff30
.org 0x56434
	asrs r0, r0, #8	@ 00056434 0012
.org 0x56436
	str r0, [r4, #96]	@ 00056436 2066
.org 0x56438
	ldrb r0, [r4, #15]	@ 00056438 e07b
.org 0x5643a
	adds r0, #1	@ 0005643a 0130
.org 0x5643c
	strb r0, [r4, #15]	@ 0005643c e073
.org 0x5643e
	adds r0, r4, #0	@ 0005643e 201c
.org 0x56440
	bl 0x1cff0	@ 00056440 c6f7d6fd
.org 0x56444
	adds r0, r4, #0	@ 00056444 201c
.org 0x56446
	adds r0, #116	@ 00056446 7430
.org 0x56448
	ldr r3, [pc, #148]	@ 00056448 254b
.org 0x5644a
	ldrb r1, [r4, #30]	@ 0005644a a17f
.org 0x5644c
	lsls r1, r1, #8	@ 0005644c 0902
.org 0x5644e
	adds r2, r4, #0	@ 0005644e 221c
.org 0x56450
	adds r2, #112	@ 00056450 7032
.org 0x56452
	ldrb r2, [r2, #0]	@ 00056452 1278
.org 0x56454
	orrs r1, r2	@ 00056454 1143
.org 0x56456
	ldr r2, [pc, #140]	@ 00056456 234a
.org 0x56458
	adds r1, r1, r2	@ 00056458 8918
.org 0x5645a
	lsls r1, r1, #2	@ 0005645a 8900
.org 0x5645c
	adds r1, r1, r3	@ 0005645c c918
.org 0x5645e
	adds r2, r4, #0	@ 0005645e 221c
.org 0x56460
	adds r2, #113	@ 00056460 7132
.org 0x56462
	ldrb r2, [r2, #0]	@ 00056462 1278
.org 0x56464
	lsls r2, r2, #24	@ 00056464 1206
.org 0x56466
	asrs r2, r2, #24	@ 00056466 1216
.org 0x56468
	ldr r1, [r1, #0]	@ 00056468 0968
.org 0x5646a
	lsls r2, r2, #2	@ 0005646a 9200
.org 0x5646c
	adds r2, r2, r1	@ 0005646c 5218
.org 0x5646e
	ldr r1, [r2, #0]	@ 0005646e 1168
.org 0x56470
	ldrb r2, [r1, #0]	@ 00056470 0a78
.org 0x56472
	lsls r1, r2, #1	@ 00056472 5100
.org 0x56474
	adds r1, r1, r2	@ 00056474 8918
.org 0x56476
	lsls r1, r1, #3	@ 00056476 c900
.org 0x56478
	ldr r2, [pc, #108]	@ 00056478 1b4a
.org 0x5647a
	adds r1, r1, r2	@ 0005647a 8918
.org 0x5647c
	bl 0x5784	@ 0005647c aff782f9
.org 0x56480
	ldr r5, [r4, #84]	@ 00056480 656d
.org 0x56482
	ldr r0, [r4, #92]	@ 00056482 e06d
.org 0x56484
	adds r5, r5, r0	@ 00056484 2d18
.org 0x56486
	str r5, [r4, #84]	@ 00056486 6565
.org 0x56488
	adds r2, r4, #0	@ 00056488 221c
.org 0x5648a
	adds r2, #188	@ 0005648a bc32
.org 0x5648c
	ldr r5, [r2, #0]	@ 0005648c 1568
.org 0x5648e
	ldr r0, [r4, #96]	@ 0005648e 206e
.org 0x56490
	adds r5, r5, r0	@ 00056490 2d18
.org 0x56492
	str r5, [r2, #0]	@ 00056492 1560
.org 0x56494
	adds r6, r4, #0	@ 00056494 261c
.org 0x56496
	adds r6, #84	@ 00056496 5436
.org 0x56498
	ldr r7, [pc, #64]	@ 00056498 104f
.org 0x5649a
	adds r3, r4, #0	@ 0005649a 231c
.org 0x5649c
	adds r3, #181	@ 0005649c b533
.org 0x5649e
	ldrb r0, [r3, #0]	@ 0005649e 1878
.org 0x564a0
	lsls r0, r0, #1	@ 000564a0 4000
.org 0x564a2
	adds r0, r0, r7	@ 000564a2 c019
.org 0x564a4
	movs r1, #0	@ 000564a4 0021
.org 0x564a6
	ldrsh r0, [r0, r1]	@ 000564a6 405e
.org 0x564a8
	lsls r0, r0, #1	@ 000564a8 4000
.org 0x564aa
	adds r0, r5, r0	@ 000564aa 2818
.org 0x564ac
	str r0, [r6, #4]	@ 000564ac 7060
.org 0x564ae
	adds r0, r4, #0	@ 000564ae 201c
.org 0x564b0
	adds r0, #184	@ 000564b0 b830
.org 0x564b2
	ldr r1, [r0, #0]	@ 000564b2 0168
.org 0x564b4
	cmp r5, r1	@ 000564b4 8d42
.org 0x564b6
	bgt.n 0x564d2	@ 000564b6 0cdc
.org 0x564b8
	str r1, [r2, #0]	@ 000564b8 1160
.org 0x564ba
	ldrb r0, [r3, #0]	@ 000564ba 1878
.org 0x564bc
	lsls r0, r0, #1	@ 000564bc 4000
.org 0x564be
	adds r0, r0, r7	@ 000564be c019
.org 0x564c0
	movs r2, #0	@ 000564c0 0022
.org 0x564c2
	ldrsh r0, [r0, r2]	@ 000564c2 805e
.org 0x564c4
	lsls r0, r0, #1	@ 000564c4 4000
.org 0x564c6
	adds r0, r1, r0	@ 000564c6 0818
.org 0x564c8
	str r0, [r6, #4]	@ 000564c8 7060
.org 0x564ca
	movs r1, #0	@ 000564ca 0021
.org 0x564cc
	movs r0, #8	@ 000564cc 0820
.org 0x564ce
	strb r0, [r4, #14]	@ 000564ce a073
.org 0x564d0
	strb r1, [r4, #15]	@ 000564d0 e173
.org 0x564d2
	pop {r4, r5, r6, r7}	@ 000564d2 f0bc
.org 0x564d4
	pop {r0}	@ 000564d4 01bc
.org 0x564d6
	bx r0	@ 000564d6 0047
