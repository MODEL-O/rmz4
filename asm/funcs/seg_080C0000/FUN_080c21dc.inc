@ FUN_080c21dc  entry 0x080c21dc  size 136
.thumb
.org 0xc21dc
FUN_080c21dc:
	push {r4, r5, lr}	@ 000c21dc 30b5
.org 0xc21de
	adds r4, r0, #0	@ 000c21de 041c
.org 0xc21e0
	ldr r5, [r4, #40]	@ 000c21e0 a56a
.org 0xc21e2
	bl 0x1cff0	@ 000c21e2 5af705ff
.org 0xc21e6
	ldr r0, [pc, #36]	@ 000c21e6 0948
.org 0xc21e8
	ldr r1, [r0, #0]	@ 000c21e8 0168
.org 0xc21ea
	ldr r2, [r1, #84]	@ 000c21ea 4a6d
.org 0xc21ec
	str r2, [r4, #84]	@ 000c21ec 6265
.org 0xc21ee
	ldr r0, [r1, #88]	@ 000c21ee 886d
.org 0xc21f0
	ldr r3, [pc, #28]	@ 000c21f0 074b
.org 0xc21f2
	adds r0, r0, r3	@ 000c21f2 c018
.org 0xc21f4
	str r0, [r4, #88]	@ 000c21f4 a065
.org 0xc21f6
	ldrb r0, [r4, #18]	@ 000c21f6 a07c
.org 0xc21f8
	adds r0, #1	@ 000c21f8 0130
.org 0xc21fa
	strb r0, [r4, #18]	@ 000c21fa a074
.org 0xc21fc
	ldrb r1, [r1, #10]	@ 000c21fc 897a
.org 0xc21fe
	movs r0, #16	@ 000c21fe 1020
.org 0xc2200
	ands r0, r1	@ 000c2200 0840
.org 0xc2202
	cmp r0, #0	@ 000c2202 0028
.org 0xc2204
	beq.n 0xc2214	@ 000c2204 06d0
.org 0xc2206
	ldr r0, [r4, #92]	@ 000c2206 e06d
.org 0xc2208
	adds r0, r2, r0	@ 000c2208 1018
.org 0xc220a
	b.n 0xc2218	@ 000c220a 05e0
.org 0xc220c
	.byte 0xf0,0xdb,0x02,0x02	@ 000c220c data
.org 0xc2210
	.byte 0x00,0xf4,0xff,0xff	@ 000c2210 data
.org 0xc2214
	ldr r0, [r4, #92]	@ 000c2214 e06d
.org 0xc2216
	subs r0, r2, r0	@ 000c2216 101a
.org 0xc2218
	str r0, [r4, #84]	@ 000c2218 6065
.org 0xc221a
	ldr r0, [r4, #88]	@ 000c221a a06d
.org 0xc221c
	ldr r1, [r4, #96]	@ 000c221c 216e
.org 0xc221e
	adds r0, r0, r1	@ 000c221e 4018
.org 0xc2220
	str r0, [r4, #88]	@ 000c2220 a065
.org 0xc2222
	ldrb r0, [r5, #12]	@ 000c2222 287b
.org 0xc2224
	cmp r0, #1	@ 000c2224 0128
.org 0xc2226
	bls.n 0xc2266	@ 000c2226 1ed9
.org 0xc2228
	ldr r1, [pc, #64]	@ 000c2228 1049
.org 0xc222a
	ldrb r0, [r4, #9]	@ 000c222a 607a
.org 0xc222c
	lsls r0, r0, #2	@ 000c222c 8000
.org 0xc222e
	adds r0, r0, r1	@ 000c222e 4018
.org 0xc2230
	movs r1, #2	@ 000c2230 0221
.org 0xc2232
	str r1, [r4, #12]	@ 000c2232 e160
.org 0xc2234
	ldr r0, [r0, #0]	@ 000c2234 0068
.org 0xc2236
	ldr r0, [r0, #8]	@ 000c2236 8068
.org 0xc2238
	str r0, [r4, #20]	@ 000c2238 6061
.org 0xc223a
	ldr r2, [pc, #52]	@ 000c223a 0d4a
.org 0xc223c
	ldr r1, [r2, #0]	@ 000c223c 1168
.org 0xc223e
	ldr r0, [pc, #52]	@ 000c223e 0d48
.org 0xc2240
	muls r0, r1	@ 000c2240 4843
.org 0xc2242
	ldr r1, [pc, #52]	@ 000c2242 0d49
.org 0xc2244
	adds r0, r0, r1	@ 000c2244 4018
.org 0xc2246
	lsls r0, r0, #1	@ 000c2246 4000
.org 0xc2248
	lsrs r1, r0, #1	@ 000c2248 4108
.org 0xc224a
	str r1, [r2, #0]	@ 000c224a 1160
.org 0xc224c
	lsrs r0, r0, #17	@ 000c224c 400c
.org 0xc224e
	movs r1, #15	@ 000c224e 0f21
.org 0xc2250
	bl 0x129198	@ 000c2250 66f0a2ff
.org 0xc2254
	adds r0, #4	@ 000c2254 0430
.org 0xc2256
	lsls r0, r0, #6	@ 000c2256 8001
.org 0xc2258
	negs r0, r0	@ 000c2258 4042
.org 0xc225a
	str r0, [r4, #96]	@ 000c225a 2066
.org 0xc225c
	movs r0, #64	@ 000c225c 4020
.org 0xc225e
	strb r0, [r4, #18]	@ 000c225e a074
.org 0xc2260
	adds r0, r4, #0	@ 000c2260 201c
.org 0xc2262
	bl 0xc1bd8	@ 000c2262 fff7b9fc
