@ FUN_0801e944  entry 0x0801e944  size 104
.thumb
.org 0x1e944
FUN_0801e944:
	push {r4, lr}	@ 0001e944 10b5
.org 0x1e946
	adds r2, r0, #0	@ 0001e946 021c
.org 0x1e948
	movs r0, #0	@ 0001e948 0020
.org 0x1e94a
	movs r1, #2	@ 0001e94a 0221
.org 0x1e94c
	strb r1, [r2, #0]	@ 0001e94c 1170
.org 0x1e94e
	strb r0, [r2, #1]	@ 0001e94e 5070
.org 0x1e950
	strb r0, [r2, #2]	@ 0001e950 9070
.org 0x1e952
	strb r0, [r2, #3]	@ 0001e952 d070
.org 0x1e954
	strb r0, [r2, #6]	@ 0001e954 9071
.org 0x1e956
	strb r0, [r2, #4]	@ 0001e956 1071
.org 0x1e958
	strb r0, [r2, #5]	@ 0001e958 5071
.org 0x1e95a
	strb r0, [r2, #7]	@ 0001e95a d071
.org 0x1e95c
	movs r1, #0	@ 0001e95c 0021
.org 0x1e95e
	strh r0, [r2, #14]	@ 0001e95e d081
.org 0x1e960
	strh r0, [r2, #12]	@ 0001e960 9081
.org 0x1e962
	str r0, [r2, #8]	@ 0001e962 9060
.org 0x1e964
	strb r1, [r2, #20]	@ 0001e964 1175
.org 0x1e966
	strb r1, [r2, #21]	@ 0001e966 5175
.org 0x1e968
	str r0, [r2, #16]	@ 0001e968 1061
.org 0x1e96a
	adds r0, r2, #0	@ 0001e96a 101c
.org 0x1e96c
	adds r0, #66	@ 0001e96c 4230
.org 0x1e96e
	strb r1, [r0, #0]	@ 0001e96e 0170
.org 0x1e970
	movs r3, #0	@ 0001e970 0023
.org 0x1e972
	movs r1, #19	@ 0001e972 1321
.org 0x1e974
	subs r0, #25	@ 0001e974 1938
.org 0x1e976
	strb r3, [r0, #0]	@ 0001e976 0370
.org 0x1e978
	subs r0, #1	@ 0001e978 0138
.org 0x1e97a
	subs r1, #1	@ 0001e97a 0139
.org 0x1e97c
	cmp r1, #0	@ 0001e97c 0029
.org 0x1e97e
	bge.n 0x1e976	@ 0001e97e fada
.org 0x1e980
	adds r4, r2, #0	@ 0001e980 141c
.org 0x1e982
	adds r4, #50	@ 0001e982 3234
.org 0x1e984
	adds r1, r2, #0	@ 0001e984 111c
.org 0x1e986
	adds r1, #42	@ 0001e986 2a31
.org 0x1e988
	movs r3, #0	@ 0001e988 0023
.org 0x1e98a
	adds r0, r2, #0	@ 0001e98a 101c
.org 0x1e98c
	adds r0, #49	@ 0001e98c 3130
.org 0x1e98e
	strb r3, [r0, #0]	@ 0001e98e 0370
.org 0x1e990
	subs r0, #1	@ 0001e990 0138
.org 0x1e992
	cmp r0, r1	@ 0001e992 8842
.org 0x1e994
	bge.n 0x1e98e	@ 0001e994 fbda
.org 0x1e996
	adds r1, r4, #0	@ 0001e996 211c
.org 0x1e998
	movs r2, #0	@ 0001e998 0022
.org 0x1e99a
	adds r0, r1, #0	@ 0001e99a 081c
.org 0x1e99c
	adds r0, #15	@ 0001e99c 0f30
.org 0x1e99e
	strb r2, [r0, #0]	@ 0001e99e 0270
.org 0x1e9a0
	subs r0, #1	@ 0001e9a0 0138
.org 0x1e9a2
	cmp r0, r1	@ 0001e9a2 8842
.org 0x1e9a4
	bge.n 0x1e99e	@ 0001e9a4 fbda
.org 0x1e9a6
	pop {r4}	@ 0001e9a6 10bc
.org 0x1e9a8
	pop {r0}	@ 0001e9a8 01bc
.org 0x1e9aa
	bx r0	@ 0001e9aa 0047
