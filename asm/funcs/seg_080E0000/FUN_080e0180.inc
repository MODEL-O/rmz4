@ FUN_080e0180  entry 0x080e0180  size 250
.thumb
.org 0xe0180
FUN_080e0180:
	push {r4, r5, r6, r7, lr}	@ 000e0180 f0b5
.org 0xe0182
	mov r7, r8	@ 000e0182 4746
.org 0xe0184
	push {r7}	@ 000e0184 80b4
.org 0xe0186
	adds r7, r0, #0	@ 000e0186 071c
.org 0xe0188
	bl 0x1cc9c	@ 000e0188 3cf788fd
.org 0xe018c
	ldrb r0, [r7, #10]	@ 000e018c b87a
.org 0xe018e
	movs r4, #1	@ 000e018e 0124
.org 0xe0190
	movs r5, #0	@ 000e0190 0025
.org 0xe0192
	orrs r0, r4	@ 000e0192 2043
.org 0xe0194
	movs r1, #2	@ 000e0194 0221
.org 0xe0196
	orrs r0, r1	@ 000e0196 0843
.org 0xe0198
	strb r0, [r7, #10]	@ 000e0198 b872
.org 0xe019a
	adds r0, r7, #0	@ 000e019a 381c
.org 0xe019c
	bl 0x1ceec	@ 000e019c 3cf7a6fe
.org 0xe01a0
	adds r0, r7, #0	@ 000e01a0 381c
.org 0xe01a2
	adds r0, #128	@ 000e01a2 8030
.org 0xe01a4
	ldrh r1, [r0, #0]	@ 000e01a4 0188
.org 0xe01a6
	adds r0, r7, #0	@ 000e01a6 381c
.org 0xe01a8
	bl 0x1cf00	@ 000e01a8 3cf7aafe
.org 0xe01ac
	adds r0, r7, #0	@ 000e01ac 381c
.org 0xe01ae
	bl 0x1cff0	@ 000e01ae 3cf71fff
.org 0xe01b2
	ldr r2, [pc, #32]	@ 000e01b2 084a
.org 0xe01b4
	ldr r1, [r2, #0]	@ 000e01b4 1168
.org 0xe01b6
	ldr r0, [pc, #32]	@ 000e01b6 0848
.org 0xe01b8
	muls r0, r1	@ 000e01b8 4843
.org 0xe01ba
	ldr r1, [pc, #32]	@ 000e01ba 0849
.org 0xe01bc
	adds r0, r0, r1	@ 000e01bc 4018
.org 0xe01be
	lsls r0, r0, #1	@ 000e01be 4000
.org 0xe01c0
	lsrs r1, r0, #1	@ 000e01c0 4108
.org 0xe01c2
	str r1, [r2, #0]	@ 000e01c2 1160
.org 0xe01c4
	lsrs r2, r0, #17	@ 000e01c4 420c
.org 0xe01c6
	ands r2, r4	@ 000e01c6 2240
.org 0xe01c8
	cmp r2, #0	@ 000e01c8 002a
.org 0xe01ca
	beq.n 0xe01e0	@ 000e01ca 09d0
.org 0xe01cc
	ldrb r0, [r7, #10]	@ 000e01cc b87a
.org 0xe01ce
	movs r1, #16	@ 000e01ce 1021
.org 0xe01d0
	orrs r0, r1	@ 000e01d0 0843
.org 0xe01d2
	b.n 0xe01e6	@ 000e01d2 08e0
.org 0xe01d4
	.byte 0x38,0xdc,0x02,0x02	@ 000e01d4 data
.org 0xe01d8
	.byte 0xfd,0x43,0x03,0x00	@ 000e01d8 data
.org 0xe01dc
	.byte 0xc3,0x9e,0x26,0x00	@ 000e01dc data
.org 0xe01e0
	ldrb r1, [r7, #10]	@ 000e01e0 b97a
.org 0xe01e2
	movs r0, #239	@ 000e01e2 ef20
.org 0xe01e4
	ands r0, r1	@ 000e01e4 0840
.org 0xe01e6
	strb r0, [r7, #10]	@ 000e01e6 b872
.org 0xe01e8
	movs r0, #1	@ 000e01e8 0120
.org 0xe01ea
	mov ip, r0	@ 000e01ea 8446
.org 0xe01ec
	mov r1, ip	@ 000e01ec 6146
.org 0xe01ee
	ands r1, r2	@ 000e01ee 1140
.org 0xe01f0
	adds r0, r7, #0	@ 000e01f0 381c
.org 0xe01f2
	adds r0, #76	@ 000e01f2 4c30
.org 0xe01f4
	strb r1, [r0, #0]	@ 000e01f4 0170
.org 0xe01f6
	adds r3, r7, #0	@ 000e01f6 3b1c
.org 0xe01f8
	adds r3, #74	@ 000e01f8 4a33
.org 0xe01fa
	lsls r1, r1, #4	@ 000e01fa 0901
.org 0xe01fc
	ldrb r2, [r3, #0]	@ 000e01fc 1a78
.org 0xe01fe
	movs r0, #17	@ 000e01fe 1120
.org 0xe0200
	negs r0, r0	@ 000e0200 4042
.org 0xe0202
	ands r0, r2	@ 000e0202 1040
.org 0xe0204
	orrs r0, r1	@ 000e0204 0843
.org 0xe0206
	strb r0, [r3, #0]	@ 000e0206 1870
.org 0xe0208
	ldrb r1, [r7, #17]	@ 000e0208 797c
.org 0xe020a
	adds r1, #1	@ 000e020a 0131
.org 0xe020c
	lsls r1, r1, #8	@ 000e020c 0902
.org 0xe020e
	ldr r2, [pc, #120]	@ 000e020e 1e4a
.org 0xe0210
	mov r8, r2	@ 000e0210 9046
.org 0xe0212
	ldr r0, [r2, #0]	@ 000e0212 1068
.org 0xe0214
	ldr r4, [pc, #116]	@ 000e0214 1d4c
.org 0xe0216
	muls r0, r4	@ 000e0216 6043
.org 0xe0218
	ldr r3, [pc, #116]	@ 000e0218 1d4b
.org 0xe021a
	adds r0, r0, r3	@ 000e021a c018
.org 0xe021c
	lsls r0, r0, #1	@ 000e021c 4000
.org 0xe021e
	lsrs r2, r0, #1	@ 000e021e 4208
.org 0xe0220
	lsls r0, r0, #6	@ 000e0220 8001
.org 0xe0222
	lsrs r0, r0, #23	@ 000e0222 c00d
.org 0xe0224
	subs r6, r1, r0	@ 000e0224 0e1a
.org 0xe0226
	str r6, [r7, #92]	@ 000e0226 fe65
.org 0xe0228
	ldrb r1, [r7, #17]	@ 000e0228 797c
.org 0xe022a
	lsls r1, r1, #1	@ 000e022a 4900
.org 0xe022c
	adds r0, r2, #0	@ 000e022c 101c
.org 0xe022e
	muls r0, r4	@ 000e022e 6043
.org 0xe0230
	adds r0, r0, r3	@ 000e0230 c018
.org 0xe0232
	lsls r0, r0, #1	@ 000e0232 4000
.org 0xe0234
	lsrs r5, r0, #1	@ 000e0234 4508
.org 0xe0236
	lsrs r0, r0, #17	@ 000e0236 400c
.org 0xe0238
	movs r2, #7	@ 000e0238 0722
.org 0xe023a
	ands r0, r2	@ 000e023a 1040
.org 0xe023c
	adds r0, #18	@ 000e023c 1230
.org 0xe023e
	subs r1, r1, r0	@ 000e023e 091a
.org 0xe0240
	lsls r1, r1, #6	@ 000e0240 8901
.org 0xe0242
	str r1, [r7, #96]	@ 000e0242 3966
.org 0xe0244
	adds r0, r5, #0	@ 000e0244 281c
.org 0xe0246
	muls r0, r4	@ 000e0246 6043
.org 0xe0248
	adds r0, r0, r3	@ 000e0248 c018
.org 0xe024a
	lsls r0, r0, #1	@ 000e024a 4000
.org 0xe024c
	lsrs r1, r0, #1	@ 000e024c 4108
.org 0xe024e
	mov r2, r8	@ 000e024e 4246
.org 0xe0250
	str r1, [r2, #0]	@ 000e0250 1160
.org 0xe0252
	lsrs r0, r0, #17	@ 000e0252 400c
.org 0xe0254
	mov r1, ip	@ 000e0254 6146
.org 0xe0256
	ands r0, r1	@ 000e0256 0840
.org 0xe0258
	cmp r0, #0	@ 000e0258 0028
.org 0xe025a
	beq.n 0xe0260	@ 000e025a 01d0
.org 0xe025c
	negs r0, r6	@ 000e025c 7042
.org 0xe025e
	str r0, [r7, #92]	@ 000e025e f865
.org 0xe0260
	movs r0, #0	@ 000e0260 0020
.org 0xe0262
	strb r0, [r7, #18]	@ 000e0262 b874
.org 0xe0264
	ldr r1, [pc, #44]	@ 000e0264 0b49
.org 0xe0266
	ldrb r0, [r7, #9]	@ 000e0266 787a
.org 0xe0268
	lsls r0, r0, #2	@ 000e0268 8000
.org 0xe026a
	adds r0, r0, r1	@ 000e026a 4018
.org 0xe026c
	mov r2, ip	@ 000e026c 6246
.org 0xe026e
	str r2, [r7, #12]	@ 000e026e fa60
.org 0xe0270
	ldr r0, [r0, #0]	@ 000e0270 0068
.org 0xe0272
	ldr r0, [r0, #4]	@ 000e0272 4068
.org 0xe0274
	str r0, [r7, #20]	@ 000e0274 7861
.org 0xe0276
	adds r0, r7, #0	@ 000e0276 381c
.org 0xe0278
	bl 0xdff68	@ 000e0278 fff776fe
