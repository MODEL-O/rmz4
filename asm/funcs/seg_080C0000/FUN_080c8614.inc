@ FUN_080c8614  entry 0x080c8614  size 216
.thumb
.org 0xc8614
FUN_080c8614:
	push {r4, r5, r6, r7, lr}	@ 000c8614 f0b5
.org 0xc8616
	adds r4, r0, #0	@ 000c8616 041c
.org 0xc8618
	ldr r7, [pc, #68]	@ 000c8618 114f
.org 0xc861a
	ldr r5, [r7, #0]	@ 000c861a 3d68
.org 0xc861c
	movs r6, #0	@ 000c861c 0026
.org 0xc861e
	ldrb r0, [r4, #15]	@ 000c861e e07b
.org 0xc8620
	cmp r0, #0	@ 000c8620 0028
.org 0xc8622
	bne.n 0xc8648	@ 000c8622 11d1
.org 0xc8624
	adds r0, r4, #0	@ 000c8624 201c
.org 0xc8626
	adds r0, #116	@ 000c8626 7430
.org 0xc8628
	ldr r1, [pc, #56]	@ 000c8628 0e49
.org 0xc862a
	bl 0x5784	@ 000c862a 3df7abf8
.org 0xc862e
	adds r1, r4, #0	@ 000c862e 211c
.org 0xc8630
	adds r1, #34	@ 000c8630 2231
.org 0xc8632
	movs r0, #1	@ 000c8632 0120
.org 0xc8634
	strb r0, [r1, #0]	@ 000c8634 0870
.org 0xc8636
	ldr r1, [pc, #48]	@ 000c8636 0c49
.org 0xc8638
	adds r0, r4, #0	@ 000c8638 201c
.org 0xc863a
	bl 0x1cf00	@ 000c863a 54f761fc
.org 0xc863e
	movs r0, #90	@ 000c863e 5a20
.org 0xc8640
	str r0, [r4, #100]	@ 000c8640 6066
.org 0xc8642
	ldrb r0, [r4, #15]	@ 000c8642 e07b
.org 0xc8644
	adds r0, #1	@ 000c8644 0130
.org 0xc8646
	strb r0, [r4, #15]	@ 000c8646 e073
.org 0xc8648
	adds r0, r4, #0	@ 000c8648 201c
.org 0xc864a
	bl 0x1cff0	@ 000c864a 54f7d1fc
.org 0xc864e
	ldr r0, [r4, #100]	@ 000c864e 606e
.org 0xc8650
	subs r0, #1	@ 000c8650 0138
.org 0xc8652
	str r0, [r4, #100]	@ 000c8652 6066
.org 0xc8654
	cmp r0, #0	@ 000c8654 0028
.org 0xc8656
	bne.n 0xc866c	@ 000c8656 09d1
.org 0xc8658
	adds r3, r4, #0	@ 000c8658 231c
.org 0xc865a
	adds r3, #140	@ 000c865a 8c33
.org 0xc865c
	b.n 0xc8688	@ 000c865c 14e0
.org 0xc865e
	.byte 0x00	@ 000c865e data
.org 0xc865f
	.byte 0x00	@ 000c865f data
.org 0xc8660
	.byte 0xf0,0xdb,0x02,0x02	@ 000c8660 data
.org 0xc8664
	.byte 0x04,0x60,0x86,0x08	@ 000c8664 data
.org 0xc8668
	.byte 0x04,0x09,0x00,0x00	@ 000c8668 data
.org 0xc866c
	adds r0, r4, #0	@ 000c866c 201c
.org 0xc866e
	adds r0, #140	@ 000c866e 8c30
.org 0xc8670
	ldr r1, [r0, #0]	@ 000c8670 0168
.org 0xc8672
	movs r2, #128	@ 000c8672 8022
.org 0xc8674
	lsls r2, r2, #4	@ 000c8674 1201
.org 0xc8676
	ands r1, r2	@ 000c8676 1140
.org 0xc8678
	adds r3, r0, #0	@ 000c8678 031c
.org 0xc867a
	cmp r1, #0	@ 000c867a 0029
.org 0xc867c
	beq.n 0xc8688	@ 000c867c 04d0
.org 0xc867e
	cmp r5, #0	@ 000c867e 002d
.org 0xc8680
	bne.n 0xc8684	@ 000c8680 00d1
.org 0xc8682
	movs r6, #1	@ 000c8682 0126
.org 0xc8684
	cmp r6, #0	@ 000c8684 002e
.org 0xc8686
	beq.n 0xc86c4	@ 000c8686 1dd0
.org 0xc8688
	ldrb r1, [r4, #10]	@ 000c8688 a17a
.org 0xc868a
	movs r0, #254	@ 000c868a fe20
.org 0xc868c
	ands r0, r1	@ 000c868c 0840
.org 0xc868e
	movs r2, #0	@ 000c868e 0022
.org 0xc8690
	movs r1, #253	@ 000c8690 fd21
.org 0xc8692
	ands r0, r1	@ 000c8692 0840
.org 0xc8694
	strb r0, [r4, #10]	@ 000c8694 a072
.org 0xc8696
	str r2, [r3, #0]	@ 000c8696 1a60
.org 0xc8698
	adds r0, r4, #0	@ 000c8698 201c
.org 0xc869a
	adds r0, #144	@ 000c869a 9030
.org 0xc869c
	str r2, [r0, #0]	@ 000c869c 0260
.org 0xc869e
	adds r0, #4	@ 000c869e 0430
.org 0xc86a0
	strb r2, [r0, #0]	@ 000c86a0 0270
.org 0xc86a2
	ldrb r1, [r4, #10]	@ 000c86a2 a17a
.org 0xc86a4
	movs r0, #251	@ 000c86a4 fb20
.org 0xc86a6
	ands r0, r1	@ 000c86a6 0840
.org 0xc86a8
	strb r0, [r4, #10]	@ 000c86a8 a072
.org 0xc86aa
	ldr r1, [pc, #20]	@ 000c86aa 0549
.org 0xc86ac
	ldrb r0, [r4, #9]	@ 000c86ac 607a
.org 0xc86ae
	lsls r0, r0, #2	@ 000c86ae 8000
.org 0xc86b0
	adds r0, r0, r1	@ 000c86b0 4018
.org 0xc86b2
	movs r1, #3	@ 000c86b2 0321
.org 0xc86b4
	str r1, [r4, #12]	@ 000c86b4 e160
.org 0xc86b6
	ldr r0, [r0, #0]	@ 000c86b6 0068
.org 0xc86b8
	ldr r0, [r0, #12]	@ 000c86b8 c068
.org 0xc86ba
	str r0, [r4, #20]	@ 000c86ba 6061
.org 0xc86bc
	b.n 0xc8704	@ 000c86bc 22e0
.org 0xc86be
	.byte 0x00	@ 000c86be data
.org 0xc86bf
	.byte 0x00	@ 000c86bf data
.org 0xc86c0
	.byte 0xf4,0x49,0x86,0x08	@ 000c86c0 data
.org 0xc86c4
	ldr r1, [r7, #0]	@ 000c86c4 3968
.org 0xc86c6
	ldr r0, [r1, #84]	@ 000c86c6 486d
.org 0xc86c8
	str r0, [r4, #84]	@ 000c86c8 6065
.org 0xc86ca
	ldr r0, [r1, #88]	@ 000c86ca 886d
.org 0xc86cc
	ldr r1, [pc, #36]	@ 000c86cc 0949
.org 0xc86ce
	adds r0, r0, r1	@ 000c86ce 4018
.org 0xc86d0
	str r0, [r4, #88]	@ 000c86d0 a065
.org 0xc86d2
	ldr r2, [pc, #36]	@ 000c86d2 094a
.org 0xc86d4
	adds r0, r5, r2	@ 000c86d4 a818
.org 0xc86d6
	movs r1, #1	@ 000c86d6 0121
.org 0xc86d8
	strb r1, [r0, #0]	@ 000c86d8 0170
.org 0xc86da
	adds r2, #1	@ 000c86da 0132
.org 0xc86dc
	adds r0, r5, r2	@ 000c86dc a818
.org 0xc86de
	strb r6, [r0, #0]	@ 000c86de 0670
.org 0xc86e0
	ldr r0, [r4, #100]	@ 000c86e0 606e
.org 0xc86e2
	cmp r0, #21	@ 000c86e2 1528
.org 0xc86e4
	bgt.n 0xc8704	@ 000c86e4 0edc
.org 0xc86e6
	ands r0, r1	@ 000c86e6 0840
.org 0xc86e8
	cmp r0, #0	@ 000c86e8 0028
.org 0xc86ea
	beq.n 0xc86fc	@ 000c86ea 07d0
