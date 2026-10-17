@ FUN_08109480  entry 0x08109480  size 1010
.thumb
.org 0x109480
FUN_08109480:
	push {r4, r5, r6, r7, lr}	@ 00109480 f0b5
.org 0x109482
	mov r7, sl	@ 00109482 5746
.org 0x109484
	mov r6, r9	@ 00109484 4e46
.org 0x109486
	mov r5, r8	@ 00109486 4546
.org 0x109488
	push {r5, r6, r7}	@ 00109488 e0b4
.org 0x10948a
	adds r4, r0, #0	@ 0010948a 041c
.org 0x10948c
	ldr r7, [r4, #40]	@ 0010948c a76a
.org 0x10948e
	adds r0, r7, #0	@ 0010948e 381c
.org 0x109490
	adds r0, #241	@ 00109490 f130
.org 0x109492
	ldrb r2, [r0, #0]	@ 00109492 0278
.org 0x109494
	adds r0, #1	@ 00109494 0130
.org 0x109496
	ldrb r1, [r0, #0]	@ 00109496 0178
.org 0x109498
	cmp r2, r1	@ 00109498 8a42
.org 0x10949a
	bcs.n 0x10949e	@ 0010949a 00d2
.org 0x10949c
	ldrb r2, [r0, #0]	@ 0010949c 0278
.org 0x10949e
	adds r0, r7, #0	@ 0010949e 381c
.org 0x1094a0
	adds r0, #243	@ 001094a0 f330
.org 0x1094a2
	ldrb r3, [r0, #0]	@ 001094a2 0378
.org 0x1094a4
	cmp r2, r3	@ 001094a4 9a42
.org 0x1094a6
	bcs.n 0x1094aa	@ 001094a6 00d2
.org 0x1094a8
	ldrb r2, [r0, #0]	@ 001094a8 0278
.org 0x1094aa
	ldrb r1, [r4, #30]	@ 001094aa a17f
.org 0x1094ac
	lsls r1, r1, #8	@ 001094ac 0902
.org 0x1094ae
	adds r0, r4, #0	@ 001094ae 201c
.org 0x1094b0
	adds r0, #112	@ 001094b0 7030
.org 0x1094b2
	ldrb r0, [r0, #0]	@ 001094b2 0078
.org 0x1094b4
	orrs r1, r0	@ 001094b4 0143
.org 0x1094b6
	movs r0, #148	@ 001094b6 9420
.org 0x1094b8
	lsls r0, r0, #8	@ 001094b8 0002
.org 0x1094ba
	adds r0, r2, r0	@ 001094ba 1018
.org 0x1094bc
	cmp r1, r0	@ 001094bc 8142
.org 0x1094be
	beq.n 0x1094ca	@ 001094be 04d0
.org 0x1094c0
	lsls r1, r0, #16	@ 001094c0 0104
.org 0x1094c2
	lsrs r1, r1, #16	@ 001094c2 090c
.org 0x1094c4
	adds r0, r4, #0	@ 001094c4 201c
.org 0x1094c6
	bl 0x1cf00	@ 001094c6 13f71bfd
.org 0x1094ca
	adds r0, r4, #0	@ 001094ca 201c
.org 0x1094cc
	bl 0x1cff0	@ 001094cc 13f790fd
.org 0x1094d0
	ldr r0, [pc, #72]	@ 001094d0 1248
.org 0x1094d2
	ldrb r2, [r0, #0]	@ 001094d2 0278
.org 0x1094d4
	cmp r2, #0	@ 001094d4 002a
.org 0x1094d6
	beq.n 0x1094da	@ 001094d6 00d0
.org 0x1094d8
	b.n 0x109892	@ 001094d8 dbe1
.org 0x1094da
	ldr r1, [pc, #68]	@ 001094da 1149
.org 0x1094dc
	adds r0, r7, r1	@ 001094dc 7818
.org 0x1094de
	ldrb r0, [r0, #0]	@ 001094de 0078
.org 0x1094e0
	cmp r0, #0	@ 001094e0 0028
.org 0x1094e2
	beq.n 0x109528	@ 001094e2 21d0
.org 0x1094e4
	ldrb r1, [r4, #10]	@ 001094e4 a17a
.org 0x1094e6
	movs r0, #254	@ 001094e6 fe20
.org 0x1094e8
	ands r0, r1	@ 001094e8 0840
.org 0x1094ea
	movs r1, #253	@ 001094ea fd21
.org 0x1094ec
	ands r0, r1	@ 001094ec 0840
.org 0x1094ee
	strb r0, [r4, #10]	@ 001094ee a072
.org 0x1094f0
	adds r0, r4, #0	@ 001094f0 201c
.org 0x1094f2
	adds r0, #140	@ 001094f2 8c30
.org 0x1094f4
	str r2, [r0, #0]	@ 001094f4 0260
.org 0x1094f6
	adds r0, #4	@ 001094f6 0430
.org 0x1094f8
	str r2, [r0, #0]	@ 001094f8 0260
.org 0x1094fa
	adds r0, #4	@ 001094fa 0430
.org 0x1094fc
	strb r2, [r0, #0]	@ 001094fc 0270
.org 0x1094fe
	ldrb r1, [r4, #10]	@ 001094fe a17a
.org 0x109500
	movs r0, #251	@ 00109500 fb20
.org 0x109502
	ands r0, r1	@ 00109502 0840
.org 0x109504
	strb r0, [r4, #10]	@ 00109504 a072
.org 0x109506
	ldr r1, [pc, #28]	@ 00109506 0749
.org 0x109508
	ldrb r0, [r4, #9]	@ 00109508 607a
.org 0x10950a
	lsls r0, r0, #2	@ 0010950a 8000
.org 0x10950c
	adds r0, r0, r1	@ 0010950c 4018
.org 0x10950e
	movs r1, #3	@ 0010950e 0321
.org 0x109510
	str r1, [r4, #12]	@ 00109510 e160
.org 0x109512
	ldr r0, [r0, #0]	@ 00109512 0068
.org 0x109514
	ldr r0, [r0, #12]	@ 00109514 c068
.org 0x109516
	str r0, [r4, #20]	@ 00109516 6061
.org 0x109518
	b.n 0x109892	@ 00109518 bbe1
.org 0x10951a
	.byte 0x00	@ 0010951a data
.org 0x10951b
	.byte 0x00	@ 0010951b data
.org 0x10951c
	.byte 0x00,0xdc,0x02,0x02	@ 0010951c data
.org 0x109520
	.byte 0x79,0x02,0x00,0x00	@ 00109520 data
.org 0x109524
	.byte 0xb0,0xc8,0x86,0x08	@ 00109524 data
.org 0x109528
	adds r0, r7, #0	@ 00109528 381c
.org 0x10952a
	adds r0, #140	@ 0010952a 8c30
.org 0x10952c
	ldr r0, [r0, #0]	@ 0010952c 0068
.org 0x10952e
	movs r1, #128	@ 0010952e 8021
.org 0x109530
	lsls r1, r1, #2	@ 00109530 8900
.org 0x109532
	ands r0, r1	@ 00109532 0840
.org 0x109534
	cmp r0, #0	@ 00109534 0028
.org 0x109536
	bne.n 0x109544	@ 00109536 05d1
.org 0x109538
	adds r0, r7, #0	@ 00109538 381c
.org 0x10953a
	adds r0, #164	@ 0010953a a430
.org 0x10953c
	movs r2, #0	@ 0010953c 0022
.org 0x10953e
	ldrsh r0, [r0, r2]	@ 0010953e 805e
.org 0x109540
	cmp r0, #0	@ 00109540 0028
.org 0x109542
	bne.n 0x10955c	@ 00109542 0bd1
.org 0x109544
	ldr r1, [pc, #16]	@ 00109544 0449
.org 0x109546
	ldrb r0, [r4, #9]	@ 00109546 607a
.org 0x109548
	lsls r0, r0, #2	@ 00109548 8000
.org 0x10954a
	adds r0, r0, r1	@ 0010954a 4018
.org 0x10954c
	movs r1, #2	@ 0010954c 0221
.org 0x10954e
	str r1, [r4, #12]	@ 0010954e e160
.org 0x109550
	ldr r0, [r0, #0]	@ 00109550 0068
.org 0x109552
	ldr r0, [r0, #8]	@ 00109552 8068
.org 0x109554
	str r0, [r4, #20]	@ 00109554 6061
.org 0x109556
	b.n 0x109892	@ 00109556 9ce1
.org 0x109558
	.byte 0xb0,0xc8,0x86,0x08	@ 00109558 data
.org 0x10955c
	ldrb r1, [r7, #10]	@ 0010955c b97a
.org 0x10955e
	movs r0, #16	@ 0010955e 1020
.org 0x109560
	ands r0, r1	@ 00109560 0840
.org 0x109562
	cmp r0, #0	@ 00109562 0028
.org 0x109564
	beq.n 0x10959a	@ 00109564 19d0
.org 0x109566
	adds r0, r4, #0	@ 00109566 201c
.org 0x109568
	adds r0, #190	@ 00109568 be30
.org 0x10956a
	ldrb r1, [r0, #0]	@ 0010956a 0178
.org 0x10956c
	mov sl, r0	@ 0010956c 8246
.org 0x10956e
	cmp r1, #0	@ 0010956e 0029
.org 0x109570
	beq.n 0x10958e	@ 00109570 0dd0
.org 0x109572
	adds r3, r4, #0	@ 00109572 231c
.org 0x109574
	adds r3, #180	@ 00109574 b433
.org 0x109576
	ldr r0, [r3, #0]	@ 00109576 1868
.org 0x109578
	movs r1, #216	@ 00109578 d821
.org 0x10957a
	lsls r1, r1, #5	@ 0010957a 4901
.org 0x10957c
	adds r0, r0, r1	@ 0010957c 4018
.org 0x10957e
	ldr r1, [r7, #84]	@ 0010957e 796d
.org 0x109580
	subs r6, r1, r0	@ 00109580 0e1a
.org 0x109582
	adds r2, r4, #0	@ 00109582 221c
.org 0x109584
	adds r2, #184	@ 00109584 b832
.org 0x109586
	ldr r0, [r2, #0]	@ 00109586 1068
.org 0x109588
	movs r1, #152	@ 00109588 9821
.org 0x10958a
	lsls r1, r1, #5	@ 0010958a 4901
.org 0x10958c
	b.n 0x1095dc	@ 0010958c 26e0
.org 0x10958e
	adds r3, r4, #0	@ 0010958e 231c
.org 0x109590
	adds r3, #180	@ 00109590 b433
.org 0x109592
	ldr r0, [r3, #0]	@ 00109592 1868
.org 0x109594
	movs r2, #208	@ 00109594 d022
.org 0x109596
	lsls r2, r2, #4	@ 00109596 1201
.org 0x109598
	b.n 0x1095cc	@ 00109598 18e0
.org 0x10959a
	adds r0, r4, #0	@ 0010959a 201c
.org 0x10959c
	adds r0, #190	@ 0010959c be30
.org 0x10959e
	ldrb r1, [r0, #0]	@ 0010959e 0178
.org 0x1095a0
	mov sl, r0	@ 001095a0 8246
.org 0x1095a2
	cmp r1, #0	@ 001095a2 0029
.org 0x1095a4
	beq.n 0x1095c4	@ 001095a4 0ed0
.org 0x1095a6
	adds r3, r4, #0	@ 001095a6 231c
.org 0x1095a8
	adds r3, #180	@ 001095a8 b433
.org 0x1095aa
	ldr r0, [r3, #0]	@ 001095aa 1868
.org 0x1095ac
	ldr r2, [pc, #16]	@ 001095ac 044a
.org 0x1095ae
	adds r0, r0, r2	@ 001095ae 8018
.org 0x1095b0
	ldr r1, [r7, #84]	@ 001095b0 796d
.org 0x1095b2
	subs r6, r1, r0	@ 001095b2 0e1a
.org 0x1095b4
	adds r2, r4, #0	@ 001095b4 221c
.org 0x1095b6
	adds r2, #184	@ 001095b6 b832
.org 0x1095b8
	ldr r0, [r2, #0]	@ 001095b8 1068
.org 0x1095ba
	movs r1, #152	@ 001095ba 9821
.org 0x1095bc
	lsls r1, r1, #5	@ 001095bc 4901
.org 0x1095be
	b.n 0x1095dc	@ 001095be 0de0
.org 0x1095c0
	.byte 0x00,0xe5,0xff,0xff	@ 001095c0 data
.org 0x1095c4
	adds r3, r4, #0	@ 001095c4 231c
.org 0x1095c6
	adds r3, #180	@ 001095c6 b433
.org 0x1095c8
	ldr r0, [r3, #0]	@ 001095c8 1868
.org 0x1095ca
	ldr r2, [pc, #88]	@ 001095ca 164a
.org 0x1095cc
	adds r0, r0, r2	@ 001095cc 8018
.org 0x1095ce
	ldr r1, [r7, #84]	@ 001095ce 796d
.org 0x1095d0
	subs r6, r1, r0	@ 001095d0 0e1a
.org 0x1095d2
	adds r2, r4, #0	@ 001095d2 221c
.org 0x1095d4
	adds r2, #184	@ 001095d4 b832
.org 0x1095d6
	ldr r0, [r2, #0]	@ 001095d6 1068
.org 0x1095d8
	movs r1, #164	@ 001095d8 a421
.org 0x1095da
	lsls r1, r1, #6	@ 001095da 8901
.org 0x1095dc
	adds r0, r0, r1	@ 001095dc 4018
.org 0x1095de
	ldr r1, [r7, #88]	@ 001095de b96d
.org 0x1095e0
	subs r5, r1, r0	@ 001095e0 0d1a
.org 0x1095e2
	mov r8, r3	@ 001095e2 9846
.org 0x1095e4
	mov r9, r2	@ 001095e4 9146
.org 0x1095e6
	adds r0, r6, #0	@ 001095e6 301c
.org 0x1095e8
	adds r1, r5, #0	@ 001095e8 291c
.org 0x1095ea
	bl 0x10d338	@ 001095ea 03f0a5fe
.org 0x1095ee
	lsls r0, r0, #24	@ 001095ee 0006
.org 0x1095f0
	lsrs r2, r0, #24	@ 001095f0 020e
.org 0x1095f2
	adds r1, r6, #0	@ 001095f2 311c
.org 0x1095f4
	cmp r6, #0	@ 001095f4 002e
.org 0x1095f6
	bge.n 0x1095fa	@ 001095f6 00da
.org 0x1095f8
	negs r1, r6	@ 001095f8 7142
.org 0x1095fa
	adds r0, r5, #0	@ 001095fa 281c
.org 0x1095fc
	cmp r5, #0	@ 001095fc 002d
.org 0x1095fe
	bge.n 0x109602	@ 001095fe 00da
.org 0x109600
	negs r0, r5	@ 00109600 6842
.org 0x109602
	cmp r1, r0	@ 00109602 8142
.org 0x109604
	ble.n 0x10962c	@ 00109604 12dd
.org 0x109606
	adds r1, r6, #0	@ 00109606 311c
.org 0x109608
	cmp r1, #0	@ 00109608 0029
.org 0x10960a
	bge.n 0x10960e	@ 0010960a 00da
.org 0x10960c
	negs r1, r1	@ 0010960c 4942
.org 0x10960e
	movs r0, #128	@ 0010960e 8020
.org 0x109610
	lsls r0, r0, #4	@ 00109610 0001
.org 0x109612
	cmp r1, r0	@ 00109612 8142
.org 0x109614
	ble.n 0x109650	@ 00109614 1cdd
.org 0x109616
	ldr r1, [r4, #92]	@ 00109616 e16d
.org 0x109618
	ldr r0, [pc, #12]	@ 00109618 0348
.org 0x10961a
	cmp r1, r0	@ 0010961a 8142
.org 0x10961c
	bgt.n 0x109662	@ 0010961c 21dc
.org 0x10961e
	adds r0, r1, #0	@ 0010961e 081c
.org 0x109620
	adds r0, #64	@ 00109620 4030
.org 0x109622
	b.n 0x109660	@ 00109622 1de0
.org 0x109624
	.byte 0x00,0xf3,0xff,0xff	@ 00109624 data
.org 0x109628
	.byte 0xff,0x05,0x00,0x00	@ 00109628 data
.org 0x10962c
	adds r1, r5, #0	@ 0010962c 291c
.org 0x10962e
	cmp r1, #0	@ 0010962e 0029
.org 0x109630
	bge.n 0x109634	@ 00109630 00da
.org 0x109632
	negs r1, r1	@ 00109632 4942
.org 0x109634
	movs r0, #128	@ 00109634 8020
.org 0x109636
	lsls r0, r0, #4	@ 00109636 0001
.org 0x109638
	cmp r1, r0	@ 00109638 8142
.org 0x10963a
	ble.n 0x109650	@ 0010963a 09dd
.org 0x10963c
	ldr r1, [r4, #92]	@ 0010963c e16d
.org 0x10963e
	ldr r0, [pc, #12]	@ 0010963e 0348
.org 0x109640
	cmp r1, r0	@ 00109640 8142
.org 0x109642
	bgt.n 0x109662	@ 00109642 0edc
.org 0x109644
	adds r0, r1, #0	@ 00109644 081c
.org 0x109646
	adds r0, #64	@ 00109646 4030
.org 0x109648
	b.n 0x109660	@ 00109648 0ae0
.org 0x10964a
	.byte 0x00	@ 0010964a data
.org 0x10964b
	.byte 0x00	@ 0010964b data
.org 0x10964c
	.byte 0xff,0x05,0x00,0x00	@ 0010964c data
.org 0x109650
	ldr r0, [r4, #92]	@ 00109650 e06d
.org 0x109652
	movs r1, #128	@ 00109652 8021
.org 0x109654
	lsls r1, r1, #2	@ 00109654 8900
.org 0x109656
	cmp r0, r1	@ 00109656 8842
.org 0x109658
	ble.n 0x10965c	@ 00109658 00dd
.org 0x10965a
	str r1, [r4, #92]	@ 0010965a e165
.org 0x10965c
	ldr r0, [r4, #92]	@ 0010965c e06d
.org 0x10965e
	subs r0, #32	@ 0010965e 2038
.org 0x109660
	str r0, [r4, #92]	@ 00109660 e065
.org 0x109662
	ldr r0, [r4, #92]	@ 00109662 e06d
.org 0x109664
	cmp r0, #0	@ 00109664 0028
.org 0x109666
	bge.n 0x10966c	@ 00109666 01da
.org 0x109668
	movs r0, #0	@ 00109668 0020
.org 0x10966a
	str r0, [r4, #92]	@ 0010966a e065
.org 0x10966c
	mov r6, r8	@ 0010966c 4646
.org 0x10966e
	ldr r3, [pc, #124]	@ 0010966e 1f4b
.org 0x109670
	mov ip, r3	@ 00109670 9c46
.org 0x109672
	adds r0, r2, #0	@ 00109672 101c
.org 0x109674
	adds r0, #64	@ 00109674 4030
.org 0x109676
	lsls r0, r0, #24	@ 00109676 0006
.org 0x109678
	lsrs r0, r0, #23	@ 00109678 c00d
.org 0x10967a
	add r0, ip	@ 0010967a 6044
.org 0x10967c
	movs r3, #0	@ 0010967c 0023
.org 0x10967e
	ldrsh r1, [r0, r3]	@ 0010967e c15e
.org 0x109680
	ldr r0, [r4, #92]	@ 00109680 e06d
.org 0x109682
	muls r1, r0	@ 00109682 4143
.org 0x109684
	asrs r1, r1, #8	@ 00109684 0912
.org 0x109686
	ldr r0, [r6, #0]	@ 00109686 3068
.org 0x109688
	adds r0, r0, r1	@ 00109688 4018
.org 0x10968a
	str r0, [r6, #0]	@ 0010968a 3060
.org 0x10968c
	mov r5, r9	@ 0010968c 4d46
.org 0x10968e
	lsls r0, r2, #1	@ 0010968e 5000
.org 0x109690
	add r0, ip	@ 00109690 6044
.org 0x109692
	movs r2, #0	@ 00109692 0022
.org 0x109694
	ldrsh r1, [r0, r2]	@ 00109694 815e
.org 0x109696
	ldr r0, [r4, #92]	@ 00109696 e06d
.org 0x109698
	muls r1, r0	@ 00109698 4143
.org 0x10969a
	asrs r1, r1, #8	@ 0010969a 0912
.org 0x10969c
	ldr r0, [r5, #0]	@ 0010969c 2868
.org 0x10969e
	adds r0, r0, r1	@ 0010969e 4018
.org 0x1096a0
	str r0, [r5, #0]	@ 001096a0 2860
.org 0x1096a2
	adds r1, r4, #0	@ 001096a2 211c
.org 0x1096a4
	adds r1, #188	@ 001096a4 bc31
.org 0x1096a6
	ldrb r2, [r1, #0]	@ 001096a6 0a78
.org 0x1096a8
	adds r3, r2, #1	@ 001096a8 531c
.org 0x1096aa
	adds r0, r3, #0	@ 001096aa 181c
.org 0x1096ac
	asrs r0, r0, #5	@ 001096ac 4011
.org 0x1096ae
	lsls r0, r0, #5	@ 001096ae 4001
.org 0x1096b0
	subs r0, r3, r0	@ 001096b0 181a
.org 0x1096b2
	strb r0, [r1, #0]	@ 001096b2 0870
.org 0x1096b4
	ldrb r3, [r1, #0]	@ 001096b4 0b78
.org 0x1096b6
	lsls r2, r3, #3	@ 001096b6 da00
.org 0x1096b8
	mov r1, sl	@ 001096b8 5146
.org 0x1096ba
	ldrb r0, [r1, #0]	@ 001096ba 0878
.org 0x1096bc
	cmp r0, #0	@ 001096bc 0028
.org 0x1096be
	beq.n 0x1096f0	@ 001096be 17d0
.org 0x1096c0
	movs r0, #63	@ 001096c0 3f20
.org 0x1096c2
	subs r0, r0, r2	@ 001096c2 801a
.org 0x1096c4
	lsls r0, r0, #24	@ 001096c4 0006
.org 0x1096c6
	lsrs r0, r0, #23	@ 001096c6 c00d
.org 0x1096c8
	add r0, ip	@ 001096c8 6044
.org 0x1096ca
	movs r3, #0	@ 001096ca 0023
.org 0x1096cc
	ldrsh r1, [r0, r3]	@ 001096cc c15e
.org 0x1096ce
	lsls r1, r1, #2	@ 001096ce 8900
.org 0x1096d0
	ldr r0, [r6, #0]	@ 001096d0 3068
.org 0x1096d2
	subs r0, r0, r1	@ 001096d2 401a
.org 0x1096d4
	str r0, [r4, #84]	@ 001096d4 6065
.org 0x1096d6
	mvns r0, r2	@ 001096d6 d043
.org 0x1096d8
	lsls r0, r0, #24	@ 001096d8 0006
.org 0x1096da
	lsrs r0, r0, #23	@ 001096da c00d
.org 0x1096dc
	add r0, ip	@ 001096dc 6044
.org 0x1096de
	movs r2, #0	@ 001096de 0022
.org 0x1096e0
	ldrsh r1, [r0, r2]	@ 001096e0 815e
.org 0x1096e2
	lsls r1, r1, #2	@ 001096e2 8900
.org 0x1096e4
	ldr r0, [r5, #0]	@ 001096e4 2868
.org 0x1096e6
	subs r0, r0, r1	@ 001096e6 401a
.org 0x1096e8
	b.n 0x10971a	@ 001096e8 17e0
.org 0x1096ea
	.byte 0x00	@ 001096ea data
.org 0x1096eb
	.byte 0x00	@ 001096eb data
.org 0x1096ec
	.byte 0x0c,0x93,0x12,0x08	@ 001096ec data
.org 0x1096f0
	adds r0, r2, #0	@ 001096f0 101c
.org 0x1096f2
	adds r0, #64	@ 001096f2 4030
.org 0x1096f4
	lsls r0, r0, #24	@ 001096f4 0006
.org 0x1096f6
	lsrs r0, r0, #23	@ 001096f6 c00d
.org 0x1096f8
	add r0, ip	@ 001096f8 6044
.org 0x1096fa
	movs r2, #0	@ 001096fa 0022
.org 0x1096fc
	ldrsh r1, [r0, r2]	@ 001096fc 815e
.org 0x1096fe
	lsls r1, r1, #2	@ 001096fe 8900
.org 0x109700
	mov r2, r8	@ 00109700 4246
.org 0x109702
	ldr r0, [r2, #0]	@ 00109702 1068
.org 0x109704
	adds r0, r0, r1	@ 00109704 4018
.org 0x109706
	str r0, [r4, #84]	@ 00109706 6065
.org 0x109708
	lsls r0, r3, #27	@ 00109708 d806
.org 0x10970a
	lsrs r0, r0, #23	@ 0010970a c00d
.org 0x10970c
	add r0, ip	@ 0010970c 6044
.org 0x10970e
	movs r3, #0	@ 0010970e 0023
.org 0x109710
	ldrsh r1, [r0, r3]	@ 00109710 c15e
.org 0x109712
	lsls r1, r1, #2	@ 00109712 8900
.org 0x109714
	mov r2, r9	@ 00109714 4a46
.org 0x109716
	ldr r0, [r2, #0]	@ 00109716 1068
.org 0x109718
	adds r0, r0, r1	@ 00109718 4018
.org 0x10971a
	str r0, [r4, #88]	@ 0010971a a065
.org 0x10971c
	adds r0, r7, #0	@ 0010971c 381c
.org 0x10971e
	bl 0x1092f0	@ 0010971e fff7e7fd
.org 0x109722
	lsls r0, r0, #24	@ 00109722 0006
.org 0x109724
	cmp r0, #0	@ 00109724 0028
.org 0x109726
	bne.n 0x10972a	@ 00109726 00d1
.org 0x109728
	b.n 0x109872	@ 00109728 a3e0
.org 0x10972a
	adds r0, r7, #0	@ 0010972a 381c
.org 0x10972c
	adds r0, #180	@ 0010972c b430
.org 0x10972e
	ldrb r0, [r0, #19]	@ 0010972e c07c
.org 0x109730
	cmp r0, #2	@ 00109730 0228
.org 0x109732
	bne.n 0x1097c8	@ 00109732 49d1
.org 0x109734
	adds r0, r7, #0	@ 00109734 381c
.org 0x109736
	adds r0, #241	@ 00109736 f130
.org 0x109738
	ldrb r0, [r0, #0]	@ 00109738 0078
.org 0x10973a
	cmp r0, #0	@ 0010973a 0028
.org 0x10973c
	beq.n 0x109772	@ 0010973c 19d0
.org 0x10973e
	adds r5, r4, #0	@ 0010973e 251c
.org 0x109740
	adds r5, #192	@ 00109740 c035
.org 0x109742
	ldrh r0, [r5, #0]	@ 00109742 2888
.org 0x109744
	adds r1, r0, #1	@ 00109744 411c
.org 0x109746
	movs r6, #0	@ 00109746 0026
.org 0x109748
	strh r1, [r5, #0]	@ 00109748 2980
.org 0x10974a
	adds r0, r7, #0	@ 0010974a 381c
.org 0x10974c
	adds r0, #245	@ 0010974c f530
.org 0x10974e
	ldrb r0, [r0, #0]	@ 0010974e 0078
.org 0x109750
	cmp r0, #3	@ 00109750 0328
.org 0x109752
	bne.n 0x10975c	@ 00109752 03d1
.org 0x109754
	lsls r1, r1, #16	@ 00109754 0904
.org 0x109756
	movs r0, #150	@ 00109756 9620
.org 0x109758
	lsls r0, r0, #19	@ 00109758 c004
.org 0x10975a
	b.n 0x109760	@ 0010975a 01e0
.org 0x10975c
	lsls r1, r1, #16	@ 0010975c 0904
.org 0x10975e
	ldr r0, [pc, #100]	@ 0010975e 1948
.org 0x109760
	cmp r1, r0	@ 00109760 8142
.org 0x109762
	bls.n 0x109772	@ 00109762 06d9
.org 0x109764
	adds r1, r4, #0	@ 00109764 211c
.org 0x109766
	adds r1, #84	@ 00109766 5431
.org 0x109768
	movs r0, #0	@ 00109768 0020
.org 0x10976a
	movs r2, #0	@ 0010976a 0022
.org 0x10976c
	bl 0x1083b4	@ 0010976c fef722fe
.org 0x109770
	strh r6, [r5, #0]	@ 00109770 2e80
.org 0x109772
	adds r0, r7, #0	@ 00109772 381c
.org 0x109774
	adds r0, #242	@ 00109774 f230
.org 0x109776
	ldrb r1, [r0, #0]	@ 00109776 0178
.org 0x109778
	adds r6, r0, #0	@ 00109778 061c
.org 0x10977a
	cmp r1, #2	@ 0010977a 0229
.org 0x10977c
	bls.n 0x10979e	@ 0010977c 0fd9
.org 0x10977e
	adds r5, r4, #0	@ 0010977e 251c
.org 0x109780
	adds r5, #194	@ 00109780 c235
.org 0x109782
	ldrh r0, [r5, #0]	@ 00109782 2888
.org 0x109784
	adds r0, #1	@ 00109784 0130
.org 0x109786
	strh r0, [r5, #0]	@ 00109786 2880
.org 0x109788
	lsls r0, r0, #16	@ 00109788 0004
.org 0x10978a
	lsrs r0, r0, #16	@ 0010978a 000c
.org 0x10978c
	cmp r0, #40	@ 0010978c 2828
.org 0x10978e
	bls.n 0x10979e	@ 0010978e 06d9
.org 0x109790
	adds r0, r7, #0	@ 00109790 381c
.org 0x109792
	adds r1, r4, #0	@ 00109792 211c
.org 0x109794
	movs r2, #0	@ 00109794 0022
.org 0x109796
	bl 0x1098d4	@ 00109796 00f09df8
.org 0x10979a
	movs r0, #0	@ 0010979a 0020
.org 0x10979c
	strh r0, [r5, #0]	@ 0010979c 2880
.org 0x10979e
	ldrb r0, [r6, #0]	@ 0010979e 3078
.org 0x1097a0
	cmp r0, #3	@ 001097a0 0328
.org 0x1097a2
	bls.n 0x1097bc	@ 001097a2 0bd9
.org 0x1097a4
	ldr r0, [r4, #100]	@ 001097a4 606e
.org 0x1097a6
	adds r0, #1	@ 001097a6 0130
.org 0x1097a8
	str r0, [r4, #100]	@ 001097a8 6066
.org 0x1097aa
	cmp r0, #60	@ 001097aa 3c28
.org 0x1097ac
	ble.n 0x1097bc	@ 001097ac 06dd
.org 0x1097ae
	adds r0, r7, #0	@ 001097ae 381c
.org 0x1097b0
	adds r1, r4, #0	@ 001097b0 211c
.org 0x1097b2
	movs r2, #2	@ 001097b2 0222
.org 0x1097b4
	bl 0x1098d4	@ 001097b4 00f08ef8
.org 0x1097b8
	movs r0, #0	@ 001097b8 0020
.org 0x1097ba
	str r0, [r4, #100]	@ 001097ba 6066
.org 0x1097bc
	ldrb r0, [r6, #0]	@ 001097bc 3078
.org 0x1097be
	cmp r0, #4	@ 001097be 0428
.org 0x1097c0
	bls.n 0x109872	@ 001097c0 57d9
.org 0x1097c2
	b.n 0x10985a	@ 001097c2 4ae0
.org 0x1097c4
	.byte 0x00,0x00,0xdc,0x05	@ 001097c4 data
.org 0x1097c8
	adds r0, r7, #0	@ 001097c8 381c
.org 0x1097ca
	adds r0, #241	@ 001097ca f130
.org 0x1097cc
	ldrb r0, [r0, #0]	@ 001097cc 0078
.org 0x1097ce
	cmp r0, #1	@ 001097ce 0128
.org 0x1097d0
	beq.n 0x1097d6	@ 001097d0 01d0
.org 0x1097d2
	cmp r0, #6	@ 001097d2 0628
.org 0x1097d4
	bne.n 0x10980a	@ 001097d4 19d1
.org 0x1097d6
	adds r5, r4, #0	@ 001097d6 251c
.org 0x1097d8
	adds r5, #192	@ 001097d8 c035
.org 0x1097da
	ldrh r0, [r5, #0]	@ 001097da 2888
.org 0x1097dc
	adds r1, r0, #1	@ 001097dc 411c
.org 0x1097de
	movs r6, #0	@ 001097de 0026
.org 0x1097e0
	strh r1, [r5, #0]	@ 001097e0 2980
.org 0x1097e2
	adds r0, r7, #0	@ 001097e2 381c
.org 0x1097e4
	adds r0, #245	@ 001097e4 f530
.org 0x1097e6
	ldrb r0, [r0, #0]	@ 001097e6 0078
.org 0x1097e8
	cmp r0, #3	@ 001097e8 0328
.org 0x1097ea
	bne.n 0x1097f4	@ 001097ea 03d1
.org 0x1097ec
	lsls r1, r1, #16	@ 001097ec 0904
.org 0x1097ee
	movs r0, #150	@ 001097ee 9620
.org 0x1097f0
	lsls r0, r0, #19	@ 001097f0 c004
.org 0x1097f2
	b.n 0x1097f8	@ 001097f2 01e0
.org 0x1097f4
	lsls r1, r1, #16	@ 001097f4 0904
.org 0x1097f6
	ldr r0, [pc, #168]	@ 001097f6 2a48
.org 0x1097f8
	cmp r1, r0	@ 001097f8 8142
.org 0x1097fa
	bls.n 0x10980a	@ 001097fa 06d9
.org 0x1097fc
	adds r1, r4, #0	@ 001097fc 211c
.org 0x1097fe
	adds r1, #84	@ 001097fe 5431
.org 0x109800
	movs r0, #0	@ 00109800 0020
.org 0x109802
	movs r2, #0	@ 00109802 0022
.org 0x109804
	bl 0x1083b4	@ 00109804 fef7d6fd
.org 0x109808
	strh r6, [r5, #0]	@ 00109808 2e80
.org 0x10980a
	adds r0, r7, #0	@ 0010980a 381c
.org 0x10980c
	adds r0, #242	@ 0010980c f230
.org 0x10980e
	ldrb r1, [r0, #0]	@ 0010980e 0178
.org 0x109810
	adds r6, r0, #0	@ 00109810 061c
.org 0x109812
	cmp r1, #3	@ 00109812 0329
.org 0x109814
	bne.n 0x109836	@ 00109814 0fd1
.org 0x109816
	adds r5, r4, #0	@ 00109816 251c
.org 0x109818
	adds r5, #194	@ 00109818 c235
.org 0x10981a
	ldrh r0, [r5, #0]	@ 0010981a 2888
.org 0x10981c
	adds r0, #1	@ 0010981c 0130
.org 0x10981e
	strh r0, [r5, #0]	@ 0010981e 2880
.org 0x109820
	lsls r0, r0, #16	@ 00109820 0004
.org 0x109822
	lsrs r0, r0, #16	@ 00109822 000c
.org 0x109824
	cmp r0, #40	@ 00109824 2828
.org 0x109826
	bls.n 0x109836	@ 00109826 06d9
.org 0x109828
	adds r0, r7, #0	@ 00109828 381c
.org 0x10982a
	adds r1, r4, #0	@ 0010982a 211c
.org 0x10982c
	movs r2, #0	@ 0010982c 0022
.org 0x10982e
	bl 0x1098d4	@ 0010982e 00f051f8
.org 0x109832
	movs r0, #0	@ 00109832 0020
.org 0x109834
	strh r0, [r5, #0]	@ 00109834 2880
.org 0x109836
	ldrb r0, [r6, #0]	@ 00109836 3078
.org 0x109838
	cmp r0, #4	@ 00109838 0428
.org 0x10983a
	bne.n 0x109854	@ 0010983a 0bd1
.org 0x10983c
	ldr r0, [r4, #100]	@ 0010983c 606e
.org 0x10983e
	adds r0, #1	@ 0010983e 0130
.org 0x109840
	str r0, [r4, #100]	@ 00109840 6066
.org 0x109842
	cmp r0, #60	@ 00109842 3c28
.org 0x109844
	ble.n 0x109854	@ 00109844 06dd
.org 0x109846
	adds r0, r7, #0	@ 00109846 381c
.org 0x109848
	adds r1, r4, #0	@ 00109848 211c
.org 0x10984a
	movs r2, #2	@ 0010984a 0222
.org 0x10984c
	bl 0x1098d4	@ 0010984c 00f042f8
.org 0x109850
	movs r0, #0	@ 00109850 0020
.org 0x109852
	str r0, [r4, #100]	@ 00109852 6066
.org 0x109854
	ldrb r0, [r6, #0]	@ 00109854 3078
.org 0x109856
	cmp r0, #5	@ 00109856 0528
.org 0x109858
	bne.n 0x109872	@ 00109858 0bd1
.org 0x10985a
	ldr r0, [r4, #104]	@ 0010985a a06e
.org 0x10985c
	adds r0, #1	@ 0010985c 0130
.org 0x10985e
	str r0, [r4, #104]	@ 0010985e a066
.org 0x109860
	cmp r0, #60	@ 00109860 3c28
.org 0x109862
	ble.n 0x109872	@ 00109862 06dd
.org 0x109864
	adds r0, r7, #0	@ 00109864 381c
.org 0x109866
	adds r1, r4, #0	@ 00109866 211c
.org 0x109868
	movs r2, #1	@ 00109868 0122
.org 0x10986a
	bl 0x1098d4	@ 0010986a 00f033f8
.org 0x10986e
	movs r0, #0	@ 0010986e 0020
.org 0x109870
	str r0, [r4, #104]	@ 00109870 a066
