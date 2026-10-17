@ FUN_08043124  entry 0x08043124  size 790
.thumb
.org 0x43124
FUN_08043124:
	push {r4, r5, r6, r7, lr}	@ 00043124 f0b5
.org 0x43126
	mov r7, r8	@ 00043126 4746
.org 0x43128
	push {r7}	@ 00043128 80b4
.org 0x4312a
	adds r5, r0, #0	@ 0004312a 051c
.org 0x4312c
	ldr r7, [r5, #40]	@ 0004312c af6a
.org 0x4312e
	bl 0x1cff0	@ 0004312e d9f75fff
.org 0x43132
	ldrb r6, [r5, #13]	@ 00043132 6e7b
.org 0x43134
	cmp r6, #0	@ 00043134 002e
.org 0x43136
	beq.n 0x4313a	@ 00043136 00d0
.org 0x43138
	b.n 0x432e4	@ 00043138 d4e0
.org 0x4313a
	ldrb r0, [r5, #18]	@ 0004313a a87c
.org 0x4313c
	subs r0, #1	@ 0004313c 0138
.org 0x4313e
	movs r1, #0	@ 0004313e 0021
.org 0x43140
	mov r8, r1	@ 00043140 8846
.org 0x43142
	strb r0, [r5, #18]	@ 00043142 a874
.org 0x43144
	lsls r0, r0, #24	@ 00043144 0006
.org 0x43146
	lsrs r0, r0, #24	@ 00043146 000e
.org 0x43148
	cmp r0, #255	@ 00043148 ff28
.org 0x4314a
	beq.n 0x4314e	@ 0004314a 00d0
.org 0x4314c
	b.n 0x4346e	@ 0004314c 8fe1
.org 0x4314e
	adds r4, r5, #0	@ 0004314e 2c1c
.org 0x43150
	adds r4, #84	@ 00043150 5434
.org 0x43152
	adds r0, r7, #0	@ 00043152 381c
.org 0x43154
	adds r1, r4, #0	@ 00043154 211c
.org 0x43156
	bl 0x41318	@ 00043156 fef7dff8
.org 0x4315a
	lsls r0, r0, #24	@ 0004315a 0006
.org 0x4315c
	lsrs r3, r0, #24	@ 0004315c 030e
.org 0x4315e
	mov ip, r4	@ 0004315e a446
.org 0x43160
	cmp r3, #0	@ 00043160 002b
.org 0x43162
	beq.n 0x431a0	@ 00043162 1dd0
.org 0x43164
	ldrb r1, [r5, #10]	@ 00043164 a97a
.org 0x43166
	movs r0, #254	@ 00043166 fe20
.org 0x43168
	ands r0, r1	@ 00043168 0840
.org 0x4316a
	movs r1, #253	@ 0004316a fd21
.org 0x4316c
	ands r0, r1	@ 0004316c 0840
.org 0x4316e
	strb r0, [r5, #10]	@ 0004316e a872
.org 0x43170
	adds r0, r5, #0	@ 00043170 281c
.org 0x43172
	adds r0, #140	@ 00043172 8c30
.org 0x43174
	str r6, [r0, #0]	@ 00043174 0660
.org 0x43176
	adds r0, #4	@ 00043176 0430
.org 0x43178
	str r6, [r0, #0]	@ 00043178 0660
.org 0x4317a
	adds r0, #4	@ 0004317a 0430
.org 0x4317c
	strb r6, [r0, #0]	@ 0004317c 0670
.org 0x4317e
	ldrb r1, [r5, #10]	@ 0004317e a97a
.org 0x43180
	movs r0, #251	@ 00043180 fb20
.org 0x43182
	ands r0, r1	@ 00043182 0840
.org 0x43184
	strb r0, [r5, #10]	@ 00043184 a872
.org 0x43186
	ldr r1, [pc, #20]	@ 00043186 0549
.org 0x43188
	ldrb r0, [r5, #9]	@ 00043188 687a
.org 0x4318a
	lsls r0, r0, #2	@ 0004318a 8000
.org 0x4318c
	adds r0, r0, r1	@ 0004318c 4018
.org 0x4318e
	movs r1, #3	@ 0004318e 0321
.org 0x43190
	str r1, [r5, #12]	@ 00043190 e960
.org 0x43192
	ldr r0, [r0, #0]	@ 00043192 0068
.org 0x43194
	ldr r0, [r0, #12]	@ 00043194 c068
.org 0x43196
	str r0, [r5, #20]	@ 00043196 6861
.org 0x43198
	b.n 0x4346e	@ 00043198 69e1
.org 0x4319a
	.byte 0x00	@ 0004319a data
.org 0x4319b
	.byte 0x00	@ 0004319b data
.org 0x4319c
	.byte 0xf8,0x39,0x85,0x08	@ 0004319c data
.org 0x431a0
	ldrb r2, [r5, #16]	@ 000431a0 2a7c
.org 0x431a2
	cmp r2, #0	@ 000431a2 002a
.org 0x431a4
	bne.n 0x43204	@ 000431a4 2ed1
.org 0x431a6
	ldr r1, [r5, #84]	@ 000431a6 696d
.org 0x431a8
	ldr r0, [r7, #84]	@ 000431a8 786d
.org 0x431aa
	cmp r1, r0	@ 000431aa 8142
.org 0x431ac
	ble.n 0x431d8	@ 000431ac 14dd
.org 0x431ae
	movs r0, #192	@ 000431ae c020
.org 0x431b0
	lsls r0, r0, #1	@ 000431b0 4000
.org 0x431b2
	str r0, [r5, #92]	@ 000431b2 e865
.org 0x431b4
	movs r2, #1	@ 000431b4 0122
.org 0x431b6
	ldrb r0, [r5, #10]	@ 000431b6 a87a
.org 0x431b8
	movs r1, #16	@ 000431b8 1021
.org 0x431ba
	orrs r0, r1	@ 000431ba 0843
.org 0x431bc
	strb r0, [r5, #10]	@ 000431bc a872
.org 0x431be
	adds r0, r5, #0	@ 000431be 281c
.org 0x431c0
	adds r0, #76	@ 000431c0 4c30
.org 0x431c2
	strb r2, [r0, #0]	@ 000431c2 0270
.org 0x431c4
	adds r3, r5, #0	@ 000431c4 2b1c
.org 0x431c6
	adds r3, #74	@ 000431c6 4a33
.org 0x431c8
	movs r2, #16	@ 000431c8 1022
.org 0x431ca
	ldrb r1, [r3, #0]	@ 000431ca 1978
.org 0x431cc
	movs r0, #17	@ 000431cc 1120
.org 0x431ce
	negs r0, r0	@ 000431ce 4042
.org 0x431d0
	ands r0, r1	@ 000431d0 0840
.org 0x431d2
	orrs r0, r2	@ 000431d2 1043
.org 0x431d4
	strb r0, [r3, #0]	@ 000431d4 1870
.org 0x431d6
	b.n 0x431f8	@ 000431d6 0fe0
.org 0x431d8
	ldr r0, [pc, #32]	@ 000431d8 0848
.org 0x431da
	str r0, [r5, #92]	@ 000431da e865
.org 0x431dc
	ldrb r1, [r5, #10]	@ 000431dc a97a
.org 0x431de
	movs r0, #239	@ 000431de ef20
.org 0x431e0
	ands r0, r1	@ 000431e0 0840
.org 0x431e2
	strb r0, [r5, #10]	@ 000431e2 a872
.org 0x431e4
	adds r0, r5, #0	@ 000431e4 281c
.org 0x431e6
	adds r0, #76	@ 000431e6 4c30
.org 0x431e8
	strb r2, [r0, #0]	@ 000431e8 0270
.org 0x431ea
	adds r2, r5, #0	@ 000431ea 2a1c
.org 0x431ec
	adds r2, #74	@ 000431ec 4a32
.org 0x431ee
	ldrb r1, [r2, #0]	@ 000431ee 1178
.org 0x431f0
	movs r0, #17	@ 000431f0 1120
.org 0x431f2
	negs r0, r0	@ 000431f2 4042
.org 0x431f4
	ands r0, r1	@ 000431f4 0840
.org 0x431f6
	strb r0, [r2, #0]	@ 000431f6 1070
.org 0x431f8
	ldr r0, [pc, #4]	@ 000431f8 0148
.org 0x431fa
	b.n 0x432ac	@ 000431fa 57e0
.org 0x431fc
	.byte 0x80,0xfe,0xff,0xff	@ 000431fc data
.org 0x43200
	.byte 0x00,0xfa,0xff,0xff	@ 00043200 data
.org 0x43204
	ldr r1, [r5, #84]	@ 00043204 696d
.org 0x43206
	ldr r0, [r7, #84]	@ 00043206 786d
.org 0x43208
	cmp r1, r0	@ 00043208 8142
.org 0x4320a
	ble.n 0x4325c	@ 0004320a 27dd
.org 0x4320c
	ldr r3, [pc, #64]	@ 0004320c 104b
.org 0x4320e
	ldr r1, [r3, #0]	@ 0004320e 1968
.org 0x43210
	ldr r0, [pc, #64]	@ 00043210 1048
.org 0x43212
	muls r0, r1	@ 00043212 4843
.org 0x43214
	ldr r2, [pc, #64]	@ 00043214 104a
.org 0x43216
	adds r0, r0, r2	@ 00043216 8018
.org 0x43218
	lsls r0, r0, #1	@ 00043218 4000
.org 0x4321a
	lsrs r1, r0, #1	@ 0004321a 4108
.org 0x4321c
	str r1, [r3, #0]	@ 0004321c 1960
.org 0x4321e
	lsls r0, r0, #6	@ 0004321e 8001
.org 0x43220
	lsrs r0, r0, #23	@ 00043220 c00d
.org 0x43222
	movs r1, #192	@ 00043222 c021
.org 0x43224
	lsls r1, r1, #1	@ 00043224 4900
.org 0x43226
	adds r0, r0, r1	@ 00043226 4018
.org 0x43228
	str r0, [r5, #92]	@ 00043228 e865
.org 0x4322a
	movs r2, #1	@ 0004322a 0122
.org 0x4322c
	ldrb r0, [r5, #10]	@ 0004322c a87a
.org 0x4322e
	movs r1, #16	@ 0004322e 1021
.org 0x43230
	orrs r0, r1	@ 00043230 0843
.org 0x43232
	strb r0, [r5, #10]	@ 00043232 a872
.org 0x43234
	adds r0, r5, #0	@ 00043234 281c
.org 0x43236
	adds r0, #76	@ 00043236 4c30
.org 0x43238
	strb r2, [r0, #0]	@ 00043238 0270
.org 0x4323a
	adds r4, r5, #0	@ 0004323a 2c1c
.org 0x4323c
	adds r4, #74	@ 0004323c 4a34
.org 0x4323e
	movs r2, #16	@ 0004323e 1022
.org 0x43240
	ldrb r1, [r4, #0]	@ 00043240 2178
.org 0x43242
	movs r0, #17	@ 00043242 1120
.org 0x43244
	negs r0, r0	@ 00043244 4042
.org 0x43246
	ands r0, r1	@ 00043246 0840
.org 0x43248
	orrs r0, r2	@ 00043248 1043
.org 0x4324a
	strb r0, [r4, #0]	@ 0004324a 2070
.org 0x4324c
	adds r2, r3, #0	@ 0004324c 1a1c
.org 0x4324e
	b.n 0x43294	@ 0004324e 21e0
.org 0x43250
	.byte 0x38,0xdc,0x02,0x02	@ 00043250 data
.org 0x43254
	.byte 0xfd,0x43,0x03,0x00	@ 00043254 data
.org 0x43258
	.byte 0xc3,0x9e,0x26,0x00	@ 00043258 data
.org 0x4325c
	ldr r2, [pc, #216]	@ 0004325c 364a
.org 0x4325e
	ldr r1, [r2, #0]	@ 0004325e 1168
.org 0x43260
	ldr r0, [pc, #216]	@ 00043260 3648
.org 0x43262
	muls r0, r1	@ 00043262 4843
.org 0x43264
	ldr r1, [pc, #216]	@ 00043264 3649
.org 0x43266
	adds r0, r0, r1	@ 00043266 4018
.org 0x43268
	lsls r0, r0, #1	@ 00043268 4000
.org 0x4326a
	lsrs r1, r0, #1	@ 0004326a 4108
.org 0x4326c
	str r1, [r2, #0]	@ 0004326c 1160
.org 0x4326e
	lsls r0, r0, #6	@ 0004326e 8001
.org 0x43270
	lsrs r0, r0, #23	@ 00043270 c00d
.org 0x43272
	ldr r1, [pc, #208]	@ 00043272 3449
.org 0x43274
	subs r1, r1, r0	@ 00043274 091a
.org 0x43276
	str r1, [r5, #92]	@ 00043276 e965
.org 0x43278
	ldrb r1, [r5, #10]	@ 00043278 a97a
.org 0x4327a
	movs r0, #239	@ 0004327a ef20
.org 0x4327c
	ands r0, r1	@ 0004327c 0840
.org 0x4327e
	strb r0, [r5, #10]	@ 0004327e a872
.org 0x43280
	adds r0, r5, #0	@ 00043280 281c
.org 0x43282
	adds r0, #76	@ 00043282 4c30
.org 0x43284
	strb r3, [r0, #0]	@ 00043284 0370
.org 0x43286
	adds r4, r5, #0	@ 00043286 2c1c
.org 0x43288
	adds r4, #74	@ 00043288 4a34
.org 0x4328a
	ldrb r1, [r4, #0]	@ 0004328a 2178
.org 0x4328c
	movs r0, #17	@ 0004328c 1120
.org 0x4328e
	negs r0, r0	@ 0004328e 4042
.org 0x43290
	ands r0, r1	@ 00043290 0840
.org 0x43292
	strb r0, [r4, #0]	@ 00043292 2070
.org 0x43294
	ldr r1, [r2, #0]	@ 00043294 1168
.org 0x43296
	ldr r0, [pc, #164]	@ 00043296 2948
.org 0x43298
	muls r0, r1	@ 00043298 4843
.org 0x4329a
	ldr r1, [pc, #164]	@ 0004329a 2949
.org 0x4329c
	adds r0, r0, r1	@ 0004329c 4018
.org 0x4329e
	lsls r0, r0, #1	@ 0004329e 4000
.org 0x432a0
	lsrs r1, r0, #1	@ 000432a0 4108
.org 0x432a2
	str r1, [r2, #0]	@ 000432a2 1160
.org 0x432a4
	lsls r0, r0, #6	@ 000432a4 8001
.org 0x432a6
	lsrs r0, r0, #23	@ 000432a6 c00d
.org 0x432a8
	ldr r1, [pc, #156]	@ 000432a8 2749
.org 0x432aa
	adds r0, r0, r1	@ 000432aa 4018
.org 0x432ac
	str r0, [r5, #96]	@ 000432ac 2866
.org 0x432ae
	ldrb r1, [r5, #10]	@ 000432ae a97a
.org 0x432b0
	movs r0, #4	@ 000432b0 0420
.org 0x432b2
	orrs r0, r1	@ 000432b2 0843
.org 0x432b4
	strb r0, [r5, #10]	@ 000432b4 a872
.org 0x432b6
	adds r4, r5, #0	@ 000432b6 2c1c
.org 0x432b8
	adds r4, #116	@ 000432b8 7434
.org 0x432ba
	ldr r1, [pc, #144]	@ 000432ba 2449
.org 0x432bc
	adds r0, r4, #0	@ 000432bc 201c
.org 0x432be
	mov r2, ip	@ 000432be 6246
.org 0x432c0
	movs r3, #8	@ 000432c0 0823
.org 0x432c2
	bl 0x5760	@ 000432c2 c2f74dfa
.org 0x432c6
	str r5, [r4, #44]	@ 000432c6 e562
.org 0x432c8
	ldr r0, [pc, #132]	@ 000432c8 2148
.org 0x432ca
	str r0, [r4, #36]	@ 000432ca 6062
.org 0x432cc
	ldrb r1, [r5, #10]	@ 000432cc a97a
.org 0x432ce
	movs r0, #1	@ 000432ce 0120
.org 0x432d0
	orrs r0, r1	@ 000432d0 0843
.org 0x432d2
	strb r0, [r5, #10]	@ 000432d2 a872
.org 0x432d4
	adds r0, r7, #0	@ 000432d4 381c
.org 0x432d6
	bl 0x3aa4c	@ 000432d6 f7f7b9fb
.org 0x432da
	adds r1, r5, #0	@ 000432da 291c
.org 0x432dc
	adds r1, #189	@ 000432dc bd31
.org 0x432de
	movs r0, #1	@ 000432de 0120
.org 0x432e0
	strb r0, [r1, #0]	@ 000432e0 0870
.org 0x432e2
	strb r0, [r5, #13]	@ 000432e2 6873
.org 0x432e4
	ldr r1, [r5, #84]	@ 000432e4 696d
.org 0x432e6
	ldr r0, [r5, #92]	@ 000432e6 e86d
.org 0x432e8
	adds r2, r1, r0	@ 000432e8 0a18
.org 0x432ea
	str r2, [r5, #84]	@ 000432ea 6a65
.org 0x432ec
	ldrb r1, [r5, #10]	@ 000432ec a97a
.org 0x432ee
	movs r4, #16	@ 000432ee 1024
.org 0x432f0
	movs r0, #16	@ 000432f0 1020
.org 0x432f2
	ands r0, r1	@ 000432f2 0840
.org 0x432f4
	cmp r0, #0	@ 000432f4 0028
.org 0x432f6
	beq.n 0x43354	@ 000432f6 2dd0
.org 0x432f8
	movs r1, #128	@ 000432f8 8021
.org 0x432fa
	lsls r1, r1, #4	@ 000432fa 0901
.org 0x432fc
	adds r0, r2, r1	@ 000432fc 5018
.org 0x432fe
	ldr r1, [r5, #88]	@ 000432fe a96d
.org 0x43300
	bl 0x4353c	@ 00043300 00f01cf9
.org 0x43304
	lsls r0, r0, #16	@ 00043304 0004
.org 0x43306
	cmp r0, #0	@ 00043306 0028
.org 0x43308
	beq.n 0x433b8	@ 00043308 56d0
.org 0x4330a
	ldr r0, [r5, #84]	@ 0004330a 686d
.org 0x4330c
	movs r2, #128	@ 0004330c 8022
.org 0x4330e
	lsls r2, r2, #4	@ 0004330e 1201
.org 0x43310
	adds r0, r0, r2	@ 00043310 8018
.org 0x43312
	ldr r1, [r5, #88]	@ 00043312 a96d
.org 0x43314
	bl 0x816c	@ 00043314 c4f72aff
.org 0x43318
	ldr r1, [r5, #84]	@ 00043318 696d
.org 0x4331a
	adds r1, r1, r0	@ 0004331a 0918
.org 0x4331c
	str r1, [r5, #84]	@ 0004331c 6965
.org 0x4331e
	ldr r0, [r5, #92]	@ 0004331e e86d
.org 0x43320
	negs r0, r0	@ 00043320 4042
.org 0x43322
	str r0, [r5, #92]	@ 00043322 e865
.org 0x43324
	ldrb r2, [r5, #10]	@ 00043324 aa7a
.org 0x43326
	lsrs r0, r2, #4	@ 00043326 1009
.org 0x43328
	movs r1, #1	@ 00043328 0121
.org 0x4332a
	bics r1, r0	@ 0004332a 8143
.org 0x4332c
	cmp r1, #0	@ 0004332c 0029
.org 0x4332e
	beq.n 0x43394	@ 0004332e 31d0
.org 0x43330
	adds r0, r4, #0	@ 00043330 201c
.org 0x43332
	orrs r0, r2	@ 00043332 1043
.org 0x43334
	b.n 0x43398	@ 00043334 30e0
.org 0x43336
	.byte 0x00	@ 00043336 data
.org 0x43337
	.byte 0x00	@ 00043337 data
.org 0x43338
	.byte 0x38,0xdc,0x02,0x02	@ 00043338 data
.org 0x4333c
	.byte 0xfd,0x43,0x03,0x00	@ 0004333c data
.org 0x43340
	.byte 0xc3,0x9e,0x26,0x00	@ 00043340 data
.org 0x43344
	.byte 0x80,0xfe,0xff,0xff	@ 00043344 data
.org 0x43348
	.byte 0x00,0xfa,0xff,0xff	@ 00043348 data
.org 0x4334c
	.byte 0x00,0x5c,0x85,0x08	@ 0004334c data
.org 0x43350
	.byte 0xe1,0x34,0x04,0x08	@ 00043350 data
.org 0x43354
	ldr r1, [pc, #56]	@ 00043354 0e49
.org 0x43356
	adds r0, r2, r1	@ 00043356 5018
.org 0x43358
	ldr r1, [r5, #88]	@ 00043358 a96d
.org 0x4335a
	bl 0x4353c	@ 0004335a 00f0eff8
.org 0x4335e
	lsls r0, r0, #16	@ 0004335e 0004
.org 0x43360
	cmp r0, #0	@ 00043360 0028
.org 0x43362
	beq.n 0x433b8	@ 00043362 29d0
.org 0x43364
	ldr r0, [r5, #84]	@ 00043364 686d
.org 0x43366
	ldr r2, [pc, #40]	@ 00043366 0a4a
.org 0x43368
	adds r0, r0, r2	@ 00043368 8018
.org 0x4336a
	ldr r1, [r5, #88]	@ 0004336a a96d
.org 0x4336c
	bl 0x834c	@ 0004336c c4f7eeff
.org 0x43370
	ldr r1, [r5, #84]	@ 00043370 696d
.org 0x43372
	adds r1, r1, r0	@ 00043372 0918
.org 0x43374
	str r1, [r5, #84]	@ 00043374 6965
.org 0x43376
	ldr r0, [r5, #92]	@ 00043376 e86d
.org 0x43378
	negs r0, r0	@ 00043378 4042
.org 0x4337a
	str r0, [r5, #92]	@ 0004337a e865
.org 0x4337c
	ldrb r2, [r5, #10]	@ 0004337c aa7a
.org 0x4337e
	lsrs r0, r2, #4	@ 0004337e 1009
.org 0x43380
	movs r1, #1	@ 00043380 0121
.org 0x43382
	bics r1, r0	@ 00043382 8143
.org 0x43384
	cmp r1, #0	@ 00043384 0029
.org 0x43386
	beq.n 0x43394	@ 00043386 05d0
.org 0x43388
	adds r0, r2, #0	@ 00043388 101c
.org 0x4338a
	orrs r0, r4	@ 0004338a 2043
.org 0x4338c
	b.n 0x43398	@ 0004338c 04e0
.org 0x4338e
	.byte 0x00	@ 0004338e data
.org 0x4338f
	.byte 0x00	@ 0004338f data
.org 0x43390
	.byte 0x00,0xf8,0xff,0xff	@ 00043390 data
.org 0x43394
	movs r0, #239	@ 00043394 ef20
.org 0x43396
	ands r0, r2	@ 00043396 1040
.org 0x43398
	strb r0, [r5, #10]	@ 00043398 a872
.org 0x4339a
	adds r0, r5, #0	@ 0004339a 281c
.org 0x4339c
	adds r0, #76	@ 0004339c 4c30
.org 0x4339e
	strb r1, [r0, #0]	@ 0004339e 0170
.org 0x433a0
	adds r3, r5, #0	@ 000433a0 2b1c
.org 0x433a2
	adds r3, #74	@ 000433a2 4a33
.org 0x433a4
	lsls r1, r1, #4	@ 000433a4 0901
.org 0x433a6
	ldrb r2, [r3, #0]	@ 000433a6 1a78
.org 0x433a8
	movs r0, #17	@ 000433a8 1120
.org 0x433aa
	negs r0, r0	@ 000433aa 4042
.org 0x433ac
	ands r0, r2	@ 000433ac 1040
.org 0x433ae
	orrs r0, r1	@ 000433ae 0843
.org 0x433b0
	strb r0, [r3, #0]	@ 000433b0 1870
.org 0x433b2
	ldrb r0, [r5, #19]	@ 000433b2 e87c
.org 0x433b4
	adds r0, #1	@ 000433b4 0130
.org 0x433b6
	strb r0, [r5, #19]	@ 000433b6 e874
.org 0x433b8
	ldr r0, [r5, #96]	@ 000433b8 286e
.org 0x433ba
	adds r0, #64	@ 000433ba 4030
.org 0x433bc
	str r0, [r5, #96]	@ 000433bc 2866
.org 0x433be
	movs r1, #224	@ 000433be e021
.org 0x433c0
	lsls r1, r1, #3	@ 000433c0 c900
.org 0x433c2
	cmp r0, r1	@ 000433c2 8842
.org 0x433c4
	ble.n 0x433c8	@ 000433c4 00dd
.org 0x433c6
	str r1, [r5, #96]	@ 000433c6 2966
.org 0x433c8
	ldr r1, [r5, #88]	@ 000433c8 a96d
.org 0x433ca
	ldr r0, [r5, #96]	@ 000433ca 286e
.org 0x433cc
	adds r1, r1, r0	@ 000433cc 0918
.org 0x433ce
	str r1, [r5, #88]	@ 000433ce a965
.org 0x433d0
	ldr r0, [r5, #84]	@ 000433d0 686d
.org 0x433d2
	movs r2, #128	@ 000433d2 8022
.org 0x433d4
	lsls r2, r2, #4	@ 000433d4 1201
.org 0x433d6
	adds r1, r1, r2	@ 000433d6 8918
.org 0x433d8
	bl 0x4353c	@ 000433d8 00f0b0f8
.org 0x433dc
	lsls r0, r0, #16	@ 000433dc 0004
.org 0x433de
	cmp r0, #0	@ 000433de 0028
.org 0x433e0
	beq.n 0x43402	@ 000433e0 0fd0
.org 0x433e2
	ldr r0, [r5, #84]	@ 000433e2 686d
.org 0x433e4
	ldr r1, [r5, #88]	@ 000433e4 a96d
.org 0x433e6
	movs r2, #128	@ 000433e6 8022
.org 0x433e8
	lsls r2, r2, #4	@ 000433e8 1201
.org 0x433ea
	adds r1, r1, r2	@ 000433ea 8918
.org 0x433ec
	bl 0x7db4	@ 000433ec c4f7e2fc
.org 0x433f0
	ldr r1, [r5, #88]	@ 000433f0 a96d
.org 0x433f2
	adds r1, r1, r0	@ 000433f2 0918
.org 0x433f4
	str r1, [r5, #88]	@ 000433f4 a965
.org 0x433f6
	ldr r0, [r5, #96]	@ 000433f6 286e
.org 0x433f8
	negs r0, r0	@ 000433f8 4042
.org 0x433fa
	str r0, [r5, #96]	@ 000433fa 2866
.org 0x433fc
	ldrb r0, [r5, #19]	@ 000433fc e87c
.org 0x433fe
	adds r0, #1	@ 000433fe 0130
.org 0x43400
	strb r0, [r5, #19]	@ 00043400 e874
.org 0x43402
	ldr r0, [r5, #84]	@ 00043402 686d
.org 0x43404
	ldr r1, [r5, #88]	@ 00043404 a96d
.org 0x43406
	ldr r2, [pc, #112]	@ 00043406 1c4a
.org 0x43408
	adds r1, r1, r2	@ 00043408 8918
.org 0x4340a
	bl 0x4353c	@ 0004340a 00f097f8
.org 0x4340e
	lsls r0, r0, #16	@ 0004340e 0004
.org 0x43410
	cmp r0, #0	@ 00043410 0028
.org 0x43412
	beq.n 0x43432	@ 00043412 0ed0
.org 0x43414
	ldr r0, [r5, #84]	@ 00043414 686d
.org 0x43416
	ldr r1, [r5, #88]	@ 00043416 a96d
.org 0x43418
	ldr r2, [pc, #92]	@ 00043418 174a
.org 0x4341a
	adds r1, r1, r2	@ 0004341a 8918
.org 0x4341c
	bl 0x7f8c	@ 0004341c c4f7b6fd
.org 0x43420
	ldr r1, [r5, #88]	@ 00043420 a96d
.org 0x43422
	adds r1, r1, r0	@ 00043422 0918
.org 0x43424
	str r1, [r5, #88]	@ 00043424 a965
.org 0x43426
	ldr r0, [r5, #96]	@ 00043426 286e
.org 0x43428
	negs r0, r0	@ 00043428 4042
.org 0x4342a
	str r0, [r5, #96]	@ 0004342a 2866
.org 0x4342c
	ldrb r0, [r5, #19]	@ 0004342c e87c
.org 0x4342e
	adds r0, #1	@ 0004342e 0130
.org 0x43430
	strb r0, [r5, #19]	@ 00043430 e874
.org 0x43432
	ldrb r0, [r5, #19]	@ 00043432 e87c
.org 0x43434
	cmp r0, #5	@ 00043434 0528
.org 0x43436
	bhi.n 0x43446	@ 00043436 06d8
.org 0x43438
	adds r0, r5, #0	@ 00043438 281c
