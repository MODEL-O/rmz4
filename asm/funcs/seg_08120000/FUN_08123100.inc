@ FUN_08123100  entry 0x08123100  size 550
.thumb
.org 0x123100
FUN_08123100:
	push {r4, r5, r6, r7, lr}	@ 00123100 f0b5
.org 0x123102
	mov r7, sl	@ 00123102 5746
.org 0x123104
	mov r6, r9	@ 00123104 4e46
.org 0x123106
	mov r5, r8	@ 00123106 4546
.org 0x123108
	push {r5, r6, r7}	@ 00123108 e0b4
.org 0x12310a
	sub sp, #8	@ 0012310a 82b0
.org 0x12310c
	adds r6, r0, #0	@ 0012310c 061c
.org 0x12310e
	ldrh r0, [r6, #4]	@ 0012310e b088
.org 0x123110
	movs r2, #4	@ 00123110 0422
.org 0x123112
	ldrsh r1, [r6, r2]	@ 00123112 b15e
.org 0x123114
	cmp r1, #31	@ 00123114 1f29
.org 0x123116
	bgt.n 0x123134	@ 00123116 0ddc
.org 0x123118
	adds r0, #1	@ 00123118 0130
.org 0x12311a
	adds r1, r0, #0	@ 0012311a 011c
.org 0x12311c
	strh r0, [r6, #4]	@ 0012311c b080
.org 0x12311e
	ldr r2, [pc, #12]	@ 0012311e 034a
.org 0x123120
	ldr r3, [pc, #12]	@ 00123120 034b
.org 0x123122
	adds r0, r2, r3	@ 00123122 d018
.org 0x123124
	strb r1, [r0, #0]	@ 00123124 0170
.org 0x123126
	movs r0, #255	@ 00123126 ff20
.org 0x123128
	b.n 0x123148	@ 00123128 0ee0
.org 0x12312a
	.byte 0x00	@ 0012312a data
.org 0x12312b
	.byte 0x00	@ 0012312b data
.org 0x12312c
	.byte 0xc0,0x2a,0x00,0x03	@ 0012312c data
.org 0x123130
	.byte 0x02,0x04,0x00,0x00	@ 00123130 data
.org 0x123134
	cmp r1, #32	@ 00123134 2029
.org 0x123136
	ble.n 0x123158	@ 00123136 0fdd
.org 0x123138
	subs r0, #1	@ 00123138 0138
.org 0x12313a
	strh r0, [r6, #4]	@ 0012313a b080
.org 0x12313c
	ldr r2, [pc, #92]	@ 0012313c 174a
.org 0x12313e
	subs r0, #32	@ 0012313e 2038
.org 0x123140
	ldr r3, [pc, #92]	@ 00123140 174b
.org 0x123142
	adds r1, r2, r3	@ 00123142 d118
.org 0x123144
	strb r0, [r1, #0]	@ 00123144 0870
.org 0x123146
	movs r1, #255	@ 00123146 ff21
.org 0x123148
	ands r0, r1	@ 00123148 0840
.org 0x12314a
	subs r3, #1	@ 0012314a 013b
.org 0x12314c
	adds r1, r2, r3	@ 0012314c d118
.org 0x12314e
	strb r0, [r1, #0]	@ 0012314e 0870
.org 0x123150
	movs r1, #128	@ 00123150 8021
.org 0x123152
	lsls r1, r1, #3	@ 00123152 c900
.org 0x123154
	adds r2, r2, r1	@ 00123154 5218
.org 0x123156
	strb r0, [r2, #0]	@ 00123156 1070
.org 0x123158
	ldr r2, [pc, #72]	@ 00123158 124a
.org 0x12315a
	adds r1, r6, r2	@ 0012315a b118
.org 0x12315c
	ldr r0, [r1, #0]	@ 0012315c 0868
.org 0x12315e
	adds r0, #1	@ 0012315e 0130
.org 0x123160
	str r0, [r1, #0]	@ 00123160 0860
.org 0x123162
	movs r3, #154	@ 00123162 9a23
.org 0x123164
	lsls r3, r3, #4	@ 00123164 1b01
.org 0x123166
	adds r0, r6, r3	@ 00123166 f018
.org 0x123168
	bl 0x3470	@ 00123168 e0f682f9
.org 0x12316c
	ldr r1, [pc, #56]	@ 0012316c 0e49
.org 0x12316e
	movs r0, #0	@ 0012316e 0020
.org 0x123170
	strb r0, [r1, #0]	@ 00123170 0870
.org 0x123172
	movs r0, #0	@ 00123172 0020
.org 0x123174
	ldr r1, [pc, #52]	@ 00123174 0d49
.org 0x123176
	str r0, [sp, #0]	@ 00123176 0090
.org 0x123178
	movs r4, #8	@ 00123178 0824
.org 0x12317a
	ldr r2, [pc, #52]	@ 0012317a 0d4a
.org 0x12317c
	mov r0, sp	@ 0012317c 6846
.org 0x12317e
	bl 0x128be0	@ 0012317e 05f02ffd
.org 0x123182
	ldr r1, [pc, #48]	@ 00123182 0c49
.org 0x123184
	ldrb r0, [r6, #1]	@ 00123184 7078
.org 0x123186
	lsls r0, r0, #2	@ 00123186 8000
.org 0x123188
	adds r0, r0, r1	@ 00123188 4018
.org 0x12318a
	ldr r1, [r0, #0]	@ 0012318a 0168
.org 0x12318c
	adds r0, r6, #0	@ 0012318c 301c
.org 0x12318e
	bl 0x128f80	@ 0012318e 05f0f7fe
.org 0x123192
	cmp r0, #0	@ 00123192 0028
.org 0x123194
	bne.n 0x1231b8	@ 00123194 10d1
.org 0x123196
	movs r0, #2	@ 00123196 0220
.org 0x123198
	strb r0, [r6, #2]	@ 00123198 b070
.org 0x12319a
	b.n 0x1231dc	@ 0012319a 1fe0
.org 0x12319c
	.byte 0xc0,0x2a,0x00,0x03	@ 0012319c data
.org 0x1231a0
	.byte 0x02,0x04,0x00,0x00	@ 001231a0 data
.org 0x1231a4
	.byte 0xd8,0x1e,0x00,0x00	@ 001231a4 data
.org 0x1231a8
	.byte 0x04,0xdc,0x02,0x02	@ 001231a8 data
.org 0x1231ac
	.byte 0x10,0xdc,0x02,0x02	@ 001231ac data
.org 0x1231b0
	.byte 0x08,0x00,0x00,0x01	@ 001231b0 data
.org 0x1231b4
	.byte 0x4c,0x23,0x88,0x08	@ 001231b4 data
.org 0x1231b8
	ldr r1, [pc, #400]	@ 001231b8 6449
.org 0x1231ba
	adds r0, r6, r1	@ 001231ba 7018
.org 0x1231bc
	ldrb r5, [r0, #24]	@ 001231bc 057e
.org 0x1231be
	cmp r5, #1	@ 001231be 012d
.org 0x1231c0
	bne.n 0x1231dc	@ 001231c0 0cd1
.org 0x1231c2
	ldr r0, [pc, #396]	@ 001231c2 6348
.org 0x1231c4
	ldrh r0, [r0, #4]	@ 001231c4 8088
.org 0x1231c6
	ands r4, r0	@ 001231c6 0440
.org 0x1231c8
	cmp r4, #0	@ 001231c8 002c
.org 0x1231ca
	beq.n 0x1231dc	@ 001231ca 07d0
.org 0x1231cc
	movs r0, #230	@ 001231cc e620
.org 0x1231ce
	bl 0x10e584	@ 001231ce ebf7d9f9
.org 0x1231d2
	movs r1, #0	@ 001231d2 0021
.org 0x1231d4
	strh r5, [r6, #6]	@ 001231d4 f580
.org 0x1231d6
	movs r0, #3	@ 001231d6 0320
.org 0x1231d8
	strb r0, [r6, #2]	@ 001231d8 b070
.org 0x1231da
	strb r1, [r6, #3]	@ 001231da f170
.org 0x1231dc
	ldr r7, [pc, #372]	@ 001231dc 5d4f
.org 0x1231de
	movs r2, #192	@ 001231de c022
.org 0x1231e0
	lsls r2, r2, #2	@ 001231e0 9200
.org 0x1231e2
	adds r2, r2, r7	@ 001231e2 d219
.org 0x1231e4
	mov sl, r2	@ 001231e4 9246
.org 0x1231e6
	subs r3, r7, #2	@ 001231e6 bb1e
.org 0x1231e8
	mov r9, r3	@ 001231e8 9946
.org 0x1231ea
	ldrb r0, [r3, #0]	@ 001231ea 1878
.org 0x1231ec
	lsls r4, r0, #1	@ 001231ec 4400
.org 0x1231ee
	adds r4, r4, r0	@ 001231ee 2418
.org 0x1231f0
	lsls r4, r4, #3	@ 001231f0 e400
.org 0x1231f2
	movs r5, #32	@ 001231f2 2025
.org 0x1231f4
	negs r5, r5	@ 001231f4 6d42
.org 0x1231f6
	ands r5, r4	@ 001231f6 2540
.org 0x1231f8
	ldr r0, [pc, #348]	@ 001231f8 5748
.org 0x1231fa
	mov r8, r0	@ 001231fa 8046
.org 0x1231fc
	lsrs r2, r5, #2	@ 001231fc aa08
.org 0x1231fe
	adds r0, r7, #0	@ 001231fe 381c
.org 0x123200
	mov r1, sl	@ 00123200 5146
.org 0x123202
	bl 0x128be0	@ 00123202 05f0edfc
.org 0x123206
	movs r2, #31	@ 00123206 1f22
.org 0x123208
	ands r2, r4	@ 00123208 2240
.org 0x12320a
	cmp r2, #0	@ 0012320a 002a
.org 0x12320c
	beq.n 0x123224	@ 0012320c 0ad0
.org 0x12320e
	adds r0, r5, r7	@ 0012320e e819
.org 0x123210
	mov r3, sl	@ 00123210 5346
.org 0x123212
	adds r1, r5, r3	@ 00123212 e918
.org 0x123214
	lsrs r2, r2, #2	@ 00123214 9208
.org 0x123216
	mov r3, r8	@ 00123216 4346
.org 0x123218
	ands r2, r3	@ 00123218 1a40
.org 0x12321a
	movs r3, #128	@ 0012321a 8023
.org 0x12321c
	lsls r3, r3, #19	@ 0012321c db04
.org 0x12321e
	orrs r2, r3	@ 0012321e 1a43
.org 0x123220
	bl 0x128be4	@ 00123220 05f0e0fc
.org 0x123224
	mov r0, r9	@ 00123224 4846
.org 0x123226
	ldrb r2, [r0, #0]	@ 00123226 0278
.org 0x123228
	subs r0, r7, #1	@ 00123228 781e
.org 0x12322a
	movs r1, #0	@ 0012322a 0021
.org 0x12322c
	strb r2, [r0, #0]	@ 0012322c 0270
.org 0x12322e
	mov r2, r9	@ 0012322e 4a46
.org 0x123230
	strb r1, [r2, #0]	@ 00123230 1170
.org 0x123232
	ldr r5, [pc, #296]	@ 00123232 4a4d
.org 0x123234
	ldr r0, [r5, #0]	@ 00123234 2868
.org 0x123236
	bl 0x1c7cc	@ 00123236 f9f6c9fa
.org 0x12323a
	ldr r7, [pc, #292]	@ 0012323a 494f
.org 0x12323c
	ldr r0, [r7, #0]	@ 0012323c 3868
.org 0x12323e
	bl 0x1c7cc	@ 0012323e f9f6c5fa
.org 0x123242
	ldr r3, [pc, #288]	@ 00123242 484b
.org 0x123244
	mov r8, r3	@ 00123244 9846
.org 0x123246
	ldr r0, [r3, #0]	@ 00123246 1868
.org 0x123248
	bl 0x1c79c	@ 00123248 f9f6a8fa
.org 0x12324c
	bl 0xbd36c	@ 0012324c 9af78ef8
.org 0x123250
	ldr r4, [pc, #276]	@ 00123250 454c
.org 0x123252
	ldr r0, [r4, #0]	@ 00123252 2068
.org 0x123254
	bl 0x1c79c	@ 00123254 f9f6a2fa
.org 0x123258
	ldr r0, [pc, #272]	@ 00123258 4448
.org 0x12325a
	mov r9, r0	@ 0012325a 8146
.org 0x12325c
	ldr r0, [r0, #0]	@ 0012325c 0068
.org 0x12325e
	bl 0x1c79c	@ 0012325e f9f69dfa
.org 0x123262
	bl 0xd0be0	@ 00123262 adf7bdfc
.org 0x123266
	bl 0x560c	@ 00123266 e2f6d1f9
.org 0x12326a
	ldr r0, [r5, #0]	@ 0012326a 2868
.org 0x12326c
	bl 0x1c80c	@ 0012326c f9f6cefa
.org 0x123270
	ldr r0, [r7, #0]	@ 00123270 3868
.org 0x123272
	bl 0x1c80c	@ 00123272 f9f6cbfa
.org 0x123276
	mov r1, r8	@ 00123276 4146
.org 0x123278
	ldr r0, [r1, #0]	@ 00123278 0868
.org 0x12327a
	bl 0x1c80c	@ 0012327a f9f6c7fa
.org 0x12327e
	ldr r2, [pc, #240]	@ 0012327e 3c4a
.org 0x123280
	mov sl, r2	@ 00123280 9246
.org 0x123282
	ldr r0, [r2, #0]	@ 00123282 1068
.org 0x123284
	bl 0x1c80c	@ 00123284 f9f6c2fa
.org 0x123288
	ldr r0, [r4, #0]	@ 00123288 2068
.org 0x12328a
	bl 0x1c80c	@ 0012328a f9f6bffa
.org 0x12328e
	mov r3, r9	@ 0012328e 4b46
.org 0x123290
	ldr r0, [r3, #0]	@ 00123290 1868
.org 0x123292
	bl 0x1c80c	@ 00123292 f9f6bbfa
.org 0x123296
	ldr r1, [pc, #220]	@ 00123296 3749
.org 0x123298
	adds r0, r6, r1	@ 00123298 7018
.org 0x12329a
	bl 0x6c58	@ 0012329a e3f6ddfc
.org 0x12329e
	ldr r2, [pc, #172]	@ 0012329e 2b4a
.org 0x1232a0
	adds r0, r6, r2	@ 001232a0 b018
.org 0x1232a2
	ldrb r0, [r0, #24]	@ 001232a2 007e
.org 0x1232a4
	cmp r0, #1	@ 001232a4 0128
.org 0x1232a6
	bne.n 0x1232ac	@ 001232a6 01d1
.org 0x1232a8
	bl 0x5650	@ 001232a8 e2f6d2f9
.org 0x1232ac
	ldr r0, [r5, #0]	@ 001232ac 2868
.org 0x1232ae
	bl 0x1c874	@ 001232ae f9f6e1fa
.org 0x1232b2
	ldr r0, [r7, #0]	@ 001232b2 3868
.org 0x1232b4
	bl 0x1c874	@ 001232b4 f9f6defa
.org 0x1232b8
	mov r3, r8	@ 001232b8 4346
.org 0x1232ba
	ldr r0, [r3, #0]	@ 001232ba 1868
.org 0x1232bc
	bl 0x1c874	@ 001232bc f9f6dafa
.org 0x1232c0
	mov r1, r9	@ 001232c0 4946
.org 0x1232c2
	ldr r0, [r1, #0]	@ 001232c2 0868
.org 0x1232c4
	bl 0x1c874	@ 001232c4 f9f6d6fa
.org 0x1232c8
	ldr r0, [r5, #0]	@ 001232c8 2868
.org 0x1232ca
	movs r2, #154	@ 001232ca 9a22
.org 0x1232cc
	lsls r2, r2, #4	@ 001232cc 1201
.org 0x1232ce
	adds r4, r6, r2	@ 001232ce b418
.org 0x1232d0
	adds r1, r4, #0	@ 001232d0 211c
.org 0x1232d2
	bl 0x1ca0c	@ 001232d2 f9f69bfb
.org 0x1232d6
	ldr r0, [r7, #0]	@ 001232d6 3868
.org 0x1232d8
	adds r1, r4, #0	@ 001232d8 211c
.org 0x1232da
	bl 0x1ca0c	@ 001232da f9f697fb
.org 0x1232de
	mov r3, r8	@ 001232de 4346
.org 0x1232e0
	ldr r0, [r3, #0]	@ 001232e0 1868
.org 0x1232e2
	adds r1, r4, #0	@ 001232e2 211c
.org 0x1232e4
	bl 0x1ca0c	@ 001232e4 f9f692fb
.org 0x1232e8
	adds r0, r4, #0	@ 001232e8 201c
.org 0x1232ea
	bl 0x3a7dc	@ 001232ea 17f777fa
.org 0x1232ee
	mov r1, sl	@ 001232ee 5146
.org 0x1232f0
	ldr r0, [r1, #0]	@ 001232f0 0868
.org 0x1232f2
	adds r1, r4, #0	@ 001232f2 211c
.org 0x1232f4
	bl 0x1c924	@ 001232f4 f9f616fb
.org 0x1232f8
	ldr r0, [pc, #124]	@ 001232f8 1f48
.org 0x1232fa
	ldr r0, [r0, #0]	@ 001232fa 0068
.org 0x1232fc
	adds r1, r4, #0	@ 001232fc 211c
.org 0x1232fe
	bl 0x1c924	@ 001232fe f9f611fb
.org 0x123302
	mov r2, r9	@ 00123302 4a46
.org 0x123304
	ldr r0, [r2, #0]	@ 00123304 1068
.org 0x123306
	adds r1, r4, #0	@ 00123306 211c
.org 0x123308
	bl 0x1ca0c	@ 00123308 f9f680fb
.org 0x12330c
	bl 0x10e4cc	@ 0012330c ebf7def8
.org 0x123310
	adds r0, r4, #0	@ 00123310 201c
.org 0x123312
	bl 0x6d2c	@ 00123312 e3f60bfd
.org 0x123316
	adds r0, r4, #0	@ 00123316 201c
.org 0x123318
	bl 0x3420	@ 00123318 e0f682f8
.org 0x12331c
	ldr r0, [pc, #92]	@ 0012331c 1748
.org 0x12331e
	ldrb r0, [r0, #0]	@ 0012331e 0078
.org 0x123320
	cmp r0, #0	@ 00123320 0028
.org 0x123322
	beq.n 0x123336	@ 00123322 08d0
.org 0x123324
	ldr r0, [pc, #88]	@ 00123324 1648
