@ FUN_080ca768  entry 0x080ca768  size 232
.thumb
.org 0xca768
FUN_080ca768:
	push {r4, r5, r6, lr}	@ 000ca768 70b5
.org 0xca76a
	adds r6, r0, #0	@ 000ca76a 061c
.org 0xca76c
	bl 0x1cc9c	@ 000ca76c 52f796fa
.org 0xca770
	ldrb r1, [r6, #10]	@ 000ca770 b17a
.org 0xca772
	movs r0, #1	@ 000ca772 0120
.org 0xca774
	movs r5, #0	@ 000ca774 0025
.org 0xca776
	orrs r0, r1	@ 000ca776 0843
.org 0xca778
	movs r1, #2	@ 000ca778 0221
.org 0xca77a
	orrs r0, r1	@ 000ca77a 0843
.org 0xca77c
	strb r0, [r6, #10]	@ 000ca77c b072
.org 0xca77e
	movs r1, #250	@ 000ca77e fa21
.org 0xca780
	lsls r1, r1, #7	@ 000ca780 c901
.org 0xca782
	adds r0, r6, #0	@ 000ca782 301c
.org 0xca784
	bl 0x1cf00	@ 000ca784 52f7bcfb
.org 0xca788
	adds r0, r6, #0	@ 000ca788 301c
.org 0xca78a
	bl 0x1cff0	@ 000ca78a 52f731fc
.org 0xca78e
	ldrb r1, [r6, #10]	@ 000ca78e b17a
.org 0xca790
	movs r0, #4	@ 000ca790 0420
.org 0xca792
	orrs r0, r1	@ 000ca792 0843
.org 0xca794
	strb r0, [r6, #10]	@ 000ca794 b072
.org 0xca796
	adds r4, r6, #0	@ 000ca796 341c
.org 0xca798
	adds r4, #116	@ 000ca798 7434
.org 0xca79a
	ldr r1, [pc, #44]	@ 000ca79a 0b49
.org 0xca79c
	adds r2, r6, #0	@ 000ca79c 321c
.org 0xca79e
	adds r2, #84	@ 000ca79e 5432
.org 0xca7a0
	adds r0, r4, #0	@ 000ca7a0 201c
.org 0xca7a2
	movs r3, #8	@ 000ca7a2 0823
.org 0xca7a4
	bl 0x5760	@ 000ca7a4 3af7dcff
.org 0xca7a8
	str r6, [r4, #44]	@ 000ca7a8 e662
.org 0xca7aa
	str r5, [r4, #36]	@ 000ca7aa 6562
.org 0xca7ac
	ldrb r1, [r6, #10]	@ 000ca7ac b17a
.org 0xca7ae
	movs r0, #16	@ 000ca7ae 1020
.org 0xca7b0
	ands r0, r1	@ 000ca7b0 0840
.org 0xca7b2
	cmp r0, #0	@ 000ca7b2 0028
.org 0xca7b4
	beq.n 0xca7cc	@ 000ca7b4 0ad0
.org 0xca7b6
	ldr r0, [r6, #84]	@ 000ca7b6 706d
.org 0xca7b8
	movs r1, #160	@ 000ca7b8 a021
.org 0xca7ba
	lsls r1, r1, #5	@ 000ca7ba 4901
.org 0xca7bc
	adds r0, r0, r1	@ 000ca7bc 4018
.org 0xca7be
	str r0, [r6, #84]	@ 000ca7be 7065
.org 0xca7c0
	movs r0, #176	@ 000ca7c0 b020
.org 0xca7c2
	lsls r0, r0, #2	@ 000ca7c2 8000
.org 0xca7c4
	b.n 0xca7d6	@ 000ca7c4 07e0
.org 0xca7c6
	.byte 0x00	@ 000ca7c6 data
.org 0xca7c7
	.byte 0x00	@ 000ca7c7 data
.org 0xca7c8
	.byte 0x34,0x63,0x86,0x08	@ 000ca7c8 data
.org 0xca7cc
	ldr r0, [r6, #84]	@ 000ca7cc 706d
.org 0xca7ce
	ldr r1, [pc, #36]	@ 000ca7ce 0949
.org 0xca7d0
	adds r0, r0, r1	@ 000ca7d0 4018
.org 0xca7d2
	str r0, [r6, #84]	@ 000ca7d2 7065
.org 0xca7d4
	ldr r0, [pc, #32]	@ 000ca7d4 0848
.org 0xca7d6
	str r0, [r6, #92]	@ 000ca7d6 f065
.org 0xca7d8
	ldrb r0, [r6, #17]	@ 000ca7d8 707c
.org 0xca7da
	cmp r0, #0	@ 000ca7da 0028
.org 0xca7dc
	beq.n 0xca800	@ 000ca7dc 10d0
.org 0xca7de
	ldr r0, [r6, #84]	@ 000ca7de 706d
.org 0xca7e0
	ldr r1, [r6, #88]	@ 000ca7e0 b16d
.org 0xca7e2
	bl 0x8748	@ 000ca7e2 3df7b1ff
.org 0xca7e6
	ldr r1, [pc, #20]	@ 000ca7e6 0549
.org 0xca7e8
	adds r0, r0, r1	@ 000ca7e8 4018
.org 0xca7ea
	str r0, [r6, #88]	@ 000ca7ea b065
.org 0xca7ec
	movs r0, #128	@ 000ca7ec 8020
.org 0xca7ee
	lsls r0, r0, #5	@ 000ca7ee 4001
.org 0xca7f0
	b.n 0xca812	@ 000ca7f0 0fe0
.org 0xca7f2
	.byte 0x00	@ 000ca7f2 data
.org 0xca7f3
	.byte 0x00	@ 000ca7f3 data
.org 0xca7f4
	.byte 0x00,0xec,0xff,0xff	@ 000ca7f4 data
.org 0xca7f8
	.byte 0x40,0xfd,0xff,0xff	@ 000ca7f8 data
.org 0xca7fc
	.byte 0x00,0xff,0xff,0xff	@ 000ca7fc data
.org 0xca800
	ldr r0, [r6, #84]	@ 000ca800 706d
.org 0xca802
	ldr r1, [r6, #88]	@ 000ca802 b16d
.org 0xca804
	bl 0x8534	@ 000ca804 3df796fe
.org 0xca808
	movs r1, #128	@ 000ca808 8021
.org 0xca80a
	lsls r1, r1, #1	@ 000ca80a 4900
.org 0xca80c
	adds r0, r0, r1	@ 000ca80c 4018
.org 0xca80e
	str r0, [r6, #88]	@ 000ca80e b065
.org 0xca810
	ldr r0, [pc, #16]	@ 000ca810 0448
.org 0xca812
	str r0, [r6, #104]	@ 000ca812 b066
.org 0xca814
	ldrb r2, [r6, #17]	@ 000ca814 727c
.org 0xca816
	cmp r2, #0	@ 000ca816 002a
.org 0xca818
	beq.n 0xca828	@ 000ca818 06d0
.org 0xca81a
	ldrb r1, [r6, #10]	@ 000ca81a b17a
.org 0xca81c
	movs r0, #32	@ 000ca81c 2020
.org 0xca81e
	orrs r0, r1	@ 000ca81e 0843
.org 0xca820
	b.n 0xca82e	@ 000ca820 05e0
.org 0xca822
	.byte 0x00	@ 000ca822 data
.org 0xca823
	.byte 0x00	@ 000ca823 data
.org 0xca824
	.byte 0x00,0xf0,0xff,0xff	@ 000ca824 data
.org 0xca828
	ldrb r1, [r6, #10]	@ 000ca828 b17a
.org 0xca82a
	movs r0, #223	@ 000ca82a df20
.org 0xca82c
	ands r0, r1	@ 000ca82c 0840
.org 0xca82e
	strb r0, [r6, #10]	@ 000ca82e b072
.org 0xca830
	movs r3, #1	@ 000ca830 0123
.org 0xca832
	adds r1, r3, #0	@ 000ca832 191c
.org 0xca834
	ands r1, r2	@ 000ca834 1140
.org 0xca836
	adds r0, r6, #0	@ 000ca836 301c
.org 0xca838
	adds r0, #77	@ 000ca838 4d30
.org 0xca83a
	strb r1, [r0, #0]	@ 000ca83a 0170
.org 0xca83c
	adds r4, r6, #0	@ 000ca83c 341c
.org 0xca83e
	adds r4, #74	@ 000ca83e 4a34
.org 0xca840
	lsls r1, r1, #5	@ 000ca840 4901
.org 0xca842
	ldrb r2, [r4, #0]	@ 000ca842 2278
.org 0xca844
	movs r0, #33	@ 000ca844 2120
.org 0xca846
	negs r0, r0	@ 000ca846 4042
.org 0xca848
	ands r0, r2	@ 000ca848 1040
.org 0xca84a
	orrs r0, r1	@ 000ca84a 0843
.org 0xca84c
	strb r0, [r4, #0]	@ 000ca84c 2070
.org 0xca84e
	ldr r1, [pc, #28]	@ 000ca84e 0749
