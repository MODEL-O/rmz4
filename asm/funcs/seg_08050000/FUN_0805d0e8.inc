@ FUN_0805d0e8  entry 0x0805d0e8  size 456
.thumb
.org 0x5d0e8
FUN_0805d0e8:
	push {r4, r5, r6, r7, lr}	@ 0005d0e8 f0b5
.org 0x5d0ea
	mov r7, r9	@ 0005d0ea 4f46
.org 0x5d0ec
	mov r6, r8	@ 0005d0ec 4646
.org 0x5d0ee
	push {r6, r7}	@ 0005d0ee c0b4
.org 0x5d0f0
	sub sp, #48	@ 0005d0f0 8cb0
.org 0x5d0f2
	adds r6, r0, #0	@ 0005d0f2 061c
.org 0x5d0f4
	ldr r1, [pc, #420]	@ 0005d0f4 6949
.org 0x5d0f6
	mov r0, sp	@ 0005d0f6 6846
.org 0x5d0f8
	movs r2, #6	@ 0005d0f8 0622
.org 0x5d0fa
	bl 0x129258	@ 0005d0fa ccf0adf8
.org 0x5d0fe
	add r2, sp, #8	@ 0005d0fe 02aa
.org 0x5d100
	adds r1, r2, #0	@ 0005d100 111c
.org 0x5d102
	ldr r0, [pc, #412]	@ 0005d102 6748
.org 0x5d104
	ldmia r0!, {r3, r4, r5}	@ 0005d104 38c8
.org 0x5d106
	stmia r1!, {r3, r4, r5}	@ 0005d106 38c1
.org 0x5d108
	ldmia r0!, {r3, r4, r5}	@ 0005d108 38c8
.org 0x5d10a
	stmia r1!, {r3, r4, r5}	@ 0005d10a 38c1
.org 0x5d10c
	ldmia r0!, {r3, r4, r5}	@ 0005d10c 38c8
.org 0x5d10e
	stmia r1!, {r3, r4, r5}	@ 0005d10e 38c1
.org 0x5d110
	ldr r0, [r0, #0]	@ 0005d110 0068
.org 0x5d112
	str r0, [r1, #0]	@ 0005d112 0860
.org 0x5d114
	ldrb r5, [r6, #16]	@ 0005d114 357c
.org 0x5d116
	ldrb r0, [r6, #10]	@ 0005d116 b07a
.org 0x5d118
	lsrs r7, r0, #4	@ 0005d118 0709
.org 0x5d11a
	movs r0, #1	@ 0005d11a 0120
.org 0x5d11c
	ands r7, r0	@ 0005d11c 0740
.org 0x5d11e
	ldr r4, [pc, #388]	@ 0005d11e 614c
.org 0x5d120
	ldr r0, [r4, #0]	@ 0005d120 2068
.org 0x5d122
	mov r8, r0	@ 0005d122 8046
.org 0x5d124
	ldrb r0, [r6, #15]	@ 0005d124 f07b
.org 0x5d126
	mov r9, r2	@ 0005d126 9146
.org 0x5d128
	cmp r0, #0	@ 0005d128 0028
.org 0x5d12a
	bne.n 0x5d176	@ 0005d12a 24d1
.org 0x5d12c
	movs r0, #174	@ 0005d12c ae20
.org 0x5d12e
	lsls r0, r0, #1	@ 0005d12e 4000
.org 0x5d130
	bl 0x2b10	@ 0005d130 a5f7eefc
.org 0x5d134
	adds r3, r6, #0	@ 0005d134 331c
.org 0x5d136
	adds r3, #192	@ 0005d136 c033
.org 0x5d138
	ldr r2, [r4, #0]	@ 0005d138 2268
.org 0x5d13a
	ldr r0, [r2, #84]	@ 0005d13a 506d
.org 0x5d13c
	ldr r1, [r6, #84]	@ 0005d13c 716d
.org 0x5d13e
	subs r0, r0, r1	@ 0005d13e 401a
.org 0x5d140
	str r0, [r3, #0]	@ 0005d140 1860
.org 0x5d142
	adds r3, #4	@ 0005d142 0433
.org 0x5d144
	ldr r0, [r2, #88]	@ 0005d144 906d
.org 0x5d146
	ldr r1, [r6, #88]	@ 0005d146 b16d
.org 0x5d148
	subs r0, r0, r1	@ 0005d148 401a
.org 0x5d14a
	str r0, [r3, #0]	@ 0005d14a 1860
.org 0x5d14c
	lsls r0, r5, #1	@ 0005d14c 6800
.org 0x5d14e
	add r0, sp	@ 0005d14e 6844
.org 0x5d150
	ldrb r1, [r0, #0]	@ 0005d150 0178
.org 0x5d152
	adds r0, r6, #0	@ 0005d152 301c
.org 0x5d154
	bl 0x5ee6c	@ 0005d154 01f08afe
.org 0x5d158
	lsls r0, r7, #1	@ 0005d158 7800
.org 0x5d15a
	subs r3, r0, #1	@ 0005d15a 431e
.org 0x5d15c
	lsls r0, r3, #8	@ 0005d15c 1802
.org 0x5d15e
	str r0, [r6, #92]	@ 0005d15e f065
.org 0x5d160
	ldr r0, [pc, #324]	@ 0005d160 5148
.org 0x5d162
	str r0, [r6, #96]	@ 0005d162 3066
.org 0x5d164
	lsls r0, r3, #4	@ 0005d164 1801
.org 0x5d166
	negs r0, r0	@ 0005d166 4042
.org 0x5d168
	str r0, [r6, #100]	@ 0005d168 7066
.org 0x5d16a
	movs r0, #32	@ 0005d16a 2020
.org 0x5d16c
	str r0, [r6, #104]	@ 0005d16c b066
.org 0x5d16e
	strb r0, [r6, #18]	@ 0005d16e b074
.org 0x5d170
	ldrb r0, [r6, #15]	@ 0005d170 f07b
.org 0x5d172
	adds r0, #1	@ 0005d172 0130
.org 0x5d174
	strb r0, [r6, #15]	@ 0005d174 f073
.org 0x5d176
	adds r0, r6, #0	@ 0005d176 301c
.org 0x5d178
	bl 0x1cff0	@ 0005d178 bff73aff
.org 0x5d17c
	adds r0, r6, #0	@ 0005d17c 301c
.org 0x5d17e
	adds r0, #116	@ 0005d17e 7430
.org 0x5d180
	ldr r4, [pc, #296]	@ 0005d180 4a4c
.org 0x5d182
	ldr r3, [pc, #300]	@ 0005d182 4b4b
.org 0x5d184
	adds r1, r6, #0	@ 0005d184 311c
.org 0x5d186
	adds r1, #184	@ 0005d186 b831
.org 0x5d188
	ldrb r2, [r1, #0]	@ 0005d188 0a78
.org 0x5d18a
	lsls r1, r2, #1	@ 0005d18a 5100
.org 0x5d18c
	adds r1, r1, r3	@ 0005d18c c918
.org 0x5d18e
	ldrh r1, [r1, #0]	@ 0005d18e 0988
.org 0x5d190
	lsls r1, r1, #2	@ 0005d190 8900
.org 0x5d192
	adds r1, r1, r4	@ 0005d192 0919
.org 0x5d194
	adds r4, r6, #0	@ 0005d194 341c
.org 0x5d196
	adds r4, #113	@ 0005d196 7134
.org 0x5d198
	movs r5, #0	@ 0005d198 0025
.org 0x5d19a
	ldrsb r5, [r4, r5]	@ 0005d19a 6557
.org 0x5d19c
	ldr r1, [r1, #0]	@ 0005d19c 0968
.org 0x5d19e
	lsls r3, r5, #2	@ 0005d19e ab00
.org 0x5d1a0
	adds r3, r3, r1	@ 0005d1a0 5b18
.org 0x5d1a2
	ldr r1, [pc, #272]	@ 0005d1a2 4449
.org 0x5d1a4
	lsls r2, r2, #2	@ 0005d1a4 9200
.org 0x5d1a6
	adds r2, r2, r1	@ 0005d1a6 5218
.org 0x5d1a8
	ldr r1, [r2, #0]	@ 0005d1a8 1168
.org 0x5d1aa
	adds r1, r1, r5	@ 0005d1aa 4919
.org 0x5d1ac
	ldrb r1, [r1, #0]	@ 0005d1ac 0978
.org 0x5d1ae
	lsls r2, r1, #1	@ 0005d1ae 4a00
.org 0x5d1b0
	adds r2, r2, r1	@ 0005d1b0 5218
.org 0x5d1b2
	lsls r2, r2, #3	@ 0005d1b2 d200
.org 0x5d1b4
	ldr r1, [r3, #0]	@ 0005d1b4 1968
.org 0x5d1b6
	adds r1, r1, r2	@ 0005d1b6 8918
.org 0x5d1b8
	bl 0x5784	@ 0005d1b8 a8f7e4fa
.org 0x5d1bc
	movs r0, #0	@ 0005d1bc 0020
.org 0x5d1be
	ldrsb r0, [r4, r0]	@ 0005d1be 2056
.org 0x5d1c0
	cmp r0, #1	@ 0005d1c0 0128
.org 0x5d1c2
	ble.n 0x5d1cc	@ 0005d1c2 03dd
.org 0x5d1c4
	adds r1, r6, #0	@ 0005d1c4 311c
.org 0x5d1c6
	adds r1, #37	@ 0005d1c6 2531
.org 0x5d1c8
	movs r0, #15	@ 0005d1c8 0f20
.org 0x5d1ca
	strb r0, [r1, #0]	@ 0005d1ca 0870
.org 0x5d1cc
	ldrb r0, [r6, #18]	@ 0005d1cc b07c
.org 0x5d1ce
	cmp r0, #0	@ 0005d1ce 0028
.org 0x5d1d0
	beq.n 0x5d22e	@ 0005d1d0 2dd0
.org 0x5d1d2
	subs r0, #1	@ 0005d1d2 0138
.org 0x5d1d4
	movs r1, #0	@ 0005d1d4 0021
.org 0x5d1d6
	mov ip, r1	@ 0005d1d6 8c46
.org 0x5d1d8
	strb r0, [r6, #18]	@ 0005d1d8 b074
.org 0x5d1da
	ldr r2, [r6, #84]	@ 0005d1da 726d
.org 0x5d1dc
	ldr r5, [r6, #92]	@ 0005d1dc f56d
.org 0x5d1de
	adds r2, r2, r5	@ 0005d1de 5219
.org 0x5d1e0
	str r2, [r6, #84]	@ 0005d1e0 7265
.org 0x5d1e2
	lsls r0, r7, #1	@ 0005d1e2 7800
.org 0x5d1e4
	subs r3, r0, #1	@ 0005d1e4 431e
.org 0x5d1e6
	adds r1, r6, #0	@ 0005d1e6 311c
.org 0x5d1e8
	adds r1, #208	@ 0005d1e8 d031
.org 0x5d1ea
	lsls r0, r3, #1	@ 0005d1ea 5800
.org 0x5d1ec
	adds r0, r0, r3	@ 0005d1ec c018
.org 0x5d1ee
	lsls r0, r0, #2	@ 0005d1ee 8000
.org 0x5d1f0
	subs r0, r0, r3	@ 0005d1f0 c01a
.org 0x5d1f2
	lsls r0, r0, #11	@ 0005d1f2 c002
.org 0x5d1f4
	ldr r1, [r1, #0]	@ 0005d1f4 0968
.org 0x5d1f6
	adds r1, r1, r0	@ 0005d1f6 0918
.org 0x5d1f8
	subs r2, r2, r1	@ 0005d1f8 521a
.org 0x5d1fa
	adds r0, r2, #0	@ 0005d1fa 101c
.org 0x5d1fc
	muls r0, r3	@ 0005d1fc 5843
.org 0x5d1fe
	cmp r0, #0	@ 0005d1fe 0028
.org 0x5d200
	ble.n 0x5d204	@ 0005d200 00dd
.org 0x5d202
	str r1, [r6, #84]	@ 0005d202 7165
.org 0x5d204
	ldr r0, [r6, #88]	@ 0005d204 b06d
.org 0x5d206
	ldr r1, [r6, #96]	@ 0005d206 316e
.org 0x5d208
	adds r0, r0, r1	@ 0005d208 4018
.org 0x5d20a
	str r0, [r6, #88]	@ 0005d20a b065
.org 0x5d20c
	ldrb r0, [r6, #18]	@ 0005d20c b07c
.org 0x5d20e
	cmp r0, #16	@ 0005d20e 1028
.org 0x5d210
	bhi.n 0x5d22e	@ 0005d210 0dd8
.org 0x5d212
	ldr r0, [r6, #100]	@ 0005d212 706e
.org 0x5d214
	adds r0, r5, r0	@ 0005d214 2818
.org 0x5d216
	str r0, [r6, #92]	@ 0005d216 f065
.org 0x5d218
	cmp r0, #0	@ 0005d218 0028
.org 0x5d21a
	bge.n 0x5d220	@ 0005d21a 01da
.org 0x5d21c
	mov r3, ip	@ 0005d21c 6346
.org 0x5d21e
	str r3, [r6, #92]	@ 0005d21e f365
.org 0x5d220
	ldr r0, [r6, #104]	@ 0005d220 b06e
.org 0x5d222
	adds r0, r1, r0	@ 0005d222 0818
.org 0x5d224
	str r0, [r6, #96]	@ 0005d224 3066
.org 0x5d226
	cmp r0, #0	@ 0005d226 0028
.org 0x5d228
	bge.n 0x5d22e	@ 0005d228 01da
.org 0x5d22a
	mov r5, ip	@ 0005d22a 6546
.org 0x5d22c
	str r5, [r6, #96]	@ 0005d22c 3566
.org 0x5d22e
	mov r0, r8	@ 0005d22e 4046
.org 0x5d230
	cmp r0, #0	@ 0005d230 0028
.org 0x5d232
	beq.n 0x5d2b8	@ 0005d232 41d0
.org 0x5d234
	adds r0, r6, #0	@ 0005d234 301c
.org 0x5d236
	adds r0, #140	@ 0005d236 8c30
.org 0x5d238
	ldr r0, [r0, #0]	@ 0005d238 0068
.org 0x5d23a
	movs r1, #128	@ 0005d23a 8021
.org 0x5d23c
	lsls r1, r1, #4	@ 0005d23c 0901
.org 0x5d23e
	ands r0, r1	@ 0005d23e 0840
.org 0x5d240
	cmp r0, #0	@ 0005d240 0028
.org 0x5d242
	beq.n 0x5d2b8	@ 0005d242 39d0
.org 0x5d244
	movs r0, #0	@ 0005d244 0020
.org 0x5d246
	mov r1, r8	@ 0005d246 4146
.org 0x5d248
	str r0, [r1, #96]	@ 0005d248 0866
.org 0x5d24a
	adds r0, r6, #0	@ 0005d24a 301c
.org 0x5d24c
	adds r0, #192	@ 0005d24c c030
.org 0x5d24e
	ldr r2, [r6, #84]	@ 0005d24e 726d
.org 0x5d250
	ldr r0, [r0, #0]	@ 0005d250 0068
.org 0x5d252
	adds r2, r2, r0	@ 0005d252 1218
.org 0x5d254
	movs r1, #0	@ 0005d254 0021
.org 0x5d256
	ldrsb r1, [r4, r1]	@ 0005d256 6156
.org 0x5d258
	lsls r1, r1, #3	@ 0005d258 c900
.org 0x5d25a
	add r1, r9	@ 0005d25a 4944
.org 0x5d25c
	lsls r0, r7, #1	@ 0005d25c 7800
.org 0x5d25e
	subs r0, #1	@ 0005d25e 0138
.org 0x5d260
	ldr r1, [r1, #0]	@ 0005d260 0968
.org 0x5d262
	muls r0, r1	@ 0005d262 4843
.org 0x5d264
	adds r2, r2, r0	@ 0005d264 1218
.org 0x5d266
	mov r3, r8	@ 0005d266 4346
.org 0x5d268
	str r2, [r3, #84]	@ 0005d268 5a65
.org 0x5d26a
	adds r0, r6, #0	@ 0005d26a 301c
.org 0x5d26c
	adds r0, #196	@ 0005d26c c430
.org 0x5d26e
	ldr r2, [r6, #88]	@ 0005d26e b26d
.org 0x5d270
	ldr r0, [r0, #0]	@ 0005d270 0068
.org 0x5d272
	adds r2, r2, r0	@ 0005d272 1218
.org 0x5d274
	movs r1, #0	@ 0005d274 0021
.org 0x5d276
	ldrsb r1, [r4, r1]	@ 0005d276 6156
.org 0x5d278
	lsls r1, r1, #3	@ 0005d278 c900
.org 0x5d27a
	add r0, sp, #12	@ 0005d27a 03a8
.org 0x5d27c
	adds r0, r0, r1	@ 0005d27c 4018
.org 0x5d27e
	ldr r0, [r0, #0]	@ 0005d27e 0068
.org 0x5d280
	adds r2, r2, r0	@ 0005d280 1218
.org 0x5d282
	str r2, [r3, #88]	@ 0005d282 9a65
.org 0x5d284
	adds r0, r6, #0	@ 0005d284 301c
.org 0x5d286
	adds r0, #115	@ 0005d286 7330
.org 0x5d288
	ldrb r1, [r0, #0]	@ 0005d288 0178
.org 0x5d28a
	cmp r1, #3	@ 0005d28a 0329
.org 0x5d28c
	bne.n 0x5d2c0	@ 0005d28c 18d1
.org 0x5d28e
	ldrb r0, [r6, #18]	@ 0005d28e b07c
.org 0x5d290
	cmp r0, #0	@ 0005d290 0028
.org 0x5d292
	bne.n 0x5d2c0	@ 0005d292 15d1
.org 0x5d294
	strb r1, [r6, #14]	@ 0005d294 b173
.org 0x5d296
	strb r0, [r6, #15]	@ 0005d296 f073
.org 0x5d298
	b.n 0x5d2c0	@ 0005d298 12e0
.org 0x5d29a
	.byte 0x00	@ 0005d29a data
.org 0x5d29b
	.byte 0x00	@ 0005d29b data
.org 0x5d29c
	.byte 0x66,0x97,0x12,0x08	@ 0005d29c data
.org 0x5d2a0
	.byte 0x6c,0x97,0x12,0x08	@ 0005d2a0 data
.org 0x5d2a4
	.byte 0xf0,0xdb,0x02,0x02	@ 0005d2a4 data
.org 0x5d2a8
	.byte 0x00,0xfe,0xff,0xff	@ 0005d2a8 data
.org 0x5d2ac
	.byte 0xa8,0xa7,0x85,0x08	@ 0005d2ac data
