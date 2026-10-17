@ FUN_08050404  entry 0x08050404  size 562
.thumb
.org 0x50404
FUN_08050404:
	push {r4, r5, r6, r7, lr}	@ 00050404 f0b5
.org 0x50406
	mov r7, sl	@ 00050406 5746
.org 0x50408
	mov r6, r9	@ 00050408 4e46
.org 0x5040a
	mov r5, r8	@ 0005040a 4546
.org 0x5040c
	push {r5, r6, r7}	@ 0005040c e0b4
.org 0x5040e
	adds r7, r0, #0	@ 0005040e 071c
.org 0x50410
	movs r0, #0	@ 00050410 0020
.org 0x50412
	mov sl, r0	@ 00050412 8246
.org 0x50414
	ldr r0, [pc, #520]	@ 00050414 8248
.org 0x50416
	ldr r1, [pc, #524]	@ 00050416 8349
.org 0x50418
	ldrh r1, [r1, #0]	@ 00050418 0988
.org 0x5041a
	ldrh r2, [r0, #6]	@ 0005041a c288
.org 0x5041c
	lsrs r2, r2, #6	@ 0005041c 9209
.org 0x5041e
	subs r1, r1, r2	@ 0005041e 891a
.org 0x50420
	lsls r1, r1, #5	@ 00050420 4901
.org 0x50422
	movs r2, #128	@ 00050422 8022
.org 0x50424
	lsls r2, r2, #9	@ 00050424 5202
.org 0x50426
	adds r1, r1, r2	@ 00050426 8918
.org 0x50428
	bl 0x1d30	@ 00050428 b1f782fc
.org 0x5042c
	ldr r0, [pc, #504]	@ 0005042c 7e48
.org 0x5042e
	ldr r1, [pc, #508]	@ 0005042e 7f49
.org 0x50430
	ldrh r1, [r1, #0]	@ 00050430 0988
.org 0x50432
	ldrb r2, [r0, #7]	@ 00050432 c279
.org 0x50434
	subs r1, r1, r2	@ 00050434 891a
.org 0x50436
	lsls r1, r1, #5	@ 00050436 4901
.org 0x50438
	movs r2, #128	@ 00050438 8022
.org 0x5043a
	lsls r2, r2, #2	@ 0005043a 9200
.org 0x5043c
	adds r1, r1, r2	@ 0005043c 8918
.org 0x5043e
	bl 0x2208	@ 0005043e b1f7e3fe
.org 0x50442
	adds r0, r7, #0	@ 00050442 381c
.org 0x50444
	bl 0x1cc9c	@ 00050444 ccf72afc
.org 0x50448
	ldrb r1, [r7, #10]	@ 00050448 b97a
.org 0x5044a
	movs r0, #1	@ 0005044a 0120
.org 0x5044c
	orrs r0, r1	@ 0005044c 0843
.org 0x5044e
	movs r1, #2	@ 0005044e 0221
.org 0x50450
	orrs r0, r1	@ 00050450 0843
.org 0x50452
	strb r0, [r7, #10]	@ 00050452 b872
.org 0x50454
	adds r0, r7, #0	@ 00050454 381c
.org 0x50456
	bl 0x1ceec	@ 00050456 ccf749fd
.org 0x5045a
	adds r0, r7, #0	@ 0005045a 381c
.org 0x5045c
	adds r0, #76	@ 0005045c 4c30
.org 0x5045e
	mov r1, sl	@ 0005045e 5146
.org 0x50460
	strb r1, [r0, #0]	@ 00050460 0170
.org 0x50462
	adds r2, r7, #0	@ 00050462 3a1c
.org 0x50464
	adds r2, #74	@ 00050464 4a32
.org 0x50466
	ldrb r1, [r2, #0]	@ 00050466 1178
.org 0x50468
	movs r0, #17	@ 00050468 1120
.org 0x5046a
	negs r0, r0	@ 0005046a 4042
.org 0x5046c
	ands r0, r1	@ 0005046c 0840
.org 0x5046e
	strb r0, [r2, #0]	@ 0005046e 1070
.org 0x50470
	ldrb r1, [r7, #10]	@ 00050470 b97a
.org 0x50472
	movs r0, #239	@ 00050472 ef20
.org 0x50474
	ands r0, r1	@ 00050474 0840
.org 0x50476
	strb r0, [r7, #10]	@ 00050476 b872
.org 0x50478
	ldr r1, [pc, #436]	@ 00050478 6d49
.org 0x5047a
	adds r0, r7, #0	@ 0005047a 381c
.org 0x5047c
	movs r2, #64	@ 0005047c 4022
.org 0x5047e
	bl 0x503cc	@ 0005047e fff7a5ff
.org 0x50482
	ldr r1, [pc, #432]	@ 00050482 6c49
.org 0x50484
	adds r0, r7, #0	@ 00050484 381c
.org 0x50486
	adds r0, #116	@ 00050486 7430
.org 0x50488
	str r1, [r0, #36]	@ 00050488 4162
.org 0x5048a
	ldr r0, [r7, #84]	@ 0005048a 786d
.org 0x5048c
	ldr r1, [r7, #88]	@ 0005048c b96d
.org 0x5048e
	bl 0x8868	@ 0005048e b8f7ebf9
.org 0x50492
	ldr r2, [pc, #420]	@ 00050492 694a
.org 0x50494
	adds r0, r0, r2	@ 00050494 8018
.org 0x50496
	str r0, [r7, #84]	@ 00050496 7865
.org 0x50498
	ldr r1, [r7, #88]	@ 00050498 b96d
.org 0x5049a
	bl 0x8534	@ 0005049a b8f74bf8
.org 0x5049e
	str r0, [r7, #88]	@ 0005049e b865
.org 0x504a0
	adds r6, r7, #0	@ 000504a0 3e1c
.org 0x504a2
	adds r6, #180	@ 000504a2 b436
.org 0x504a4
	ldr r0, [r7, #84]	@ 000504a4 786d
.org 0x504a6
	str r0, [r6, #0]	@ 000504a6 3060
.org 0x504a8
	ldr r0, [r7, #88]	@ 000504a8 b86d
.org 0x504aa
	str r0, [r6, #4]	@ 000504aa 7060
.org 0x504ac
	ldr r0, [r7, #84]	@ 000504ac 786d
.org 0x504ae
	ldr r1, [r7, #88]	@ 000504ae b96d
.org 0x504b0
	bl 0x8988	@ 000504b0 b8f76afa
.org 0x504b4
	adds r5, r0, #0	@ 000504b4 051c
.org 0x504b6
	ldr r0, [r7, #84]	@ 000504b6 786d
.org 0x504b8
	ldr r1, [r7, #88]	@ 000504b8 b96d
.org 0x504ba
	bl 0x8868	@ 000504ba b8f7d5f9
.org 0x504be
	adds r4, r0, #0	@ 000504be 041c
.org 0x504c0
	ldr r0, [r7, #84]	@ 000504c0 786d
.org 0x504c2
	ldr r1, [r7, #88]	@ 000504c2 b96d
.org 0x504c4
	bl 0x8988	@ 000504c4 b8f760fa
.org 0x504c8
	subs r4, r4, r0	@ 000504c8 241a
.org 0x504ca
	asrs r4, r4, #1	@ 000504ca 6410
.org 0x504cc
	adds r5, r5, r4	@ 000504cc 2d19
.org 0x504ce
	str r5, [r6, #16]	@ 000504ce 3561
.org 0x504d0
	ldr r0, [r7, #84]	@ 000504d0 786d
.org 0x504d2
	ldr r1, [r7, #88]	@ 000504d2 b96d
.org 0x504d4
	bl 0x8748	@ 000504d4 b8f738f9
.org 0x504d8
	adds r5, r0, #0	@ 000504d8 051c
.org 0x504da
	ldr r0, [r7, #84]	@ 000504da 786d
.org 0x504dc
	ldr r1, [r7, #88]	@ 000504dc b96d
.org 0x504de
	bl 0x8534	@ 000504de b8f729f8
.org 0x504e2
	adds r4, r0, #0	@ 000504e2 041c
.org 0x504e4
	ldr r0, [r7, #84]	@ 000504e4 786d
.org 0x504e6
	ldr r1, [r7, #88]	@ 000504e6 b96d
.org 0x504e8
	bl 0x8748	@ 000504e8 b8f72ef9
.org 0x504ec
	subs r4, r4, r0	@ 000504ec 241a
.org 0x504ee
	asrs r4, r4, #1	@ 000504ee 6410
.org 0x504f0
	adds r5, r5, r4	@ 000504f0 2d19
.org 0x504f2
	str r5, [r6, #20]	@ 000504f2 7561
.org 0x504f4
	movs r0, #0	@ 000504f4 0020
.org 0x504f6
	str r0, [r6, #8]	@ 000504f6 b060
.org 0x504f8
	adds r0, r7, #0	@ 000504f8 381c
.org 0x504fa
	adds r0, #213	@ 000504fa d530
.org 0x504fc
	mov r1, sl	@ 000504fc 5146
.org 0x504fe
	strb r1, [r0, #0]	@ 000504fe 0170
.org 0x50500
	adds r0, #1	@ 00050500 0130
.org 0x50502
	strb r1, [r0, #0]	@ 00050502 0170
.org 0x50504
	adds r0, #2	@ 00050504 0230
.org 0x50506
	strb r1, [r0, #0]	@ 00050506 0170
.org 0x50508
	adds r0, #1	@ 00050508 0130
.org 0x5050a
	strb r1, [r0, #0]	@ 0005050a 0170
.org 0x5050c
	movs r2, #0	@ 0005050c 0022
.org 0x5050e
	strh r2, [r6, #28]	@ 0005050e b283
.org 0x50510
	strh r2, [r6, #30]	@ 00050510 f283
.org 0x50512
	movs r0, #0	@ 00050512 0020
.org 0x50514
	str r0, [r7, #44]	@ 00050514 f862
.org 0x50516
	movs r1, #0	@ 00050516 0021
.org 0x50518
	adds r2, r7, #0	@ 00050518 3a1c
.org 0x5051a
	adds r2, #218	@ 0005051a da32
.org 0x5051c
	movs r3, #0	@ 0005051c 0023
.org 0x5051e
	adds r0, r2, r1	@ 0005051e 5018
.org 0x50520
	strb r3, [r0, #0]	@ 00050520 0370
.org 0x50522
	adds r0, r1, #1	@ 00050522 481c
.org 0x50524
	lsls r0, r0, #24	@ 00050524 0006
.org 0x50526
	lsrs r1, r0, #24	@ 00050526 010e
.org 0x50528
	cmp r1, #7	@ 00050528 0729
.org 0x5052a
	bls.n 0x5051e	@ 0005052a f8d9
.org 0x5052c
	movs r4, #150	@ 0005052c 9624
.org 0x5052e
	lsls r4, r4, #3	@ 0005052e e400
.org 0x50530
	ldr r5, [pc, #236]	@ 00050530 3b4d
.org 0x50532
	adds r0, r4, r5	@ 00050532 6019
.org 0x50534
	ldr r1, [pc, #236]	@ 00050534 3b49
.org 0x50536
	mov r9, r1	@ 00050536 8946
.org 0x50538
	adds r1, #120	@ 00050538 7831
.org 0x5053a
	ldrh r1, [r1, #0]	@ 0005053a 0988
.org 0x5053c
	ldrh r2, [r0, #6]	@ 0005053c c288
.org 0x5053e
	lsrs r2, r2, #6	@ 0005053e 9209
.org 0x50540
	subs r1, r1, r2	@ 00050540 891a
.org 0x50542
	lsls r1, r1, #5	@ 00050542 4901
.org 0x50544
	movs r2, #128	@ 00050544 8022
.org 0x50546
	lsls r2, r2, #9	@ 00050546 5202
.org 0x50548
	mov r8, r2	@ 00050548 9046
.org 0x5054a
	add r1, r8	@ 0005054a 4144
.org 0x5054c
	bl 0x1d30	@ 0005054c b1f7f0fb
.org 0x50550
	ldr r0, [pc, #212]	@ 00050550 3548
.org 0x50552
	adds r4, r4, r0	@ 00050552 2418
.org 0x50554
	ldr r1, [pc, #212]	@ 00050554 3549
.org 0x50556
	mov sl, r1	@ 00050556 8a46
.org 0x50558
	mov r0, sl	@ 00050558 5046
.org 0x5055a
	adds r0, #120	@ 0005055a 7830
.org 0x5055c
	ldrh r1, [r0, #0]	@ 0005055c 0188
.org 0x5055e
	ldrb r0, [r4, #7]	@ 0005055e e079
.org 0x50560
	subs r1, r1, r0	@ 00050560 091a
.org 0x50562
	lsls r1, r1, #5	@ 00050562 4901
.org 0x50564
	movs r6, #128	@ 00050564 8026
.org 0x50566
	lsls r6, r6, #2	@ 00050566 b600
.org 0x50568
	adds r1, r1, r6	@ 00050568 8919
.org 0x5056a
	adds r0, r4, #0	@ 0005056a 201c
.org 0x5056c
	bl 0x2208	@ 0005056c b1f74cfe
.org 0x50570
	ldr r4, [pc, #200]	@ 00050570 324c
.org 0x50572
	adds r0, r4, r5	@ 00050572 6019
.org 0x50574
	mov r1, r9	@ 00050574 4946
.org 0x50576
	adds r1, #122	@ 00050576 7a31
.org 0x50578
	ldrh r1, [r1, #0]	@ 00050578 0988
.org 0x5057a
	ldrh r2, [r0, #6]	@ 0005057a c288
.org 0x5057c
	lsrs r2, r2, #6	@ 0005057c 9209
.org 0x5057e
	subs r1, r1, r2	@ 0005057e 891a
.org 0x50580
	lsls r1, r1, #5	@ 00050580 4901
.org 0x50582
	add r1, r8	@ 00050582 4144
.org 0x50584
	bl 0x1d30	@ 00050584 b1f7d4fb
.org 0x50588
	ldr r2, [pc, #156]	@ 00050588 274a
.org 0x5058a
	adds r4, r4, r2	@ 0005058a a418
.org 0x5058c
	mov r0, sl	@ 0005058c 5046
.org 0x5058e
	adds r0, #122	@ 0005058e 7a30
.org 0x50590
	ldrh r1, [r0, #0]	@ 00050590 0188
.org 0x50592
	ldrb r0, [r4, #7]	@ 00050592 e079
.org 0x50594
	subs r1, r1, r0	@ 00050594 091a
.org 0x50596
	lsls r1, r1, #5	@ 00050596 4901
.org 0x50598
	adds r1, r1, r6	@ 00050598 8919
.org 0x5059a
	adds r0, r4, #0	@ 0005059a 201c
.org 0x5059c
	bl 0x2208	@ 0005059c b1f734fe
.org 0x505a0
	movs r4, #155	@ 000505a0 9b24
.org 0x505a2
	lsls r4, r4, #3	@ 000505a2 e400
.org 0x505a4
	adds r0, r4, r5	@ 000505a4 6019
.org 0x505a6
	mov r1, r9	@ 000505a6 4946
.org 0x505a8
	adds r1, #124	@ 000505a8 7c31
.org 0x505aa
	ldrh r1, [r1, #0]	@ 000505aa 0988
.org 0x505ac
	ldrh r2, [r0, #6]	@ 000505ac c288
.org 0x505ae
	lsrs r2, r2, #6	@ 000505ae 9209
.org 0x505b0
	subs r1, r1, r2	@ 000505b0 891a
.org 0x505b2
	lsls r1, r1, #5	@ 000505b2 4901
.org 0x505b4
	add r1, r8	@ 000505b4 4144
.org 0x505b6
	bl 0x1d30	@ 000505b6 b1f7bbfb
.org 0x505ba
	ldr r0, [pc, #108]	@ 000505ba 1b48
.org 0x505bc
	adds r4, r4, r0	@ 000505bc 2418
.org 0x505be
	mov r0, sl	@ 000505be 5046
.org 0x505c0
	adds r0, #124	@ 000505c0 7c30
.org 0x505c2
	ldrh r1, [r0, #0]	@ 000505c2 0188
.org 0x505c4
	ldrb r0, [r4, #7]	@ 000505c4 e079
.org 0x505c6
	subs r1, r1, r0	@ 000505c6 091a
.org 0x505c8
	lsls r1, r1, #5	@ 000505c8 4901
.org 0x505ca
	adds r1, r1, r6	@ 000505ca 8919
.org 0x505cc
	adds r0, r4, #0	@ 000505cc 201c
.org 0x505ce
	bl 0x2208	@ 000505ce b1f71bfe
.org 0x505d2
	ldr r4, [pc, #108]	@ 000505d2 1b4c
.org 0x505d4
	adds r5, r4, r5	@ 000505d4 6519
.org 0x505d6
	mov r0, r9	@ 000505d6 4846
.org 0x505d8
	adds r0, #126	@ 000505d8 7e30
.org 0x505da
	ldrh r1, [r0, #0]	@ 000505da 0188
.org 0x505dc
	ldrh r0, [r5, #6]	@ 000505dc e888
.org 0x505de
	lsrs r0, r0, #6	@ 000505de 8009
.org 0x505e0
	subs r1, r1, r0	@ 000505e0 091a
.org 0x505e2
	lsls r1, r1, #5	@ 000505e2 4901
.org 0x505e4
	add r1, r8	@ 000505e4 4144
.org 0x505e6
	adds r0, r5, #0	@ 000505e6 281c
.org 0x505e8
	bl 0x1d30	@ 000505e8 b1f7a2fb
.org 0x505ec
	ldr r1, [pc, #56]	@ 000505ec 0e49
.org 0x505ee
	adds r4, r4, r1	@ 000505ee 6418
.org 0x505f0
	mov r0, sl	@ 000505f0 5046
.org 0x505f2
	adds r0, #126	@ 000505f2 7e30
.org 0x505f4
	ldrh r1, [r0, #0]	@ 000505f4 0188
.org 0x505f6
	ldrb r0, [r4, #7]	@ 000505f6 e079
.org 0x505f8
	subs r1, r1, r0	@ 000505f8 091a
.org 0x505fa
	lsls r1, r1, #5	@ 000505fa 4901
.org 0x505fc
	adds r1, r1, r6	@ 000505fc 8919
.org 0x505fe
	adds r0, r4, #0	@ 000505fe 201c
.org 0x50600
	bl 0x2208	@ 00050600 b1f702fe
.org 0x50604
	ldr r1, [pc, #60]	@ 00050604 0f49
.org 0x50606
	ldrb r0, [r7, #9]	@ 00050606 787a
.org 0x50608
	lsls r0, r0, #2	@ 00050608 8000
.org 0x5060a
	adds r0, r0, r1	@ 0005060a 4018
.org 0x5060c
	movs r1, #1	@ 0005060c 0121
.org 0x5060e
	str r1, [r7, #12]	@ 0005060e f960
.org 0x50610
	ldr r0, [r0, #0]	@ 00050610 0068
.org 0x50612
	ldr r0, [r0, #4]	@ 00050612 4068
.org 0x50614
	str r0, [r7, #20]	@ 00050614 7861
.org 0x50616
	ldrb r0, [r7, #16]	@ 00050616 387c
.org 0x50618
	cmp r0, #0	@ 00050618 0028
.org 0x5061a
	beq.n 0x50648	@ 0005061a 15d0
.org 0x5061c
	strb r1, [r7, #13]	@ 0005061c 7973
.org 0x5061e
	b.n 0x5064a	@ 0005061e 14e0
.org 0x50620
	.byte 0x00,0x40,0xc4,0x08	@ 00050620 data
.org 0x50624
	.byte 0x40,0xe0,0x02,0x02	@ 00050624 data
.org 0x50628
	.byte 0x0c,0x40,0xc4,0x08	@ 00050628 data
.org 0x5062c
	.byte 0x40,0xde,0x02,0x02	@ 0005062c data
.org 0x50630
	.byte 0x54,0x7e,0x85,0x08	@ 00050630 data
.org 0x50634
	.byte 0x79,0x2f,0x05,0x08	@ 00050634 data
