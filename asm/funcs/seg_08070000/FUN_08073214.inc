@ FUN_08073214  entry 0x08073214  size 144
.thumb
.org 0x73214
FUN_08073214:
	push {r4, r5, r6, lr}	@ 00073214 70b5
.org 0x73216
	adds r6, r0, #0	@ 00073216 061c
.org 0x73218
	ldrb r0, [r6, #15]	@ 00073218 f07b
.org 0x7321a
	cmp r0, #0	@ 0007321a 0028
.org 0x7321c
	bne.n 0x73230	@ 0007321c 08d1
.org 0x7321e
	adds r0, r6, #0	@ 0007321e 301c
.org 0x73220
	movs r1, #0	@ 00073220 0021
.org 0x73222
	bl 0x736c4	@ 00073222 00f04ffa
.org 0x73226
	movs r0, #80	@ 00073226 5020
.org 0x73228
	strb r0, [r6, #18]	@ 00073228 b074
.org 0x7322a
	ldrb r0, [r6, #15]	@ 0007322a f07b
.org 0x7322c
	adds r0, #1	@ 0007322c 0130
.org 0x7322e
	strb r0, [r6, #15]	@ 0007322e f073
.org 0x73230
	adds r0, r6, #0	@ 00073230 301c
.org 0x73232
	bl 0x1cff0	@ 00073232 a9f7ddfe
.org 0x73236
	adds r0, r6, #0	@ 00073236 301c
.org 0x73238
	adds r0, #116	@ 00073238 7430
.org 0x7323a
	ldr r4, [pc, #104]	@ 0007323a 1a4c
.org 0x7323c
	ldr r3, [pc, #104]	@ 0007323c 1a4b
.org 0x7323e
	adds r1, r6, #0	@ 0007323e 311c
.org 0x73240
	adds r1, #184	@ 00073240 b831
.org 0x73242
	ldrb r2, [r1, #0]	@ 00073242 0a78
.org 0x73244
	lsls r1, r2, #1	@ 00073244 5100
.org 0x73246
	adds r1, r1, r3	@ 00073246 c918
.org 0x73248
	ldrh r1, [r1, #0]	@ 00073248 0988
.org 0x7324a
	lsls r1, r1, #2	@ 0007324a 8900
.org 0x7324c
	adds r1, r1, r4	@ 0007324c 0919
.org 0x7324e
	adds r3, r6, #0	@ 0007324e 331c
.org 0x73250
	adds r3, #113	@ 00073250 7133
.org 0x73252
	movs r5, #0	@ 00073252 0025
.org 0x73254
	ldrsb r5, [r3, r5]	@ 00073254 5d57
.org 0x73256
	ldr r1, [r1, #0]	@ 00073256 0968
.org 0x73258
	lsls r3, r5, #2	@ 00073258 ab00
.org 0x7325a
	adds r3, r3, r1	@ 0007325a 5b18
.org 0x7325c
	ldr r4, [pc, #76]	@ 0007325c 134c
.org 0x7325e
	adds r1, r6, #0	@ 0007325e 311c
.org 0x73260
	adds r1, #185	@ 00073260 b931
.org 0x73262
	ldrb r1, [r1, #0]	@ 00073262 0978
.org 0x73264
	lsls r1, r1, #2	@ 00073264 8900
.org 0x73266
	adds r1, r1, r4	@ 00073266 0919
.org 0x73268
	ldr r1, [r1, #0]	@ 00073268 0968
.org 0x7326a
	lsls r2, r2, #2	@ 0007326a 9200
.org 0x7326c
	adds r2, r2, r1	@ 0007326c 5218
.org 0x7326e
	ldr r1, [r2, #0]	@ 0007326e 1168
.org 0x73270
	adds r1, r1, r5	@ 00073270 4919
.org 0x73272
	ldrb r1, [r1, #0]	@ 00073272 0978
.org 0x73274
	lsls r2, r1, #1	@ 00073274 4a00
.org 0x73276
	adds r2, r2, r1	@ 00073276 5218
.org 0x73278
	lsls r2, r2, #3	@ 00073278 d200
.org 0x7327a
	ldr r1, [r3, #0]	@ 0007327a 1968
.org 0x7327c
	adds r1, r1, r2	@ 0007327c 8918
.org 0x7327e
	bl 0x5784	@ 0007327e 92f781fa
.org 0x73282
	adds r0, r6, #0	@ 00073282 301c
.org 0x73284
	bl 0x73a68	@ 00073284 00f0f0fb
.org 0x73288
	ldrb r0, [r6, #18]	@ 00073288 b07c
.org 0x7328a
	subs r0, #1	@ 0007328a 0138
.org 0x7328c
	strb r0, [r6, #18]	@ 0007328c b074
.org 0x7328e
	lsls r0, r0, #24	@ 0007328e 0006
.org 0x73290
	lsrs r1, r0, #24	@ 00073290 010e
.org 0x73292
	cmp r1, #0	@ 00073292 0029
.org 0x73294
	bne.n 0x7329e	@ 00073294 03d1
.org 0x73296
	ldrb r0, [r6, #14]	@ 00073296 b07b
.org 0x73298
	adds r0, #1	@ 00073298 0130
.org 0x7329a
	strb r0, [r6, #14]	@ 0007329a b073
.org 0x7329c
	strb r1, [r6, #15]	@ 0007329c f173
.org 0x7329e
	pop {r4, r5, r6}	@ 0007329e 70bc
.org 0x732a0
	pop {r0}	@ 000732a0 01bc
.org 0x732a2
	bx r0	@ 000732a2 0047
