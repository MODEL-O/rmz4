@ FUN_08036204  entry 0x08036204  size 104
.thumb
.org 0x36204
FUN_08036204:
	push {r4, r5, lr}	@ 00036204 30b5
.org 0x36206
	adds r4, r0, #0	@ 00036206 041c
.org 0x36208
	adds r5, r4, #0	@ 00036208 251c
.org 0x3620a
	adds r5, #180	@ 0003620a b435
.org 0x3620c
	movs r1, #129	@ 0003620c 8121
.org 0x3620e
	lsls r1, r1, #1	@ 0003620e 4900
.org 0x36210
	adds r0, r4, r1	@ 00036210 6018
.org 0x36212
	ldrb r0, [r0, #0]	@ 00036212 0078
.org 0x36214
	cmp r0, #0	@ 00036214 0028
.org 0x36216
	bne.n 0x36260	@ 00036216 23d1
.org 0x36218
	movs r1, #216	@ 00036218 d821
.org 0x3621a
	lsls r1, r1, #5	@ 0003621a 4901
.org 0x3621c
	adds r0, r4, #0	@ 0003621c 201c
.org 0x3621e
	bl 0x1cf00	@ 0003621e e6f76ffe
.org 0x36222
	ldrb r0, [r5, #14]	@ 00036222 a87b
.org 0x36224
	cmp r0, #1	@ 00036224 0128
.org 0x36226
	bne.n 0x36232	@ 00036226 04d1
.org 0x36228
	adds r0, r4, #0	@ 00036228 201c
.org 0x3622a
	movs r1, #23	@ 0003622a 1721
.org 0x3622c
	bl 0x3c464	@ 0003622c 06f01af9
.org 0x36230
	b.n 0x3623a	@ 00036230 03e0
.org 0x36232
	adds r0, r4, #0	@ 00036232 201c
.org 0x36234
	movs r1, #22	@ 00036234 1621
.org 0x36236
	bl 0x3c464	@ 00036236 06f015f9
.org 0x3623a
	movs r0, #2	@ 0003623a 0220
.org 0x3623c
	strb r0, [r4, #14]	@ 0003623c a073
.org 0x3623e
	movs r0, #3	@ 0003623e 0320
.org 0x36240
	strb r0, [r4, #15]	@ 00036240 e073
.org 0x36242
	ldr r1, [r4, #96]	@ 00036242 216e
.org 0x36244
	ldr r0, [pc, #20]	@ 00036244 0548
.org 0x36246
	cmp r1, r0	@ 00036246 8142
.org 0x36248
	bgt.n 0x3624e	@ 00036248 01dc
.org 0x3624a
	adds r0, #1	@ 0003624a 0130
.org 0x3624c
	str r0, [r4, #96]	@ 0003624c 2066
.org 0x3624e
	movs r0, #129	@ 0003624e 8120
.org 0x36250
	lsls r0, r0, #1	@ 00036250 4000
.org 0x36252
	adds r1, r4, r0	@ 00036252 2118
.org 0x36254
	ldrb r0, [r1, #0]	@ 00036254 0878
.org 0x36256
	adds r0, #1	@ 00036256 0130
.org 0x36258
	strb r0, [r1, #0]	@ 00036258 0870
.org 0x3625a
	b.n 0x3626a	@ 0003625a 06e0
.org 0x3625c
	.byte 0xff,0x01,0x00,0x00	@ 0003625c data
.org 0x36260
	movs r1, #216	@ 00036260 d821
.org 0x36262
	lsls r1, r1, #5	@ 00036262 4901
.org 0x36264
	adds r0, r4, #0	@ 00036264 201c
.org 0x36266
	bl 0x3a3b0	@ 00036266 04f0a3f8
.org 0x3626a
	pop {r4, r5}	@ 0003626a 30bc
