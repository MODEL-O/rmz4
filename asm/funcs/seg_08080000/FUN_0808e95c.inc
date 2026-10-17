@ FUN_0808e95c  entry 0x0808e95c  size 104
.thumb
.org 0x8e95c
FUN_0808e95c:
	push {r4, r5, lr}	@ 0008e95c 30b5
.org 0x8e95e
	adds r5, r0, #0	@ 0008e95e 051c
.org 0x8e960
	ldrb r4, [r5, #17]	@ 0008e960 6c7c
.org 0x8e962
	bl 0x1ce54	@ 0008e962 8ef777fa
.org 0x8e966
	cmp r4, #0	@ 0008e966 002c
.org 0x8e968
	beq.n 0x8e972	@ 0008e968 03d0
.org 0x8e96a
	ldrb r1, [r5, #10]	@ 0008e96a a97a
.org 0x8e96c
	movs r0, #16	@ 0008e96c 1020
.org 0x8e96e
	orrs r0, r1	@ 0008e96e 0843
.org 0x8e970
	b.n 0x8e978	@ 0008e970 02e0
.org 0x8e972
	ldrb r1, [r5, #10]	@ 0008e972 a97a
.org 0x8e974
	movs r0, #239	@ 0008e974 ef20
.org 0x8e976
	ands r0, r1	@ 0008e976 0840
.org 0x8e978
	strb r0, [r5, #10]	@ 0008e978 a872
.org 0x8e97a
	movs r1, #1	@ 0008e97a 0121
.org 0x8e97c
	ands r1, r4	@ 0008e97c 2140
.org 0x8e97e
	adds r0, r5, #0	@ 0008e97e 281c
.org 0x8e980
	adds r0, #76	@ 0008e980 4c30
.org 0x8e982
	movs r3, #0	@ 0008e982 0023
.org 0x8e984
	strb r1, [r0, #0]	@ 0008e984 0170
.org 0x8e986
	adds r4, r5, #0	@ 0008e986 2c1c
.org 0x8e988
	adds r4, #74	@ 0008e988 4a34
.org 0x8e98a
	lsls r1, r1, #4	@ 0008e98a 0901
.org 0x8e98c
	ldrb r2, [r4, #0]	@ 0008e98c 2278
.org 0x8e98e
	movs r0, #17	@ 0008e98e 1120
.org 0x8e990
	negs r0, r0	@ 0008e990 4042
.org 0x8e992
	ands r0, r2	@ 0008e992 1040
.org 0x8e994
	orrs r0, r1	@ 0008e994 0843
.org 0x8e996
	strb r0, [r4, #0]	@ 0008e996 2070
.org 0x8e998
	adds r2, r5, #0	@ 0008e998 2a1c
.org 0x8e99a
	adds r2, #73	@ 0008e99a 4932
.org 0x8e99c
	ldrb r0, [r2, #0]	@ 0008e99c 1078
.org 0x8e99e
	movs r1, #12	@ 0008e99e 0c21
.org 0x8e9a0
	orrs r0, r1	@ 0008e9a0 0843
.org 0x8e9a2
	strb r0, [r2, #0]	@ 0008e9a2 1070
.org 0x8e9a4
	adds r1, r5, #0	@ 0008e9a4 291c
.org 0x8e9a6
	adds r1, #37	@ 0008e9a6 2531
.org 0x8e9a8
	movs r0, #24	@ 0008e9a8 1820
.org 0x8e9aa
	strb r0, [r1, #0]	@ 0008e9aa 0870
.org 0x8e9ac
	adds r0, r5, #0	@ 0008e9ac 281c
.org 0x8e9ae
	adds r0, #36	@ 0008e9ae 2430
.org 0x8e9b0
	strb r3, [r0, #0]	@ 0008e9b0 0370
.org 0x8e9b2
	adds r0, #44	@ 0008e9b2 2c30
.org 0x8e9b4
	movs r1, #128	@ 0008e9b4 8021
.org 0x8e9b6
	lsls r1, r1, #1	@ 0008e9b6 4900
.org 0x8e9b8
	strh r1, [r0, #0]	@ 0008e9b8 0180
.org 0x8e9ba
	adds r0, #2	@ 0008e9ba 0230
.org 0x8e9bc
	strh r1, [r0, #0]	@ 0008e9bc 0180
.org 0x8e9be
	pop {r4, r5}	@ 0008e9be 30bc
.org 0x8e9c0
	pop {r0}	@ 0008e9c0 01bc
.org 0x8e9c2
	bx r0	@ 0008e9c2 0047
