@ FUN_080f6708  entry 0x080f6708  size 152
.thumb
.org 0xf6708
FUN_080f6708:
	push {r4, r5, lr}	@ 000f6708 30b5
.org 0xf670a
	adds r5, r0, #0	@ 000f670a 051c
.org 0xf670c
	bl 0x1cc9c	@ 000f670c 26f7c6fa
.org 0xf6710
	ldrb r1, [r5, #10]	@ 000f6710 a97a
.org 0xf6712
	movs r0, #1	@ 000f6712 0120
.org 0xf6714
	orrs r0, r1	@ 000f6714 0843
.org 0xf6716
	movs r1, #2	@ 000f6716 0221
.org 0xf6718
	orrs r0, r1	@ 000f6718 0843
.org 0xf671a
	strb r0, [r5, #10]	@ 000f671a a872
.org 0xf671c
	ldr r1, [r5, #84]	@ 000f671c 696d
.org 0xf671e
	ldr r0, [pc, #16]	@ 000f671e 0448
.org 0xf6720
	cmp r1, r0	@ 000f6720 8142
.org 0xf6722
	bgt.n 0xf6734	@ 000f6722 07dc
.org 0xf6724
	movs r1, #150	@ 000f6724 9621
.org 0xf6726
	lsls r1, r1, #7	@ 000f6726 c901
.org 0xf6728
	adds r0, r5, #0	@ 000f6728 281c
.org 0xf672a
	bl 0x1cf00	@ 000f672a 26f7e9fb
.org 0xf672e
	b.n 0xf673e	@ 000f672e 06e0
.org 0xf6730
	.byte 0xff,0x1f,0x1c,0x00	@ 000f6730 data
.org 0xf6734
	movs r1, #252	@ 000f6734 fc21
.org 0xf6736
	lsls r1, r1, #7	@ 000f6736 c901
.org 0xf6738
	adds r0, r5, #0	@ 000f6738 281c
.org 0xf673a
	bl 0x1cf00	@ 000f673a 26f7e1fb
.org 0xf673e
	ldrb r1, [r5, #11]	@ 000f673e e97a
.org 0xf6740
	movs r0, #8	@ 000f6740 0820
.org 0xf6742
	orrs r0, r1	@ 000f6742 0843
.org 0xf6744
	strb r0, [r5, #11]	@ 000f6744 e872
.org 0xf6746
	ldrb r0, [r5, #16]	@ 000f6746 287c
.org 0xf6748
	lsls r0, r0, #3	@ 000f6748 c000
.org 0xf674a
	ldr r1, [pc, #88]	@ 000f674a 1649
.org 0xf674c
	adds r0, r0, r1	@ 000f674c 4018
.org 0xf674e
	str r0, [r5, #48]	@ 000f674e 2863
.org 0xf6750
	movs r4, #0	@ 000f6750 0024
.org 0xf6752
	ldr r0, [pc, #84]	@ 000f6752 1548
.org 0xf6754
	strh r0, [r5, #38]	@ 000f6754 e884
.org 0xf6756
	ldr r0, [r5, #84]	@ 000f6756 686d
.org 0xf6758
	ldr r1, [r5, #88]	@ 000f6758 a96d
.org 0xf675a
	movs r2, #128	@ 000f675a 8022
.org 0xf675c
	lsls r2, r2, #5	@ 000f675c 5201
.org 0xf675e
	adds r1, r1, r2	@ 000f675e 8918
.org 0xf6760
	bl 0x8868	@ 000f6760 12f782f8
.org 0xf6764
	ldr r1, [pc, #68]	@ 000f6764 1149
.org 0xf6766
	adds r0, r0, r1	@ 000f6766 4018
.org 0xf6768
	str r0, [r5, #84]	@ 000f6768 6865
.org 0xf676a
	ldr r0, [r5, #88]	@ 000f676a a86d
.org 0xf676c
	adds r0, #1	@ 000f676c 0130
.org 0xf676e
	str r0, [r5, #88]	@ 000f676e a865
.org 0xf6770
	movs r0, #2	@ 000f6770 0220
.org 0xf6772
	strb r0, [r5, #13]	@ 000f6772 6873
.org 0xf6774
	strb r4, [r5, #14]	@ 000f6774 ac73
.org 0xf6776
	ldrb r1, [r5, #16]	@ 000f6776 297c
.org 0xf6778
	adds r0, r5, #0	@ 000f6778 281c
.org 0xf677a
	bl 0xf6a24	@ 000f677a 00f053f9
.org 0xf677e
	ldrb r2, [r5, #13]	@ 000f677e 6a7b
.org 0xf6780
	ldrb r3, [r5, #14]	@ 000f6780 ab7b
.org 0xf6782
	ldr r1, [pc, #44]	@ 000f6782 0b49
.org 0xf6784
	ldrb r0, [r5, #9]	@ 000f6784 687a
.org 0xf6786
	lsls r0, r0, #2	@ 000f6786 8000
.org 0xf6788
	adds r0, r0, r1	@ 000f6788 4018
.org 0xf678a
	movs r1, #1	@ 000f678a 0121
.org 0xf678c
	str r1, [r5, #12]	@ 000f678c e960
.org 0xf678e
	ldr r0, [r0, #0]	@ 000f678e 0068
.org 0xf6790
	ldr r0, [r0, #4]	@ 000f6790 4068
.org 0xf6792
	str r0, [r5, #20]	@ 000f6792 6861
.org 0xf6794
	strb r2, [r5, #13]	@ 000f6794 6a73
.org 0xf6796
	strb r3, [r5, #14]	@ 000f6796 ab73
.org 0xf6798
	adds r0, r5, #0	@ 000f6798 281c
.org 0xf679a
	bl 0xf64c0	@ 000f679a fff791fe
.org 0xf679e
	pop {r4, r5}	@ 000f679e 30bc
