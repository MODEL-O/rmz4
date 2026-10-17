@ FUN_080f11cc  entry 0x080f11cc  size 146
.thumb
.org 0xf11cc
FUN_080f11cc:
	push {r4, r5, r6, lr}	@ 000f11cc 70b5
.org 0xf11ce
	adds r5, r0, #0	@ 000f11ce 051c
.org 0xf11d0
	ldrb r6, [r5, #17]	@ 000f11d0 6e7c
.org 0xf11d2
	cmp r6, #0	@ 000f11d2 002e
.org 0xf11d4
	bne.n 0xf1252	@ 000f11d4 3dd1
.org 0xf11d6
	ldr r0, [pc, #136]	@ 000f11d6 2248
.org 0xf11d8
	adds r0, #242	@ 000f11d8 f230
.org 0xf11da
	movs r1, #144	@ 000f11da 9021
.org 0xf11dc
	lsls r1, r1, #2	@ 000f11dc 8900
.org 0xf11de
	strh r1, [r0, #0]	@ 000f11de 0180
.org 0xf11e0
	ldr r4, [pc, #128]	@ 000f11e0 204c
.org 0xf11e2
	adds r4, #242	@ 000f11e2 f234
.org 0xf11e4
	movs r0, #6	@ 000f11e4 0620
.org 0xf11e6
	strh r0, [r4, #0]	@ 000f11e6 2080
.org 0xf11e8
	ldr r0, [pc, #124]	@ 000f11e8 1f48
.org 0xf11ea
	ldrh r2, [r0, #6]	@ 000f11ea c288
.org 0xf11ec
	lsrs r2, r2, #6	@ 000f11ec 9209
.org 0xf11ee
	subs r1, r1, r2	@ 000f11ee 891a
.org 0xf11f0
	lsls r1, r1, #5	@ 000f11f0 4901
.org 0xf11f2
	movs r2, #128	@ 000f11f2 8022
.org 0xf11f4
	lsls r2, r2, #9	@ 000f11f4 5202
.org 0xf11f6
	adds r1, r1, r2	@ 000f11f6 8918
.org 0xf11f8
	bl 0x1d30	@ 000f11f8 10f79afd
.org 0xf11fc
	ldr r0, [pc, #108]	@ 000f11fc 1b48
.org 0xf11fe
	ldrh r1, [r4, #0]	@ 000f11fe 2188
.org 0xf1200
	ldrb r2, [r0, #7]	@ 000f1200 c279
.org 0xf1202
	subs r1, r1, r2	@ 000f1202 891a
.org 0xf1204
	lsls r1, r1, #5	@ 000f1204 4901
.org 0xf1206
	movs r2, #128	@ 000f1206 8022
.org 0xf1208
	lsls r2, r2, #2	@ 000f1208 9200
.org 0xf120a
	adds r1, r1, r2	@ 000f120a 8918
.org 0xf120c
	bl 0x2208	@ 000f120c 10f7fcff
.org 0xf1210
	movs r1, #242	@ 000f1210 f221
.org 0xf1212
	lsls r1, r1, #7	@ 000f1212 c901
.org 0xf1214
	adds r0, r5, #0	@ 000f1214 281c
.org 0xf1216
	bl 0x1cf00	@ 000f1216 2bf773fe
.org 0xf121a
	adds r2, r5, #0	@ 000f121a 2a1c
.org 0xf121c
	adds r2, #73	@ 000f121c 4932
.org 0xf121e
	ldrb r1, [r2, #0]	@ 000f121e 1178
.org 0xf1220
	movs r0, #13	@ 000f1220 0d20
.org 0xf1222
	negs r0, r0	@ 000f1222 4042
.org 0xf1224
	ands r0, r1	@ 000f1224 0840
.org 0xf1226
	strb r0, [r2, #0]	@ 000f1226 1070
.org 0xf1228
	ldrb r1, [r5, #10]	@ 000f1228 a97a
.org 0xf122a
	movs r0, #239	@ 000f122a ef20
.org 0xf122c
	ands r0, r1	@ 000f122c 0840
.org 0xf122e
	strb r0, [r5, #10]	@ 000f122e a872
.org 0xf1230
	adds r0, r5, #0	@ 000f1230 281c
.org 0xf1232
	adds r0, #76	@ 000f1232 4c30
.org 0xf1234
	strb r6, [r0, #0]	@ 000f1234 0670
.org 0xf1236
	adds r2, #1	@ 000f1236 0132
.org 0xf1238
	ldrb r1, [r2, #0]	@ 000f1238 1178
.org 0xf123a
	movs r0, #17	@ 000f123a 1120
.org 0xf123c
	negs r0, r0	@ 000f123c 4042
.org 0xf123e
	ands r0, r1	@ 000f123e 0840
.org 0xf1240
	strb r0, [r2, #0]	@ 000f1240 1070
.org 0xf1242
	ldr r0, [r5, #84]	@ 000f1242 686d
.org 0xf1244
	ldr r1, [r5, #88]	@ 000f1244 a96d
.org 0xf1246
	bl 0x8534	@ 000f1246 17f775f9
.org 0xf124a
	str r0, [r5, #88]	@ 000f124a a865
.org 0xf124c
	ldrb r0, [r5, #17]	@ 000f124c 687c
.org 0xf124e
	adds r0, #1	@ 000f124e 0130
.org 0xf1250
	strb r0, [r5, #17]	@ 000f1250 6874
.org 0xf1252
	adds r0, r5, #0	@ 000f1252 281c
.org 0xf1254
	bl 0x1cff0	@ 000f1254 2bf7ccfe
.org 0xf1258
	pop {r4, r5, r6}	@ 000f1258 70bc
.org 0xf125a
	pop {r0}	@ 000f125a 01bc
.org 0xf125c
	bx r0	@ 000f125c 0047
