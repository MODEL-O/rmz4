@ FUN_08104824  entry 0x08104824  size 152
.thumb
.org 0x104824
FUN_08104824:
	push {r4, r5, r6, lr}	@ 00104824 70b5
.org 0x104826
	adds r6, r0, #0	@ 00104826 061c
.org 0x104828
	bl 0x1cc9c	@ 00104828 18f738fa
.org 0x10482c
	ldrb r0, [r6, #10]	@ 0010482c b07a
.org 0x10482e
	movs r1, #1	@ 0010482e 0121
.org 0x104830
	orrs r1, r0	@ 00104830 0143
.org 0x104832
	movs r0, #2	@ 00104832 0220
.org 0x104834
	orrs r1, r0	@ 00104834 0143
.org 0x104836
	ldrb r2, [r6, #11]	@ 00104836 f27a
.org 0x104838
	movs r3, #239	@ 00104838 ef23
.org 0x10483a
	adds r0, r3, #0	@ 0010483a 181c
.org 0x10483c
	ands r0, r2	@ 0010483c 1040
.org 0x10483e
	strb r0, [r6, #11]	@ 0010483e f072
.org 0x104840
	ldrb r0, [r6, #28]	@ 00104840 307f
.org 0x104842
	strb r0, [r6, #29]	@ 00104842 7077
.org 0x104844
	movs r5, #0	@ 00104844 0025
.org 0x104846
	ands r1, r3	@ 00104846 1940
.org 0x104848
	strb r1, [r6, #10]	@ 00104848 b172
.org 0x10484a
	movs r2, #1	@ 0010484a 0122
.org 0x10484c
	adds r0, r6, #0	@ 0010484c 301c
.org 0x10484e
	adds r0, #76	@ 0010484e 4c30
.org 0x104850
	strb r5, [r0, #0]	@ 00104850 0570
.org 0x104852
	adds r3, r6, #0	@ 00104852 331c
.org 0x104854
	adds r3, #74	@ 00104854 4a33
.org 0x104856
	ldrb r1, [r3, #0]	@ 00104856 1978
.org 0x104858
	movs r0, #17	@ 00104858 1120
.org 0x10485a
	negs r0, r0	@ 0010485a 4042
.org 0x10485c
	ands r0, r1	@ 0010485c 0840
.org 0x10485e
	strb r0, [r3, #0]	@ 0010485e 1870
.org 0x104860
	ldr r1, [pc, #88]	@ 00104860 1649
.org 0x104862
	ldrb r0, [r6, #9]	@ 00104862 707a
.org 0x104864
	lsls r0, r0, #2	@ 00104864 8000
.org 0x104866
	adds r0, r0, r1	@ 00104866 4018
.org 0x104868
	str r2, [r6, #12]	@ 00104868 f260
.org 0x10486a
	ldr r0, [r0, #0]	@ 0010486a 0068
.org 0x10486c
	ldr r0, [r0, #4]	@ 0010486c 4068
.org 0x10486e
	str r0, [r6, #20]	@ 0010486e 7061
.org 0x104870
	ldrb r1, [r6, #10]	@ 00104870 b17a
.org 0x104872
	movs r0, #4	@ 00104872 0420
.org 0x104874
	orrs r0, r1	@ 00104874 0843
.org 0x104876
	strb r0, [r6, #10]	@ 00104876 b072
.org 0x104878
	adds r4, r6, #0	@ 00104878 341c
.org 0x10487a
	adds r4, #116	@ 0010487a 7434
.org 0x10487c
	ldr r1, [pc, #64]	@ 0010487c 1049
.org 0x10487e
	adds r2, r6, #0	@ 0010487e 321c
.org 0x104880
	adds r2, #84	@ 00104880 5432
.org 0x104882
	adds r0, r4, #0	@ 00104882 201c
.org 0x104884
	movs r3, #128	@ 00104884 8023
.org 0x104886
	bl 0x5760	@ 00104886 00f76bff
.org 0x10488a
	str r6, [r4, #44]	@ 0010488a e662
.org 0x10488c
	ldr r0, [pc, #52]	@ 0010488c 0d48
.org 0x10488e
	str r0, [r4, #36]	@ 0010488e 6062
.org 0x104890
	ldr r0, [r6, #84]	@ 00104890 706d
.org 0x104892
	ldr r1, [r6, #88]	@ 00104892 b16d
.org 0x104894
	bl 0x8534	@ 00104894 03f74efe
.org 0x104898
	str r0, [r6, #88]	@ 00104898 b065
.org 0x10489a
	movs r1, #234	@ 0010489a ea21
.org 0x10489c
	lsls r1, r1, #8	@ 0010489c 0902
.org 0x10489e
	adds r0, r6, #0	@ 0010489e 301c
.org 0x1048a0
	bl 0x1cf00	@ 001048a0 18f72efb
.org 0x1048a4
	adds r0, r6, #0	@ 001048a4 301c
.org 0x1048a6
	adds r0, #180	@ 001048a6 b430
.org 0x1048a8
	strb r5, [r0, #0]	@ 001048a8 0570
.org 0x1048aa
	strb r5, [r6, #18]	@ 001048aa b574
.org 0x1048ac
	adds r0, #2	@ 001048ac 0230
.org 0x1048ae
	strb r5, [r0, #0]	@ 001048ae 0570
.org 0x1048b0
	adds r0, r6, #0	@ 001048b0 301c
.org 0x1048b2
	bl 0x1048c8	@ 001048b2 00f009f8
.org 0x1048b6
	pop {r4, r5, r6}	@ 001048b6 70bc
.org 0x1048b8
	pop {r0}	@ 001048b8 01bc
.org 0x1048ba
	bx r0	@ 001048ba 0047
