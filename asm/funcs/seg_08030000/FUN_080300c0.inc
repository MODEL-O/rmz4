@ FUN_080300c0  entry 0x080300c0  size 346
.thumb
.org 0x300c0
FUN_080300c0:
	push {r4, r5, r6, r7, lr}	@ 000300c0 f0b5
.org 0x300c2
	adds r4, r0, #0	@ 000300c2 041c
.org 0x300c4
	ldr r1, [pc, #16]	@ 000300c4 0449
.org 0x300c6
	adds r0, r4, r1	@ 000300c6 6018
.org 0x300c8
	ldrb r0, [r0, #0]	@ 000300c8 0078
.org 0x300ca
	cmp r0, #0	@ 000300ca 0028
.org 0x300cc
	beq.n 0x300dc	@ 000300cc 06d0
.org 0x300ce
	movs r1, #0	@ 000300ce 0021
.org 0x300d0
	movs r0, #7	@ 000300d0 0720
.org 0x300d2
	strb r0, [r4, #13]	@ 000300d2 6073
.org 0x300d4
	strb r1, [r4, #14]	@ 000300d4 a173
.org 0x300d6
	b.n 0x30228	@ 000300d6 a7e0
.org 0x300d8
	.byte 0x43,0x01,0x00,0x00	@ 000300d8 data
.org 0x300dc
	ldr r0, [pc, #60]	@ 000300dc 0f48
.org 0x300de
	adds r2, r4, r0	@ 000300de 2218
.org 0x300e0
	ldrb r1, [r2, #0]	@ 000300e0 1178
.org 0x300e2
	movs r0, #2	@ 000300e2 0220
.org 0x300e4
	ands r0, r1	@ 000300e4 0840
.org 0x300e6
	lsls r0, r0, #24	@ 000300e6 0006
.org 0x300e8
	lsrs r3, r0, #24	@ 000300e8 030e
.org 0x300ea
	mov ip, r2	@ 000300ea 9446
.org 0x300ec
	cmp r3, #0	@ 000300ec 002b
.org 0x300ee
	beq.n 0x300f2	@ 000300ee 00d0
.org 0x300f0
	b.n 0x3022a	@ 000300f0 9be0
.org 0x300f2
	ldr r1, [pc, #44]	@ 000300f2 0b49
.org 0x300f4
	adds r0, r4, r1	@ 000300f4 6018
.org 0x300f6
	ldrh r1, [r0, #0]	@ 000300f6 0188
.org 0x300f8
	movs r0, #128	@ 000300f8 8020
.org 0x300fa
	lsls r0, r0, #8	@ 000300fa 0002
.org 0x300fc
	ands r0, r1	@ 000300fc 0840
.org 0x300fe
	movs r2, #150	@ 000300fe 9622
.org 0x30100
	lsls r2, r2, #2	@ 00030100 9200
.org 0x30102
	adds r5, r4, r2	@ 00030102 a518
.org 0x30104
	cmp r0, #0	@ 00030104 0028
.org 0x30106
	beq.n 0x30124	@ 00030106 0dd0
.org 0x30108
	ldr r0, [r5, #0]	@ 00030108 2868
.org 0x3010a
	movs r1, #128	@ 0003010a 8021
.org 0x3010c
	ands r0, r1	@ 0003010c 0840
.org 0x3010e
	cmp r0, #0	@ 0003010e 0028
.org 0x30110
	beq.n 0x30124	@ 00030110 08d0
.org 0x30112
	movs r0, #11	@ 00030112 0b20
.org 0x30114
	strb r0, [r4, #13]	@ 00030114 6073
.org 0x30116
	strb r3, [r4, #14]	@ 00030116 a373
.org 0x30118
	strb r3, [r4, #15]	@ 00030118 e373
.org 0x3011a
	b.n 0x3022a	@ 0003011a 86e0
.org 0x3011c
	.byte 0x53,0x01,0x00,0x00	@ 0003011c data
.org 0x30120
	.byte 0x52,0x02,0x00,0x00	@ 00030120 data
.org 0x30124
	adds r0, r4, #0	@ 00030124 201c
.org 0x30126
	adds r0, #140	@ 00030126 8c30
.org 0x30128
	ldr r1, [r0, #0]	@ 00030128 0168
.org 0x3012a
	movs r2, #128	@ 0003012a 8022
.org 0x3012c
	lsls r2, r2, #23	@ 0003012c d205
.org 0x3012e
	ands r1, r2	@ 0003012e 1140
.org 0x30130
	adds r2, r0, #0	@ 00030130 021c
.org 0x30132
	cmp r1, #0	@ 00030132 0029
.org 0x30134
	beq.n 0x3014e	@ 00030134 0bd0
.org 0x30136
	ldr r0, [r5, #0]	@ 00030136 2868
.org 0x30138
	movs r1, #134	@ 00030138 8621
.org 0x3013a
	lsls r1, r1, #3	@ 0003013a c900
.org 0x3013c
	ands r0, r1	@ 0003013c 0840
.org 0x3013e
	subs r1, #48	@ 0003013e 3039
.org 0x30140
	cmp r0, r1	@ 00030140 8842
.org 0x30142
	bne.n 0x3014e	@ 00030142 04d1
.org 0x30144
	movs r1, #0	@ 00030144 0021
.org 0x30146
	movs r0, #8	@ 00030146 0820
.org 0x30148
	strb r0, [r4, #13]	@ 00030148 6073
.org 0x3014a
	strb r1, [r4, #14]	@ 0003014a a173
.org 0x3014c
	b.n 0x30228	@ 0003014c 6ce0
.org 0x3014e
	ldr r0, [r2, #0]	@ 0003014e 1068
.org 0x30150
	movs r1, #128	@ 00030150 8021
.org 0x30152
	lsls r1, r1, #22	@ 00030152 8905
.org 0x30154
	ands r0, r1	@ 00030154 0840
.org 0x30156
	cmp r0, #0	@ 00030156 0028
.org 0x30158
	beq.n 0x30170	@ 00030158 0ad0
.org 0x3015a
	ldr r0, [r5, #0]	@ 0003015a 2868
.org 0x3015c
	movs r1, #128	@ 0003015c 8021
.org 0x3015e
	lsls r1, r1, #3	@ 0003015e c900
.org 0x30160
	ands r0, r1	@ 00030160 0840
.org 0x30162
	cmp r0, #0	@ 00030162 0028
.org 0x30164
	beq.n 0x30170	@ 00030164 04d0
.org 0x30166
	movs r1, #0	@ 00030166 0021
.org 0x30168
	movs r0, #9	@ 00030168 0920
.org 0x3016a
	strb r0, [r4, #13]	@ 0003016a 6073
.org 0x3016c
	strb r1, [r4, #14]	@ 0003016c a173
.org 0x3016e
	b.n 0x30228	@ 0003016e 5be0
.org 0x30170
	ldr r0, [r2, #0]	@ 00030170 1068
.org 0x30172
	cmp r0, #0	@ 00030172 0028
.org 0x30174
	bge.n 0x30190	@ 00030174 0cda
.org 0x30176
	ldr r0, [r5, #0]	@ 00030176 2868
.org 0x30178
	movs r1, #128	@ 00030178 8021
.org 0x3017a
	lsls r1, r1, #3	@ 0003017a c900
.org 0x3017c
	ands r0, r1	@ 0003017c 0840
.org 0x3017e
	cmp r0, #0	@ 0003017e 0028
.org 0x30180
	beq.n 0x30190	@ 00030180 06d0
.org 0x30182
	movs r0, #0	@ 00030182 0020
.org 0x30184
	movs r1, #10	@ 00030184 0a21
.org 0x30186
	strb r1, [r4, #13]	@ 00030186 6173
.org 0x30188
	strb r0, [r4, #14]	@ 00030188 a073
.org 0x3018a
	movs r0, #1	@ 0003018a 0120
.org 0x3018c
	strb r0, [r4, #15]	@ 0003018c e073
.org 0x3018e
	b.n 0x3022a	@ 0003018e 4ce0
.org 0x30190
	adds r6, r4, #0	@ 00030190 261c
.org 0x30192
	adds r6, #180	@ 00030192 b436
.org 0x30194
	ldr r1, [r5, #0]	@ 00030194 2968
.org 0x30196
	movs r7, #1	@ 00030196 0127
.org 0x30198
	adds r0, r1, #0	@ 00030198 081c
.org 0x3019a
	ands r0, r7	@ 0003019a 3840
.org 0x3019c
	cmp r0, #0	@ 0003019c 0028
.org 0x3019e
	beq.n 0x301e6	@ 0003019e 22d0
.org 0x301a0
	movs r0, #128	@ 000301a0 8020
.org 0x301a2
	ands r1, r0	@ 000301a2 0140
.org 0x301a4
	cmp r1, #0	@ 000301a4 0029
.org 0x301a6
	beq.n 0x301dc	@ 000301a6 19d0
.org 0x301a8
	ldr r1, [pc, #44]	@ 000301a8 0b49
.org 0x301aa
	adds r0, r4, #0	@ 000301aa 201c
.org 0x301ac
	movs r2, #0	@ 000301ac 0022
.org 0x301ae
	bl 0x2c4fc	@ 000301ae fcf7a5f9
.org 0x301b2
	lsls r0, r0, #16	@ 000301b2 0004
.org 0x301b4
	cmp r0, #0	@ 000301b4 0028
.org 0x301b6
	beq.n 0x301dc	@ 000301b6 11d0
.org 0x301b8
	movs r0, #161	@ 000301b8 a120
.org 0x301ba
	lsls r0, r0, #1	@ 000301ba 4000
.org 0x301bc
	adds r2, r4, r0	@ 000301bc 2218
.org 0x301be
	ldrb r0, [r2, #0]	@ 000301be 1078
.org 0x301c0
	movs r1, #16	@ 000301c0 1021
.org 0x301c2
	orrs r0, r1	@ 000301c2 0843
.org 0x301c4
	strb r0, [r2, #0]	@ 000301c4 1070
.org 0x301c6
	ldr r0, [r4, #88]	@ 000301c6 a06d
.org 0x301c8
	movs r1, #208	@ 000301c8 d021
.org 0x301ca
	lsls r1, r1, #4	@ 000301ca 0901
.org 0x301cc
	adds r0, r0, r1	@ 000301cc 4018
.org 0x301ce
	str r0, [r6, #112]	@ 000301ce 3067
.org 0x301d0
	movs r1, #0	@ 000301d0 0021
.org 0x301d2
	strb r7, [r4, #13]	@ 000301d2 6773
.org 0x301d4
	movs r0, #2	@ 000301d4 0220
.org 0x301d6
	b.n 0x30226	@ 000301d6 26e0
.org 0x301d8
	.byte 0x6c,0x33,0x85,0x08	@ 000301d8 data
.org 0x301dc
	movs r1, #0	@ 000301dc 0021
.org 0x301de
	movs r0, #1	@ 000301de 0120
.org 0x301e0
	strb r0, [r4, #13]	@ 000301e0 6073
.org 0x301e2
	strb r1, [r4, #14]	@ 000301e2 a173
.org 0x301e4
	b.n 0x30228	@ 000301e4 20e0
.org 0x301e6
	movs r0, #4	@ 000301e6 0420
.org 0x301e8
	ands r1, r0	@ 000301e8 0140
.org 0x301ea
	cmp r1, #0	@ 000301ea 0029
.org 0x301ec
	beq.n 0x30218	@ 000301ec 14d0
.org 0x301ee
	mov r2, ip	@ 000301ee 6246
.org 0x301f0
	ldrb r1, [r2, #0]	@ 000301f0 1178
.org 0x301f2
	ands r0, r1	@ 000301f2 0840
.org 0x301f4
	lsls r0, r0, #24	@ 000301f4 0006
.org 0x301f6
	lsrs r6, r0, #24	@ 000301f6 060e
.org 0x301f8
	cmp r6, #0	@ 000301f8 002e
.org 0x301fa
	bne.n 0x30218	@ 000301fa 0dd1
.org 0x301fc
	ldr r1, [pc, #20]	@ 000301fc 0549
.org 0x301fe
	adds r0, r4, #0	@ 000301fe 201c
.org 0x30200
	bl 0x2ee58	@ 00030200 fef72afe
.org 0x30204
	lsls r0, r0, #24	@ 00030204 0006
.org 0x30206
	cmp r0, #0	@ 00030206 0028
.org 0x30208
	beq.n 0x30218	@ 00030208 06d0
.org 0x3020a
	movs r0, #2	@ 0003020a 0220
.org 0x3020c
	strb r0, [r4, #14]	@ 0003020c a073
.org 0x3020e
	strb r6, [r4, #15]	@ 0003020e e673
.org 0x30210
	b.n 0x3022a	@ 00030210 0be0
.org 0x30212
	.byte 0x00	@ 00030212 data
.org 0x30213
	.byte 0x00	@ 00030213 data
.org 0x30214
	.byte 0x74,0x33,0x85,0x08	@ 00030214 data
.org 0x30218
	ldr r0, [r5, #0]	@ 00030218 2868
