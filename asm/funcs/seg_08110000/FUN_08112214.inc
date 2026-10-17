@ FUN_08112214  entry 0x08112214  size 186
.thumb
.org 0x112214
FUN_08112214:
	push {r4, r5, r6, lr}	@ 00112214 70b5
.org 0x112216
	adds r6, r0, #0	@ 00112216 061c
.org 0x112218
	ldrb r5, [r6, #6]	@ 00112218 b579
.org 0x11221a
	cmp r5, #0	@ 0011221a 002d
.org 0x11221c
	beq.n 0x112224	@ 0011221c 02d0
.org 0x11221e
	cmp r5, #1	@ 0011221e 012d
.org 0x112220
	beq.n 0x11229e	@ 00112220 3dd0
.org 0x112222
	b.n 0x112300	@ 00112222 6de0
.org 0x112224
	ldr r4, [pc, #152]	@ 00112224 264c
.org 0x112226
	ldr r1, [pc, #156]	@ 00112226 2749
.org 0x112228
	adds r0, r4, r1	@ 00112228 6018
.org 0x11222a
	movs r1, #32	@ 0011222a 2021
.org 0x11222c
	strb r1, [r0, #0]	@ 0011222c 0170
.org 0x11222e
	ldr r2, [pc, #152]	@ 0011222e 264a
.org 0x112230
	adds r0, r4, r2	@ 00112230 a018
.org 0x112232
	strb r1, [r0, #0]	@ 00112232 0170
.org 0x112234
	movs r3, #128	@ 00112234 8023
.org 0x112236
	lsls r3, r3, #3	@ 00112236 db00
.org 0x112238
	adds r0, r4, r3	@ 00112238 e018
.org 0x11223a
	strb r1, [r0, #0]	@ 0011223a 0170
.org 0x11223c
	movs r1, #129	@ 0011223c 8121
.org 0x11223e
	lsls r1, r1, #3	@ 0011223e c900
.org 0x112240
	adds r0, r4, r1	@ 00112240 6018
.org 0x112242
	str r5, [r0, #0]	@ 00112242 0560
.org 0x112244
	bl 0x2348	@ 00112244 f0f680f8
.org 0x112248
	ldr r0, [pc, #128]	@ 00112248 2048
.org 0x11224a
	strh r5, [r0, #0]	@ 0011224a 0580
.org 0x11224c
	ldr r1, [pc, #128]	@ 0011224c 2049
.org 0x11224e
	strh r5, [r1, #0]	@ 0011224e 0d80
.org 0x112250
	movs r0, #255	@ 00112250 ff20
.org 0x112252
	strb r0, [r1, #14]	@ 00112252 8873
.org 0x112254
	ldr r0, [pc, #124]	@ 00112254 1f48
.org 0x112256
	strh r5, [r0, #0]	@ 00112256 0580
.org 0x112258
	strh r5, [r4, #0]	@ 00112258 2580
.org 0x11225a
	bl 0x10d4a8	@ 0011225a fbf725f9
.org 0x11225e
	ldr r2, [pc, #120]	@ 0011225e 1e4a
.org 0x112260
	ldrh r1, [r2, #0]	@ 00112260 1188
.org 0x112262
	ldr r0, [pc, #120]	@ 00112262 1e48
.org 0x112264
	ands r0, r1	@ 00112264 0840
.org 0x112266
	ldr r1, [pc, #120]	@ 00112266 1e49
.org 0x112268
	ands r0, r1	@ 00112268 0840
.org 0x11226a
	movs r3, #128	@ 0011226a 8023
.org 0x11226c
	lsls r3, r3, #1	@ 0011226c 5b00
.org 0x11226e
	adds r1, r3, #0	@ 0011226e 191c
.org 0x112270
	orrs r0, r1	@ 00112270 0843
.org 0x112272
	strh r0, [r2, #0]	@ 00112272 1080
.org 0x112274
	movs r0, #1	@ 00112274 0120
.org 0x112276
	bl 0x12ec	@ 00112276 eff639f8
.org 0x11227a
	movs r0, #149	@ 0011227a 9520
.org 0x11227c
	bl 0x2b5c	@ 0011227c f0f66efc
.org 0x112280
	ldr r0, [pc, #96]	@ 00112280 1848
.org 0x112282
	ldr r2, [pc, #100]	@ 00112282 194a
.org 0x112284
	adds r1, r6, r2	@ 00112284 b118
.org 0x112286
	ldrb r1, [r1, #0]	@ 00112286 0978
.org 0x112288
	lsls r1, r1, #8	@ 00112288 0902
.org 0x11228a
	adds r1, #7	@ 0011228a 0731
.org 0x11228c
	bl 0x1126ac	@ 0011228c 00f00efa
.org 0x112290
	ldr r1, [pc, #88]	@ 00112290 1649
.org 0x112292
	movs r0, #1	@ 00112292 0120
.org 0x112294
	bl 0x12b8	@ 00112294 eff610f8
.org 0x112298
	ldrb r0, [r6, #6]	@ 00112298 b079
.org 0x11229a
	adds r0, #1	@ 0011229a 0130
.org 0x11229c
	strb r0, [r6, #6]	@ 0011229c b071
.org 0x11229e
	ldr r0, [pc, #80]	@ 0011229e 1448
.org 0x1122a0
	movs r3, #153	@ 001122a0 9923
.org 0x1122a2
	lsls r3, r3, #5	@ 001122a2 5b01
.org 0x1122a4
	adds r0, r0, r3	@ 001122a4 c018
.org 0x1122a6
	ldrb r4, [r0, #0]	@ 001122a6 0478
.org 0x1122a8
	cmp r4, #1	@ 001122a8 012c
.org 0x1122aa
	bne.n 0x112300	@ 001122aa 29d1
.org 0x1122ac
	movs r0, #0	@ 001122ac 0020
.org 0x1122ae
	strb r0, [r6, #6]	@ 001122ae b071
.org 0x1122b0
	ldr r0, [pc, #64]	@ 001122b0 1048
.org 0x1122b2
	adds r0, #56	@ 001122b2 3830
.org 0x1122b4
	ldrb r0, [r0, #0]	@ 001122b4 0078
.org 0x1122b6
	cmp r0, #0	@ 001122b6 0028
.org 0x1122b8
	beq.n 0x1122f8	@ 001122b8 1ed0
.org 0x1122ba
	movs r0, #4	@ 001122ba 0420
.org 0x1122bc
	strb r0, [r6, #5]	@ 001122bc 7071
.org 0x1122be
	b.n 0x112300	@ 001122be 1fe0
.org 0x1122c0
	.byte 0xc0,0x2a,0x00,0x03	@ 001122c0 data
.org 0x1122c4
	.byte 0x02,0x04,0x00,0x00	@ 001122c4 data
.org 0x1122c8
	.byte 0x01,0x04,0x00,0x00	@ 001122c8 data
.org 0x1122cc
	.byte 0x40,0x0a,0x00,0x02	@ 001122cc data
