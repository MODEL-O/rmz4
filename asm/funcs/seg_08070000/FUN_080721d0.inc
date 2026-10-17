@ FUN_080721d0  entry 0x080721d0  size 176
.thumb
.org 0x721d0
FUN_080721d0:
	push {r4, r5, r6, r7, lr}	@ 000721d0 f0b5
.org 0x721d2
	adds r6, r0, #0	@ 000721d2 061c
.org 0x721d4
	movs r7, #0	@ 000721d4 0027
.org 0x721d6
	ldrb r0, [r6, #15]	@ 000721d6 f07b
.org 0x721d8
	cmp r0, #0	@ 000721d8 0028
.org 0x721da
	bne.n 0x721f0	@ 000721da 09d1
.org 0x721dc
	adds r0, r6, #0	@ 000721dc 301c
.org 0x721de
	movs r1, #16	@ 000721de 1021
.org 0x721e0
	bl 0x736c4	@ 000721e0 01f070fa
.org 0x721e4
	str r7, [r6, #96]	@ 000721e4 3766
.org 0x721e6
	movs r0, #48	@ 000721e6 3020
.org 0x721e8
	str r0, [r6, #104]	@ 000721e8 b066
.org 0x721ea
	ldrb r0, [r6, #15]	@ 000721ea f07b
.org 0x721ec
	adds r0, #1	@ 000721ec 0130
.org 0x721ee
	strb r0, [r6, #15]	@ 000721ee f073
.org 0x721f0
	adds r0, r6, #0	@ 000721f0 301c
.org 0x721f2
	bl 0x1cff0	@ 000721f2 aaf7fdfe
.org 0x721f6
	adds r0, r6, #0	@ 000721f6 301c
.org 0x721f8
	adds r0, #116	@ 000721f8 7430
.org 0x721fa
	ldr r4, [pc, #108]	@ 000721fa 1b4c
.org 0x721fc
	ldr r3, [pc, #108]	@ 000721fc 1b4b
.org 0x721fe
	adds r1, r6, #0	@ 000721fe 311c
.org 0x72200
	adds r1, #184	@ 00072200 b831
.org 0x72202
	ldrb r2, [r1, #0]	@ 00072202 0a78
.org 0x72204
	lsls r1, r2, #1	@ 00072204 5100
.org 0x72206
	adds r1, r1, r3	@ 00072206 c918
.org 0x72208
	ldrh r1, [r1, #0]	@ 00072208 0988
.org 0x7220a
	lsls r1, r1, #2	@ 0007220a 8900
.org 0x7220c
	adds r1, r1, r4	@ 0007220c 0919
.org 0x7220e
	adds r3, r6, #0	@ 0007220e 331c
.org 0x72210
	adds r3, #113	@ 00072210 7133
.org 0x72212
	movs r5, #0	@ 00072212 0025
.org 0x72214
	ldrsb r5, [r3, r5]	@ 00072214 5d57
.org 0x72216
	ldr r1, [r1, #0]	@ 00072216 0968
.org 0x72218
	lsls r3, r5, #2	@ 00072218 ab00
.org 0x7221a
	adds r3, r3, r1	@ 0007221a 5b18
.org 0x7221c
	ldr r4, [pc, #80]	@ 0007221c 144c
.org 0x7221e
	adds r1, r6, #0	@ 0007221e 311c
.org 0x72220
	adds r1, #185	@ 00072220 b931
.org 0x72222
	ldrb r1, [r1, #0]	@ 00072222 0978
.org 0x72224
	lsls r1, r1, #2	@ 00072224 8900
.org 0x72226
	adds r1, r1, r4	@ 00072226 0919
.org 0x72228
	ldr r1, [r1, #0]	@ 00072228 0968
.org 0x7222a
	lsls r2, r2, #2	@ 0007222a 9200
.org 0x7222c
	adds r2, r2, r1	@ 0007222c 5218
.org 0x7222e
	ldr r1, [r2, #0]	@ 0007222e 1168
.org 0x72230
	adds r1, r1, r5	@ 00072230 4919
.org 0x72232
	ldrb r1, [r1, #0]	@ 00072232 0978
.org 0x72234
	lsls r2, r1, #1	@ 00072234 4a00
.org 0x72236
	adds r2, r2, r1	@ 00072236 5218
.org 0x72238
	lsls r2, r2, #3	@ 00072238 d200
.org 0x7223a
	ldr r1, [r3, #0]	@ 0007223a 1968
.org 0x7223c
	adds r1, r1, r2	@ 0007223c 8918
.org 0x7223e
	bl 0x5784	@ 0007223e 93f7a1fa
.org 0x72242
	ldr r0, [r6, #88]	@ 00072242 b06d
.org 0x72244
	ldr r1, [r6, #96]	@ 00072244 316e
.org 0x72246
	adds r0, r0, r1	@ 00072246 4018
.org 0x72248
	str r0, [r6, #88]	@ 00072248 b065
.org 0x7224a
	adds r0, r6, #0	@ 0007224a 301c
.org 0x7224c
	bl 0x73850	@ 0007224c 01f000fb
.org 0x72250
	cmp r0, #0	@ 00072250 0028
.org 0x72252
	bne.n 0x72274	@ 00072252 0fd1
.org 0x72254
	ldr r0, [r6, #96]	@ 00072254 306e
.org 0x72256
	ldr r1, [r6, #104]	@ 00072256 b16e
.org 0x72258
	adds r0, r0, r1	@ 00072258 4018
.org 0x7225a
	str r0, [r6, #96]	@ 0007225a 3066
.org 0x7225c
	movs r1, #224	@ 0007225c e021
.org 0x7225e
	lsls r1, r1, #3	@ 0007225e c900
.org 0x72260
	cmp r0, r1	@ 00072260 8842
.org 0x72262
	ble.n 0x72286	@ 00072262 10dd
.org 0x72264
	str r1, [r6, #96]	@ 00072264 3166
.org 0x72266
	b.n 0x72286	@ 00072266 0ee0
.org 0x72268
	.byte 0x08,0xcb,0x85,0x08	@ 00072268 data
.org 0x7226c
	.byte 0x04,0xcc,0x85,0x08	@ 0007226c data
.org 0x72270
	.byte 0xfc,0xcb,0x85,0x08	@ 00072270 data
.org 0x72274
	adds r0, r6, #0	@ 00072274 301c
.org 0x72276
	bl 0x73a68	@ 00072276 01f0f7fb
.org 0x7227a
	str r7, [r6, #96]	@ 0007227a 3766
.org 0x7227c
	ldrb r0, [r6, #14]	@ 0007227c b07b
.org 0x7227e
	adds r0, #1	@ 0007227e 0130
