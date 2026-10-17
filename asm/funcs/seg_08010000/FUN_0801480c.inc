@ FUN_0801480c  entry 0x0801480c  size 266
.thumb
.org 0x1480c
FUN_0801480c:
	push {r4, r5, r6, r7, lr}	@ 0001480c f0b5
.org 0x1480e
	sub sp, #8	@ 0001480e 82b0
.org 0x14810
	adds r6, r0, #0	@ 00014810 061c
.org 0x14812
	adds r7, r1, #0	@ 00014812 0f1c
.org 0x14814
	asrs r2, r6, #12	@ 00014814 3213
.org 0x14816
	adds r0, r2, #0	@ 00014816 101c
.org 0x14818
	adds r0, #90	@ 00014818 5a30
.org 0x1481a
	lsls r0, r0, #16	@ 0001481a 0004
.org 0x1481c
	movs r3, #200	@ 0001481c c823
.org 0x1481e
	lsls r3, r3, #11	@ 0001481e db02
.org 0x14820
	adds r1, r7, r3	@ 00014820 f918
.org 0x14822
	asrs r4, r1, #12	@ 00014822 0c13
.org 0x14824
	lsls r1, r4, #16	@ 00014824 2104
.org 0x14826
	lsrs r0, r0, #16	@ 00014826 000c
.org 0x14828
	orrs r0, r1	@ 00014828 0843
