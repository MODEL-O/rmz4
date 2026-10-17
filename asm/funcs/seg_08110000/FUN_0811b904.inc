@ FUN_0811b904  entry 0x0811b904  size 242
.thumb
.org 0x11b904
FUN_0811b904:
	push {r4, r5, r6, r7, lr}	@ 0011b904 f0b5
.org 0x11b906
	adds r7, r0, #0	@ 0011b906 071c
.org 0x11b908
	lsls r1, r1, #16	@ 0011b908 0904
.org 0x11b90a
	lsrs r1, r1, #16	@ 0011b90a 090c
.org 0x11b90c
	adds r4, r1, #0	@ 0011b90c 0c1c
.org 0x11b90e
	lsls r2, r2, #16	@ 0011b90e 1204
.org 0x11b910
	lsrs r5, r2, #16	@ 0011b910 150c
.org 0x11b912
	lsls r3, r3, #24	@ 0011b912 1b06
.org 0x11b914
	lsrs r6, r3, #24	@ 0011b914 1e0e
.org 0x11b916
	cmp r1, #4	@ 0011b916 0429
.org 0x11b918
	beq.n 0x11b966	@ 0011b918 25d0
.org 0x11b91a
	cmp r1, #4	@ 0011b91a 0429
.org 0x11b91c
	bgt.n 0x11b928	@ 0011b91c 04dc
.org 0x11b91e
	cmp r1, #1	@ 0011b91e 0129
.org 0x11b920
	beq.n 0x11b93a	@ 0011b920 0bd0
.org 0x11b922
	cmp r1, #2	@ 0011b922 0229
.org 0x11b924
	beq.n 0x11b944	@ 0011b924 0ed0
.org 0x11b926
	b.n 0x11b9ca	@ 0011b926 50e0
.org 0x11b928
	movs r0, #128	@ 0011b928 8020
.org 0x11b92a
	lsls r0, r0, #1	@ 0011b92a 4000
.org 0x11b92c
	cmp r4, r0	@ 0011b92c 8442
.org 0x11b92e
	beq.n 0x11b958	@ 0011b92e 13d0
.org 0x11b930
	movs r0, #128	@ 0011b930 8020
.org 0x11b932
	lsls r0, r0, #2	@ 0011b932 8000
.org 0x11b934
	cmp r4, r0	@ 0011b934 8442
.org 0x11b936
	beq.n 0x11b94e	@ 0011b936 0ad0
.org 0x11b938
	b.n 0x11b9ca	@ 0011b938 47e0
.org 0x11b93a
	lsls r0, r5, #1	@ 0011b93a 6800
.org 0x11b93c
	adds r0, r0, r7	@ 0011b93c c019
.org 0x11b93e
	lsls r1, r6, #12	@ 0011b93e 3103
.org 0x11b940
	movs r2, #176	@ 0011b940 b022
.org 0x11b942
	b.n 0x11b960	@ 0011b942 0de0
.org 0x11b944
	lsls r0, r5, #1	@ 0011b944 6800
.org 0x11b946
	adds r0, r0, r7	@ 0011b946 c019
.org 0x11b948
	lsls r1, r6, #12	@ 0011b948 3103
.org 0x11b94a
	movs r2, #177	@ 0011b94a b122
.org 0x11b94c
	b.n 0x11b960	@ 0011b94c 08e0
.org 0x11b94e
	lsls r0, r5, #1	@ 0011b94e 6800
.org 0x11b950
	adds r0, r0, r7	@ 0011b950 c019
.org 0x11b952
	lsls r1, r6, #12	@ 0011b952 3103
.org 0x11b954
	movs r2, #178	@ 0011b954 b222
.org 0x11b956
	b.n 0x11b960	@ 0011b956 03e0
.org 0x11b958
	lsls r0, r5, #1	@ 0011b958 6800
.org 0x11b95a
	adds r0, r0, r7	@ 0011b95a c019
.org 0x11b95c
	lsls r1, r6, #12	@ 0011b95c 3103
.org 0x11b95e
	movs r2, #179	@ 0011b95e b322
.org 0x11b960
	orrs r1, r2	@ 0011b960 1143
