@ FUN_0804d94c  entry 0x0804d94c  size 134
.thumb
.org 0x4d94c
FUN_0804d94c:
	push {r4, r5, lr}	@ 0004d94c 30b5
.org 0x4d94e
	adds r4, r0, #0	@ 0004d94e 041c
.org 0x4d950
	lsls r1, r1, #24	@ 0004d950 0906
.org 0x4d952
	lsrs r5, r1, #24	@ 0004d952 0d0e
.org 0x4d954
	ldr r0, [pc, #64]	@ 0004d954 1048
.org 0x4d956
	ldr r0, [r0, #0]	@ 0004d956 0068
.org 0x4d958
	bl 0x5500	@ 0004d958 b7f7d2fd
.org 0x4d95c
	adds r2, r0, #0	@ 0004d95c 021c
.org 0x4d95e
	cmp r2, #0	@ 0004d95e 002a
.org 0x4d960
	beq.n 0x4d9dc	@ 0004d960 3cd0
.org 0x4d962
	adds r0, r4, #0	@ 0004d962 201c
.org 0x4d964
	adds r0, #248	@ 0004d964 f830
.org 0x4d966
	ldrb r0, [r0, #0]	@ 0004d966 0078
.org 0x4d968
	cmp r0, #2	@ 0004d968 0228
.org 0x4d96a
	bne.n 0x4d9a8	@ 0004d96a 1dd1
.org 0x4d96c
	ldr r0, [pc, #44]	@ 0004d96c 0b48
.org 0x4d96e
	movs r1, #50	@ 0004d96e 3221
.org 0x4d970
	strb r1, [r2, #9]	@ 0004d970 5172
.org 0x4d972
	adds r0, #200	@ 0004d972 c830
.org 0x4d974
	ldr r0, [r0, #0]	@ 0004d974 0068
.org 0x4d976
	ldr r0, [r0, #0]	@ 0004d976 0068
.org 0x4d978
	str r0, [r2, #20]	@ 0004d978 5061
.org 0x4d97a
	ldrb r1, [r2, #11]	@ 0004d97a d17a
.org 0x4d97c
	movs r0, #191	@ 0004d97c bf20
.org 0x4d97e
	ands r0, r1	@ 0004d97e 0840
.org 0x4d980
	strb r0, [r2, #11]	@ 0004d980 d072
.org 0x4d982
	adds r1, r2, #0	@ 0004d982 111c
.org 0x4d984
	adds r1, #37	@ 0004d984 2531
.org 0x4d986
	movs r0, #16	@ 0004d986 1020
.org 0x4d988
	strb r0, [r1, #0]	@ 0004d988 0870
.org 0x4d98a
	ldr r0, [pc, #20]	@ 0004d98a 0548
.org 0x4d98c
	ldrh r0, [r0, #0]	@ 0004d98c 0088
.org 0x4d98e
	strh r0, [r2, #32]	@ 0004d98e 1084
.org 0x4d990
	ldr r0, [pc, #16]	@ 0004d990 0448
.org 0x4d992
	ldrb r0, [r0, #0]	@ 0004d992 0078
.org 0x4d994
	b.n 0x4d9d0	@ 0004d994 1ce0
.org 0x4d996
	.byte 0x00	@ 0004d996 data
.org 0x4d997
	.byte 0x00	@ 0004d997 data
.org 0x4d998
	.byte 0x88,0xed,0x02,0x02	@ 0004d998 data
.org 0x4d99c
	.byte 0xf8,0x39,0x85,0x08	@ 0004d99c data
.org 0x4d9a0
	.byte 0xfc,0x36,0x85,0x08	@ 0004d9a0 data
.org 0x4d9a4
	.byte 0x04,0x37,0x85,0x08	@ 0004d9a4 data
.org 0x4d9a8
	ldr r0, [pc, #56]	@ 0004d9a8 0e48
.org 0x4d9aa
	movs r1, #50	@ 0004d9aa 3221
.org 0x4d9ac
	strb r1, [r2, #9]	@ 0004d9ac 5172
.org 0x4d9ae
	adds r0, #200	@ 0004d9ae c830
.org 0x4d9b0
	ldr r0, [r0, #0]	@ 0004d9b0 0068
.org 0x4d9b2
	ldr r0, [r0, #0]	@ 0004d9b2 0068
.org 0x4d9b4
	str r0, [r2, #20]	@ 0004d9b4 5061
.org 0x4d9b6
	ldrb r1, [r2, #11]	@ 0004d9b6 d17a
.org 0x4d9b8
	movs r0, #191	@ 0004d9b8 bf20
.org 0x4d9ba
	ands r0, r1	@ 0004d9ba 0840
.org 0x4d9bc
	strb r0, [r2, #11]	@ 0004d9bc d072
.org 0x4d9be
	adds r1, r2, #0	@ 0004d9be 111c
.org 0x4d9c0
	adds r1, #37	@ 0004d9c0 2531
.org 0x4d9c2
	movs r0, #16	@ 0004d9c2 1020
.org 0x4d9c4
	strb r0, [r1, #0]	@ 0004d9c4 0870
.org 0x4d9c6
	ldr r0, [pc, #32]	@ 0004d9c6 0848
.org 0x4d9c8
	ldrh r0, [r0, #2]	@ 0004d9c8 4088
.org 0x4d9ca
	strh r0, [r2, #32]	@ 0004d9ca 1084
.org 0x4d9cc
	ldr r0, [pc, #28]	@ 0004d9cc 0748
.org 0x4d9ce
	ldrb r0, [r0, #1]	@ 0004d9ce 4078
.org 0x4d9d0
	subs r1, #3	@ 0004d9d0 0339
