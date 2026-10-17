@ FUN_08044794  entry 0x08044794  size 1544
.thumb
.org 0x44794
FUN_08044794:
	push {r4, r5, r6, r7, lr}	@ 00044794 f0b5
.org 0x44796
	mov r7, sl	@ 00044796 5746
.org 0x44798
	mov r6, r9	@ 00044798 4e46
.org 0x4479a
	mov r5, r8	@ 0004479a 4546
.org 0x4479c
	push {r5, r6, r7}	@ 0004479c e0b4
.org 0x4479e
	adds r5, r0, #0	@ 0004479e 051c
.org 0x447a0
	ldr r7, [r5, #40]	@ 000447a0 af6a
.org 0x447a2
	ldrb r0, [r7, #10]	@ 000447a2 b87a
.org 0x447a4
	lsrs r2, r0, #4	@ 000447a4 0209
.org 0x447a6
	movs r0, #1	@ 000447a6 0120
.org 0x447a8
	ands r2, r0	@ 000447a8 0240
.org 0x447aa
	cmp r2, #0	@ 000447aa 002a
.org 0x447ac
	beq.n 0x447b6	@ 000447ac 03d0
.org 0x447ae
	ldrb r1, [r5, #10]	@ 000447ae a97a
.org 0x447b0
	movs r0, #16	@ 000447b0 1020
.org 0x447b2
	orrs r0, r1	@ 000447b2 0843
.org 0x447b4
	b.n 0x447bc	@ 000447b4 02e0
.org 0x447b6
	ldrb r1, [r5, #10]	@ 000447b6 a97a
.org 0x447b8
	movs r0, #239	@ 000447b8 ef20
.org 0x447ba
	ands r0, r1	@ 000447ba 0840
.org 0x447bc
	strb r0, [r5, #10]	@ 000447bc a872
.org 0x447be
	adds r1, r2, #0	@ 000447be 111c
.org 0x447c0
	adds r0, r5, #0	@ 000447c0 281c
.org 0x447c2
	adds r0, #76	@ 000447c2 4c30
.org 0x447c4
	strb r1, [r0, #0]	@ 000447c4 0170
.org 0x447c6
	adds r3, r5, #0	@ 000447c6 2b1c
.org 0x447c8
	adds r3, #74	@ 000447c8 4a33
.org 0x447ca
	lsls r1, r1, #4	@ 000447ca 0901
.org 0x447cc
	ldrb r2, [r3, #0]	@ 000447cc 1a78
.org 0x447ce
	movs r0, #17	@ 000447ce 1120
.org 0x447d0
	negs r0, r0	@ 000447d0 4042
.org 0x447d2
	ands r0, r2	@ 000447d2 1040
.org 0x447d4
	orrs r0, r1	@ 000447d4 0843
.org 0x447d6
	strb r0, [r3, #0]	@ 000447d6 1870
.org 0x447d8
	ldr r0, [r7, #84]	@ 000447d8 786d
.org 0x447da
	ldr r1, [r7, #88]	@ 000447da b96d
.org 0x447dc
	str r0, [r5, #84]	@ 000447dc 6865
.org 0x447de
	str r1, [r5, #88]	@ 000447de a965
.org 0x447e0
	ldrb r2, [r5, #14]	@ 000447e0 aa7b
.org 0x447e2
	cmp r2, #0	@ 000447e2 002a
.org 0x447e4
	bne.n 0x447f8	@ 000447e4 08d1
.org 0x447e6
	adds r0, r5, #0	@ 000447e6 281c
.org 0x447e8
	adds r0, #140	@ 000447e8 8c30
.org 0x447ea
	ldr r0, [r0, #0]	@ 000447ea 0068
.org 0x447ec
	movs r1, #4	@ 000447ec 0421
.org 0x447ee
	ands r0, r1	@ 000447ee 0840
.org 0x447f0
	cmp r0, #0	@ 000447f0 0028
.org 0x447f2
	beq.n 0x447f8	@ 000447f2 01d0
.org 0x447f4
	adds r0, r2, #1	@ 000447f4 501c
.org 0x447f6
	strb r0, [r5, #14]	@ 000447f6 a873
.org 0x447f8
	ldrb r4, [r5, #13]	@ 000447f8 6c7b
.org 0x447fa
	cmp r4, #0	@ 000447fa 002c
.org 0x447fc
	beq.n 0x44800	@ 000447fc 00d0
.org 0x447fe
	b.n 0x449d4	@ 000447fe e9e0
.org 0x44800
	ldr r0, [pc, #36]	@ 00044800 0948
.org 0x44802
	adds r2, r7, r0	@ 00044802 3a18
.org 0x44804
	movs r0, #1	@ 00044804 0120
.org 0x44806
	strb r0, [r2, #0]	@ 00044806 1070
.org 0x44808
	ldrb r0, [r7, #30]	@ 00044808 b87f
.org 0x4480a
	lsls r0, r0, #8	@ 0004480a 0002
.org 0x4480c
	adds r1, r7, #0	@ 0004480c 391c
.org 0x4480e
	adds r1, #112	@ 0004480e 7031
.org 0x44810
	ldrb r3, [r1, #0]	@ 00044810 0b78
.org 0x44812
	orrs r3, r0	@ 00044812 0343
.org 0x44814
	ldr r0, [pc, #20]	@ 00044814 0548
.org 0x44816
	mov sl, r2	@ 00044816 9246
.org 0x44818
	mov r9, r1	@ 00044818 8946
.org 0x4481a
	cmp r3, r0	@ 0004481a 8342
.org 0x4481c
	bne.n 0x44830	@ 0004481c 08d1
.org 0x4481e
	adds r0, r5, #0	@ 0004481e 281c
.org 0x44820
	adds r0, #190	@ 00044820 be30
.org 0x44822
	ldrh r6, [r0, #0]	@ 00044822 0688
.org 0x44824
	b.n 0x44878	@ 00044824 28e0
.org 0x44826
	.byte 0x00	@ 00044826 data
.org 0x44827
	.byte 0x00	@ 00044827 data
.org 0x44828
	.byte 0x55,0x01,0x00,0x00	@ 00044828 data
.org 0x4482c
	.byte 0x01,0x14,0x00,0x00	@ 0004482c data
.org 0x44830
	ldr r0, [pc, #12]	@ 00044830 0348
.org 0x44832
	cmp r3, r0	@ 00044832 8342
.org 0x44834
	bne.n 0x44844	@ 00044834 06d1
.org 0x44836
	adds r0, r5, #0	@ 00044836 281c
.org 0x44838
	adds r0, #190	@ 00044838 be30
.org 0x4483a
	ldrh r0, [r0, #0]	@ 0004483a 0088
.org 0x4483c
	adds r0, #3	@ 0004483c 0330
.org 0x4483e
	b.n 0x44874	@ 0004483e 19e0
.org 0x44840
	.byte 0x03,0x19,0x00,0x00	@ 00044840 data
.org 0x44844
	ldr r0, [pc, #32]	@ 00044844 0848
.org 0x44846
	cmp r3, r0	@ 00044846 8342
.org 0x44848
	beq.n 0x4486c	@ 00044848 10d0
.org 0x4484a
	ldrb r1, [r5, #10]	@ 0004484a a97a
.org 0x4484c
	movs r0, #254	@ 0004484c fe20
.org 0x4484e
	ands r0, r1	@ 0004484e 0840
.org 0x44850
	movs r1, #253	@ 00044850 fd21
.org 0x44852
	ands r0, r1	@ 00044852 0840
.org 0x44854
	strb r0, [r5, #10]	@ 00044854 a872
.org 0x44856
	adds r0, r5, #0	@ 00044856 281c
.org 0x44858
	adds r0, #140	@ 00044858 8c30
.org 0x4485a
	str r4, [r0, #0]	@ 0004485a 0460
.org 0x4485c
	adds r0, #4	@ 0004485c 0430
.org 0x4485e
	str r4, [r0, #0]	@ 0004485e 0460
.org 0x44860
	adds r0, #4	@ 00044860 0430
.org 0x44862
	strb r4, [r0, #0]	@ 00044862 0470
.org 0x44864
	b.n 0x44dbe	@ 00044864 abe2
.org 0x44866
	.byte 0x00	@ 00044866 data
.org 0x44867
	.byte 0x00	@ 00044867 data
.org 0x44868
	.byte 0x03,0x1c,0x00,0x00	@ 00044868 data
.org 0x4486c
	adds r0, r5, #0	@ 0004486c 281c
.org 0x4486e
	adds r0, #190	@ 0004486e be30
.org 0x44870
	ldrh r0, [r0, #0]	@ 00044870 0088
.org 0x44872
	adds r0, #6	@ 00044872 0630
.org 0x44874
	lsls r0, r0, #16	@ 00044874 0004
.org 0x44876
	lsrs r6, r0, #16	@ 00044876 060c
.org 0x44878
	ldrb r0, [r5, #30]	@ 00044878 a87f
.org 0x4487a
	lsls r0, r0, #8	@ 0004487a 0002
.org 0x4487c
	adds r1, r5, #0	@ 0004487c 291c
.org 0x4487e
	adds r1, #112	@ 0004487e 7031
.org 0x44880
	ldrb r1, [r1, #0]	@ 00044880 0978
.org 0x44882
	orrs r1, r0	@ 00044882 0143
.org 0x44884
	cmp r1, r6	@ 00044884 b142
.org 0x44886
	beq.n 0x448a6	@ 00044886 0ed0
.org 0x44888
	adds r0, r5, #0	@ 00044888 281c
.org 0x4488a
	adds r0, #113	@ 0004488a 7130
.org 0x4488c
	movs r2, #0	@ 0004488c 0022
.org 0x4488e
	ldrsb r2, [r0, r2]	@ 0004488e 8256
.org 0x44890
	lsls r2, r2, #16	@ 00044890 1204
.org 0x44892
	lsrs r2, r2, #16	@ 00044892 120c
.org 0x44894
	adds r0, #1	@ 00044894 0130
.org 0x44896
	movs r3, #0	@ 00044896 0023
.org 0x44898
	ldrsb r3, [r0, r3]	@ 00044898 c356
.org 0x4489a
	lsls r3, r3, #16	@ 0004489a 1b04
.org 0x4489c
	lsrs r3, r3, #16	@ 0004489c 1b0c
.org 0x4489e
	adds r0, r5, #0	@ 0004489e 281c
.org 0x448a0
	adds r1, r6, #0	@ 000448a0 311c
.org 0x448a2
	bl 0x1cfc8	@ 000448a2 d8f791fb
.org 0x448a6
	ldrb r0, [r5, #18]	@ 000448a6 a87c
.org 0x448a8
	subs r0, #1	@ 000448a8 0138
.org 0x448aa
	movs r2, #0	@ 000448aa 0022
.org 0x448ac
	movs r1, #0	@ 000448ac 0021
.org 0x448ae
	mov r8, r1	@ 000448ae 8846
.org 0x448b0
	strb r0, [r5, #18]	@ 000448b0 a874
.org 0x448b2
	lsls r0, r0, #24	@ 000448b2 0006
.org 0x448b4
	lsrs r0, r0, #24	@ 000448b4 000e
.org 0x448b6
	cmp r0, #255	@ 000448b6 ff28
.org 0x448b8
	beq.n 0x448bc	@ 000448b8 00d0
.org 0x448ba
	b.n 0x44e48	@ 000448ba c5e2
.org 0x448bc
	adds r0, r7, #0	@ 000448bc 381c
.org 0x448be
	adds r0, #180	@ 000448be b430
.org 0x448c0
	ldrb r0, [r0, #19]	@ 000448c0 c07c
.org 0x448c2
	cmp r0, #3	@ 000448c2 0328
.org 0x448c4
	bhi.n 0x44978	@ 000448c4 58d8
.org 0x448c6
	ldrb r0, [r7, #30]	@ 000448c6 b87f
.org 0x448c8
	lsls r0, r0, #8	@ 000448c8 0002
.org 0x448ca
	mov r3, r9	@ 000448ca 4b46
.org 0x448cc
	ldrb r1, [r3, #0]	@ 000448cc 1978
.org 0x448ce
	orrs r1, r0	@ 000448ce 0143
.org 0x448d0
	ldr r0, [pc, #48]	@ 000448d0 0c48
.org 0x448d2
	cmp r1, r0	@ 000448d2 8142
.org 0x448d4
	bne.n 0x4490c	@ 000448d4 1ad1
.org 0x448d6
	ldrb r0, [r5, #10]	@ 000448d6 a87a
.org 0x448d8
	movs r1, #4	@ 000448d8 0421
.org 0x448da
	orrs r0, r1	@ 000448da 0843
.org 0x448dc
	strb r0, [r5, #10]	@ 000448dc a872
.org 0x448de
	adds r4, r5, #0	@ 000448de 2c1c
.org 0x448e0
	adds r4, #116	@ 000448e0 7434
.org 0x448e2
	ldr r1, [pc, #36]	@ 000448e2 0949
.org 0x448e4
	ldrb r0, [r5, #16]	@ 000448e4 287c
.org 0x448e6
	lsls r0, r0, #2	@ 000448e6 8000
.org 0x448e8
	adds r0, r0, r1	@ 000448e8 4018
.org 0x448ea
	ldr r0, [r0, #0]	@ 000448ea 0068
.org 0x448ec
	ldr r1, [r0, #0]	@ 000448ec 0168
.org 0x448ee
	adds r2, r5, #0	@ 000448ee 2a1c
.org 0x448f0
	adds r2, #84	@ 000448f0 5432
.org 0x448f2
	adds r0, r4, #0	@ 000448f2 201c
.org 0x448f4
	movs r3, #8	@ 000448f4 0823
.org 0x448f6
	bl 0x5760	@ 000448f6 c0f733ff
.org 0x448fa
	str r5, [r4, #44]	@ 000448fa e562
.org 0x448fc
	mov r0, r8	@ 000448fc 4046
.org 0x448fe
	str r0, [r4, #36]	@ 000448fe 6062
.org 0x44900
	b.n 0x44998	@ 00044900 4ae0
.org 0x44902
	.byte 0x00	@ 00044902 data
.org 0x44903
	.byte 0x00	@ 00044903 data
.org 0x44904
	.byte 0x03,0x1c,0x00,0x00	@ 00044904 data
.org 0x44908
	.byte 0x34,0x6b,0x85,0x08	@ 00044908 data
.org 0x4490c
	ldr r0, [pc, #48]	@ 0004490c 0c48
.org 0x4490e
	cmp r1, r0	@ 0004490e 8142
.org 0x44910
	bne.n 0x44948	@ 00044910 1ad1
.org 0x44912
	ldrb r0, [r5, #10]	@ 00044912 a87a
.org 0x44914
	movs r1, #4	@ 00044914 0421
.org 0x44916
	orrs r0, r1	@ 00044916 0843
.org 0x44918
	strb r0, [r5, #10]	@ 00044918 a872
.org 0x4491a
	adds r4, r5, #0	@ 0004491a 2c1c
.org 0x4491c
	adds r4, #116	@ 0004491c 7434
.org 0x4491e
	ldr r1, [pc, #36]	@ 0004491e 0949
.org 0x44920
	ldrb r0, [r5, #16]	@ 00044920 287c
.org 0x44922
	lsls r0, r0, #2	@ 00044922 8000
.org 0x44924
	adds r0, r0, r1	@ 00044924 4018
.org 0x44926
	ldr r0, [r0, #0]	@ 00044926 0068
.org 0x44928
	ldr r1, [r0, #0]	@ 00044928 0168
.org 0x4492a
	adds r2, r5, #0	@ 0004492a 2a1c
.org 0x4492c
	adds r2, #84	@ 0004492c 5432
.org 0x4492e
	adds r0, r4, #0	@ 0004492e 201c
.org 0x44930
	movs r3, #8	@ 00044930 0823
.org 0x44932
	bl 0x5760	@ 00044932 c0f715ff
.org 0x44936
	str r5, [r4, #44]	@ 00044936 e562
.org 0x44938
	mov r1, r8	@ 00044938 4146
.org 0x4493a
	str r1, [r4, #36]	@ 0004493a 6162
.org 0x4493c
	b.n 0x44998	@ 0004493c 2ce0
.org 0x4493e
	.byte 0x00	@ 0004493e data
.org 0x4493f
	.byte 0x00	@ 0004493f data
.org 0x44940
	.byte 0x03,0x19,0x00,0x00	@ 00044940 data
.org 0x44944
	.byte 0x20,0x6b,0x85,0x08	@ 00044944 data
.org 0x44948
	ldrb r0, [r5, #10]	@ 00044948 a87a
.org 0x4494a
	movs r1, #4	@ 0004494a 0421
.org 0x4494c
	orrs r0, r1	@ 0004494c 0843
.org 0x4494e
	strb r0, [r5, #10]	@ 0004494e a872
.org 0x44950
	adds r4, r5, #0	@ 00044950 2c1c
.org 0x44952
	adds r4, #116	@ 00044952 7434
.org 0x44954
	ldr r1, [pc, #28]	@ 00044954 0749
.org 0x44956
	ldrb r0, [r5, #16]	@ 00044956 287c
.org 0x44958
	lsls r0, r0, #2	@ 00044958 8000
.org 0x4495a
	adds r0, r0, r1	@ 0004495a 4018
.org 0x4495c
	ldr r0, [r0, #0]	@ 0004495c 0068
.org 0x4495e
	ldr r1, [r0, #0]	@ 0004495e 0168
.org 0x44960
	adds r2, r5, #0	@ 00044960 2a1c
.org 0x44962
	adds r2, #84	@ 00044962 5432
.org 0x44964
	adds r0, r4, #0	@ 00044964 201c
.org 0x44966
	movs r3, #8	@ 00044966 0823
.org 0x44968
	bl 0x5760	@ 00044968 c0f7fafe
.org 0x4496c
	str r5, [r4, #44]	@ 0004496c e562
.org 0x4496e
	mov r2, r8	@ 0004496e 4246
.org 0x44970
	str r2, [r4, #36]	@ 00044970 6262
.org 0x44972
	b.n 0x44998	@ 00044972 11e0
.org 0x44974
	.byte 0x0c,0x6b,0x85,0x08	@ 00044974 data
.org 0x44978
	ldrb r0, [r5, #10]	@ 00044978 a87a
.org 0x4497a
	movs r1, #4	@ 0004497a 0421
.org 0x4497c
	orrs r0, r1	@ 0004497c 0843
.org 0x4497e
	strb r0, [r5, #10]	@ 0004497e a872
.org 0x44980
	adds r4, r5, #0	@ 00044980 2c1c
.org 0x44982
	adds r4, #116	@ 00044982 7434
.org 0x44984
	ldr r1, [pc, #64]	@ 00044984 1049
.org 0x44986
	adds r2, r5, #0	@ 00044986 2a1c
.org 0x44988
	adds r2, #84	@ 00044988 5432
.org 0x4498a
	adds r0, r4, #0	@ 0004498a 201c
.org 0x4498c
	movs r3, #8	@ 0004498c 0823
.org 0x4498e
	bl 0x5760	@ 0004498e c0f7e7fe
.org 0x44992
	str r5, [r4, #44]	@ 00044992 e562
.org 0x44994
	mov r3, r8	@ 00044994 4346
.org 0x44996
	str r3, [r4, #36]	@ 00044996 6362
.org 0x44998
	ldr r0, [pc, #48]	@ 00044998 0c48
.org 0x4499a
	str r0, [r4, #36]	@ 0004499a 6062
.org 0x4499c
	movs r0, #2	@ 0004499c 0220
.org 0x4499e
	mov r1, sl	@ 0004499e 5146
.org 0x449a0
	strb r0, [r1, #0]	@ 000449a0 0870
.org 0x449a2
	ldr r1, [pc, #44]	@ 000449a2 0b49
.org 0x449a4
	ldrb r0, [r5, #16]	@ 000449a4 287c
.org 0x449a6
	adds r0, r0, r1	@ 000449a6 4018
.org 0x449a8
	ldrb r0, [r0, #0]	@ 000449a8 0078
.org 0x449aa
	strb r0, [r5, #18]	@ 000449aa a874
.org 0x449ac
	adds r1, r6, #1	@ 000449ac 711c
.org 0x449ae
	lsls r1, r1, #16	@ 000449ae 0904
.org 0x449b0
	lsrs r1, r1, #16	@ 000449b0 090c
.org 0x449b2
	adds r0, r5, #0	@ 000449b2 281c
.org 0x449b4
	bl 0x1cf00	@ 000449b4 d8f7a4fa
.org 0x449b8
	ldrb r0, [r5, #16]	@ 000449b8 287c
.org 0x449ba
	cmp r0, #2	@ 000449ba 0228
.org 0x449bc
	beq.n 0x449c0	@ 000449bc 00d0
.org 0x449be
	b.n 0x44cda	@ 000449be 8ce1
.org 0x449c0
	movs r0, #65	@ 000449c0 4120
.org 0x449c2
	bl 0x2b10	@ 000449c2 bef7a5f8
.org 0x449c6
	b.n 0x44cda	@ 000449c6 88e1
.org 0x449c8
	.byte 0x8c,0x69,0x85,0x08	@ 000449c8 data
.org 0x449cc
	.byte 0x91,0x4e,0x04,0x08	@ 000449cc data
.org 0x449d0
	.byte 0x45,0x5e,0x85,0x08	@ 000449d0 data
.org 0x449d4
	cmp r4, #1	@ 000449d4 012c
.org 0x449d6
	beq.n 0x449da	@ 000449d6 00d0
.org 0x449d8
	b.n 0x44ce2	@ 000449d8 83e1
.org 0x449da
	adds r2, r7, #0	@ 000449da 3a1c
.org 0x449dc
	adds r2, #180	@ 000449dc b432
.org 0x449de
	ldr r3, [pc, #80]	@ 000449de 144b
.org 0x449e0
	adds r1, r7, r3	@ 000449e0 f918
.org 0x449e2
	movs r6, #0	@ 000449e2 0026
.org 0x449e4
	movs r0, #2	@ 000449e4 0220
.org 0x449e6
	strb r0, [r1, #0]	@ 000449e6 0870
.org 0x449e8
	ldrb r0, [r2, #19]	@ 000449e8 d07c
.org 0x449ea
	mov sl, r1	@ 000449ea 8a46
.org 0x449ec
	mov r8, r2	@ 000449ec 9046
.org 0x449ee
	cmp r0, #3	@ 000449ee 0328
.org 0x449f0
	bhi.n 0x44ac0	@ 000449f0 66d8
.org 0x449f2
	ldrb r0, [r7, #30]	@ 000449f2 b87f
.org 0x449f4
	lsls r0, r0, #8	@ 000449f4 0002
.org 0x449f6
	adds r1, r7, #0	@ 000449f6 391c
.org 0x449f8
	adds r1, #112	@ 000449f8 7031
.org 0x449fa
	ldrb r2, [r1, #0]	@ 000449fa 0a78
.org 0x449fc
	orrs r2, r0	@ 000449fc 0243
.org 0x449fe
	ldr r0, [pc, #52]	@ 000449fe 0d48
.org 0x44a00
	mov r9, r1	@ 00044a00 8946
.org 0x44a02
	cmp r2, r0	@ 00044a02 8242
.org 0x44a04
	bne.n 0x44a3c	@ 00044a04 1ad1
.org 0x44a06
	adds r0, r5, #0	@ 00044a06 281c
.org 0x44a08
	adds r0, #116	@ 00044a08 7430
.org 0x44a0a
	ldr r1, [pc, #44]	@ 00044a0a 0b49
.org 0x44a0c
	ldrb r2, [r5, #16]	@ 00044a0c 2a7c
.org 0x44a0e
	lsls r2, r2, #2	@ 00044a0e 9200
.org 0x44a10
	adds r2, r2, r1	@ 00044a10 5218
.org 0x44a12
	adds r4, r5, #0	@ 00044a12 2c1c
.org 0x44a14
	adds r4, #113	@ 00044a14 7134
.org 0x44a16
	movs r1, #0	@ 00044a16 0021
.org 0x44a18
	ldrsb r1, [r4, r1]	@ 00044a18 6156
.org 0x44a1a
	ldr r2, [r2, #0]	@ 00044a1a 1268
.org 0x44a1c
	lsls r1, r1, #2	@ 00044a1c 8900
.org 0x44a1e
	adds r1, r1, r2	@ 00044a1e 8918
.org 0x44a20
	ldr r1, [r1, #0]	@ 00044a20 0968
.org 0x44a22
	bl 0x5784	@ 00044a22 c0f7affe
.org 0x44a26
	adds r0, r5, #0	@ 00044a26 281c
.org 0x44a28
	adds r0, #190	@ 00044a28 be30
.org 0x44a2a
	ldrh r0, [r0, #0]	@ 00044a2a 0088
.org 0x44a2c
	adds r0, #1	@ 00044a2c 0130
.org 0x44a2e
	b.n 0x44b7e	@ 00044a2e a6e0
.org 0x44a30
	.byte 0x55,0x01,0x00,0x00	@ 00044a30 data
.org 0x44a34
	.byte 0x02,0x14,0x00,0x00	@ 00044a34 data
.org 0x44a38
	.byte 0x0c,0x6b,0x85,0x08	@ 00044a38 data
.org 0x44a3c
	ldr r0, [pc, #44]	@ 00044a3c 0b48
.org 0x44a3e
	cmp r2, r0	@ 00044a3e 8242
.org 0x44a40
	bne.n 0x44a74	@ 00044a40 18d1
.org 0x44a42
	adds r0, r5, #0	@ 00044a42 281c
.org 0x44a44
	adds r0, #116	@ 00044a44 7430
.org 0x44a46
	ldr r1, [pc, #40]	@ 00044a46 0a49
.org 0x44a48
	ldrb r2, [r5, #16]	@ 00044a48 2a7c
.org 0x44a4a
	lsls r2, r2, #2	@ 00044a4a 9200
.org 0x44a4c
	adds r2, r2, r1	@ 00044a4c 5218
.org 0x44a4e
	adds r4, r5, #0	@ 00044a4e 2c1c
.org 0x44a50
	adds r4, #113	@ 00044a50 7134
.org 0x44a52
	movs r1, #0	@ 00044a52 0021
.org 0x44a54
	ldrsb r1, [r4, r1]	@ 00044a54 6156
.org 0x44a56
	ldr r2, [r2, #0]	@ 00044a56 1268
.org 0x44a58
	lsls r1, r1, #2	@ 00044a58 8900
.org 0x44a5a
	adds r1, r1, r2	@ 00044a5a 8918
.org 0x44a5c
	ldr r1, [r1, #0]	@ 00044a5c 0968
.org 0x44a5e
	bl 0x5784	@ 00044a5e c0f791fe
.org 0x44a62
	adds r0, r5, #0	@ 00044a62 281c
.org 0x44a64
	adds r0, #190	@ 00044a64 be30
.org 0x44a66
	ldrh r0, [r0, #0]	@ 00044a66 0088
.org 0x44a68
	adds r0, #4	@ 00044a68 0430
.org 0x44a6a
	b.n 0x44b7e	@ 00044a6a 88e0
.org 0x44a6c
	.byte 0x04,0x19,0x00,0x00	@ 00044a6c data
.org 0x44a70
	.byte 0x20,0x6b,0x85,0x08	@ 00044a70 data
.org 0x44a74
	ldr r0, [pc, #36]	@ 00044a74 0948
.org 0x44a76
	cmp r2, r0	@ 00044a76 8242
.org 0x44a78
	bne.n 0x44aa4	@ 00044a78 14d1
.org 0x44a7a
	adds r0, r5, #0	@ 00044a7a 281c
.org 0x44a7c
	adds r0, #116	@ 00044a7c 7430
.org 0x44a7e
	ldr r1, [pc, #32]	@ 00044a7e 0849
.org 0x44a80
	ldrb r2, [r5, #16]	@ 00044a80 2a7c
.org 0x44a82
	lsls r2, r2, #2	@ 00044a82 9200
.org 0x44a84
	adds r2, r2, r1	@ 00044a84 5218
.org 0x44a86
	adds r4, r5, #0	@ 00044a86 2c1c
.org 0x44a88
	adds r4, #113	@ 00044a88 7134
.org 0x44a8a
	movs r1, #0	@ 00044a8a 0021
.org 0x44a8c
	ldrsb r1, [r4, r1]	@ 00044a8c 6156
.org 0x44a8e
	ldr r2, [r2, #0]	@ 00044a8e 1268
.org 0x44a90
	lsls r1, r1, #2	@ 00044a90 8900
.org 0x44a92
	adds r1, r1, r2	@ 00044a92 8918
.org 0x44a94
	ldr r1, [r1, #0]	@ 00044a94 0968
.org 0x44a96
	bl 0x5784	@ 00044a96 c0f775fe
.org 0x44a9a
	b.n 0x44b76	@ 00044a9a 6ce0
.org 0x44a9c
	.byte 0x04,0x1c,0x00,0x00	@ 00044a9c data
.org 0x44aa0
	.byte 0x34,0x6b,0x85,0x08	@ 00044aa0 data
.org 0x44aa4
	ldrb r1, [r5, #10]	@ 00044aa4 a97a
.org 0x44aa6
	movs r0, #254	@ 00044aa6 fe20
.org 0x44aa8
	ands r0, r1	@ 00044aa8 0840
.org 0x44aaa
	movs r1, #253	@ 00044aaa fd21
.org 0x44aac
	ands r0, r1	@ 00044aac 0840
.org 0x44aae
	strb r0, [r5, #10]	@ 00044aae a872
.org 0x44ab0
	adds r0, r5, #0	@ 00044ab0 281c
.org 0x44ab2
	adds r0, #140	@ 00044ab2 8c30
.org 0x44ab4
	str r6, [r0, #0]	@ 00044ab4 0660
.org 0x44ab6
	adds r0, #4	@ 00044ab6 0430
.org 0x44ab8
	str r6, [r0, #0]	@ 00044ab8 0660
.org 0x44aba
	adds r0, #4	@ 00044aba 0430
.org 0x44abc
	strb r6, [r0, #0]	@ 00044abc 0670
.org 0x44abe
	b.n 0x44dbe	@ 00044abe 7ee1
.org 0x44ac0
	movs r3, #0	@ 00044ac0 0023
.org 0x44ac2
	adds r0, r5, #0	@ 00044ac2 281c
.org 0x44ac4
	adds r0, #113	@ 00044ac4 7130
.org 0x44ac6
	movs r1, #0	@ 00044ac6 0021
.org 0x44ac8
	ldrsb r1, [r0, r1]	@ 00044ac8 4156
.org 0x44aca
	adds r4, r0, #0	@ 00044aca 041c
.org 0x44acc
	cmp r1, #0	@ 00044acc 0029
.org 0x44ace
	ble.n 0x44ad2	@ 00044ace 00dd
.org 0x44ad0
	movs r3, #1	@ 00044ad0 0123
.org 0x44ad2
	ldrb r0, [r7, #30]	@ 00044ad2 b87f
.org 0x44ad4
	lsls r0, r0, #8	@ 00044ad4 0002
.org 0x44ad6
	adds r1, r7, #0	@ 00044ad6 391c
.org 0x44ad8
	adds r1, #112	@ 00044ad8 7031
.org 0x44ada
	ldrb r2, [r1, #0]	@ 00044ada 0a78
.org 0x44adc
	orrs r2, r0	@ 00044adc 0243
.org 0x44ade
	ldr r0, [pc, #48]	@ 00044ade 0c48
.org 0x44ae0
	mov r9, r1	@ 00044ae0 8946
.org 0x44ae2
	cmp r2, r0	@ 00044ae2 8242
.org 0x44ae4
	bne.n 0x44b18	@ 00044ae4 18d1
.org 0x44ae6
	cmp r3, #0	@ 00044ae6 002b
.org 0x44ae8
	beq.n 0x44b06	@ 00044ae8 0dd0
.org 0x44aea
	adds r0, r5, #0	@ 00044aea 281c
.org 0x44aec
	adds r0, #116	@ 00044aec 7430
.org 0x44aee
	ldr r2, [pc, #36]	@ 00044aee 094a
.org 0x44af0
	ldrb r1, [r5, #16]	@ 00044af0 297c
.org 0x44af2
	lsls r1, r1, #2	@ 00044af2 8900
.org 0x44af4
	adds r1, r1, r2	@ 00044af4 8918
.org 0x44af6
	movs r2, #0	@ 00044af6 0022
.org 0x44af8
	ldrsb r2, [r4, r2]	@ 00044af8 a256
.org 0x44afa
	ldr r1, [r1, #0]	@ 00044afa 0968
.org 0x44afc
	lsls r2, r2, #2	@ 00044afc 9200
.org 0x44afe
	adds r2, r2, r1	@ 00044afe 5218
.org 0x44b00
	ldr r1, [r2, #0]	@ 00044b00 1168
.org 0x44b02
	bl 0x5784	@ 00044b02 c0f73ffe
.org 0x44b06
	adds r0, r5, #0	@ 00044b06 281c
.org 0x44b08
	adds r0, #190	@ 00044b08 be30
.org 0x44b0a
	ldrh r0, [r0, #0]	@ 00044b0a 0088
.org 0x44b0c
	adds r0, #1	@ 00044b0c 0130
.org 0x44b0e
	b.n 0x44b7e	@ 00044b0e 36e0
.org 0x44b10
	.byte 0x02,0x14,0x00,0x00	@ 00044b10 data
.org 0x44b14
	.byte 0x0c,0x6b,0x85,0x08	@ 00044b14 data
.org 0x44b18
	ldr r0, [pc, #44]	@ 00044b18 0b48
.org 0x44b1a
	cmp r2, r0	@ 00044b1a 8242
.org 0x44b1c
	bne.n 0x44b50	@ 00044b1c 18d1
.org 0x44b1e
	cmp r3, #0	@ 00044b1e 002b
.org 0x44b20
	beq.n 0x44b3e	@ 00044b20 0dd0
.org 0x44b22
	adds r0, r5, #0	@ 00044b22 281c
.org 0x44b24
	adds r0, #116	@ 00044b24 7430
.org 0x44b26
	ldr r2, [pc, #36]	@ 00044b26 094a
.org 0x44b28
	ldrb r1, [r5, #16]	@ 00044b28 297c
.org 0x44b2a
	lsls r1, r1, #2	@ 00044b2a 8900
.org 0x44b2c
	adds r1, r1, r2	@ 00044b2c 8918
.org 0x44b2e
	movs r2, #0	@ 00044b2e 0022
.org 0x44b30
	ldrsb r2, [r4, r2]	@ 00044b30 a256
.org 0x44b32
	ldr r1, [r1, #0]	@ 00044b32 0968
.org 0x44b34
	lsls r2, r2, #2	@ 00044b34 9200
.org 0x44b36
	adds r2, r2, r1	@ 00044b36 5218
.org 0x44b38
	ldr r1, [r2, #0]	@ 00044b38 1168
.org 0x44b3a
	bl 0x5784	@ 00044b3a c0f723fe
.org 0x44b3e
	adds r0, r5, #0	@ 00044b3e 281c
.org 0x44b40
	adds r0, #190	@ 00044b40 be30
.org 0x44b42
	ldrh r0, [r0, #0]	@ 00044b42 0088
.org 0x44b44
	adds r0, #4	@ 00044b44 0430
.org 0x44b46
	b.n 0x44b7e	@ 00044b46 1ae0
.org 0x44b48
	.byte 0x04,0x19,0x00,0x00	@ 00044b48 data
.org 0x44b4c
	.byte 0x20,0x6b,0x85,0x08	@ 00044b4c data
.org 0x44b50
	ldr r0, [pc, #48]	@ 00044b50 0c48
.org 0x44b52
	cmp r2, r0	@ 00044b52 8242
.org 0x44b54
	bne.n 0x44b8c	@ 00044b54 1ad1
.org 0x44b56
	cmp r3, #0	@ 00044b56 002b
.org 0x44b58
	beq.n 0x44b76	@ 00044b58 0dd0
.org 0x44b5a
	adds r0, r5, #0	@ 00044b5a 281c
.org 0x44b5c
	adds r0, #116	@ 00044b5c 7430
.org 0x44b5e
	ldr r2, [pc, #40]	@ 00044b5e 0a4a
.org 0x44b60
	ldrb r1, [r5, #16]	@ 00044b60 297c
.org 0x44b62
	lsls r1, r1, #2	@ 00044b62 8900
.org 0x44b64
	adds r1, r1, r2	@ 00044b64 8918
.org 0x44b66
	movs r2, #0	@ 00044b66 0022
.org 0x44b68
	ldrsb r2, [r4, r2]	@ 00044b68 a256
.org 0x44b6a
	ldr r1, [r1, #0]	@ 00044b6a 0968
.org 0x44b6c
	lsls r2, r2, #2	@ 00044b6c 9200
.org 0x44b6e
	adds r2, r2, r1	@ 00044b6e 5218
.org 0x44b70
	ldr r1, [r2, #0]	@ 00044b70 1168
.org 0x44b72
	bl 0x5784	@ 00044b72 c0f707fe
.org 0x44b76
	adds r0, r5, #0	@ 00044b76 281c
.org 0x44b78
	adds r0, #190	@ 00044b78 be30
.org 0x44b7a
	ldrh r0, [r0, #0]	@ 00044b7a 0088
.org 0x44b7c
	adds r0, #7	@ 00044b7c 0730
.org 0x44b7e
	lsls r0, r0, #16	@ 00044b7e 0004
.org 0x44b80
	lsrs r6, r0, #16	@ 00044b80 060c
.org 0x44b82
	b.n 0x44ba8	@ 00044b82 11e0
.org 0x44b84
	.byte 0x04,0x1c,0x00,0x00	@ 00044b84 data
.org 0x44b88
	.byte 0x34,0x6b,0x85,0x08	@ 00044b88 data
.org 0x44b8c
	ldrb r1, [r5, #10]	@ 00044b8c a97a
.org 0x44b8e
	movs r0, #254	@ 00044b8e fe20
.org 0x44b90
	ands r0, r1	@ 00044b90 0840
.org 0x44b92
	movs r1, #253	@ 00044b92 fd21
.org 0x44b94
	ands r0, r1	@ 00044b94 0840
.org 0x44b96
	strb r0, [r5, #10]	@ 00044b96 a872
.org 0x44b98
	adds r0, r5, #0	@ 00044b98 281c
.org 0x44b9a
	adds r0, #140	@ 00044b9a 8c30
.org 0x44b9c
	str r6, [r0, #0]	@ 00044b9c 0660
.org 0x44b9e
	adds r0, #4	@ 00044b9e 0430
.org 0x44ba0
	str r6, [r0, #0]	@ 00044ba0 0660
.org 0x44ba2
	adds r0, #4	@ 00044ba2 0430
.org 0x44ba4
	strb r6, [r0, #0]	@ 00044ba4 0670
.org 0x44ba6
	b.n 0x44dbe	@ 00044ba6 0ae1
.org 0x44ba8
	ldrb r0, [r5, #30]	@ 00044ba8 a87f
.org 0x44baa
	lsls r0, r0, #8	@ 00044baa 0002
.org 0x44bac
	adds r1, r5, #0	@ 00044bac 291c
.org 0x44bae
	adds r1, #112	@ 00044bae 7031
.org 0x44bb0
	ldrb r1, [r1, #0]	@ 00044bb0 0978
.org 0x44bb2
	orrs r1, r0	@ 00044bb2 0143
.org 0x44bb4
	cmp r1, r6	@ 00044bb4 b142
.org 0x44bb6
	beq.n 0x44bd4	@ 00044bb6 0dd0
.org 0x44bb8
	movs r2, #0	@ 00044bb8 0022
.org 0x44bba
	ldrsb r2, [r4, r2]	@ 00044bba a256
.org 0x44bbc
	lsls r2, r2, #16	@ 00044bbc 1204
.org 0x44bbe
	lsrs r2, r2, #16	@ 00044bbe 120c
.org 0x44bc0
	adds r0, r5, #0	@ 00044bc0 281c
.org 0x44bc2
	adds r0, #114	@ 00044bc2 7230
.org 0x44bc4
	movs r3, #0	@ 00044bc4 0023
.org 0x44bc6
	ldrsb r3, [r0, r3]	@ 00044bc6 c356
.org 0x44bc8
	lsls r3, r3, #16	@ 00044bc8 1b04
.org 0x44bca
	lsrs r3, r3, #16	@ 00044bca 1b0c
.org 0x44bcc
	adds r0, r5, #0	@ 00044bcc 281c
.org 0x44bce
	adds r1, r6, #0	@ 00044bce 311c
.org 0x44bd0
	bl 0x1cfc8	@ 00044bd0 d8f7faf9
.org 0x44bd4
	mov r1, r8	@ 00044bd4 4146
.org 0x44bd6
	ldrb r0, [r1, #19]	@ 00044bd6 c87c
.org 0x44bd8
	cmp r0, #3	@ 00044bd8 0328
.org 0x44bda
	bhi.n 0x44c8a	@ 00044bda 56d8
.org 0x44bdc
	adds r0, r5, #0	@ 00044bdc 281c
.org 0x44bde
	adds r0, #115	@ 00044bde 7330
.org 0x44be0
	ldrb r0, [r0, #0]	@ 00044be0 0078
.org 0x44be2
	cmp r0, #3	@ 00044be2 0328
.org 0x44be4
	beq.n 0x44be8	@ 00044be4 00d0
.org 0x44be6
	b.n 0x44e48	@ 00044be6 2fe1
.org 0x44be8
	ldrb r0, [r5, #18]	@ 00044be8 a87c
.org 0x44bea
	subs r0, #1	@ 00044bea 0138
.org 0x44bec
	strb r0, [r5, #18]	@ 00044bec a874
.org 0x44bee
	lsls r0, r0, #24	@ 00044bee 0006
.org 0x44bf0
	lsrs r0, r0, #24	@ 00044bf0 000e
.org 0x44bf2
	cmp r0, #255	@ 00044bf2 ff28
.org 0x44bf4
	beq.n 0x44bf8	@ 00044bf4 00d0
.org 0x44bf6
	b.n 0x44e48	@ 00044bf6 27e1
.org 0x44bf8
	ldrb r0, [r5, #14]	@ 00044bf8 a87b
.org 0x44bfa
	cmp r0, #0	@ 00044bfa 0028
.org 0x44bfc
	beq.n 0x44c0e	@ 00044bfc 07d0
.org 0x44bfe
	adds r0, r7, #0	@ 00044bfe 381c
.org 0x44c00
	bl 0x3aacc	@ 00044c00 f5f764ff
.org 0x44c04
	lsls r0, r0, #24	@ 00044c04 0006
.org 0x44c06
	cmp r0, #0	@ 00044c06 0028
.org 0x44c08
	beq.n 0x44c0e	@ 00044c08 01d0
.org 0x44c0a
	movs r0, #2	@ 00044c0a 0220
.org 0x44c0c
	strb r0, [r5, #14]	@ 00044c0c a873
.org 0x44c0e
	adds r0, r5, #0	@ 00044c0e 281c
.org 0x44c10
	adds r0, #140	@ 00044c10 8c30
.org 0x44c12
	movs r1, #0	@ 00044c12 0021
.org 0x44c14
	str r1, [r0, #0]	@ 00044c14 0160
.org 0x44c16
	adds r0, #4	@ 00044c16 0430
.org 0x44c18
	str r1, [r0, #0]	@ 00044c18 0160
.org 0x44c1a
	adds r0, #4	@ 00044c1a 0430
.org 0x44c1c
	strb r1, [r0, #0]	@ 00044c1c 0170
.org 0x44c1e
	ldrb r1, [r5, #10]	@ 00044c1e a97a
.org 0x44c20
	movs r0, #251	@ 00044c20 fb20
.org 0x44c22
	ands r0, r1	@ 00044c22 0840
.org 0x44c24
	strb r0, [r5, #10]	@ 00044c24 a872
.org 0x44c26
	movs r0, #3	@ 00044c26 0320
.org 0x44c28
	mov r2, sl	@ 00044c28 5246
.org 0x44c2a
	strb r0, [r2, #0]	@ 00044c2a 1070
.org 0x44c2c
	ldrb r0, [r5, #14]	@ 00044c2c a87b
.org 0x44c2e
	cmp r0, #2	@ 00044c2e 0228
.org 0x44c30
	bne.n 0x44c7c	@ 00044c30 24d1
.org 0x44c32
	ldrb r0, [r5, #16]	@ 00044c32 287c
.org 0x44c34
	cmp r0, #3	@ 00044c34 0328
.org 0x44c36
	bne.n 0x44c7c	@ 00044c36 21d1
.org 0x44c38
	ldrb r0, [r7, #30]	@ 00044c38 b87f
.org 0x44c3a
	lsls r0, r0, #8	@ 00044c3a 0002
.org 0x44c3c
	mov r3, r9	@ 00044c3c 4b46
.org 0x44c3e
	ldrb r1, [r3, #0]	@ 00044c3e 1978
.org 0x44c40
	orrs r1, r0	@ 00044c40 0143
.org 0x44c42
	ldr r0, [pc, #8]	@ 00044c42 0248
.org 0x44c44
	cmp r1, r0	@ 00044c44 8142
.org 0x44c46
	bne.n 0x44c54	@ 00044c46 05d1
.org 0x44c48
	ldr r1, [pc, #4]	@ 00044c48 0149
.org 0x44c4a
	b.n 0x44cd4	@ 00044c4a 43e0
.org 0x44c4c
	.byte 0x02,0x14,0x00,0x00	@ 00044c4c data
.org 0x44c50
	.byte 0x51,0x82,0x00,0x00	@ 00044c50 data
.org 0x44c54
	ldr r0, [pc, #8]	@ 00044c54 0248
.org 0x44c56
	cmp r1, r0	@ 00044c56 8142
.org 0x44c58
	bne.n 0x44c68	@ 00044c58 06d1
.org 0x44c5a
	ldr r1, [pc, #8]	@ 00044c5a 0249
.org 0x44c5c
	b.n 0x44cd4	@ 00044c5c 3ae0
.org 0x44c5e
	.byte 0x00	@ 00044c5e data
.org 0x44c5f
	.byte 0x00	@ 00044c5f data
.org 0x44c60
	.byte 0x04,0x19,0x00,0x00	@ 00044c60 data
.org 0x44c64
	.byte 0x52,0x82,0x00,0x00	@ 00044c64 data
.org 0x44c68
	ldr r0, [pc, #8]	@ 00044c68 0248
.org 0x44c6a
	cmp r1, r0	@ 00044c6a 8142
.org 0x44c6c
	bne.n 0x44cce	@ 00044c6c 2fd1
.org 0x44c6e
	ldr r1, [pc, #8]	@ 00044c6e 0249
.org 0x44c70
	b.n 0x44cd4	@ 00044c70 30e0
.org 0x44c72
	.byte 0x00	@ 00044c72 data
.org 0x44c73
	.byte 0x00	@ 00044c73 data
.org 0x44c74
	.byte 0x04,0x1c,0x00,0x00	@ 00044c74 data
.org 0x44c78
	.byte 0x53,0x82,0x00,0x00	@ 00044c78 data
.org 0x44c7c
	adds r1, r6, #1	@ 00044c7c 711c
.org 0x44c7e
	lsls r1, r1, #16	@ 00044c7e 0904
.org 0x44c80
	lsrs r1, r1, #16	@ 00044c80 090c
.org 0x44c82
	adds r0, r5, #0	@ 00044c82 281c
.org 0x44c84
	bl 0x1cf00	@ 00044c84 d8f73cf9
.org 0x44c88
	b.n 0x44cda	@ 00044c88 27e0
.org 0x44c8a
	movs r1, #179	@ 00044c8a b321
.org 0x44c8c
	lsls r1, r1, #1	@ 00044c8c 4900
.org 0x44c8e
	adds r0, r7, r1	@ 00044c8e 7818
.org 0x44c90
	ldrb r1, [r0, #0]	@ 00044c90 0178
.org 0x44c92
	cmp r1, #0	@ 00044c92 0029
.org 0x44c94
	beq.n 0x44c98	@ 00044c94 00d0
.org 0x44c96
	b.n 0x44e48	@ 00044c96 d7e0
.org 0x44c98
	adds r0, r5, #0	@ 00044c98 281c
.org 0x44c9a
	adds r0, #115	@ 00044c9a 7330
.org 0x44c9c
	ldrb r2, [r0, #0]	@ 00044c9c 0278
.org 0x44c9e
	cmp r2, #3	@ 00044c9e 032a
.org 0x44ca0
	beq.n 0x44ca4	@ 00044ca0 00d0
.org 0x44ca2
	b.n 0x44e48	@ 00044ca2 d1e0
.org 0x44ca4
	ldrb r0, [r5, #18]	@ 00044ca4 a87c
.org 0x44ca6
	subs r0, #1	@ 00044ca6 0138
.org 0x44ca8
	strb r0, [r5, #18]	@ 00044ca8 a874
.org 0x44caa
	lsls r0, r0, #24	@ 00044caa 0006
.org 0x44cac
	lsrs r0, r0, #24	@ 00044cac 000e
.org 0x44cae
	cmp r0, #255	@ 00044cae ff28
.org 0x44cb0
	beq.n 0x44cb4	@ 00044cb0 00d0
.org 0x44cb2
	b.n 0x44e48	@ 00044cb2 c9e0
.org 0x44cb4
	adds r0, r5, #0	@ 00044cb4 281c
.org 0x44cb6
	adds r0, #140	@ 00044cb6 8c30
.org 0x44cb8
	str r1, [r0, #0]	@ 00044cb8 0160
.org 0x44cba
	adds r0, #4	@ 00044cba 0430
.org 0x44cbc
	str r1, [r0, #0]	@ 00044cbc 0160
.org 0x44cbe
	adds r0, #4	@ 00044cbe 0430
.org 0x44cc0
	strb r1, [r0, #0]	@ 00044cc0 0170
.org 0x44cc2
	ldrb r1, [r5, #10]	@ 00044cc2 a97a
.org 0x44cc4
	movs r0, #251	@ 00044cc4 fb20
.org 0x44cc6
	ands r0, r1	@ 00044cc6 0840
.org 0x44cc8
	strb r0, [r5, #10]	@ 00044cc8 a872
.org 0x44cca
	mov r3, sl	@ 00044cca 5346
.org 0x44ccc
	strb r2, [r3, #0]	@ 00044ccc 1a70
.org 0x44cce
	adds r1, r6, #1	@ 00044cce 711c
.org 0x44cd0
	lsls r1, r1, #16	@ 00044cd0 0904
.org 0x44cd2
	lsrs r1, r1, #16	@ 00044cd2 090c
.org 0x44cd4
	adds r0, r5, #0	@ 00044cd4 281c
.org 0x44cd6
	bl 0x1cf00	@ 00044cd6 d8f713f9
.org 0x44cda
	ldrb r0, [r5, #13]	@ 00044cda 687b
.org 0x44cdc
	adds r0, #1	@ 00044cdc 0130
.org 0x44cde
	strb r0, [r5, #13]	@ 00044cde 6873
.org 0x44ce0
	b.n 0x44e48	@ 00044ce0 b2e0
.org 0x44ce2
	ldrb r0, [r5, #14]	@ 00044ce2 a87b
.org 0x44ce4
	cmp r0, #2	@ 00044ce4 0228
.org 0x44ce6
	bne.n 0x44d68	@ 00044ce6 3fd1
.org 0x44ce8
	ldrb r3, [r5, #16]	@ 00044ce8 2b7c
.org 0x44cea
	cmp r3, #3	@ 00044cea 032b
.org 0x44cec
	bne.n 0x44d68	@ 00044cec 3cd1
.org 0x44cee
	ldrb r0, [r7, #30]	@ 00044cee b87f
.org 0x44cf0
	lsls r0, r0, #8	@ 00044cf0 0002
.org 0x44cf2
	adds r1, r7, #0	@ 00044cf2 391c
.org 0x44cf4
	adds r1, #112	@ 00044cf4 7031
.org 0x44cf6
	ldrb r1, [r1, #0]	@ 00044cf6 0978
.org 0x44cf8
	orrs r1, r0	@ 00044cf8 0143
.org 0x44cfa
	ldr r0, [pc, #8]	@ 00044cfa 0248
.org 0x44cfc
	cmp r1, r0	@ 00044cfc 8142
.org 0x44cfe
	bne.n 0x44d0c	@ 00044cfe 05d1
.org 0x44d00
	ldr r6, [pc, #4]	@ 00044d00 014e
.org 0x44d02
	b.n 0x44df0	@ 00044d02 75e0
.org 0x44d04
	.byte 0x03,0x14,0x00,0x00	@ 00044d04 data
.org 0x44d08
	.byte 0x51,0x82,0x00,0x00	@ 00044d08 data
.org 0x44d0c
	ldr r0, [pc, #8]	@ 00044d0c 0248
.org 0x44d0e
	cmp r1, r0	@ 00044d0e 8142
.org 0x44d10
	bne.n 0x44d20	@ 00044d10 06d1
.org 0x44d12
	ldr r6, [pc, #8]	@ 00044d12 024e
.org 0x44d14
	b.n 0x44df0	@ 00044d14 6ce0
.org 0x44d16
	.byte 0x00	@ 00044d16 data
.org 0x44d17
	.byte 0x00	@ 00044d17 data
.org 0x44d18
	.byte 0x05,0x19,0x00,0x00	@ 00044d18 data
.org 0x44d1c
	.byte 0x52,0x82,0x00,0x00	@ 00044d1c data
.org 0x44d20
	ldr r0, [pc, #8]	@ 00044d20 0248
.org 0x44d22
	cmp r1, r0	@ 00044d22 8142
.org 0x44d24
	bne.n 0x44d34	@ 00044d24 06d1
.org 0x44d26
	ldr r6, [pc, #8]	@ 00044d26 024e
.org 0x44d28
	b.n 0x44df0	@ 00044d28 62e0
.org 0x44d2a
	.byte 0x00	@ 00044d2a data
.org 0x44d2b
	.byte 0x00	@ 00044d2b data
.org 0x44d2c
	.byte 0x05,0x1c,0x00,0x00	@ 00044d2c data
.org 0x44d30
	.byte 0x53,0x82,0x00,0x00	@ 00044d30 data
.org 0x44d34
	ldrb r1, [r5, #10]	@ 00044d34 a97a
.org 0x44d36
	movs r0, #254	@ 00044d36 fe20
.org 0x44d38
	ands r0, r1	@ 00044d38 0840
.org 0x44d3a
	movs r2, #0	@ 00044d3a 0022
.org 0x44d3c
	movs r1, #253	@ 00044d3c fd21
.org 0x44d3e
	ands r0, r1	@ 00044d3e 0840
.org 0x44d40
	strb r0, [r5, #10]	@ 00044d40 a872
.org 0x44d42
	adds r0, r5, #0	@ 00044d42 281c
.org 0x44d44
	adds r0, #140	@ 00044d44 8c30
.org 0x44d46
	str r2, [r0, #0]	@ 00044d46 0260
.org 0x44d48
	adds r0, #4	@ 00044d48 0430
.org 0x44d4a
	str r2, [r0, #0]	@ 00044d4a 0260
.org 0x44d4c
	adds r0, #4	@ 00044d4c 0430
.org 0x44d4e
	strb r2, [r0, #0]	@ 00044d4e 0270
.org 0x44d50
	ldrb r1, [r5, #10]	@ 00044d50 a97a
.org 0x44d52
	movs r0, #251	@ 00044d52 fb20
.org 0x44d54
	ands r0, r1	@ 00044d54 0840
.org 0x44d56
	strb r0, [r5, #10]	@ 00044d56 a872
.org 0x44d58
	ldr r1, [pc, #8]	@ 00044d58 0249
.org 0x44d5a
	ldrb r0, [r5, #9]	@ 00044d5a 687a
.org 0x44d5c
	lsls r0, r0, #2	@ 00044d5c 8000
.org 0x44d5e
	adds r0, r0, r1	@ 00044d5e 4018
.org 0x44d60
	str r3, [r5, #12]	@ 00044d60 eb60
.org 0x44d62
	b.n 0x44dd2	@ 00044d62 36e0
.org 0x44d64
	.byte 0xf8,0x39,0x85,0x08	@ 00044d64 data
.org 0x44d68
	ldrb r0, [r7, #30]	@ 00044d68 b87f
.org 0x44d6a
	lsls r0, r0, #8	@ 00044d6a 0002
.org 0x44d6c
	adds r1, r7, #0	@ 00044d6c 391c
.org 0x44d6e
	adds r1, #112	@ 00044d6e 7031
.org 0x44d70
	ldrb r1, [r1, #0]	@ 00044d70 0978
.org 0x44d72
	orrs r1, r0	@ 00044d72 0143
.org 0x44d74
	ldr r0, [pc, #12]	@ 00044d74 0348
.org 0x44d76
	cmp r1, r0	@ 00044d76 8142
.org 0x44d78
	bne.n 0x44d88	@ 00044d78 06d1
.org 0x44d7a
	adds r0, r5, #0	@ 00044d7a 281c
.org 0x44d7c
	adds r0, #190	@ 00044d7c be30
.org 0x44d7e
	ldrh r0, [r0, #0]	@ 00044d7e 0088
.org 0x44d80
	adds r0, #2	@ 00044d80 0230
.org 0x44d82
	b.n 0x44dec	@ 00044d82 33e0
.org 0x44d84
	.byte 0x03,0x14,0x00,0x00	@ 00044d84 data
.org 0x44d88
	ldr r0, [pc, #12]	@ 00044d88 0348
.org 0x44d8a
	cmp r1, r0	@ 00044d8a 8142
.org 0x44d8c
	bne.n 0x44d9c	@ 00044d8c 06d1
.org 0x44d8e
	adds r0, r5, #0	@ 00044d8e 281c
.org 0x44d90
	adds r0, #190	@ 00044d90 be30
.org 0x44d92
	ldrh r0, [r0, #0]	@ 00044d92 0088
.org 0x44d94
	adds r0, #5	@ 00044d94 0530
.org 0x44d96
	b.n 0x44dec	@ 00044d96 29e0
.org 0x44d98
	.byte 0x05,0x19,0x00,0x00	@ 00044d98 data
