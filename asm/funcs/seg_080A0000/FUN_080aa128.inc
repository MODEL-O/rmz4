@ FUN_080aa128  entry 0x080aa128  size 276
.thumb
.org 0xaa128
FUN_080aa128:
	push {r4, r5, lr}	@ 000aa128 30b5
.org 0xaa12a
	adds r5, r0, #0	@ 000aa12a 051c
.org 0xaa12c
	ldrb r0, [r5, #14]	@ 000aa12c a87b
.org 0xaa12e
	cmp r0, #0	@ 000aa12e 0028
.org 0xaa130
	bne.n 0xaa1de	@ 000aa130 55d1
.org 0xaa132
	adds r0, r5, #0	@ 000aa132 281c
.org 0xaa134
	bl 0xa9ba4	@ 000aa134 fff736fd
.org 0xaa138
	adds r0, r5, #0	@ 000aa138 281c
.org 0xaa13a
	adds r0, #188	@ 000aa13a bc30
.org 0xaa13c
	ldr r2, [pc, #252]	@ 000aa13c 3f4a
.org 0xaa13e
	adds r1, r2, #0	@ 000aa13e 111c
.org 0xaa140
	ldrb r0, [r0, #0]	@ 000aa140 0078
.org 0xaa142
	adds r1, r1, r0	@ 000aa142 0918
.org 0xaa144
	lsls r1, r1, #16	@ 000aa144 0904
.org 0xaa146
	lsrs r1, r1, #16	@ 000aa146 090c
.org 0xaa148
	adds r0, r5, #0	@ 000aa148 281c
.org 0xaa14a
	bl 0x1cf00	@ 000aa14a 72f7d9fe
.org 0xaa14e
	ldr r0, [pc, #240]	@ 000aa14e 3c48
.org 0xaa150
	ldr r2, [r0, #0]	@ 000aa150 0268
.org 0xaa152
	ldr r0, [r2, #84]	@ 000aa152 506d
.org 0xaa154
	ldr r1, [r5, #84]	@ 000aa154 696d
.org 0xaa156
	subs r0, r0, r1	@ 000aa156 401a
.org 0xaa158
	ldr r1, [r2, #88]	@ 000aa158 916d
.org 0xaa15a
	movs r3, #160	@ 000aa15a a023
.org 0xaa15c
	lsls r3, r3, #5	@ 000aa15c 5b01
.org 0xaa15e
	adds r1, r1, r3	@ 000aa15e c918
.org 0xaa160
	ldr r2, [r5, #88]	@ 000aa160 aa6d
.org 0xaa162
	subs r1, r1, r2	@ 000aa162 891a
.org 0xaa164
	lsls r0, r0, #8	@ 000aa164 0002
.org 0xaa166
	asrs r0, r0, #16	@ 000aa166 0014
.org 0xaa168
	lsls r1, r1, #8	@ 000aa168 0902
.org 0xaa16a
	asrs r1, r1, #16	@ 000aa16a 0914
.org 0xaa16c
	bl 0x128bdc	@ 000aa16c 7ef036fd
.org 0xaa170
	lsls r0, r0, #16	@ 000aa170 0004
.org 0xaa172
	lsrs r2, r0, #24	@ 000aa172 020e
.org 0xaa174
	ldr r4, [pc, #204]	@ 000aa174 334c
.org 0xaa176
	adds r0, r2, #0	@ 000aa176 101c
.org 0xaa178
	adds r0, #64	@ 000aa178 4030
.org 0xaa17a
	lsls r0, r0, #24	@ 000aa17a 0006
.org 0xaa17c
	lsrs r0, r0, #23	@ 000aa17c c00d
.org 0xaa17e
	adds r0, r0, r4	@ 000aa17e 0019
.org 0xaa180
	movs r3, #0	@ 000aa180 0023
.org 0xaa182
	ldrsh r1, [r0, r3]	@ 000aa182 c15e
.org 0xaa184
	lsls r0, r1, #4	@ 000aa184 0801
.org 0xaa186
	subs r3, r0, r1	@ 000aa186 431a
.org 0xaa188
	lsls r0, r3, #7	@ 000aa188 d801
.org 0xaa18a
	negs r0, r0	@ 000aa18a 4042
.org 0xaa18c
	cmp r0, #0	@ 000aa18c 0028
.org 0xaa18e
	bge.n 0xaa192	@ 000aa18e 00da
.org 0xaa190
	adds r0, #255	@ 000aa190 ff30
.org 0xaa192
	asrs r0, r0, #8	@ 000aa192 0012
.org 0xaa194
	str r0, [r5, #92]	@ 000aa194 e865
.org 0xaa196
	lsls r0, r2, #1	@ 000aa196 5000
.org 0xaa198
	adds r0, r0, r4	@ 000aa198 0019
.org 0xaa19a
	movs r2, #0	@ 000aa19a 0022
.org 0xaa19c
	ldrsh r1, [r0, r2]	@ 000aa19c 815e
.org 0xaa19e
	lsls r0, r1, #4	@ 000aa19e 0801
.org 0xaa1a0
	subs r1, r0, r1	@ 000aa1a0 411a
.org 0xaa1a2
	lsls r0, r1, #7	@ 000aa1a2 c801
.org 0xaa1a4
	negs r0, r0	@ 000aa1a4 4042
.org 0xaa1a6
	cmp r0, #0	@ 000aa1a6 0028
.org 0xaa1a8
	bge.n 0xaa1ac	@ 000aa1a8 00da
.org 0xaa1aa
	adds r0, #255	@ 000aa1aa ff30
.org 0xaa1ac
	asrs r0, r0, #8	@ 000aa1ac 0012
.org 0xaa1ae
	str r0, [r5, #96]	@ 000aa1ae 2866
.org 0xaa1b0
	negs r0, r3	@ 000aa1b0 5842
.org 0xaa1b2
	cmp r0, #0	@ 000aa1b2 0028
.org 0xaa1b4
	bge.n 0xaa1b8	@ 000aa1b4 00da
.org 0xaa1b6
	adds r0, #255	@ 000aa1b6 ff30
.org 0xaa1b8
	asrs r0, r0, #8	@ 000aa1b8 0012
.org 0xaa1ba
	str r0, [r5, #100]	@ 000aa1ba 6866
.org 0xaa1bc
	negs r0, r1	@ 000aa1bc 4842
.org 0xaa1be
	cmp r0, #0	@ 000aa1be 0028
.org 0xaa1c0
	bge.n 0xaa1c4	@ 000aa1c0 00da
.org 0xaa1c2
	adds r0, #255	@ 000aa1c2 ff30
.org 0xaa1c4
	asrs r0, r0, #8	@ 000aa1c4 0012
.org 0xaa1c6
	str r0, [r5, #104]	@ 000aa1c6 a866
.org 0xaa1c8
	adds r4, r5, #0	@ 000aa1c8 2c1c
.org 0xaa1ca
	adds r4, #116	@ 000aa1ca 7434
.org 0xaa1cc
	ldr r1, [pc, #120]	@ 000aa1cc 1e49
.org 0xaa1ce
	adds r0, r4, #0	@ 000aa1ce 201c
.org 0xaa1d0
	bl 0x5784	@ 000aa1d0 5bf7d8fa
.org 0xaa1d4
	ldr r0, [pc, #116]	@ 000aa1d4 1d48
.org 0xaa1d6
	str r0, [r4, #36]	@ 000aa1d6 6062
.org 0xaa1d8
	ldrb r0, [r5, #14]	@ 000aa1d8 a87b
.org 0xaa1da
	adds r0, #1	@ 000aa1da 0130
.org 0xaa1dc
	strb r0, [r5, #14]	@ 000aa1dc a873
.org 0xaa1de
	ldr r0, [r5, #84]	@ 000aa1de 686d
.org 0xaa1e0
	ldr r4, [r5, #92]	@ 000aa1e0 ec6d
.org 0xaa1e2
	adds r0, r0, r4	@ 000aa1e2 0019
.org 0xaa1e4
	str r0, [r5, #84]	@ 000aa1e4 6865
.org 0xaa1e6
	ldr r1, [r5, #88]	@ 000aa1e6 a96d
.org 0xaa1e8
	ldr r3, [r5, #96]	@ 000aa1e8 2b6e
.org 0xaa1ea
	adds r1, r1, r3	@ 000aa1ea c918
.org 0xaa1ec
	str r1, [r5, #88]	@ 000aa1ec a965
.org 0xaa1ee
	ldr r2, [r5, #100]	@ 000aa1ee 6a6e
.org 0xaa1f0
	adds r4, r4, r2	@ 000aa1f0 a418
.org 0xaa1f2
	str r4, [r5, #92]	@ 000aa1f2 ec65
.org 0xaa1f4
	ldr r2, [r5, #104]	@ 000aa1f4 aa6e
.org 0xaa1f6
	adds r3, r3, r2	@ 000aa1f6 9b18
.org 0xaa1f8
	adds r3, #64	@ 000aa1f8 4033
.org 0xaa1fa
	str r3, [r5, #96]	@ 000aa1fa 2b66
.org 0xaa1fc
	ldr r3, [pc, #80]	@ 000aa1fc 144b
.org 0xaa1fe
	adds r1, r1, r3	@ 000aa1fe c918
.org 0xaa200
	bl 0x7c7c	@ 000aa200 5df73cfd
.org 0xaa204
	lsls r0, r0, #16	@ 000aa204 0004
.org 0xaa206
	cmp r0, #0	@ 000aa206 0028
.org 0xaa208
	bne.n 0xaa21c	@ 000aa208 08d1
.org 0xaa20a
	ldr r0, [r5, #84]	@ 000aa20a 686d
.org 0xaa20c
	ldr r1, [r5, #88]	@ 000aa20c a96d
.org 0xaa20e
	ldr r2, [pc, #68]	@ 000aa20e 114a
.org 0xaa210
	adds r1, r1, r2	@ 000aa210 8918
.org 0xaa212
	bl 0x7c7c	@ 000aa212 5df733fd
.org 0xaa216
	lsls r0, r0, #16	@ 000aa216 0004
.org 0xaa218
	cmp r0, #0	@ 000aa218 0028
.org 0xaa21a
	beq.n 0xaa236	@ 000aa21a 0cd0
.org 0xaa21c
	ldr r1, [pc, #56]	@ 000aa21c 0e49
.org 0xaa21e
	ldrb r0, [r5, #9]	@ 000aa21e 687a
.org 0xaa220
	lsls r0, r0, #2	@ 000aa220 8000
.org 0xaa222
	adds r0, r0, r1	@ 000aa222 4018
.org 0xaa224
	movs r1, #2	@ 000aa224 0221
.org 0xaa226
	str r1, [r5, #12]	@ 000aa226 e960
.org 0xaa228
	ldr r0, [r0, #0]	@ 000aa228 0068
.org 0xaa22a
	ldr r0, [r0, #8]	@ 000aa22a 8068
.org 0xaa22c
	str r0, [r5, #20]	@ 000aa22c 6861
.org 0xaa22e
	adds r1, r5, #0	@ 000aa22e 291c
.org 0xaa230
	adds r1, #183	@ 000aa230 b731
.org 0xaa232
	movs r0, #0	@ 000aa232 0020
.org 0xaa234
	strb r0, [r1, #0]	@ 000aa234 0870
.org 0xaa236
	pop {r4, r5}	@ 000aa236 30bc
.org 0xaa238
	pop {r0}	@ 000aa238 01bc
.org 0xaa23a
	bx r0	@ 000aa23a 0047
