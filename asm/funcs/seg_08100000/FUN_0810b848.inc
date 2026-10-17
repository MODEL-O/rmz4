@ FUN_0810b848  entry 0x0810b848  size 126
.thumb
.org 0x10b848
FUN_0810b848:
	push {r4, r5, r6, lr}	@ 0010b848 70b5
.org 0x10b84a
	adds r4, r0, #0	@ 0010b84a 041c
.org 0x10b84c
	ldrb r6, [r4, #17]	@ 0010b84c 667c
.org 0x10b84e
	movs r5, #15	@ 0010b84e 0f25
.org 0x10b850
	ands r5, r6	@ 0010b850 3540
.org 0x10b852
	lsrs r6, r6, #4	@ 0010b852 3609
.org 0x10b854
	bl 0x1cc9c	@ 0010b854 11f722fa
.org 0x10b858
	ldrb r1, [r4, #10]	@ 0010b858 a17a
.org 0x10b85a
	movs r0, #1	@ 0010b85a 0120
.org 0x10b85c
	movs r2, #0	@ 0010b85c 0022
.org 0x10b85e
	orrs r0, r1	@ 0010b85e 0843
.org 0x10b860
	movs r1, #2	@ 0010b860 0221
.org 0x10b862
	orrs r0, r1	@ 0010b862 0843
.org 0x10b864
	strb r0, [r4, #10]	@ 0010b864 a072
.org 0x10b866
	ldr r0, [pc, #96]	@ 0010b866 1848
.org 0x10b868
	adds r0, r6, r0	@ 0010b868 3018
.org 0x10b86a
	ldrb r0, [r0, #0]	@ 0010b86a 0078
.org 0x10b86c
	adds r1, r4, #0	@ 0010b86c 211c
.org 0x10b86e
	adds r1, #34	@ 0010b86e 2231
.org 0x10b870
	strb r0, [r1, #0]	@ 0010b870 0870
.org 0x10b872
	adds r0, r4, #0	@ 0010b872 201c
.org 0x10b874
	adds r0, #76	@ 0010b874 4c30
.org 0x10b876
	strb r2, [r0, #0]	@ 0010b876 0270
.org 0x10b878
	adds r2, r4, #0	@ 0010b878 221c
.org 0x10b87a
	adds r2, #74	@ 0010b87a 4a32
.org 0x10b87c
	ldrb r1, [r2, #0]	@ 0010b87c 1178
.org 0x10b87e
	movs r0, #17	@ 0010b87e 1120
.org 0x10b880
	negs r0, r0	@ 0010b880 4042
.org 0x10b882
	ands r0, r1	@ 0010b882 0840
.org 0x10b884
	strb r0, [r2, #0]	@ 0010b884 1070
.org 0x10b886
	ldrb r1, [r4, #10]	@ 0010b886 a17a
.org 0x10b888
	movs r0, #239	@ 0010b888 ef20
.org 0x10b88a
	ands r0, r1	@ 0010b88a 0840
.org 0x10b88c
	strb r0, [r4, #10]	@ 0010b88c a072
.org 0x10b88e
	lsls r5, r5, #11	@ 0010b88e ed02
.org 0x10b890
	movs r0, #224	@ 0010b890 e020
.org 0x10b892
	lsls r0, r0, #5	@ 0010b892 4001
.org 0x10b894
	adds r5, r5, r0	@ 0010b894 2d18
.org 0x10b896
	movs r0, #128	@ 0010b896 8020
.org 0x10b898
	lsls r0, r0, #9	@ 0010b898 4002
.org 0x10b89a
	adds r5, r5, r0	@ 0010b89a 2d18
.org 0x10b89c
	str r5, [r4, #84]	@ 0010b89c 6565
.org 0x10b89e
	lsls r6, r6, #13	@ 0010b89e 7603
.org 0x10b8a0
	movs r0, #160	@ 0010b8a0 a020
.org 0x10b8a2
	lsls r0, r0, #6	@ 0010b8a2 8001
.org 0x10b8a4
	adds r6, r6, r0	@ 0010b8a4 3618
.org 0x10b8a6
	str r6, [r4, #88]	@ 0010b8a6 a665
.org 0x10b8a8
	ldr r1, [pc, #32]	@ 0010b8a8 0849
.org 0x10b8aa
	ldrb r0, [r4, #9]	@ 0010b8aa 607a
.org 0x10b8ac
	lsls r0, r0, #2	@ 0010b8ac 8000
.org 0x10b8ae
	adds r0, r0, r1	@ 0010b8ae 4018
.org 0x10b8b0
	movs r1, #1	@ 0010b8b0 0121
.org 0x10b8b2
	str r1, [r4, #12]	@ 0010b8b2 e160
.org 0x10b8b4
	ldr r0, [r0, #0]	@ 0010b8b4 0068
.org 0x10b8b6
	ldr r0, [r0, #4]	@ 0010b8b6 4068
.org 0x10b8b8
	str r0, [r4, #20]	@ 0010b8b8 6061
.org 0x10b8ba
	adds r0, r4, #0	@ 0010b8ba 201c
.org 0x10b8bc
	bl 0x10b774	@ 0010b8bc fff75aff
.org 0x10b8c0
	pop {r4, r5, r6}	@ 0010b8c0 70bc
.org 0x10b8c2
	pop {r0}	@ 0010b8c2 01bc
.org 0x10b8c4
	bx r0	@ 0010b8c4 0047
