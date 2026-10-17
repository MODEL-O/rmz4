@ FUN_080e8610  entry 0x080e8610  size 164
.thumb
.org 0xe8610
FUN_080e8610:
	push {r4, r5, r6, r7, lr}	@ 000e8610 f0b5
.org 0xe8612
	adds r7, r0, #0	@ 000e8612 071c
.org 0xe8614
	lsls r5, r1, #16	@ 000e8614 0d04
.org 0xe8616
	lsrs r6, r5, #16	@ 000e8616 2e0c
.org 0xe8618
	lsls r2, r2, #24	@ 000e8618 1206
.org 0xe861a
	lsrs r4, r2, #24	@ 000e861a 140e
.org 0xe861c
	ldr r0, [pc, #76]	@ 000e861c 1348
.org 0xe861e
	ldr r0, [r0, #0]	@ 000e861e 0068
.org 0xe8620
	bl 0x5500	@ 000e8620 1cf76eff
.org 0xe8624
	adds r3, r0, #0	@ 000e8624 031c
.org 0xe8626
	cmp r3, #0	@ 000e8626 002b
.org 0xe8628
	beq.n 0xe86b6	@ 000e8628 45d0
.org 0xe862a
	adds r1, r3, #0	@ 000e862a 191c
.org 0xe862c
	adds r1, #37	@ 000e862c 2531
.org 0xe862e
	movs r2, #0	@ 000e862e 0022
.org 0xe8630
	movs r0, #1	@ 000e8630 0120
.org 0xe8632
	strb r0, [r1, #0]	@ 000e8632 0870
.org 0xe8634
	ldr r0, [pc, #56]	@ 000e8634 0e48
.org 0xe8636
	movs r1, #88	@ 000e8636 5821
.org 0xe8638
	strb r1, [r3, #9]	@ 000e8638 5972
.org 0xe863a
	movs r1, #176	@ 000e863a b021
.org 0xe863c
	lsls r1, r1, #1	@ 000e863c 4900
.org 0xe863e
	adds r0, r0, r1	@ 000e863e 4018
.org 0xe8640
	ldr r0, [r0, #0]	@ 000e8640 0068
.org 0xe8642
	ldr r0, [r0, #0]	@ 000e8642 0068
.org 0xe8644
	str r0, [r3, #20]	@ 000e8644 5861
.org 0xe8646
	movs r0, #0	@ 000e8646 0020
.org 0xe8648
	strh r2, [r3, #32]	@ 000e8648 1a84
.org 0xe864a
	adds r1, r3, #0	@ 000e864a 191c
.org 0xe864c
	adds r1, #34	@ 000e864c 2231
.org 0xe864e
	strb r0, [r1, #0]	@ 000e864e 0870
.org 0xe8650
	ldr r0, [r7, #0]	@ 000e8650 3868
.org 0xe8652
	ldr r1, [r7, #4]	@ 000e8652 7968
.org 0xe8654
	str r0, [r3, #84]	@ 000e8654 5865
.org 0xe8656
	str r1, [r3, #88]	@ 000e8656 9965
.org 0xe8658
	lsrs r0, r5, #24	@ 000e8658 280e
.org 0xe865a
	strb r0, [r3, #16]	@ 000e865a 1874
.org 0xe865c
	strb r6, [r3, #17]	@ 000e865c 5e74
.org 0xe865e
	adds r2, r4, #0	@ 000e865e 221c
.org 0xe8660
	cmp r4, #0	@ 000e8660 002c
.org 0xe8662
	beq.n 0xe8674	@ 000e8662 07d0
.org 0xe8664
	ldrb r0, [r3, #10]	@ 000e8664 987a
.org 0xe8666
	movs r1, #16	@ 000e8666 1021
.org 0xe8668
	orrs r0, r1	@ 000e8668 0843
.org 0xe866a
	b.n 0xe867a	@ 000e866a 06e0
.org 0xe866c
	.byte 0x9c,0xed,0x02,0x02	@ 000e866c data
.org 0xe8670
	.byte 0x64,0x6f,0x86,0x08	@ 000e8670 data
.org 0xe8674
	ldrb r1, [r3, #10]	@ 000e8674 997a
.org 0xe8676
	movs r0, #239	@ 000e8676 ef20
.org 0xe8678
	ands r0, r1	@ 000e8678 0840
.org 0xe867a
	strb r0, [r3, #10]	@ 000e867a 9872
.org 0xe867c
	movs r1, #1	@ 000e867c 0121
.org 0xe867e
	ands r1, r2	@ 000e867e 1140
.org 0xe8680
	adds r0, r3, #0	@ 000e8680 181c
.org 0xe8682
	adds r0, #76	@ 000e8682 4c30
.org 0xe8684
	strb r1, [r0, #0]	@ 000e8684 0170
.org 0xe8686
	movs r0, #74	@ 000e8686 4a20
.org 0xe8688
	adds r0, r0, r3	@ 000e8688 c018
.org 0xe868a
	mov ip, r0	@ 000e868a 8446
.org 0xe868c
	lsls r1, r1, #4	@ 000e868c 0901
.org 0xe868e
	ldrb r2, [r0, #0]	@ 000e868e 0278
.org 0xe8690
	movs r0, #17	@ 000e8690 1120
.org 0xe8692
	negs r0, r0	@ 000e8692 4042
.org 0xe8694
	ands r0, r2	@ 000e8694 1040
.org 0xe8696
	orrs r0, r1	@ 000e8696 0843
.org 0xe8698
	mov r1, ip	@ 000e8698 6146
.org 0xe869a
	strb r0, [r1, #0]	@ 000e869a 0870
.org 0xe869c
	ldrb r0, [r3, #16]	@ 000e869c 187c
.org 0xe869e
	cmp r0, #5	@ 000e869e 0528
.org 0xe86a0
	bne.n 0xe86b6	@ 000e86a0 09d1
.org 0xe86a2
	ldrb r0, [r3, #17]	@ 000e86a2 587c
.org 0xe86a4
	cmp r0, #3	@ 000e86a4 0328
.org 0xe86a6
	bhi.n 0xe86b6	@ 000e86a6 06d8
.org 0xe86a8
	adds r1, r6, #1	@ 000e86a8 711c
.org 0xe86aa
	lsls r1, r1, #16	@ 000e86aa 0904
.org 0xe86ac
	lsrs r1, r1, #16	@ 000e86ac 090c
.org 0xe86ae
	adds r0, r7, #0	@ 000e86ae 381c
.org 0xe86b0
	adds r2, r4, #0	@ 000e86b0 221c
.org 0xe86b2
	bl 0xe8610	@ 000e86b2 fff7adff