.org 0x1482a
	str r0, [sp, #0]	@ 0001482a 0090
.org 0x1482c
	movs r3, #1	@ 0001482c 0123
.org 0x1482e
	ldr r0, [pc, #100]	@ 0001482e 1948
.org 0x14830
	str r0, [sp, #4]	@ 00014830 0190
.org 0x14832
	ldr r1, [pc, #100]	@ 00014832 1949
.org 0x14834
	movs r0, #252	@ 00014834 fc20
.org 0x14836
	lsls r0, r0, #3	@ 00014836 c000
.org 0x14838
	adds r5, r1, r0	@ 00014838 0d18
.org 0x1483a
	ldrh r0, [r5, #0]	@ 0001483a 2888
.org 0x1483c
	muls r0, r4	@ 0001483c 6043
.org 0x1483e
	adds r0, r0, r2	@ 0001483e 8018
.org 0x14840
	adds r0, #2	@ 00014840 0230
.org 0x14842
	lsls r0, r0, #1	@ 00014842 4000
.org 0x14844
	adds r0, r0, r5	@ 00014844 4019
.org 0x14846
	ldrh r2, [r0, #0]	@ 00014846 0288
.org 0x14848
	ldr r0, [pc, #80]	@ 00014848 1448
.org 0x1484a
	adds r1, r1, r0	@ 0001484a 0918
.org 0x1484c
	strh r2, [r1, #0]	@ 0001484c 0a80
.org 0x1484e
	adds r0, r2, #0	@ 0001484e 101c
.org 0x14850
	subs r0, #215	@ 00014850 d738
.org 0x14852
	lsls r0, r0, #16	@ 00014852 0004
.org 0x14854
	lsrs r0, r0, #16	@ 00014854 000c
.org 0x14856
	cmp r0, #1	@ 00014856 0128
.org 0x14858
	bls.n 0x14914	@ 00014858 5cd9
.org 0x1485a
	cmp r2, #0	@ 0001485a 002a
.org 0x1485c
	beq.n 0x14914	@ 0001485c 5ad0
.org 0x1485e
	ands r2, r3	@ 0001485e 1a40
.org 0x14860
	cmp r2, #0	@ 00014860 002a
.org 0x14862
	bne.n 0x148c8	@ 00014862 31d1
.org 0x14864
	ldr r2, [pc, #56]	@ 00014864 0e4a
.org 0x14866
	adds r0, r6, r2	@ 00014866 b018
.org 0x14868
	asrs r3, r0, #12	@ 00014868 0313
.org 0x1486a
	ldrh r0, [r5, #0]	@ 0001486a 2888
.org 0x1486c
	muls r0, r4	@ 0001486c 6043
.org 0x1486e
	adds r0, r0, r3	@ 0001486e c018
.org 0x14870
	adds r0, #2	@ 00014870 0230
.org 0x14872
	lsls r0, r0, #1	@ 00014872 4000
.org 0x14874
	adds r0, r0, r5	@ 00014874 4019
.org 0x14876
	ldrh r2, [r0, #0]	@ 00014876 0288
.org 0x14878
	strh r2, [r1, #0]	@ 00014878 0a80
.org 0x1487a
	cmp r2, #0	@ 0001487a 002a
.org 0x1487c
	beq.n 0x148b6	@ 0001487c 1bd0
.org 0x1487e
	cmp r2, #175	@ 0001487e af2a
.org 0x14880
	bhi.n 0x148a8	@ 00014880 12d8
.org 0x14882
	lsls r2, r2, #3	@ 00014882 d200
.org 0x14884
	ldr r0, [pc, #28]	@ 00014884 0748
.org 0x14886
	adds r2, r2, r0	@ 00014886 1218
.org 0x14888
	adds r0, r3, #0	@ 00014888 181c
.org 0x1488a
	adds r1, r4, #0	@ 0001488a 211c
.org 0x1488c
	bl 0x7410	@ 0001488c f2f7c0fd
.org 0x14890
	b.n 0x148b6	@ 00014890 11e0
.org 0x14892
	.byte 0x00	@ 00014892 data
.org 0x14893
	.byte 0x00	@ 00014893 data
.org 0x14894
	.byte 0x01,0x00,0x01,0x00	@ 00014894 data
.org 0x14898
	.byte 0xb0,0x0a,0x00,0x02	@ 00014898 data
.org 0x1489c
	.byte 0x50,0xd0,0x02,0x00	@ 0001489c data
.org 0x148a0
	.byte 0x00,0xf0,0xff,0xff	@ 000148a0 data
.org 0x148a4
	.byte 0xdc,0x41,0x83,0x08	@ 000148a4 data
.org 0x148a8
	lsls r2, r2, #3	@ 000148a8 d200
.org 0x148aa
	ldr r0, [pc, #24]	@ 000148aa 0648
.org 0x148ac
	adds r2, r2, r0	@ 000148ac 1218
.org 0x148ae
	adds r0, r3, #0	@ 000148ae 181c
.org 0x148b0
	adds r1, r4, #0	@ 000148b0 211c
.org 0x148b2
	bl 0x7410	@ 000148b2 f2f7adfd
.org 0x148b6
	asrs r0, r6, #12	@ 000148b6 3013
.org 0x148b8
	asrs r1, r7, #12	@ 000148b8 3913
.org 0x148ba
	mov r2, sp	@ 000148ba 6a46
.org 0x148bc
	bl 0x736c	@ 000148bc f2f756fd
.org 0x148c0
	b.n 0x14914	@ 000148c0 28e0
.org 0x148c2
	.byte 0x00	@ 000148c2 data
.org 0x148c3
	.byte 0x00	@ 000148c3 data
.org 0x148c4
	.byte 0x7c,0x41,0x83,0x08	@ 000148c4 data
.org 0x148c8
	movs r3, #128	@ 000148c8 8023
.org 0x148ca
	lsls r3, r3, #5	@ 000148ca 5b01
.org 0x148cc
	adds r0, r6, r3	@ 000148cc f018
.org 0x148ce
	asrs r3, r0, #12	@ 000148ce 0313
.org 0x148d0
	ldrh r0, [r5, #0]	@ 000148d0 2888
.org 0x148d2
	muls r0, r4	@ 000148d2 6043
.org 0x148d4
	adds r0, r0, r3	@ 000148d4 c018
.org 0x148d6
	adds r0, #2	@ 000148d6 0230
.org 0x148d8
	lsls r0, r0, #1	@ 000148d8 4000
.org 0x148da
	adds r0, r0, r5	@ 000148da 4019
.org 0x148dc
	ldrh r2, [r0, #0]	@ 000148dc 0288
.org 0x148de
	strh r2, [r1, #0]	@ 000148de 0a80
.org 0x148e0
	cmp r2, #0	@ 000148e0 002a
.org 0x148e2
	beq.n 0x1490a	@ 000148e2 12d0
.org 0x148e4
	cmp r2, #175	@ 000148e4 af2a
.org 0x148e6
	bhi.n 0x148fc	@ 000148e6 09d8
.org 0x148e8
	lsls r2, r2, #3	@ 000148e8 d200
.org 0x148ea
	ldr r0, [pc, #12]	@ 000148ea 0348
.org 0x148ec
	adds r2, r2, r0	@ 000148ec 1218
.org 0x148ee
	adds r0, r3, #0	@ 000148ee 181c
.org 0x148f0
	adds r1, r4, #0	@ 000148f0 211c
.org 0x148f2
	bl 0x7410	@ 000148f2 f2f78dfd
.org 0x148f6
	b.n 0x1490a	@ 000148f6 08e0
.org 0x148f8
	.byte 0xdc,0x41,0x83,0x08	@ 000148f8 data
.org 0x148fc
	lsls r2, r2, #3	@ 000148fc d200
.org 0x148fe
	ldr r0, [pc, #56]	@ 000148fe 0e48
.org 0x14900
	adds r2, r2, r0	@ 00014900 1218
.org 0x14902
	adds r0, r3, #0	@ 00014902 181c
.org 0x14904
	adds r1, r4, #0	@ 00014904 211c
.org 0x14906
	bl 0x7410	@ 00014906 f2f783fd
.org 0x1490a
	asrs r0, r6, #12	@ 0001490a 3013
.org 0x1490c
	asrs r1, r7, #12	@ 0001490c 3913
.org 0x1490e
	mov r2, sp	@ 0001490e 6a46
.org 0x14910
	bl 0x736c	@ 00014910 f2f72cfd
.org 0x14914
	asrs r0, r6, #12	@ 00014914 3013
