@ FUN_0811842c  entry 0x0811842c  size 1250
.thumb
.org 0x11842c
FUN_0811842c:
	push {r4, r5, r6, r7, lr}	@ 0011842c f0b5
.org 0x11842e
	mov r7, sl	@ 0011842e 5746
.org 0x118430
	mov r6, r9	@ 00118430 4e46
.org 0x118432
	mov r5, r8	@ 00118432 4546
.org 0x118434
	push {r5, r6, r7}	@ 00118434 e0b4
.org 0x118436
	sub sp, #20	@ 00118436 85b0
.org 0x118438
	adds r7, r0, #0	@ 00118438 071c
.org 0x11843a
	ldr r1, [pc, #536]	@ 0011843a 8649
.org 0x11843c
	adds r0, r7, r1	@ 0011843c 7818
.org 0x11843e
	ldr r0, [r0, #0]	@ 0011843e 0068
.org 0x118440
	str r0, [sp, #4]	@ 00118440 0190
.org 0x118442
	ldr r2, [pc, #532]	@ 00118442 854a
.org 0x118444
	adds r0, r7, r2	@ 00118444 b818
.org 0x118446
	movs r4, #0	@ 00118446 0024
.org 0x118448
	strb r4, [r0, #0]	@ 00118448 0470
.org 0x11844a
	strb r4, [r0, #2]	@ 0011844a 8470
.org 0x11844c
	ldr r0, [pc, #524]	@ 0011844c 8348
.org 0x11844e
	ldr r1, [pc, #528]	@ 0011844e 8449
.org 0x118450
	ldrh r2, [r1, #0]	@ 00118450 0a88
.org 0x118452
	movs r1, #12	@ 00118452 0c21
.org 0x118454
	ands r1, r2	@ 00118454 1140
.org 0x118456
	lsls r1, r1, #12	@ 00118456 0903
.org 0x118458
	bl 0x1d30	@ 00118458 e9f66afc
.org 0x11845c
	ldr r0, [pc, #516]	@ 0011845c 8148
.org 0x11845e
	movs r1, #0	@ 0011845e 0021
.org 0x118460
	bl 0x2208	@ 00118460 e9f6d2fe
.org 0x118464
	ldr r3, [pc, #512]	@ 00118464 804b
.org 0x118466
	adds r3, r3, r7	@ 00118466 db19
.org 0x118468
	mov sl, r3	@ 00118468 9a46
.org 0x11846a
	ldr r1, [pc, #512]	@ 0011846a 8049
.org 0x11846c
	str r4, [sp, #0]	@ 0011846c 0094
.org 0x11846e
	mov r0, sl	@ 0011846e 5046
.org 0x118470
	movs r2, #20	@ 00118470 1422
.org 0x118472
	movs r3, #0	@ 00118472 0023
.org 0x118474
	bl 0x27b8	@ 00118474 eaf6a0f9
.org 0x118478
	mov r9, sl	@ 00118478 d146
.org 0x11847a
	ldr r0, [pc, #500]	@ 0011847a 7d48
.org 0x11847c
	ldr r2, [r0, #0]	@ 0011847c 0268
.org 0x11847e
	ldrb r6, [r2, #0]	@ 0011847e 1678
.org 0x118480
	adds r0, r6, #0	@ 00118480 301c
.org 0x118482
	adds r0, #192	@ 00118482 c030
.org 0x118484
	movs r1, #128	@ 00118484 8021
.org 0x118486
	lsls r1, r1, #6	@ 00118486 8901
.org 0x118488
	mov r8, r1	@ 00118488 8846
.org 0x11848a
	mov r3, r8	@ 0011848a 4346
.org 0x11848c
	orrs r0, r3	@ 0011848c 1843
.org 0x11848e
	mov r1, r9	@ 0011848e 4946
.org 0x118490
	strh r0, [r1, #24]	@ 00118490 0883
.org 0x118492
	movs r3, #243	@ 00118492 f323
.org 0x118494
	lsls r3, r3, #4	@ 00118494 1b01
.org 0x118496
	adds r1, r7, r3	@ 00118496 f918
.org 0x118498
	adds r0, r6, #0	@ 00118498 301c
.org 0x11849a
	adds r0, #224	@ 0011849a e030
.org 0x11849c
	mov r3, r8	@ 0011849c 4346
.org 0x11849e
	orrs r0, r3	@ 0011849e 1843
.org 0x1184a0
	strh r0, [r1, #0]	@ 001184a0 0880
.org 0x1184a2
	ldrb r1, [r2, #1]	@ 001184a2 5178
.org 0x1184a4
	movs r0, #6	@ 001184a4 0620
.org 0x1184a6
	subs r6, r0, r1	@ 001184a6 461a
.org 0x1184a8
	movs r0, #247	@ 001184a8 f720
.org 0x1184aa
	lsls r0, r0, #4	@ 001184aa 0001
.org 0x1184ac
	adds r1, r7, r0	@ 001184ac 3918
.org 0x1184ae
	adds r0, r6, #0	@ 001184ae 301c
.org 0x1184b0
	adds r0, #202	@ 001184b0 ca30
.org 0x1184b2
	orrs r0, r3	@ 001184b2 1843
.org 0x1184b4
	strh r0, [r1, #0]	@ 001184b4 0880
.org 0x1184b6
	movs r3, #251	@ 001184b6 fb23
.org 0x1184b8
	lsls r3, r3, #4	@ 001184b8 1b01
.org 0x1184ba
	adds r1, r7, r3	@ 001184ba f918
.org 0x1184bc
	adds r0, r6, #0	@ 001184bc 301c
.org 0x1184be
	adds r0, #234	@ 001184be ea30
.org 0x1184c0
	mov r3, r8	@ 001184c0 4346
.org 0x1184c2
	orrs r0, r3	@ 001184c2 1843
.org 0x1184c4
	strh r0, [r1, #0]	@ 001184c4 0880
.org 0x1184c6
	ldr r5, [r2, #8]	@ 001184c6 9568
.org 0x1184c8
	ldr r1, [pc, #424]	@ 001184c8 6a49
.org 0x1184ca
	adds r0, r5, #0	@ 001184ca 281c
.org 0x1184cc
	bl 0x129120	@ 001184cc 10f028fe
.org 0x1184d0
	adds r6, r0, #0	@ 001184d0 061c
.org 0x1184d2
	ldr r0, [pc, #420]	@ 001184d2 6948
.org 0x1184d4
	adds r1, r7, r0	@ 001184d4 3918
.org 0x1184d6
	adds r0, r6, #0	@ 001184d6 301c
.org 0x1184d8
	adds r0, #209	@ 001184d8 d130
.org 0x1184da
	mov r2, r8	@ 001184da 4246
.org 0x1184dc
	orrs r0, r2	@ 001184dc 1043
.org 0x1184de
	strh r0, [r1, #0]	@ 001184de 0880
.org 0x1184e0
	ldr r1, [pc, #408]	@ 001184e0 6649
.org 0x1184e2
	adds r0, r5, #0	@ 001184e2 281c
.org 0x1184e4
	bl 0x129120	@ 001184e4 10f01cfe
.org 0x1184e8
	movs r1, #10	@ 001184e8 0a21
.org 0x1184ea
	bl 0x129198	@ 001184ea 10f055fe
.org 0x1184ee
	adds r6, r0, #0	@ 001184ee 061c
.org 0x1184f0
	ldr r3, [pc, #396]	@ 001184f0 634b
.org 0x1184f2
	adds r1, r7, r3	@ 001184f2 f918
.org 0x1184f4
	adds r0, #209	@ 001184f4 d130
.org 0x1184f6
	mov r2, r8	@ 001184f6 4246
.org 0x1184f8
	orrs r0, r2	@ 001184f8 1043
.org 0x1184fa
	strh r0, [r1, #0]	@ 001184fa 0880
.org 0x1184fc
	movs r1, #225	@ 001184fc e121
.org 0x1184fe
	lsls r1, r1, #4	@ 001184fe 0901
.org 0x118500
	adds r0, r5, #0	@ 00118500 281c
.org 0x118502
	bl 0x129120	@ 00118502 10f00dfe
.org 0x118506
	movs r1, #60	@ 00118506 3c21
.org 0x118508
	bl 0x129198	@ 00118508 10f046fe
.org 0x11850c
	adds r4, r0, #0	@ 0011850c 041c
.org 0x11850e
	movs r1, #10	@ 0011850e 0a21
.org 0x118510
	bl 0x129120	@ 00118510 10f006fe
.org 0x118514
	adds r6, r0, #0	@ 00118514 061c
.org 0x118516
	ldr r3, [pc, #364]	@ 00118516 5b4b
.org 0x118518
	adds r1, r7, r3	@ 00118518 f918
.org 0x11851a
	adds r0, #209	@ 0011851a d130
.org 0x11851c
	mov r2, r8	@ 0011851c 4246
.org 0x11851e
	orrs r0, r2	@ 0011851e 1043
.org 0x118520
	strh r0, [r1, #0]	@ 00118520 0880
.org 0x118522
	adds r0, r4, #0	@ 00118522 201c
.org 0x118524
	movs r1, #10	@ 00118524 0a21
.org 0x118526
	bl 0x129198	@ 00118526 10f037fe
.org 0x11852a
	adds r6, r0, #0	@ 0011852a 061c
.org 0x11852c
	ldr r3, [pc, #344]	@ 0011852c 564b
.org 0x11852e
	adds r1, r7, r3	@ 0011852e f918
.org 0x118530
	adds r0, #209	@ 00118530 d130
.org 0x118532
	mov r2, r8	@ 00118532 4246
.org 0x118534
	orrs r0, r2	@ 00118534 1043
.org 0x118536
	strh r0, [r1, #0]	@ 00118536 0880
.org 0x118538
	adds r0, r5, #0	@ 00118538 281c
.org 0x11853a
	movs r1, #60	@ 0011853a 3c21
.org 0x11853c
	bl 0x129120	@ 0011853c 10f0f0fd
.org 0x118540
	movs r1, #60	@ 00118540 3c21
.org 0x118542
	bl 0x129198	@ 00118542 10f029fe
.org 0x118546
	adds r4, r0, #0	@ 00118546 041c
.org 0x118548
	movs r1, #10	@ 00118548 0a21
.org 0x11854a
	bl 0x129120	@ 0011854a 10f0e9fd
.org 0x11854e
	adds r6, r0, #0	@ 0011854e 061c
.org 0x118550
	ldr r3, [pc, #312]	@ 00118550 4e4b
.org 0x118552
	adds r1, r7, r3	@ 00118552 f918
.org 0x118554
	adds r0, #209	@ 00118554 d130
.org 0x118556
	mov r2, r8	@ 00118556 4246
.org 0x118558
	orrs r0, r2	@ 00118558 1043
.org 0x11855a
	strh r0, [r1, #0]	@ 0011855a 0880
.org 0x11855c
	adds r0, r4, #0	@ 0011855c 201c
.org 0x11855e
	movs r1, #10	@ 0011855e 0a21
.org 0x118560
	bl 0x129198	@ 00118560 10f01afe
.org 0x118564
	adds r6, r0, #0	@ 00118564 061c
.org 0x118566
	ldr r3, [pc, #296]	@ 00118566 4a4b
.org 0x118568
	adds r1, r7, r3	@ 00118568 f918
.org 0x11856a
	adds r0, #209	@ 0011856a d130
.org 0x11856c
	mov r2, r8	@ 0011856c 4246
.org 0x11856e
	orrs r0, r2	@ 0011856e 1043
.org 0x118570
	strh r0, [r1, #0]	@ 00118570 0880
.org 0x118572
	ldr r4, [sp, #4]	@ 00118572 019c
.org 0x118574
	adds r4, #180	@ 00118574 b434
.org 0x118576
	ldrh r1, [r4, #6]	@ 00118576 e188
.org 0x118578
	ldr r0, [pc, #280]	@ 00118578 4648
.org 0x11857a
	cmp r1, r0	@ 0011857a 8142
.org 0x11857c
	bls.n 0x1185a4	@ 0011857c 12d9
.org 0x11857e
	adds r0, r1, #0	@ 0011857e 081c
.org 0x118580
	movs r1, #250	@ 00118580 fa21
.org 0x118582
	lsls r1, r1, #2	@ 00118582 8900
.org 0x118584
	bl 0x129120	@ 00118584 10f0ccfd
.org 0x118588
	lsls r0, r0, #16	@ 00118588 0004
.org 0x11858a
	lsrs r0, r0, #16	@ 0011858a 000c
.org 0x11858c
	movs r1, #10	@ 0011858c 0a21
.org 0x11858e
	bl 0x129198	@ 0011858e 10f003fe
.org 0x118592
	lsls r0, r0, #16	@ 00118592 0004
.org 0x118594
	lsrs r6, r0, #16	@ 00118594 060c
.org 0x118596
	ldr r3, [pc, #256]	@ 00118596 404b
.org 0x118598
	adds r1, r7, r3	@ 00118598 f918
.org 0x11859a
	adds r0, r6, #0	@ 0011859a 301c
.org 0x11859c
	adds r0, #209	@ 0011859c d130
.org 0x11859e
	mov r2, r8	@ 0011859e 4246
.org 0x1185a0
	orrs r0, r2	@ 001185a0 1043
.org 0x1185a2
	strh r0, [r1, #0]	@ 001185a2 0880
.org 0x1185a4
	ldrh r0, [r4, #6]	@ 001185a4 e088
.org 0x1185a6
	cmp r0, #99	@ 001185a6 6328
.org 0x1185a8
	bls.n 0x1185cc	@ 001185a8 10d9
.org 0x1185aa
	movs r1, #100	@ 001185aa 6421
.org 0x1185ac
	bl 0x129120	@ 001185ac 10f0b8fd
.org 0x1185b0
	lsls r0, r0, #16	@ 001185b0 0004
.org 0x1185b2
	lsrs r0, r0, #16	@ 001185b2 000c
.org 0x1185b4
	movs r1, #10	@ 001185b4 0a21
.org 0x1185b6
	bl 0x129198	@ 001185b6 10f0effd
.org 0x1185ba
	lsls r0, r0, #16	@ 001185ba 0004
.org 0x1185bc
	lsrs r6, r0, #16	@ 001185bc 060c
.org 0x1185be
	ldr r3, [pc, #220]	@ 001185be 374b
.org 0x1185c0
	adds r1, r7, r3	@ 001185c0 f918
.org 0x1185c2
	adds r0, r6, #0	@ 001185c2 301c
.org 0x1185c4
	adds r0, #209	@ 001185c4 d130
.org 0x1185c6
	mov r2, r8	@ 001185c6 4246
.org 0x1185c8
	orrs r0, r2	@ 001185c8 1043
.org 0x1185ca
	strh r0, [r1, #0]	@ 001185ca 0880
.org 0x1185cc
	ldrh r0, [r4, #6]	@ 001185cc e088
.org 0x1185ce
	cmp r0, #9	@ 001185ce 0928
.org 0x1185d0
	bls.n 0x1185f4	@ 001185d0 10d9
.org 0x1185d2
	movs r1, #10	@ 001185d2 0a21
.org 0x1185d4
	bl 0x129120	@ 001185d4 10f0a4fd
.org 0x1185d8
	lsls r0, r0, #16	@ 001185d8 0004
.org 0x1185da
	lsrs r0, r0, #16	@ 001185da 000c
.org 0x1185dc
	movs r1, #10	@ 001185dc 0a21
.org 0x1185de
	bl 0x129198	@ 001185de 10f0dbfd
.org 0x1185e2
	lsls r0, r0, #16	@ 001185e2 0004
.org 0x1185e4
	lsrs r6, r0, #16	@ 001185e4 060c
.org 0x1185e6
	ldr r3, [pc, #184]	@ 001185e6 2e4b
.org 0x1185e8
	adds r1, r7, r3	@ 001185e8 f918
.org 0x1185ea
	adds r0, r6, #0	@ 001185ea 301c
.org 0x1185ec
	adds r0, #209	@ 001185ec d130
.org 0x1185ee
	mov r2, r8	@ 001185ee 4246
.org 0x1185f0
	orrs r0, r2	@ 001185f0 1043
.org 0x1185f2
	strh r0, [r1, #0]	@ 001185f2 0880
.org 0x1185f4
	ldrh r0, [r4, #6]	@ 001185f4 e088
.org 0x1185f6
	movs r1, #10	@ 001185f6 0a21
.org 0x1185f8
	bl 0x129198	@ 001185f8 10f0cefd
.org 0x1185fc
	lsls r0, r0, #16	@ 001185fc 0004
.org 0x1185fe
	lsrs r6, r0, #16	@ 001185fe 060c
.org 0x118600
	movs r3, #249	@ 00118600 f923
.org 0x118602
	lsls r3, r3, #4	@ 00118602 1b01
.org 0x118604
	adds r1, r7, r3	@ 00118604 f918
.org 0x118606
	adds r0, r6, #0	@ 00118606 301c
.org 0x118608
	adds r0, #209	@ 00118608 d130
.org 0x11860a
	mov r2, r8	@ 0011860a 4246
.org 0x11860c
	orrs r0, r2	@ 0011860c 1043
.org 0x11860e
	strh r0, [r1, #0]	@ 0011860e 0880
.org 0x118610
	adds r0, r7, #0	@ 00118610 381c
.org 0x118612
	bl 0x119a74	@ 00118612 01f02ffa
.org 0x118616
	ldr r0, [sp, #4]	@ 00118616 0198
.org 0x118618
	bl 0x2b62c	@ 00118618 13f708f8
.org 0x11861c
	lsls r0, r0, #24	@ 0011861c 0006
.org 0x11861e
	lsrs r0, r0, #24	@ 0011861e 000e
.org 0x118620
	cmp r0, #20	@ 00118620 1428
.org 0x118622
	bne.n 0x1186a8	@ 00118622 41d1
.org 0x118624
	str r4, [sp, #12]	@ 00118624 0394
.org 0x118626
	ldr r3, [sp, #4]	@ 00118626 019b
.org 0x118628
	adds r3, #188	@ 00118628 bc33
.org 0x11862a
	str r3, [sp, #16]	@ 0011862a 0493
.org 0x11862c
	mov r4, r8	@ 0011862c 4446
.org 0x11862e
	movs r3, #84	@ 0011862e 5423
.org 0x118630
	movs r2, #83	@ 00118630 5322
.org 0x118632
	ldr r0, [pc, #112]	@ 00118632 1c48
.org 0x118634
	adds r1, r7, r0	@ 00118634 3918
.org 0x118636
	movs r6, #1	@ 00118636 0126
.org 0x118638
	adds r0, r2, #0	@ 00118638 101c
.org 0x11863a
	orrs r0, r4	@ 0011863a 2043
.org 0x11863c
	strh r0, [r1, #0]	@ 0011863c 0880
.org 0x11863e
	adds r0, r3, #0	@ 0011863e 181c
.org 0x118640
	orrs r0, r4	@ 00118640 2043
.org 0x118642
	strh r0, [r1, #2]	@ 00118642 4880
.org 0x118644
	adds r3, #32	@ 00118644 2033
.org 0x118646
	adds r2, #32	@ 00118646 2032
.org 0x118648
	adds r1, #64	@ 00118648 4031
.org 0x11864a
	subs r6, #1	@ 0011864a 013e
.org 0x11864c
	cmp r6, #0	@ 0011864c 002e
.org 0x11864e
	bge.n 0x118638	@ 0011864e f3da
.org 0x118650
	b.n 0x1187a8	@ 00118650 aae0
.org 0x118652
	.byte 0x00	@ 00118652 data
.org 0x118653
	.byte 0x00	@ 00118653 data
.org 0x118654
	.byte 0xa8,0x63,0x00,0x00	@ 00118654 data
.org 0x118658
	.byte 0xcc,0x0d,0x00,0x00	@ 00118658 data
.org 0x11865c
	.byte 0x90,0xc1,0xb6,0x08	@ 0011865c data
.org 0x118660
	.byte 0x06,0x0a,0x00,0x02	@ 00118660 data
.org 0x118664
	.byte 0x9c,0xc1,0xb6,0x08	@ 00118664 data
.org 0x118668
	.byte 0xd8,0x0e,0x00,0x00	@ 00118668 data
.org 0x11866c
	.byte 0x00,0xc0,0xb2,0x08	@ 0011866c data
.org 0x118670
	.byte 0xe0,0xe8,0x02,0x02	@ 00118670 data
.org 0x118674
	.byte 0x80,0xf5,0x20,0x00	@ 00118674 data
.org 0x118678
	.byte 0x76,0x0f,0x00,0x00	@ 00118678 data
.org 0x11867c
	.byte 0xc0,0x4b,0x03,0x00	@ 0011867c data
.org 0x118680
	.byte 0x78,0x0f,0x00,0x00	@ 00118680 data
.org 0x118684
	.byte 0x7c,0x0f,0x00,0x00	@ 00118684 data
.org 0x118688
	.byte 0x7e,0x0f,0x00,0x00	@ 00118688 data
.org 0x11868c
	.byte 0x82,0x0f,0x00,0x00	@ 0011868c data
.org 0x118690
	.byte 0x84,0x0f,0x00,0x00	@ 00118690 data
.org 0x118694
	.byte 0xe7,0x03,0x00,0x00	@ 00118694 data
.org 0x118698
	.byte 0x8a,0x0f,0x00,0x00	@ 00118698 data
.org 0x11869c
	.byte 0x8c,0x0f,0x00,0x00	@ 0011869c data
.org 0x1186a0
	.byte 0x8e,0x0f,0x00,0x00	@ 001186a0 data
.org 0x1186a4
	.byte 0xea,0x0f,0x00,0x00	@ 001186a4 data
.org 0x1186a8
	ldr r0, [sp, #4]	@ 001186a8 0198
.org 0x1186aa
	bl 0x2b62c	@ 001186aa 12f7bfff
.org 0x1186ae
	lsls r0, r0, #24	@ 001186ae 0006
.org 0x1186b0
	lsrs r0, r0, #24	@ 001186b0 000e
.org 0x1186b2
	cmp r0, #24	@ 001186b2 1828
.org 0x1186b4
	bne.n 0x1186fc	@ 001186b4 22d1
.org 0x1186b6
	str r4, [sp, #12]	@ 001186b6 0394
.org 0x1186b8
	ldr r1, [sp, #4]	@ 001186b8 0199
.org 0x1186ba
	adds r1, #188	@ 001186ba bc31
.org 0x1186bc
	str r1, [sp, #16]	@ 001186bc 0491
.org 0x1186be
	movs r5, #84	@ 001186be 5425
.org 0x1186c0
	movs r4, #83	@ 001186c0 5324
.org 0x1186c2
	ldr r3, [pc, #52]	@ 001186c2 0d4b
.org 0x1186c4
	adds r2, r7, r3	@ 001186c4 fa18
.org 0x1186c6
	mov r3, r9	@ 001186c6 4b46
.org 0x1186c8
	movs r0, #139	@ 001186c8 8b20
.org 0x1186ca
	lsls r0, r0, #1	@ 001186ca 4000
.org 0x1186cc
	mov r9, r0	@ 001186cc 8146
.org 0x1186ce
	movs r6, #1	@ 001186ce 0126
.org 0x1186d0
	adds r0, r4, #0	@ 001186d0 201c
.org 0x1186d2
	mov r1, r8	@ 001186d2 4146
.org 0x1186d4
	orrs r0, r1	@ 001186d4 0843
.org 0x1186d6
	strh r0, [r2, #0]	@ 001186d6 1080
.org 0x1186d8
	strh r0, [r2, #2]	@ 001186d8 5080
.org 0x1186da
	adds r0, r3, #0	@ 001186da 181c
.org 0x1186dc
	add r0, r9	@ 001186dc 4844
.org 0x1186de
	mov sl, r0	@ 001186de 8246
.org 0x1186e0
	adds r0, r5, #0	@ 001186e0 281c
.org 0x1186e2
	orrs r0, r1	@ 001186e2 0843
.org 0x1186e4
	mov r1, sl	@ 001186e4 5146
.org 0x1186e6
	strh r0, [r1, #0]	@ 001186e6 0880
.org 0x1186e8
	adds r5, #32	@ 001186e8 2035
.org 0x1186ea
	adds r4, #32	@ 001186ea 2034
.org 0x1186ec
	adds r2, #64	@ 001186ec 4032
.org 0x1186ee
	adds r3, #64	@ 001186ee 4033
.org 0x1186f0
	subs r6, #1	@ 001186f0 013e
.org 0x1186f2
	cmp r6, #0	@ 001186f2 002e
.org 0x1186f4
	bge.n 0x1186d0	@ 001186f4 ecda
.org 0x1186f6
	b.n 0x1187a8	@ 001186f6 57e0
.org 0x1186f8
	.byte 0xea,0x0f,0x00,0x00	@ 001186f8 data
.org 0x1186fc
	ldr r0, [sp, #4]	@ 001186fc 0198
.org 0x1186fe
	bl 0x2b62c	@ 001186fe 12f795ff
.org 0x118702
	lsls r0, r0, #24	@ 00118702 0006
.org 0x118704
	lsrs r0, r0, #24	@ 00118704 000e
.org 0x118706
	cmp r0, #28	@ 00118706 1c28
.org 0x118708
	bne.n 0x118748	@ 00118708 1ed1
.org 0x11870a
	str r4, [sp, #12]	@ 0011870a 0394
.org 0x11870c
	ldr r2, [sp, #4]	@ 0011870c 019a
.org 0x11870e
	adds r2, #188	@ 0011870e bc32
.org 0x118710
	str r2, [sp, #16]	@ 00118710 0492
.org 0x118712
	mov r5, r8	@ 00118712 4546
.org 0x118714
	movs r4, #84	@ 00118714 5424
.org 0x118716
	movs r3, #83	@ 00118716 5323
.org 0x118718
	ldr r0, [pc, #40]	@ 00118718 0a48
.org 0x11871a
	adds r2, r7, r0	@ 0011871a 3a18
.org 0x11871c
	movs r6, #1	@ 0011871c 0126
.org 0x11871e
	adds r0, #2	@ 0011871e 0230
.org 0x118720
	adds r1, r7, r0	@ 00118720 3918
.org 0x118722
	adds r0, r3, #0	@ 00118722 181c
.org 0x118724
	orrs r0, r5	@ 00118724 2843
.org 0x118726
	strh r0, [r2, #0]	@ 00118726 1080
.org 0x118728
	strh r0, [r1, #0]	@ 00118728 0880
.org 0x11872a
	strh r0, [r1, #2]	@ 0011872a 4880
.org 0x11872c
	adds r0, r4, #0	@ 0011872c 201c
.org 0x11872e
	orrs r0, r5	@ 0011872e 2843
.org 0x118730
	strh r0, [r1, #4]	@ 00118730 8880
.org 0x118732
	adds r4, #32	@ 00118732 2034
.org 0x118734
	adds r3, #32	@ 00118734 2033
.org 0x118736
	adds r2, #64	@ 00118736 4032
.org 0x118738
	adds r1, #64	@ 00118738 4031
.org 0x11873a
	subs r6, #1	@ 0011873a 013e
.org 0x11873c
	cmp r6, #0	@ 0011873c 002e
.org 0x11873e
	bge.n 0x118722	@ 0011873e f0da
.org 0x118740
	b.n 0x1187a8	@ 00118740 32e0
.org 0x118742
	.byte 0x00	@ 00118742 data
.org 0x118743
	.byte 0x00	@ 00118743 data
.org 0x118744
	.byte 0xea,0x0f,0x00,0x00	@ 00118744 data
.org 0x118748
	ldr r0, [sp, #4]	@ 00118748 0198
.org 0x11874a
	bl 0x2b62c	@ 0011874a 12f76fff
.org 0x11874e
	lsls r0, r0, #24	@ 0011874e 0006
.org 0x118750
	lsrs r0, r0, #24	@ 00118750 000e
.org 0x118752
	str r4, [sp, #12]	@ 00118752 0394
.org 0x118754
	ldr r1, [sp, #4]	@ 00118754 0199
.org 0x118756
	adds r1, #188	@ 00118756 bc31
.org 0x118758
	str r1, [sp, #16]	@ 00118758 0491
.org 0x11875a
	cmp r0, #32	@ 0011875a 2028
.org 0x11875c
	bne.n 0x1187a8	@ 0011875c 24d1
.org 0x11875e
	mov r9, r8	@ 0011875e c146
.org 0x118760
	movs r2, #84	@ 00118760 5422
.org 0x118762
	mov r8, r2	@ 00118762 9046
.org 0x118764
	movs r5, #83	@ 00118764 5325
.org 0x118766
	ldr r3, [pc, #232]	@ 00118766 3a4b
.org 0x118768
	adds r4, r7, r3	@ 00118768 fc18
.org 0x11876a
	mov r3, sl	@ 0011876a 5346
.org 0x11876c
	movs r6, #1	@ 0011876c 0126
.org 0x11876e
	ldr r0, [pc, #228]	@ 0011876e 3948
.org 0x118770
	adds r2, r7, r0	@ 00118770 3a18
.org 0x118772
	adds r1, r5, #0	@ 00118772 291c
.org 0x118774
	mov r0, r9	@ 00118774 4846
.org 0x118776
	orrs r1, r0	@ 00118776 0143
.org 0x118778
	strh r1, [r4, #0]	@ 00118778 2180
.org 0x11877a
	strh r1, [r2, #0]	@ 0011877a 1180
.org 0x11877c
	strh r1, [r2, #2]	@ 0011877c 5180
.org 0x11877e
	movs r0, #140	@ 0011877e 8c20
.org 0x118780
	lsls r0, r0, #1	@ 00118780 4000
.org 0x118782
	strh r1, [r0, r3]	@ 00118782 c152
.org 0x118784
	movs r1, #141	@ 00118784 8d21
.org 0x118786
	lsls r1, r1, #1	@ 00118786 4900
.org 0x118788
	adds r1, r1, r3	@ 00118788 c918
.org 0x11878a
	mov sl, r1	@ 0011878a 8a46
.org 0x11878c
	mov r0, r8	@ 0011878c 4046
.org 0x11878e
	mov r1, r9	@ 0011878e 4946
.org 0x118790
	orrs r0, r1	@ 00118790 0843
.org 0x118792
	mov r1, sl	@ 00118792 5146
.org 0x118794
	strh r0, [r1, #0]	@ 00118794 0880
.org 0x118796
	movs r0, #32	@ 00118796 2020
.org 0x118798
	add r8, r0	@ 00118798 8044
.org 0x11879a
	adds r5, #32	@ 0011879a 2035
.org 0x11879c
	adds r4, #64	@ 0011879c 4034
.org 0x11879e
	adds r2, #64	@ 0011879e 4032
.org 0x1187a0
	adds r3, #64	@ 001187a0 4033
.org 0x1187a2
	subs r6, #1	@ 001187a2 013e
.org 0x1187a4
	cmp r6, #0	@ 001187a4 002e
.org 0x1187a6
	bge.n 0x118772	@ 001187a6 e4da
.org 0x1187a8
	movs r4, #130	@ 001187a8 8224
.org 0x1187aa
	lsls r4, r4, #3	@ 001187aa e400
.org 0x1187ac
	ldr r5, [pc, #168]	@ 001187ac 2a4d
.org 0x1187ae
	adds r0, r4, r5	@ 001187ae 6019
.org 0x1187b0
	ldr r1, [pc, #168]	@ 001187b0 2a49
.org 0x1187b2
	str r1, [sp, #8]	@ 001187b2 0291
.org 0x1187b4
	adds r1, #104	@ 001187b4 6831
.org 0x1187b6
	ldrh r1, [r1, #0]	@ 001187b6 0988
.org 0x1187b8
	ldrh r2, [r0, #6]	@ 001187b8 c288
.org 0x1187ba
	lsrs r2, r2, #6	@ 001187ba 9209
.org 0x1187bc
	subs r1, r1, r2	@ 001187bc 891a
.org 0x1187be
	lsls r1, r1, #5	@ 001187be 4901
.org 0x1187c0
	movs r2, #128	@ 001187c0 8022
.org 0x1187c2
	lsls r2, r2, #9	@ 001187c2 5202
.org 0x1187c4
	mov r9, r2	@ 001187c4 9146
.org 0x1187c6
	add r1, r9	@ 001187c6 4944
.org 0x1187c8
	bl 0x1d30	@ 001187c8 e9f6b2fa
.org 0x1187cc
	ldr r3, [pc, #144]	@ 001187cc 244b
.org 0x1187ce
	mov r8, r3	@ 001187ce 9846
.org 0x1187d0
	add r4, r8	@ 001187d0 4444
.org 0x1187d2
	ldr r0, [pc, #144]	@ 001187d2 2448
.org 0x1187d4
	mov sl, r0	@ 001187d4 8246
.org 0x1187d6
	adds r0, #104	@ 001187d6 6830
.org 0x1187d8
	ldrh r1, [r0, #0]	@ 001187d8 0188
.org 0x1187da
	ldrb r0, [r4, #7]	@ 001187da e079
.org 0x1187dc
	subs r1, r1, r0	@ 001187dc 091a
.org 0x1187de
	lsls r1, r1, #5	@ 001187de 4901
.org 0x1187e0
	movs r6, #128	@ 001187e0 8026
.org 0x1187e2
	lsls r6, r6, #2	@ 001187e2 b600
.org 0x1187e4
	adds r1, r1, r6	@ 001187e4 8919
.org 0x1187e6
	adds r0, r4, #0	@ 001187e6 201c
.org 0x1187e8
	bl 0x2208	@ 001187e8 e9f60efd
.org 0x1187ec
	ldr r4, [pc, #120]	@ 001187ec 1e4c
.org 0x1187ee
	adds r0, r4, r5	@ 001187ee 6019
.org 0x1187f0
	ldr r1, [sp, #8]	@ 001187f0 0299
.org 0x1187f2
	adds r1, #106	@ 001187f2 6a31
.org 0x1187f4
	ldrh r1, [r1, #0]	@ 001187f4 0988
.org 0x1187f6
	ldrh r2, [r0, #6]	@ 001187f6 c288
.org 0x1187f8
	lsrs r2, r2, #6	@ 001187f8 9209
.org 0x1187fa
	subs r1, r1, r2	@ 001187fa 891a
.org 0x1187fc
	lsls r1, r1, #5	@ 001187fc 4901
.org 0x1187fe
	add r1, r9	@ 001187fe 4944
.org 0x118800
	bl 0x1d30	@ 00118800 e9f696fa
.org 0x118804
	add r4, r8	@ 00118804 4444
.org 0x118806
	mov r0, sl	@ 00118806 5046
.org 0x118808
	adds r0, #106	@ 00118808 6a30
.org 0x11880a
	ldrh r1, [r0, #0]	@ 0011880a 0188
.org 0x11880c
	ldrb r0, [r4, #7]	@ 0011880c e079
.org 0x11880e
	subs r1, r1, r0	@ 0011880e 091a
.org 0x118810
	lsls r1, r1, #5	@ 00118810 4901
.org 0x118812
	adds r1, r1, r6	@ 00118812 8919
.org 0x118814
	adds r0, r4, #0	@ 00118814 201c
.org 0x118816
	bl 0x2208	@ 00118816 e9f6f7fc
.org 0x11881a
	movs r4, #135	@ 0011881a 8724
.org 0x11881c
	lsls r4, r4, #3	@ 0011881c e400
.org 0x11881e
	adds r5, r4, r5	@ 0011881e 6519
.org 0x118820
	ldr r0, [sp, #8]	@ 00118820 0298
.org 0x118822
	adds r0, #108	@ 00118822 6c30
.org 0x118824
	ldrh r1, [r0, #0]	@ 00118824 0188
.org 0x118826
	ldrh r0, [r5, #6]	@ 00118826 e888
.org 0x118828
	lsrs r0, r0, #6	@ 00118828 8009
.org 0x11882a
	subs r1, r1, r0	@ 0011882a 091a
.org 0x11882c
	lsls r1, r1, #5	@ 0011882c 4901
.org 0x11882e
	add r1, r9	@ 0011882e 4944
.org 0x118830
	adds r0, r5, #0	@ 00118830 281c
.org 0x118832
	bl 0x1d30	@ 00118832 e9f67dfa
.org 0x118836
	add r4, r8	@ 00118836 4444
.org 0x118838
	mov r0, sl	@ 00118838 5046
.org 0x11883a
	adds r0, #108	@ 0011883a 6c30
.org 0x11883c
	ldrh r1, [r0, #0]	@ 0011883c 0188
.org 0x11883e
	ldrb r0, [r4, #7]	@ 0011883e e079
.org 0x118840
	subs r1, r1, r0	@ 00118840 091a
.org 0x118842
	lsls r1, r1, #5	@ 00118842 4901
.org 0x118844
	adds r1, r1, r6	@ 00118844 8919
.org 0x118846
	adds r0, r4, #0	@ 00118846 201c
.org 0x118848
	bl 0x2208	@ 00118848 e9f6defc
.org 0x11884c
	movs r6, #0	@ 0011884c 0026
.org 0x11884e
	b.n 0x11887a	@ 0011884e 14e0
.org 0x118850
	.byte 0xea,0x0f,0x00,0x00	@ 00118850 data
.org 0x118854
	.byte 0xec,0x0f,0x00,0x00	@ 00118854 data
.org 0x118858
	.byte 0x00,0x40,0xc4,0x08	@ 00118858 data
.org 0x11885c
	.byte 0x40,0xe0,0x02,0x02	@ 0011885c data
.org 0x118860
	.byte 0x0c,0x40,0xc4,0x08	@ 00118860 data
.org 0x118864
	.byte 0x40,0xde,0x02,0x02	@ 00118864 data
.org 0x118868
	.byte 0x24,0x04,0x00,0x00	@ 00118868 data
.org 0x11886c
	lsls r1, r6, #24	@ 0011886c 3106
.org 0x11886e
	lsrs r1, r1, #24	@ 0011886e 090e
.org 0x118870
	adds r0, r7, #0	@ 00118870 381c
.org 0x118872
	movs r2, #0	@ 00118872 0022
.org 0x118874
	bl 0x10a23c	@ 00118874 f1f7e2fc
.org 0x118878
	adds r6, #1	@ 00118878 0136
.org 0x11887a
	ldr r0, [sp, #4]	@ 0011887a 0198
.org 0x11887c
	bl 0x2b62c	@ 0011887c 12f7d6fe
.org 0x118880
	lsls r0, r0, #24	@ 00118880 0006
.org 0x118882
	lsrs r0, r0, #26	@ 00118882 800e
.org 0x118884
	cmp r6, r0	@ 00118884 8642
.org 0x118886
	blt.n 0x11886c	@ 00118886 f1db
.org 0x118888
	adds r0, r7, #0	@ 00118888 381c
.org 0x11888a
	movs r1, #0	@ 0011888a 0021
.org 0x11888c
	movs r2, #0	@ 0011888c 0022
.org 0x11888e
	bl 0x10a410	@ 0011888e f1f7bffd
.org 0x118892
	adds r0, r7, #0	@ 00118892 381c
.org 0x118894
	movs r1, #1	@ 00118894 0121
.org 0x118896
	movs r2, #0	@ 00118896 0022
.org 0x118898
	bl 0x10a410	@ 00118898 f1f7bafd
.org 0x11889c
	adds r0, r7, #0	@ 0011889c 381c
.org 0x11889e
	bl 0x119944	@ 0011889e 01f051f8
.org 0x1188a2
	lsls r0, r0, #24	@ 001188a2 0006
.org 0x1188a4
	cmp r0, #0	@ 001188a4 0028
.org 0x1188a6
	beq.n 0x1188b2	@ 001188a6 04d0
.org 0x1188a8
	adds r0, r7, #0	@ 001188a8 381c
.org 0x1188aa
	movs r1, #2	@ 001188aa 0221
.org 0x1188ac
	movs r2, #0	@ 001188ac 0022
.org 0x1188ae
	bl 0x10a410	@ 001188ae f1f7affd
.org 0x1188b2
	adds r0, r7, #0	@ 001188b2 381c
.org 0x1188b4
	bl 0x119978	@ 001188b4 01f060f8
.org 0x1188b8
	lsls r0, r0, #24	@ 001188b8 0006
.org 0x1188ba
	cmp r0, #0	@ 001188ba 0028
.org 0x1188bc
	beq.n 0x1188c8	@ 001188bc 04d0
.org 0x1188be
	adds r0, r7, #0	@ 001188be 381c
.org 0x1188c0
	movs r1, #3	@ 001188c0 0321
.org 0x1188c2
	movs r2, #0	@ 001188c2 0022
.org 0x1188c4
	bl 0x10a410	@ 001188c4 f1f7a4fd
.org 0x1188c8
	adds r0, r7, #0	@ 001188c8 381c
.org 0x1188ca
	movs r1, #4	@ 001188ca 0421
.org 0x1188cc
	movs r2, #0	@ 001188cc 0022
.org 0x1188ce
	bl 0x10a410	@ 001188ce f1f79ffd
.org 0x1188d2
	adds r0, r7, #0	@ 001188d2 381c
.org 0x1188d4
	movs r1, #0	@ 001188d4 0021
.org 0x1188d6
	movs r2, #0	@ 001188d6 0022
.org 0x1188d8
	bl 0x10a5f0	@ 001188d8 f1f78afe
.org 0x1188dc
	adds r0, r7, #0	@ 001188dc 381c
.org 0x1188de
	movs r1, #0	@ 001188de 0021
.org 0x1188e0
	movs r2, #1	@ 001188e0 0122
.org 0x1188e2
	bl 0x10a5f0	@ 001188e2 f1f785fe
.org 0x1188e6
	movs r6, #0	@ 001188e6 0026
.org 0x1188e8
	ldr r2, [sp, #12]	@ 001188e8 039a
.org 0x1188ea
	ldrh r1, [r2, #22]	@ 001188ea d18a
.org 0x1188ec
	movs r0, #1	@ 001188ec 0120
.org 0x1188ee
	lsls r0, r6	@ 001188ee b040
.org 0x1188f0
	ands r1, r0	@ 001188f0 0140
.org 0x1188f2
	asrs r1, r6	@ 001188f2 3141
.org 0x1188f4
	cmp r1, #0	@ 001188f4 0029
.org 0x1188f6
	beq.n 0x118904	@ 001188f6 05d0
.org 0x1188f8
	lsls r2, r6, #24	@ 001188f8 3206
.org 0x1188fa
	lsrs r2, r2, #24	@ 001188fa 120e
.org 0x1188fc
	adds r0, r7, #0	@ 001188fc 381c
.org 0x1188fe
	movs r1, #2	@ 001188fe 0221
.org 0x118900
	bl 0x10a5f0	@ 00118900 f1f776fe
.org 0x118904
	adds r6, #1	@ 00118904 0136
.org 0x118906
	cmp r6, #7	@ 00118906 072e
.org 0x118908
	ble.n 0x1188e8	@ 00118908 eedd
.org 0x11890a
	movs r6, #0	@ 0011890a 0026
.org 0x11890c
	ldr r3, [sp, #16]	@ 0011890c 049b