.org 0x11b962
	strh r1, [r0, #0]	@ 0011b962 0180
.org 0x11b964
	b.n 0x11b9ca	@ 0011b964 31e0
.org 0x11b966
	ldr r0, [pc, #52]	@ 0011b966 0d48
.org 0x11b968
	cmp r5, r0	@ 0011b968 8542
.org 0x11b96a
	bhi.n 0x11b9a0	@ 0011b96a 19d8
.org 0x11b96c
	lsls r3, r5, #1	@ 0011b96c 6b00
.org 0x11b96e
	adds r3, r3, r7	@ 0011b96e db19
.org 0x11b970
	subs r4, r3, #4	@ 0011b970 1c1f
.org 0x11b972
	lsls r2, r6, #12	@ 0011b972 3203
.org 0x11b974
	movs r1, #188	@ 0011b974 bc21
.org 0x11b976
	adds r0, r2, #0	@ 0011b976 101c
.org 0x11b978
	orrs r0, r1	@ 0011b978 0843
.org 0x11b97a
	strh r0, [r4, #0]	@ 0011b97a 2080
.org 0x11b97c
	subs r4, r3, #2	@ 0011b97c 9c1e
.org 0x11b97e
	movs r1, #189	@ 0011b97e bd21
.org 0x11b980
	adds r0, r2, #0	@ 0011b980 101c
.org 0x11b982
	orrs r0, r1	@ 0011b982 0843
.org 0x11b984
	strh r0, [r4, #0]	@ 0011b984 2080
.org 0x11b986
	movs r1, #190	@ 0011b986 be21
.org 0x11b988
	adds r0, r2, #0	@ 0011b988 101c
.org 0x11b98a
	orrs r0, r1	@ 0011b98a 0843
.org 0x11b98c
	strh r0, [r3, #0]	@ 0011b98c 1880
.org 0x11b98e
	movs r0, #191	@ 0011b98e bf20
.org 0x11b990
	orrs r2, r0	@ 0011b990 0243
.org 0x11b992
	strh r2, [r3, #2]	@ 0011b992 5a80
.org 0x11b994
	adds r0, r5, #1	@ 0011b994 681c
.org 0x11b996
	lsls r0, r0, #16	@ 0011b996 0004
.org 0x11b998
	lsrs r5, r0, #16	@ 0011b998 050c
.org 0x11b99a
	b.n 0x11b9ca	@ 0011b99a 16e0
.org 0x11b99c
	.byte 0x3f,0x01,0x00,0x00	@ 0011b99c data
.org 0x11b9a0
	lsls r3, r5, #1	@ 0011b9a0 6b00
.org 0x11b9a2
	adds r3, r3, r7	@ 0011b9a2 db19
.org 0x11b9a4
	subs r4, r3, #6	@ 0011b9a4 9c1f
.org 0x11b9a6
	lsls r2, r6, #12	@ 0011b9a6 3203
.org 0x11b9a8
	movs r1, #188	@ 0011b9a8 bc21
.org 0x11b9aa
	adds r0, r2, #0	@ 0011b9aa 101c
.org 0x11b9ac
	orrs r0, r1	@ 0011b9ac 0843
.org 0x11b9ae
	strh r0, [r4, #0]	@ 0011b9ae 2080
.org 0x11b9b0
	subs r4, r3, #4	@ 0011b9b0 1c1f
.org 0x11b9b2
	movs r1, #189	@ 0011b9b2 bd21
.org 0x11b9b4
	adds r0, r2, #0	@ 0011b9b4 101c
.org 0x11b9b6
	orrs r0, r1	@ 0011b9b6 0843
.org 0x11b9b8
	strh r0, [r4, #0]	@ 0011b9b8 2080
.org 0x11b9ba
	subs r4, r3, #2	@ 0011b9ba 9c1e
.org 0x11b9bc
	movs r1, #190	@ 0011b9bc be21
.org 0x11b9be
	adds r0, r2, #0	@ 0011b9be 101c
.org 0x11b9c0
	orrs r0, r1	@ 0011b9c0 0843
.org 0x11b9c2
	strh r0, [r4, #0]	@ 0011b9c2 2080
.org 0x11b9c4
	movs r0, #191	@ 0011b9c4 bf20
.org 0x11b9c6
	orrs r2, r0	@ 0011b9c6 0243
.org 0x11b9c8
	strh r2, [r3, #0]	@ 0011b9c8 1a80
.org 0x11b9ca
	ldr r0, [pc, #48]	@ 0011b9ca 0c48
.org 0x11b9cc
	cmp r5, r0	@ 0011b9cc 8542
.org 0x11b9ce
	bhi.n 0x11b9f4	@ 0011b9ce 11d8
.org 0x11b9d0
	lsls r3, r5, #1	@ 0011b9d0 6b00
.org 0x11b9d2
	adds r3, r3, r7	@ 0011b9d2 db19
.org 0x11b9d4
	lsls r2, r6, #12	@ 0011b9d4 3203
.org 0x11b9d6
	movs r1, #160	@ 0011b9d6 a021
.org 0x11b9d8
	adds r0, r2, #0	@ 0011b9d8 101c
.org 0x11b9da
	orrs r0, r1	@ 0011b9da 0843
.org 0x11b9dc
	strh r0, [r3, #2]	@ 0011b9dc 5880
.org 0x11b9de
	movs r1, #161	@ 0011b9de a121
.org 0x11b9e0
	adds r0, r2, #0	@ 0011b9e0 101c
.org 0x11b9e2
	orrs r0, r1	@ 0011b9e2 0843
.org 0x11b9e4
	strh r0, [r3, #4]	@ 0011b9e4 9880
.org 0x11b9e6
	movs r1, #162	@ 0011b9e6 a221
.org 0x11b9e8
	adds r0, r2, #0	@ 0011b9e8 101c
.org 0x11b9ea
	orrs r0, r1	@ 0011b9ea 0843
.org 0x11b9ec
	strh r0, [r3, #6]	@ 0011b9ec d880
.org 0x11b9ee
	movs r0, #163	@ 0011b9ee a320
.org 0x11b9f0
	orrs r2, r0	@ 0011b9f0 0243
.org 0x11b9f2
	strh r2, [r3, #8]	@ 0011b9f2 1a81
.org 0x11b9f4
	pop {r4, r5, r6, r7}	@ 0011b9f4 f0bc
