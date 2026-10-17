@ FUN_0808b6c4  entry 0x0808b6c4  size 174
.thumb
.org 0x8b6c4
FUN_0808b6c4:
	push {r4, lr}	@ 0008b6c4 10b5
.org 0x8b6c6
	adds r4, r0, #0	@ 0008b6c6 041c
.org 0x8b6c8
	ldrb r0, [r4, #15]	@ 0008b6c8 e07b
.org 0x8b6ca
	cmp r0, #0	@ 0008b6ca 0028
.org 0x8b6cc
	bne.n 0x8b70e	@ 0008b6cc 1fd1
.org 0x8b6ce
	movs r1, #132	@ 0008b6ce 8421
.org 0x8b6d0
	lsls r1, r1, #6	@ 0008b6d0 8901
.org 0x8b6d2
	adds r0, r4, #0	@ 0008b6d2 201c
.org 0x8b6d4
	bl 0x1cf00	@ 0008b6d4 91f714fc
.org 0x8b6d8
	ldrb r2, [r4, #10]	@ 0008b6d8 a27a
.org 0x8b6da
	lsrs r0, r2, #4	@ 0008b6da 1009
.org 0x8b6dc
	movs r1, #1	@ 0008b6dc 0121
.org 0x8b6de
	bics r1, r0	@ 0008b6de 8143
.org 0x8b6e0
	cmp r1, #0	@ 0008b6e0 0029
.org 0x8b6e2
	beq.n 0x8b6ea	@ 0008b6e2 02d0
.org 0x8b6e4
	movs r0, #16	@ 0008b6e4 1020
.org 0x8b6e6
	orrs r0, r2	@ 0008b6e6 1043
.org 0x8b6e8
	b.n 0x8b6ee	@ 0008b6e8 01e0
.org 0x8b6ea
	movs r0, #239	@ 0008b6ea ef20
.org 0x8b6ec
	ands r0, r2	@ 0008b6ec 1040
.org 0x8b6ee
	strb r0, [r4, #10]	@ 0008b6ee a072
.org 0x8b6f0
	adds r0, r4, #0	@ 0008b6f0 201c
.org 0x8b6f2
	adds r0, #76	@ 0008b6f2 4c30
.org 0x8b6f4
	strb r1, [r0, #0]	@ 0008b6f4 0170
.org 0x8b6f6
	adds r3, r4, #0	@ 0008b6f6 231c
.org 0x8b6f8
	adds r3, #74	@ 0008b6f8 4a33
.org 0x8b6fa
	lsls r1, r1, #4	@ 0008b6fa 0901
.org 0x8b6fc
	ldrb r2, [r3, #0]	@ 0008b6fc 1a78
.org 0x8b6fe
	movs r0, #17	@ 0008b6fe 1120
.org 0x8b700
	negs r0, r0	@ 0008b700 4042
.org 0x8b702
	ands r0, r2	@ 0008b702 1040
.org 0x8b704
	orrs r0, r1	@ 0008b704 0843
.org 0x8b706
	strb r0, [r3, #0]	@ 0008b706 1870
.org 0x8b708
	ldrb r0, [r4, #15]	@ 0008b708 e07b
.org 0x8b70a
	adds r0, #1	@ 0008b70a 0130
.org 0x8b70c
	strb r0, [r4, #15]	@ 0008b70c e073
.org 0x8b70e
	adds r0, r4, #0	@ 0008b70e 201c
.org 0x8b710
	bl 0x1cff0	@ 0008b710 91f76efc
.org 0x8b714
	adds r0, r4, #0	@ 0008b714 201c
.org 0x8b716
	adds r0, #116	@ 0008b716 7430
.org 0x8b718
	ldr r3, [pc, #88]	@ 0008b718 164b
.org 0x8b71a
	ldrb r1, [r4, #30]	@ 0008b71a a17f
.org 0x8b71c
	lsls r1, r1, #8	@ 0008b71c 0902
.org 0x8b71e
	adds r2, r4, #0	@ 0008b71e 221c
.org 0x8b720
	adds r2, #112	@ 0008b720 7032
.org 0x8b722
	ldrb r2, [r2, #0]	@ 0008b722 1278
.org 0x8b724
	orrs r1, r2	@ 0008b724 1143
.org 0x8b726
	ldr r2, [pc, #80]	@ 0008b726 144a
.org 0x8b728
	adds r1, r1, r2	@ 0008b728 8918
.org 0x8b72a
	lsls r1, r1, #2	@ 0008b72a 8900
.org 0x8b72c
	adds r1, r1, r3	@ 0008b72c c918
.org 0x8b72e
	adds r2, r4, #0	@ 0008b72e 221c
.org 0x8b730
	adds r2, #113	@ 0008b730 7132
.org 0x8b732
	ldrb r2, [r2, #0]	@ 0008b732 1278
.org 0x8b734
	lsls r2, r2, #24	@ 0008b734 1206
.org 0x8b736
	asrs r2, r2, #24	@ 0008b736 1216
.org 0x8b738
	ldr r1, [r1, #0]	@ 0008b738 0968
.org 0x8b73a
	lsls r2, r2, #2	@ 0008b73a 9200
.org 0x8b73c
	adds r2, r2, r1	@ 0008b73c 5218
.org 0x8b73e
	ldr r1, [r2, #0]	@ 0008b73e 1168
.org 0x8b740
	ldrb r2, [r1, #0]	@ 0008b740 0a78
.org 0x8b742
	lsls r1, r2, #1	@ 0008b742 5100
.org 0x8b744
	adds r1, r1, r2	@ 0008b744 8918
.org 0x8b746
	lsls r1, r1, #3	@ 0008b746 c900
.org 0x8b748
	ldr r2, [pc, #48]	@ 0008b748 0c4a
.org 0x8b74a
	adds r1, r1, r2	@ 0008b74a 8918
.org 0x8b74c
	bl 0x5784	@ 0008b74c 7af71af8
.org 0x8b750
	adds r0, r4, #0	@ 0008b750 201c
.org 0x8b752
	bl 0x8bbd8	@ 0008b752 00f041fa
.org 0x8b756
	adds r1, r4, #0	@ 0008b756 211c
.org 0x8b758
	adds r1, #185	@ 0008b758 b931
.org 0x8b75a
	ldrb r0, [r1, #0]	@ 0008b75a 0878
.org 0x8b75c
	cmp r0, #0	@ 0008b75c 0028
.org 0x8b75e
	beq.n 0x8b764	@ 0008b75e 01d0
.org 0x8b760
	adds r0, #255	@ 0008b760 ff30
.org 0x8b762
	strb r0, [r1, #0]	@ 0008b762 0870
.org 0x8b764
	movs r1, #0	@ 0008b764 0021
.org 0x8b766
	movs r0, #1	@ 0008b766 0120
.org 0x8b768
	strb r0, [r4, #14]	@ 0008b768 a073
.org 0x8b76a
	strb r1, [r4, #15]	@ 0008b76a e173
.org 0x8b76c
	pop {r4}	@ 0008b76c 10bc
.org 0x8b76e
	pop {r0}	@ 0008b76e 01bc
.org 0x8b770
	bx r0	@ 0008b770 0047
