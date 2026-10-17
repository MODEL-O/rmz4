@ FUN_080be7f4  entry 0x080be7f4  size 172
.thumb
.org 0xbe7f4
FUN_080be7f4:
	push {r4, r5, r6, lr}	@ 000be7f4 70b5
.org 0xbe7f6
	adds r5, r0, #0	@ 000be7f6 051c
.org 0xbe7f8
	ldrb r4, [r5, #17]	@ 000be7f8 6c7c
.org 0xbe7fa
	ldr r1, [pc, #68]	@ 000be7fa 1149
.org 0xbe7fc
	ldrb r0, [r5, #9]	@ 000be7fc 687a
.org 0xbe7fe
	lsls r0, r0, #2	@ 000be7fe 8000
.org 0xbe800
	adds r0, r0, r1	@ 000be800 4018
.org 0xbe802
	movs r1, #1	@ 000be802 0121
.org 0xbe804
	str r1, [r5, #12]	@ 000be804 e960
.org 0xbe806
	ldr r0, [r0, #0]	@ 000be806 0068
.org 0xbe808
	ldr r0, [r0, #4]	@ 000be808 4068
.org 0xbe80a
	str r0, [r5, #20]	@ 000be80a 6861
.org 0xbe80c
	ldrb r1, [r5, #10]	@ 000be80c a97a
.org 0xbe80e
	movs r0, #1	@ 000be80e 0120
.org 0xbe810
	movs r6, #0	@ 000be810 0026
.org 0xbe812
	movs r2, #0	@ 000be812 0022
.org 0xbe814
	orrs r0, r1	@ 000be814 0843
.org 0xbe816
	movs r1, #2	@ 000be816 0221
.org 0xbe818
	orrs r0, r1	@ 000be818 0843
.org 0xbe81a
	strb r0, [r5, #10]	@ 000be81a a872
.org 0xbe81c
	lsls r1, r4, #1	@ 000be81c 6100
.org 0xbe81e
	subs r1, #1	@ 000be81e 0139
.org 0xbe820
	lsls r0, r1, #1	@ 000be820 4800
.org 0xbe822
	adds r0, r0, r1	@ 000be822 4018
.org 0xbe824
	lsls r0, r0, #8	@ 000be824 0002
.org 0xbe826
	str r0, [r5, #92]	@ 000be826 e865
.org 0xbe828
	adds r0, r5, #0	@ 000be828 281c
.org 0xbe82a
	adds r0, #180	@ 000be82a b430
.org 0xbe82c
	str r2, [r0, #0]	@ 000be82c 0260
.org 0xbe82e
	adds r0, r5, #0	@ 000be82e 281c
.org 0xbe830
	bl 0x1cc9c	@ 000be830 5ef734fa
.org 0xbe834
	cmp r4, #0	@ 000be834 002c
.org 0xbe836
	beq.n 0xbe844	@ 000be836 05d0
.org 0xbe838
	ldrb r0, [r5, #10]	@ 000be838 a87a
.org 0xbe83a
	movs r1, #16	@ 000be83a 1021
.org 0xbe83c
	orrs r0, r1	@ 000be83c 0843
.org 0xbe83e
	b.n 0xbe84a	@ 000be83e 04e0
.org 0xbe840
	.byte 0xf4,0x49,0x86,0x08	@ 000be840 data
.org 0xbe844
	ldrb r1, [r5, #10]	@ 000be844 a97a
.org 0xbe846
	movs r0, #239	@ 000be846 ef20
.org 0xbe848
	ands r0, r1	@ 000be848 0840
.org 0xbe84a
	strb r0, [r5, #10]	@ 000be84a a872
.org 0xbe84c
	movs r1, #1	@ 000be84c 0121
.org 0xbe84e
	ands r1, r4	@ 000be84e 2140
.org 0xbe850
	adds r0, r5, #0	@ 000be850 281c
.org 0xbe852
	adds r0, #76	@ 000be852 4c30
.org 0xbe854
	strb r1, [r0, #0]	@ 000be854 0170
.org 0xbe856
	adds r3, r5, #0	@ 000be856 2b1c
.org 0xbe858
	adds r3, #74	@ 000be858 4a33
.org 0xbe85a
	lsls r1, r1, #4	@ 000be85a 0901
.org 0xbe85c
	ldrb r2, [r3, #0]	@ 000be85c 1a78
.org 0xbe85e
	movs r0, #17	@ 000be85e 1120
.org 0xbe860
	negs r0, r0	@ 000be860 4042
.org 0xbe862
	ands r0, r2	@ 000be862 1040
.org 0xbe864
	orrs r0, r1	@ 000be864 0843
.org 0xbe866
	strb r0, [r3, #0]	@ 000be866 1870
.org 0xbe868
	movs r1, #145	@ 000be868 9121
.org 0xbe86a
	lsls r1, r1, #8	@ 000be86a 0902
.org 0xbe86c
	adds r0, r5, #0	@ 000be86c 281c
.org 0xbe86e
	bl 0x1cf00	@ 000be86e 5ef747fb
.org 0xbe872
	adds r0, r5, #0	@ 000be872 281c
.org 0xbe874
	bl 0x1cff0	@ 000be874 5ef7bcfb
.org 0xbe878
	ldrb r1, [r5, #10]	@ 000be878 a97a
.org 0xbe87a
	movs r0, #4	@ 000be87a 0420
.org 0xbe87c
	orrs r0, r1	@ 000be87c 0843
.org 0xbe87e
	strb r0, [r5, #10]	@ 000be87e a872
.org 0xbe880
	adds r4, r5, #0	@ 000be880 2c1c
.org 0xbe882
	adds r4, #116	@ 000be882 7434
.org 0xbe884
	ldr r1, [pc, #28]	@ 000be884 0749
.org 0xbe886
	adds r2, r5, #0	@ 000be886 2a1c
.org 0xbe888
	adds r2, #84	@ 000be888 5432
.org 0xbe88a
	adds r0, r4, #0	@ 000be88a 201c
.org 0xbe88c
	movs r3, #64	@ 000be88c 4023
.org 0xbe88e
	bl 0x5760	@ 000be88e 46f767ff
.org 0xbe892
	str r5, [r4, #44]	@ 000be892 e562
.org 0xbe894
	ldr r0, [pc, #16]	@ 000be894 0448
.org 0xbe896
	str r0, [r4, #36]	@ 000be896 6062
.org 0xbe898
	adds r0, r5, #0	@ 000be898 281c
.org 0xbe89a
	bl 0xbe914	@ 000be89a 00f03bf8
.org 0xbe89e
	pop {r4, r5, r6}	@ 000be89e 70bc
