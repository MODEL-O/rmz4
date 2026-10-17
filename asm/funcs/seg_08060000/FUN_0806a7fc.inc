@ FUN_0806a7fc  entry 0x0806a7fc  size 200
.thumb
.org 0x6a7fc
FUN_0806a7fc:
	push {r4, r5, r6, r7, lr}	@ 0006a7fc f0b5
.org 0x6a7fe
	mov r7, r8	@ 0006a7fe 4746
.org 0x6a800
	push {r7}	@ 0006a800 80b4
.org 0x6a802
	adds r4, r0, #0	@ 0006a802 041c
.org 0x6a804
	lsls r1, r1, #24	@ 0006a804 0906
.org 0x6a806
	lsrs r1, r1, #24	@ 0006a806 090e
.org 0x6a808
	lsls r2, r2, #24	@ 0006a808 1206
.org 0x6a80a
	lsrs r5, r2, #24	@ 0006a80a 150e
.org 0x6a80c
	adds r6, r5, #0	@ 0006a80c 2e1c
.org 0x6a80e
	lsls r3, r3, #24	@ 0006a80e 1b06
.org 0x6a810
	lsrs r7, r3, #24	@ 0006a810 1f0e
.org 0x6a812
	adds r0, #36	@ 0006a812 2430
.org 0x6a814
	ldrb r0, [r0, #0]	@ 0006a814 0078
.org 0x6a816
	adds r3, r0, #0	@ 0006a816 031c
.org 0x6a818
	movs r0, #160	@ 0006a818 a020
.org 0x6a81a
	lsls r0, r0, #1	@ 0006a81a 4000
.org 0x6a81c
	subs r0, r0, r1	@ 0006a81c 401a
.org 0x6a81e
	lsls r2, r5, #1	@ 0006a81e 6a00
.org 0x6a820
	muls r0, r2	@ 0006a820 5043
.org 0x6a822
	adds r1, r1, r0	@ 0006a822 0918
.org 0x6a824
	adds r1, #128	@ 0006a824 8031
.org 0x6a826
	lsls r1, r1, #24	@ 0006a826 0906
.org 0x6a828
	lsrs r1, r1, #24	@ 0006a828 090e
.org 0x6a82a
	mov r8, r1	@ 0006a82a 8846
.org 0x6a82c
	cmp r8, r3	@ 0006a82c 9845
.org 0x6a82e
	bne.n 0x6a834	@ 0006a82e 01d1
.org 0x6a830
	cmp r7, #0	@ 0006a830 002f
.org 0x6a832
	beq.n 0x6a8ba	@ 0006a832 42d0
.org 0x6a834
	mov r0, r8	@ 0006a834 4046
.org 0x6a836
	cmp r0, #0	@ 0006a836 0028
.org 0x6a838
	bne.n 0x6a870	@ 0006a838 1ad1
.org 0x6a83a
	adds r0, r4, #0	@ 0006a83a 201c
.org 0x6a83c
	bl 0x1cc9c	@ 0006a83c b2f72efa
.org 0x6a840
	movs r2, #1	@ 0006a840 0122
.org 0x6a842
	adds r1, r5, #0	@ 0006a842 291c
.org 0x6a844
	ands r1, r2	@ 0006a844 1140
.org 0x6a846
	adds r0, r4, #0	@ 0006a846 201c
.org 0x6a848
	adds r0, #76	@ 0006a848 4c30
.org 0x6a84a
	strb r1, [r0, #0]	@ 0006a84a 0170
.org 0x6a84c
	movs r0, #74	@ 0006a84c 4a20
.org 0x6a84e
	adds r0, r0, r4	@ 0006a84e 0019
.org 0x6a850
	mov ip, r0	@ 0006a850 8446
.org 0x6a852
	lsls r1, r1, #4	@ 0006a852 0901
.org 0x6a854
	ldrb r3, [r0, #0]	@ 0006a854 0378
.org 0x6a856
	movs r0, #17	@ 0006a856 1120
.org 0x6a858
	negs r0, r0	@ 0006a858 4042
.org 0x6a85a
	ands r0, r3	@ 0006a85a 1840
.org 0x6a85c
	orrs r0, r1	@ 0006a85c 0843
.org 0x6a85e
	mov r1, ip	@ 0006a85e 6146
.org 0x6a860
	strb r0, [r1, #0]	@ 0006a860 0870
.org 0x6a862
	ands r2, r5	@ 0006a862 2a40
.org 0x6a864
	cmp r2, #0	@ 0006a864 002a
.org 0x6a866
	beq.n 0x6a8aa	@ 0006a866 20d0
.org 0x6a868
	ldrb r0, [r4, #10]	@ 0006a868 a07a
.org 0x6a86a
	movs r1, #16	@ 0006a86a 1021
.org 0x6a86c
	orrs r0, r1	@ 0006a86c 0843
.org 0x6a86e
	b.n 0x6a8b0	@ 0006a86e 1fe0
.org 0x6a870
	cmp r3, #0	@ 0006a870 002b
.org 0x6a872
	bne.n 0x6a8b2	@ 0006a872 1ed1
.org 0x6a874
	adds r0, r4, #0	@ 0006a874 201c
.org 0x6a876
	bl 0x1cd28	@ 0006a876 b2f757fa
.org 0x6a87a
	movs r3, #1	@ 0006a87a 0123
.org 0x6a87c
	adds r1, r6, #0	@ 0006a87c 311c
.org 0x6a87e
	ands r1, r3	@ 0006a87e 1940
.org 0x6a880
	adds r0, r4, #0	@ 0006a880 201c
.org 0x6a882
	adds r0, #76	@ 0006a882 4c30
.org 0x6a884
	strb r1, [r0, #0]	@ 0006a884 0170
.org 0x6a886
	movs r0, #74	@ 0006a886 4a20
.org 0x6a888
	adds r0, r0, r4	@ 0006a888 0019
.org 0x6a88a
	mov ip, r0	@ 0006a88a 8446
.org 0x6a88c
	lsls r1, r1, #4	@ 0006a88c 0901
.org 0x6a88e
	ldrb r2, [r0, #0]	@ 0006a88e 0278
.org 0x6a890
	movs r0, #17	@ 0006a890 1120
.org 0x6a892
	negs r0, r0	@ 0006a892 4042
.org 0x6a894
	ands r0, r2	@ 0006a894 1040
.org 0x6a896
	orrs r0, r1	@ 0006a896 0843
.org 0x6a898
	mov r1, ip	@ 0006a898 6146
.org 0x6a89a
	strb r0, [r1, #0]	@ 0006a89a 0870
.org 0x6a89c
	ands r6, r3	@ 0006a89c 1e40
.org 0x6a89e
	cmp r6, #0	@ 0006a89e 002e
.org 0x6a8a0
	beq.n 0x6a8aa	@ 0006a8a0 03d0
.org 0x6a8a2
	ldrb r0, [r4, #10]	@ 0006a8a2 a07a
.org 0x6a8a4
	movs r1, #16	@ 0006a8a4 1021
.org 0x6a8a6
	orrs r0, r1	@ 0006a8a6 0843
.org 0x6a8a8
	b.n 0x6a8b0	@ 0006a8a8 02e0
.org 0x6a8aa
	ldrb r1, [r4, #10]	@ 0006a8aa a17a
.org 0x6a8ac
	movs r0, #239	@ 0006a8ac ef20
.org 0x6a8ae
	ands r0, r1	@ 0006a8ae 0840
.org 0x6a8b0
	strb r0, [r4, #10]	@ 0006a8b0 a072
.org 0x6a8b2
	adds r0, r4, #0	@ 0006a8b2 201c
.org 0x6a8b4
	adds r0, #36	@ 0006a8b4 2430
.org 0x6a8b6
	mov r1, r8	@ 0006a8b6 4146
.org 0x6a8b8
	strb r1, [r0, #0]	@ 0006a8b8 0170
.org 0x6a8ba
	pop {r3}	@ 0006a8ba 08bc
.org 0x6a8bc
	mov r8, r3	@ 0006a8bc 9846
.org 0x6a8be
	pop {r4, r5, r6, r7}	@ 0006a8be f0bc
.org 0x6a8c0
	pop {r0}	@ 0006a8c0 01bc
.org 0x6a8c2
	bx r0	@ 0006a8c2 0047
