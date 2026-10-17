@ FUN_0801b94c  entry 0x0801b94c  size 88
.thumb
.org 0x1b94c
FUN_0801b94c:
	push {r4, r5, lr}	@ 0001b94c 30b5
.org 0x1b94e
	adds r4, r0, #0	@ 0001b94e 041c
.org 0x1b950
	ldrb r5, [r4, #14]	@ 0001b950 a57b
.org 0x1b952
	cmp r5, #0	@ 0001b952 002d
.org 0x1b954
	bne.n 0x1b986	@ 0001b954 17d1
.org 0x1b956
	ldr r1, [r4, #92]	@ 0001b956 e16d
.org 0x1b958
	lsrs r1, r1, #4	@ 0001b958 0909
.org 0x1b95a
	lsls r1, r1, #1	@ 0001b95a 4900
.org 0x1b95c
	ldr r0, [pc, #68]	@ 0001b95c 1148
.org 0x1b95e
	adds r1, r1, r0	@ 0001b95e 0918
.org 0x1b960
	ldrh r2, [r1, #0]	@ 0001b960 0a88
.org 0x1b962
	ldr r0, [pc, #68]	@ 0001b962 1148
.org 0x1b964
	ands r0, r2	@ 0001b964 1040
.org 0x1b966
	movs r2, #2	@ 0001b966 0222
.org 0x1b968
	orrs r0, r2	@ 0001b968 1043
.org 0x1b96a
	strh r0, [r1, #0]	@ 0001b96a 0880
.org 0x1b96c
	str r5, [r4, #76]	@ 0001b96c e564
.org 0x1b96e
	str r5, [r4, #80]	@ 0001b96e 2565
.org 0x1b970
	movs r0, #0	@ 0001b970 0020
.org 0x1b972
	movs r1, #0	@ 0001b972 0021
.org 0x1b974
	movs r2, #0	@ 0001b974 0022
.org 0x1b976
	bl 0x1040c0	@ 0001b976 e8f0a3fb
.org 0x1b97a
	str r0, [r4, #104]	@ 0001b97a a066
.org 0x1b97c
	strh r5, [r4, #16]	@ 0001b97c 2582
.org 0x1b97e
	strh r5, [r4, #18]	@ 0001b97e 6582
.org 0x1b980
	ldrb r0, [r4, #14]	@ 0001b980 a07b
.org 0x1b982
	adds r0, #1	@ 0001b982 0130
.org 0x1b984
	strb r0, [r4, #14]	@ 0001b984 a073
.org 0x1b986
	ldrh r0, [r4, #16]	@ 0001b986 208a
.org 0x1b988
	adds r0, #1	@ 0001b988 0130
.org 0x1b98a
	movs r1, #3	@ 0001b98a 0321
.org 0x1b98c
	bl 0x129050	@ 0001b98c 0df160fb
.org 0x1b990
	strh r0, [r4, #16]	@ 0001b990 2082
.org 0x1b992
	subs r0, #1	@ 0001b992 0138
.org 0x1b994
	lsls r0, r0, #16	@ 0001b994 0004
.org 0x1b996
	asrs r0, r0, #16	@ 0001b996 0014
.org 0x1b998
	ldr r1, [r4, #80]	@ 0001b998 216d
.org 0x1b99a
	adds r1, r1, r0	@ 0001b99a 0918
.org 0x1b99c
	str r1, [r4, #80]	@ 0001b99c 2165
.org 0x1b99e
	pop {r4, r5}	@ 0001b99e 30bc
.org 0x1b9a0
	pop {r0}	@ 0001b9a0 01bc
.org 0x1b9a2
	bx r0	@ 0001b9a2 0047
