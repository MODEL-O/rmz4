@ FUN_08002094  entry 0x08002094  size 310
.thumb
.org 0x2094
FUN_08002094:
	push {r4, lr}	@ 00002094 10b5
.org 0x2096
	sub sp, #40	@ 00002096 8ab0
.org 0x2098
	ldr r4, [pc, #52]	@ 00002098 0d4c
.org 0x209a
	ldr r0, [pc, #56]	@ 0000209a 0e48
.org 0x209c
	str r0, [sp, #0]	@ 0000209c 0090
.org 0x209e
	ldr r0, [pc, #56]	@ 0000209e 0e48
.org 0x20a0
	str r0, [sp, #4]	@ 000020a0 0190
.org 0x20a2
	ldr r0, [pc, #56]	@ 000020a2 0e48
.org 0x20a4
	str r0, [sp, #8]	@ 000020a4 0290
.org 0x20a6
	movs r0, #128	@ 000020a6 8020
.org 0x20a8
	lsls r0, r0, #3	@ 000020a8 c000
.org 0x20aa
	adds r3, r4, r0	@ 000020aa 2318
.org 0x20ac
	ldr r1, [pc, #48]	@ 000020ac 0c49
.org 0x20ae
	adds r0, r4, r1	@ 000020ae 6018
.org 0x20b0
	ldrb r1, [r3, #0]	@ 000020b0 1978
.org 0x20b2
	ldrb r0, [r0, #0]	@ 000020b2 0078
.org 0x20b4
	cmp r1, r0	@ 000020b4 8142
.org 0x20b6
	bne.n 0x2122	@ 000020b6 34d1
.org 0x20b8
	cmp r1, #32	@ 000020b8 2029
.org 0x20ba
	bne.n 0x20ec	@ 000020ba 17d1
.org 0x20bc
	ldr r1, [pc, #36]	@ 000020bc 0949
.org 0x20be
	str r4, [r1, #0]	@ 000020be 0c60
.org 0x20c0
	movs r0, #160	@ 000020c0 a020
.org 0x20c2
	lsls r0, r0, #19	@ 000020c2 c004
.org 0x20c4
	str r0, [r1, #4]	@ 000020c4 4860
.org 0x20c6
	ldr r0, [pc, #32]	@ 000020c6 0848
.org 0x20c8
	str r0, [r1, #8]	@ 000020c8 8860
.org 0x20ca
	ldr r0, [r1, #8]	@ 000020ca 8868
.org 0x20cc
	b.n 0x21a2	@ 000020cc 69e0
.org 0x20ce
	.byte 0x00	@ 000020ce data
.org 0x20cf
	.byte 0x00	@ 000020cf data
.org 0x20d0
	.byte 0xc0,0x2a,0x00,0x03	@ 000020d0 data
.org 0x20d4
	.byte 0x1f,0x00,0x1f,0x00	@ 000020d4 data
.org 0x20d8
	.byte 0xe0,0x03,0xe0,0x03	@ 000020d8 data
.org 0x20dc
	.byte 0x00,0x7c,0x00,0x7c	@ 000020dc data
.org 0x20e0
	.byte 0x01,0x04,0x00,0x00	@ 000020e0 data
.org 0x20e4
	.byte 0xd4,0x00,0x00,0x04	@ 000020e4 data
.org 0x20e8
	.byte 0x00,0x01,0x00,0x84	@ 000020e8 data
.org 0x20ec
	cmp r1, #31	@ 000020ec 1f29
.org 0x20ee
	bhi.n 0x2100	@ 000020ee 07d8
.org 0x20f0
	movs r1, #160	@ 000020f0 a021
.org 0x20f2
	lsls r1, r1, #19	@ 000020f2 c904
.org 0x20f4
	ldrb r2, [r3, #0]	@ 000020f4 1a78
.org 0x20f6
	adds r0, r4, #0	@ 000020f6 201c
.org 0x20f8
	mov r3, sp	@ 000020f8 6b46
.org 0x20fa
	bl 0x2260	@ 000020fa 00f0b1f8
.org 0x20fe
	b.n 0x21a2	@ 000020fe 50e0
.org 0x2100
	add r2, sp, #12	@ 00002100 03aa
.org 0x2102
	ldrb r1, [r3, #0]	@ 00002102 1978
.org 0x2104
	movs r0, #64	@ 00002104 4020
.org 0x2106
	subs r0, r0, r1	@ 00002106 401a
.org 0x2108
	str r0, [sp, #12]	@ 00002108 0390
.org 0x210a
	ldrb r0, [r3, #0]	@ 0000210a 1878
.org 0x210c
	subs r0, #33	@ 0000210c 2138
.org 0x210e
	lsls r1, r0, #16	@ 0000210e 0104
.org 0x2110
	orrs r0, r1	@ 00002110 0843
.org 0x2112
	str r0, [r2, #4]	@ 00002112 5060
.org 0x2114
	movs r1, #160	@ 00002114 a021
.org 0x2116
	lsls r1, r1, #19	@ 00002116 c904
.org 0x2118
	adds r0, r4, #0	@ 00002118 201c
.org 0x211a
	mov r3, sp	@ 0000211a 6b46
.org 0x211c
	bl 0x22a4	@ 0000211c 00f0c2f8
.org 0x2120
	b.n 0x21a2	@ 00002120 3fe0
.org 0x2122
	cmp r1, #32	@ 00002122 2029
.org 0x2124
	bhi.n 0x2134	@ 00002124 06d8
.org 0x2126
	add r0, sp, #12	@ 00002126 03a8
.org 0x2128
	ldrb r1, [r3, #0]	@ 00002128 1978
.org 0x212a
	str r1, [sp, #12]	@ 0000212a 0391
.org 0x212c
	movs r1, #0	@ 0000212c 0021
.org 0x212e
	str r1, [r0, #12]	@ 0000212e c160
.org 0x2130
	adds r2, r0, #0	@ 00002130 021c
.org 0x2132
	b.n 0x2148	@ 00002132 09e0
.org 0x2134
	add r2, sp, #12	@ 00002134 03aa
.org 0x2136
	ldrb r1, [r3, #0]	@ 00002136 1978
.org 0x2138
	movs r0, #64	@ 00002138 4020
.org 0x213a
	subs r0, r0, r1	@ 0000213a 401a
.org 0x213c
	str r0, [sp, #12]	@ 0000213c 0390
.org 0x213e
	ldrb r0, [r3, #0]	@ 0000213e 1878
.org 0x2140
	subs r0, #33	@ 00002140 2138
.org 0x2142
	lsls r1, r0, #16	@ 00002142 0104
.org 0x2144
	orrs r0, r1	@ 00002144 0843
.org 0x2146
	str r0, [r2, #12]	@ 00002146 d060
.org 0x2148
	ldr r0, [pc, #12]	@ 00002148 0348
.org 0x214a
	adds r3, r4, r0	@ 0000214a 2318
.org 0x214c
	ldrb r0, [r3, #0]	@ 0000214c 1878
.org 0x214e
	cmp r0, #32	@ 0000214e 2028
.org 0x2150
	bhi.n 0x215c	@ 00002150 04d8
.org 0x2152
	str r0, [r2, #4]	@ 00002152 5060
.org 0x2154
	movs r0, #0	@ 00002154 0020
.org 0x2156
	b.n 0x216c	@ 00002156 09e0
.org 0x2158
	.byte 0x01,0x04,0x00,0x00	@ 00002158 data
.org 0x215c
	ldrb r1, [r3, #0]	@ 0000215c 1978
.org 0x215e
	movs r0, #64	@ 0000215e 4020
.org 0x2160
	subs r0, r0, r1	@ 00002160 401a
.org 0x2162
	str r0, [r2, #4]	@ 00002162 5060
.org 0x2164
	ldrb r0, [r3, #0]	@ 00002164 1878
.org 0x2166
	subs r0, #33	@ 00002166 2138
.org 0x2168
	lsls r1, r0, #16	@ 00002168 0104
.org 0x216a
	orrs r0, r1	@ 0000216a 0843
.org 0x216c
	str r0, [r2, #16]	@ 0000216c 1061
.org 0x216e
	ldr r1, [pc, #16]	@ 0000216e 0449
.org 0x2170
	adds r3, r4, r1	@ 00002170 6318
.org 0x2172
	ldrb r0, [r3, #0]	@ 00002172 1878
.org 0x2174
	cmp r0, #32	@ 00002174 2028
.org 0x2176
	bhi.n 0x2184	@ 00002176 05d8
.org 0x2178
	str r0, [r2, #8]	@ 00002178 9060
.org 0x217a
	movs r0, #0	@ 0000217a 0020
.org 0x217c
	b.n 0x2194	@ 0000217c 0ae0
.org 0x217e
	.byte 0x00	@ 0000217e data
.org 0x217f
	.byte 0x00	@ 0000217f data
.org 0x2180
	.byte 0x02,0x04,0x00,0x00	@ 00002180 data
.org 0x2184
	ldrb r1, [r3, #0]	@ 00002184 1978
.org 0x2186
	movs r0, #64	@ 00002186 4020
.org 0x2188
	subs r0, r0, r1	@ 00002188 401a
.org 0x218a
	str r0, [r2, #8]	@ 0000218a 9060
.org 0x218c
	ldrb r0, [r3, #0]	@ 0000218c 1878
.org 0x218e
	subs r0, #33	@ 0000218e 2138
.org 0x2190
	lsls r1, r0, #16	@ 00002190 0104
.org 0x2192
	orrs r0, r1	@ 00002192 0843
.org 0x2194
	str r0, [r2, #20]	@ 00002194 5061
.org 0x2196
	ldr r0, [pc, #92]	@ 00002196 1748
.org 0x2198
	movs r1, #160	@ 00002198 a021
.org 0x219a
	lsls r1, r1, #19	@ 0000219a c904
.org 0x219c
	mov r3, sp	@ 0000219c 6b46
.org 0x219e
	bl 0x22f4	@ 0000219e 00f0a9f8
.org 0x21a2
	ldr r4, [pc, #80]	@ 000021a2 144c
.org 0x21a4
	ldr r2, [pc, #80]	@ 000021a4 144a
.org 0x21a6
	adds r3, r4, r2	@ 000021a6 a318
.org 0x21a8
	ldrh r0, [r3, #0]	@ 000021a8 1888
.org 0x21aa
	cmp r0, #0	@ 000021aa 0028
.org 0x21ac
	beq.n 0x21da	@ 000021ac 15d0
.org 0x21ae
	add r1, sp, #36	@ 000021ae 09a9
.org 0x21b0
	ldr r2, [pc, #72]	@ 000021b0 124a
.org 0x21b2
	adds r0, r2, #0	@ 000021b2 101c
.org 0x21b4
	strh r0, [r1, #0]	@ 000021b4 0880
.org 0x21b6
	ldr r2, [pc, #72]	@ 000021b6 124a
.org 0x21b8
	str r1, [r2, #0]	@ 000021b8 1160
.org 0x21ba
	ldr r1, [pc, #72]	@ 000021ba 1249
.org 0x21bc
	adds r0, r4, r1	@ 000021bc 6018
.org 0x21be
	ldrh r0, [r0, #0]	@ 000021be 0088
.org 0x21c0
	movs r1, #160	@ 000021c0 a021
.org 0x21c2
	lsls r1, r1, #19	@ 000021c2 c904
.org 0x21c4
	adds r0, r0, r1	@ 000021c4 4018
.org 0x21c6
	str r0, [r2, #4]	@ 000021c6 5060
.org 0x21c8
	ldrh r0, [r3, #0]	@ 000021c8 1888
