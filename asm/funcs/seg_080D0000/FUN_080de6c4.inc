@ FUN_080de6c4  entry 0x080de6c4  size 314
.thumb
.org 0xde6c4
FUN_080de6c4:
	push {r4, r5, lr}	@ 000de6c4 30b5
.org 0xde6c6
	mov ip, r0	@ 000de6c6 8446
.org 0xde6c8
	ldr r5, [r0, #40]	@ 000de6c8 856a
.org 0xde6ca
	ldr r4, [r0, #44]	@ 000de6ca c46a
.org 0xde6cc
	mov r3, ip	@ 000de6cc 6346
.org 0xde6ce
	adds r3, #84	@ 000de6ce 5433
.org 0xde6d0
	mov r1, ip	@ 000de6d0 6146
.org 0xde6d2
	ldr r0, [r1, #84]	@ 000de6d2 486d
.org 0xde6d4
	str r0, [r1, #116]	@ 000de6d4 4867
.org 0xde6d6
	ldr r0, [r3, #4]	@ 000de6d6 5868
.org 0xde6d8
	str r0, [r1, #120]	@ 000de6d8 8867
.org 0xde6da
	adds r1, r3, #0	@ 000de6da 191c
.org 0xde6dc
	movs r2, #1	@ 000de6dc 0122
.org 0xde6de
	ldr r0, [r1, #8]	@ 000de6de 8868
.org 0xde6e0
	str r0, [r1, #0]	@ 000de6e0 0860
.org 0xde6e2
	ldr r0, [r1, #12]	@ 000de6e2 c868
.org 0xde6e4
	str r0, [r1, #4]	@ 000de6e4 4860
.org 0xde6e6
	adds r1, #8	@ 000de6e6 0831
.org 0xde6e8
	subs r2, #1	@ 000de6e8 013a
.org 0xde6ea
	cmp r2, #0	@ 000de6ea 002a
.org 0xde6ec
	bge.n 0xde6de	@ 000de6ec f7da
.org 0xde6ee
	mov r2, ip	@ 000de6ee 6246
.org 0xde6f0
	ldrb r0, [r2, #16]	@ 000de6f0 107c
.org 0xde6f2
	cmp r0, #0	@ 000de6f2 0028
.org 0xde6f4
	bne.n 0xde6fe	@ 000de6f4 03d1
.org 0xde6f6
	ldr r0, [r5, #84]	@ 000de6f6 686d
.org 0xde6f8
	str r0, [r3, #16]	@ 000de6f8 1861
.org 0xde6fa
	ldr r0, [r5, #88]	@ 000de6fa a86d
.org 0xde6fc
	b.n 0xde704	@ 000de6fc 02e0
.org 0xde6fe
	ldr r0, [r5, #116]	@ 000de6fe 686f
.org 0xde700
	str r0, [r3, #16]	@ 000de700 1861
.org 0xde702
	ldr r0, [r5, #120]	@ 000de702 a86f
.org 0xde704
	str r0, [r3, #20]	@ 000de704 5861
.org 0xde706
	adds r0, r4, #0	@ 000de706 201c
.org 0xde708
	adds r0, #72	@ 000de708 4830
.org 0xde70a
	ldrh r1, [r0, #0]	@ 000de70a 0188
.org 0xde70c
	lsls r1, r1, #22	@ 000de70c 8905
.org 0xde70e
	mov r3, ip	@ 000de70e 6346
.org 0xde710
	adds r3, #72	@ 000de710 4833
.org 0xde712
	lsrs r1, r1, #22	@ 000de712 890d
.org 0xde714
	ldrh r2, [r3, #0]	@ 000de714 1a88
.org 0xde716
	ldr r0, [pc, #44]	@ 000de716 0b48
.org 0xde718
	ands r0, r2	@ 000de718 1040
.org 0xde71a
	orrs r0, r1	@ 000de71a 0843
.org 0xde71c
	strh r0, [r3, #0]	@ 000de71c 1880
.org 0xde71e
	ldr r0, [r4, #60]	@ 000de71e e06b
.org 0xde720
	mov r1, ip	@ 000de720 6146
.org 0xde722
	str r0, [r1, #60]	@ 000de722 c863
.org 0xde724
	adds r0, r4, #0	@ 000de724 201c
.org 0xde726
	adds r0, #78	@ 000de726 4e30
.org 0xde728
	ldrb r0, [r0, #0]	@ 000de728 0078
.org 0xde72a
	adds r1, #78	@ 000de72a 4e31
.org 0xde72c
	strb r0, [r1, #0]	@ 000de72c 0870
.org 0xde72e
	ldrb r0, [r4, #10]	@ 000de72e a07a
.org 0xde730
	lsrs r2, r0, #4	@ 000de730 0209
.org 0xde732
	movs r0, #1	@ 000de732 0120
.org 0xde734
	ands r2, r0	@ 000de734 0240
.org 0xde736
	cmp r2, #0	@ 000de736 002a
.org 0xde738
	beq.n 0xde748	@ 000de738 06d0
.org 0xde73a
	mov r1, ip	@ 000de73a 6146
.org 0xde73c
	ldrb r0, [r1, #10]	@ 000de73c 887a
.org 0xde73e
	movs r1, #16	@ 000de73e 1021
.org 0xde740
	orrs r0, r1	@ 000de740 0843
.org 0xde742
	b.n 0xde750	@ 000de742 05e0
.org 0xde744
	.byte 0x00,0xfc,0xff,0xff	@ 000de744 data
.org 0xde748
	mov r0, ip	@ 000de748 6046
.org 0xde74a
	ldrb r1, [r0, #10]	@ 000de74a 817a
.org 0xde74c
	movs r0, #239	@ 000de74c ef20
.org 0xde74e
	ands r0, r1	@ 000de74e 0840
.org 0xde750
	mov r1, ip	@ 000de750 6146
.org 0xde752
	strb r0, [r1, #10]	@ 000de752 8872
.org 0xde754
	movs r3, #1	@ 000de754 0123
.org 0xde756
	adds r1, r3, #0	@ 000de756 191c
.org 0xde758
	ands r1, r2	@ 000de758 1140
.org 0xde75a
	mov r0, ip	@ 000de75a 6046
.org 0xde75c
	adds r0, #76	@ 000de75c 4c30
.org 0xde75e
	strb r1, [r0, #0]	@ 000de75e 0170
.org 0xde760
	mov r4, ip	@ 000de760 6446
.org 0xde762
	adds r4, #74	@ 000de762 4a34
.org 0xde764
	lsls r1, r1, #4	@ 000de764 0901
.org 0xde766
	ldrb r2, [r4, #0]	@ 000de766 2278
.org 0xde768
	movs r0, #17	@ 000de768 1120
.org 0xde76a
	negs r0, r0	@ 000de76a 4042
.org 0xde76c
	ands r0, r2	@ 000de76c 1040
.org 0xde76e
	orrs r0, r1	@ 000de76e 0843
.org 0xde770
	strb r0, [r4, #0]	@ 000de770 2070
.org 0xde772
	ldrb r0, [r5, #10]	@ 000de772 a87a
.org 0xde774
	ands r3, r0	@ 000de774 0340
.org 0xde776
	cmp r3, #0	@ 000de776 002b
.org 0xde778
	beq.n 0xde786	@ 000de778 05d0
.org 0xde77a
	mov r2, ip	@ 000de77a 6246
.org 0xde77c
	ldrb r0, [r2, #10]	@ 000de77c 907a
.org 0xde77e
	movs r1, #1	@ 000de77e 0121
.org 0xde780
	orrs r0, r1	@ 000de780 0843
.org 0xde782
	strb r0, [r2, #10]	@ 000de782 9072
.org 0xde784
	b.n 0xde792	@ 000de784 05e0
.org 0xde786
	mov r0, ip	@ 000de786 6046
.org 0xde788
	ldrb r1, [r0, #10]	@ 000de788 817a
.org 0xde78a
	movs r0, #254	@ 000de78a fe20
.org 0xde78c
	ands r0, r1	@ 000de78c 0840
.org 0xde78e
	mov r1, ip	@ 000de78e 6146
.org 0xde790
	strb r0, [r1, #10]	@ 000de790 8872
.org 0xde792
	mov r2, ip	@ 000de792 6246
.org 0xde794
	ldrb r0, [r2, #16]	@ 000de794 107c
.org 0xde796
	cmp r0, #0	@ 000de796 0028
.org 0xde798
	beq.n 0xde7a4	@ 000de798 04d0
.org 0xde79a
	ldrb r0, [r5, #12]	@ 000de79a 287b
.org 0xde79c
	cmp r0, #1	@ 000de79c 0128
.org 0xde79e
	bls.n 0xde7a4	@ 000de79e 01d9
.org 0xde7a0
	movs r0, #2	@ 000de7a0 0220
.org 0xde7a2
	strb r0, [r2, #17]	@ 000de7a2 5074
.org 0xde7a4
	mov r1, ip	@ 000de7a4 6146
.org 0xde7a6
	ldrb r0, [r1, #17]	@ 000de7a6 487c
.org 0xde7a8
	cmp r0, #2	@ 000de7a8 0228
.org 0xde7aa
	bne.n 0xde7d4	@ 000de7aa 13d1
.org 0xde7ac
	ldrb r1, [r1, #10]	@ 000de7ac 897a
.org 0xde7ae
	movs r0, #254	@ 000de7ae fe20
.org 0xde7b0
	ands r0, r1	@ 000de7b0 0840
.org 0xde7b2
	movs r1, #253	@ 000de7b2 fd21
.org 0xde7b4
	ands r0, r1	@ 000de7b4 0840
.org 0xde7b6
	mov r2, ip	@ 000de7b6 6246
.org 0xde7b8
	strb r0, [r2, #10]	@ 000de7b8 9072
.org 0xde7ba
	ldr r1, [pc, #20]	@ 000de7ba 0549
.org 0xde7bc
	ldrb r0, [r2, #9]	@ 000de7bc 507a
.org 0xde7be
	lsls r0, r0, #2	@ 000de7be 8000
.org 0xde7c0
	adds r0, r0, r1	@ 000de7c0 4018
.org 0xde7c2
	movs r1, #3	@ 000de7c2 0321
.org 0xde7c4
	str r1, [r2, #12]	@ 000de7c4 d160
.org 0xde7c6
	ldr r0, [r0, #0]	@ 000de7c6 0068
.org 0xde7c8
	ldr r0, [r0, #12]	@ 000de7c8 c068
.org 0xde7ca
	str r0, [r2, #20]	@ 000de7ca 5061
.org 0xde7cc
	b.n 0xde802	@ 000de7cc 19e0
.org 0xde7ce
	.byte 0x00	@ 000de7ce data
.org 0xde7cf
	.byte 0x00	@ 000de7cf data
.org 0xde7d0
	.byte 0x64,0x6f,0x86,0x08	@ 000de7d0 data
.org 0xde7d4
	cmp r0, #0	@ 000de7d4 0028
.org 0xde7d6
	beq.n 0xde802	@ 000de7d6 14d0
.org 0xde7d8
	mov r1, ip	@ 000de7d8 6146
.org 0xde7da
	ldrb r0, [r1, #18]	@ 000de7da 887c
.org 0xde7dc
	subs r0, #1	@ 000de7dc 0138
.org 0xde7de
	strb r0, [r1, #18]	@ 000de7de 8874
.org 0xde7e0
	lsls r0, r0, #24	@ 000de7e0 0006
.org 0xde7e2
	lsrs r0, r0, #24	@ 000de7e2 000e
.org 0xde7e4
	cmp r0, #255	@ 000de7e4 ff28
.org 0xde7e6
	bne.n 0xde802	@ 000de7e6 0cd1
.org 0xde7e8
	ldr r1, [pc, #28]	@ 000de7e8 0749
.org 0xde7ea
	mov r2, ip	@ 000de7ea 6246
.org 0xde7ec
	ldrb r0, [r2, #9]	@ 000de7ec 507a
.org 0xde7ee
	lsls r0, r0, #2	@ 000de7ee 8000
.org 0xde7f0
	adds r0, r0, r1	@ 000de7f0 4018
.org 0xde7f2
	movs r1, #2	@ 000de7f2 0221
.org 0xde7f4
	str r1, [r2, #12]	@ 000de7f4 d160
.org 0xde7f6
	ldr r0, [r0, #0]	@ 000de7f6 0068
.org 0xde7f8
	ldr r0, [r0, #8]	@ 000de7f8 8068
.org 0xde7fa
	str r0, [r2, #20]	@ 000de7fa 5061
.org 0xde7fc
	mov r0, ip	@ 000de7fc 6046
