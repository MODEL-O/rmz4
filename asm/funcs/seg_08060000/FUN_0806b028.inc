@ FUN_0806b028  entry 0x0806b028  size 380
.thumb
.org 0x6b028
FUN_0806b028:
	push {r4, r5, r6, lr}	@ 0006b028 70b5
.org 0x6b02a
	sub sp, #16	@ 0006b02a 84b0
.org 0x6b02c
	adds r5, r0, #0	@ 0006b02c 051c
.org 0x6b02e
	ldrb r0, [r5, #14]	@ 0006b02e a87b
.org 0x6b030
	cmp r0, #0	@ 0006b030 0028
.org 0x6b032
	bne.n 0x6b128	@ 0006b032 79d1
.org 0x6b034
	adds r0, r5, #0	@ 0006b034 281c
.org 0x6b036
	adds r0, #140	@ 0006b036 8c30
.org 0x6b038
	ldr r1, [r0, #0]	@ 0006b038 0168
.org 0x6b03a
	movs r2, #128	@ 0006b03a 8022
.org 0x6b03c
	lsls r2, r2, #9	@ 0006b03c 5202
.org 0x6b03e
	ands r1, r2	@ 0006b03e 1140
.org 0x6b040
	adds r6, r0, #0	@ 0006b040 061c
.org 0x6b042
	cmp r1, #0	@ 0006b042 0029
.org 0x6b044
	beq.n 0x6b0a8	@ 0006b044 30d0
.org 0x6b046
	ldr r0, [r5, #84]	@ 0006b046 686d
.org 0x6b048
	str r0, [sp, #0]	@ 0006b048 0090
.org 0x6b04a
	ldr r0, [r5, #88]	@ 0006b04a a86d
.org 0x6b04c
	ldr r1, [pc, #36]	@ 0006b04c 0949
.org 0x6b04e
	adds r0, r0, r1	@ 0006b04e 4018
.org 0x6b050
	str r0, [sp, #4]	@ 0006b050 0190
.org 0x6b052
	ldr r1, [pc, #36]	@ 0006b052 0949
.org 0x6b054
	adds r0, r5, #0	@ 0006b054 281c
.org 0x6b056
	bl 0x1cf00	@ 0006b056 b1f753ff
.org 0x6b05a
	adds r0, r5, #0	@ 0006b05a 281c
.org 0x6b05c
	bl 0x9f40c	@ 0006b05c 34f0d6f9
.org 0x6b060
	str r0, [r5, #44]	@ 0006b060 e862
.org 0x6b062
	ldrb r1, [r5, #10]	@ 0006b062 a97a
.org 0x6b064
	movs r0, #16	@ 0006b064 1020
.org 0x6b066
	ands r0, r1	@ 0006b066 0840
.org 0x6b068
	cmp r0, #0	@ 0006b068 0028
.org 0x6b06a
	beq.n 0x6b07c	@ 0006b06a 07d0
.org 0x6b06c
	movs r0, #32	@ 0006b06c 2020
.org 0x6b06e
	str r0, [r5, #92]	@ 0006b06e e865
.org 0x6b070
	subs r0, #33	@ 0006b070 2138
.org 0x6b072
	b.n 0x6b084	@ 0006b072 07e0
.org 0x6b074
	.byte 0x00,0xde,0xff,0xff	@ 0006b074 data
.org 0x6b078
	.byte 0x08,0xaa,0x00,0x00	@ 0006b078 data
.org 0x6b07c
	movs r0, #32	@ 0006b07c 2020
.org 0x6b07e
	negs r0, r0	@ 0006b07e 4042
.org 0x6b080
	str r0, [r5, #92]	@ 0006b080 e865
.org 0x6b082
	movs r0, #1	@ 0006b082 0120
.org 0x6b084
	str r0, [r5, #100]	@ 0006b084 6866
.org 0x6b086
	movs r2, #128	@ 0006b086 8022
.org 0x6b088
	lsls r2, r2, #2	@ 0006b088 9200
.org 0x6b08a
	adds r0, r5, #0	@ 0006b08a 281c
.org 0x6b08c
	adds r0, #219	@ 0006b08c db30
.org 0x6b08e
	ldrb r3, [r0, #0]	@ 0006b08e 0378
.org 0x6b090
	movs r0, #0	@ 0006b090 0020
.org 0x6b092
	mov r1, sp	@ 0006b092 6946
.org 0x6b094
	bl 0xd0dc4	@ 0006b094 65f096fe
.org 0x6b098
	movs r4, #0	@ 0006b098 0024
.org 0x6b09a
	movs r0, #32	@ 0006b09a 2020
.org 0x6b09c
	strb r0, [r5, #18]	@ 0006b09c a874
.org 0x6b09e
	movs r0, #47	@ 0006b09e 2f20
.org 0x6b0a0
	bl 0x2b10	@ 0006b0a0 97f736fd
.org 0x6b0a4
	strb r4, [r5, #13]	@ 0006b0a4 6c73
.org 0x6b0a6
	b.n 0x6b0b8	@ 0006b0a6 07e0
.org 0x6b0a8
	ldr r1, [pc, #28]	@ 0006b0a8 0749
.org 0x6b0aa
	adds r0, r5, #0	@ 0006b0aa 281c
.org 0x6b0ac
	bl 0x1cf00	@ 0006b0ac b1f728ff
.org 0x6b0b0
	movs r0, #1	@ 0006b0b0 0120
.org 0x6b0b2
	strb r0, [r5, #13]	@ 0006b0b2 6873
.org 0x6b0b4
	movs r0, #64	@ 0006b0b4 4020
.org 0x6b0b6
	strb r0, [r5, #18]	@ 0006b0b6 a874
.org 0x6b0b8
	ldr r0, [pc, #16]	@ 0006b0b8 0448
.org 0x6b0ba
	ldrh r0, [r0, #0]	@ 0006b0ba 0088
.org 0x6b0bc
	cmp r0, #8	@ 0006b0bc 0828
.org 0x6b0be
	bne.n 0x6b0d0	@ 0006b0be 07d1
.org 0x6b0c0
	movs r0, #208	@ 0006b0c0 d020
.org 0x6b0c2
	bl 0x2b10	@ 0006b0c2 97f725fd
.org 0x6b0c6
	b.n 0x6b0d6	@ 0006b0c6 06e0
.org 0x6b0c8
	.byte 0x06,0xaa,0x00,0x00	@ 0006b0c8 data
.org 0x6b0cc
	.byte 0x10,0xe9,0x02,0x02	@ 0006b0cc data
.org 0x6b0d0
	movs r0, #209	@ 0006b0d0 d120
.org 0x6b0d2
	bl 0x2b10	@ 0006b0d2 97f71dfd
.org 0x6b0d6
	adds r4, r5, #0	@ 0006b0d6 2c1c
.org 0x6b0d8
	adds r4, #216	@ 0006b0d8 d834
.org 0x6b0da
	ldrb r0, [r4, #0]	@ 0006b0da 2078
.org 0x6b0dc
	cmp r0, #0	@ 0006b0dc 0028
.org 0x6b0de
	beq.n 0x6b0ea	@ 0006b0de 04d0
.org 0x6b0e0
	movs r0, #200	@ 0006b0e0 c820
.org 0x6b0e2
	bl 0x2b5c	@ 0006b0e2 97f73bfd
.org 0x6b0e6
	movs r0, #0	@ 0006b0e6 0020
.org 0x6b0e8
	strb r0, [r4, #0]	@ 0006b0e8 2070
.org 0x6b0ea
	movs r1, #0	@ 0006b0ea 0021
.org 0x6b0ec
	str r1, [r6, #0]	@ 0006b0ec 3160
.org 0x6b0ee
	adds r0, r5, #0	@ 0006b0ee 281c
.org 0x6b0f0
	adds r0, #144	@ 0006b0f0 9030
.org 0x6b0f2
	str r1, [r0, #0]	@ 0006b0f2 0160
.org 0x6b0f4
	adds r0, #4	@ 0006b0f4 0430
.org 0x6b0f6
	strb r1, [r0, #0]	@ 0006b0f6 0170
.org 0x6b0f8
	ldrb r1, [r5, #10]	@ 0006b0f8 a97a
.org 0x6b0fa
	movs r0, #251	@ 0006b0fa fb20
.org 0x6b0fc
	ands r0, r1	@ 0006b0fc 0840
.org 0x6b0fe
	strb r0, [r5, #10]	@ 0006b0fe a872
.org 0x6b100
	ldr r3, [pc, #88]	@ 0006b100 164b
.org 0x6b102
	ldrh r2, [r3, #8]	@ 0006b102 1a89
.org 0x6b104
	movs r4, #1	@ 0006b104 0124
.org 0x6b106
	adds r0, r4, #0	@ 0006b106 201c
.org 0x6b108
	ands r0, r2	@ 0006b108 1040
.org 0x6b10a
	cmp r0, #0	@ 0006b10a 0028
.org 0x6b10c
	beq.n 0x6b122	@ 0006b10c 09d0
.org 0x6b10e
	ldrb r1, [r3, #18]	@ 0006b10e 997c
.org 0x6b110
	adds r0, r4, #0	@ 0006b110 201c
.org 0x6b112
	ands r0, r1	@ 0006b112 0840
.org 0x6b114
	cmp r0, #0	@ 0006b114 0028
.org 0x6b116
	bne.n 0x6b122	@ 0006b116 04d1
.org 0x6b118
	ldr r0, [pc, #68]	@ 0006b118 1148
.org 0x6b11a
	ands r0, r2	@ 0006b11a 1040
.org 0x6b11c
	movs r1, #16	@ 0006b11c 1021
.org 0x6b11e
	orrs r0, r1	@ 0006b11e 0843
.org 0x6b120
	strh r0, [r3, #8]	@ 0006b120 1881
.org 0x6b122
	ldrb r0, [r5, #14]	@ 0006b122 a87b
.org 0x6b124
	adds r0, #1	@ 0006b124 0130
.org 0x6b126
	strb r0, [r5, #14]	@ 0006b126 a873
.org 0x6b128
	adds r0, r5, #0	@ 0006b128 281c
.org 0x6b12a
	bl 0x1cff0	@ 0006b12a b1f761ff
.org 0x6b12e
	ldrb r0, [r5, #13]	@ 0006b12e 687b
.org 0x6b130
	cmp r0, #0	@ 0006b130 0028
.org 0x6b132
	bne.n 0x6b164	@ 0006b132 17d1
.org 0x6b134
	ldr r0, [r5, #84]	@ 0006b134 686d
.org 0x6b136
	ldr r1, [r5, #92]	@ 0006b136 e96d
.org 0x6b138
	adds r0, r0, r1	@ 0006b138 4018
.org 0x6b13a
	str r0, [r5, #84]	@ 0006b13a 6865
.org 0x6b13c
	ldr r0, [r5, #100]	@ 0006b13c 686e
.org 0x6b13e
	adds r1, r1, r0	@ 0006b13e 0918
.org 0x6b140
	str r1, [r5, #92]	@ 0006b140 e965
.org 0x6b142
	ldrb r0, [r5, #18]	@ 0006b142 a87c
.org 0x6b144
	subs r0, #1	@ 0006b144 0138
.org 0x6b146
	strb r0, [r5, #18]	@ 0006b146 a874
.org 0x6b148
	lsls r0, r0, #24	@ 0006b148 0006
.org 0x6b14a
	lsrs r0, r0, #24	@ 0006b14a 000e
.org 0x6b14c
	cmp r0, #255	@ 0006b14c ff28
.org 0x6b14e
	bne.n 0x6b1be	@ 0006b14e 36d1
.org 0x6b150
	movs r0, #16	@ 0006b150 1020
.org 0x6b152
	strb r0, [r5, #18]	@ 0006b152 a874
.org 0x6b154
	movs r0, #1	@ 0006b154 0120
.org 0x6b156
	strb r0, [r5, #13]	@ 0006b156 6873
.org 0x6b158
	b.n 0x6b1be	@ 0006b158 31e0
.org 0x6b15a
	.byte 0x00	@ 0006b15a data
.org 0x6b15b
	.byte 0x00	@ 0006b15b data
.org 0x6b15c
	.byte 0x10,0xe9,0x02,0x02	@ 0006b15c data
.org 0x6b160
	.byte 0xfe,0xff,0x00,0x00	@ 0006b160 data
.org 0x6b164
	cmp r0, #1	@ 0006b164 0128
.org 0x6b166
	bne.n 0x6b190	@ 0006b166 13d1
.org 0x6b168
	ldr r0, [r5, #24]	@ 0006b168 a869
.org 0x6b16a
	ldrb r1, [r0, #9]	@ 0006b16a 417a
.org 0x6b16c
	movs r0, #128	@ 0006b16c 8020
.org 0x6b16e
	ands r0, r1	@ 0006b16e 0840
.org 0x6b170
	cmp r0, #0	@ 0006b170 0028
.org 0x6b172
	beq.n 0x6b1be	@ 0006b172 24d0
.org 0x6b174
	movs r0, #0	@ 0006b174 0020
.org 0x6b176
	str r0, [sp, #8]	@ 0006b176 0290
.org 0x6b178
	ldr r0, [pc, #16]	@ 0006b178 0448
.org 0x6b17a
	add r1, sp, #8	@ 0006b17a 02a9
.org 0x6b17c
	str r0, [r1, #4]	@ 0006b17c 4860
.org 0x6b17e
	adds r0, r5, #0	@ 0006b17e 281c
.org 0x6b180
	bl 0xd296c	@ 0006b180 67f0f4fb
.org 0x6b184
	str r0, [r5, #44]	@ 0006b184 e862
.org 0x6b186
	movs r0, #2	@ 0006b186 0220
.org 0x6b188
	strb r0, [r5, #13]	@ 0006b188 6873
.org 0x6b18a
	b.n 0x6b1be	@ 0006b18a 18e0
.org 0x6b18c
	.byte 0x00,0xde,0xff,0xff	@ 0006b18c data
.org 0x6b190
	cmp r0, #2	@ 0006b190 0228
.org 0x6b192
	bne.n 0x6b1b0	@ 0006b192 0dd1
.org 0x6b194
	ldr r0, [r5, #44]	@ 0006b194 e86a
.org 0x6b196
	ldrb r0, [r0, #12]	@ 0006b196 007b
.org 0x6b198
	cmp r0, #1	@ 0006b198 0128
.org 0x6b19a
	bls.n 0x6b1be	@ 0006b19a 10d9
.org 0x6b19c
	ldr r2, [pc, #12]	@ 0006b19c 034a
.org 0x6b19e
	ldrb r1, [r2, #18]	@ 0006b19e 917c
.org 0x6b1a0
	movs r0, #2	@ 0006b1a0 0220
.org 0x6b1a2
	orrs r0, r1	@ 0006b1a2 0843
