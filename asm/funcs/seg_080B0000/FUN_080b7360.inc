@ FUN_080b7360  entry 0x080b7360  size 438
.thumb
.org 0xb7360
FUN_080b7360:
	push {r4, r5, r6, r7, lr}	@ 000b7360 f0b5
.org 0xb7362
	mov r7, sl	@ 000b7362 5746
.org 0xb7364
	mov r6, r9	@ 000b7364 4e46
.org 0xb7366
	mov r5, r8	@ 000b7366 4546
.org 0xb7368
	push {r5, r6, r7}	@ 000b7368 e0b4
.org 0xb736a
	sub sp, #396	@ 000b736a e3b0
.org 0xb736c
	str r0, [sp, #368]	@ 000b736c 5c90
.org 0xb736e
	ldr r1, [pc, #424]	@ 000b736e 6a49
.org 0xb7370
	mov r0, sp	@ 000b7370 6846
.org 0xb7372
	movs r2, #9	@ 000b7372 0922
.org 0xb7374
	bl 0x129258	@ 000b7374 71f070ff
.org 0xb7378
	mov r0, sp	@ 000b7378 6846
.org 0xb737a
	adds r0, #12	@ 000b737a 0c30
.org 0xb737c
	str r0, [sp, #372]	@ 000b737c 5d90
.org 0xb737e
	adds r1, r0, #0	@ 000b737e 011c
.org 0xb7380
	ldr r0, [pc, #408]	@ 000b7380 6648
.org 0xb7382
	ldmia r0!, {r2, r3, r4}	@ 000b7382 1cc8
.org 0xb7384
	stmia r1!, {r2, r3, r4}	@ 000b7384 1cc1
.org 0xb7386
	ldr r0, [r0, #0]	@ 000b7386 0068
.org 0xb7388
	str r0, [r1, #0]	@ 000b7388 0860
.org 0xb738a
	mov r0, sp	@ 000b738a 6846
.org 0xb738c
	adds r0, #28	@ 000b738c 1c30
.org 0xb738e
	str r0, [sp, #376]	@ 000b738e 5e90
.org 0xb7390
	ldr r1, [pc, #396]	@ 000b7390 6349
.org 0xb7392
	movs r2, #2	@ 000b7392 0222
.org 0xb7394
	bl 0x129258	@ 000b7394 71f060ff
.org 0xb7398
	add r1, sp, #32	@ 000b7398 08a9
.org 0xb739a
	mov r8, r1	@ 000b739a 8846
.org 0xb739c
	ldr r0, [pc, #388]	@ 000b739c 6148
.org 0xb739e
	ldmia r0!, {r2, r3, r4}	@ 000b739e 1cc8
.org 0xb73a0
	stmia r1!, {r2, r3, r4}	@ 000b73a0 1cc1
.org 0xb73a2
	ldmia r0!, {r2, r3, r4}	@ 000b73a2 1cc8
.org 0xb73a4
	stmia r1!, {r2, r3, r4}	@ 000b73a4 1cc1
.org 0xb73a6
	mov r0, sp	@ 000b73a6 6846
.org 0xb73a8
	adds r0, #56	@ 000b73a8 3830
.org 0xb73aa
	str r0, [sp, #380]	@ 000b73aa 5f90
.org 0xb73ac
	ldr r1, [pc, #376]	@ 000b73ac 5e49
.org 0xb73ae
	movs r2, #3	@ 000b73ae 0322
.org 0xb73b0
	bl 0x129258	@ 000b73b0 71f052ff
.org 0xb73b4
	add r6, sp, #60	@ 000b73b4 0fae
.org 0xb73b6
	adds r1, r6, #0	@ 000b73b6 311c
.org 0xb73b8
	ldr r0, [pc, #368]	@ 000b73b8 5c48
.org 0xb73ba
	ldmia r0!, {r2, r3, r4}	@ 000b73ba 1cc8
.org 0xb73bc
	stmia r1!, {r2, r3, r4}	@ 000b73bc 1cc1
.org 0xb73be
	ldmia r0!, {r2, r3, r4}	@ 000b73be 1cc8
.org 0xb73c0
	stmia r1!, {r2, r3, r4}	@ 000b73c0 1cc1
.org 0xb73c2
	ldmia r0!, {r2, r3}	@ 000b73c2 0cc8
.org 0xb73c4
	stmia r1!, {r2, r3}	@ 000b73c4 0cc1
.org 0xb73c6
	add r7, sp, #92	@ 000b73c6 17af
.org 0xb73c8
	ldr r1, [pc, #356]	@ 000b73c8 5949
.org 0xb73ca
	adds r0, r7, #0	@ 000b73ca 381c
.org 0xb73cc
	movs r2, #4	@ 000b73cc 0422
.org 0xb73ce
	bl 0x129258	@ 000b73ce 71f043ff
.org 0xb73d2
	add r5, sp, #96	@ 000b73d2 18ad
.org 0xb73d4
	adds r1, r5, #0	@ 000b73d4 291c
.org 0xb73d6
	ldr r0, [pc, #348]	@ 000b73d6 5748
.org 0xb73d8
	ldmia r0!, {r2, r3, r4}	@ 000b73d8 1cc8
.org 0xb73da
	stmia r1!, {r2, r3, r4}	@ 000b73da 1cc1
.org 0xb73dc
	ldmia r0!, {r2, r3, r4}	@ 000b73dc 1cc8
.org 0xb73de
	stmia r1!, {r2, r3, r4}	@ 000b73de 1cc1
.org 0xb73e0
	ldmia r0!, {r2, r3, r4}	@ 000b73e0 1cc8
.org 0xb73e2
	stmia r1!, {r2, r3, r4}	@ 000b73e2 1cc1
.org 0xb73e4
	ldr r0, [r0, #0]	@ 000b73e4 0068
.org 0xb73e6
	str r0, [r1, #0]	@ 000b73e6 0860
.org 0xb73e8
	add r4, sp, #136	@ 000b73e8 22ac
.org 0xb73ea
	mov r9, r4	@ 000b73ea a146
.org 0xb73ec
	ldr r1, [pc, #328]	@ 000b73ec 5249
.org 0xb73ee
	mov r0, r9	@ 000b73ee 4846
.org 0xb73f0
	movs r2, #5	@ 000b73f0 0522
.org 0xb73f2
	bl 0x129258	@ 000b73f2 71f031ff
.org 0xb73f6
	add r0, sp, #144	@ 000b73f6 24a8
.org 0xb73f8
	mov sl, r0	@ 000b73f8 8246
.org 0xb73fa
	ldr r1, [pc, #320]	@ 000b73fa 5049
.org 0xb73fc
	movs r2, #96	@ 000b73fc 6022
.org 0xb73fe
	bl 0x129258	@ 000b73fe 71f02bff
.org 0xb7402
	mov r1, sp	@ 000b7402 6946
.org 0xb7404
	adds r1, #240	@ 000b7404 f031
.org 0xb7406
	str r1, [sp, #384]	@ 000b7406 6091
.org 0xb7408
	ldr r1, [pc, #308]	@ 000b7408 4d49
.org 0xb740a
	ldr r0, [sp, #384]	@ 000b740a 6098
.org 0xb740c
	movs r2, #12	@ 000b740c 0c22
.org 0xb740e
	bl 0x129258	@ 000b740e 71f023ff
.org 0xb7412
	mov r2, sp	@ 000b7412 6a46
.org 0xb7414
	adds r2, #252	@ 000b7414 fc32
.org 0xb7416
	str r2, [sp, #388]	@ 000b7416 6192
.org 0xb7418
	add r4, sp, #288	@ 000b7418 48ac
.org 0xb741a
	ldr r3, [sp, #372]	@ 000b741a 5d9b
.org 0xb741c
	str r3, [r4, #0]	@ 000b741c 2360
.org 0xb741e
	add r0, sp, #292	@ 000b741e 49a8
.org 0xb7420
	str r3, [r0, #0]	@ 000b7420 0360
.org 0xb7422
	add r0, sp, #296	@ 000b7422 4aa8
.org 0xb7424
	mov r1, r8	@ 000b7424 4146
.org 0xb7426
	str r1, [r0, #0]	@ 000b7426 0160
.org 0xb7428
	add r0, sp, #300	@ 000b7428 4ba8
.org 0xb742a
	str r1, [r0, #0]	@ 000b742a 0160
.org 0xb742c
	add r0, sp, #304	@ 000b742c 4ca8
.org 0xb742e
	str r6, [r0, #0]	@ 000b742e 0660
.org 0xb7430
	add r0, sp, #308	@ 000b7430 4da8
.org 0xb7432
	str r6, [r0, #0]	@ 000b7432 0660
.org 0xb7434
	add r0, sp, #312	@ 000b7434 4ea8
.org 0xb7436
	str r5, [r0, #0]	@ 000b7436 0560
.org 0xb7438
	add r0, sp, #316	@ 000b7438 4fa8
.org 0xb743a
	str r5, [r0, #0]	@ 000b743a 0560
.org 0xb743c
	add r0, sp, #320	@ 000b743c 50a8
.org 0xb743e
	mov r2, sl	@ 000b743e 5246
.org 0xb7440
	str r2, [r0, #0]	@ 000b7440 0260
.org 0xb7442
	ldr r0, [sp, #388]	@ 000b7442 6198
.org 0xb7444
	adds r1, r4, #0	@ 000b7444 211c
.org 0xb7446
	movs r2, #36	@ 000b7446 2422
.org 0xb7448
	bl 0x129258	@ 000b7448 71f006ff
.org 0xb744c
	add r1, sp, #324	@ 000b744c 51a9
.org 0xb744e
	ldr r3, [sp, #376]	@ 000b744e 5e9b
.org 0xb7450
	str r3, [r1, #0]	@ 000b7450 0b60
.org 0xb7452
	add r0, sp, #328	@ 000b7452 52a8
.org 0xb7454
	str r3, [r0, #0]	@ 000b7454 0360
.org 0xb7456
	add r0, sp, #332	@ 000b7456 53a8
.org 0xb7458
	ldr r2, [sp, #380]	@ 000b7458 5f9a
.org 0xb745a
	str r2, [r0, #0]	@ 000b745a 0260
.org 0xb745c
	add r0, sp, #336	@ 000b745c 54a8
.org 0xb745e
	str r2, [r0, #0]	@ 000b745e 0260
.org 0xb7460
	add r0, sp, #340	@ 000b7460 55a8
.org 0xb7462
	str r7, [r0, #0]	@ 000b7462 0760
.org 0xb7464
	add r0, sp, #344	@ 000b7464 56a8
.org 0xb7466
	str r7, [r0, #0]	@ 000b7466 0760
.org 0xb7468
	add r0, sp, #348	@ 000b7468 57a8
.org 0xb746a
	mov r3, r9	@ 000b746a 4b46
.org 0xb746c
	str r3, [r0, #0]	@ 000b746c 0360
.org 0xb746e
	add r0, sp, #352	@ 000b746e 58a8
.org 0xb7470
	str r3, [r0, #0]	@ 000b7470 0360
.org 0xb7472
	add r0, sp, #356	@ 000b7472 59a8
.org 0xb7474
	ldr r2, [sp, #384]	@ 000b7474 609a
.org 0xb7476
	str r2, [r0, #0]	@ 000b7476 0260
.org 0xb7478
	adds r0, r4, #0	@ 000b7478 201c
.org 0xb747a
	movs r2, #36	@ 000b747a 2422
.org 0xb747c
	bl 0x129258	@ 000b747c 71f0ecfe
.org 0xb7480
	ldr r0, [sp, #368]	@ 000b7480 5c98
.org 0xb7482
	adds r0, #189	@ 000b7482 bd30
.org 0xb7484
	ldrb r0, [r0, #0]	@ 000b7484 0078
.org 0xb7486
	mov r8, r0	@ 000b7486 8046
.org 0xb7488
	ldr r3, [sp, #368]	@ 000b7488 5c9b
.org 0xb748a
	ldrb r0, [r3, #10]	@ 000b748a 987a
.org 0xb748c
	lsrs r6, r0, #4	@ 000b748c 0609
.org 0xb748e
	movs r0, #1	@ 000b748e 0120
.org 0xb7490
	ands r6, r0	@ 000b7490 0640
.org 0xb7492
	str r6, [sp, #392]	@ 000b7492 6296
.org 0xb7494
	lsls r0, r6, #1	@ 000b7494 7000
.org 0xb7496
	subs r0, #1	@ 000b7496 0138
.org 0xb7498
	mov sl, r0	@ 000b7498 8246
.org 0xb749a
	movs r4, #0	@ 000b749a 0024
.org 0xb749c
	mov r0, sp	@ 000b749c 6846
.org 0xb749e
	add r0, r8	@ 000b749e 4044
.org 0xb74a0
	ldrb r0, [r0, #0]	@ 000b74a0 0078
.org 0xb74a2
	cmp r4, r0	@ 000b74a2 8442
.org 0xb74a4
	bge.n 0xb7506	@ 000b74a4 2fda
.org 0xb74a6
	mov r0, r8	@ 000b74a6 4046
.org 0xb74a8
	lsls r1, r0, #2	@ 000b74a8 8100
.org 0xb74aa
	ldr r2, [sp, #388]	@ 000b74aa 619a
.org 0xb74ac
	adds r7, r2, r1	@ 000b74ac 5718
.org 0xb74ae
	add r5, sp, #360	@ 000b74ae 5aad
.org 0xb74b0
	add r0, sp, #288	@ 000b74b0 48a8
.org 0xb74b2
	adds r0, r0, r1	@ 000b74b2 4018
.org 0xb74b4
	mov r9, r0	@ 000b74b4 8146
.org 0xb74b6
	ldr r0, [r7, #0]	@ 000b74b6 3868
.org 0xb74b8
	lsls r2, r4, #3	@ 000b74b8 e200
.org 0xb74ba
	adds r0, r2, r0	@ 000b74ba 1018
.org 0xb74bc
	ldr r0, [r0, #0]	@ 000b74bc 0068
.org 0xb74be
	mov r1, sl	@ 000b74be 5146
.org 0xb74c0
	muls r1, r0	@ 000b74c0 4143
.org 0xb74c2
	ldr r3, [sp, #368]	@ 000b74c2 5c9b
.org 0xb74c4
	ldr r0, [r3, #84]	@ 000b74c4 586d
.org 0xb74c6
	adds r0, r0, r1	@ 000b74c6 4018
.org 0xb74c8
	str r0, [r5, #0]	@ 000b74c8 2860
.org 0xb74ca
	ldr r0, [r7, #0]	@ 000b74ca 3868
.org 0xb74cc
	adds r2, r2, r0	@ 000b74cc 1218
.org 0xb74ce
	ldr r0, [r3, #88]	@ 000b74ce 986d
.org 0xb74d0
	ldr r1, [r2, #4]	@ 000b74d0 5168
.org 0xb74d2
	adds r0, r0, r1	@ 000b74d2 4018
.org 0xb74d4
	str r0, [r5, #4]	@ 000b74d4 6860
.org 0xb74d6
	mov r1, r9	@ 000b74d6 4946
.org 0xb74d8
	ldr r0, [r1, #0]	@ 000b74d8 0868
.org 0xb74da
	adds r0, r0, r4	@ 000b74da 0019
.org 0xb74dc
	ldrb r0, [r0, #0]	@ 000b74dc 0078
.org 0xb74de
	lsls r1, r0, #3	@ 000b74de c100
.org 0xb74e0
	subs r1, r1, r0	@ 000b74e0 091a
.org 0xb74e2
	lsls r1, r1, #2	@ 000b74e2 8900
.org 0xb74e4
	ldr r0, [pc, #92]	@ 000b74e4 1748
.org 0xb74e6
	adds r1, r1, r0	@ 000b74e6 0918
.org 0xb74e8
	ldr r2, [sp, #392]	@ 000b74e8 629a
.org 0xb74ea
	lsls r3, r2, #4	@ 000b74ea 1301
.org 0xb74ec
	orrs r3, r6	@ 000b74ec 3343
.org 0xb74ee
	lsls r3, r3, #24	@ 000b74ee 1b06
.org 0xb74f0
	adds r0, r5, #0	@ 000b74f0 281c
.org 0xb74f2
	movs r2, #0	@ 000b74f2 0022
.org 0xb74f4
	lsrs r3, r3, #24	@ 000b74f4 1b0e
.org 0xb74f6
	bl 0xd4c8c	@ 000b74f6 1df0c9fb
.org 0xb74fa
	adds r4, #1	@ 000b74fa 0134
.org 0xb74fc
	mov r0, sp	@ 000b74fc 6846
.org 0xb74fe
	add r0, r8	@ 000b74fe 4044
.org 0xb7500
	ldrb r0, [r0, #0]	@ 000b7500 0078
.org 0xb7502
	cmp r4, r0	@ 000b7502 8442
.org 0xb7504
	blt.n 0xb74b6	@ 000b7504 d7db
.org 0xb7506
	add sp, #396	@ 000b7506 63b0
.org 0xb7508
	pop {r3, r4, r5}	@ 000b7508 38bc
.org 0xb750a
	mov r8, r3	@ 000b750a 9846
.org 0xb750c
	mov r9, r4	@ 000b750c a146
.org 0xb750e
	mov sl, r5	@ 000b750e aa46
.org 0xb7510
	pop {r4, r5, r6, r7}	@ 000b7510 f0bc
.org 0xb7512
	pop {r0}	@ 000b7512 01bc
.org 0xb7514
	bx r0	@ 000b7514 0047
