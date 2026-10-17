@ FUN_0806d668  entry 0x0806d668  size 262
.thumb
.org 0x6d668
FUN_0806d668:
	push {r4, r5, r6, r7, lr}	@ 0006d668 f0b5
.org 0x6d66a
	mov r7, sl	@ 0006d66a 5746
.org 0x6d66c
	mov r6, r9	@ 0006d66c 4e46
.org 0x6d66e
	mov r5, r8	@ 0006d66e 4546
.org 0x6d670
	push {r5, r6, r7}	@ 0006d670 e0b4
.org 0x6d672
	sub sp, #4	@ 0006d672 81b0
.org 0x6d674
	adds r4, r0, #0	@ 0006d674 041c
.org 0x6d676
	ldrb r7, [r4, #14]	@ 0006d676 a77b
.org 0x6d678
	cmp r7, #0	@ 0006d678 002f
.org 0x6d67a
	bne.n 0x6d742	@ 0006d67a 62d1
.org 0x6d67c
	adds r1, r4, #0	@ 0006d67c 211c
.org 0x6d67e
	adds r1, #180	@ 0006d67e b431
.org 0x6d680
	ldr r3, [r1, #0]	@ 0006d680 0b68
.org 0x6d682
	negs r0, r3	@ 0006d682 5842
.org 0x6d684
	orrs r0, r3	@ 0006d684 1843
.org 0x6d686
	lsrs r2, r0, #31	@ 0006d686 c20f
.org 0x6d688
	ldr r6, [r1, #4]	@ 0006d688 4e68
.org 0x6d68a
	cmp r6, #0	@ 0006d68a 002e
.org 0x6d68c
	beq.n 0x6d690	@ 0006d68c 00d0
.org 0x6d68e
	adds r2, #1	@ 0006d68e 0132
.org 0x6d690
	ldr r5, [r1, #8]	@ 0006d690 8d68
.org 0x6d692
	cmp r5, #0	@ 0006d692 002d
.org 0x6d694
	beq.n 0x6d69c	@ 0006d694 02d0
.org 0x6d696
	adds r0, r2, #1	@ 0006d696 501c
.org 0x6d698
	lsls r0, r0, #24	@ 0006d698 0006
.org 0x6d69a
	lsrs r2, r0, #24	@ 0006d69a 020e
.org 0x6d69c
	ldr r0, [r1, #12]	@ 0006d69c c868
.org 0x6d69e
	cmp r0, #0	@ 0006d69e 0028
.org 0x6d6a0
	beq.n 0x6d6a8	@ 0006d6a0 02d0
.org 0x6d6a2
	adds r0, r2, #1	@ 0006d6a2 501c
.org 0x6d6a4
	lsls r0, r0, #24	@ 0006d6a4 0006
.org 0x6d6a6
	lsrs r2, r0, #24	@ 0006d6a6 020e
.org 0x6d6a8
	cmp r2, #0	@ 0006d6a8 002a
.org 0x6d6aa
	beq.n 0x6d75e	@ 0006d6aa 58d0
.org 0x6d6ac
	cmp r2, #1	@ 0006d6ac 012a
.org 0x6d6ae
	bne.n 0x6d6ec	@ 0006d6ae 1dd1
.org 0x6d6b0
	cmp r3, #0	@ 0006d6b0 002b
.org 0x6d6b2
	beq.n 0x6d6be	@ 0006d6b2 04d0
.org 0x6d6b4
	adds r0, r4, #0	@ 0006d6b4 201c
.org 0x6d6b6
	adds r0, #216	@ 0006d6b6 d830
.org 0x6d6b8
	strb r7, [r0, #0]	@ 0006d6b8 0770
.org 0x6d6ba
	adds r2, r0, #0	@ 0006d6ba 021c
.org 0x6d6bc
	b.n 0x6d6e2	@ 0006d6bc 11e0
.org 0x6d6be
	cmp r6, #0	@ 0006d6be 002e
.org 0x6d6c0
	beq.n 0x6d6cc	@ 0006d6c0 04d0
.org 0x6d6c2
	adds r0, r4, #0	@ 0006d6c2 201c
.org 0x6d6c4
	adds r0, #216	@ 0006d6c4 d830
.org 0x6d6c6
	strb r2, [r0, #0]	@ 0006d6c6 0270
.org 0x6d6c8
	adds r2, r0, #0	@ 0006d6c8 021c
.org 0x6d6ca
	b.n 0x6d6e2	@ 0006d6ca 0ae0
.org 0x6d6cc
	cmp r5, #0	@ 0006d6cc 002d
.org 0x6d6ce
	beq.n 0x6d6d8	@ 0006d6ce 03d0
.org 0x6d6d0
	adds r1, r4, #0	@ 0006d6d0 211c
.org 0x6d6d2
	adds r1, #216	@ 0006d6d2 d831
.org 0x6d6d4
	movs r0, #2	@ 0006d6d4 0220
.org 0x6d6d6
	b.n 0x6d6de	@ 0006d6d6 02e0
.org 0x6d6d8
	adds r1, r4, #0	@ 0006d6d8 211c
.org 0x6d6da
	adds r1, #216	@ 0006d6da d831
.org 0x6d6dc
	movs r0, #3	@ 0006d6dc 0320
.org 0x6d6de
	strb r0, [r1, #0]	@ 0006d6de 0870
.org 0x6d6e0
	adds r2, r1, #0	@ 0006d6e0 0a1c
.org 0x6d6e2
	adds r3, r4, #0	@ 0006d6e2 231c
.org 0x6d6e4
	adds r3, #217	@ 0006d6e4 d933
.org 0x6d6e6
	adds r5, r4, #0	@ 0006d6e6 251c
.org 0x6d6e8
	adds r5, #212	@ 0006d6e8 d435
.org 0x6d6ea
	b.n 0x6d72c	@ 0006d6ea 1fe0
.org 0x6d6ec
	adds r2, r4, #0	@ 0006d6ec 221c
.org 0x6d6ee
	adds r2, #216	@ 0006d6ee d832
.org 0x6d6f0
	adds r3, r4, #0	@ 0006d6f0 231c
.org 0x6d6f2
	adds r3, #217	@ 0006d6f2 d933
.org 0x6d6f4
	adds r5, r4, #0	@ 0006d6f4 251c
.org 0x6d6f6
	adds r5, #212	@ 0006d6f6 d435
.org 0x6d6f8
	ldr r6, [pc, #116]	@ 0006d6f8 1d4e
.org 0x6d6fa
	ldr r0, [pc, #120]	@ 0006d6fa 1e48
.org 0x6d6fc
	mov sl, r0	@ 0006d6fc 8246
.org 0x6d6fe
	str r2, [sp, #0]	@ 0006d6fe 0092
.org 0x6d700
	ldr r1, [pc, #116]	@ 0006d700 1d49
.org 0x6d702
	mov r9, r1	@ 0006d702 8946
.org 0x6d704
	movs r7, #3	@ 0006d704 0327
.org 0x6d706
	mov r8, r7	@ 0006d706 b846
.org 0x6d708
	mov ip, r3	@ 0006d708 9c46
.org 0x6d70a
	ldr r0, [r6, #0]	@ 0006d70a 3068
.org 0x6d70c
	mov r1, sl	@ 0006d70c 5146
.org 0x6d70e
	muls r1, r0	@ 0006d70e 4143
.org 0x6d710
	adds r0, r1, #0	@ 0006d710 081c
.org 0x6d712
	add r0, r9	@ 0006d712 4844
.org 0x6d714
	lsls r0, r0, #1	@ 0006d714 4000
.org 0x6d716
	lsrs r1, r0, #1	@ 0006d716 4108
.org 0x6d718
	str r1, [r6, #0]	@ 0006d718 3160
.org 0x6d71a
	lsrs r0, r0, #17	@ 0006d71a 400c
.org 0x6d71c
	mov r7, r8	@ 0006d71c 4746
.org 0x6d71e
	ands r0, r7	@ 0006d71e 3840
.org 0x6d720
	ldr r1, [sp, #0]	@ 0006d720 0099
.org 0x6d722
	strb r0, [r1, #0]	@ 0006d722 0870
.org 0x6d724
	mov r7, ip	@ 0006d724 6746
.org 0x6d726
	ldrb r1, [r7, #0]	@ 0006d726 3978
.org 0x6d728
	cmp r1, r0	@ 0006d728 8142
.org 0x6d72a
	beq.n 0x6d70a	@ 0006d72a eed0
.org 0x6d72c
	ldrb r0, [r2, #0]	@ 0006d72c 1078
.org 0x6d72e
	strb r0, [r3, #0]	@ 0006d72e 1870
.org 0x6d730
	ldrb r0, [r2, #0]	@ 0006d730 1078
.org 0x6d732
	adds r0, r5, r0	@ 0006d732 2818
.org 0x6d734
	movs r1, #1	@ 0006d734 0121
.org 0x6d736
	strb r1, [r0, #0]	@ 0006d736 0170
.org 0x6d738
	movs r0, #32	@ 0006d738 2020
.org 0x6d73a
	strb r0, [r4, #18]	@ 0006d73a a074
.org 0x6d73c
	ldrb r0, [r4, #14]	@ 0006d73c a07b
.org 0x6d73e
	adds r0, #1	@ 0006d73e 0130
.org 0x6d740
	strb r0, [r4, #14]	@ 0006d740 a073
.org 0x6d742
	adds r0, r4, #0	@ 0006d742 201c
.org 0x6d744
	bl 0x1cff0	@ 0006d744 aff754fc
.org 0x6d748
	ldrb r0, [r4, #18]	@ 0006d748 a07c
.org 0x6d74a
	subs r0, #1	@ 0006d74a 0138
.org 0x6d74c
	strb r0, [r4, #18]	@ 0006d74c a074
.org 0x6d74e
	lsls r0, r0, #24	@ 0006d74e 0006
.org 0x6d750
	lsrs r0, r0, #24	@ 0006d750 000e
.org 0x6d752
	cmp r0, #255	@ 0006d752 ff28
.org 0x6d754
	bne.n 0x6d75e	@ 0006d754 03d1
.org 0x6d756
	movs r0, #4	@ 0006d756 0420
.org 0x6d758
	strb r0, [r4, #13]	@ 0006d758 6073
.org 0x6d75a
	movs r0, #0	@ 0006d75a 0020
.org 0x6d75c
	strb r0, [r4, #14]	@ 0006d75c a073
.org 0x6d75e
	add sp, #4	@ 0006d75e 01b0
.org 0x6d760
	pop {r3, r4, r5}	@ 0006d760 38bc
.org 0x6d762
	mov r8, r3	@ 0006d762 9846
.org 0x6d764
	mov r9, r4	@ 0006d764 a146
.org 0x6d766
	mov sl, r5	@ 0006d766 aa46
.org 0x6d768
	pop {r4, r5, r6, r7}	@ 0006d768 f0bc
.org 0x6d76a
	pop {r0}	@ 0006d76a 01bc
.org 0x6d76c
	bx r0	@ 0006d76c 0047
