@ FUN_08082158  entry 0x08082158  size 274
.thumb
.org 0x82158
FUN_08082158:
	push {r4, r5, r6, lr}	@ 00082158 70b5
.org 0x8215a
	adds r6, r0, #0	@ 0008215a 061c
.org 0x8215c
	ldr r1, [pc, #40]	@ 0008215c 0a49
.org 0x8215e
	ldrb r0, [r6, #9]	@ 0008215e 707a
.org 0x82160
	lsls r0, r0, #2	@ 00082160 8000
.org 0x82162
	adds r0, r0, r1	@ 00082162 4018
.org 0x82164
	movs r1, #1	@ 00082164 0121
.org 0x82166
	str r1, [r6, #12]	@ 00082166 f160
.org 0x82168
	ldr r0, [r0, #0]	@ 00082168 0068
.org 0x8216a
	ldr r0, [r0, #4]	@ 0008216a 4068
.org 0x8216c
	str r0, [r6, #20]	@ 0008216c 7061
.org 0x8216e
	ldr r1, [pc, #28]	@ 0008216e 0749
.org 0x82170
	ldrb r0, [r6, #16]	@ 00082170 307c
.org 0x82172
	adds r0, r0, r1	@ 00082172 4018
.org 0x82174
	ldrb r0, [r0, #0]	@ 00082174 0078
.org 0x82176
	strb r0, [r6, #13]	@ 00082176 7073
.org 0x82178
	ldrb r2, [r6, #17]	@ 00082178 727c
.org 0x8217a
	cmp r2, #0	@ 0008217a 002a
.org 0x8217c
	beq.n 0x82190	@ 0008217c 08d0
.org 0x8217e
	ldrb r0, [r6, #10]	@ 0008217e b07a
.org 0x82180
	movs r1, #32	@ 00082180 2021
.org 0x82182
	orrs r0, r1	@ 00082182 0843
.org 0x82184
	b.n 0x82196	@ 00082184 07e0
.org 0x82186
	.byte 0x00	@ 00082186 data
.org 0x82187
	.byte 0x00	@ 00082187 data
.org 0x82188
	.byte 0x40,0xdb,0x85,0x08	@ 00082188 data
.org 0x8218c
	.byte 0x10,0xe9,0x85,0x08	@ 0008218c data
.org 0x82190
	ldrb r1, [r6, #10]	@ 00082190 b17a
.org 0x82192
	movs r0, #223	@ 00082192 df20
.org 0x82194
	ands r0, r1	@ 00082194 0840
.org 0x82196
	strb r0, [r6, #10]	@ 00082196 b072
.org 0x82198
	movs r4, #1	@ 00082198 0124
.org 0x8219a
	movs r1, #1	@ 0008219a 0121
.org 0x8219c
	ands r1, r2	@ 0008219c 1140
.org 0x8219e
	adds r0, r6, #0	@ 0008219e 301c
.org 0x821a0
	adds r0, #77	@ 000821a0 4d30
.org 0x821a2
	strb r1, [r0, #0]	@ 000821a2 0170
.org 0x821a4
	adds r5, r6, #0	@ 000821a4 351c
.org 0x821a6
	adds r5, #74	@ 000821a6 4a35
.org 0x821a8
	lsls r1, r1, #5	@ 000821a8 4901
.org 0x821aa
	ldrb r2, [r5, #0]	@ 000821aa 2a78
.org 0x821ac
	movs r0, #33	@ 000821ac 2120
.org 0x821ae
	negs r0, r0	@ 000821ae 4042
.org 0x821b0
	ands r0, r2	@ 000821b0 1040
.org 0x821b2
	orrs r0, r1	@ 000821b2 0843
.org 0x821b4
	strb r0, [r5, #0]	@ 000821b4 2870
.org 0x821b6
	ldrb r0, [r6, #10]	@ 000821b6 b07a
.org 0x821b8
	movs r1, #2	@ 000821b8 0221
.org 0x821ba
	orrs r0, r1	@ 000821ba 0843
.org 0x821bc
	strb r0, [r6, #10]	@ 000821bc b072
.org 0x821be
	adds r0, r6, #0	@ 000821be 301c
.org 0x821c0
	bl 0x1cc9c	@ 000821c0 9af76cfd
.org 0x821c4
	ldrb r0, [r6, #10]	@ 000821c4 b07a
.org 0x821c6
	orrs r0, r4	@ 000821c6 2043
.org 0x821c8
	movs r1, #4	@ 000821c8 0421
.org 0x821ca
	orrs r0, r1	@ 000821ca 0843
.org 0x821cc
	strb r0, [r6, #10]	@ 000821cc b072
.org 0x821ce
	adds r4, r6, #0	@ 000821ce 341c
.org 0x821d0
	adds r4, #116	@ 000821d0 7434
.org 0x821d2
	ldr r1, [pc, #52]	@ 000821d2 0d49
.org 0x821d4
	adds r2, r6, #0	@ 000821d4 321c
.org 0x821d6
	adds r2, #84	@ 000821d6 5432
.org 0x821d8
	adds r0, r4, #0	@ 000821d8 201c
.org 0x821da
	movs r3, #8	@ 000821da 0823
.org 0x821dc
	bl 0x5760	@ 000821dc 83f7c0fa
.org 0x821e0
	str r6, [r4, #44]	@ 000821e0 e662
.org 0x821e2
	ldr r0, [pc, #40]	@ 000821e2 0a48
.org 0x821e4
	str r0, [r4, #36]	@ 000821e4 6062
.org 0x821e6
	movs r1, #176	@ 000821e6 b021
.org 0x821e8
	lsls r1, r1, #5	@ 000821e8 4901
.org 0x821ea
	adds r0, r6, #0	@ 000821ea 301c
.org 0x821ec
	bl 0x1cf00	@ 000821ec 9af788fe
.org 0x821f0
	ldrb r1, [r6, #10]	@ 000821f0 b17a
.org 0x821f2
	movs r0, #32	@ 000821f2 2020
.org 0x821f4
	ands r0, r1	@ 000821f4 0840
.org 0x821f6
	cmp r0, #0	@ 000821f6 0028
.org 0x821f8
	bne.n 0x82210	@ 000821f8 0ad1
.org 0x821fa
	ldr r0, [r6, #84]	@ 000821fa 706d
.org 0x821fc
	ldr r1, [r6, #88]	@ 000821fc b16d
.org 0x821fe
	bl 0x8534	@ 000821fe 86f799f9
.org 0x82202
	movs r1, #128	@ 00082202 8021
.org 0x82204
	lsls r1, r1, #1	@ 00082204 4900
.org 0x82206
	b.n 0x8221a	@ 00082206 08e0
.org 0x82208
	.byte 0x88,0xe7,0x85,0x08	@ 00082208 data
.org 0x8220c
	.byte 0xd5,0x24,0x08,0x08	@ 0008220c data
.org 0x82210
	ldr r0, [r6, #84]	@ 00082210 706d
.org 0x82212
	ldr r1, [r6, #88]	@ 00082212 b16d
.org 0x82214
	bl 0x8748	@ 00082214 86f798fa
.org 0x82218
	ldr r1, [pc, #32]	@ 00082218 0849
.org 0x8221a
	adds r0, r0, r1	@ 0008221a 4018
.org 0x8221c
	str r0, [r6, #88]	@ 0008221c b065
.org 0x8221e
	movs r2, #0	@ 0008221e 0022
.org 0x82220
	ldr r0, [pc, #28]	@ 00082220 0748
.org 0x82222
	ldr r0, [r0, #0]	@ 00082222 0068
.org 0x82224
	ldr r0, [r0, #84]	@ 00082224 406d
.org 0x82226
	ldr r1, [r6, #84]	@ 00082226 716d
.org 0x82228
	subs r0, r0, r1	@ 00082228 401a
.org 0x8222a
	cmp r0, #0	@ 0008222a 0028
.org 0x8222c
	ble.n 0x82230	@ 0008222c 00dd
.org 0x8222e
	movs r2, #1	@ 0008222e 0122
.org 0x82230
	cmp r2, #0	@ 00082230 002a
.org 0x82232
	beq.n 0x82244	@ 00082232 07d0
.org 0x82234
	ldrb r1, [r6, #10]	@ 00082234 b17a
.org 0x82236
	movs r0, #16	@ 00082236 1020
.org 0x82238
	orrs r0, r1	@ 00082238 0843
.org 0x8223a
	b.n 0x8224a	@ 0008223a 06e0
.org 0x8223c
	.byte 0x00,0xff,0xff,0xff	@ 0008223c data
.org 0x82240
	.byte 0xf0,0xdb,0x02,0x02	@ 00082240 data
.org 0x82244
	ldrb r1, [r6, #10]	@ 00082244 b17a
.org 0x82246
	movs r0, #239	@ 00082246 ef20
.org 0x82248
	ands r0, r1	@ 00082248 0840
.org 0x8224a
	strb r0, [r6, #10]	@ 0008224a b072
.org 0x8224c
	adds r1, r2, #0	@ 0008224c 111c
.org 0x8224e
	adds r0, r6, #0	@ 0008224e 301c
.org 0x82250
	adds r0, #76	@ 00082250 4c30
.org 0x82252
	movs r3, #0	@ 00082252 0023
.org 0x82254
	strb r1, [r0, #0]	@ 00082254 0170
.org 0x82256
	lsls r1, r1, #4	@ 00082256 0901
.org 0x82258
	ldrb r2, [r5, #0]	@ 00082258 2a78
.org 0x8225a
	movs r0, #17	@ 0008225a 1120
.org 0x8225c
	negs r0, r0	@ 0008225c 4042
.org 0x8225e
	ands r0, r2	@ 0008225e 1040
.org 0x82260
	orrs r0, r1	@ 00082260 0843
.org 0x82262
	strb r0, [r5, #0]	@ 00082262 2870
.org 0x82264
	adds r0, r6, #0	@ 00082264 301c
.org 0x82266
	adds r0, #184	@ 00082266 b830
.org 0x82268
	str r3, [r0, #0]	@ 00082268 0360
