@ FUN_0809b040  entry 0x0809b040  size 146
.thumb
.org 0x9b040
FUN_0809b040:
	push {r4, lr}	@ 0009b040 10b5
.org 0x9b042
	sub sp, #4	@ 0009b042 81b0
.org 0x9b044
	adds r4, r0, #0	@ 0009b044 041c
.org 0x9b046
	ldr r1, [pc, #88]	@ 0009b046 1649
.org 0x9b048
	mov r0, sp	@ 0009b048 6846
.org 0x9b04a
	movs r2, #3	@ 0009b04a 0322
.org 0x9b04c
	bl 0x129258	@ 0009b04c 8ef004f9
.org 0x9b050
	ldr r3, [r4, #40]	@ 0009b050 a36a
.org 0x9b052
	adds r0, r4, #0	@ 0009b052 201c
.org 0x9b054
	adds r0, #140	@ 0009b054 8c30
.org 0x9b056
	ldr r1, [r0, #0]	@ 0009b056 0168
.org 0x9b058
	movs r0, #128	@ 0009b058 8020
.org 0x9b05a
	lsls r0, r0, #2	@ 0009b05a 8000
.org 0x9b05c
	ands r0, r1	@ 0009b05c 0840
.org 0x9b05e
	cmp r0, #0	@ 0009b05e 0028
.org 0x9b060
	bne.n 0x9b072	@ 0009b060 07d1
.org 0x9b062
	adds r0, r4, #0	@ 0009b062 201c
.org 0x9b064
	adds r0, #181	@ 0009b064 b530
.org 0x9b066
	ldrb r2, [r0, #0]	@ 0009b066 0278
.org 0x9b068
	cmp r2, #0	@ 0009b068 002a
.org 0x9b06a
	bne.n 0x9b072	@ 0009b06a 02d1
.org 0x9b06c
	ldrb r0, [r3, #12]	@ 0009b06c 187b
.org 0x9b06e
	cmp r0, #1	@ 0009b06e 0128
.org 0x9b070
	bls.n 0x9b0a8	@ 0009b070 1ad9
.org 0x9b072
	ldr r1, [pc, #48]	@ 0009b072 0c49
.org 0x9b074
	ldrb r0, [r4, #9]	@ 0009b074 607a
.org 0x9b076
	lsls r0, r0, #2	@ 0009b076 8000
.org 0x9b078
	adds r0, r0, r1	@ 0009b078 4018
.org 0x9b07a
	movs r1, #2	@ 0009b07a 0221
.org 0x9b07c
	str r1, [r4, #12]	@ 0009b07c e160
.org 0x9b07e
	ldr r0, [r0, #0]	@ 0009b07e 0068
.org 0x9b080
	ldr r0, [r0, #8]	@ 0009b080 8068
.org 0x9b082
	str r0, [r4, #20]	@ 0009b082 6061
.org 0x9b084
	adds r0, r4, #0	@ 0009b084 201c
.org 0x9b086
	adds r0, #183	@ 0009b086 b730
.org 0x9b088
	ldrb r0, [r0, #0]	@ 0009b088 0078
.org 0x9b08a
	add r0, sp	@ 0009b08a 6844
.org 0x9b08c
	ldrb r0, [r0, #0]	@ 0009b08c 0078
.org 0x9b08e
	movs r1, #0	@ 0009b08e 0021
.org 0x9b090
	strb r0, [r4, #13]	@ 0009b090 6073
.org 0x9b092
	strb r1, [r4, #14]	@ 0009b092 a173
.org 0x9b094
	strb r1, [r4, #15]	@ 0009b094 e173
.org 0x9b096
	adds r0, r4, #0	@ 0009b096 201c
.org 0x9b098
	bl 0x9b454	@ 0009b098 00f0dcf9
.org 0x9b09c
	b.n 0x9b0d4	@ 0009b09c 1ae0
.org 0x9b09e
	.byte 0x00	@ 0009b09e data
.org 0x9b09f
	.byte 0x00	@ 0009b09f data
.org 0x9b0a0
	.byte 0x44,0x9c,0x12,0x08	@ 0009b0a0 data
.org 0x9b0a4
	.byte 0x40,0xdb,0x85,0x08	@ 0009b0a4 data
.org 0x9b0a8
	adds r0, r4, #0	@ 0009b0a8 201c
.org 0x9b0aa
	adds r0, #183	@ 0009b0aa b730
.org 0x9b0ac
	ldrb r0, [r0, #0]	@ 0009b0ac 0078
.org 0x9b0ae
	cmp r0, #2	@ 0009b0ae 0228
.org 0x9b0b0
	beq.n 0x9b0c4	@ 0009b0b0 08d0
.org 0x9b0b2
	movs r0, #128	@ 0009b0b2 8020
.org 0x9b0b4
	lsls r0, r0, #4	@ 0009b0b4 0001
.org 0x9b0b6
	ands r1, r0	@ 0009b0b6 0140
.org 0x9b0b8
	cmp r1, #0	@ 0009b0b8 0029
.org 0x9b0ba
	beq.n 0x9b0c4	@ 0009b0ba 03d0
.org 0x9b0bc
	movs r0, #4	@ 0009b0bc 0420
.org 0x9b0be
	strb r0, [r4, #13]	@ 0009b0be 6073
.org 0x9b0c0
	strb r2, [r4, #14]	@ 0009b0c0 a273
.org 0x9b0c2
	strb r2, [r4, #15]	@ 0009b0c2 e273
.org 0x9b0c4
	ldr r0, [pc, #20]	@ 0009b0c4 0548
.org 0x9b0c6
	ldrb r1, [r4, #13]	@ 0009b0c6 617b
.org 0x9b0c8
	lsls r1, r1, #2	@ 0009b0c8 8900
.org 0x9b0ca
	adds r1, r1, r0	@ 0009b0ca 0918
.org 0x9b0cc
	ldr r1, [r1, #0]	@ 0009b0cc 0968
.org 0x9b0ce
	adds r0, r4, #0	@ 0009b0ce 201c
.org 0x9b0d0
	bl 0x128f80	@ 0009b0d0 8df056ff
