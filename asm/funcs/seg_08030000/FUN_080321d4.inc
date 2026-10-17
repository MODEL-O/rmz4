@ FUN_080321d4  entry 0x080321d4  size 158
.thumb
.org 0x321d4
FUN_080321d4:
	push {r4, lr}	@ 000321d4 10b5
.org 0x321d6
	adds r4, r0, #0	@ 000321d6 041c
.org 0x321d8
	ldrb r0, [r4, #15]	@ 000321d8 e07b
.org 0x321da
	cmp r0, #0	@ 000321da 0028
.org 0x321dc
	bne.n 0x32232	@ 000321dc 29d1
.org 0x321de
	ldr r1, [pc, #64]	@ 000321de 1049
.org 0x321e0
	adds r0, r4, #0	@ 000321e0 201c
.org 0x321e2
	bl 0x1cf00	@ 000321e2 eaf78dfe
.org 0x321e6
	ldrb r0, [r4, #10]	@ 000321e6 a07a
.org 0x321e8
	lsrs r0, r0, #4	@ 000321e8 0009
.org 0x321ea
	movs r2, #1	@ 000321ea 0122
.org 0x321ec
	eors r0, r2	@ 000321ec 5040
.org 0x321ee
	ands r0, r2	@ 000321ee 1040
.org 0x321f0
	adds r1, r4, #0	@ 000321f0 211c
.org 0x321f2
	adds r1, #76	@ 000321f2 4c31
.org 0x321f4
	strb r0, [r1, #0]	@ 000321f4 0870
.org 0x321f6
	ldrb r1, [r4, #10]	@ 000321f6 a17a
.org 0x321f8
	lsrs r1, r1, #4	@ 000321f8 0909
.org 0x321fa
	eors r1, r2	@ 000321fa 5140
.org 0x321fc
	ands r1, r2	@ 000321fc 1140
.org 0x321fe
	movs r0, #74	@ 000321fe 4a20
.org 0x32200
	adds r0, r0, r4	@ 00032200 0019
.org 0x32202
	mov ip, r0	@ 00032202 8446
.org 0x32204
	lsls r3, r1, #4	@ 00032204 0b01
.org 0x32206
	ldrb r2, [r0, #0]	@ 00032206 0278
.org 0x32208
	movs r0, #17	@ 00032208 1120
.org 0x3220a
	negs r0, r0	@ 0003220a 4042
.org 0x3220c
	ands r0, r2	@ 0003220c 1040
.org 0x3220e
	orrs r0, r3	@ 0003220e 1843
.org 0x32210
	mov r2, ip	@ 00032210 6246
.org 0x32212
	strb r0, [r2, #0]	@ 00032212 1070
.org 0x32214
	cmp r1, #0	@ 00032214 0029
.org 0x32216
	beq.n 0x32224	@ 00032216 05d0
.org 0x32218
	ldrb r0, [r4, #10]	@ 00032218 a07a
.org 0x3221a
	movs r1, #16	@ 0003221a 1021
.org 0x3221c
	orrs r0, r1	@ 0003221c 0843
.org 0x3221e
	b.n 0x3222a	@ 0003221e 04e0
.org 0x32220
	.byte 0x0f,0x28,0x00,0x00	@ 00032220 data
.org 0x32224
	ldrb r1, [r4, #10]	@ 00032224 a17a
.org 0x32226
	movs r0, #239	@ 00032226 ef20
.org 0x32228
	ands r0, r1	@ 00032228 0840
.org 0x3222a
	strb r0, [r4, #10]	@ 0003222a a072
.org 0x3222c
	ldrb r0, [r4, #15]	@ 0003222c e07b
.org 0x3222e
	adds r0, #1	@ 0003222e 0130
.org 0x32230
	strb r0, [r4, #15]	@ 00032230 e073
.org 0x32232
	ldrb r1, [r4, #10]	@ 00032232 a17a
.org 0x32234
	movs r0, #16	@ 00032234 1020
.org 0x32236
	ands r0, r1	@ 00032236 0840
.org 0x32238
	cmp r0, #0	@ 00032238 0028
.org 0x3223a
	beq.n 0x32244	@ 0003223a 03d0
.org 0x3223c
	movs r1, #226	@ 0003223c e221
.org 0x3223e
	lsls r1, r1, #1	@ 0003223e 4900
.org 0x32240
	adds r0, r4, r1	@ 00032240 6018
.org 0x32242
	b.n 0x3224a	@ 00032242 02e0
.org 0x32244
	movs r2, #226	@ 00032244 e222
.org 0x32246
	lsls r2, r2, #1	@ 00032246 5200
.org 0x32248
	adds r0, r4, r2	@ 00032248 a018
.org 0x3224a
	ldr r0, [r0, #0]	@ 0003224a 0068
.org 0x3224c
	str r0, [r4, #84]	@ 0003224c 6065
.org 0x3224e
	movs r1, #228	@ 0003224e e421
.org 0x32250
	lsls r1, r1, #1	@ 00032250 4900
.org 0x32252
	adds r0, r4, r1	@ 00032252 6018
.org 0x32254
	ldr r0, [r0, #0]	@ 00032254 0068
.org 0x32256
	movs r2, #180	@ 00032256 b422
.org 0x32258
	lsls r2, r2, #6	@ 00032258 9201
.org 0x3225a
	adds r0, r0, r2	@ 0003225a 8018
.org 0x3225c
	str r0, [r4, #88]	@ 0003225c a065
.org 0x3225e
	adds r0, r4, #0	@ 0003225e 201c
.org 0x32260
	adds r0, #115	@ 00032260 7330
.org 0x32262
	ldrb r0, [r0, #0]	@ 00032262 0078
.org 0x32264
	cmp r0, #3	@ 00032264 0328
.org 0x32266
	bne.n 0x32270	@ 00032266 03d1
.org 0x32268
	movs r1, #0	@ 00032268 0021
.org 0x3226a
	movs r0, #2	@ 0003226a 0220
.org 0x3226c
	strb r0, [r4, #14]	@ 0003226c a073
.org 0x3226e
	strb r1, [r4, #15]	@ 0003226e e173
.org 0x32270
	pop {r4}	@ 00032270 10bc
