@ FUN_0810d91c  entry 0x0810d91c  size 220
.thumb
.org 0x10d91c
FUN_0810d91c:
	push {r4, r5, r6, r7, lr}	@ 0010d91c f0b5
.org 0x10d91e
	mov r7, r8	@ 0010d91e 4746
.org 0x10d920
	push {r7}	@ 0010d920 80b4
.org 0x10d922
	adds r4, r0, #0	@ 0010d922 041c
.org 0x10d924
	adds r5, r1, #0	@ 0010d924 0d1c
.org 0x10d926
	mov r8, r2	@ 0010d926 9046
.org 0x10d928
	ldr r0, [sp, #24]	@ 0010d928 0698
.org 0x10d92a
	lsls r3, r3, #16	@ 0010d92a 1b04
.org 0x10d92c
	lsrs r3, r3, #16	@ 0010d92c 1b0c
.org 0x10d92e
	lsls r0, r0, #16	@ 0010d92e 0004
.org 0x10d930
	lsrs r7, r0, #16	@ 0010d930 070c
.org 0x10d932
	ldr r0, [pc, #196]	@ 0010d932 3148
.org 0x10d934
	movs r2, #4	@ 0010d934 0422
.org 0x10d936
	ldrsh r1, [r0, r2]	@ 0010d936 815e
.org 0x10d938
	adds r2, r0, #0	@ 0010d938 021c
.org 0x10d93a
	cmp r1, #95	@ 0010d93a 5f29
.org 0x10d93c
	bgt.n 0x10d9ee	@ 0010d93c 57dc
.org 0x10d93e
	movs r6, #0	@ 0010d93e 0026
.org 0x10d940
	cmp r6, r3	@ 0010d940 9e42
.org 0x10d942
	bcs.n 0x10d960	@ 0010d942 0dd2
.org 0x10d944
	ldrb r0, [r4, #0]	@ 0010d944 2078
.org 0x10d946
	cmp r0, #252	@ 0010d946 fc28
.org 0x10d948
	bhi.n 0x10d9ee	@ 0010d948 51d8
.org 0x10d94a
	cmp r0, #252	@ 0010d94a fc28
.org 0x10d94c
	bne.n 0x10d954	@ 0010d94c 02d1
.org 0x10d94e
	adds r0, r6, #1	@ 0010d94e 701c
.org 0x10d950
	lsls r0, r0, #16	@ 0010d950 0004
.org 0x10d952
	lsrs r6, r0, #16	@ 0010d952 060c
.org 0x10d954
	adds r4, #1	@ 0010d954 0134
.org 0x10d956
	cmp r6, r3	@ 0010d956 9e42
.org 0x10d958
	bcs.n 0x10d960	@ 0010d958 02d2
.org 0x10d95a
	ldrb r0, [r4, #0]	@ 0010d95a 2078
.org 0x10d95c
	cmp r0, #252	@ 0010d95c fc28
.org 0x10d95e
	bls.n 0x10d94a	@ 0010d95e f4d9
.org 0x10d960
	ldrb r0, [r4, #0]	@ 0010d960 2078
.org 0x10d962
	cmp r0, #252	@ 0010d962 fc28
.org 0x10d964
	bhi.n 0x10d9ee	@ 0010d964 43d8
.org 0x10d966
	movs r3, #4	@ 0010d966 0423
.org 0x10d968
	ldrsh r0, [r2, r3]	@ 0010d968 d05e
.org 0x10d96a
	lsls r0, r0, #2	@ 0010d96a 8000
.org 0x10d96c
	adds r1, r2, #0	@ 0010d96c 111c
.org 0x10d96e
	adds r1, #8	@ 0010d96e 0831
.org 0x10d970
	adds r0, r0, r1	@ 0010d970 4018
.org 0x10d972
	str r4, [r0, #0]	@ 0010d972 0460
.org 0x10d974
	movs r1, #4	@ 0010d974 0421
.org 0x10d976
	ldrsh r0, [r2, r1]	@ 0010d976 505e
.org 0x10d978
	movs r3, #196	@ 0010d978 c423
.org 0x10d97a
	lsls r3, r3, #1	@ 0010d97a 5b00
.org 0x10d97c
	adds r1, r2, r3	@ 0010d97c d118
.org 0x10d97e
	adds r0, r0, r1	@ 0010d97e 4018
.org 0x10d980
	strb r5, [r0, #0]	@ 0010d980 0570
.org 0x10d982
	movs r1, #4	@ 0010d982 0421
.org 0x10d984
	ldrsh r0, [r2, r1]	@ 0010d984 505e
.org 0x10d986
	adds r3, #96	@ 0010d986 6033
.org 0x10d988
	adds r1, r2, r3	@ 0010d988 d118
.org 0x10d98a
	adds r0, r0, r1	@ 0010d98a 4018
.org 0x10d98c
	mov r1, r8	@ 0010d98c 4146
.org 0x10d98e
	strb r1, [r0, #0]	@ 0010d98e 0170
.org 0x10d990
	movs r5, #0	@ 0010d990 0025
.org 0x10d992
	cmp r6, r7	@ 0010d992 be42
.org 0x10d994
	bcs.n 0x10d9d8	@ 0010d994 20d2
.org 0x10d996
	ldrb r0, [r4, #0]	@ 0010d996 2078
.org 0x10d998
	cmp r0, #252	@ 0010d998 fc28
.org 0x10d99a
	bhi.n 0x10d9d8	@ 0010d99a 1dd8
.org 0x10d99c
	ldr r3, [pc, #92]	@ 0010d99c 174b
.org 0x10d99e
	adds r3, r3, r2	@ 0010d99e 9b18
.org 0x10d9a0
	mov r8, r3	@ 0010d9a0 9846
.org 0x10d9a2
	cmp r0, #249	@ 0010d9a2 f928
.org 0x10d9a4
	bne.n 0x10d9b4	@ 0010d9a4 06d1
.org 0x10d9a6
	mov r1, r8	@ 0010d9a6 4146
.org 0x10d9a8
	ldr r0, [r1, #0]	@ 0010d9a8 0868
.org 0x10d9aa
	bl 0x10d7ec	@ 0010d9aa fff71fff
.org 0x10d9ae
	adds r0, r5, r0	@ 0010d9ae 2818
.org 0x10d9b0
	lsls r0, r0, #16	@ 0010d9b0 0004
.org 0x10d9b2
	lsrs r5, r0, #16	@ 0010d9b2 050c
.org 0x10d9b4
	ldrb r1, [r4, #0]	@ 0010d9b4 2178
.org 0x10d9b6
	cmp r1, #239	@ 0010d9b6 ef29
.org 0x10d9b8
	bhi.n 0x10d9c0	@ 0010d9b8 02d8
.org 0x10d9ba
	adds r0, r5, #1	@ 0010d9ba 681c
.org 0x10d9bc
	lsls r0, r0, #16	@ 0010d9bc 0004
.org 0x10d9be
	lsrs r5, r0, #16	@ 0010d9be 050c
.org 0x10d9c0
	cmp r1, #252	@ 0010d9c0 fc29
.org 0x10d9c2
	bne.n 0x10d9ca	@ 0010d9c2 02d1
.org 0x10d9c4
	adds r0, r6, #1	@ 0010d9c4 701c
.org 0x10d9c6
	lsls r0, r0, #16	@ 0010d9c6 0004
.org 0x10d9c8
	lsrs r6, r0, #16	@ 0010d9c8 060c
.org 0x10d9ca
	adds r4, #1	@ 0010d9ca 0134
.org 0x10d9cc
	ldr r2, [pc, #40]	@ 0010d9cc 0a4a
.org 0x10d9ce
	cmp r6, r7	@ 0010d9ce be42
.org 0x10d9d0
	bcs.n 0x10d9d8	@ 0010d9d0 02d2
.org 0x10d9d2
	ldrb r0, [r4, #0]	@ 0010d9d2 2078
.org 0x10d9d4
	cmp r0, #252	@ 0010d9d4 fc28
.org 0x10d9d6
	bls.n 0x10d9a2	@ 0010d9d6 e4d9
.org 0x10d9d8
	movs r3, #4	@ 0010d9d8 0423
.org 0x10d9da
	ldrsh r0, [r2, r3]	@ 0010d9da d05e
.org 0x10d9dc
	lsls r0, r0, #1	@ 0010d9dc 4000
.org 0x10d9de
	movs r3, #146	@ 0010d9de 9223
.org 0x10d9e0
	lsls r3, r3, #2	@ 0010d9e0 9b00
.org 0x10d9e2
	adds r1, r2, r3	@ 0010d9e2 d118
.org 0x10d9e4
	adds r0, r0, r1	@ 0010d9e4 4018
.org 0x10d9e6
	strh r5, [r0, #0]	@ 0010d9e6 0580
.org 0x10d9e8
	ldrh r0, [r2, #4]	@ 0010d9e8 9088
.org 0x10d9ea
	adds r0, #1	@ 0010d9ea 0130
.org 0x10d9ec
	strh r0, [r2, #4]	@ 0010d9ec 9080
.org 0x10d9ee
	pop {r3}	@ 0010d9ee 08bc
.org 0x10d9f0
	mov r8, r3	@ 0010d9f0 9846
.org 0x10d9f2
	pop {r4, r5, r6, r7}	@ 0010d9f2 f0bc
.org 0x10d9f4
	pop {r0}	@ 0010d9f4 01bc
.org 0x10d9f6
	bx r0	@ 0010d9f6 0047
