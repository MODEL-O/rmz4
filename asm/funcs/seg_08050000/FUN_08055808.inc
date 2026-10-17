@ FUN_08055808  entry 0x08055808  size 246
.thumb
.org 0x55808
FUN_08055808:
	push {r4, r5, r6, lr}	@ 00055808 70b5
.org 0x5580a
	adds r5, r0, #0	@ 0005580a 051c
.org 0x5580c
	ldrb r6, [r5, #15]	@ 0005580c ee7b
.org 0x5580e
	cmp r6, #0	@ 0005580e 002e
.org 0x55810
	bne.n 0x55840	@ 00055810 16d1
.org 0x55812
	ldr r1, [pc, #236]	@ 00055812 3b49
.org 0x55814
	bl 0x1cf00	@ 00055814 c7f774fb
.org 0x55818
	movs r4, #36	@ 00055818 2424
.org 0x5581a
	adds r0, r5, #0	@ 0005581a 281c
.org 0x5581c
	adds r0, #188	@ 0005581c bc30
.org 0x5581e
	adds r1, r5, #0	@ 0005581e 291c
.org 0x55820
	adds r1, #184	@ 00055820 b831
.org 0x55822
	ldr r0, [r0, #0]	@ 00055822 0068
.org 0x55824
	ldr r1, [r1, #0]	@ 00055824 0968
.org 0x55826
	subs r0, r0, r1	@ 00055826 401a
.org 0x55828
	str r0, [r5, #104]	@ 00055828 a866
.org 0x5582a
	lsls r0, r0, #1	@ 0005582a 4000
.org 0x5582c
	movs r1, #162	@ 0005582c a221
.org 0x5582e
	lsls r1, r1, #3	@ 0005582e c900
.org 0x55830
	bl 0x128fb8	@ 00055830 d3f0c2fb
.org 0x55834
	str r0, [r5, #104]	@ 00055834 a866
.org 0x55836
	strb r4, [r5, #18]	@ 00055836 ac74
.org 0x55838
	strb r6, [r5, #19]	@ 00055838 ee74
.org 0x5583a
	ldrb r0, [r5, #15]	@ 0005583a e87b
.org 0x5583c
	adds r0, #1	@ 0005583c 0130
.org 0x5583e
	strb r0, [r5, #15]	@ 0005583e e873
.org 0x55840
	ldrb r0, [r5, #19]	@ 00055840 e87c
.org 0x55842
	adds r4, r5, #0	@ 00055842 2c1c
.org 0x55844
	adds r4, #115	@ 00055844 7334
.org 0x55846
	cmp r0, #0	@ 00055846 0028
.org 0x55848
	bne.n 0x55862	@ 00055848 0bd1
.org 0x5584a
	ldrb r0, [r4, #0]	@ 0005584a 2078
.org 0x5584c
	cmp r0, #3	@ 0005584c 0328
.org 0x5584e
	bne.n 0x55862	@ 0005584e 08d1
.org 0x55850
	ldrb r0, [r5, #18]	@ 00055850 a87c
.org 0x55852
	cmp r0, #24	@ 00055852 1828
.org 0x55854
	bhi.n 0x55862	@ 00055854 05d8
.org 0x55856
	ldr r1, [pc, #172]	@ 00055856 2b49
.org 0x55858
	adds r0, r5, #0	@ 00055858 281c
.org 0x5585a
	bl 0x1cf00	@ 0005585a c7f751fb
.org 0x5585e
	movs r0, #1	@ 0005585e 0120
.org 0x55860
	strb r0, [r5, #19]	@ 00055860 e874
.org 0x55862
	adds r0, r5, #0	@ 00055862 281c
.org 0x55864
	bl 0x1cff0	@ 00055864 c7f7c4fb
.org 0x55868
	adds r0, r5, #0	@ 00055868 281c
.org 0x5586a
	adds r0, #116	@ 0005586a 7430
.org 0x5586c
	ldr r3, [pc, #152]	@ 0005586c 264b
.org 0x5586e
	ldrb r1, [r5, #30]	@ 0005586e a97f
.org 0x55870
	lsls r1, r1, #8	@ 00055870 0902
.org 0x55872
	adds r2, r5, #0	@ 00055872 2a1c
.org 0x55874
	adds r2, #112	@ 00055874 7032
.org 0x55876
	ldrb r2, [r2, #0]	@ 00055876 1278
.org 0x55878
	orrs r1, r2	@ 00055878 1143
.org 0x5587a
	ldr r2, [pc, #144]	@ 0005587a 244a
.org 0x5587c
	adds r1, r1, r2	@ 0005587c 8918
.org 0x5587e
	lsls r1, r1, #2	@ 0005587e 8900
.org 0x55880
	adds r1, r1, r3	@ 00055880 c918
.org 0x55882
	adds r2, r5, #0	@ 00055882 2a1c
.org 0x55884
	adds r2, #113	@ 00055884 7132
.org 0x55886
	ldrb r2, [r2, #0]	@ 00055886 1278
.org 0x55888
	lsls r2, r2, #24	@ 00055888 1206
.org 0x5588a
	asrs r2, r2, #24	@ 0005588a 1216
.org 0x5588c
	ldr r1, [r1, #0]	@ 0005588c 0968
.org 0x5588e
	lsls r2, r2, #2	@ 0005588e 9200
.org 0x55890
	adds r2, r2, r1	@ 00055890 5218
.org 0x55892
	ldr r1, [r2, #0]	@ 00055892 1168
.org 0x55894
	ldrb r2, [r1, #0]	@ 00055894 0a78
.org 0x55896
	lsls r1, r2, #1	@ 00055896 5100
.org 0x55898
	adds r1, r1, r2	@ 00055898 8918
.org 0x5589a
	lsls r1, r1, #3	@ 0005589a c900
.org 0x5589c
	ldr r2, [pc, #112]	@ 0005589c 1c4a
.org 0x5589e
	adds r1, r1, r2	@ 0005589e 8918
.org 0x558a0
	bl 0x5784	@ 000558a0 aff770ff
.org 0x558a4
	ldrb r0, [r5, #18]	@ 000558a4 a87c
.org 0x558a6
	cmp r0, #0	@ 000558a6 0028
.org 0x558a8
	beq.n 0x558ae	@ 000558a8 01d0
.org 0x558aa
	subs r0, #1	@ 000558aa 0138
.org 0x558ac
	strb r0, [r5, #18]	@ 000558ac a874
.org 0x558ae
	adds r3, r5, #0	@ 000558ae 2b1c
.org 0x558b0
	adds r3, #188	@ 000558b0 bc33
.org 0x558b2
	adds r2, r5, #0	@ 000558b2 2a1c
.org 0x558b4
	adds r2, #184	@ 000558b4 b832
.org 0x558b6
	ldrb r1, [r5, #18]	@ 000558b6 a97c
.org 0x558b8
	ldr r0, [r5, #104]	@ 000558b8 a86e
.org 0x558ba
	muls r0, r1	@ 000558ba 4843
.org 0x558bc
	muls r0, r1	@ 000558bc 4843
.org 0x558be
	lsrs r1, r0, #31	@ 000558be c10f
.org 0x558c0
	adds r0, r0, r1	@ 000558c0 4018
.org 0x558c2
	asrs r0, r0, #1	@ 000558c2 4010
.org 0x558c4
	ldr r1, [r2, #0]	@ 000558c4 1168
.org 0x558c6
	adds r1, r1, r0	@ 000558c6 0918
.org 0x558c8
	str r1, [r3, #0]	@ 000558c8 1960
.org 0x558ca
	ldr r2, [pc, #72]	@ 000558ca 124a
.org 0x558cc
	adds r0, r5, #0	@ 000558cc 281c
.org 0x558ce
	adds r0, #181	@ 000558ce b530
.org 0x558d0
	ldrb r0, [r0, #0]	@ 000558d0 0078
.org 0x558d2
	lsls r0, r0, #1	@ 000558d2 4000
.org 0x558d4
	adds r0, r0, r2	@ 000558d4 8018
.org 0x558d6
	movs r2, #0	@ 000558d6 0022
.org 0x558d8
	ldrsh r0, [r0, r2]	@ 000558d8 805e
.org 0x558da
	lsls r0, r0, #1	@ 000558da 4000
.org 0x558dc
	adds r1, r1, r0	@ 000558dc 0918
.org 0x558de
	str r1, [r5, #88]	@ 000558de a965
.org 0x558e0
	ldrb r0, [r4, #0]	@ 000558e0 2078
.org 0x558e2
	cmp r0, #3	@ 000558e2 0328
.org 0x558e4
	bne.n 0x558f8	@ 000558e4 08d1
.org 0x558e6
	ldrb r0, [r5, #19]	@ 000558e6 e87c
.org 0x558e8
	cmp r0, #0	@ 000558e8 0028
.org 0x558ea
	beq.n 0x558f8	@ 000558ea 05d0
.org 0x558ec
	ldrb r1, [r5, #18]	@ 000558ec a97c
.org 0x558ee
	cmp r1, #0	@ 000558ee 0029
.org 0x558f0
	bne.n 0x558f8	@ 000558f0 02d1
.org 0x558f2
	movs r0, #5	@ 000558f2 0520
.org 0x558f4
	strb r0, [r5, #14]	@ 000558f4 a873
.org 0x558f6
	strb r1, [r5, #15]	@ 000558f6 e973
.org 0x558f8
	pop {r4, r5, r6}	@ 000558f8 70bc
.org 0x558fa
	pop {r0}	@ 000558fa 01bc
.org 0x558fc
	bx r0	@ 000558fc 0047
