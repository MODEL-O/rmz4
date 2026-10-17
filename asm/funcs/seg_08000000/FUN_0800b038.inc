@ FUN_0800b038  entry 0x0800b038  size 174
.thumb
.org 0xb038
FUN_0800b038:
	push {r4, r5, lr}	@ 0000b038 30b5
.org 0xb03a
	adds r4, r0, #0	@ 0000b03a 041c
.org 0xb03c
	ldrb r3, [r4, #14]	@ 0000b03c a37b
.org 0xb03e
	cmp r3, #0	@ 0000b03e 002b
.org 0xb040
	bne.n 0xb06a	@ 0000b040 13d1
.org 0xb042
	ldr r1, [r4, #92]	@ 0000b042 e16d
.org 0xb044
	lsrs r1, r1, #4	@ 0000b044 0909
.org 0xb046
	lsls r1, r1, #1	@ 0000b046 4900
.org 0xb048
	ldr r0, [pc, #112]	@ 0000b048 1c48
.org 0xb04a
	adds r1, r1, r0	@ 0000b04a 0918
.org 0xb04c
	ldrh r2, [r1, #0]	@ 0000b04c 0a88
.org 0xb04e
	ldr r0, [pc, #112]	@ 0000b04e 1c48
.org 0xb050
	ands r0, r2	@ 0000b050 1040
.org 0xb052
	movs r2, #1	@ 0000b052 0122
.org 0xb054
	orrs r0, r2	@ 0000b054 1043
.org 0xb056
	strh r0, [r1, #0]	@ 0000b056 0880
.org 0xb058
	ldr r1, [pc, #104]	@ 0000b058 1a49
.org 0xb05a
	ldr r0, [pc, #108]	@ 0000b05a 1b48
.org 0xb05c
	strh r0, [r1, #0]	@ 0000b05c 0880
.org 0xb05e
	movs r0, #16	@ 0000b05e 1020
.org 0xb060
	strh r0, [r1, #2]	@ 0000b060 4880
.org 0xb062
	strh r3, [r4, #16]	@ 0000b062 2382
.org 0xb064
	ldrb r0, [r4, #14]	@ 0000b064 a07b
.org 0xb066
	adds r0, #1	@ 0000b066 0130
.org 0xb068
	strb r0, [r4, #14]	@ 0000b068 a073
.org 0xb06a
	ldrb r2, [r4, #14]	@ 0000b06a a27b
.org 0xb06c
	cmp r2, #1	@ 0000b06c 012a
.org 0xb06e
	bne.n 0xb0ea	@ 0000b06e 3cd1
.org 0xb070
	ldr r0, [pc, #88]	@ 0000b070 1648
.org 0xb072
	ldr r1, [pc, #92]	@ 0000b072 1749
.org 0xb074
	adds r0, r0, r1	@ 0000b074 4018
.org 0xb076
	ldrb r1, [r0, #0]	@ 0000b076 0178
.org 0xb078
	adds r0, r2, #0	@ 0000b078 101c
.org 0xb07a
	ands r0, r1	@ 0000b07a 0840
.org 0xb07c
	cmp r0, #0	@ 0000b07c 0028
.org 0xb07e
	beq.n 0xb0ea	@ 0000b07e 34d0
.org 0xb080
	ldrh r0, [r4, #16]	@ 0000b080 208a
.org 0xb082
	subs r0, #1	@ 0000b082 0138
.org 0xb084
	strh r0, [r4, #16]	@ 0000b084 2082
.org 0xb086
	ands r0, r2	@ 0000b086 1040
.org 0xb088
	cmp r0, #0	@ 0000b088 0028
.org 0xb08a
	bne.n 0xb0ea	@ 0000b08a 2ed1
.org 0xb08c
	ldr r3, [pc, #52]	@ 0000b08c 0d4b
.org 0xb08e
	ldrh r0, [r3, #2]	@ 0000b08e 5888
.org 0xb090
	movs r2, #31	@ 0000b090 1f22
.org 0xb092
	ands r2, r0	@ 0000b092 0240
.org 0xb094
	cmp r2, #0	@ 0000b094 002a
.org 0xb096
	beq.n 0xb0e6	@ 0000b096 26d0
.org 0xb098
	ldr r0, [pc, #56]	@ 0000b098 0e48
.org 0xb09a
	ldr r1, [pc, #60]	@ 0000b09a 0f49
.org 0xb09c
	adds r0, r0, r1	@ 0000b09c 4018
.org 0xb09e
	ldr r0, [r0, #0]	@ 0000b09e 0068
.org 0xb0a0
	ldr r1, [r0, #84]	@ 0000b0a0 416d
.org 0xb0a2
	ldr r0, [pc, #56]	@ 0000b0a2 0e48
.org 0xb0a4
	cmp r1, r0	@ 0000b0a4 8142
.org 0xb0a6
	bgt.n 0xb0e0	@ 0000b0a6 1bdc
.org 0xb0a8
	subs r1, r2, #1	@ 0000b0a8 511e
.org 0xb0aa
	movs r0, #31	@ 0000b0aa 1f20
.org 0xb0ac
	ands r1, r0	@ 0000b0ac 0140
.org 0xb0ae
	movs r0, #16	@ 0000b0ae 1020
.org 0xb0b0
	subs r0, r0, r2	@ 0000b0b0 801a
.org 0xb0b2
	lsls r0, r0, #8	@ 0000b0b2 0002
.org 0xb0b4
	orrs r1, r0	@ 0000b0b4 0143
.org 0xb0b6
	strh r1, [r3, #2]	@ 0000b0b6 5980
.org 0xb0b8
	b.n 0xb0ea	@ 0000b0b8 17e0
.org 0xb0ba
	.byte 0x00	@ 0000b0ba data
.org 0xb0bb
	.byte 0x00	@ 0000b0bb data
.org 0xb0bc
	.byte 0x04,0x0a,0x00,0x02	@ 0000b0bc data
.org 0xb0c0
	.byte 0xfc,0xff,0x00,0x00	@ 0000b0c0 data
.org 0xb0c4
	.byte 0x40,0x0a,0x00,0x02	@ 0000b0c4 data
.org 0xb0c8
	.byte 0x48,0x37,0x00,0x00	@ 0000b0c8 data
.org 0xb0cc
	.byte 0xb0,0x0a,0x00,0x02	@ 0000b0cc data
.org 0xb0d0
	.byte 0x25,0xd0,0x02,0x00	@ 0000b0d0 data
.org 0xb0d4
	.byte 0x10,0xf6,0x02,0x02	@ 0000b0d4 data
.org 0xb0d8
	.byte 0xa8,0x63,0x00,0x00	@ 0000b0d8 data
.org 0xb0dc
	.byte 0xff,0x5f,0x1c,0x00	@ 0000b0dc data
.org 0xb0e0
	movs r0, #128	@ 0000b0e0 8020
.org 0xb0e2
	lsls r0, r0, #5	@ 0000b0e2 4001
.org 0xb0e4
	strh r0, [r3, #2]	@ 0000b0e4 5880
