@ FUN_0802b700  entry 0x0802b700  size 156
.thumb
.org 0x2b700
FUN_0802b700:
	push {r4, lr}	@ 0002b700 10b5
.org 0x2b702
	adds r3, r0, #0	@ 0002b702 031c
.org 0x2b704
	movs r1, #148	@ 0002b704 9421
.org 0x2b706
	lsls r1, r1, #2	@ 0002b706 8900
.org 0x2b708
	adds r0, r3, r1	@ 0002b708 5818
.org 0x2b70a
	ldrh r2, [r0, #0]	@ 0002b70a 0288
.org 0x2b70c
	movs r0, #64	@ 0002b70c 4020
.org 0x2b70e
	ands r0, r2	@ 0002b70e 1040
.org 0x2b710
	lsls r0, r0, #16	@ 0002b710 0004
.org 0x2b712
	lsrs r0, r0, #16	@ 0002b712 000c
.org 0x2b714
	negs r0, r0	@ 0002b714 4042
.org 0x2b716
	lsrs r1, r0, #31	@ 0002b716 c10f
.org 0x2b718
	movs r0, #128	@ 0002b718 8020
.org 0x2b71a
	ands r0, r2	@ 0002b71a 1040
.org 0x2b71c
	cmp r0, #0	@ 0002b71c 0028
.org 0x2b71e
	beq.n 0x2b722	@ 0002b71e 00d0
.org 0x2b720
	adds r1, #1	@ 0002b720 0131
.org 0x2b722
	movs r0, #32	@ 0002b722 2020
.org 0x2b724
	ands r0, r2	@ 0002b724 1040
.org 0x2b726
	cmp r0, #0	@ 0002b726 0028
.org 0x2b728
	beq.n 0x2b730	@ 0002b728 02d0
.org 0x2b72a
	adds r0, r1, #1	@ 0002b72a 481c
.org 0x2b72c
	lsls r0, r0, #24	@ 0002b72c 0006
.org 0x2b72e
	lsrs r1, r0, #24	@ 0002b72e 010e
.org 0x2b730
	movs r0, #16	@ 0002b730 1020
.org 0x2b732
	ands r0, r2	@ 0002b732 1040
.org 0x2b734
	cmp r0, #0	@ 0002b734 0028
.org 0x2b736
	beq.n 0x2b73e	@ 0002b736 02d0
.org 0x2b738
	adds r0, r1, #1	@ 0002b738 481c
.org 0x2b73a
	lsls r0, r0, #24	@ 0002b73a 0006
.org 0x2b73c
	lsrs r1, r0, #24	@ 0002b73c 010e
.org 0x2b73e
	movs r4, #152	@ 0002b73e 9824
.org 0x2b740
	lsls r4, r4, #2	@ 0002b740 a400
.org 0x2b742
	adds r0, r3, r4	@ 0002b742 1819
.org 0x2b744
	ldrh r0, [r0, #0]	@ 0002b744 0088
.org 0x2b746
	ands r0, r2	@ 0002b746 1040
.org 0x2b748
	cmp r0, #0	@ 0002b748 0028
.org 0x2b74a
	beq.n 0x2b752	@ 0002b74a 02d0
.org 0x2b74c
	adds r0, r1, #1	@ 0002b74c 481c
.org 0x2b74e
	lsls r0, r0, #24	@ 0002b74e 0006
.org 0x2b750
	lsrs r1, r0, #24	@ 0002b750 010e
.org 0x2b752
	movs r4, #151	@ 0002b752 9724
.org 0x2b754
	lsls r4, r4, #2	@ 0002b754 a400
.org 0x2b756
	adds r0, r3, r4	@ 0002b756 1819
.org 0x2b758
	ldrh r0, [r0, #0]	@ 0002b758 0088
.org 0x2b75a
	ands r0, r2	@ 0002b75a 1040
.org 0x2b75c
	cmp r0, #0	@ 0002b75c 0028
.org 0x2b75e
	beq.n 0x2b766	@ 0002b75e 02d0
.org 0x2b760
	adds r0, r1, #1	@ 0002b760 481c
.org 0x2b762
	lsls r0, r0, #24	@ 0002b762 0006
.org 0x2b764
	lsrs r1, r0, #24	@ 0002b764 010e
.org 0x2b766
	ldr r4, [pc, #52]	@ 0002b766 0d4c
.org 0x2b768
	adds r0, r3, r4	@ 0002b768 1819
.org 0x2b76a
	ldrh r0, [r0, #0]	@ 0002b76a 0088
.org 0x2b76c
	ands r0, r2	@ 0002b76c 1040
.org 0x2b76e
	cmp r0, #0	@ 0002b76e 0028
.org 0x2b770
	beq.n 0x2b778	@ 0002b770 02d0
.org 0x2b772
	adds r0, r1, #1	@ 0002b772 481c
.org 0x2b774
	lsls r0, r0, #24	@ 0002b774 0006
.org 0x2b776
	lsrs r1, r0, #24	@ 0002b776 010e
.org 0x2b778
	adds r0, r3, #0	@ 0002b778 181c
.org 0x2b77a
	adds r0, #223	@ 0002b77a df30
.org 0x2b77c
	ldrb r0, [r0, #0]	@ 0002b77c 0078
.org 0x2b77e
	cmp r0, #1	@ 0002b77e 0128
.org 0x2b780
	bne.n 0x2b794	@ 0002b780 08d1
.org 0x2b782
	ldr r4, [pc, #28]	@ 0002b782 074c
.org 0x2b784
	adds r0, r3, r4	@ 0002b784 1819
.org 0x2b786
	ldrh r0, [r0, #0]	@ 0002b786 0088
.org 0x2b788
	ands r0, r2	@ 0002b788 1040
.org 0x2b78a
	cmp r0, #0	@ 0002b78a 0028
.org 0x2b78c
	beq.n 0x2b794	@ 0002b78c 02d0
.org 0x2b78e
	adds r0, r1, #1	@ 0002b78e 481c
.org 0x2b790
	lsls r0, r0, #24	@ 0002b790 0006
.org 0x2b792
	lsrs r1, r0, #24	@ 0002b792 010e
.org 0x2b794
	adds r0, r1, #0	@ 0002b794 081c
.org 0x2b796
	pop {r4}	@ 0002b796 10bc
.org 0x2b798
	pop {r1}	@ 0002b798 02bc
.org 0x2b79a
	bx r1	@ 0002b79a 0847
