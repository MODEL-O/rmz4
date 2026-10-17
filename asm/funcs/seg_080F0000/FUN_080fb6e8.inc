@ FUN_080fb6e8  entry 0x080fb6e8  size 244
.thumb
.org 0xfb6e8
FUN_080fb6e8:
	push {r4, r5, r6, r7, lr}	@ 000fb6e8 f0b5
.org 0xfb6ea
	mov r7, r8	@ 000fb6ea 4746
.org 0xfb6ec
	push {r7}	@ 000fb6ec 80b4
.org 0xfb6ee
	adds r7, r0, #0	@ 000fb6ee 071c
.org 0xfb6f0
	ldr r0, [pc, #84]	@ 000fb6f0 1548
.org 0xfb6f2
	ldr r1, [pc, #88]	@ 000fb6f2 1649
.org 0xfb6f4
	movs r4, #191	@ 000fb6f4 bf24
.org 0xfb6f6
	lsls r4, r4, #1	@ 000fb6f6 6400
.org 0xfb6f8
	adds r1, r1, r4	@ 000fb6f8 0919
.org 0xfb6fa
	ldrh r1, [r1, #0]	@ 000fb6fa 0988
.org 0xfb6fc
	ldrh r2, [r0, #6]	@ 000fb6fc c288
.org 0xfb6fe
	lsrs r2, r2, #6	@ 000fb6fe 9209
.org 0xfb700
	subs r1, r1, r2	@ 000fb700 891a
.org 0xfb702
	lsls r1, r1, #5	@ 000fb702 4901
.org 0xfb704
	movs r2, #128	@ 000fb704 8022
.org 0xfb706
	lsls r2, r2, #9	@ 000fb706 5202
.org 0xfb708
	adds r1, r1, r2	@ 000fb708 8918
.org 0xfb70a
	bl 0x1d30	@ 000fb70a 06f711fb
.org 0xfb70e
	ldr r0, [pc, #64]	@ 000fb70e 1048
.org 0xfb710
	ldr r1, [pc, #64]	@ 000fb710 1049
.org 0xfb712
	adds r1, r1, r4	@ 000fb712 0919
.org 0xfb714
	ldrh r1, [r1, #0]	@ 000fb714 0988
.org 0xfb716
	ldrb r2, [r0, #7]	@ 000fb716 c279
.org 0xfb718
	subs r1, r1, r2	@ 000fb718 891a
.org 0xfb71a
	lsls r1, r1, #5	@ 000fb71a 4901
.org 0xfb71c
	movs r2, #128	@ 000fb71c 8022
.org 0xfb71e
	lsls r2, r2, #2	@ 000fb71e 9200
.org 0xfb720
	adds r1, r1, r2	@ 000fb720 8918
.org 0xfb722
	bl 0x2208	@ 000fb722 06f771fd
.org 0xfb726
	adds r0, r7, #0	@ 000fb726 381c
.org 0xfb728
	bl 0x1cc9c	@ 000fb728 21f7b8fa
.org 0xfb72c
	ldrb r1, [r7, #10]	@ 000fb72c b97a
.org 0xfb72e
	movs r0, #1	@ 000fb72e 0120
.org 0xfb730
	orrs r0, r1	@ 000fb730 0843
.org 0xfb732
	movs r1, #2	@ 000fb732 0221
.org 0xfb734
	orrs r0, r1	@ 000fb734 0843
.org 0xfb736
	strb r0, [r7, #10]	@ 000fb736 b872
.org 0xfb738
	ldrb r0, [r7, #16]	@ 000fb738 387c
.org 0xfb73a
	cmp r0, #0	@ 000fb73a 0028
.org 0xfb73c
	beq.n 0xfb75c	@ 000fb73c 0ed0
.org 0xfb73e
	ldr r1, [pc, #24]	@ 000fb73e 0649
.org 0xfb740
	adds r0, r7, #0	@ 000fb740 381c
.org 0xfb742
	bl 0x1cf00	@ 000fb742 21f7ddfb
.org 0xfb746
	b.n 0xfb766	@ 000fb746 0ee0
.org 0xfb748
	.byte 0xec,0x4e,0xc4,0x08	@ 000fb748 data
.org 0xfb74c
	.byte 0x40,0xe0,0x02,0x02	@ 000fb74c data
.org 0xfb750
	.byte 0xf8,0x4e,0xc4,0x08	@ 000fb750 data
.org 0xfb754
	.byte 0x40,0xde,0x02,0x02	@ 000fb754 data
.org 0xfb758
	.byte 0x03,0xbf,0x00,0x00	@ 000fb758 data
.org 0xfb75c
	.byte 0xbf,0x21	@ 000fb75c (raw)
.org 0xfb75e
	.byte 0x09,0x02	@ 000fb75e (raw)
.org 0xfb760
	.byte 0x38,0x1c	@ 000fb760 (raw)
.org 0xfb762
	bl 0x1cf00	@ 000fb762 21f7cdfb
.org 0xfb766
	adds r0, r7, #0	@ 000fb766 381c
.org 0xfb768
	bl 0x1cff0	@ 000fb768 21f742fc
.org 0xfb76c
	movs r5, #0	@ 000fb76c 0025
.org 0xfb76e
	ldrb r1, [r7, #10]	@ 000fb76e b97a
.org 0xfb770
	movs r0, #239	@ 000fb770 ef20
.org 0xfb772
	ands r0, r1	@ 000fb772 0840
.org 0xfb774
	strb r0, [r7, #10]	@ 000fb774 b872
.org 0xfb776
	movs r0, #1	@ 000fb776 0120
.org 0xfb778
	mov r8, r0	@ 000fb778 8046
.org 0xfb77a
	adds r0, r7, #0	@ 000fb77a 381c
.org 0xfb77c
	adds r0, #76	@ 000fb77c 4c30
.org 0xfb77e
	strb r5, [r0, #0]	@ 000fb77e 0570
.org 0xfb780
	adds r2, r7, #0	@ 000fb780 3a1c
.org 0xfb782
	adds r2, #74	@ 000fb782 4a32
.org 0xfb784
	ldrb r1, [r2, #0]	@ 000fb784 1178
.org 0xfb786
	movs r0, #17	@ 000fb786 1120
.org 0xfb788
	negs r0, r0	@ 000fb788 4042
.org 0xfb78a
	ands r0, r1	@ 000fb78a 0840
.org 0xfb78c
	strb r0, [r2, #0]	@ 000fb78c 1070
.org 0xfb78e
	ldrb r0, [r7, #10]	@ 000fb78e b87a
.org 0xfb790
	movs r6, #4	@ 000fb790 0426
.org 0xfb792
	orrs r0, r6	@ 000fb792 3043
.org 0xfb794
	strb r0, [r7, #10]	@ 000fb794 b872
.org 0xfb796
	adds r4, r7, #0	@ 000fb796 3c1c
.org 0xfb798
	adds r4, #116	@ 000fb798 7434
.org 0xfb79a
	ldr r1, [pc, #84]	@ 000fb79a 1549
.org 0xfb79c
	adds r2, #10	@ 000fb79c 0a32
.org 0xfb79e
	adds r0, r4, #0	@ 000fb79e 201c
.org 0xfb7a0
	movs r3, #8	@ 000fb7a0 0823
.org 0xfb7a2
	bl 0x5760	@ 000fb7a2 09f7ddff
.org 0xfb7a6
	str r7, [r4, #44]	@ 000fb7a6 e762
.org 0xfb7a8
	ldr r0, [pc, #72]	@ 000fb7a8 1248
.org 0xfb7aa
	str r0, [r4, #36]	@ 000fb7aa 6062
.org 0xfb7ac
	adds r2, r7, #0	@ 000fb7ac 3a1c
.org 0xfb7ae
	adds r2, #73	@ 000fb7ae 4932
.org 0xfb7b0
	ldrb r1, [r2, #0]	@ 000fb7b0 1178
.org 0xfb7b2
	movs r0, #13	@ 000fb7b2 0d20
.org 0xfb7b4
	negs r0, r0	@ 000fb7b4 4042
.org 0xfb7b6
	ands r0, r1	@ 000fb7b6 0840
.org 0xfb7b8
	orrs r0, r6	@ 000fb7b8 3043
.org 0xfb7ba
	strb r0, [r2, #0]	@ 000fb7ba 1070
.org 0xfb7bc
	ldr r0, [r7, #84]	@ 000fb7bc 786d
.org 0xfb7be
	ldr r1, [r7, #88]	@ 000fb7be b96d
.org 0xfb7c0
	bl 0x8534	@ 000fb7c0 0cf7b8fe
.org 0xfb7c4
	str r0, [r7, #88]	@ 000fb7c4 b865
.org 0xfb7c6
	adds r0, r7, #0	@ 000fb7c6 381c
.org 0xfb7c8
	adds r0, #189	@ 000fb7c8 bd30
.org 0xfb7ca
	strb r5, [r0, #0]	@ 000fb7ca 0570
.org 0xfb7cc
	strb r5, [r7, #18]	@ 000fb7cc bd74
.org 0xfb7ce
	ldr r1, [pc, #40]	@ 000fb7ce 0a49
.org 0xfb7d0
	ldrb r0, [r7, #9]	@ 000fb7d0 787a
.org 0xfb7d2
	lsls r0, r0, #2	@ 000fb7d2 8000
.org 0xfb7d4
	adds r0, r0, r1	@ 000fb7d4 4018
.org 0xfb7d6
	mov r1, r8	@ 000fb7d6 4146
.org 0xfb7d8
	str r1, [r7, #12]	@ 000fb7d8 f960
.org 0xfb7da
	ldr r0, [r0, #0]	@ 000fb7da 0068
