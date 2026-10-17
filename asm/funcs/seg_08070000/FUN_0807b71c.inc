@ FUN_0807b71c  entry 0x0807b71c  size 110
.thumb
.org 0x7b71c
FUN_0807b71c:
	push {r4, r5, lr}	@ 0007b71c 30b5
.org 0x7b71e
	adds r4, r0, #0	@ 0007b71e 041c
.org 0x7b720
	ldrb r0, [r4, #15]	@ 0007b720 e07b
.org 0x7b722
	cmp r0, #0	@ 0007b722 0028
.org 0x7b724
	bne.n 0x7b734	@ 0007b724 06d1
.org 0x7b726
	adds r0, r4, #0	@ 0007b726 201c
.org 0x7b728
	movs r1, #1	@ 0007b728 0121
.org 0x7b72a
	bl 0x7e8c8	@ 0007b72a 03f0cdf8
.org 0x7b72e
	ldrb r0, [r4, #15]	@ 0007b72e e07b
.org 0x7b730
	adds r0, #1	@ 0007b730 0130
.org 0x7b732
	strb r0, [r4, #15]	@ 0007b732 e073
.org 0x7b734
	adds r5, r4, #0	@ 0007b734 251c
.org 0x7b736
	adds r5, #188	@ 0007b736 bc35
.org 0x7b738
	ldrb r0, [r5, #0]	@ 0007b738 2878
.org 0x7b73a
	cmp r0, #0	@ 0007b73a 0028
.org 0x7b73c
	beq.n 0x7b744	@ 0007b73c 02d0
.org 0x7b73e
	adds r0, r4, #0	@ 0007b73e 201c
.org 0x7b740
	bl 0x1cff0	@ 0007b740 a1f756fc
.org 0x7b744
	adds r0, r4, #0	@ 0007b744 201c
.org 0x7b746
	adds r0, #116	@ 0007b746 7430
.org 0x7b748
	ldr r3, [pc, #64]	@ 0007b748 104b
.org 0x7b74a
	ldr r2, [pc, #68]	@ 0007b74a 114a
.org 0x7b74c
	ldrb r1, [r5, #0]	@ 0007b74c 2978
.org 0x7b74e
	lsls r1, r1, #1	@ 0007b74e 4900
.org 0x7b750
	adds r1, r1, r2	@ 0007b750 8918
.org 0x7b752
	ldrh r2, [r1, #0]	@ 0007b752 0a88
.org 0x7b754
	lsls r2, r2, #2	@ 0007b754 9200
.org 0x7b756
	adds r2, r2, r3	@ 0007b756 d218
.org 0x7b758
	adds r1, r4, #0	@ 0007b758 211c
.org 0x7b75a
	adds r1, #113	@ 0007b75a 7131
.org 0x7b75c
	ldrb r1, [r1, #0]	@ 0007b75c 0978
.org 0x7b75e
	lsls r1, r1, #24	@ 0007b75e 0906
.org 0x7b760
	asrs r1, r1, #24	@ 0007b760 0916
.org 0x7b762
	ldr r2, [r2, #0]	@ 0007b762 1268
.org 0x7b764
	lsls r1, r1, #2	@ 0007b764 8900
.org 0x7b766
	adds r1, r1, r2	@ 0007b766 8918
.org 0x7b768
	ldr r1, [r1, #0]	@ 0007b768 0968
.org 0x7b76a
	bl 0x5784	@ 0007b76a 8af70bf8
.org 0x7b76e
	ldr r0, [r4, #24]	@ 0007b76e a069
.org 0x7b770
	ldrb r1, [r0, #9]	@ 0007b770 417a
.org 0x7b772
	movs r0, #1	@ 0007b772 0120
.org 0x7b774
	ands r0, r1	@ 0007b774 0840
.org 0x7b776
	cmp r0, #0	@ 0007b776 0028
.org 0x7b778
	beq.n 0x7b784	@ 0007b778 04d0
.org 0x7b77a
	ldrb r0, [r4, #14]	@ 0007b77a a07b
.org 0x7b77c
	adds r0, #1	@ 0007b77c 0130
.org 0x7b77e
	movs r1, #0	@ 0007b77e 0021
.org 0x7b780
	strb r0, [r4, #14]	@ 0007b780 a073
.org 0x7b782
	strb r1, [r4, #15]	@ 0007b782 e173
.org 0x7b784
	pop {r4, r5}	@ 0007b784 30bc
.org 0x7b786
	pop {r0}	@ 0007b786 01bc
.org 0x7b788
	bx r0	@ 0007b788 0047
