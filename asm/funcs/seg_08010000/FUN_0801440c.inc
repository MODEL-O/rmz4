@ FUN_0801440c  entry 0x0801440c  size 174
.thumb
.org 0x1440c
FUN_0801440c:
	push {r4, r5, r6, r7, lr}	@ 0001440c f0b5
.org 0x1440e
	mov r7, r9	@ 0001440e 4f46
.org 0x14410
	mov r6, r8	@ 00014410 4646
.org 0x14412
	push {r6, r7}	@ 00014412 c0b4
.org 0x14414
	adds r4, r0, #0	@ 00014414 041c
.org 0x14416
	mov r9, r1	@ 00014416 8946
.org 0x14418
	movs r0, #0	@ 00014418 0020
.org 0x1441a
	mov r8, r0	@ 0001441a 8046
.org 0x1441c
	movs r0, #160	@ 0001441c a020
.org 0x1441e
	lsls r0, r0, #2	@ 0001441e 8000
.org 0x14420
	bl 0xa70	@ 00014420 ecf726fb
.org 0x14424
	adds r3, r0, #0	@ 00014424 031c
.org 0x14426
	cmp r3, #0	@ 00014426 002b
.org 0x14428
	beq.n 0x144a6	@ 00014428 3dd0
.org 0x1442a
	ldr r2, [pc, #144]	@ 0001442a 244a
.org 0x1442c
	movs r1, #186	@ 0001442c ba21
.org 0x1442e
	lsls r1, r1, #1	@ 0001442e 4900
.org 0x14430
	adds r0, r2, r1	@ 00014430 5018
.org 0x14432
	str r3, [r0, #0]	@ 00014432 0360
.org 0x14434
	movs r0, #188	@ 00014434 bc20
.org 0x14436
	lsls r0, r0, #1	@ 00014436 4000
.org 0x14438
	adds r1, r2, r0	@ 00014438 1118
.org 0x1443a
	ldr r0, [pc, #132]	@ 0001443a 2148
.org 0x1443c
	str r0, [r1, #0]	@ 0001443c 0860
.org 0x1443e
	movs r0, #190	@ 0001443e be20
.org 0x14440
	lsls r0, r0, #1	@ 00014440 4000
.org 0x14442
	adds r1, r2, r0	@ 00014442 1118
.org 0x14444
	ldr r0, [pc, #124]	@ 00014444 1f48
.org 0x14446
	str r0, [r1, #0]	@ 00014446 0860
.org 0x14448
	ldr r0, [r4, #52]	@ 00014448 606b
.org 0x1444a
	ldr r1, [pc, #124]	@ 0001444a 1f49
.org 0x1444c
	adds r0, r0, r1	@ 0001444c 4018
.org 0x1444e
	ldrh r1, [r4, #56]	@ 0001444e 218f
.org 0x14450
	lsls r1, r1, #16	@ 00014450 0904
.org 0x14452
	lsls r0, r0, #16	@ 00014452 0004
.org 0x14454
	lsrs r0, r0, #16	@ 00014454 000c
.org 0x14456
	orrs r0, r1	@ 00014456 0843
.org 0x14458
	adds r2, r3, #0	@ 00014458 1a1c
.org 0x1445a
	adds r2, #60	@ 0001445a 3c32
.org 0x1445c
	str r0, [r2, #0]	@ 0001445c 1060
.org 0x1445e
	subs r2, #4	@ 0001445e 043a
.org 0x14460
	cmp r2, r3	@ 00014460 9a42
.org 0x14462
	bge.n 0x1445c	@ 00014462 fbda
.org 0x14464
	ldr r0, [r4, #52]	@ 00014464 606b
.org 0x14466
	ldr r2, [pc, #100]	@ 00014466 194a
.org 0x14468
	adds r0, r0, r2	@ 00014468 8018
.org 0x1446a
	lsls r0, r0, #16	@ 0001446a 0004
.org 0x1446c
	asrs r7, r0, #16	@ 0001446c 0714
.org 0x1446e
	adds r5, r1, #0	@ 0001446e 0d1c
.org 0x14470
	adds r6, r3, #0	@ 00014470 1e1c
.org 0x14472
	adds r6, #64	@ 00014472 4036
.org 0x14474
	ldr r0, [pc, #88]	@ 00014474 1648
.org 0x14476
	mov ip, r0	@ 00014476 8446
.org 0x14478
	movs r3, #143	@ 00014478 8f23
.org 0x1447a
	movs r1, #64	@ 0001447a 4021
.org 0x1447c
	add r8, r1	@ 0001447c 8844
.org 0x1447e
	mov r2, r8	@ 0001447e 4246
.org 0x14480
	asrs r0, r2, #8	@ 00014480 1012
.org 0x14482
	adds r2, r7, r0	@ 00014482 3a18
.org 0x14484
	asrs r1, r5, #16	@ 00014484 2914
.org 0x14486
	adds r0, r1, #0	@ 00014486 081c
.org 0x14488
	cmp r1, #0	@ 00014488 0029
.org 0x1448a
	bge.n 0x1448e	@ 0001448a 00da
.org 0x1448c
	adds r0, r1, #3	@ 0001448c c81c
.org 0x1448e
	asrs r0, r0, #2	@ 0001448e 8010
.org 0x14490
	adds r0, r2, r0	@ 00014490 1018
.org 0x14492
	lsls r1, r1, #16	@ 00014492 0904
.org 0x14494
	lsls r0, r0, #16	@ 00014494 0004
.org 0x14496
	asrs r0, r0, #16	@ 00014496 0014
.org 0x14498
	mov r2, ip	@ 00014498 6246
.org 0x1449a
	ands r0, r2	@ 0001449a 1040
.org 0x1449c
	orrs r1, r0	@ 0001449c 0143
.org 0x1449e
	stmia r6!, {r1}	@ 0001449e 02c6
.org 0x144a0
	subs r3, #1	@ 000144a0 013b
.org 0x144a2
	cmp r3, #0	@ 000144a2 002b
.org 0x144a4
	bge.n 0x1447a	@ 000144a4 e9da
.org 0x144a6
	adds r0, r4, #0	@ 000144a6 201c
.org 0x144a8
	mov r1, r9	@ 000144a8 4946
.org 0x144aa
	bl 0x7638	@ 000144aa f3f7c5f8
.org 0x144ae
	pop {r3, r4}	@ 000144ae 18bc
.org 0x144b0
	mov r8, r3	@ 000144b0 9846
.org 0x144b2
	mov r9, r4	@ 000144b2 a146
.org 0x144b4
	pop {r4, r5, r6, r7}	@ 000144b4 f0bc
.org 0x144b6
	pop {r0}	@ 000144b6 01bc
.org 0x144b8
	bx r0	@ 000144b8 0047
