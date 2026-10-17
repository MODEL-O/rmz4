@ FUN_0809d024  entry 0x0809d024  size 272
.thumb
.org 0x9d024
FUN_0809d024:
	push {r4, r5, r6, lr}	@ 0009d024 70b5
.org 0x9d026
	adds r5, r0, #0	@ 0009d026 051c
.org 0x9d028
	ldr r6, [r5, #40]	@ 0009d028 ae6a
.org 0x9d02a
	ldr r1, [pc, #56]	@ 0009d02a 0e49
.org 0x9d02c
	ldrb r0, [r5, #9]	@ 0009d02c 687a
.org 0x9d02e
	lsls r0, r0, #2	@ 0009d02e 8000
.org 0x9d030
	adds r0, r0, r1	@ 0009d030 4018
.org 0x9d032
	movs r1, #1	@ 0009d032 0121
.org 0x9d034
	str r1, [r5, #12]	@ 0009d034 e960
.org 0x9d036
	ldr r0, [r0, #0]	@ 0009d036 0068
.org 0x9d038
	ldr r0, [r0, #4]	@ 0009d038 4068
.org 0x9d03a
	str r0, [r5, #20]	@ 0009d03a 6861
.org 0x9d03c
	adds r0, r5, #0	@ 0009d03c 281c
.org 0x9d03e
	bl 0x1cc9c	@ 0009d03e 7ff72dfe
.org 0x9d042
	adds r0, r5, #0	@ 0009d042 281c
.org 0x9d044
	bl 0x1ceec	@ 0009d044 7ff752ff
.org 0x9d048
	ldrb r1, [r5, #10]	@ 0009d048 a97a
.org 0x9d04a
	movs r0, #1	@ 0009d04a 0120
.org 0x9d04c
	orrs r0, r1	@ 0009d04c 0843
.org 0x9d04e
	movs r1, #2	@ 0009d04e 0221
.org 0x9d050
	orrs r0, r1	@ 0009d050 0843
.org 0x9d052
	strb r0, [r5, #10]	@ 0009d052 a872
.org 0x9d054
	ldrb r0, [r5, #17]	@ 0009d054 687c
.org 0x9d056
	cmp r0, #0	@ 0009d056 0028
.org 0x9d058
	beq.n 0x9d06c	@ 0009d058 08d0
.org 0x9d05a
	ldr r1, [pc, #12]	@ 0009d05a 0349
.org 0x9d05c
	adds r0, r5, #0	@ 0009d05c 281c
.org 0x9d05e
	bl 0x1cf00	@ 0009d05e 7ff74fff
.org 0x9d062
	b.n 0x9d074	@ 0009d062 07e0
.org 0x9d064
	.byte 0x40,0xdb,0x85,0x08	@ 0009d064 data
.org 0x9d068
	.byte 0x25,0xa9,0x00,0x00	@ 0009d068 data
.org 0x9d06c
	ldr r1, [pc, #24]	@ 0009d06c 0649
.org 0x9d06e
	adds r0, r5, #0	@ 0009d06e 281c
.org 0x9d070
	bl 0x1cf00	@ 0009d070 7ff746ff
.org 0x9d074
	ldrb r0, [r6, #10]	@ 0009d074 b07a
.org 0x9d076
	lsrs r2, r0, #4	@ 0009d076 0209
.org 0x9d078
	movs r0, #1	@ 0009d078 0120
.org 0x9d07a
	ands r2, r0	@ 0009d07a 0240
.org 0x9d07c
	cmp r2, #0	@ 0009d07c 002a
.org 0x9d07e
	beq.n 0x9d08c	@ 0009d07e 05d0
.org 0x9d080
	ldrb r1, [r5, #10]	@ 0009d080 a97a
.org 0x9d082
	movs r0, #16	@ 0009d082 1020
.org 0x9d084
	orrs r0, r1	@ 0009d084 0843
.org 0x9d086
	b.n 0x9d092	@ 0009d086 04e0
.org 0x9d088
	.byte 0x19,0xa9,0x00,0x00	@ 0009d088 data
.org 0x9d08c
	ldrb r1, [r5, #10]	@ 0009d08c a97a
.org 0x9d08e
	movs r0, #239	@ 0009d08e ef20
.org 0x9d090
	ands r0, r1	@ 0009d090 0840
.org 0x9d092
	strb r0, [r5, #10]	@ 0009d092 a872
.org 0x9d094
	movs r4, #1	@ 0009d094 0124
.org 0x9d096
	adds r1, r4, #0	@ 0009d096 211c
.org 0x9d098
	ands r1, r2	@ 0009d098 1140
.org 0x9d09a
	adds r0, r5, #0	@ 0009d09a 281c
.org 0x9d09c
	adds r0, #76	@ 0009d09c 4c30
.org 0x9d09e
	strb r1, [r0, #0]	@ 0009d09e 0170
.org 0x9d0a0
	adds r3, r5, #0	@ 0009d0a0 2b1c
.org 0x9d0a2
	adds r3, #74	@ 0009d0a2 4a33
.org 0x9d0a4
	lsls r1, r1, #4	@ 0009d0a4 0901
.org 0x9d0a6
	ldrb r2, [r3, #0]	@ 0009d0a6 1a78
.org 0x9d0a8
	movs r0, #17	@ 0009d0a8 1120
.org 0x9d0aa
	negs r0, r0	@ 0009d0aa 4042
.org 0x9d0ac
	ands r0, r2	@ 0009d0ac 1040
.org 0x9d0ae
	orrs r0, r1	@ 0009d0ae 0843
.org 0x9d0b0
	strb r0, [r3, #0]	@ 0009d0b0 1870
.org 0x9d0b2
	ldrb r0, [r6, #10]	@ 0009d0b2 b07a
.org 0x9d0b4
	lsrs r2, r0, #5	@ 0009d0b4 4209
.org 0x9d0b6
	ands r2, r4	@ 0009d0b6 2240
.org 0x9d0b8
	cmp r2, #0	@ 0009d0b8 002a
.org 0x9d0ba
	beq.n 0x9d0c4	@ 0009d0ba 03d0
.org 0x9d0bc
	ldrb r0, [r5, #10]	@ 0009d0bc a87a
.org 0x9d0be
	movs r1, #32	@ 0009d0be 2021
.org 0x9d0c0
	orrs r0, r1	@ 0009d0c0 0843
.org 0x9d0c2
	b.n 0x9d0ca	@ 0009d0c2 02e0
.org 0x9d0c4
	ldrb r1, [r5, #10]	@ 0009d0c4 a97a
.org 0x9d0c6
	movs r0, #223	@ 0009d0c6 df20
.org 0x9d0c8
	ands r0, r1	@ 0009d0c8 0840
.org 0x9d0ca
	strb r0, [r5, #10]	@ 0009d0ca a872
.org 0x9d0cc
	adds r1, r2, #0	@ 0009d0cc 111c
.org 0x9d0ce
	adds r2, r5, #0	@ 0009d0ce 2a1c
.org 0x9d0d0
	adds r2, #77	@ 0009d0d0 4d32
.org 0x9d0d2
	strb r1, [r2, #0]	@ 0009d0d2 1170
.org 0x9d0d4
	lsls r1, r1, #5	@ 0009d0d4 4901
.org 0x9d0d6
	ldrb r2, [r3, #0]	@ 0009d0d6 1a78
.org 0x9d0d8
	movs r0, #33	@ 0009d0d8 2120
.org 0x9d0da
	negs r0, r0	@ 0009d0da 4042
.org 0x9d0dc
	ands r0, r2	@ 0009d0dc 1040
.org 0x9d0de
	orrs r0, r1	@ 0009d0de 0843
.org 0x9d0e0
	strb r0, [r3, #0]	@ 0009d0e0 1870
.org 0x9d0e2
	ldrb r1, [r5, #11]	@ 0009d0e2 e97a
.org 0x9d0e4
	movs r0, #16	@ 0009d0e4 1020
.org 0x9d0e6
	orrs r0, r1	@ 0009d0e6 0843
.org 0x9d0e8
	strb r0, [r5, #11]	@ 0009d0e8 e872
.org 0x9d0ea
	ldrb r0, [r6, #28]	@ 0009d0ea 307f
.org 0x9d0ec
	strb r0, [r5, #29]	@ 0009d0ec 6877
.org 0x9d0ee
	ldrb r1, [r5, #10]	@ 0009d0ee a97a
.org 0x9d0f0
	movs r0, #16	@ 0009d0f0 1020
.org 0x9d0f2
	ands r0, r1	@ 0009d0f2 0840
.org 0x9d0f4
	cmp r0, #0	@ 0009d0f4 0028
.org 0x9d0f6
	beq.n 0x9d10a	@ 0009d0f6 08d0
.org 0x9d0f8
	ldrb r0, [r5, #17]	@ 0009d0f8 687c
.org 0x9d0fa
	adds r1, r0, #0	@ 0009d0fa 011c
.org 0x9d0fc
	cmp r1, #0	@ 0009d0fc 0029
.org 0x9d0fe
	bne.n 0x9d11c	@ 0009d0fe 0dd1
.org 0x9d100
	movs r0, #128	@ 0009d100 8020
.org 0x9d102
	negs r0, r0	@ 0009d102 4042
.org 0x9d104
	str r0, [r5, #92]	@ 0009d104 e865
.org 0x9d106
	movs r0, #2	@ 0009d106 0220
.org 0x9d108
	b.n 0x9d122	@ 0009d108 0be0
.org 0x9d10a
	ldrb r0, [r5, #17]	@ 0009d10a 687c
.org 0x9d10c
	adds r1, r0, #0	@ 0009d10c 011c
.org 0x9d10e
	cmp r1, #0	@ 0009d10e 0029
.org 0x9d110
	beq.n 0x9d11c	@ 0009d110 04d0
.org 0x9d112
	movs r0, #128	@ 0009d112 8020
.org 0x9d114
	negs r0, r0	@ 0009d114 4042
.org 0x9d116
	str r0, [r5, #92]	@ 0009d116 e865
.org 0x9d118
	movs r0, #2	@ 0009d118 0220
.org 0x9d11a
	b.n 0x9d122	@ 0009d11a 02e0
.org 0x9d11c
	movs r0, #128	@ 0009d11c 8020
.org 0x9d11e
	str r0, [r5, #92]	@ 0009d11e e865
.org 0x9d120
	subs r0, #130	@ 0009d120 8238
.org 0x9d122
	str r0, [r5, #100]	@ 0009d122 6866
.org 0x9d124
	adds r0, r1, #0	@ 0009d124 081c
.org 0x9d126
	cmp r0, #0	@ 0009d126 0028
.org 0x9d128
	beq.n 0x9d132	@ 0009d128 03d0
.org 0x9d12a
	movs r0, #64	@ 0009d12a 4020
.org 0x9d12c
	str r0, [r5, #96]	@ 0009d12c 2866
.org 0x9d12e
	subs r0, #65	@ 0009d12e 4138
.org 0x9d130
	b.n 0x9d134	@ 0009d130 00e0
.org 0x9d132
	str r0, [r5, #96]	@ 0009d132 2866
