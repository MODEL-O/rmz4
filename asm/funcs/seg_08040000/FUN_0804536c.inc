@ FUN_0804536c  entry 0x0804536c  size 190
.thumb
.org 0x4536c
FUN_0804536c:
	push {r4, r5, lr}	@ 0004536c 30b5
.org 0x4536e
	adds r4, r0, #0	@ 0004536e 041c
.org 0x45370
	ldr r5, [r4, #44]	@ 00045370 e56a
.org 0x45372
	bl 0x1cff0	@ 00045372 d7f73dfe
.org 0x45376
	ldrb r2, [r4, #13]	@ 00045376 627b
.org 0x45378
	cmp r2, #0	@ 00045378 002a
.org 0x4537a
	bne.n 0x453a2	@ 0004537a 12d1
.org 0x4537c
	ldr r0, [r4, #84]	@ 0004537c 606d
.org 0x4537e
	ldr r1, [r4, #92]	@ 0004537e e16d
.org 0x45380
	adds r0, r0, r1	@ 00045380 4018
.org 0x45382
	str r0, [r4, #84]	@ 00045382 6065
.org 0x45384
	ldr r0, [r4, #100]	@ 00045384 606e
.org 0x45386
	adds r1, r1, r0	@ 00045386 0918
.org 0x45388
	str r1, [r4, #92]	@ 00045388 e165
.org 0x4538a
	ldr r0, [r4, #88]	@ 0004538a a06d
.org 0x4538c
	ldr r1, [r4, #96]	@ 0004538c 216e
.org 0x4538e
	adds r0, r0, r1	@ 0004538e 4018
.org 0x45390
	str r0, [r4, #88]	@ 00045390 a065
.org 0x45392
	ldr r0, [r4, #104]	@ 00045392 a06e
.org 0x45394
	adds r1, r1, r0	@ 00045394 0918
.org 0x45396
	str r1, [r4, #96]	@ 00045396 2166
.org 0x45398
	cmp r1, #0	@ 00045398 0029
.org 0x4539a
	bne.n 0x453c0	@ 0004539a 11d1
.org 0x4539c
	adds r0, r2, #1	@ 0004539c 501c
.org 0x4539e
	strb r0, [r4, #13]	@ 0004539e 6073
.org 0x453a0
	b.n 0x453c0	@ 000453a0 0ee0
.org 0x453a2
	ldr r0, [r4, #84]	@ 000453a2 606d
.org 0x453a4
	ldr r1, [r4, #92]	@ 000453a4 e16d
.org 0x453a6
	adds r0, r0, r1	@ 000453a6 4018
.org 0x453a8
	str r0, [r4, #84]	@ 000453a8 6065
.org 0x453aa
	adds r2, r1, #0	@ 000453aa 0a1c
.org 0x453ac
	cmp r1, #0	@ 000453ac 0029
.org 0x453ae
	bge.n 0x453b2	@ 000453ae 00da
.org 0x453b0
	negs r2, r1	@ 000453b0 4a42
.org 0x453b2
	ldr r0, [pc, #120]	@ 000453b2 1e48
.org 0x453b4
	cmp r2, r0	@ 000453b4 8242
.org 0x453b6
	bgt.n 0x453c0	@ 000453b6 03dc
.org 0x453b8
	ldr r0, [r4, #100]	@ 000453b8 606e
.org 0x453ba
	lsls r0, r0, #1	@ 000453ba 4000
.org 0x453bc
	adds r0, r1, r0	@ 000453bc 0818
.org 0x453be
	str r0, [r4, #92]	@ 000453be e065
.org 0x453c0
	adds r0, r4, #0	@ 000453c0 201c
.org 0x453c2
	movs r1, #3	@ 000453c2 0321
.org 0x453c4
	bl 0x3a99c	@ 000453c4 f5f7eafa
.org 0x453c8
	lsls r0, r0, #24	@ 000453c8 0006
.org 0x453ca
	lsrs r2, r0, #24	@ 000453ca 020e
.org 0x453cc
	adds r0, r5, #0	@ 000453cc 281c
.org 0x453ce
	adds r0, #250	@ 000453ce fa30
.org 0x453d0
	ldrb r0, [r0, #0]	@ 000453d0 0078
.org 0x453d2
	cmp r0, #2	@ 000453d2 0228
.org 0x453d4
	bne.n 0x453d8	@ 000453d4 00d1
.org 0x453d6
	movs r2, #1	@ 000453d6 0122
.org 0x453d8
	cmp r2, #0	@ 000453d8 002a
.org 0x453da
	bne.n 0x453f8	@ 000453da 0dd1
.org 0x453dc
	ldrb r0, [r4, #18]	@ 000453dc a07c
.org 0x453de
	subs r0, #1	@ 000453de 0138
.org 0x453e0
	strb r0, [r4, #18]	@ 000453e0 a074
.org 0x453e2
	lsls r0, r0, #24	@ 000453e2 0006
.org 0x453e4
	lsrs r0, r0, #24	@ 000453e4 000e
.org 0x453e6
	cmp r0, #255	@ 000453e6 ff28
.org 0x453e8
	beq.n 0x453f8	@ 000453e8 06d0
.org 0x453ea
	adds r0, r4, #0	@ 000453ea 201c
.org 0x453ec
	adds r0, #140	@ 000453ec 8c30
.org 0x453ee
	ldr r0, [r0, #0]	@ 000453ee 0068
.org 0x453f0
	movs r1, #4	@ 000453f0 0421
.org 0x453f2
	ands r0, r1	@ 000453f2 0840
.org 0x453f4
	cmp r0, #0	@ 000453f4 0028
.org 0x453f6
	beq.n 0x45424	@ 000453f6 15d0
.org 0x453f8
	cmp r2, #255	@ 000453f8 ff2a
.org 0x453fa
	beq.n 0x4540c	@ 000453fa 07d0
.org 0x453fc
	adds r1, r4, #0	@ 000453fc 211c
.org 0x453fe
	adds r1, #84	@ 000453fe 5431
.org 0x45400
	movs r0, #2	@ 00045400 0220
.org 0x45402
	bl 0xd0c88	@ 00045402 8bf041fc
.org 0x45406
	movs r0, #53	@ 00045406 3520
.org 0x45408
	bl 0x2b10	@ 00045408 bdf782fb
.org 0x4540c
	ldr r1, [pc, #32]	@ 0004540c 0849
.org 0x4540e
	ldrb r0, [r4, #9]	@ 0004540e 607a
.org 0x45410
	lsls r0, r0, #2	@ 00045410 8000
.org 0x45412
	adds r0, r0, r1	@ 00045412 4018
.org 0x45414
	movs r1, #2	@ 00045414 0221
.org 0x45416
	str r1, [r4, #12]	@ 00045416 e160
.org 0x45418
	ldr r0, [r0, #0]	@ 00045418 0068
.org 0x4541a
	ldr r0, [r0, #8]	@ 0004541a 8068
.org 0x4541c
	str r0, [r4, #20]	@ 0004541c 6061
.org 0x4541e
	adds r0, r4, #0	@ 0004541e 201c
.org 0x45420
	bl 0x45218	@ 00045420 fff7fafe
.org 0x45424
	pop {r4, r5}	@ 00045424 30bc
.org 0x45426
	pop {r0}	@ 00045426 01bc
.org 0x45428
	bx r0	@ 00045428 0047
