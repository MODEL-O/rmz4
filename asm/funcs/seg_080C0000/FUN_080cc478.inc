@ FUN_080cc478  entry 0x080cc478  size 186
.thumb
.org 0xcc478
FUN_080cc478:
	push {r4, r5, r6, lr}	@ 000cc478 70b5
.org 0xcc47a
	adds r6, r0, #0	@ 000cc47a 061c
.org 0xcc47c
	bl 0x1cd28	@ 000cc47c 50f754fc
.org 0xcc480
	ldrb r1, [r6, #10]	@ 000cc480 b17a
.org 0xcc482
	movs r0, #2	@ 000cc482 0220
.org 0xcc484
	movs r3, #0	@ 000cc484 0023
.org 0xcc486
	orrs r0, r1	@ 000cc486 0843
.org 0xcc488
	movs r1, #239	@ 000cc488 ef21
.org 0xcc48a
	ands r0, r1	@ 000cc48a 0840
.org 0xcc48c
	movs r1, #0	@ 000cc48c 0021
.org 0xcc48e
	strb r0, [r6, #10]	@ 000cc48e b072
.org 0xcc490
	adds r0, r6, #0	@ 000cc490 301c
.org 0xcc492
	adds r0, #76	@ 000cc492 4c30
.org 0xcc494
	strb r1, [r0, #0]	@ 000cc494 0170
.org 0xcc496
	adds r2, r6, #0	@ 000cc496 321c
.org 0xcc498
	adds r2, #74	@ 000cc498 4a32
.org 0xcc49a
	ldrb r1, [r2, #0]	@ 000cc49a 1178
.org 0xcc49c
	movs r0, #17	@ 000cc49c 1120
.org 0xcc49e
	negs r0, r0	@ 000cc49e 4042
.org 0xcc4a0
	ands r0, r1	@ 000cc4a0 0840
.org 0xcc4a2
	strb r0, [r2, #0]	@ 000cc4a2 1070
.org 0xcc4a4
	ldr r1, [r6, #100]	@ 000cc4a4 716e
.org 0xcc4a6
	movs r0, #192	@ 000cc4a6 c020
.org 0xcc4a8
	lsls r0, r0, #6	@ 000cc4a8 8001
.org 0xcc4aa
	cmp r1, r0	@ 000cc4aa 8142
.org 0xcc4ac
	beq.n 0xcc4be	@ 000cc4ac 07d0
.org 0xcc4ae
	movs r0, #144	@ 000cc4ae 9020
.org 0xcc4b0
	lsls r0, r0, #8	@ 000cc4b0 0002
.org 0xcc4b2
	cmp r1, r0	@ 000cc4b2 8142
.org 0xcc4b4
	beq.n 0xcc4be	@ 000cc4b4 03d0
.org 0xcc4b6
	movs r0, #240	@ 000cc4b6 f020
.org 0xcc4b8
	lsls r0, r0, #8	@ 000cc4b8 0002
.org 0xcc4ba
	cmp r1, r0	@ 000cc4ba 8142
.org 0xcc4bc
	bne.n 0xcc4f0	@ 000cc4bc 18d1
.org 0xcc4be
	ldrb r1, [r6, #10]	@ 000cc4be b17a
.org 0xcc4c0
	movs r0, #4	@ 000cc4c0 0420
.org 0xcc4c2
	movs r5, #0	@ 000cc4c2 0025
.org 0xcc4c4
	orrs r0, r1	@ 000cc4c4 0843
.org 0xcc4c6
	strb r0, [r6, #10]	@ 000cc4c6 b072
.org 0xcc4c8
	adds r4, r6, #0	@ 000cc4c8 341c
.org 0xcc4ca
	adds r4, #116	@ 000cc4ca 7434
.org 0xcc4cc
	ldrb r0, [r6, #17]	@ 000cc4cc 707c
.org 0xcc4ce
	lsls r1, r0, #1	@ 000cc4ce 4100
.org 0xcc4d0
	adds r1, r1, r0	@ 000cc4d0 0918
.org 0xcc4d2
	lsls r1, r1, #5	@ 000cc4d2 4901
.org 0xcc4d4
	ldr r0, [pc, #20]	@ 000cc4d4 0548
.org 0xcc4d6
	adds r1, r1, r0	@ 000cc4d6 0918
.org 0xcc4d8
	adds r2, r6, #0	@ 000cc4d8 321c
.org 0xcc4da
	adds r2, #84	@ 000cc4da 5432
.org 0xcc4dc
	adds r0, r4, #0	@ 000cc4dc 201c
.org 0xcc4de
	movs r3, #8	@ 000cc4de 0823
.org 0xcc4e0
	bl 0x5760	@ 000cc4e0 39f73ef9
.org 0xcc4e4
	str r6, [r4, #44]	@ 000cc4e4 e662
.org 0xcc4e6
	str r5, [r4, #36]	@ 000cc4e6 6562
.org 0xcc4e8
	strb r5, [r6, #18]	@ 000cc4e8 b574
.org 0xcc4ea
	b.n 0xcc514	@ 000cc4ea 13e0
.org 0xcc4ec
	.byte 0x20,0x67,0x86,0x08	@ 000cc4ec data
.org 0xcc4f0
	ldrb r0, [r6, #10]	@ 000cc4f0 b07a
.org 0xcc4f2
	movs r1, #4	@ 000cc4f2 0421
.org 0xcc4f4
	orrs r0, r1	@ 000cc4f4 0843
.org 0xcc4f6
	strb r0, [r6, #10]	@ 000cc4f6 b072
.org 0xcc4f8
	adds r4, r6, #0	@ 000cc4f8 341c
.org 0xcc4fa
	adds r4, #116	@ 000cc4fa 7434
.org 0xcc4fc
	ldr r1, [pc, #56]	@ 000cc4fc 0e49
.org 0xcc4fe
	adds r2, r6, #0	@ 000cc4fe 321c
.org 0xcc500
	adds r2, #84	@ 000cc500 5432
.org 0xcc502
	adds r0, r4, #0	@ 000cc502 201c
.org 0xcc504
	movs r3, #8	@ 000cc504 0823
.org 0xcc506
	bl 0x5760	@ 000cc506 39f72bf9
.org 0xcc50a
	str r6, [r4, #44]	@ 000cc50a e662
.org 0xcc50c
	movs r0, #0	@ 000cc50c 0020
.org 0xcc50e
	str r0, [r4, #36]	@ 000cc50e 6062
.org 0xcc510
	movs r0, #1	@ 000cc510 0120
.org 0xcc512
	strb r0, [r6, #18]	@ 000cc512 b074
.org 0xcc514
	movs r0, #0	@ 000cc514 0020
.org 0xcc516
	strb r0, [r6, #19]	@ 000cc516 f074
.org 0xcc518
	ldr r1, [pc, #32]	@ 000cc518 0849
.org 0xcc51a
	ldrb r0, [r6, #9]	@ 000cc51a 707a
.org 0xcc51c
	lsls r0, r0, #2	@ 000cc51c 8000
.org 0xcc51e
	adds r0, r0, r1	@ 000cc51e 4018
.org 0xcc520
	movs r1, #1	@ 000cc520 0121
.org 0xcc522
	str r1, [r6, #12]	@ 000cc522 f160
.org 0xcc524
	ldr r0, [r0, #0]	@ 000cc524 0068
.org 0xcc526
	ldr r0, [r0, #4]	@ 000cc526 4068
.org 0xcc528
	str r0, [r6, #20]	@ 000cc528 7061
.org 0xcc52a
	adds r0, r6, #0	@ 000cc52a 301c
.org 0xcc52c
	bl 0xcc0a4	@ 000cc52c fff7bafd
.org 0xcc530
	pop {r4, r5, r6}	@ 000cc530 70bc
