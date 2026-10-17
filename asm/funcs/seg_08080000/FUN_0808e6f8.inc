@ FUN_0808e6f8  entry 0x0808e6f8  size 184
.thumb
.org 0x8e6f8
FUN_0808e6f8:
	push {r4, lr}	@ 0008e6f8 10b5
.org 0x8e6fa
	adds r3, r0, #0	@ 0008e6fa 031c
.org 0x8e6fc
	ldr r4, [r3, #40]	@ 0008e6fc 9c6a
.org 0x8e6fe
	ldrb r2, [r3, #13]	@ 0008e6fe 5a7b
.org 0x8e700
	cmp r2, #0	@ 0008e700 002a
.org 0x8e702
	beq.n 0x8e70a	@ 0008e702 02d0
.org 0x8e704
	cmp r2, #1	@ 0008e704 012a
.org 0x8e706
	beq.n 0x8e74a	@ 0008e706 20d0
.org 0x8e708
	b.n 0x8e7b8	@ 0008e708 56e0
.org 0x8e70a
	adds r0, r3, #0	@ 0008e70a 181c
.org 0x8e70c
	adds r0, #140	@ 0008e70c 8c30
.org 0x8e70e
	str r2, [r0, #0]	@ 0008e70e 0260
.org 0x8e710
	adds r0, #4	@ 0008e710 0430
.org 0x8e712
	str r2, [r0, #0]	@ 0008e712 0260
.org 0x8e714
	adds r0, #4	@ 0008e714 0430
.org 0x8e716
	strb r2, [r0, #0]	@ 0008e716 0270
.org 0x8e718
	ldrb r1, [r3, #10]	@ 0008e718 997a
.org 0x8e71a
	movs r0, #251	@ 0008e71a fb20
.org 0x8e71c
	ands r0, r1	@ 0008e71c 0840
.org 0x8e71e
	strb r0, [r3, #10]	@ 0008e71e 9872
.org 0x8e720
	str r2, [r3, #96]	@ 0008e720 1a66
.org 0x8e722
	str r2, [r3, #92]	@ 0008e722 da65
.org 0x8e724
	ldr r0, [r3, #88]	@ 0008e724 986d
.org 0x8e726
	str r0, [r3, #100]	@ 0008e726 5866
.org 0x8e728
	ldr r2, [pc, #120]	@ 0008e728 1e4a
.org 0x8e72a
	ldr r1, [r2, #0]	@ 0008e72a 1168
.org 0x8e72c
	ldr r0, [pc, #120]	@ 0008e72c 1e48
.org 0x8e72e
	muls r0, r1	@ 0008e72e 4843
.org 0x8e730
	ldr r1, [pc, #120]	@ 0008e730 1e49
.org 0x8e732
	adds r0, r0, r1	@ 0008e732 4018
.org 0x8e734
	lsls r0, r0, #1	@ 0008e734 4000
.org 0x8e736
	lsrs r1, r0, #1	@ 0008e736 4108
.org 0x8e738
	str r1, [r2, #0]	@ 0008e738 1160
.org 0x8e73a
	lsrs r0, r0, #17	@ 0008e73a 400c
.org 0x8e73c
	movs r1, #7	@ 0008e73c 0721
.org 0x8e73e
	ands r0, r1	@ 0008e73e 0840
.org 0x8e740
	adds r0, #16	@ 0008e740 1030
.org 0x8e742
	str r0, [r3, #104]	@ 0008e742 9866
.org 0x8e744
	ldrb r0, [r3, #13]	@ 0008e744 587b
.org 0x8e746
	adds r0, #1	@ 0008e746 0130
.org 0x8e748
	strb r0, [r3, #13]	@ 0008e748 5873
.org 0x8e74a
	ldr r0, [r3, #92]	@ 0008e74a d86d
.org 0x8e74c
	ldr r1, [r3, #96]	@ 0008e74c 196e
.org 0x8e74e
	adds r0, r0, r1	@ 0008e74e 4018
.org 0x8e750
	str r0, [r3, #92]	@ 0008e750 d865
.org 0x8e752
	adds r1, #64	@ 0008e752 4031
.org 0x8e754
	str r1, [r3, #96]	@ 0008e754 1966
.org 0x8e756
	movs r0, #224	@ 0008e756 e020
.org 0x8e758
	lsls r0, r0, #3	@ 0008e758 c000
.org 0x8e75a
	cmp r1, r0	@ 0008e75a 8142
.org 0x8e75c
	ble.n 0x8e760	@ 0008e75c 00dd
.org 0x8e75e
	str r0, [r3, #96]	@ 0008e75e 1866
.org 0x8e760
	ldr r1, [r3, #92]	@ 0008e760 d96d
.org 0x8e762
	ldr r0, [r3, #104]	@ 0008e762 986e
.org 0x8e764
	muls r0, r1	@ 0008e764 4843
.org 0x8e766
	cmp r0, #0	@ 0008e766 0028
.org 0x8e768
	bge.n 0x8e76c	@ 0008e768 00da
.org 0x8e76a
	adds r0, #255	@ 0008e76a ff30
.org 0x8e76c
	asrs r0, r0, #8	@ 0008e76c 0012
.org 0x8e76e
	ldr r1, [r3, #100]	@ 0008e76e 596e
.org 0x8e770
	adds r1, r1, r0	@ 0008e770 0918
.org 0x8e772
	str r1, [r3, #88]	@ 0008e772 9965
.org 0x8e774
	adds r0, r3, #0	@ 0008e774 181c
.org 0x8e776
	adds r0, #180	@ 0008e776 b430
.org 0x8e778
	ldr r0, [r0, #0]	@ 0008e778 0068
.org 0x8e77a
	ldr r2, [pc, #52]	@ 0008e77a 0d4a
.org 0x8e77c
	adds r0, r0, r2	@ 0008e77c 8018
.org 0x8e77e
	cmp r1, r0	@ 0008e77e 8142
.org 0x8e780
	bgt.n 0x8e788	@ 0008e780 02dc
.org 0x8e782
	ldrb r0, [r4, #12]	@ 0008e782 207b
.org 0x8e784
	cmp r0, #4	@ 0008e784 0428
.org 0x8e786
	bne.n 0x8e7b8	@ 0008e786 17d1
.org 0x8e788
	ldrb r1, [r3, #10]	@ 0008e788 997a
.org 0x8e78a
	movs r0, #254	@ 0008e78a fe20
.org 0x8e78c
	ands r0, r1	@ 0008e78c 0840
.org 0x8e78e
	strb r0, [r3, #10]	@ 0008e78e 9872
.org 0x8e790
	ldr r1, [pc, #32]	@ 0008e790 0849
.org 0x8e792
	ldrb r0, [r3, #9]	@ 0008e792 587a
.org 0x8e794
	lsls r0, r0, #2	@ 0008e794 8000
.org 0x8e796
	adds r0, r0, r1	@ 0008e796 4018
.org 0x8e798
	movs r1, #4	@ 0008e798 0421
.org 0x8e79a
	str r1, [r3, #12]	@ 0008e79a d960
.org 0x8e79c
	ldr r0, [r0, #0]	@ 0008e79c 0068
.org 0x8e79e
	ldr r0, [r0, #16]	@ 0008e79e 0069
.org 0x8e7a0
	str r0, [r3, #20]	@ 0008e7a0 5861
.org 0x8e7a2
	b.n 0x8e7be	@ 0008e7a2 0ce0
.org 0x8e7a4
	.byte 0x38,0xdc,0x02,0x02	@ 0008e7a4 data
.org 0x8e7a8
	.byte 0xfd,0x43,0x03,0x00	@ 0008e7a8 data
.org 0x8e7ac
	.byte 0xc3,0x9e,0x26,0x00	@ 0008e7ac data
