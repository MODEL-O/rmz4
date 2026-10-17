@ FUN_08055188  entry 0x08055188  size 192
.thumb
.org 0x55188
FUN_08055188:
	push {r4, r5, r6, r7, lr}	@ 00055188 f0b5
.org 0x5518a
	adds r5, r0, #0	@ 0005518a 051c
.org 0x5518c
	adds r7, r1, #0	@ 0005518c 0f1c
.org 0x5518e
	adds r0, r5, #0	@ 0005518e 281c
.org 0x55190
	adds r0, #182	@ 00055190 b630
.org 0x55192
	ldrb r1, [r0, #0]	@ 00055192 0178
.org 0x55194
	movs r0, #8	@ 00055194 0820
.org 0x55196
	ands r0, r1	@ 00055196 0840
.org 0x55198
	cmp r0, #0	@ 00055198 0028
.org 0x5519a
	bne.n 0x551fe	@ 0005519a 30d1
.org 0x5519c
	ldr r0, [r5, #96]	@ 0005519c 286e
.org 0x5519e
	ldr r1, [r5, #104]	@ 0005519e a96e
.org 0x551a0
	adds r0, r0, r1	@ 000551a0 4018
.org 0x551a2
	str r0, [r5, #96]	@ 000551a2 2866
.org 0x551a4
	cmp r1, #0	@ 000551a4 0029
.org 0x551a6
	bge.n 0x551b4	@ 000551a6 05da
.org 0x551a8
	ldr r2, [pc, #4]	@ 000551a8 014a
.org 0x551aa
	cmp r0, r2	@ 000551aa 9042
.org 0x551ac
	bge.n 0x551be	@ 000551ac 07da
.org 0x551ae
	b.n 0x551bc	@ 000551ae 05e0
.org 0x551b0
	.byte 0x00,0xfd,0xff,0xff	@ 000551b0 data
.org 0x551b4
	movs r2, #192	@ 000551b4 c022
.org 0x551b6
	lsls r2, r2, #2	@ 000551b6 9200
.org 0x551b8
	cmp r0, r2	@ 000551b8 9042
.org 0x551ba
	ble.n 0x551be	@ 000551ba 00dd
.org 0x551bc
	str r2, [r5, #96]	@ 000551bc 2a66
.org 0x551be
	negs r4, r1	@ 000551be 4c42
.org 0x551c0
	ldr r6, [r5, #96]	@ 000551c0 2e6e
.org 0x551c2
	adds r0, r6, #0	@ 000551c2 301c
.org 0x551c4
	adds r1, r4, #0	@ 000551c4 211c
.org 0x551c6
	bl 0x128fb8	@ 000551c6 d3f0f7fe
.org 0x551ca
	negs r0, r0	@ 000551ca 4042
.org 0x551cc
	lsls r1, r6, #1	@ 000551cc 7100
.org 0x551ce
	adds r2, r0, #1	@ 000551ce 421c
.org 0x551d0
	muls r2, r4	@ 000551d0 6243
.org 0x551d2
	adds r1, r1, r2	@ 000551d2 8918
.org 0x551d4
	muls r0, r1	@ 000551d4 4843
.org 0x551d6
	asrs r1, r0, #1	@ 000551d6 4110
.org 0x551d8
	cmp r1, #0	@ 000551d8 0029
.org 0x551da
	bge.n 0x551de	@ 000551da 00da
.org 0x551dc
	negs r1, r1	@ 000551dc 4942
.org 0x551de
	ldr r2, [r5, #88]	@ 000551de aa6d
.org 0x551e0
	subs r0, r2, r7	@ 000551e0 d01b
.org 0x551e2
	adds r0, r0, r1	@ 000551e2 4018
.org 0x551e4
	lsls r1, r1, #1	@ 000551e4 4900
.org 0x551e6
	cmp r0, r1	@ 000551e6 8842
.org 0x551e8
	bhi.n 0x551f8	@ 000551e8 06d8
.org 0x551ea
	adds r2, r5, #0	@ 000551ea 2a1c
.org 0x551ec
	adds r2, #182	@ 000551ec b632
.org 0x551ee
	ldrb r1, [r2, #0]	@ 000551ee 1178
.org 0x551f0
	movs r0, #8	@ 000551f0 0820
.org 0x551f2
	orrs r0, r1	@ 000551f2 0843
.org 0x551f4
	strb r0, [r2, #0]	@ 000551f4 1070
.org 0x551f6
	b.n 0x5518e	@ 000551f6 cae7
.org 0x551f8
	adds r0, r2, r6	@ 000551f8 9019
.org 0x551fa
	str r0, [r5, #88]	@ 000551fa a865
.org 0x551fc
	b.n 0x55244	@ 000551fc 22e0
.org 0x551fe
	ldr r0, [r5, #96]	@ 000551fe 286e
.org 0x55200
	ldr r2, [r5, #104]	@ 00055200 aa6e
.org 0x55202
	subs r0, r0, r2	@ 00055202 801a
.org 0x55204
	str r0, [r5, #96]	@ 00055204 2866
.org 0x55206
	ldr r1, [r5, #88]	@ 00055206 a96d
.org 0x55208
	adds r1, r1, r0	@ 00055208 0918
.org 0x5520a
	str r1, [r5, #88]	@ 0005520a a965
.org 0x5520c
	cmp r2, #0	@ 0005520c 002a
.org 0x5520e
	bge.n 0x55220	@ 0005520e 07da
.org 0x55210
	cmp r7, #0	@ 00055210 002f
.org 0x55212
	beq.n 0x55218	@ 00055212 01d0
.org 0x55214
	cmp r1, r7	@ 00055214 b942
.org 0x55216
	ble.n 0x55228	@ 00055216 07dd
.org 0x55218
	ldr r0, [r5, #96]	@ 00055218 286e
.org 0x5521a
	cmp r0, #0	@ 0005521a 0028
.org 0x5521c
	ble.n 0x5523a	@ 0005521c 0ddd
.org 0x5521e
	b.n 0x55236	@ 0005521e 0ae0
.org 0x55220
	cmp r7, #0	@ 00055220 002f
.org 0x55222
	beq.n 0x55230	@ 00055222 05d0
.org 0x55224
	cmp r1, r7	@ 00055224 b942
.org 0x55226
	blt.n 0x55230	@ 00055226 03db
.org 0x55228
	str r7, [r5, #88]	@ 00055228 af65
.org 0x5522a
	movs r0, #0	@ 0005522a 0020
.org 0x5522c
	str r0, [r5, #96]	@ 0005522c 2866
.org 0x5522e
	b.n 0x55246	@ 0005522e 0ae0
.org 0x55230
	ldr r0, [r5, #96]	@ 00055230 286e
.org 0x55232
	cmp r0, #0	@ 00055232 0028
.org 0x55234
	bge.n 0x5523a	@ 00055234 01da
.org 0x55236
	movs r0, #0	@ 00055236 0020
.org 0x55238
	str r0, [r5, #96]	@ 00055238 2866
.org 0x5523a
	ldr r0, [r5, #96]	@ 0005523a 286e
.org 0x5523c
	cmp r0, #0	@ 0005523c 0028
.org 0x5523e
	bne.n 0x55244	@ 0005523e 01d1
.org 0x55240
	movs r0, #0	@ 00055240 0020
.org 0x55242
	b.n 0x55246	@ 00055242 00e0
.org 0x55244
	movs r0, #1	@ 00055244 0120
.org 0x55246
	pop {r4, r5, r6, r7}	@ 00055246 f0bc
