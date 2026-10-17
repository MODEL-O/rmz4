@ FUN_0811c1e4  entry 0x0811c1e4  size 284
.thumb
.org 0x11c1e4
FUN_0811c1e4:
	push {r4, r5, r6, r7, lr}	@ 0011c1e4 f0b5
.org 0x11c1e6
	mov r7, sl	@ 0011c1e6 5746
.org 0x11c1e8
	mov r6, r9	@ 0011c1e8 4e46
.org 0x11c1ea
	mov r5, r8	@ 0011c1ea 4546
.org 0x11c1ec
	push {r5, r6, r7}	@ 0011c1ec e0b4
.org 0x11c1ee
	adds r7, r0, #0	@ 0011c1ee 071c
.org 0x11c1f0
	ldr r1, [pc, #28]	@ 0011c1f0 0749
.org 0x11c1f2
	adds r0, r7, r1	@ 0011c1f2 7818
.org 0x11c1f4
	ldr r0, [r0, #0]	@ 0011c1f4 0068
.org 0x11c1f6
	mov r8, r0	@ 0011c1f6 8046
.org 0x11c1f8
	ldr r2, [pc, #24]	@ 0011c1f8 064a
.org 0x11c1fa
	adds r4, r7, r2	@ 0011c1fa bc18
.org 0x11c1fc
	mov r1, r8	@ 0011c1fc 4146
.org 0x11c1fe
	adds r1, #180	@ 0011c1fe b431
.org 0x11c200
	adds r0, #244	@ 0011c200 f430
.org 0x11c202
	ldrb r2, [r0, #0]	@ 0011c202 0278
.org 0x11c204
	ldrb r0, [r1, #17]	@ 0011c204 487c
.org 0x11c206
	cmp r0, #18	@ 0011c206 1228
.org 0x11c208
	bne.n 0x11c218	@ 0011c208 06d1
.org 0x11c20a
	adds r0, r2, #1	@ 0011c20a 501c
.org 0x11c20c
	b.n 0x11c21a	@ 0011c20c 05e0
.org 0x11c20e
	.byte 0x00	@ 0011c20e data
.org 0x11c20f
	.byte 0x00	@ 0011c20f data
.org 0x11c210
	.byte 0xa8,0x63,0x00,0x00	@ 0011c210 data
.org 0x11c214
	.byte 0xd8,0x16,0x00,0x00	@ 0011c214 data
.org 0x11c218
	adds r0, r2, #0	@ 0011c218 101c
.org 0x11c21a
	movs r1, #10	@ 0011c21a 0a21
.org 0x11c21c
	bl 0x128fb8	@ 0011c21c 0cf0ccfe
.org 0x11c220
	adds r3, r0, #0	@ 0011c220 031c
.org 0x11c222
	adds r1, r4, #0	@ 0011c222 211c
.org 0x11c224
	adds r1, #244	@ 0011c224 f431
.org 0x11c226
	ldr r5, [pc, #44]	@ 0011c226 0b4d
.org 0x11c228
	adds r0, r3, r5	@ 0011c228 5819
.org 0x11c22a
	ldr r5, [pc, #44]	@ 0011c22a 0b4d
.org 0x11c22c
	adds r2, r5, #0	@ 0011c22c 2a1c
.org 0x11c22e
	orrs r0, r2	@ 0011c22e 1043
.org 0x11c230
	strh r0, [r1, #0]	@ 0011c230 0880
.org 0x11c232
	movs r0, #154	@ 0011c232 9a20
.org 0x11c234
	lsls r0, r0, #1	@ 0011c234 4000
.org 0x11c236
	adds r1, r4, r0	@ 0011c236 2118
.org 0x11c238
	ldr r5, [pc, #32]	@ 0011c238 084d
.org 0x11c23a
	adds r0, r3, r5	@ 0011c23a 5819
.org 0x11c23c
	orrs r0, r2	@ 0011c23c 1043
.org 0x11c23e
	strh r0, [r1, #0]	@ 0011c23e 0880
.org 0x11c240
	mov r1, r8	@ 0011c240 4146
.org 0x11c242
	adds r1, #180	@ 0011c242 b431
.org 0x11c244
	mov r0, r8	@ 0011c244 4046
.org 0x11c246
	adds r0, #244	@ 0011c246 f430
.org 0x11c248
	ldrb r2, [r0, #0]	@ 0011c248 0278
.org 0x11c24a
	ldrb r0, [r1, #17]	@ 0011c24a 487c
.org 0x11c24c
	cmp r0, #18	@ 0011c24c 1228
.org 0x11c24e
	bne.n 0x11c260	@ 0011c24e 07d1
.org 0x11c250
	adds r0, r2, #1	@ 0011c250 501c
.org 0x11c252
	b.n 0x11c262	@ 0011c252 06e0
.org 0x11c254
	.byte 0x41,0x02,0x00,0x00	@ 0011c254 data
.org 0x11c258
	.byte 0x00,0xa0,0xff,0xff	@ 0011c258 data
.org 0x11c25c
	.byte 0x61,0x02,0x00,0x00	@ 0011c25c data
.org 0x11c260
	adds r0, r2, #0	@ 0011c260 101c
.org 0x11c262
	movs r1, #10	@ 0011c262 0a21
.org 0x11c264
	bl 0x129050	@ 0011c264 0cf0f4fe
.org 0x11c268
	adds r3, r0, #0	@ 0011c268 031c
.org 0x11c26a
	adds r1, r4, #0	@ 0011c26a 211c
.org 0x11c26c
	adds r1, #246	@ 0011c26c f631
.org 0x11c26e
	ldr r0, [pc, #168]	@ 0011c26e 2a48
.org 0x11c270
	adds r5, r0, #0	@ 0011c270 051c
.org 0x11c272
	adds r0, r3, r5	@ 0011c272 5819
.org 0x11c274
	ldr r2, [pc, #164]	@ 0011c274 294a
.org 0x11c276
	adds r6, r2, #0	@ 0011c276 161c
.org 0x11c278
	orrs r0, r6	@ 0011c278 3043
.org 0x11c27a
	strh r0, [r1, #0]	@ 0011c27a 0880
.org 0x11c27c
	movs r0, #155	@ 0011c27c 9b20
.org 0x11c27e
	lsls r0, r0, #1	@ 0011c27e 4000
.org 0x11c280
	adds r1, r4, r0	@ 0011c280 2118
.org 0x11c282
	ldr r2, [pc, #156]	@ 0011c282 274a
.org 0x11c284
	adds r4, r2, #0	@ 0011c284 141c
.org 0x11c286
	adds r0, r3, r4	@ 0011c286 1819
.org 0x11c288
	orrs r0, r6	@ 0011c288 3043
.org 0x11c28a
	strh r0, [r1, #0]	@ 0011c28a 0880
.org 0x11c28c
	movs r0, #241	@ 0011c28c f120
.org 0x11c28e
	add r0, r8	@ 0011c28e 4044
.org 0x11c290
	mov sl, r0	@ 0011c290 8246
.org 0x11c292
	ldrb r0, [r0, #0]	@ 0011c292 0078
.org 0x11c294
	movs r1, #242	@ 0011c294 f221
.org 0x11c296
	add r1, r8	@ 0011c296 4144
.org 0x11c298
	mov r9, r1	@ 0011c298 8946
.org 0x11c29a
	ldrb r1, [r1, #0]	@ 0011c29a 0978
.org 0x11c29c
	movs r2, #243	@ 0011c29c f322
.org 0x11c29e
	add r8, r2	@ 0011c29e 9044
.org 0x11c2a0
	adds r0, r0, r1	@ 0011c2a0 4018
.org 0x11c2a2
	mov r1, r8	@ 0011c2a2 4146
.org 0x11c2a4
	ldrb r1, [r1, #0]	@ 0011c2a4 0978
.org 0x11c2a6
	adds r0, r0, r1	@ 0011c2a6 4018
.org 0x11c2a8
	movs r1, #10	@ 0011c2a8 0a21
.org 0x11c2aa
	bl 0x128fb8	@ 0011c2aa 0cf085fe
.org 0x11c2ae
	adds r3, r0, #0	@ 0011c2ae 031c
.org 0x11c2b0
	ldr r2, [pc, #112]	@ 0011c2b0 1c4a
.org 0x11c2b2
	adds r1, r7, r2	@ 0011c2b2 b918
.org 0x11c2b4
	adds r0, r3, r5	@ 0011c2b4 5819
.org 0x11c2b6
	orrs r0, r6	@ 0011c2b6 3043
.org 0x11c2b8
	strh r0, [r1, #0]	@ 0011c2b8 0880
.org 0x11c2ba
	ldr r0, [pc, #108]	@ 0011c2ba 1b48
.org 0x11c2bc
	adds r1, r7, r0	@ 0011c2bc 3918
.org 0x11c2be
	adds r0, r3, r4	@ 0011c2be 1819
.org 0x11c2c0
	orrs r0, r6	@ 0011c2c0 3043
.org 0x11c2c2
	strh r0, [r1, #0]	@ 0011c2c2 0880
.org 0x11c2c4
	mov r1, sl	@ 0011c2c4 5146
.org 0x11c2c6
	ldrb r0, [r1, #0]	@ 0011c2c6 0878
.org 0x11c2c8
	mov r2, r9	@ 0011c2c8 4a46
.org 0x11c2ca
	ldrb r1, [r2, #0]	@ 0011c2ca 1178
.org 0x11c2cc
	adds r0, r0, r1	@ 0011c2cc 4018
.org 0x11c2ce
	mov r1, r8	@ 0011c2ce 4146
.org 0x11c2d0
	ldrb r1, [r1, #0]	@ 0011c2d0 0978
.org 0x11c2d2
	adds r0, r0, r1	@ 0011c2d2 4018
.org 0x11c2d4
	movs r1, #10	@ 0011c2d4 0a21
.org 0x11c2d6
	bl 0x129050	@ 0011c2d6 0cf0bbfe
.org 0x11c2da
	adds r3, r0, #0	@ 0011c2da 031c
.org 0x11c2dc
	ldr r2, [pc, #76]	@ 0011c2dc 134a
.org 0x11c2de
	adds r0, r7, r2	@ 0011c2de b818
.org 0x11c2e0
	adds r5, r3, r5	@ 0011c2e0 5d19
.org 0x11c2e2
	orrs r5, r6	@ 0011c2e2 3543
.org 0x11c2e4
	strh r5, [r0, #0]	@ 0011c2e4 0580
.org 0x11c2e6
	ldr r5, [pc, #72]	@ 0011c2e6 124d
.org 0x11c2e8
	adds r0, r7, r5	@ 0011c2e8 7819
.org 0x11c2ea
	adds r4, r3, r4	@ 0011c2ea 1c19
.org 0x11c2ec
	orrs r4, r6	@ 0011c2ec 3443
.org 0x11c2ee
	strh r4, [r0, #0]	@ 0011c2ee 0480
.org 0x11c2f0
	ldr r1, [pc, #64]	@ 0011c2f0 1049
.org 0x11c2f2
	adds r0, r7, r1	@ 0011c2f2 7818
.org 0x11c2f4
	ldr r1, [pc, #64]	@ 0011c2f4 1049
.org 0x11c2f6
	ldrh r2, [r1, #0]	@ 0011c2f6 0a88
.org 0x11c2f8
	movs r1, #248	@ 0011c2f8 f821
.org 0x11c2fa
	lsls r1, r1, #5	@ 0011c2fa 4901
.org 0x11c2fc
	ands r1, r2	@ 0011c2fc 1140
.org 0x11c2fe
	lsls r1, r1, #3	@ 0011c2fe c900
