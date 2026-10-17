@ FUN_0807c8d8  entry 0x0807c8d8  size 210
.thumb
.org 0x7c8d8
FUN_0807c8d8:
	push {r4, r5, lr}	@ 0007c8d8 30b5
.org 0x7c8da
	adds r4, r0, #0	@ 0007c8da 041c
.org 0x7c8dc
	adds r0, #213	@ 0007c8dc d530
.org 0x7c8de
	ldrb r5, [r0, #0]	@ 0007c8de 0578
.org 0x7c8e0
	ldrb r0, [r4, #15]	@ 0007c8e0 e07b
.org 0x7c8e2
	cmp r0, #0	@ 0007c8e2 0028
.org 0x7c8e4
	bne.n 0x7c91e	@ 0007c8e4 1bd1
.org 0x7c8e6
	adds r2, r4, #0	@ 0007c8e6 221c
.org 0x7c8e8
	adds r2, #212	@ 0007c8e8 d432
.org 0x7c8ea
	movs r0, #1	@ 0007c8ea 0120
.org 0x7c8ec
	lsls r0, r5	@ 0007c8ec a840
.org 0x7c8ee
	ldrb r1, [r2, #0]	@ 0007c8ee 1178
.org 0x7c8f0
	orrs r0, r1	@ 0007c8f0 0843
.org 0x7c8f2
	strb r0, [r2, #0]	@ 0007c8f2 1070
.org 0x7c8f4
	adds r0, r4, #0	@ 0007c8f4 201c
.org 0x7c8f6
	movs r1, #21	@ 0007c8f6 1521
.org 0x7c8f8
	bl 0x7e8c8	@ 0007c8f8 01f0e6ff
.org 0x7c8fc
	adds r2, r4, #0	@ 0007c8fc 221c
.org 0x7c8fe
	adds r2, #180	@ 0007c8fe b432
.org 0x7c900
	ldr r1, [pc, #168]	@ 0007c900 2a49
.org 0x7c902
	lsls r0, r5, #2	@ 0007c902 a800
.org 0x7c904
	adds r0, r0, r1	@ 0007c904 4018
.org 0x7c906
	ldr r1, [r0, #0]	@ 0007c906 0168
.org 0x7c908
	movs r0, #240	@ 0007c908 f020
.org 0x7c90a
	lsls r0, r0, #7	@ 0007c90a c001
.org 0x7c90c
	adds r1, r1, r0	@ 0007c90c 0918
.org 0x7c90e
	ldr r0, [r2, #0]	@ 0007c90e 1068
.org 0x7c910
	adds r0, r0, r1	@ 0007c910 4018
.org 0x7c912
	str r0, [r4, #84]	@ 0007c912 6065
.org 0x7c914
	movs r0, #24	@ 0007c914 1820
.org 0x7c916
	strb r0, [r4, #18]	@ 0007c916 a074
.org 0x7c918
	ldrb r0, [r4, #15]	@ 0007c918 e07b
.org 0x7c91a
	adds r0, #1	@ 0007c91a 0130
.org 0x7c91c
	strb r0, [r4, #15]	@ 0007c91c e073
.org 0x7c91e
	adds r5, r4, #0	@ 0007c91e 251c
.org 0x7c920
	adds r5, #188	@ 0007c920 bc35
.org 0x7c922
	ldrb r0, [r5, #0]	@ 0007c922 2878
.org 0x7c924
	cmp r0, #0	@ 0007c924 0028
.org 0x7c926
	beq.n 0x7c92e	@ 0007c926 02d0
.org 0x7c928
	adds r0, r4, #0	@ 0007c928 201c
.org 0x7c92a
	bl 0x1cff0	@ 0007c92a a0f761fb
.org 0x7c92e
	adds r0, r4, #0	@ 0007c92e 201c
.org 0x7c930
	adds r0, #116	@ 0007c930 7430
.org 0x7c932
	ldr r3, [pc, #124]	@ 0007c932 1f4b
.org 0x7c934
	ldr r2, [pc, #124]	@ 0007c934 1f4a
.org 0x7c936
	ldrb r1, [r5, #0]	@ 0007c936 2978
.org 0x7c938
	lsls r1, r1, #1	@ 0007c938 4900
.org 0x7c93a
	adds r1, r1, r2	@ 0007c93a 8918
.org 0x7c93c
	ldrh r2, [r1, #0]	@ 0007c93c 0a88
.org 0x7c93e
	lsls r2, r2, #2	@ 0007c93e 9200
.org 0x7c940
	adds r2, r2, r3	@ 0007c940 d218
.org 0x7c942
	adds r1, r4, #0	@ 0007c942 211c
.org 0x7c944
	adds r1, #113	@ 0007c944 7131
.org 0x7c946
	ldrb r1, [r1, #0]	@ 0007c946 0978
.org 0x7c948
	lsls r1, r1, #24	@ 0007c948 0906
.org 0x7c94a
	asrs r1, r1, #24	@ 0007c94a 0916
.org 0x7c94c
	ldr r2, [r2, #0]	@ 0007c94c 1268
.org 0x7c94e
	lsls r1, r1, #2	@ 0007c94e 8900
.org 0x7c950
	adds r1, r1, r2	@ 0007c950 8918
.org 0x7c952
	ldr r1, [r1, #0]	@ 0007c952 0968
.org 0x7c954
	bl 0x5784	@ 0007c954 88f716ff
.org 0x7c958
	ldrb r0, [r4, #18]	@ 0007c958 a07c
.org 0x7c95a
	cmp r0, #0	@ 0007c95a 0028
.org 0x7c95c
	beq.n 0x7c962	@ 0007c95c 01d0
.org 0x7c95e
	subs r0, #1	@ 0007c95e 0138
.org 0x7c960
	strb r0, [r4, #18]	@ 0007c960 a074
.org 0x7c962
	ldrb r0, [r4, #18]	@ 0007c962 a07c
.org 0x7c964
	lsls r0, r0, #6	@ 0007c964 8001
.org 0x7c966
	movs r1, #24	@ 0007c966 1821
.org 0x7c968
	bl 0x128fb8	@ 0007c968 acf026fb
.org 0x7c96c
	ldr r1, [pc, #72]	@ 0007c96c 1249
.org 0x7c96e
	lsls r0, r0, #24	@ 0007c96e 0006
.org 0x7c970
	lsrs r0, r0, #23	@ 0007c970 c00d
.org 0x7c972
	adds r0, r0, r1	@ 0007c972 4018
.org 0x7c974
	movs r1, #0	@ 0007c974 0021
.org 0x7c976
	ldrsh r0, [r0, r1]	@ 0007c976 405e
.org 0x7c978
	asrs r0, r0, #4	@ 0007c978 0011
.org 0x7c97a
	ldr r2, [pc, #64]	@ 0007c97a 104a
.org 0x7c97c
	movs r1, #31	@ 0007c97c 1f21
.org 0x7c97e
	ands r0, r1	@ 0007c97e 0840
.org 0x7c980
	movs r3, #128	@ 0007c980 8023
.org 0x7c982
	lsls r3, r3, #5	@ 0007c982 5b01
.org 0x7c984
	adds r1, r3, #0	@ 0007c984 191c
.org 0x7c986
	movs r3, #0	@ 0007c986 0023
.org 0x7c988
	orrs r0, r1	@ 0007c988 0843
.org 0x7c98a
	strh r0, [r2, #2]	@ 0007c98a 5080
.org 0x7c98c
	adds r0, r4, #0	@ 0007c98c 201c
.org 0x7c98e
	adds r0, #115	@ 0007c98e 7330
.org 0x7c990
	ldrb r0, [r0, #0]	@ 0007c990 0078
.org 0x7c992
	cmp r0, #3	@ 0007c992 0328
.org 0x7c994
	bne.n 0x7c9a4	@ 0007c994 06d1
.org 0x7c996
	ldrb r0, [r4, #18]	@ 0007c996 a07c
.org 0x7c998
	cmp r0, #0	@ 0007c998 0028
.org 0x7c99a
	bne.n 0x7c9a4	@ 0007c99a 03d1
.org 0x7c99c
	ldrb r0, [r4, #14]	@ 0007c99c a07b
.org 0x7c99e
	adds r0, #1	@ 0007c99e 0130
.org 0x7c9a0
	strb r0, [r4, #14]	@ 0007c9a0 a073
.org 0x7c9a2
	strb r3, [r4, #15]	@ 0007c9a2 e373
.org 0x7c9a4
	pop {r4, r5}	@ 0007c9a4 30bc
.org 0x7c9a6
	pop {r0}	@ 0007c9a6 01bc
.org 0x7c9a8
	bx r0	@ 0007c9a8 0047
