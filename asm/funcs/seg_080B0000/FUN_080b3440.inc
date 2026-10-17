@ FUN_080b3440  entry 0x080b3440  size 220
.thumb
.org 0xb3440
FUN_080b3440:
	push {r4, r5, lr}	@ 000b3440 30b5
.org 0xb3442
	adds r4, r0, #0	@ 000b3442 041c
.org 0xb3444
	ldrb r0, [r4, #14]	@ 000b3444 a07b
.org 0xb3446
	cmp r0, #0	@ 000b3446 0028
.org 0xb3448
	bne.n 0xb34c4	@ 000b3448 3cd1
.org 0xb344a
	adds r0, r4, #0	@ 000b344a 201c
.org 0xb344c
	adds r0, #180	@ 000b344c b430
.org 0xb344e
	ldrb r0, [r0, #0]	@ 000b344e 0078
.org 0xb3450
	cmp r0, #0	@ 000b3450 0028
.org 0xb3452
	bne.n 0xb3466	@ 000b3452 08d1
.org 0xb3454
	adds r1, r4, #0	@ 000b3454 211c
.org 0xb3456
	adds r1, #192	@ 000b3456 c031
.org 0xb3458
	adds r0, r4, #0	@ 000b3458 201c
.org 0xb345a
	adds r0, #184	@ 000b345a b830
.org 0xb345c
	ldr r0, [r0, #0]	@ 000b345c 0068
.org 0xb345e
	movs r2, #176	@ 000b345e b022
.org 0xb3460
	lsls r2, r2, #5	@ 000b3460 5201
.org 0xb3462
	adds r0, r0, r2	@ 000b3462 8018
.org 0xb3464
	b.n 0xb3474	@ 000b3464 06e0
.org 0xb3466
	adds r1, r4, #0	@ 000b3466 211c
.org 0xb3468
	adds r1, #192	@ 000b3468 c031
.org 0xb346a
	adds r0, r4, #0	@ 000b346a 201c
.org 0xb346c
	adds r0, #184	@ 000b346c b830
.org 0xb346e
	ldr r0, [r0, #0]	@ 000b346e 0068
.org 0xb3470
	ldr r3, [pc, #168]	@ 000b3470 2a4b
.org 0xb3472
	adds r0, r0, r3	@ 000b3472 c018
.org 0xb3474
	str r0, [r1, #0]	@ 000b3474 0860
.org 0xb3476
	ldr r3, [r4, #44]	@ 000b3476 e36a
.org 0xb3478
	ldr r0, [r3, #84]	@ 000b3478 586d
.org 0xb347a
	ldr r1, [r4, #84]	@ 000b347a 616d
.org 0xb347c
	subs r0, r0, r1	@ 000b347c 401a
.org 0xb347e
	ldr r2, [r4, #88]	@ 000b347e a26d
.org 0xb3480
	movs r1, #128	@ 000b3480 8021
.org 0xb3482
	lsls r1, r1, #4	@ 000b3482 0901
.org 0xb3484
	adds r2, r2, r1	@ 000b3484 5218
.org 0xb3486
	ldr r1, [r3, #88]	@ 000b3486 996d
.org 0xb3488
	subs r1, r1, r2	@ 000b3488 891a
.org 0xb348a
	lsls r0, r0, #8	@ 000b348a 0002
.org 0xb348c
	asrs r0, r0, #16	@ 000b348c 0014
.org 0xb348e
	lsls r1, r1, #8	@ 000b348e 0902
.org 0xb3490
	asrs r1, r1, #16	@ 000b3490 0914
.org 0xb3492
	bl 0x128bdc	@ 000b3492 75f0a3fb
.org 0xb3496
	lsls r0, r0, #16	@ 000b3496 0004
.org 0xb3498
	lsrs r0, r0, #24	@ 000b3498 000e
.org 0xb349a
	ldr r2, [pc, #132]	@ 000b349a 214a
.org 0xb349c
	adds r1, r0, #0	@ 000b349c 011c
.org 0xb349e
	adds r1, #64	@ 000b349e 4031
.org 0xb34a0
	lsls r1, r1, #24	@ 000b34a0 0906
.org 0xb34a2
	lsrs r1, r1, #23	@ 000b34a2 c90d
.org 0xb34a4
	adds r1, r1, r2	@ 000b34a4 8918
.org 0xb34a6
	movs r3, #0	@ 000b34a6 0023
.org 0xb34a8
	ldrsh r1, [r1, r3]	@ 000b34a8 c95e
.org 0xb34aa
	str r1, [r4, #92]	@ 000b34aa e165
.org 0xb34ac
	lsls r0, r0, #1	@ 000b34ac 4000
.org 0xb34ae
	adds r0, r0, r2	@ 000b34ae 8018
.org 0xb34b0
	movs r1, #0	@ 000b34b0 0021
.org 0xb34b2
	ldrsh r0, [r0, r1]	@ 000b34b2 405e
.org 0xb34b4
	str r0, [r4, #96]	@ 000b34b4 2066
.org 0xb34b6
	adds r1, r4, #0	@ 000b34b6 211c
.org 0xb34b8
	adds r1, #183	@ 000b34b8 b731
.org 0xb34ba
	movs r0, #1	@ 000b34ba 0120
.org 0xb34bc
	strb r0, [r1, #0]	@ 000b34bc 0870
.org 0xb34be
	ldrb r0, [r4, #14]	@ 000b34be a07b
.org 0xb34c0
	adds r0, #1	@ 000b34c0 0130
.org 0xb34c2
	strb r0, [r4, #14]	@ 000b34c2 a073
.org 0xb34c4
	ldr r1, [r4, #84]	@ 000b34c4 616d
.org 0xb34c6
	ldr r0, [r4, #92]	@ 000b34c6 e06d
.org 0xb34c8
	adds r1, r1, r0	@ 000b34c8 0918
.org 0xb34ca
	str r1, [r4, #84]	@ 000b34ca 6165
.org 0xb34cc
	ldr r2, [r4, #88]	@ 000b34cc a26d
.org 0xb34ce
	ldr r0, [r4, #96]	@ 000b34ce 206e
.org 0xb34d0
	adds r2, r2, r0	@ 000b34d0 1218
.org 0xb34d2
	str r2, [r4, #88]	@ 000b34d2 a265
.org 0xb34d4
	ldr r3, [r4, #44]	@ 000b34d4 e36a
.org 0xb34d6
	ldr r5, [r3, #84]	@ 000b34d6 5d6d
.org 0xb34d8
	subs r1, r5, r1	@ 000b34d8 691a
.org 0xb34da
	asrs r1, r1, #8	@ 000b34da 0912
.org 0xb34dc
	cmp r1, #0	@ 000b34dc 0029
.org 0xb34de
	bge.n 0xb34e2	@ 000b34de 00da
.org 0xb34e0
	negs r1, r1	@ 000b34e0 4942
.org 0xb34e2
	cmp r1, #3	@ 000b34e2 0329
.org 0xb34e4
	bgt.n 0xb3516	@ 000b34e4 17dc
.org 0xb34e6
	movs r0, #128	@ 000b34e6 8020
.org 0xb34e8
	lsls r0, r0, #4	@ 000b34e8 0001
.org 0xb34ea
	adds r1, r2, r0	@ 000b34ea 1118
.org 0xb34ec
	ldr r0, [r3, #88]	@ 000b34ec 986d
.org 0xb34ee
	subs r0, r0, r1	@ 000b34ee 401a
.org 0xb34f0
	asrs r0, r0, #8	@ 000b34f0 0012
.org 0xb34f2
	cmp r0, #0	@ 000b34f2 0028
.org 0xb34f4
	bge.n 0xb34f8	@ 000b34f4 00da
.org 0xb34f6
	negs r0, r0	@ 000b34f6 4042
.org 0xb34f8
	cmp r0, #3	@ 000b34f8 0328
.org 0xb34fa
	bgt.n 0xb3516	@ 000b34fa 0cdc
.org 0xb34fc
	str r5, [r4, #84]	@ 000b34fc 6565
.org 0xb34fe
	ldr r0, [r3, #88]	@ 000b34fe 986d
.org 0xb3500
	ldr r1, [pc, #32]	@ 000b3500 0849
.org 0xb3502
	adds r0, r0, r1	@ 000b3502 4018
.org 0xb3504
	str r0, [r4, #88]	@ 000b3504 a065
.org 0xb3506
	adds r1, r3, #0	@ 000b3506 191c
.org 0xb3508
	adds r1, #181	@ 000b3508 b531
.org 0xb350a
	movs r2, #0	@ 000b350a 0022
.org 0xb350c
	movs r0, #1	@ 000b350c 0120
.org 0xb350e
	strb r0, [r1, #0]	@ 000b350e 0870
.org 0xb3510
	movs r0, #3	@ 000b3510 0320
.org 0xb3512
	strb r0, [r4, #13]	@ 000b3512 6073
.org 0xb3514
	strb r2, [r4, #14]	@ 000b3514 a273
.org 0xb3516
	pop {r4, r5}	@ 000b3516 30bc
.org 0xb3518
	pop {r0}	@ 000b3518 01bc
.org 0xb351a
	bx r0	@ 000b351a 0047
