@ FUN_080af034  entry 0x080af034  size 122
.thumb
.org 0xaf034
FUN_080af034:
	push {r4, lr}	@ 000af034 10b5
.org 0xaf036
	adds r4, r0, #0	@ 000af036 041c
.org 0xaf038
	ldrb r0, [r4, #15]	@ 000af038 e07b
.org 0xaf03a
	cmp r0, #0	@ 000af03a 0028
.org 0xaf03c
	bne.n 0xaf060	@ 000af03c 10d1
.org 0xaf03e
	ldr r1, [pc, #56]	@ 000af03e 0e49
.org 0xaf040
	adds r0, r4, #0	@ 000af040 201c
.org 0xaf042
	bl 0x1cf00	@ 000af042 6df75dff
.org 0xaf046
	adds r1, r4, #0	@ 000af046 211c
.org 0xaf048
	adds r1, #84	@ 000af048 5431
.org 0xaf04a
	movs r0, #1	@ 000af04a 0120
.org 0xaf04c
	bl 0xd0c88	@ 000af04c 21f01cfe
.org 0xaf050
	movs r0, #42	@ 000af050 2a20
.org 0xaf052
	bl 0x2b10	@ 000af052 53f75dfd
.org 0xaf056
	movs r0, #8	@ 000af056 0820
.org 0xaf058
	strb r0, [r4, #18]	@ 000af058 a074
.org 0xaf05a
	ldrb r0, [r4, #15]	@ 000af05a e07b
.org 0xaf05c
	adds r0, #1	@ 000af05c 0130
.org 0xaf05e
	strb r0, [r4, #15]	@ 000af05e e073
.org 0xaf060
	adds r0, r4, #0	@ 000af060 201c
.org 0xaf062
	bl 0x1cff0	@ 000af062 6df7c5ff
.org 0xaf066
	ldrb r1, [r4, #18]	@ 000af066 a17c
.org 0xaf068
	movs r0, #1	@ 000af068 0120
.org 0xaf06a
	ands r0, r1	@ 000af06a 0840
.org 0xaf06c
	cmp r0, #0	@ 000af06c 0028
.org 0xaf06e
	beq.n 0xaf07c	@ 000af06e 05d0
.org 0xaf070
	ldrb r1, [r4, #10]	@ 000af070 a17a
.org 0xaf072
	movs r0, #1	@ 000af072 0120
.org 0xaf074
	orrs r0, r1	@ 000af074 0843
.org 0xaf076
	b.n 0xaf082	@ 000af076 04e0
.org 0xaf078
	.byte 0x02,0xd6,0x00,0x00	@ 000af078 data
.org 0xaf07c
	ldrb r1, [r4, #10]	@ 000af07c a17a
.org 0xaf07e
	movs r0, #254	@ 000af07e fe20
.org 0xaf080
	ands r0, r1	@ 000af080 0840
.org 0xaf082
	strb r0, [r4, #10]	@ 000af082 a072
.org 0xaf084
	ldrb r0, [r4, #18]	@ 000af084 a07c
.org 0xaf086
	subs r0, #1	@ 000af086 0138
.org 0xaf088
	strb r0, [r4, #18]	@ 000af088 a074
.org 0xaf08a
	lsls r0, r0, #24	@ 000af08a 0006
.org 0xaf08c
	lsrs r0, r0, #24	@ 000af08c 000e
.org 0xaf08e
	cmp r0, #255	@ 000af08e ff28
.org 0xaf090
	bne.n 0xaf0ac	@ 000af090 0cd1
.org 0xaf092
	ldrb r1, [r4, #10]	@ 000af092 a17a
.org 0xaf094
	movs r0, #254	@ 000af094 fe20
.org 0xaf096
	ands r0, r1	@ 000af096 0840
.org 0xaf098
	strb r0, [r4, #10]	@ 000af098 a072
.org 0xaf09a
	ldr r1, [pc, #24]	@ 000af09a 0649
.org 0xaf09c
	ldrb r0, [r4, #9]	@ 000af09c 607a
.org 0xaf09e
	lsls r0, r0, #2	@ 000af09e 8000
.org 0xaf0a0
	adds r0, r0, r1	@ 000af0a0 4018
.org 0xaf0a2
	movs r1, #4	@ 000af0a2 0421
.org 0xaf0a4
	str r1, [r4, #12]	@ 000af0a4 e160
.org 0xaf0a6
	ldr r0, [r0, #0]	@ 000af0a6 0068
.org 0xaf0a8
	ldr r0, [r0, #16]	@ 000af0a8 0069
.org 0xaf0aa
	str r0, [r4, #20]	@ 000af0aa 6061
.org 0xaf0ac
	pop {r4}	@ 000af0ac 10bc
