@ FUN_080631f4  entry 0x080631f4  size 128
.thumb
.org 0x631f4
FUN_080631f4:
	push {r4, r5, r6, lr}	@ 000631f4 70b5
.org 0x631f6
	adds r6, r0, #0	@ 000631f6 061c
.org 0x631f8
	ldrb r0, [r6, #15]	@ 000631f8 f07b
.org 0x631fa
	cmp r0, #0	@ 000631fa 0028
.org 0x631fc
	bne.n 0x6320c	@ 000631fc 06d1
.org 0x631fe
	adds r0, r6, #0	@ 000631fe 301c
.org 0x63200
	movs r1, #0	@ 00063200 0021
.org 0x63202
	bl 0x65a94	@ 00063202 02f047fc
.org 0x63206
	ldrb r0, [r6, #15]	@ 00063206 f07b
.org 0x63208
	adds r0, #1	@ 00063208 0130
.org 0x6320a
	strb r0, [r6, #15]	@ 0006320a f073
.org 0x6320c
	adds r0, r6, #0	@ 0006320c 301c
.org 0x6320e
	bl 0x1cff0	@ 0006320e b9f7effe
.org 0x63212
	adds r0, r6, #0	@ 00063212 301c
.org 0x63214
	adds r0, #116	@ 00063214 7430
.org 0x63216
	ldr r4, [pc, #92]	@ 00063216 174c
.org 0x63218
	ldr r3, [pc, #92]	@ 00063218 174b
.org 0x6321a
	adds r1, r6, #0	@ 0006321a 311c
.org 0x6321c
	adds r1, #180	@ 0006321c b431
.org 0x6321e
	ldrb r2, [r1, #0]	@ 0006321e 0a78
.org 0x63220
	lsls r1, r2, #1	@ 00063220 5100
.org 0x63222
	adds r1, r1, r3	@ 00063222 c918
.org 0x63224
	ldrh r1, [r1, #0]	@ 00063224 0988
.org 0x63226
	lsls r1, r1, #2	@ 00063226 8900
.org 0x63228
	adds r1, r1, r4	@ 00063228 0919
.org 0x6322a
	adds r3, r6, #0	@ 0006322a 331c
.org 0x6322c
	adds r3, #113	@ 0006322c 7133
.org 0x6322e
	movs r5, #0	@ 0006322e 0025
.org 0x63230
	ldrsb r5, [r3, r5]	@ 00063230 5d57
.org 0x63232
	ldr r1, [r1, #0]	@ 00063232 0968
.org 0x63234
	lsls r3, r5, #2	@ 00063234 ab00
.org 0x63236
	adds r3, r3, r1	@ 00063236 5b18
.org 0x63238
	ldr r4, [pc, #64]	@ 00063238 104c
.org 0x6323a
	adds r1, r6, #0	@ 0006323a 311c
.org 0x6323c
	adds r1, #181	@ 0006323c b531
.org 0x6323e
	ldrb r1, [r1, #0]	@ 0006323e 0978
.org 0x63240
	lsls r1, r1, #2	@ 00063240 8900
.org 0x63242
	adds r1, r1, r4	@ 00063242 0919
.org 0x63244
	ldr r1, [r1, #0]	@ 00063244 0968
.org 0x63246
	lsls r2, r2, #2	@ 00063246 9200
.org 0x63248
	adds r2, r2, r1	@ 00063248 5218
.org 0x6324a
	ldr r1, [r2, #0]	@ 0006324a 1168
.org 0x6324c
	adds r1, r1, r5	@ 0006324c 4919
.org 0x6324e
	ldrb r1, [r1, #0]	@ 0006324e 0978
.org 0x63250
	lsls r2, r1, #1	@ 00063250 4a00
.org 0x63252
	adds r2, r2, r1	@ 00063252 5218
.org 0x63254
	lsls r2, r2, #3	@ 00063254 d200
.org 0x63256
	ldr r1, [r3, #0]	@ 00063256 1968
.org 0x63258
	adds r1, r1, r2	@ 00063258 8918
.org 0x6325a
	bl 0x5784	@ 0006325a a2f793fa
.org 0x6325e
	adds r0, r6, #0	@ 0006325e 301c
.org 0x63260
	adds r0, #196	@ 00063260 c430
.org 0x63262
	ldr r1, [r0, #0]	@ 00063262 0168
.org 0x63264
	cmp r1, #0	@ 00063264 0029
.org 0x63266
	bne.n 0x6326e	@ 00063266 02d1
.org 0x63268
	movs r0, #1	@ 00063268 0120
.org 0x6326a
	strb r0, [r6, #14]	@ 0006326a b073
.org 0x6326c
	strb r1, [r6, #15]	@ 0006326c f173
.org 0x6326e
	pop {r4, r5, r6}	@ 0006326e 70bc
.org 0x63270
	pop {r0}	@ 00063270 01bc
.org 0x63272
	bx r0	@ 00063272 0047
