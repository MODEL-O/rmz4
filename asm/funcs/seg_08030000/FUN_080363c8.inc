@ FUN_080363c8  entry 0x080363c8  size 216
.thumb
.org 0x363c8
FUN_080363c8:
	push {r4, r5, r6, r7, lr}	@ 000363c8 f0b5
.org 0x363ca
	mov r7, r9	@ 000363ca 4f46
.org 0x363cc
	mov r6, r8	@ 000363cc 4646
.org 0x363ce
	push {r6, r7}	@ 000363ce c0b4
.org 0x363d0
	adds r5, r0, #0	@ 000363d0 051c
.org 0x363d2
	adds r7, r5, #0	@ 000363d2 2f1c
.org 0x363d4
	adds r7, #180	@ 000363d4 b437
.org 0x363d6
	ldr r1, [pc, #80]	@ 000363d6 1449
.org 0x363d8
	movs r0, #171	@ 000363d8 ab20
.org 0x363da
	lsls r0, r0, #1	@ 000363da 4000
.org 0x363dc
	adds r6, r5, r0	@ 000363dc 2e18
.org 0x363de
	ldrb r0, [r6, #0]	@ 000363de 3078
.org 0x363e0
	adds r0, r0, r1	@ 000363e0 4018
.org 0x363e2
	ldrb r0, [r0, #0]	@ 000363e2 0078
.org 0x363e4
	ldr r1, [pc, #68]	@ 000363e4 1149
.org 0x363e6
	adds r1, r1, r5	@ 000363e6 4919
.org 0x363e8
	mov r8, r1	@ 000363e8 8846
.org 0x363ea
	movs r2, #0	@ 000363ea 0022
.org 0x363ec
	mov r9, r2	@ 000363ec 9146
.org 0x363ee
	strb r0, [r1, #0]	@ 000363ee 0870
.org 0x363f0
	ldr r4, [pc, #60]	@ 000363f0 0f4c
.org 0x363f2
	ldrb r0, [r6, #0]	@ 000363f2 3078
.org 0x363f4
	lsls r0, r0, #1	@ 000363f4 4000
.org 0x363f6
	adds r0, r0, r4	@ 000363f6 0019
.org 0x363f8
	ldrh r1, [r0, #0]	@ 000363f8 0188
.org 0x363fa
	adds r0, r5, #0	@ 000363fa 281c
.org 0x363fc
	bl 0x3a3b0	@ 000363fc 03f0d8ff
.org 0x36400
	ldrb r0, [r6, #0]	@ 00036400 3078
.org 0x36402
	lsls r0, r0, #1	@ 00036402 4000
.org 0x36404
	adds r0, r0, r4	@ 00036404 0019
.org 0x36406
	ldrh r1, [r0, #0]	@ 00036406 0188
.org 0x36408
	adds r0, r5, #0	@ 00036408 281c
.org 0x3640a
	bl 0x3a3f0	@ 0003640a 03f0f1ff
.org 0x3640e
	adds r0, r5, #0	@ 0003640e 281c
.org 0x36410
	adds r0, #250	@ 00036410 fa30
.org 0x36412
	ldrb r1, [r0, #0]	@ 00036412 0178
.org 0x36414
	adds r0, r1, #0	@ 00036414 081c
.org 0x36416
	cmp r0, #2	@ 00036416 0228
.org 0x36418
	beq.n 0x36450	@ 00036418 1ad0
.org 0x3641a
	cmp r0, #8	@ 0003641a 0828
.org 0x3641c
	beq.n 0x36436	@ 0003641c 0bd0
.org 0x3641e
	ldrb r0, [r7, #12]	@ 0003641e 387b
.org 0x36420
	cmp r0, #2	@ 00036420 0228
.org 0x36422
	bne.n 0x36434	@ 00036422 07d1
.org 0x36424
	strb r1, [r7, #12]	@ 00036424 3973
.org 0x36426
	b.n 0x36436	@ 00036426 06e0
.org 0x36428
	.byte 0x3c,0x32,0x85,0x08	@ 00036428 data
.org 0x3642c
	.byte 0x4f,0x01,0x00,0x00	@ 0003642c data
.org 0x36430
	.byte 0x34,0x32,0x85,0x08	@ 00036430 data
.org 0x36434
	strb r1, [r7, #13]	@ 00036434 7973
.org 0x36436
	ldr r3, [pc, #20]	@ 00036436 054b
.org 0x36438
	adds r2, r5, r3	@ 00036438 ea18
.org 0x3643a
	movs r1, #0	@ 0003643a 0021
.org 0x3643c
	movs r0, #2	@ 0003643c 0220
.org 0x3643e
	strb r0, [r2, #0]	@ 0003643e 1070
.org 0x36440
	movs r2, #129	@ 00036440 8122
.org 0x36442
	lsls r2, r2, #1	@ 00036442 5200
.org 0x36444
	adds r0, r5, r2	@ 00036444 a818
.org 0x36446
	strb r1, [r0, #0]	@ 00036446 0170
.org 0x36448
	b.n 0x364a6	@ 00036448 2de0
.org 0x3644a
	.byte 0x00	@ 0003644a data
.org 0x3644b
	.byte 0x00	@ 0003644b data
.org 0x3644c
	.byte 0x01,0x01,0x00,0x00	@ 0003644c data
.org 0x36450
	adds r0, r5, #0	@ 00036450 281c
.org 0x36452
	movs r1, #0	@ 00036452 0021
.org 0x36454
	bl 0x2ca64	@ 00036454 f6f706fb
.org 0x36458
	lsls r0, r0, #24	@ 00036458 0006
.org 0x3645a
	lsrs r2, r0, #24	@ 0003645a 020e
.org 0x3645c
	cmp r2, #0	@ 0003645c 002a
.org 0x3645e
	beq.n 0x3647a	@ 0003645e 0cd0
.org 0x36460
	movs r0, #255	@ 00036460 ff20
.org 0x36462
	mov r3, r8	@ 00036462 4346
.org 0x36464
	strb r0, [r3, #0]	@ 00036464 1870
.org 0x36466
	movs r0, #3	@ 00036466 0320
.org 0x36468
	strb r0, [r5, #13]	@ 00036468 6873
.org 0x3646a
	mov r0, r9	@ 0003646a 4846
.org 0x3646c
	strb r0, [r5, #14]	@ 0003646c a873
.org 0x3646e
	strb r0, [r5, #15]	@ 0003646e e873
.org 0x36470
	movs r1, #128	@ 00036470 8021
.org 0x36472
	lsls r1, r1, #1	@ 00036472 4900
.org 0x36474
	adds r0, r5, r1	@ 00036474 6818
.org 0x36476
	mov r2, r9	@ 00036476 4a46
.org 0x36478
	b.n 0x364a4	@ 00036478 14e0
.org 0x3647a
	ldr r3, [pc, #56]	@ 0003647a 0e4b
.org 0x3647c
	adds r1, r5, r3	@ 0003647c e918
.org 0x3647e
	ldrb r0, [r1, #0]	@ 0003647e 0878
.org 0x36480
	subs r0, #1	@ 00036480 0138
.org 0x36482
	strb r0, [r1, #0]	@ 00036482 0870
.org 0x36484
	movs r1, #255	@ 00036484 ff21
.org 0x36486
	lsls r0, r0, #24	@ 00036486 0006
.org 0x36488
	lsrs r0, r0, #24	@ 00036488 000e
.org 0x3648a
	cmp r0, #255	@ 0003648a ff28
.org 0x3648c
	bne.n 0x364a6	@ 0003648c 0bd1
.org 0x3648e
	mov r3, r8	@ 0003648e 4346
.org 0x36490
	ldrb r0, [r3, #0]	@ 00036490 1878
.org 0x36492
	orrs r0, r1	@ 00036492 0843
.org 0x36494
	strb r0, [r3, #0]	@ 00036494 1870
.org 0x36496
	ldr r0, [pc, #32]	@ 00036496 0848
.org 0x36498
	adds r1, r5, r0	@ 00036498 2918
.org 0x3649a
	movs r0, #4	@ 0003649a 0420
.org 0x3649c
	strb r0, [r1, #0]	@ 0003649c 0870
.org 0x3649e
	movs r1, #129	@ 0003649e 8121
