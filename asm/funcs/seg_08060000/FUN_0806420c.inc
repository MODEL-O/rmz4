@ FUN_0806420c  entry 0x0806420c  size 164
.thumb
.org 0x6420c
FUN_0806420c:
	push {r4, r5, r6, lr}	@ 0006420c 70b5
.org 0x6420e
	adds r6, r0, #0	@ 0006420e 061c
.org 0x64210
	ldrb r0, [r6, #15]	@ 00064210 f07b
.org 0x64212
	cmp r0, #0	@ 00064212 0028
.org 0x64214
	bne.n 0x64236	@ 00064214 0fd1
.org 0x64216
	adds r0, r6, #0	@ 00064216 301c
.org 0x64218
	adds r0, #216	@ 00064218 d830
.org 0x6421a
	ldr r0, [r0, #0]	@ 0006421a 0068
.org 0x6421c
	cmp r0, #0	@ 0006421c 0028
.org 0x6421e
	beq.n 0x64228	@ 0006421e 03d0
.org 0x64220
	adds r1, r0, #0	@ 00064220 011c
.org 0x64222
	adds r1, #180	@ 00064222 b431
.org 0x64224
	movs r0, #1	@ 00064224 0120
.org 0x64226
	strb r0, [r1, #0]	@ 00064226 0870
.org 0x64228
	adds r0, r6, #0	@ 00064228 301c
.org 0x6422a
	movs r1, #22	@ 0006422a 1621
.org 0x6422c
	bl 0x65a94	@ 0006422c 01f032fc
.org 0x64230
	ldrb r0, [r6, #15]	@ 00064230 f07b
.org 0x64232
	adds r0, #1	@ 00064232 0130
.org 0x64234
	strb r0, [r6, #15]	@ 00064234 f073
.org 0x64236
	adds r0, r6, #0	@ 00064236 301c
.org 0x64238
	bl 0x1cff0	@ 00064238 b8f7dafe
.org 0x6423c
	adds r0, r6, #0	@ 0006423c 301c
.org 0x6423e
	adds r0, #116	@ 0006423e 7430
.org 0x64240
	ldr r4, [pc, #108]	@ 00064240 1b4c
.org 0x64242
	ldr r3, [pc, #112]	@ 00064242 1c4b
.org 0x64244
	adds r1, r6, #0	@ 00064244 311c
.org 0x64246
	adds r1, #180	@ 00064246 b431
.org 0x64248
	ldrb r2, [r1, #0]	@ 00064248 0a78
.org 0x6424a
	lsls r1, r2, #1	@ 0006424a 5100
.org 0x6424c
	adds r1, r1, r3	@ 0006424c c918
.org 0x6424e
	ldrh r1, [r1, #0]	@ 0006424e 0988
.org 0x64250
	lsls r1, r1, #2	@ 00064250 8900
.org 0x64252
	adds r1, r1, r4	@ 00064252 0919
.org 0x64254
	adds r3, r6, #0	@ 00064254 331c
.org 0x64256
	adds r3, #113	@ 00064256 7133
.org 0x64258
	movs r5, #0	@ 00064258 0025
.org 0x6425a
	ldrsb r5, [r3, r5]	@ 0006425a 5d57
.org 0x6425c
	ldr r1, [r1, #0]	@ 0006425c 0968
.org 0x6425e
	lsls r3, r5, #2	@ 0006425e ab00
.org 0x64260
	adds r3, r3, r1	@ 00064260 5b18
.org 0x64262
	ldr r4, [pc, #84]	@ 00064262 154c
.org 0x64264
	adds r1, r6, #0	@ 00064264 311c
.org 0x64266
	adds r1, #181	@ 00064266 b531
.org 0x64268
	ldrb r1, [r1, #0]	@ 00064268 0978
.org 0x6426a
	lsls r1, r1, #2	@ 0006426a 8900
.org 0x6426c
	adds r1, r1, r4	@ 0006426c 0919
.org 0x6426e
	ldr r1, [r1, #0]	@ 0006426e 0968
.org 0x64270
	lsls r2, r2, #2	@ 00064270 9200
.org 0x64272
	adds r2, r2, r1	@ 00064272 5218
.org 0x64274
	ldr r1, [r2, #0]	@ 00064274 1168
.org 0x64276
	adds r1, r1, r5	@ 00064276 4919
.org 0x64278
	ldrb r1, [r1, #0]	@ 00064278 0978
.org 0x6427a
	lsls r2, r1, #1	@ 0006427a 4a00
.org 0x6427c
	adds r2, r2, r1	@ 0006427c 5218
.org 0x6427e
	lsls r2, r2, #3	@ 0006427e d200
.org 0x64280
	ldr r1, [r3, #0]	@ 00064280 1968
.org 0x64282
	adds r1, r1, r2	@ 00064282 8918
.org 0x64284
	bl 0x5784	@ 00064284 a1f77efa
.org 0x64288
	ldrb r0, [r6, #18]	@ 00064288 b07c
.org 0x6428a
	cmp r0, #0	@ 0006428a 0028
.org 0x6428c
	beq.n 0x64298	@ 0006428c 04d0
.org 0x6428e
	subs r0, #1	@ 0006428e 0138
.org 0x64290
	strb r0, [r6, #18]	@ 00064290 b074
.org 0x64292
	lsls r0, r0, #24	@ 00064292 0006
.org 0x64294
	cmp r0, #0	@ 00064294 0028
.org 0x64296
	bne.n 0x642aa	@ 00064296 08d1
.org 0x64298
	adds r0, r6, #0	@ 00064298 301c
.org 0x6429a
	adds r0, #115	@ 0006429a 7330
.org 0x6429c
	ldrb r0, [r0, #0]	@ 0006429c 0078
.org 0x6429e
	cmp r0, #3	@ 0006429e 0328
.org 0x642a0
	bne.n 0x642aa	@ 000642a0 03d1
.org 0x642a2
	movs r1, #0	@ 000642a2 0021
.org 0x642a4
	movs r0, #4	@ 000642a4 0420
.org 0x642a6
	strb r0, [r6, #14]	@ 000642a6 b073
.org 0x642a8
	strb r1, [r6, #15]	@ 000642a8 f173
.org 0x642aa
	pop {r4, r5, r6}	@ 000642aa 70bc
.org 0x642ac
	pop {r0}	@ 000642ac 01bc
.org 0x642ae
	bx r0	@ 000642ae 0047
