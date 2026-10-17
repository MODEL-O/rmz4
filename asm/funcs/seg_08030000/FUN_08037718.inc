@ FUN_08037718  entry 0x08037718  size 126
.thumb
.org 0x37718
FUN_08037718:
	push {r4, r5, lr}	@ 00037718 30b5
.org 0x3771a
	adds r4, r0, #0	@ 0003771a 041c
.org 0x3771c
	movs r0, #129	@ 0003771c 8120
.org 0x3771e
	lsls r0, r0, #1	@ 0003771e 4000
.org 0x37720
	adds r5, r4, r0	@ 00037720 2518
.org 0x37722
	ldrb r0, [r5, #0]	@ 00037722 2878
.org 0x37724
	cmp r0, #0	@ 00037724 0028
.org 0x37726
	bne.n 0x37736	@ 00037726 06d1
.org 0x37728
	ldr r1, [pc, #68]	@ 00037728 1149
.org 0x3772a
	adds r0, r4, #0	@ 0003772a 201c
.org 0x3772c
	bl 0x1cf00	@ 0003772c e5f7e8fb
.org 0x37730
	ldrb r0, [r5, #0]	@ 00037730 2878
.org 0x37732
	adds r0, #1	@ 00037732 0130
.org 0x37734
	strb r0, [r5, #0]	@ 00037734 2870
.org 0x37736
	ldr r1, [pc, #60]	@ 00037736 0f49
.org 0x37738
	adds r2, r4, r1	@ 00037738 6218
.org 0x3773a
	ldrb r0, [r2, #0]	@ 0003773a 1078
.org 0x3773c
	movs r1, #8	@ 0003773c 0821
.org 0x3773e
	orrs r0, r1	@ 0003773e 0843
.org 0x37740
	strb r0, [r2, #0]	@ 00037740 1070
.org 0x37742
	movs r0, #162	@ 00037742 a220
.org 0x37744
	lsls r0, r0, #1	@ 00037744 4000
.org 0x37746
	adds r1, r4, r0	@ 00037746 2118
.org 0x37748
	adds r0, r4, #0	@ 00037748 201c
.org 0x3774a
	bl 0x39fd8	@ 0003774a 02f045fc
.org 0x3774e
	lsls r0, r0, #24	@ 0003774e 0006
.org 0x37750
	lsrs r5, r0, #24	@ 00037750 050e
.org 0x37752
	cmp r5, #0	@ 00037752 002d
.org 0x37754
	beq.n 0x37778	@ 00037754 10d0
.org 0x37756
	movs r1, #128	@ 00037756 8021
.org 0x37758
	lsls r1, r1, #1	@ 00037758 4900
.org 0x3775a
	adds r0, r4, r1	@ 0003775a 6018
.org 0x3775c
	movs r2, #0	@ 0003775c 0022
.org 0x3775e
	movs r1, #3	@ 0003775e 0321
.org 0x37760
	strb r1, [r0, #0]	@ 00037760 0170
.org 0x37762
	adds r1, #254	@ 00037762 fe31
.org 0x37764
	adds r0, r4, r1	@ 00037764 6018
.org 0x37766
	strb r2, [r0, #0]	@ 00037766 0270
.org 0x37768
	adds r0, r4, #0	@ 00037768 201c
.org 0x3776a
	bl 0x36efc	@ 0003776a fff7c7fb
.org 0x3776e
	b.n 0x37798	@ 0003776e 13e0
.org 0x37770
	.byte 0x02,0x23,0x00,0x00	@ 00037770 data
.org 0x37774
	.byte 0x53,0x01,0x00,0x00	@ 00037774 data
.org 0x37778
	adds r0, r4, #0	@ 00037778 201c
.org 0x3777a
	adds r0, #115	@ 0003777a 7330
.org 0x3777c
	ldrb r0, [r0, #0]	@ 0003777c 0078
.org 0x3777e
	cmp r0, #3	@ 0003777e 0328
.org 0x37780
	bne.n 0x37798	@ 00037780 0ad1
.org 0x37782
	movs r1, #160	@ 00037782 a021
.org 0x37784
	lsls r1, r1, #3	@ 00037784 c900
.org 0x37786
	adds r0, r4, #0	@ 00037786 201c
.org 0x37788
	movs r2, #4	@ 00037788 0422
.org 0x3778a
	movs r3, #1	@ 0003778a 0123
.org 0x3778c
	bl 0x1cfc8	@ 0003778c e5f71cfc
.org 0x37790
	movs r1, #128	@ 00037790 8021
.org 0x37792
	lsls r1, r1, #1	@ 00037792 4900
.org 0x37794
	adds r0, r4, r1	@ 00037794 6018
