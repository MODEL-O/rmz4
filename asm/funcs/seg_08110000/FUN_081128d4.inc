@ FUN_081128d4  entry 0x081128d4  size 214
.thumb
.org 0x1128d4
FUN_081128d4:
	push {r4, r5, r6, r7, lr}	@ 001128d4 f0b5
.org 0x1128d6
	movs r5, #0	@ 001128d6 0025
.org 0x1128d8
	ldr r1, [pc, #208]	@ 001128d8 3449
.org 0x1128da
	ldrb r0, [r1, #0]	@ 001128da 0878
.org 0x1128dc
	adds r0, #1	@ 001128dc 0130
.org 0x1128de
	strb r0, [r1, #0]	@ 001128de 0870
.org 0x1128e0
	ldr r2, [pc, #204]	@ 001128e0 334a
.org 0x1128e2
	ldrb r0, [r1, #0]	@ 001128e2 0878
.org 0x1128e4
	lsls r0, r0, #1	@ 001128e4 4000
.org 0x1128e6
	adds r0, r0, r2	@ 001128e6 8018
.org 0x1128e8
	movs r1, #0	@ 001128e8 0021
.org 0x1128ea
	ldrsh r0, [r0, r1]	@ 001128ea 405e
.org 0x1128ec
	lsls r0, r0, #4	@ 001128ec 0001
.org 0x1128ee
	movs r1, #160	@ 001128ee a021
.org 0x1128f0
	lsls r1, r1, #5	@ 001128f0 4901
.org 0x1128f2
	adds r0, r0, r1	@ 001128f2 4018
.org 0x1128f4
	asrs r4, r0, #1	@ 001128f4 4410
.org 0x1128f6
	movs r1, #0	@ 001128f6 0021
.org 0x1128f8
	ldr r7, [pc, #184]	@ 001128f8 2e4f
.org 0x1128fa
	ldr r6, [pc, #188]	@ 001128fa 2f4e
.org 0x1128fc
	lsls r1, r1, #16	@ 001128fc 0904
.org 0x1128fe
	asrs r1, r1, #16	@ 001128fe 0914
.org 0x112900
	lsls r2, r1, #1	@ 00112900 4a00
.org 0x112902
	adds r2, r2, r7	@ 00112902 d219
.org 0x112904
	lsrs r0, r5, #12	@ 00112904 280b
.org 0x112906
	lsls r0, r0, #1	@ 00112906 4000
.org 0x112908
	adds r0, r0, r6	@ 00112908 8019
.org 0x11290a
	ldrh r0, [r0, #0]	@ 0011290a 0088
.org 0x11290c
	strh r0, [r2, #0]	@ 0011290c 1080
.org 0x11290e
	adds r5, r5, r4	@ 0011290e 2d19
.org 0x112910
	adds r1, #1	@ 00112910 0131
.org 0x112912
	lsls r1, r1, #16	@ 00112912 0904
.org 0x112914
	lsrs r1, r1, #16	@ 00112914 090c
.org 0x112916
	lsls r2, r1, #16	@ 00112916 0a04
.org 0x112918
	asrs r3, r2, #16	@ 00112918 1314
.org 0x11291a
	cmp r3, #31	@ 0011291a 1f2b
.org 0x11291c
	ble.n 0x1128fc	@ 0011291c eedd
.org 0x11291e
	lsls r1, r4, #5	@ 0011291e 6101
.org 0x112920
	movs r0, #128	@ 00112920 8020
.org 0x112922
	lsls r0, r0, #11	@ 00112922 c002
.org 0x112924
	subs r0, r0, r1	@ 00112924 401a
.org 0x112926
	lsrs r4, r0, #5	@ 00112926 4409
.org 0x112928
	cmp r3, #63	@ 00112928 3f2b
.org 0x11292a
	bgt.n 0x11294c	@ 0011292a 0fdc
.org 0x11292c
	ldr r6, [pc, #132]	@ 0011292c 214e
.org 0x11292e
	ldr r3, [pc, #136]	@ 0011292e 224b
.org 0x112930
	asrs r2, r2, #16	@ 00112930 1214
.org 0x112932
	lsls r1, r2, #1	@ 00112932 5100
.org 0x112934
	adds r1, r1, r6	@ 00112934 8919
.org 0x112936
	lsrs r0, r5, #12	@ 00112936 280b
.org 0x112938
	lsls r0, r0, #1	@ 00112938 4000
.org 0x11293a
	adds r0, r0, r3	@ 0011293a c018
.org 0x11293c
	ldrh r0, [r0, #0]	@ 0011293c 0088
.org 0x11293e
	strh r0, [r1, #0]	@ 0011293e 0880
.org 0x112940
	adds r5, r5, r4	@ 00112940 2d19
.org 0x112942
	adds r2, #1	@ 00112942 0132
.org 0x112944
	lsls r2, r2, #16	@ 00112944 1204
.org 0x112946
	asrs r0, r2, #16	@ 00112946 1014
.org 0x112948
	cmp r0, #63	@ 00112948 3f28
.org 0x11294a
	ble.n 0x112930	@ 0011294a f1dd
.org 0x11294c
	movs r1, #4	@ 0011294c 0421
.org 0x11294e
	ldr r5, [pc, #108]	@ 0011294e 1b4d
.org 0x112950
	ldrh r0, [r5, #0]	@ 00112950 2888
.org 0x112952
	lsls r1, r1, #16	@ 00112952 0904
.org 0x112954
	asrs r4, r1, #16	@ 00112954 0c14
.org 0x112956
	asrs r0, r4	@ 00112956 2041
.org 0x112958
	movs r1, #1	@ 00112958 0121
.org 0x11295a
	ands r0, r1	@ 0011295a 0840
.org 0x11295c
	cmp r0, #0	@ 0011295c 0028
.org 0x11295e
	beq.n 0x112970	@ 0011295e 07d0
.org 0x112960
	lsls r0, r4, #5	@ 00112960 6001
.org 0x112962
	ldr r1, [pc, #92]	@ 00112962 1749
.org 0x112964
	adds r0, r0, r1	@ 00112964 4018
.org 0x112966
	movs r1, #16	@ 00112966 1021
.org 0x112968
	ldr r2, [pc, #88]	@ 00112968 164a
.org 0x11296a
	ldr r3, [pc, #72]	@ 0011296a 124b
.org 0x11296c
	bl 0x1129d4	@ 0011296c 00f032f8
.org 0x112970
	adds r0, r4, #1	@ 00112970 601c
.org 0x112972
	lsls r0, r0, #16	@ 00112972 0004
.org 0x112974
	lsrs r1, r0, #16	@ 00112974 010c
.org 0x112976
	asrs r0, r0, #16	@ 00112976 0014
.org 0x112978
	cmp r0, #9	@ 00112978 0928
.org 0x11297a
	ble.n 0x112950	@ 0011297a e9dd
.org 0x11297c
	ldr r0, [pc, #72]	@ 0011297c 1248
.org 0x11297e
	ldr r4, [pc, #68]	@ 0011297e 114c
.org 0x112980
	ldr r5, [pc, #48]	@ 00112980 0c4d
.org 0x112982
	movs r1, #16	@ 00112982 1021
.org 0x112984
	adds r2, r4, #0	@ 00112984 221c
.org 0x112986
	adds r3, r5, #0	@ 00112986 2b1c
.org 0x112988
	bl 0x1129d4	@ 00112988 00f024f8
.org 0x11298c
	ldr r0, [pc, #60]	@ 0011298c 0f48
.org 0x11298e
	movs r1, #16	@ 0011298e 1021
.org 0x112990
	adds r2, r4, #0	@ 00112990 221c
.org 0x112992
	adds r3, r5, #0	@ 00112992 2b1c
.org 0x112994
	bl 0x1129d4	@ 00112994 00f01ef8
.org 0x112998
	ldr r0, [pc, #52]	@ 00112998 0d48
.org 0x11299a
	movs r1, #224	@ 0011299a e021
.org 0x11299c
	adds r2, r4, #0	@ 0011299c 221c
.org 0x11299e
	adds r3, r5, #0	@ 0011299e 2b1c
.org 0x1129a0
	bl 0x1129d4	@ 001129a0 00f018f8
.org 0x1129a4
	pop {r4, r5, r6, r7}	@ 001129a4 f0bc
.org 0x1129a6
	pop {r0}	@ 001129a6 01bc
.org 0x1129a8
	bx r0	@ 001129a8 0047
