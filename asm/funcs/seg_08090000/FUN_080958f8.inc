@ FUN_080958f8  entry 0x080958f8  size 172
.thumb
.org 0x958f8
FUN_080958f8:
	push {r4, r5, lr}	@ 000958f8 30b5
.org 0x958fa
	adds r4, r0, #0	@ 000958fa 041c
.org 0x958fc
	ldrb r0, [r4, #10]	@ 000958fc a07a
.org 0x958fe
	lsrs r5, r0, #4	@ 000958fe 0509
.org 0x95900
	movs r0, #1	@ 00095900 0120
.org 0x95902
	ands r5, r0	@ 00095902 0540
.org 0x95904
	ldrb r0, [r4, #15]	@ 00095904 e07b
.org 0x95906
	cmp r0, #0	@ 00095906 0028
.org 0x95908
	bne.n 0x9592c	@ 00095908 10d1
.org 0x9590a
	movs r0, #187	@ 0009590a bb20
.org 0x9590c
	bl 0x2b10	@ 0009590c 6df700f9
.org 0x95910
	lsls r0, r5, #1	@ 00095910 6800
.org 0x95912
	subs r0, #1	@ 00095912 0138
.org 0x95914
	ldr r1, [pc, #140]	@ 00095914 2349
.org 0x95916
	muls r0, r1	@ 00095916 4843
.org 0x95918
	str r0, [r4, #92]	@ 00095918 e065
.org 0x9591a
	movs r0, #168	@ 0009591a a820
.org 0x9591c
	lsls r0, r0, #2	@ 0009591c 8000
.org 0x9591e
	str r0, [r4, #96]	@ 0009591e 2066
.org 0x95920
	movs r0, #16	@ 00095920 1020
.org 0x95922
	negs r0, r0	@ 00095922 4042
.org 0x95924
	str r0, [r4, #104]	@ 00095924 a066
.org 0x95926
	ldrb r0, [r4, #15]	@ 00095926 e07b
.org 0x95928
	adds r0, #1	@ 00095928 0130
.org 0x9592a
	strb r0, [r4, #15]	@ 0009592a e073
.org 0x9592c
	adds r0, r4, #0	@ 0009592c 201c
.org 0x9592e
	bl 0x1cff0	@ 0009592e 87f75ffb
.org 0x95932
	ldr r0, [r4, #84]	@ 00095932 606d
.org 0x95934
	ldr r1, [r4, #92]	@ 00095934 e16d
.org 0x95936
	adds r0, r0, r1	@ 00095936 4018
.org 0x95938
	str r0, [r4, #84]	@ 00095938 6065
.org 0x9593a
	ldr r0, [r4, #88]	@ 0009593a a06d
.org 0x9593c
	ldr r1, [r4, #96]	@ 0009593c 216e
.org 0x9593e
	adds r0, r0, r1	@ 0009593e 4018
.org 0x95940
	str r0, [r4, #88]	@ 00095940 a065
.org 0x95942
	ldr r0, [r4, #104]	@ 00095942 a06e
.org 0x95944
	adds r1, r1, r0	@ 00095944 0918
.org 0x95946
	str r1, [r4, #96]	@ 00095946 2166
.org 0x95948
	ldr r0, [pc, #92]	@ 00095948 1748
.org 0x9594a
	cmp r1, r0	@ 0009594a 8142
.org 0x9594c
	bge.n 0x95950	@ 0009594c 00da
.org 0x9594e
	str r0, [r4, #96]	@ 0009594e 2066
.org 0x95950
	adds r0, r4, #0	@ 00095950 201c
.org 0x95952
	bl 0x95cd8	@ 00095952 00f0c1f9
.org 0x95956
	ldr r0, [pc, #84]	@ 00095956 1548
.org 0x95958
	adds r1, r4, #0	@ 00095958 211c
.org 0x9595a
	adds r1, #84	@ 0009595a 5431
.org 0x9595c
	bl 0x1fb14	@ 0009595c 8af7daf8
.org 0x95960
	movs r1, #192	@ 00095960 c021
.org 0x95962
	lsls r1, r1, #6	@ 00095962 8901
.org 0x95964
	cmp r0, r1	@ 00095964 8842
.org 0x95966
	bls.n 0x9599e	@ 00095966 1ad9
.org 0x95968
	ldrb r1, [r4, #10]	@ 00095968 a17a
.org 0x9596a
	movs r0, #254	@ 0009596a fe20
.org 0x9596c
	ands r0, r1	@ 0009596c 0840
.org 0x9596e
	movs r2, #0	@ 0009596e 0022
.org 0x95970
	movs r1, #253	@ 00095970 fd21
.org 0x95972
	ands r0, r1	@ 00095972 0840
.org 0x95974
	strb r0, [r4, #10]	@ 00095974 a072
.org 0x95976
	adds r0, r4, #0	@ 00095976 201c
.org 0x95978
	adds r0, #140	@ 00095978 8c30
.org 0x9597a
	str r2, [r0, #0]	@ 0009597a 0260
.org 0x9597c
	adds r0, #4	@ 0009597c 0430
.org 0x9597e
	str r2, [r0, #0]	@ 0009597e 0260
.org 0x95980
	adds r0, #4	@ 00095980 0430
.org 0x95982
	strb r2, [r0, #0]	@ 00095982 0270
.org 0x95984
	ldrb r1, [r4, #10]	@ 00095984 a17a
.org 0x95986
	movs r0, #251	@ 00095986 fb20
.org 0x95988
	ands r0, r1	@ 00095988 0840
.org 0x9598a
	strb r0, [r4, #10]	@ 0009598a a072
.org 0x9598c
	ldr r1, [pc, #32]	@ 0009598c 0849
.org 0x9598e
	ldrb r0, [r4, #9]	@ 0009598e 607a
.org 0x95990
	lsls r0, r0, #2	@ 00095990 8000
.org 0x95992
	adds r0, r0, r1	@ 00095992 4018
.org 0x95994
	movs r1, #3	@ 00095994 0321
.org 0x95996
	str r1, [r4, #12]	@ 00095996 e160
.org 0x95998
	ldr r0, [r0, #0]	@ 00095998 0068
.org 0x9599a
	ldr r0, [r0, #12]	@ 0009599a c068
.org 0x9599c
	str r0, [r4, #20]	@ 0009599c 6061
.org 0x9599e
	pop {r4, r5}	@ 0009599e 30bc
.org 0x959a0
	pop {r0}	@ 000959a0 01bc
.org 0x959a2
	bx r0	@ 000959a2 0047
