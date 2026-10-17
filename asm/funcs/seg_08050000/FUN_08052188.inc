@ FUN_08052188  entry 0x08052188  size 230
.thumb
.org 0x52188
FUN_08052188:
	push {r4, lr}	@ 00052188 10b5
.org 0x5218a
	adds r4, r0, #0	@ 0005218a 041c
.org 0x5218c
	ldrb r0, [r4, #14]	@ 0005218c a07b
.org 0x5218e
	cmp r0, #0	@ 0005218e 0028
.org 0x52190
	bne.n 0x5220e	@ 00052190 3dd1
.org 0x52192
	ldr r1, [pc, #92]	@ 00052192 1749
.org 0x52194
	adds r0, r4, #0	@ 00052194 201c
.org 0x52196
	bl 0x1cf00	@ 00052196 caf7b3fe
.org 0x5219a
	movs r0, #234	@ 0005219a ea20
.org 0x5219c
	bl 0x2b10	@ 0005219c b0f7b8fc
.org 0x521a0
	adds r0, r4, #0	@ 000521a0 201c
.org 0x521a2
	adds r0, #116	@ 000521a2 7430
.org 0x521a4
	ldr r1, [pc, #76]	@ 000521a4 1349
.org 0x521a6
	bl 0x5784	@ 000521a6 b3f7edfa
.org 0x521aa
	movs r3, #0	@ 000521aa 0023
.org 0x521ac
	ldr r0, [pc, #72]	@ 000521ac 1248
.org 0x521ae
	ldr r2, [r0, #0]	@ 000521ae 0268
.org 0x521b0
	ldr r1, [r4, #84]	@ 000521b0 616d
.org 0x521b2
	ldr r0, [r2, #84]	@ 000521b2 506d
.org 0x521b4
	cmp r1, r0	@ 000521b4 8142
.org 0x521b6
	bge.n 0x521ba	@ 000521b6 00da
.org 0x521b8
	movs r3, #1	@ 000521b8 0123
.org 0x521ba
	adds r0, r4, #0	@ 000521ba 201c
.org 0x521bc
	adds r0, #76	@ 000521bc 4c30
.org 0x521be
	strb r3, [r0, #0]	@ 000521be 0370
.org 0x521c0
	movs r3, #0	@ 000521c0 0023
.org 0x521c2
	ldr r1, [r4, #84]	@ 000521c2 616d
.org 0x521c4
	ldr r0, [r2, #84]	@ 000521c4 506d
.org 0x521c6
	cmp r1, r0	@ 000521c6 8142
.org 0x521c8
	bge.n 0x521cc	@ 000521c8 00da
.org 0x521ca
	movs r3, #1	@ 000521ca 0123
.org 0x521cc
	movs r0, #74	@ 000521cc 4a20
.org 0x521ce
	adds r0, r0, r4	@ 000521ce 0019
.org 0x521d0
	mov ip, r0	@ 000521d0 8446
.org 0x521d2
	lsls r2, r3, #4	@ 000521d2 1a01
.org 0x521d4
	ldrb r1, [r0, #0]	@ 000521d4 0178
.org 0x521d6
	movs r0, #17	@ 000521d6 1120
.org 0x521d8
	negs r0, r0	@ 000521d8 4042
.org 0x521da
	ands r0, r1	@ 000521da 0840
.org 0x521dc
	orrs r0, r2	@ 000521dc 1043
.org 0x521de
	mov r1, ip	@ 000521de 6146
.org 0x521e0
	strb r0, [r1, #0]	@ 000521e0 0870
.org 0x521e2
	cmp r3, #0	@ 000521e2 002b
.org 0x521e4
	beq.n 0x521fc	@ 000521e4 0ad0
.org 0x521e6
	ldrb r0, [r4, #10]	@ 000521e6 a07a
.org 0x521e8
	movs r1, #16	@ 000521e8 1021
.org 0x521ea
	orrs r0, r1	@ 000521ea 0843
.org 0x521ec
	b.n 0x52202	@ 000521ec 09e0
.org 0x521ee
	.byte 0x00	@ 000521ee data
.org 0x521ef
	.byte 0x00	@ 000521ef data
.org 0x521f0
	.byte 0x0f,0xa1,0x00,0x00	@ 000521f0 data
.org 0x521f4
	.byte 0xd4,0x7f,0x85,0x08	@ 000521f4 data
.org 0x521f8
	.byte 0xf0,0xdb,0x02,0x02	@ 000521f8 data
.org 0x521fc
	ldrb r1, [r4, #10]	@ 000521fc a17a
.org 0x521fe
	movs r0, #239	@ 000521fe ef20
.org 0x52200
	ands r0, r1	@ 00052200 0840
.org 0x52202
	strb r0, [r4, #10]	@ 00052202 a072
.org 0x52204
	adds r0, r4, #0	@ 00052204 201c
.org 0x52206
	adds r0, #180	@ 00052206 b430
.org 0x52208
	ldr r0, [r0, #24]	@ 00052208 8069
.org 0x5220a
	str r0, [r4, #88]	@ 0005220a a065
.org 0x5220c
	b.n 0x52248	@ 0005220c 1ce0
.org 0x5220e
	cmp r0, #1	@ 0005220e 0128
.org 0x52210
	bne.n 0x5222c	@ 00052210 0cd1
.org 0x52212
	adds r0, r4, #0	@ 00052212 201c
.org 0x52214
	adds r0, #113	@ 00052214 7130
.org 0x52216
	ldrb r0, [r0, #0]	@ 00052216 0078
.org 0x52218
	lsls r0, r0, #24	@ 00052218 0006
.org 0x5221a
	asrs r0, r0, #24	@ 0005221a 0016
.org 0x5221c
	cmp r0, #3	@ 0005221c 0328
.org 0x5221e
	ble.n 0x5224e	@ 0005221e 16dd
.org 0x52220
	adds r0, r4, #0	@ 00052220 201c
.org 0x52222
	adds r0, #116	@ 00052222 7430
.org 0x52224
	ldr r1, [pc, #0]	@ 00052224 0049
.org 0x52226
	b.n 0x52244	@ 00052226 0de0
.org 0x52228
	.byte 0x64,0x80,0x85,0x08	@ 00052228 data
.org 0x5222c
	cmp r0, #2	@ 0005222c 0228
.org 0x5222e
	bne.n 0x5224e	@ 0005222e 0ed1
.org 0x52230
	adds r0, r4, #0	@ 00052230 201c
.org 0x52232
	adds r0, #113	@ 00052232 7130
.org 0x52234
	ldrb r0, [r0, #0]	@ 00052234 0078
.org 0x52236
	lsls r0, r0, #24	@ 00052236 0006
.org 0x52238
	asrs r0, r0, #24	@ 00052238 0016
.org 0x5223a
	cmp r0, #6	@ 0005223a 0628
.org 0x5223c
	ble.n 0x5224e	@ 0005223c 07dd
.org 0x5223e
	adds r0, r4, #0	@ 0005223e 201c
.org 0x52240
	adds r0, #116	@ 00052240 7430
.org 0x52242
	ldr r1, [pc, #60]	@ 00052242 0f49
.org 0x52244
	bl 0x5784	@ 00052244 b3f79efa
.org 0x52248
	ldrb r0, [r4, #14]	@ 00052248 a07b
.org 0x5224a
	adds r0, #1	@ 0005224a 0130
.org 0x5224c
	strb r0, [r4, #14]	@ 0005224c a073
.org 0x5224e
	adds r0, r4, #0	@ 0005224e 201c
.org 0x52250
	bl 0x1cff0	@ 00052250 caf7cefe
.org 0x52254
	adds r0, r4, #0	@ 00052254 201c
.org 0x52256
	adds r0, #140	@ 00052256 8c30
.org 0x52258
	ldr r0, [r0, #0]	@ 00052258 0068
.org 0x5225a
	movs r1, #1	@ 0005225a 0121
.org 0x5225c
	ands r0, r1	@ 0005225c 0840
.org 0x5225e
	cmp r0, #0	@ 0005225e 0028
.org 0x52260
	beq.n 0x52268	@ 00052260 02d0
.org 0x52262
	adds r0, r4, #0	@ 00052262 201c
.org 0x52264
	adds r0, #226	@ 00052264 e230
.org 0x52266
	strb r1, [r0, #0]	@ 00052266 0170
.org 0x52268
	adds r0, r4, #0	@ 00052268 201c
.org 0x5226a
	adds r0, #115	@ 0005226a 7330
.org 0x5226c
	ldrb r0, [r0, #0]	@ 0005226c 0078
