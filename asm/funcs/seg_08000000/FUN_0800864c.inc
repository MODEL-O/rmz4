@ FUN_0800864c  entry 0x0800864c  size 212
.thumb
.org 0x864c
FUN_0800864c:
	push {r4, r5, r6, r7, lr}	@ 0000864c f0b5
.org 0x864e
	mov r7, sl	@ 0000864e 5746
.org 0x8650
	mov r6, r9	@ 00008650 4e46
.org 0x8652
	mov r5, r8	@ 00008652 4546
.org 0x8654
	push {r5, r6, r7}	@ 00008654 e0b4
.org 0x8656
	adds r7, r0, #0	@ 00008656 071c
.org 0x8658
	adds r4, r1, #0	@ 00008658 0c1c
.org 0x865a
	ldr r5, [pc, #128]	@ 0000865a 204d
.org 0x865c
	movs r1, #232	@ 0000865c e821
.org 0x865e
	lsls r1, r1, #1	@ 0000865e 4900
.org 0x8660
	adds r0, r5, r1	@ 00008660 6818
.org 0x8662
	ldrh r0, [r0, #0]	@ 00008662 0088
.org 0x8664
	cmp r0, #4	@ 00008664 0428
.org 0x8666
	bne.n 0x867a	@ 00008666 08d1
.org 0x8668
	ldr r2, [pc, #116]	@ 00008668 1d4a
.org 0x866a
	adds r0, r7, r2	@ 0000866a b818
.org 0x866c
	movs r1, #240	@ 0000866c f021
.org 0x866e
	lsls r1, r1, #10	@ 0000866e 8902
.org 0x8670
	bl 0x129050	@ 00008670 20f1eefc
.org 0x8674
	movs r1, #240	@ 00008674 f021
.org 0x8676
	lsls r1, r1, #8	@ 00008676 0902
.org 0x8678
	adds r7, r0, r1	@ 00008678 4718
.org 0x867a
	asrs r2, r7, #12	@ 0000867a 3a13
.org 0x867c
	mov r9, r2	@ 0000867c 9146
.org 0x867e
	asrs r1, r4, #12	@ 0000867e 2113
.org 0x8680
	movs r6, #0	@ 00008680 0026
.org 0x8682
	ldr r0, [pc, #96]	@ 00008682 1848
.org 0x8684
	cmp r1, r0	@ 00008684 8142
.org 0x8686
	bhi.n 0x8712	@ 00008686 44d8
.org 0x8688
	movs r0, #252	@ 00008688 fc20
.org 0x868a
	lsls r0, r0, #3	@ 0000868a c000
.org 0x868c
	adds r0, r0, r5	@ 0000868c 4019
.org 0x868e
	mov r8, r0	@ 0000868e 8046
.org 0x8690
	ldr r2, [pc, #84]	@ 00008690 154a
.org 0x8692
	mov sl, r2	@ 00008692 9246
.org 0x8694
	mov r2, r8	@ 00008694 4246
.org 0x8696
	ldrh r0, [r2, #0]	@ 00008696 1088
.org 0x8698
	muls r0, r1	@ 00008698 4843
.org 0x869a
	add r0, r9	@ 0000869a 4844
.org 0x869c
	adds r0, #2	@ 0000869c 0230
.org 0x869e
	lsls r0, r0, #1	@ 0000869e 4000
.org 0x86a0
	add r0, r8	@ 000086a0 4044
.org 0x86a2
	ldrh r0, [r0, #0]	@ 000086a2 0088
.org 0x86a4
	ldr r2, [pc, #68]	@ 000086a4 114a
.org 0x86a6
	ldr r1, [r2, #0]	@ 000086a6 1168
.org 0x86a8
	lsls r0, r0, #1	@ 000086a8 4000
.org 0x86aa
	adds r0, r0, r1	@ 000086aa 4018
.org 0x86ac
	ldrh r5, [r0, #0]	@ 000086ac 0588
.org 0x86ae
	movs r0, #15	@ 000086ae 0f20
.org 0x86b0
	ands r0, r5	@ 000086b0 2840
.org 0x86b2
	lsls r0, r0, #2	@ 000086b2 8000
.org 0x86b4
	add r0, sl	@ 000086b4 5044
.org 0x86b6
	ldr r2, [pc, #56]	@ 000086b6 0e4a
.org 0x86b8
	adds r1, r4, #0	@ 000086b8 211c
.org 0x86ba
	ands r1, r2	@ 000086ba 1140
.org 0x86bc
	ldr r3, [r0, #0]	@ 000086bc 0368
.org 0x86be
	adds r0, r7, #0	@ 000086be 381c
.org 0x86c0
	ands r0, r2	@ 000086c0 1040
.org 0x86c2
	bl 0x128f88	@ 000086c2 20f161fc
.org 0x86c6
	cmp r0, #0	@ 000086c6 0028
.org 0x86c8
	beq.n 0x86d0	@ 000086c8 02d0
.org 0x86ca
	ldr r0, [pc, #40]	@ 000086ca 0a48
.org 0x86cc
	cmp r5, r0	@ 000086cc 8542
.org 0x86ce
	bne.n 0x8712	@ 000086ce 20d1
.org 0x86d0
	movs r0, #1	@ 000086d0 0120
.org 0x86d2
	ands r0, r6	@ 000086d2 3040
.org 0x86d4
	cmp r0, #0	@ 000086d4 0028
.org 0x86d6
	beq.n 0x86f8	@ 000086d6 0fd0
.org 0x86d8
	adds r4, #1	@ 000086d8 0134
.org 0x86da
	b.n 0x8704	@ 000086da 13e0
.org 0x86dc
	.byte 0xb0,0x0a,0x00,0x02	@ 000086dc data
.org 0x86e0
	.byte 0x00,0x10,0xff,0xff	@ 000086e0 data
.org 0x86e4
	.byte 0xff,0x04,0x00,0x00	@ 000086e4 data
.org 0x86e8
	.byte 0xd4,0xb0,0x82,0x08	@ 000086e8 data
.org 0x86ec
	.byte 0x68,0x0c,0x00,0x02	@ 000086ec data
.org 0x86f0
	.byte 0xff,0x0f,0x00,0x00	@ 000086f0 data
.org 0x86f4
	.byte 0x0f,0x80,0x00,0x00	@ 000086f4 data
.org 0x86f8
	movs r1, #128	@ 000086f8 8021
.org 0x86fa
	lsls r1, r1, #5	@ 000086fa 4901
.org 0x86fc
	adds r0, r4, r1	@ 000086fc 6018
.org 0x86fe
	asrs r0, r0, #12	@ 000086fe 0013
.org 0x8700
	lsls r0, r0, #12	@ 00008700 0003
.org 0x8702
	subs r4, r0, #1	@ 00008702 441e
.org 0x8704
	asrs r1, r4, #12	@ 00008704 2113
.org 0x8706
	adds r6, #1	@ 00008706 0136
.org 0x8708
	cmp r6, #127	@ 00008708 7f2e
.org 0x870a
	bgt.n 0x8716	@ 0000870a 04dc
.org 0x870c
	ldr r0, [pc, #12]	@ 0000870c 0348
.org 0x870e
	cmp r1, r0	@ 0000870e 8142
.org 0x8710
	bls.n 0x8694	@ 00008710 c0d9
.org 0x8712
	cmp r6, #127	@ 00008712 7f2e
.org 0x8714
	ble.n 0x8724	@ 00008714 06dd
.org 0x8716
	ldr r0, [pc, #8]	@ 00008716 0248
.org 0x8718
	b.n 0x8738	@ 00008718 0ee0
.org 0x871a
	.byte 0x00	@ 0000871a data
.org 0x871b
	.byte 0x00	@ 0000871b data
.org 0x871c
	.byte 0xff,0x04,0x00,0x00	@ 0000871c data
