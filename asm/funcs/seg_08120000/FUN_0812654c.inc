@ FUN_0812654c  entry 0x0812654c  size 342
.thumb
.org 0x12654c
FUN_0812654c:
	push {r4, r5, r6, r7, lr}	@ 0012654c f0b5
.org 0x12654e
	adds r6, r0, #0	@ 0012654e 061c
.org 0x126550
	ldr r0, [pc, #40]	@ 00126550 0a48
.org 0x126552
	ldr r1, [pc, #44]	@ 00126552 0b49
.org 0x126554
	adds r4, r6, r1	@ 00126554 7418
.org 0x126556
	ldrb r1, [r4, #24]	@ 00126556 217e
.org 0x126558
	lsls r1, r1, #2	@ 00126558 8900
.org 0x12655a
	adds r1, r1, r0	@ 0012655a 0918
.org 0x12655c
	ldr r1, [r1, #0]	@ 0012655c 0968
.org 0x12655e
	adds r0, r6, #0	@ 0012655e 301c
.org 0x126560
	bl 0x128f80	@ 00126560 02f00efd
.org 0x126564
	adds r7, r0, #0	@ 00126564 071c
.org 0x126566
	ldr r1, [r4, #12]	@ 00126566 e168
.org 0x126568
	ldr r2, [r4, #8]	@ 00126568 a268
.org 0x12656a
	cmp r1, r2	@ 0012656a 9142
.org 0x12656c
	bge.n 0x12658e	@ 0012656c 0fda
.org 0x12656e
	subs r0, r2, r1	@ 0012656e 501a
.org 0x126570
	cmp r0, #9	@ 00126570 0928
.org 0x126572
	bgt.n 0x126584	@ 00126572 07dc
.org 0x126574
	adds r0, r1, #1	@ 00126574 481c
.org 0x126576
	str r0, [r4, #12]	@ 00126576 e060
.org 0x126578
	b.n 0x12658e	@ 00126578 09e0
.org 0x12657a
	.byte 0x00	@ 0012657a data
.org 0x12657b
	.byte 0x00	@ 0012657b data
.org 0x12657c
	.byte 0x18,0x24,0x88,0x08	@ 0012657c data
.org 0x126580
	.byte 0xcc,0x0d,0x00,0x00	@ 00126580 data
.org 0x126584
	adds r0, r1, #2	@ 00126584 881c
.org 0x126586
	str r0, [r4, #12]	@ 00126586 e060
.org 0x126588
	cmp r0, r2	@ 00126588 9042
.org 0x12658a
	ble.n 0x12658e	@ 0012658a 00dd
.org 0x12658c
	str r2, [r4, #12]	@ 0012658c e260
.org 0x12658e
	ldr r0, [pc, #248]	@ 0012658e 3e48
.org 0x126590
	adds r5, r6, r0	@ 00126590 3518
.org 0x126592
	ldr r0, [r5, #16]	@ 00126592 2869
.org 0x126594
	ldr r1, [r5, #8]	@ 00126594 a968
.org 0x126596
	cmp r0, r1	@ 00126596 8842
.org 0x126598
	bge.n 0x12659c	@ 00126598 00da
.org 0x12659a
	str r1, [r5, #16]	@ 0012659a 2961
.org 0x12659c
	ldr r0, [pc, #236]	@ 0012659c 3b48
.org 0x12659e
	movs r1, #1	@ 0012659e 0121
.org 0x1265a0
	movs r2, #0	@ 001265a0 0022
.org 0x1265a2
	bl 0x10da2c	@ 001265a2 e7f743fa
.org 0x1265a6
	ldr r0, [r5, #12]	@ 001265a6 e868
.org 0x1265a8
	movs r1, #11	@ 001265a8 0b21
.org 0x1265aa
	movs r2, #0	@ 001265aa 0022
.org 0x1265ac
	bl 0x10dae0	@ 001265ac e7f798fa
.org 0x1265b0
	ldr r0, [pc, #220]	@ 001265b0 3748
.org 0x1265b2
	movs r1, #15	@ 001265b2 0f21
.org 0x1265b4
	movs r2, #0	@ 001265b4 0022
.org 0x1265b6
	bl 0x10da2c	@ 001265b6 e7f739fa
.org 0x1265ba
	ldr r0, [r5, #16]	@ 001265ba 2869
.org 0x1265bc
	movs r1, #28	@ 001265bc 1c21
.org 0x1265be
	movs r2, #0	@ 001265be 0022
.org 0x1265c0
	bl 0x10dae0	@ 001265c0 e7f78efa
.org 0x1265c4
	ldr r0, [pc, #204]	@ 001265c4 3348
.org 0x1265c6
	movs r1, #9	@ 001265c6 0921
.org 0x1265c8
	movs r2, #18	@ 001265c8 1222
.org 0x1265ca
	bl 0x10da2c	@ 001265ca e7f72ffa
.org 0x1265ce
	ldr r0, [r5, #20]	@ 001265ce 6869
.org 0x1265d0
	movs r1, #60	@ 001265d0 3c21
.org 0x1265d2
	bl 0x128fb8	@ 001265d2 02f0f1fc
.org 0x1265d6
	movs r1, #15	@ 001265d6 0f21
.org 0x1265d8
	movs r2, #18	@ 001265d8 1222
.org 0x1265da
	bl 0x10dae0	@ 001265da e7f781fa
.org 0x1265de
	ldr r0, [pc, #184]	@ 001265de 2e48
.org 0x1265e0
	movs r1, #16	@ 001265e0 1021
.org 0x1265e2
	movs r2, #18	@ 001265e2 1222
.org 0x1265e4
	bl 0x10da2c	@ 001265e4 e7f722fa
.org 0x1265e8
	ldr r0, [r5, #20]	@ 001265e8 6869
.org 0x1265ea
	movs r1, #60	@ 001265ea 3c21
.org 0x1265ec
	bl 0x129050	@ 001265ec 02f030fd
.org 0x1265f0
	movs r1, #166	@ 001265f0 a621
.org 0x1265f2
	muls r0, r1	@ 001265f2 4843
.org 0x1265f4
	movs r1, #100	@ 001265f4 6421
.org 0x1265f6
	bl 0x128fb8	@ 001265f6 02f0dffc
.org 0x1265fa
	adds r4, r0, #0	@ 001265fa 041c
.org 0x1265fc
	lsls r4, r4, #24	@ 001265fc 2406
.org 0x1265fe
	lsrs r4, r4, #24	@ 001265fe 240e
.org 0x126600
	adds r0, r4, #0	@ 00126600 201c
.org 0x126602
	movs r1, #18	@ 00126602 1221
.org 0x126604
	movs r2, #18	@ 00126604 1222
.org 0x126606
	bl 0x10dae0	@ 00126606 e7f76bfa
.org 0x12660a
	cmp r4, #9	@ 0012660a 092c
.org 0x12660c
	bhi.n 0x126618	@ 0012660c 04d8
.org 0x12660e
	movs r0, #0	@ 0012660e 0020
.org 0x126610
	movs r1, #17	@ 00126610 1121
.org 0x126612
	movs r2, #18	@ 00126612 1222
.org 0x126614
	bl 0x10dae0	@ 00126614 e7f764fa
.org 0x126618
	ldr r0, [r5, #108]	@ 00126618 e86e
.org 0x12661a
	cmp r0, #1	@ 0012661a 0128
.org 0x12661c
	bls.n 0x12663a	@ 0012661c 0dd9
.org 0x12661e
	ldr r0, [r5, #20]	@ 0012661e 6869
.org 0x126620
	movs r1, #1	@ 00126620 0121
.org 0x126622
	ands r0, r1	@ 00126622 0840
.org 0x126624
	cmp r0, #0	@ 00126624 0028
.org 0x126626
	beq.n 0x12663a	@ 00126626 08d0
.org 0x126628
	ldr r0, [pc, #112]	@ 00126628 1c48
.org 0x12662a
	movs r2, #7	@ 0012662a 0722
.org 0x12662c
	bl 0x10da2c	@ 0012662c e7f7fef9
.org 0x126630
	ldr r0, [r5, #108]	@ 00126630 e86e
.org 0x126632
	movs r1, #3	@ 00126632 0321
.org 0x126634
	movs r2, #8	@ 00126634 0822
.org 0x126636
	bl 0x10dae0	@ 00126636 e7f753fa
.org 0x12663a
	ldr r1, [pc, #76]	@ 0012663a 1349
.org 0x12663c
	adds r4, r6, r1	@ 0012663c 7418
.org 0x12663e
	ldr r0, [r4, #112]	@ 0012663e 206f
.org 0x126640
	cmp r0, #1	@ 00126640 0128
.org 0x126642
	bls.n 0x126662	@ 00126642 0ed9
.org 0x126644
	ldr r0, [r4, #20]	@ 00126644 6069
.org 0x126646
	movs r1, #1	@ 00126646 0121
.org 0x126648
	ands r0, r1	@ 00126648 0840
.org 0x12664a
	cmp r0, #0	@ 0012664a 0028
.org 0x12664c
	beq.n 0x126662	@ 0012664c 09d0
.org 0x12664e
	ldr r0, [pc, #76]	@ 0012664e 1348
.org 0x126650
	movs r1, #24	@ 00126650 1821
.org 0x126652
	movs r2, #7	@ 00126652 0722
.org 0x126654
	bl 0x10da2c	@ 00126654 e7f7eaf9
.org 0x126658
	ldr r0, [r4, #112]	@ 00126658 206f
.org 0x12665a
	movs r1, #26	@ 0012665a 1a21
.org 0x12665c
	movs r2, #8	@ 0012665c 0822
.org 0x12665e
	bl 0x10dae0	@ 0012665e e7f73ffa
.org 0x126662
	ldr r0, [pc, #36]	@ 00126662 0948
.org 0x126664
	adds r4, r6, r0	@ 00126664 3418
.org 0x126666
	ldr r0, [r4, #92]	@ 00126666 e06d
.org 0x126668
	cmp r0, #0	@ 00126668 0028
.org 0x12666a
	bne.n 0x1266a4	@ 0012666a 1bd1
.org 0x12666c
	ldr r0, [r4, #84]	@ 0012666c 606d
.org 0x12666e
	cmp r0, #1	@ 0012666e 0128
.org 0x126670
	bne.n 0x1266a8	@ 00126670 1ad1
.org 0x126672
	ldr r0, [r4, #88]	@ 00126672 a06d
.org 0x126674
	cmp r0, #0	@ 00126674 0028
.org 0x126676
	bne.n 0x126684	@ 00126676 05d1
.org 0x126678
	ldr r1, [pc, #36]	@ 00126678 0949
.org 0x12667a
	adds r0, r6, r1	@ 0012667a 7018
.org 0x12667c
	movs r1, #0	@ 0012667c 0021
.org 0x12667e
	movs r2, #0	@ 0012667e 0022
.org 0x126680
	bl 0xd0a04	@ 00126680 aaf7c0f9
.org 0x126684
	movs r0, #30	@ 00126684 1e20
.org 0x126686
	b.n 0x1266a6	@ 00126686 0ee0
.org 0x126688
	.byte 0xcc,0x0d,0x00,0x00	@ 00126688 data
.org 0x12668c
	.byte 0x88,0x97,0x13,0x08	@ 0012668c data
.org 0x126690
	.byte 0x90,0x97,0x13,0x08	@ 00126690 data
.org 0x126694
	.byte 0x9c,0x97,0x13,0x08	@ 00126694 data
.org 0x126698
	.byte 0xa4,0x97,0x13,0x08	@ 00126698 data
.org 0x12669c
	.byte 0xa8,0x97,0x13,0x08	@ 0012669c data
.org 0x1266a0
	.byte 0xc4,0x0d,0x00,0x00	@ 001266a0 data
