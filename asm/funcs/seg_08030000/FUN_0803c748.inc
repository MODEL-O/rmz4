@ FUN_0803c748  entry 0x0803c748  size 246
.thumb
.org 0x3c748
FUN_0803c748:
	push {r4, r5, r6, lr}	@ 0003c748 70b5
.org 0x3c74a
	adds r4, r0, #0	@ 0003c74a 041c
.org 0x3c74c
	adds r5, r4, #0	@ 0003c74c 251c
.org 0x3c74e
	adds r5, #180	@ 0003c74e b435
.org 0x3c750
	ldr r6, [r5, #0]	@ 0003c750 2e68
.org 0x3c752
	ldr r0, [pc, #68]	@ 0003c752 1148
.org 0x3c754
	adds r1, r6, r0	@ 0003c754 3118
.org 0x3c756
	ldrb r0, [r4, #16]	@ 0003c756 207c
.org 0x3c758
	ldrb r1, [r1, #0]	@ 0003c758 0978
.org 0x3c75a
	cmp r0, r1	@ 0003c75a 8842
.org 0x3c75c
	beq.n 0x3c7a0	@ 0003c75c 20d0
.org 0x3c75e
	ldrb r1, [r4, #10]	@ 0003c75e a17a
.org 0x3c760
	movs r0, #254	@ 0003c760 fe20
.org 0x3c762
	ands r0, r1	@ 0003c762 0840
.org 0x3c764
	movs r2, #0	@ 0003c764 0022
.org 0x3c766
	movs r1, #253	@ 0003c766 fd21
.org 0x3c768
	ands r0, r1	@ 0003c768 0840
.org 0x3c76a
	strb r0, [r4, #10]	@ 0003c76a a072
.org 0x3c76c
	adds r0, r4, #0	@ 0003c76c 201c
.org 0x3c76e
	adds r0, #140	@ 0003c76e 8c30
.org 0x3c770
	str r2, [r0, #0]	@ 0003c770 0260
.org 0x3c772
	adds r0, #4	@ 0003c772 0430
.org 0x3c774
	str r2, [r0, #0]	@ 0003c774 0260
.org 0x3c776
	adds r0, #4	@ 0003c776 0430
.org 0x3c778
	strb r2, [r0, #0]	@ 0003c778 0270
.org 0x3c77a
	ldrb r1, [r4, #10]	@ 0003c77a a17a
.org 0x3c77c
	movs r0, #251	@ 0003c77c fb20
.org 0x3c77e
	ands r0, r1	@ 0003c77e 0840
.org 0x3c780
	strb r0, [r4, #10]	@ 0003c780 a072
.org 0x3c782
	ldr r1, [pc, #24]	@ 0003c782 0649
.org 0x3c784
	ldrb r0, [r4, #9]	@ 0003c784 607a
.org 0x3c786
	lsls r0, r0, #2	@ 0003c786 8000
.org 0x3c788
	adds r0, r0, r1	@ 0003c788 4018
.org 0x3c78a
	movs r1, #3	@ 0003c78a 0321
.org 0x3c78c
	str r1, [r4, #12]	@ 0003c78c e160
.org 0x3c78e
	ldr r0, [r0, #0]	@ 0003c78e 0068
.org 0x3c790
	ldr r0, [r0, #12]	@ 0003c790 c068
.org 0x3c792
	str r0, [r4, #20]	@ 0003c792 6061
.org 0x3c794
	b.n 0x3c842	@ 0003c794 55e0
.org 0x3c796
	.byte 0x00	@ 0003c796 data
.org 0x3c797
	.byte 0x00	@ 0003c797 data
.org 0x3c798
	.byte 0x49,0x01,0x00,0x00	@ 0003c798 data
.org 0x3c79c
	.byte 0xf8,0x39,0x85,0x08	@ 0003c79c data
.org 0x3c7a0
	ldrb r0, [r5, #15]	@ 0003c7a0 e87b
.org 0x3c7a2
	cmp r0, #0	@ 0003c7a2 0028
.org 0x3c7a4
	beq.n 0x3c7c0	@ 0003c7a4 0cd0
.org 0x3c7a6
	adds r0, r4, #0	@ 0003c7a6 201c
.org 0x3c7a8
	adds r0, #140	@ 0003c7a8 8c30
.org 0x3c7aa
	ldr r0, [r0, #0]	@ 0003c7aa 0068
.org 0x3c7ac
	movs r1, #128	@ 0003c7ac 8021
.org 0x3c7ae
	lsls r1, r1, #5	@ 0003c7ae 4901
.org 0x3c7b0
	ands r0, r1	@ 0003c7b0 0840
.org 0x3c7b2
	cmp r0, #0	@ 0003c7b2 0028
.org 0x3c7b4
	beq.n 0x3c7c0	@ 0003c7b4 04d0
.org 0x3c7b6
	movs r0, #43	@ 0003c7b6 2b20
.org 0x3c7b8
	bl 0x2b10	@ 0003c7b8 c6f7aaf9
.org 0x3c7bc
	movs r0, #0	@ 0003c7bc 0020
.org 0x3c7be
	strb r0, [r5, #15]	@ 0003c7be e873
.org 0x3c7c0
	ldrb r0, [r4, #16]	@ 0003c7c0 207c
.org 0x3c7c2
	cmp r0, #6	@ 0003c7c2 0628
.org 0x3c7c4
	bne.n 0x3c7f4	@ 0003c7c4 16d1
.org 0x3c7c6
	ldrb r0, [r6, #13]	@ 0003c7c6 707b
.org 0x3c7c8
	cmp r0, #2	@ 0003c7c8 0228
.org 0x3c7ca
	bne.n 0x3c7e0	@ 0003c7ca 09d1
.org 0x3c7cc
	ldrb r0, [r6, #10]	@ 0003c7cc b07a
.org 0x3c7ce
	lsrs r2, r0, #4	@ 0003c7ce 0209
.org 0x3c7d0
	movs r0, #1	@ 0003c7d0 0120
.org 0x3c7d2
	ands r2, r0	@ 0003c7d2 0240
.org 0x3c7d4
	cmp r2, #0	@ 0003c7d4 002a
.org 0x3c7d6
	beq.n 0x3c808	@ 0003c7d6 17d0
.org 0x3c7d8
	ldrb r1, [r4, #10]	@ 0003c7d8 a17a
.org 0x3c7da
	movs r0, #16	@ 0003c7da 1020
.org 0x3c7dc
	orrs r0, r1	@ 0003c7dc 0843
.org 0x3c7de
	b.n 0x3c80e	@ 0003c7de 16e0
.org 0x3c7e0
	ldrb r0, [r6, #10]	@ 0003c7e0 b07a
.org 0x3c7e2
	lsrs r0, r0, #4	@ 0003c7e2 0009
.org 0x3c7e4
	movs r2, #1	@ 0003c7e4 0122
.org 0x3c7e6
	bics r2, r0	@ 0003c7e6 8243
.org 0x3c7e8
	cmp r2, #0	@ 0003c7e8 002a
.org 0x3c7ea
	beq.n 0x3c808	@ 0003c7ea 0dd0
.org 0x3c7ec
	ldrb r1, [r4, #10]	@ 0003c7ec a17a
.org 0x3c7ee
	movs r0, #16	@ 0003c7ee 1020
.org 0x3c7f0
	orrs r0, r1	@ 0003c7f0 0843
.org 0x3c7f2
	b.n 0x3c80e	@ 0003c7f2 0ce0
.org 0x3c7f4
	ldrb r0, [r6, #10]	@ 0003c7f4 b07a
.org 0x3c7f6
	lsrs r2, r0, #4	@ 0003c7f6 0209
.org 0x3c7f8
	movs r0, #1	@ 0003c7f8 0120
.org 0x3c7fa
	ands r2, r0	@ 0003c7fa 0240
.org 0x3c7fc
	cmp r2, #0	@ 0003c7fc 002a
.org 0x3c7fe
	beq.n 0x3c808	@ 0003c7fe 03d0
.org 0x3c800
	ldrb r1, [r4, #10]	@ 0003c800 a17a
.org 0x3c802
	movs r0, #16	@ 0003c802 1020
.org 0x3c804
	orrs r0, r1	@ 0003c804 0843
.org 0x3c806
	b.n 0x3c80e	@ 0003c806 02e0
.org 0x3c808
	ldrb r1, [r4, #10]	@ 0003c808 a17a
.org 0x3c80a
	movs r0, #239	@ 0003c80a ef20
.org 0x3c80c
	ands r0, r1	@ 0003c80c 0840
.org 0x3c80e
	strb r0, [r4, #10]	@ 0003c80e a072
.org 0x3c810
	adds r1, r2, #0	@ 0003c810 111c
.org 0x3c812
	adds r0, r4, #0	@ 0003c812 201c
.org 0x3c814
	adds r0, #76	@ 0003c814 4c30
.org 0x3c816
	strb r1, [r0, #0]	@ 0003c816 0170
.org 0x3c818
	adds r3, r4, #0	@ 0003c818 231c
.org 0x3c81a
	adds r3, #74	@ 0003c81a 4a33
.org 0x3c81c
	lsls r1, r1, #4	@ 0003c81c 0901
.org 0x3c81e
	ldrb r2, [r3, #0]	@ 0003c81e 1a78
.org 0x3c820
	movs r0, #17	@ 0003c820 1120
.org 0x3c822
	negs r0, r0	@ 0003c822 4042
.org 0x3c824
	ands r0, r2	@ 0003c824 1040
.org 0x3c826
	orrs r0, r1	@ 0003c826 0843
.org 0x3c828
	strb r0, [r3, #0]	@ 0003c828 1870
.org 0x3c82a
	ldr r0, [r6, #84]	@ 0003c82a 706d
.org 0x3c82c
	str r0, [r4, #84]	@ 0003c82c 6065
.org 0x3c82e
	ldr r0, [r6, #88]	@ 0003c82e b06d
.org 0x3c830
	str r0, [r4, #88]	@ 0003c830 a065
.org 0x3c832
	ldr r1, [pc, #20]	@ 0003c832 0549
.org 0x3c834
	ldrb r0, [r4, #16]	@ 0003c834 207c
.org 0x3c836
	lsls r0, r0, #2	@ 0003c836 8000
.org 0x3c838
	adds r0, r0, r1	@ 0003c838 4018
.org 0x3c83a
	ldr r1, [r0, #0]	@ 0003c83a 0168
.org 0x3c83c
	adds r0, r4, #0	@ 0003c83c 201c
