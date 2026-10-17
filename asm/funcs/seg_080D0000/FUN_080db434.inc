@ FUN_080db434  entry 0x080db434  size 236
.thumb
.org 0xdb434
FUN_080db434:
	push {r4, r5, r6, r7, lr}	@ 000db434 f0b5
.org 0xdb436
	mov r7, sl	@ 000db436 5746
.org 0xdb438
	mov r6, r9	@ 000db438 4e46
.org 0xdb43a
	mov r5, r8	@ 000db43a 4546
.org 0xdb43c
	push {r5, r6, r7}	@ 000db43c e0b4
.org 0xdb43e
	sub sp, #8	@ 000db43e 82b0
.org 0xdb440
	adds r5, r0, #0	@ 000db440 051c
.org 0xdb442
	adds r0, r1, #0	@ 000db442 081c
.org 0xdb444
	lsls r3, r3, #24	@ 000db444 1b06
.org 0xdb446
	lsrs r3, r3, #24	@ 000db446 1b0e
.org 0xdb448
	mov r8, r3	@ 000db448 9846
.org 0xdb44a
	movs r1, #255	@ 000db44a ff21
.org 0xdb44c
	lsls r1, r1, #8	@ 000db44c 0902
.org 0xdb44e
	str r1, [sp, #0]	@ 000db44e 0091
.org 0xdb450
	cmp r3, #0	@ 000db450 002b
.org 0xdb452
	beq.n 0xdb458	@ 000db452 01d0
.org 0xdb454
	movs r7, #255	@ 000db454 ff27
.org 0xdb456
	str r7, [sp, #0]	@ 000db456 0097
.org 0xdb458
	ldr r1, [r2, #0]	@ 000db458 1168
.org 0xdb45a
	str r1, [sp, #4]	@ 000db45a 0191
.org 0xdb45c
	ldr r4, [r0, #0]	@ 000db45c 0468
.org 0xdb45e
	cmp r1, r4	@ 000db45e a142
.org 0xdb460
	ble.n 0xdb468	@ 000db460 02dd
.org 0xdb462
	subs r6, r1, r4	@ 000db462 0e1b
.org 0xdb464
	movs r7, #1	@ 000db464 0127
.org 0xdb466
	b.n 0xdb470	@ 000db466 03e0
.org 0xdb468
	ldr r1, [sp, #4]	@ 000db468 0199
.org 0xdb46a
	subs r6, r4, r1	@ 000db46a 661a
.org 0xdb46c
	movs r7, #1	@ 000db46c 0127
.org 0xdb46e
	negs r7, r7	@ 000db46e 7f42
.org 0xdb470
	mov sl, r7	@ 000db470 ba46
.org 0xdb472
	ldr r1, [r2, #4]	@ 000db472 5168
.org 0xdb474
	ldr r0, [r0, #4]	@ 000db474 4068
.org 0xdb476
	subs r2, r1, r0	@ 000db476 0a1a
.org 0xdb478
	mov ip, r2	@ 000db478 9446
.org 0xdb47a
	adds r2, r4, #0	@ 000db47a 221c
.org 0xdb47c
	adds r4, r0, #0	@ 000db47c 041c
.org 0xdb47e
	mov r9, r1	@ 000db47e 8946
.org 0xdb480
	cmp ip, r6	@ 000db480 b445
.org 0xdb482
	ble.n 0xdb4c8	@ 000db482 21dd
.org 0xdb484
	mov r3, ip	@ 000db484 6346
.org 0xdb486
	lsls r0, r4, #1	@ 000db486 6000
.org 0xdb488
	adds r5, r0, r5	@ 000db488 4519
.org 0xdb48a
	cmp r4, #0	@ 000db48a 002c
.org 0xdb48c
	blt.n 0xdb4b4	@ 000db48c 12db
.org 0xdb48e
	cmp r4, #159	@ 000db48e 9f2c
.org 0xdb490
	bgt.n 0xdb510	@ 000db490 3edc
.org 0xdb492
	cmp r2, #0	@ 000db492 002a
.org 0xdb494
	bge.n 0xdb49a	@ 000db494 01da
.org 0xdb496
	movs r1, #0	@ 000db496 0021
.org 0xdb498
	b.n 0xdb4a6	@ 000db498 05e0
.org 0xdb49a
	cmp r2, #240	@ 000db49a f02a
.org 0xdb49c
	ble.n 0xdb4a2	@ 000db49c 01dd
.org 0xdb49e
	movs r1, #240	@ 000db49e f021
.org 0xdb4a0
	b.n 0xdb4a6	@ 000db4a0 01e0
.org 0xdb4a2
	lsls r0, r2, #24	@ 000db4a2 1006
.org 0xdb4a4
	lsrs r1, r0, #24	@ 000db4a4 010e
.org 0xdb4a6
	ldrh r0, [r5, #0]	@ 000db4a6 2888
.org 0xdb4a8
	ldr r7, [sp, #0]	@ 000db4a8 009f
.org 0xdb4aa
	ands r0, r7	@ 000db4aa 3840
.org 0xdb4ac
	mov r7, r8	@ 000db4ac 4746
.org 0xdb4ae
	lsls r1, r7	@ 000db4ae b940
.org 0xdb4b0
	orrs r0, r1	@ 000db4b0 0843
.org 0xdb4b2
	strh r0, [r5, #0]	@ 000db4b2 2880
.org 0xdb4b4
	subs r3, r3, r6	@ 000db4b4 9b1b
.org 0xdb4b6
	cmp r3, #0	@ 000db4b6 002b
.org 0xdb4b8
	bgt.n 0xdb4be	@ 000db4b8 01dc
.org 0xdb4ba
	add r2, sl	@ 000db4ba 5244
.org 0xdb4bc
	add r3, ip	@ 000db4bc 6344
.org 0xdb4be
	cmp r4, r9	@ 000db4be 4c45
.org 0xdb4c0
	beq.n 0xdb510	@ 000db4c0 26d0
.org 0xdb4c2
	adds r5, #2	@ 000db4c2 0235
.org 0xdb4c4
	adds r4, #1	@ 000db4c4 0134
.org 0xdb4c6
	b.n 0xdb48a	@ 000db4c6 e0e7
.org 0xdb4c8
	adds r3, r6, #0	@ 000db4c8 331c
.org 0xdb4ca
	lsls r0, r4, #1	@ 000db4ca 6000
.org 0xdb4cc
	adds r5, r0, r5	@ 000db4cc 4519
.org 0xdb4ce
	cmp r4, #0	@ 000db4ce 002c
.org 0xdb4d0
	blt.n 0xdb4f8	@ 000db4d0 12db
.org 0xdb4d2
	cmp r4, #159	@ 000db4d2 9f2c
.org 0xdb4d4
	bgt.n 0xdb510	@ 000db4d4 1cdc
.org 0xdb4d6
	cmp r2, #0	@ 000db4d6 002a
.org 0xdb4d8
	bge.n 0xdb4de	@ 000db4d8 01da
.org 0xdb4da
	movs r1, #0	@ 000db4da 0021
.org 0xdb4dc
	b.n 0xdb4ea	@ 000db4dc 05e0
.org 0xdb4de
	cmp r2, #240	@ 000db4de f02a
.org 0xdb4e0
	ble.n 0xdb4e6	@ 000db4e0 01dd
.org 0xdb4e2
	movs r1, #240	@ 000db4e2 f021
.org 0xdb4e4
	b.n 0xdb4ea	@ 000db4e4 01e0
.org 0xdb4e6
	lsls r0, r2, #24	@ 000db4e6 1006
.org 0xdb4e8
	lsrs r1, r0, #24	@ 000db4e8 010e
.org 0xdb4ea
	ldrh r0, [r5, #0]	@ 000db4ea 2888
.org 0xdb4ec
	ldr r7, [sp, #0]	@ 000db4ec 009f
.org 0xdb4ee
	ands r0, r7	@ 000db4ee 3840
.org 0xdb4f0
	mov r7, r8	@ 000db4f0 4746
.org 0xdb4f2
	lsls r1, r7	@ 000db4f2 b940
.org 0xdb4f4
	orrs r0, r1	@ 000db4f4 0843
.org 0xdb4f6
	strh r0, [r5, #0]	@ 000db4f6 2880
.org 0xdb4f8
	mov r0, ip	@ 000db4f8 6046
.org 0xdb4fa
	subs r3, r3, r0	@ 000db4fa 1b1a
.org 0xdb4fc
	cmp r3, #0	@ 000db4fc 002b
.org 0xdb4fe
	bgt.n 0xdb506	@ 000db4fe 02dc
.org 0xdb500
	adds r5, #2	@ 000db500 0235
.org 0xdb502
	adds r4, #1	@ 000db502 0134
.org 0xdb504
	adds r3, r3, r6	@ 000db504 9b19
.org 0xdb506
	ldr r1, [sp, #4]	@ 000db506 0199
.org 0xdb508
	cmp r2, r1	@ 000db508 8a42
.org 0xdb50a
	beq.n 0xdb510	@ 000db50a 01d0
.org 0xdb50c
	add r2, sl	@ 000db50c 5244
.org 0xdb50e
	b.n 0xdb4ce	@ 000db50e dee7
.org 0xdb510
	add sp, #8	@ 000db510 02b0
.org 0xdb512
	pop {r3, r4, r5}	@ 000db512 38bc
.org 0xdb514
	mov r8, r3	@ 000db514 9846
.org 0xdb516
	mov r9, r4	@ 000db516 a146
.org 0xdb518
	mov sl, r5	@ 000db518 aa46
.org 0xdb51a
	pop {r4, r5, r6, r7}	@ 000db51a f0bc
.org 0xdb51c
	pop {r0}	@ 000db51c 01bc
.org 0xdb51e
	bx r0	@ 000db51e 0047
