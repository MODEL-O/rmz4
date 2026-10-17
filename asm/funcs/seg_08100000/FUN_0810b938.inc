@ FUN_0810b938  entry 0x0810b938  size 108
.thumb
.org 0x10b938
FUN_0810b938:
	push {r4, r5, lr}	@ 0010b938 30b5
.org 0x10b93a
	adds r4, r0, #0	@ 0010b93a 041c
.org 0x10b93c
	bl 0x1cc9c	@ 0010b93c 11f7aef9
.org 0x10b940
	ldrb r1, [r4, #10]	@ 0010b940 a17a
.org 0x10b942
	movs r0, #1	@ 0010b942 0120
.org 0x10b944
	movs r5, #0	@ 0010b944 0025
.org 0x10b946
	orrs r0, r1	@ 0010b946 0843
.org 0x10b948
	movs r1, #2	@ 0010b948 0221
.org 0x10b94a
	orrs r0, r1	@ 0010b94a 0843
.org 0x10b94c
	strb r0, [r4, #10]	@ 0010b94c a072
.org 0x10b94e
	adds r0, r4, #0	@ 0010b94e 201c
.org 0x10b950
	bl 0x1ceec	@ 0010b950 11f7ccfa
.org 0x10b954
	adds r2, r4, #0	@ 0010b954 221c
.org 0x10b956
	adds r2, #73	@ 0010b956 4932
.org 0x10b958
	ldrb r0, [r2, #0]	@ 0010b958 1078
.org 0x10b95a
	movs r1, #12	@ 0010b95a 0c21
.org 0x10b95c
	orrs r0, r1	@ 0010b95c 0843
.org 0x10b95e
	strb r0, [r2, #0]	@ 0010b95e 1070
.org 0x10b960
	adds r0, r4, #0	@ 0010b960 201c
.org 0x10b962
	adds r0, #76	@ 0010b962 4c30
.org 0x10b964
	strb r5, [r0, #0]	@ 0010b964 0570
.org 0x10b966
	adds r2, #1	@ 0010b966 0132
.org 0x10b968
	ldrb r1, [r2, #0]	@ 0010b968 1178
.org 0x10b96a
	movs r0, #17	@ 0010b96a 1120
.org 0x10b96c
	negs r0, r0	@ 0010b96c 4042
.org 0x10b96e
	ands r0, r1	@ 0010b96e 0840
.org 0x10b970
	strb r0, [r2, #0]	@ 0010b970 1070
.org 0x10b972
	ldrb r1, [r4, #10]	@ 0010b972 a17a
.org 0x10b974
	movs r0, #239	@ 0010b974 ef20
.org 0x10b976
	ands r0, r1	@ 0010b976 0840
.org 0x10b978
	strb r0, [r4, #10]	@ 0010b978 a072
.org 0x10b97a
	movs r0, #204	@ 0010b97a cc20
.org 0x10b97c
	lsls r0, r0, #9	@ 0010b97c 4002
.org 0x10b97e
	str r0, [r4, #84]	@ 0010b97e 6065
.org 0x10b980
	movs r0, #128	@ 0010b980 8020
.org 0x10b982
	lsls r0, r0, #6	@ 0010b982 8001
.org 0x10b984
	str r0, [r4, #88]	@ 0010b984 a065
.org 0x10b986
	ldr r1, [pc, #28]	@ 0010b986 0749
.org 0x10b988
	ldrb r0, [r4, #9]	@ 0010b988 607a
.org 0x10b98a
	lsls r0, r0, #2	@ 0010b98a 8000
.org 0x10b98c
	adds r0, r0, r1	@ 0010b98c 4018
.org 0x10b98e
	movs r1, #1	@ 0010b98e 0121
.org 0x10b990
	str r1, [r4, #12]	@ 0010b990 e160
.org 0x10b992
	ldr r0, [r0, #0]	@ 0010b992 0068
.org 0x10b994
	ldr r0, [r0, #4]	@ 0010b994 4068
.org 0x10b996
	str r0, [r4, #20]	@ 0010b996 6061
.org 0x10b998
	adds r0, r4, #0	@ 0010b998 201c
.org 0x10b99a
	bl 0x10b774	@ 0010b99a fff7ebfe
.org 0x10b99e
	pop {r4, r5}	@ 0010b99e 30bc
.org 0x10b9a0
	pop {r0}	@ 0010b9a0 01bc
.org 0x10b9a2
	bx r0	@ 0010b9a2 0047
