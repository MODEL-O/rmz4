@ FUN_0802e474  entry 0x0802e474  size 214
.thumb
.org 0x2e474
FUN_0802e474:
	push {r4, r5, r6, r7, lr}	@ 0002e474 f0b5
.org 0x2e476
	mov r7, sl	@ 0002e476 5746
.org 0x2e478
	mov r6, r9	@ 0002e478 4e46
.org 0x2e47a
	mov r5, r8	@ 0002e47a 4546
.org 0x2e47c
	push {r5, r6, r7}	@ 0002e47c e0b4
.org 0x2e47e
	adds r6, r0, #0	@ 0002e47e 061c
.org 0x2e480
	mov r8, r1	@ 0002e480 8846
.org 0x2e482
	mov sl, r2	@ 0002e482 9246
.org 0x2e484
	movs r7, #0	@ 0002e484 0027
.org 0x2e486
	movs r1, #220	@ 0002e486 dc21
.org 0x2e488
	lsls r1, r1, #1	@ 0002e488 4900
.org 0x2e48a
	adds r0, r6, r1	@ 0002e48a 7018
.org 0x2e48c
	ldrb r0, [r0, #0]	@ 0002e48c 0078
.org 0x2e48e
	cmp r7, r0	@ 0002e48e 8742
.org 0x2e490
	bcs.n 0x2e54a	@ 0002e490 5bd2
.org 0x2e492
	ldr r2, [pc, #132]	@ 0002e492 214a
.org 0x2e494
	mov r9, r2	@ 0002e494 9146
.org 0x2e496
	movs r1, #196	@ 0002e496 c421
.org 0x2e498
	lsls r1, r1, #1	@ 0002e498 4900
.org 0x2e49a
	adds r0, r6, r1	@ 0002e49a 7018
.org 0x2e49c
	adds r0, r0, r7	@ 0002e49c c019
.org 0x2e49e
	ldrb r1, [r0, #0]	@ 0002e49e 0178
.org 0x2e4a0
	lsls r0, r1, #1	@ 0002e4a0 4800
.org 0x2e4a2
	adds r0, r0, r1	@ 0002e4a2 4018
.org 0x2e4a4
	lsls r2, r0, #3	@ 0002e4a4 c200
.org 0x2e4a6
	movs r0, #238	@ 0002e4a6 ee20
.org 0x2e4a8
	lsls r0, r0, #1	@ 0002e4a8 4000
.org 0x2e4aa
	add r0, r9	@ 0002e4aa 4844
.org 0x2e4ac
	adds r5, r2, r0	@ 0002e4ac 1518
.org 0x2e4ae
	ldr r1, [r5, #0]	@ 0002e4ae 2968
.org 0x2e4b0
	mov r0, r8	@ 0002e4b0 4046
.org 0x2e4b2
	subs r1, r0, r1	@ 0002e4b2 411a
.org 0x2e4b4
	mov r0, r9	@ 0002e4b4 4846
.org 0x2e4b6
	adds r3, r2, r0	@ 0002e4b6 1318
.org 0x2e4b8
	movs r0, #236	@ 0002e4b8 ec20
.org 0x2e4ba
	lsls r0, r0, #1	@ 0002e4ba 4000
.org 0x2e4bc
	adds r4, r3, r0	@ 0002e4bc 1c18
.org 0x2e4be
	ldrh r0, [r4, #0]	@ 0002e4be 2088
.org 0x2e4c0
	adds r1, r1, r0	@ 0002e4c0 0918
.org 0x2e4c2
	lsls r0, r0, #1	@ 0002e4c2 4000
.org 0x2e4c4
	cmp r1, r0	@ 0002e4c4 8142
.org 0x2e4c6
	bcs.n 0x2e538	@ 0002e4c6 37d2
.org 0x2e4c8
	ldr r1, [pc, #80]	@ 0002e4c8 1449
.org 0x2e4ca
	adds r0, r2, r1	@ 0002e4ca 5018
.org 0x2e4cc
	ldr r1, [r0, #0]	@ 0002e4cc 0168
.org 0x2e4ce
	mov r2, sl	@ 0002e4ce 5246
.org 0x2e4d0
	subs r1, r2, r1	@ 0002e4d0 511a
.org 0x2e4d2
	movs r2, #237	@ 0002e4d2 ed22
.org 0x2e4d4
	lsls r2, r2, #1	@ 0002e4d4 5200
.org 0x2e4d6
	adds r0, r3, r2	@ 0002e4d6 9818
.org 0x2e4d8
	ldrh r0, [r0, #0]	@ 0002e4d8 0088
.org 0x2e4da
	adds r1, r1, r0	@ 0002e4da 0918
.org 0x2e4dc
	lsls r0, r0, #1	@ 0002e4dc 4000
.org 0x2e4de
	cmp r1, r0	@ 0002e4de 8142
.org 0x2e4e0
	bcs.n 0x2e538	@ 0002e4e0 2ad2
.org 0x2e4e2
	ldr r1, [pc, #60]	@ 0002e4e2 0f49
.org 0x2e4e4
	subs r2, #4	@ 0002e4e4 043a
.org 0x2e4e6
	adds r0, r3, r2	@ 0002e4e6 9818
.org 0x2e4e8
	ldrh r0, [r0, #0]	@ 0002e4e8 0088
.org 0x2e4ea
	ands r0, r1	@ 0002e4ea 0840
.org 0x2e4ec
	movs r1, #0	@ 0002e4ec 0021
.org 0x2e4ee
	bl 0x2f084	@ 0002e4ee 00f0c9fd
.org 0x2e4f2
	lsls r0, r0, #24	@ 0002e4f2 0006
.org 0x2e4f4
	cmp r0, #0	@ 0002e4f4 0028
.org 0x2e4f6
	beq.n 0x2e538	@ 0002e4f6 1fd0
.org 0x2e4f8
	ldrb r1, [r6, #10]	@ 0002e4f8 b17a
.org 0x2e4fa
	movs r0, #16	@ 0002e4fa 1020
.org 0x2e4fc
	ands r0, r1	@ 0002e4fc 0840
.org 0x2e4fe
	cmp r0, #0	@ 0002e4fe 0028
.org 0x2e500
	beq.n 0x2e528	@ 0002e500 12d0
.org 0x2e502
	ldrh r0, [r4, #0]	@ 0002e502 2088
.org 0x2e504
	lsrs r0, r0, #1	@ 0002e504 4008
.org 0x2e506
	ldr r1, [r5, #0]	@ 0002e506 2968
.org 0x2e508
	subs r1, r1, r0	@ 0002e508 091a
.org 0x2e50a
	mov r0, r8	@ 0002e50a 4046
.org 0x2e50c
	subs r1, r1, r0	@ 0002e50c 091a
.org 0x2e50e
	ldr r0, [pc, #20]	@ 0002e50e 0548
.org 0x2e510
	cmp r1, r0	@ 0002e510 8142
.org 0x2e512
	ble.n 0x2e538	@ 0002e512 11dd
.org 0x2e514
	movs r0, #1	@ 0002e514 0120
.org 0x2e516
	b.n 0x2e54c	@ 0002e516 19e0
.org 0x2e518
	.byte 0xb0,0x0a,0x00,0x02	@ 0002e518 data
.org 0x2e51c
	.byte 0x90,0x0c,0x00,0x02	@ 0002e51c data
.org 0x2e520
	.byte 0x0f,0x88,0x00,0x00	@ 0002e520 data
.org 0x2e524
	.byte 0x00,0xff,0xff,0xff	@ 0002e524 data
.org 0x2e528
	ldrh r1, [r4, #0]	@ 0002e528 2188
.org 0x2e52a
	lsrs r1, r1, #1	@ 0002e52a 4908
.org 0x2e52c
	ldr r0, [r5, #0]	@ 0002e52c 2868
.org 0x2e52e
	adds r0, r0, r1	@ 0002e52e 4018
.org 0x2e530
	mov r2, r8	@ 0002e530 4246
.org 0x2e532
	subs r1, r0, r2	@ 0002e532 811a
.org 0x2e534
	cmp r1, #255	@ 0002e534 ff29
.org 0x2e536
	ble.n 0x2e514	@ 0002e536 eddd
.org 0x2e538
	adds r0, r7, #1	@ 0002e538 781c
.org 0x2e53a
	lsls r0, r0, #24	@ 0002e53a 0006
.org 0x2e53c
	lsrs r7, r0, #24	@ 0002e53c 070e
.org 0x2e53e
	movs r1, #220	@ 0002e53e dc21
.org 0x2e540
	lsls r1, r1, #1	@ 0002e540 4900
.org 0x2e542
	adds r0, r6, r1	@ 0002e542 7018
.org 0x2e544
	ldrb r0, [r0, #0]	@ 0002e544 0078
.org 0x2e546
	cmp r7, r0	@ 0002e546 8742
.org 0x2e548
	bcc.n 0x2e496	@ 0002e548 a5d3
