@ FUN_08031150  entry 0x08031150  size 404
.thumb
.org 0x31150
FUN_08031150:
	push {r4, r5, r6, r7, lr}	@ 00031150 f0b5
.org 0x31152
	mov r7, r8	@ 00031152 4746
.org 0x31154
	push {r7}	@ 00031154 80b4
.org 0x31156
	adds r4, r0, #0	@ 00031156 041c
.org 0x31158
	ldrb r0, [r4, #30]	@ 00031158 a07f
.org 0x3115a
	lsls r0, r0, #8	@ 0003115a 0002
.org 0x3115c
	adds r1, r4, #0	@ 0003115c 211c
.org 0x3115e
	adds r1, #112	@ 0003115e 7031
.org 0x31160
	ldrb r1, [r1, #0]	@ 00031160 0978
.org 0x31162
	orrs r1, r0	@ 00031162 0143
.org 0x31164
	ldr r2, [pc, #108]	@ 00031164 1b4a
.org 0x31166
	cmp r1, r2	@ 00031166 9142
.org 0x31168
	beq.n 0x31180	@ 00031168 0ad0
.org 0x3116a
	adds r0, r4, #0	@ 0003116a 201c
.org 0x3116c
	adds r0, #115	@ 0003116c 7330
.org 0x3116e
	ldrb r0, [r0, #0]	@ 0003116e 0078
.org 0x31170
	cmp r0, #3	@ 00031170 0328
.org 0x31172
	bne.n 0x31180	@ 00031172 05d1
.org 0x31174
	adds r0, r4, #0	@ 00031174 201c
.org 0x31176
	adds r1, r2, #0	@ 00031176 111c
.org 0x31178
	movs r2, #1	@ 00031178 0122
.org 0x3117a
	movs r3, #4	@ 0003117a 0423
.org 0x3117c
	bl 0x1cfc8	@ 0003117c ebf724ff
.org 0x31180
	movs r0, #158	@ 00031180 9e20
.org 0x31182
	lsls r0, r0, #1	@ 00031182 4000
.org 0x31184
	adds r5, r4, r0	@ 00031184 2518
.org 0x31186
	ldrb r0, [r5, #0]	@ 00031186 2878
.org 0x31188
	adds r7, r4, #0	@ 00031188 271c
.org 0x3118a
	adds r7, #180	@ 0003118a b437
.org 0x3118c
	cmp r0, #0	@ 0003118c 0028
.org 0x3118e
	beq.n 0x311c8	@ 0003118e 1bd0
.org 0x31190
	subs r0, #1	@ 00031190 0138
.org 0x31192
	strb r0, [r5, #0]	@ 00031192 2870
.org 0x31194
	movs r1, #150	@ 00031194 9621
.org 0x31196
	lsls r1, r1, #2	@ 00031196 8900
.org 0x31198
	adds r0, r4, r1	@ 00031198 6018
.org 0x3119a
	ldr r0, [r0, #0]	@ 0003119a 0068
.org 0x3119c
	movs r1, #4	@ 0003119c 0421
.org 0x3119e
	ands r0, r1	@ 0003119e 0840
.org 0x311a0
	cmp r0, #0	@ 000311a0 0028
.org 0x311a2
	beq.n 0x311c8	@ 000311a2 11d0
.org 0x311a4
	movs r0, #8	@ 000311a4 0820
.org 0x311a6
	bl 0x2b10	@ 000311a6 d1f7b3fc
.org 0x311aa
	movs r0, #0	@ 000311aa 0020
.org 0x311ac
	strb r0, [r5, #0]	@ 000311ac 2870
.org 0x311ae
	adds r0, r4, #0	@ 000311ae 201c
.org 0x311b0
	bl 0x38790	@ 000311b0 07f0eefa
.org 0x311b4
	lsls r0, r0, #16	@ 000311b4 0004
.org 0x311b6
	asrs r0, r0, #16	@ 000311b6 0014
.org 0x311b8
	str r0, [r4, #92]	@ 000311b8 e065
.org 0x311ba
	ldr r0, [r7, #84]	@ 000311ba 786d
.org 0x311bc
	cmp r0, #0	@ 000311bc 0028
.org 0x311be
	bne.n 0x311c8	@ 000311be 03d1
.org 0x311c0
	adds r0, r4, #0	@ 000311c0 201c
.org 0x311c2
	bl 0xd2690	@ 000311c2 a1f065fa
.org 0x311c6
	str r0, [r7, #84]	@ 000311c6 7865
.org 0x311c8
	ldr r2, [r7, #104]	@ 000311c8 ba6e
.org 0x311ca
	cmp r2, #0	@ 000311ca 002a
.org 0x311cc
	beq.n 0x311d8	@ 000311cc 04d0
.org 0x311ce
	lsls r0, r2, #16	@ 000311ce 1004
.org 0x311d0
	lsrs r3, r0, #16	@ 000311d0 030c
.org 0x311d2
	b.n 0x31246	@ 000311d2 38e0
.org 0x311d4
	.byte 0x03,0x04,0x00,0x00	@ 000311d4 data
.org 0x311d8
	movs r1, #150	@ 000311d8 9621
.org 0x311da
	lsls r1, r1, #2	@ 000311da 8900
.org 0x311dc
	adds r0, r4, r1	@ 000311dc 6018
.org 0x311de
	ldr r1, [r0, #0]	@ 000311de 0168
.org 0x311e0
	movs r0, #32	@ 000311e0 2020
.org 0x311e2
	ands r0, r1	@ 000311e2 0840
.org 0x311e4
	cmp r0, #0	@ 000311e4 0028
.org 0x311e6
	beq.n 0x31214	@ 000311e6 15d0
.org 0x311e8
	ldr r0, [r4, #92]	@ 000311e8 e06d
.org 0x311ea
	cmp r0, #0	@ 000311ea 0028
.org 0x311ec
	bge.n 0x311f0	@ 000311ec 00da
.org 0x311ee
	negs r0, r0	@ 000311ee 4042
.org 0x311f0
	negs r0, r0	@ 000311f0 4042
.org 0x311f2
	lsls r0, r0, #16	@ 000311f2 0004
.org 0x311f4
	lsrs r3, r0, #16	@ 000311f4 030c
.org 0x311f6
	adds r0, r4, #0	@ 000311f6 201c
.org 0x311f8
	adds r0, #76	@ 000311f8 4c30
.org 0x311fa
	strb r2, [r0, #0]	@ 000311fa 0270
.org 0x311fc
	adds r2, r4, #0	@ 000311fc 221c
.org 0x311fe
	adds r2, #74	@ 000311fe 4a32
.org 0x31200
	ldrb r1, [r2, #0]	@ 00031200 1178
.org 0x31202
	movs r0, #17	@ 00031202 1120
.org 0x31204
	negs r0, r0	@ 00031204 4042
.org 0x31206
	ands r0, r1	@ 00031206 0840
.org 0x31208
	strb r0, [r2, #0]	@ 00031208 1070
.org 0x3120a
	ldrb r1, [r4, #10]	@ 0003120a a17a
.org 0x3120c
	movs r0, #239	@ 0003120c ef20
.org 0x3120e
	ands r0, r1	@ 0003120e 0840
.org 0x31210
	strb r0, [r4, #10]	@ 00031210 a072
.org 0x31212
	b.n 0x31246	@ 00031212 18e0
.org 0x31214
	movs r0, #16	@ 00031214 1020
.org 0x31216
	ands r1, r0	@ 00031216 0140
.org 0x31218
	cmp r1, #0	@ 00031218 0029
.org 0x3121a
	beq.n 0x31244	@ 0003121a 13d0
.org 0x3121c
	ldr r0, [r4, #92]	@ 0003121c e06d
.org 0x3121e
	cmp r0, #0	@ 0003121e 0028
.org 0x31220
	bge.n 0x31224	@ 00031220 00da
.org 0x31222
	negs r0, r0	@ 00031222 4042
.org 0x31224
	lsls r0, r0, #16	@ 00031224 0004
.org 0x31226
	lsrs r3, r0, #16	@ 00031226 030c
.org 0x31228
	adds r1, r4, #0	@ 00031228 211c
.org 0x3122a
	adds r1, #76	@ 0003122a 4c31
.org 0x3122c
	movs r0, #1	@ 0003122c 0120
.org 0x3122e
	strb r0, [r1, #0]	@ 0003122e 0870
.org 0x31230
	adds r2, r4, #0	@ 00031230 221c
.org 0x31232
	adds r2, #74	@ 00031232 4a32
.org 0x31234
	ldrb r0, [r2, #0]	@ 00031234 1078
.org 0x31236
	movs r1, #16	@ 00031236 1021
.org 0x31238
	orrs r0, r1	@ 00031238 0843
.org 0x3123a
	strb r0, [r2, #0]	@ 0003123a 1070
.org 0x3123c
	ldrb r0, [r4, #10]	@ 0003123c a07a
.org 0x3123e
	orrs r1, r0	@ 0003123e 0143
.org 0x31240
	strb r1, [r4, #10]	@ 00031240 a172
.org 0x31242
	b.n 0x31246	@ 00031242 00e0
.org 0x31244
	movs r3, #0	@ 00031244 0023
.org 0x31246
	lsls r1, r3, #16	@ 00031246 1904
.org 0x31248
	asrs r1, r1, #16	@ 00031248 0914
.org 0x3124a
	ldr r0, [r4, #84]	@ 0003124a 606d
.org 0x3124c
	adds r0, r0, r1	@ 0003124c 4018
.org 0x3124e
	str r0, [r4, #84]	@ 0003124e 6065
.org 0x31250
	adds r6, r7, #0	@ 00031250 3e1c
.org 0x31252
	movs r0, #186	@ 00031252 ba20
.org 0x31254
	lsls r0, r0, #1	@ 00031254 4000
.org 0x31256
	adds r5, r4, r0	@ 00031256 2518
.org 0x31258
	ldrb r1, [r5, #0]	@ 00031258 2978
.org 0x3125a
	lsls r1, r1, #3	@ 0003125a c900
.org 0x3125c
	ldr r0, [pc, #136]	@ 0003125c 2248
.org 0x3125e
	mov r8, r0	@ 0003125e 8046
.org 0x31260
	add r1, r8	@ 00031260 4144
.org 0x31262
	adds r0, r4, #0	@ 00031262 201c
.org 0x31264
	movs r2, #0	@ 00031264 0022
.org 0x31266
	bl 0x2b7f0	@ 00031266 faf7c3fa
.org 0x3126a
	lsls r0, r0, #16	@ 0003126a 0004
.org 0x3126c
	cmp r0, #0	@ 0003126c 0028
.org 0x3126e
	beq.n 0x31274	@ 0003126e 01d0
.org 0x31270
	movs r0, #0	@ 00031270 0020
.org 0x31272
	str r0, [r6, #104]	@ 00031272 b066
.org 0x31274
	ldrb r1, [r5, #0]	@ 00031274 2978
.org 0x31276
	lsls r1, r1, #3	@ 00031276 c900
.org 0x31278
	add r1, r8	@ 00031278 4144
.org 0x3127a
	adds r0, r4, #0	@ 0003127a 201c
.org 0x3127c
	movs r2, #1	@ 0003127c 0122
.org 0x3127e
	bl 0x2b7f0	@ 0003127e faf7b7fa
.org 0x31282
	lsls r0, r0, #16	@ 00031282 0004
.org 0x31284
	cmp r0, #0	@ 00031284 0028
.org 0x31286
	beq.n 0x3128c	@ 00031286 01d0
.org 0x31288
	movs r0, #0	@ 00031288 0020
.org 0x3128a
	str r0, [r7, #104]	@ 0003128a b866
.org 0x3128c
	ldr r0, [r4, #88]	@ 0003128c a06d
.org 0x3128e
	ldr r1, [r4, #96]	@ 0003128e 216e
.org 0x31290
	adds r0, r0, r1	@ 00031290 4018
.org 0x31292
	str r0, [r4, #88]	@ 00031292 a065
.org 0x31294
	adds r0, r4, #0	@ 00031294 201c
.org 0x31296
	bl 0x3851c	@ 00031296 07f041f9
.org 0x3129a
	lsls r0, r0, #16	@ 0003129a 0004
.org 0x3129c
	asrs r0, r0, #16	@ 0003129c 0014
.org 0x3129e
	ldr r1, [r4, #96]	@ 0003129e 216e
.org 0x312a0
	adds r1, r1, r0	@ 000312a0 0918
.org 0x312a2
	str r1, [r4, #96]	@ 000312a2 2166
.org 0x312a4
	ldrb r1, [r5, #0]	@ 000312a4 2978
.org 0x312a6
	lsls r1, r1, #3	@ 000312a6 c900
.org 0x312a8
	add r1, r8	@ 000312a8 4144
.org 0x312aa
	adds r0, r4, #0	@ 000312aa 201c
.org 0x312ac
	movs r2, #0	@ 000312ac 0022
.org 0x312ae
	bl 0x2bfe8	@ 000312ae faf79bfe
.org 0x312b2
	lsls r0, r0, #16	@ 000312b2 0004
.org 0x312b4
	lsrs r1, r0, #16	@ 000312b4 010c
.org 0x312b6
	cmp r1, #0	@ 000312b6 0029
.org 0x312b8
	bne.n 0x312cc	@ 000312b8 08d1
.org 0x312ba
	ldrb r1, [r5, #0]	@ 000312ba 2978
.org 0x312bc
	lsls r1, r1, #3	@ 000312bc c900
.org 0x312be
	add r1, r8	@ 000312be 4144
.org 0x312c0
	adds r0, r4, #0	@ 000312c0 201c
.org 0x312c2
	movs r2, #1	@ 000312c2 0122
.org 0x312c4
	bl 0x2c2d4	@ 000312c4 fbf706f8
.org 0x312c8
	lsls r0, r0, #16	@ 000312c8 0004
.org 0x312ca
	lsrs r1, r0, #16	@ 000312ca 010c
.org 0x312cc
	ldr r0, [r4, #96]	@ 000312cc 206e
.org 0x312ce
	cmp r0, #0	@ 000312ce 0028
.org 0x312d0
	bgt.n 0x312d6	@ 000312d0 01dc
.org 0x312d2
	cmp r1, #0	@ 000312d2 0029
.org 0x312d4
	beq.n 0x312de	@ 000312d4 03d0
.org 0x312d6
	movs r1, #0	@ 000312d6 0021
.org 0x312d8
	movs r0, #2	@ 000312d8 0220
.org 0x312da
	strb r0, [r4, #14]	@ 000312da a073
.org 0x312dc
	strb r1, [r4, #15]	@ 000312dc e173
.org 0x312de
	pop {r3}	@ 000312de 08bc
.org 0x312e0
	mov r8, r3	@ 000312e0 9846
.org 0x312e2
	pop {r4, r5, r6, r7}	@ 000312e2 f0bc
