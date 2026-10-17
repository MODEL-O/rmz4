@ FUN_080b247c  entry 0x080b247c  size 166
.thumb
.org 0xb247c
FUN_080b247c:
	push {r4, r5, lr}	@ 000b247c 30b5
.org 0xb247e
	adds r5, r0, #0	@ 000b247e 051c
.org 0xb2480
	ldr r1, [r5, #20]	@ 000b2480 6969
.org 0xb2482
	movs r0, #1	@ 000b2482 0120
.org 0xb2484
	ands r0, r1	@ 000b2484 0840
.org 0xb2486
	cmp r0, #0	@ 000b2486 0028
.org 0xb2488
	beq.n 0xb2522	@ 000b2488 4bd0
.org 0xb248a
	ldr r4, [r5, #44]	@ 000b248a ec6a
.org 0xb248c
	ldrb r0, [r4, #16]	@ 000b248c 207c
.org 0xb248e
	cmp r0, #0	@ 000b248e 0028
.org 0xb2490
	bne.n 0xb24f0	@ 000b2490 2ed1
.org 0xb2492
	ldrb r0, [r4, #17]	@ 000b2492 607c
.org 0xb2494
	cmp r0, #1	@ 000b2494 0128
.org 0xb2496
	bhi.n 0xb24a0	@ 000b2496 03d8
.org 0xb2498
	movs r0, #33	@ 000b2498 2120
.org 0xb249a
	bl 0x6984	@ 000b249a 54f773fa
.org 0xb249e
	b.n 0xb24a6	@ 000b249e 02e0
.org 0xb24a0
	movs r0, #34	@ 000b24a0 2220
.org 0xb24a2
	bl 0x6984	@ 000b24a2 54f76ffa
.org 0xb24a6
	ldr r1, [r5, #20]	@ 000b24a6 6969
.org 0xb24a8
	movs r0, #128	@ 000b24a8 8020
.org 0xb24aa
	lsls r0, r0, #2	@ 000b24aa 8000
.org 0xb24ac
	ands r0, r1	@ 000b24ac 0840
.org 0xb24ae
	cmp r0, #0	@ 000b24ae 0028
.org 0xb24b0
	beq.n 0xb2522	@ 000b24b0 37d0
.org 0xb24b2
	movs r0, #128	@ 000b24b2 8020
.org 0xb24b4
	lsls r0, r0, #10	@ 000b24b4 8002
.org 0xb24b6
	ands r1, r0	@ 000b24b6 0140
.org 0xb24b8
	cmp r1, #0	@ 000b24b8 0029
.org 0xb24ba
	beq.n 0xb2522	@ 000b24ba 32d0
.org 0xb24bc
	adds r0, r4, #0	@ 000b24bc 201c
.org 0xb24be
	adds r0, #180	@ 000b24be b430
.org 0xb24c0
	movs r1, #1	@ 000b24c0 0121
.org 0xb24c2
	strb r1, [r0, #0]	@ 000b24c2 0170
.org 0xb24c4
	ldr r0, [pc, #24]	@ 000b24c4 0648
.org 0xb24c6
	ldr r1, [r0, #0]	@ 000b24c6 0168
.org 0xb24c8
	cmp r1, #0	@ 000b24c8 0029
.org 0xb24ca
	beq.n 0xb2522	@ 000b24ca 2ad0
.org 0xb24cc
	ldrb r0, [r4, #17]	@ 000b24cc 607c
.org 0xb24ce
	cmp r0, #1	@ 000b24ce 0128
.org 0xb24d0
	bhi.n 0xb24e4	@ 000b24d0 08d8
.org 0xb24d2
	adds r0, r1, #0	@ 000b24d2 081c
.org 0xb24d4
	movs r1, #5	@ 000b24d4 0521
.org 0xb24d6
	movs r2, #11	@ 000b24d6 0b22
.org 0xb24d8
	bl 0x3a578	@ 000b24d8 88f74ef8
.org 0xb24dc
	b.n 0xb2522	@ 000b24dc 21e0
.org 0xb24de
	.byte 0x00	@ 000b24de data
.org 0xb24df
	.byte 0x00	@ 000b24df data
.org 0xb24e0
	.byte 0xf0,0xdb,0x02,0x02	@ 000b24e0 data
.org 0xb24e4
	adds r0, r1, #0	@ 000b24e4 081c
.org 0xb24e6
	movs r1, #6	@ 000b24e6 0621
.org 0xb24e8
	movs r2, #8	@ 000b24e8 0822
.org 0xb24ea
	bl 0x3a578	@ 000b24ea 88f745f8
.org 0xb24ee
	b.n 0xb2522	@ 000b24ee 18e0
.org 0xb24f0
	movs r0, #4	@ 000b24f0 0420
.org 0xb24f2
	ands r1, r0	@ 000b24f2 0140
.org 0xb24f4
	cmp r1, #0	@ 000b24f4 0029
.org 0xb24f6
	beq.n 0xb2522	@ 000b24f6 14d0
.org 0xb24f8
	adds r0, r4, #0	@ 000b24f8 201c
.org 0xb24fa
	adds r0, #184	@ 000b24fa b830
.org 0xb24fc
	movs r1, #0	@ 000b24fc 0021
.org 0xb24fe
	strb r1, [r0, #0]	@ 000b24fe 0170
.org 0xb2500
	adds r0, #1	@ 000b2500 0130
.org 0xb2502
	strb r1, [r0, #0]	@ 000b2502 0170
.org 0xb2504
	adds r0, r4, #0	@ 000b2504 201c
.org 0xb2506
	bl 0xb29b8	@ 000b2506 00f057fa
.org 0xb250a
	movs r0, #53	@ 000b250a 3520
.org 0xb250c
	bl 0x2b10	@ 000b250c 50f700fb
.org 0xb2510
	ldr r1, [pc, #20]	@ 000b2510 0549
.org 0xb2512
	ldrb r0, [r4, #9]	@ 000b2512 607a
.org 0xb2514
	lsls r0, r0, #2	@ 000b2514 8000
.org 0xb2516
	adds r0, r0, r1	@ 000b2516 4018
.org 0xb2518
	movs r1, #2	@ 000b2518 0221
.org 0xb251a
	str r1, [r4, #12]	@ 000b251a e160
.org 0xb251c
	ldr r0, [r0, #0]	@ 000b251c 0068
.org 0xb251e
	ldr r0, [r0, #8]	@ 000b251e 8068
.org 0xb2520
	str r0, [r4, #20]	@ 000b2520 6061
