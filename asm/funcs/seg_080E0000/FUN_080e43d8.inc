@ FUN_080e43d8  entry 0x080e43d8  size 170
.thumb
.org 0xe43d8
FUN_080e43d8:
	push {r4, r5, lr}	@ 000e43d8 30b5
.org 0xe43da
	adds r4, r0, #0	@ 000e43da 041c
.org 0xe43dc
	bl 0x1cc9c	@ 000e43dc 38f75efc
.org 0xe43e0
	ldrb r1, [r4, #10]	@ 000e43e0 a17a
.org 0xe43e2
	movs r0, #1	@ 000e43e2 0120
.org 0xe43e4
	orrs r0, r1	@ 000e43e4 0843
.org 0xe43e6
	movs r1, #2	@ 000e43e6 0221
.org 0xe43e8
	orrs r0, r1	@ 000e43e8 0843
.org 0xe43ea
	strb r0, [r4, #10]	@ 000e43ea a072
.org 0xe43ec
	movs r1, #161	@ 000e43ec a121
.org 0xe43ee
	lsls r1, r1, #8	@ 000e43ee 0902
.org 0xe43f0
	adds r0, r4, #0	@ 000e43f0 201c
.org 0xe43f2
	bl 0x1cf00	@ 000e43f2 38f785fd
.org 0xe43f6
	adds r0, r4, #0	@ 000e43f6 201c
.org 0xe43f8
	bl 0x1cff0	@ 000e43f8 38f7fafd
.org 0xe43fc
	movs r2, #0	@ 000e43fc 0022
.org 0xe43fe
	ldrb r1, [r4, #10]	@ 000e43fe a17a
.org 0xe4400
	movs r0, #239	@ 000e4400 ef20
.org 0xe4402
	ands r0, r1	@ 000e4402 0840
.org 0xe4404
	strb r0, [r4, #10]	@ 000e4404 a072
.org 0xe4406
	movs r5, #1	@ 000e4406 0125
.org 0xe4408
	adds r0, r4, #0	@ 000e4408 201c
.org 0xe440a
	adds r0, #76	@ 000e440a 4c30
.org 0xe440c
	strb r2, [r0, #0]	@ 000e440c 0270
.org 0xe440e
	adds r2, r4, #0	@ 000e440e 221c
.org 0xe4410
	adds r2, #74	@ 000e4410 4a32
.org 0xe4412
	ldrb r1, [r2, #0]	@ 000e4412 1178
.org 0xe4414
	movs r0, #17	@ 000e4414 1120
.org 0xe4416
	negs r0, r0	@ 000e4416 4042
.org 0xe4418
	ands r0, r1	@ 000e4418 0840
.org 0xe441a
	strb r0, [r2, #0]	@ 000e441a 1070
.org 0xe441c
	movs r0, #35	@ 000e441c 2320
.org 0xe441e
	strb r0, [r4, #18]	@ 000e441e a074
.org 0xe4420
	ldr r2, [pc, #96]	@ 000e4420 184a
.org 0xe4422
	ldr r1, [r2, #0]	@ 000e4422 1168
.org 0xe4424
	ldr r0, [pc, #96]	@ 000e4424 1848
.org 0xe4426
	muls r1, r0	@ 000e4426 4143
.org 0xe4428
	ldr r0, [pc, #96]	@ 000e4428 1848
.org 0xe442a
	adds r1, r1, r0	@ 000e442a 0918
.org 0xe442c
	lsls r1, r1, #1	@ 000e442c 4900
.org 0xe442e
	lsrs r0, r1, #1	@ 000e442e 4808
.org 0xe4430
	str r0, [r2, #0]	@ 000e4430 1060
.org 0xe4432
	lsrs r1, r1, #17	@ 000e4432 490c
.org 0xe4434
	movs r0, #7	@ 000e4434 0720
.org 0xe4436
	ands r1, r0	@ 000e4436 0140
.org 0xe4438
	adds r1, #64	@ 000e4438 4031
.org 0xe443a
	ldr r3, [pc, #84]	@ 000e443a 154b
.org 0xe443c
	ldrb r0, [r4, #17]	@ 000e443c 607c
.org 0xe443e
	adds r0, #64	@ 000e443e 4030
.org 0xe4440
	lsls r0, r0, #24	@ 000e4440 0006
.org 0xe4442
	lsrs r0, r0, #23	@ 000e4442 c00d
.org 0xe4444
	adds r0, r0, r3	@ 000e4444 c018
.org 0xe4446
	movs r2, #0	@ 000e4446 0022
.org 0xe4448
	ldrsh r0, [r0, r2]	@ 000e4448 805e
.org 0xe444a
	adds r2, r0, #0	@ 000e444a 021c
.org 0xe444c
	muls r2, r1	@ 000e444c 4a43
.org 0xe444e
	ldr r0, [r4, #84]	@ 000e444e 606d
.org 0xe4450
	adds r0, r0, r2	@ 000e4450 8018
.org 0xe4452
	str r0, [r4, #84]	@ 000e4452 6065
.org 0xe4454
	ldrb r0, [r4, #17]	@ 000e4454 607c
.org 0xe4456
	lsls r0, r0, #1	@ 000e4456 4000
.org 0xe4458
	adds r0, r0, r3	@ 000e4458 c018
.org 0xe445a
	movs r2, #0	@ 000e445a 0022
.org 0xe445c
	ldrsh r0, [r0, r2]	@ 000e445c 805e
.org 0xe445e
	muls r1, r0	@ 000e445e 4143
.org 0xe4460
	ldr r0, [r4, #88]	@ 000e4460 a06d
.org 0xe4462
	adds r0, r0, r1	@ 000e4462 4018
.org 0xe4464
	str r0, [r4, #88]	@ 000e4464 a065
.org 0xe4466
	ldr r1, [pc, #44]	@ 000e4466 0b49
.org 0xe4468
	ldrb r0, [r4, #9]	@ 000e4468 607a
.org 0xe446a
	lsls r0, r0, #2	@ 000e446a 8000
.org 0xe446c
	adds r0, r0, r1	@ 000e446c 4018
.org 0xe446e
	str r5, [r4, #12]	@ 000e446e e560
.org 0xe4470
	ldr r0, [r0, #0]	@ 000e4470 0068
.org 0xe4472
	ldr r0, [r0, #4]	@ 000e4472 4068
.org 0xe4474
	str r0, [r4, #20]	@ 000e4474 6061
.org 0xe4476
	adds r0, r4, #0	@ 000e4476 201c
.org 0xe4478
	bl 0xe4284	@ 000e4478 fff704ff
.org 0xe447c
	pop {r4, r5}	@ 000e447c 30bc
.org 0xe447e
	pop {r0}	@ 000e447e 01bc
.org 0xe4480
	bx r0	@ 000e4480 0047
