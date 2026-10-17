@ FUN_080d21ac  entry 0x080d21ac  size 196
.thumb
.org 0xd21ac
FUN_080d21ac:
	push {r4, r5, r6, lr}	@ 000d21ac 70b5
.org 0xd21ae
	mov r6, r9	@ 000d21ae 4e46
.org 0xd21b0
	mov r5, r8	@ 000d21b0 4546
.org 0xd21b2
	push {r5, r6}	@ 000d21b2 60b4
.org 0xd21b4
	adds r4, r0, #0	@ 000d21b4 041c
.org 0xd21b6
	bl 0x1cc9c	@ 000d21b6 4af771fd
.org 0xd21ba
	ldrb r1, [r4, #10]	@ 000d21ba a17a
.org 0xd21bc
	movs r0, #1	@ 000d21bc 0120
.org 0xd21be
	orrs r0, r1	@ 000d21be 0843
.org 0xd21c0
	movs r1, #2	@ 000d21c0 0221
.org 0xd21c2
	orrs r0, r1	@ 000d21c2 0843
.org 0xd21c4
	strb r0, [r4, #10]	@ 000d21c4 a072
.org 0xd21c6
	ldr r0, [pc, #168]	@ 000d21c6 2a48
.org 0xd21c8
	mov r8, r0	@ 000d21c8 8046
.org 0xd21ca
	ldr r0, [r0, #0]	@ 000d21ca 0068
.org 0xd21cc
	ldr r6, [pc, #164]	@ 000d21cc 294e
.org 0xd21ce
	muls r0, r6	@ 000d21ce 7043
.org 0xd21d0
	ldr r5, [pc, #164]	@ 000d21d0 294d
.org 0xd21d2
	adds r0, r0, r5	@ 000d21d2 4019
.org 0xd21d4
	lsls r0, r0, #1	@ 000d21d4 4000
.org 0xd21d6
	lsrs r0, r0, #1	@ 000d21d6 4008
.org 0xd21d8
	mov r1, r8	@ 000d21d8 4146
.org 0xd21da
	str r0, [r1, #0]	@ 000d21da 0860
.org 0xd21dc
	adds r0, r4, #0	@ 000d21dc 201c
.org 0xd21de
	movs r1, #27	@ 000d21de 1b21
.org 0xd21e0
	bl 0x1cf00	@ 000d21e0 4af78efe
.org 0xd21e4
	mov r2, r8	@ 000d21e4 4246
.org 0xd21e6
	ldr r0, [r2, #0]	@ 000d21e6 1068
.org 0xd21e8
	adds r1, r0, #0	@ 000d21e8 011c
.org 0xd21ea
	muls r1, r6	@ 000d21ea 7143
.org 0xd21ec
	adds r1, r1, r5	@ 000d21ec 4919
.org 0xd21ee
	lsls r1, r1, #1	@ 000d21ee 4900
.org 0xd21f0
	lsrs r1, r1, #1	@ 000d21f0 4908
.org 0xd21f2
	movs r3, #0	@ 000d21f2 0023
.org 0xd21f4
	ldrb r2, [r4, #10]	@ 000d21f4 a27a
.org 0xd21f6
	movs r0, #223	@ 000d21f6 df20
.org 0xd21f8
	ands r0, r2	@ 000d21f8 1040
.org 0xd21fa
	strb r0, [r4, #10]	@ 000d21fa a072
.org 0xd21fc
	movs r0, #1	@ 000d21fc 0120
.org 0xd21fe
	mov r9, r0	@ 000d21fe 8146
.org 0xd2200
	adds r0, r4, #0	@ 000d2200 201c
.org 0xd2202
	adds r0, #77	@ 000d2202 4d30
.org 0xd2204
	strb r3, [r0, #0]	@ 000d2204 0370
.org 0xd2206
	adds r3, r4, #0	@ 000d2206 231c
.org 0xd2208
	adds r3, #74	@ 000d2208 4a33
.org 0xd220a
	ldrb r2, [r3, #0]	@ 000d220a 1a78
.org 0xd220c
	movs r0, #33	@ 000d220c 2120
.org 0xd220e
	negs r0, r0	@ 000d220e 4042
.org 0xd2210
	ands r0, r2	@ 000d2210 1040
.org 0xd2212
	strb r0, [r3, #0]	@ 000d2212 1870
.org 0xd2214
	adds r0, r1, #0	@ 000d2214 081c
.org 0xd2216
	muls r0, r6	@ 000d2216 7043
.org 0xd2218
	adds r0, r0, r5	@ 000d2218 4019
.org 0xd221a
	lsls r0, r0, #1	@ 000d221a 4000
.org 0xd221c
	lsrs r2, r0, #1	@ 000d221c 4208
.org 0xd221e
	lsrs r0, r0, #17	@ 000d221e 400c
.org 0xd2220
	movs r1, #3	@ 000d2220 0321
.org 0xd2222
	ands r0, r1	@ 000d2222 0840
.org 0xd2224
	subs r0, #2	@ 000d2224 0238
.org 0xd2226
	lsls r0, r0, #8	@ 000d2226 0002
.org 0xd2228
	ldr r1, [r4, #84]	@ 000d2228 616d
.org 0xd222a
	adds r1, r1, r0	@ 000d222a 0918
.org 0xd222c
	str r1, [r4, #84]	@ 000d222c 6165
.org 0xd222e
	adds r0, r2, #0	@ 000d222e 101c
.org 0xd2230
	muls r0, r6	@ 000d2230 7043
.org 0xd2232
	adds r0, r0, r5	@ 000d2232 4019
.org 0xd2234
	lsls r0, r0, #1	@ 000d2234 4000
.org 0xd2236
	lsrs r1, r0, #1	@ 000d2236 4108
.org 0xd2238
	mov r2, r8	@ 000d2238 4246
.org 0xd223a
	str r1, [r2, #0]	@ 000d223a 1160
.org 0xd223c
	lsrs r0, r0, #17	@ 000d223c 400c
.org 0xd223e
	movs r1, #7	@ 000d223e 0721
.org 0xd2240
	ands r0, r1	@ 000d2240 0840
.org 0xd2242
	subs r0, #4	@ 000d2242 0438
.org 0xd2244
	lsls r0, r0, #8	@ 000d2244 0002
.org 0xd2246
	ldr r1, [r4, #88]	@ 000d2246 a16d
.org 0xd2248
	adds r1, r1, r0	@ 000d2248 0918
.org 0xd224a
	str r1, [r4, #88]	@ 000d224a a165
.org 0xd224c
	ldr r1, [pc, #44]	@ 000d224c 0b49
.org 0xd224e
	ldrb r0, [r4, #9]	@ 000d224e 607a
.org 0xd2250
	lsls r0, r0, #2	@ 000d2250 8000
.org 0xd2252
	adds r0, r0, r1	@ 000d2252 4018
.org 0xd2254
	mov r1, r9	@ 000d2254 4946
.org 0xd2256
	str r1, [r4, #12]	@ 000d2256 e160
.org 0xd2258
	ldr r0, [r0, #0]	@ 000d2258 0068
.org 0xd225a
	ldr r0, [r0, #4]	@ 000d225a 4068
.org 0xd225c
	str r0, [r4, #20]	@ 000d225c 6061
.org 0xd225e
	adds r0, r4, #0	@ 000d225e 201c
.org 0xd2260
	bl 0xd1dd0	@ 000d2260 fff7b6fd
.org 0xd2264
	pop {r3, r4}	@ 000d2264 18bc
.org 0xd2266
	mov r8, r3	@ 000d2266 9846
.org 0xd2268
	mov r9, r4	@ 000d2268 a146
.org 0xd226a
	pop {r4, r5, r6}	@ 000d226a 70bc
.org 0xd226c
	pop {r0}	@ 000d226c 01bc
.org 0xd226e
	bx r0	@ 000d226e 0047
