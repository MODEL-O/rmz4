@ FUN_08034204  entry 0x08034204  size 182
.thumb
.org 0x34204
FUN_08034204:
	push {r4, r5, lr}	@ 00034204 30b5
.org 0x34206
	adds r5, r0, #0	@ 00034206 051c
.org 0x34208
	movs r0, #129	@ 00034208 8120
.org 0x3420a
	lsls r0, r0, #1	@ 0003420a 4000
.org 0x3420c
	adds r4, r5, r0	@ 0003420c 2c18
.org 0x3420e
	ldrb r0, [r4, #0]	@ 0003420e 2078
.org 0x34210
	cmp r0, #0	@ 00034210 0028
.org 0x34212
	bne.n 0x3422a	@ 00034212 0ad1
.org 0x34214
	ldr r1, [pc, #108]	@ 00034214 1b49
.org 0x34216
	adds r0, r5, #0	@ 00034216 281c
.org 0x34218
	bl 0x1cf00	@ 00034218 e8f772fe
.org 0x3421c
	ldr r0, [pc, #104]	@ 0003421c 1a48
.org 0x3421e
	adds r1, r5, r0	@ 0003421e 2918
.org 0x34220
	movs r0, #16	@ 00034220 1020
.org 0x34222
	strb r0, [r1, #0]	@ 00034222 0870
.org 0x34224
	ldrb r0, [r4, #0]	@ 00034224 2078
.org 0x34226
	adds r0, #1	@ 00034226 0130
.org 0x34228
	strb r0, [r4, #0]	@ 00034228 2070
.org 0x3422a
	ldr r4, [pc, #88]	@ 0003422a 164c
.org 0x3422c
	adds r0, r5, #0	@ 0003422c 281c
.org 0x3422e
	adds r1, r4, #0	@ 0003422e 211c
.org 0x34230
	bl 0x3a3b0	@ 00034230 06f0bef8
.org 0x34234
	adds r0, r5, #0	@ 00034234 281c
.org 0x34236
	adds r1, r4, #0	@ 00034236 211c
.org 0x34238
	bl 0x3a3f0	@ 00034238 06f0daf8
.org 0x3423c
	adds r0, r5, #0	@ 0003423c 281c
.org 0x3423e
	adds r0, #113	@ 0003423e 7130
.org 0x34240
	ldrb r0, [r0, #0]	@ 00034240 0078
.org 0x34242
	lsls r0, r0, #24	@ 00034242 0006
.org 0x34244
	asrs r0, r0, #24	@ 00034244 0016
.org 0x34246
	cmp r0, #0	@ 00034246 0028
.org 0x34248
	ble.n 0x34290	@ 00034248 22dd
.org 0x3424a
	ldr r1, [pc, #64]	@ 0003424a 1049
.org 0x3424c
	adds r2, r5, r1	@ 0003424c 6a18
.org 0x3424e
	ldrb r0, [r2, #0]	@ 0003424e 1078
.org 0x34250
	movs r1, #8	@ 00034250 0821
.org 0x34252
	orrs r0, r1	@ 00034252 0843
.org 0x34254
	strb r0, [r2, #0]	@ 00034254 1070
.org 0x34256
	movs r0, #162	@ 00034256 a220
.org 0x34258
	lsls r0, r0, #1	@ 00034258 4000
.org 0x3425a
	adds r1, r5, r0	@ 0003425a 2918
.org 0x3425c
	adds r0, r5, #0	@ 0003425c 281c
.org 0x3425e
	bl 0x39fd8	@ 0003425e 05f0bbfe
.org 0x34262
	lsls r0, r0, #24	@ 00034262 0006
.org 0x34264
	cmp r0, #0	@ 00034264 0028
.org 0x34266
	beq.n 0x342a0	@ 00034266 1bd0
.org 0x34268
	movs r1, #128	@ 00034268 8021
.org 0x3426a
	lsls r1, r1, #1	@ 0003426a 4900
.org 0x3426c
	adds r0, r5, r1	@ 0003426c 6818
.org 0x3426e
	movs r2, #0	@ 0003426e 0022
.org 0x34270
	movs r1, #3	@ 00034270 0321
.org 0x34272
	strb r1, [r0, #0]	@ 00034272 0170
.org 0x34274
	adds r1, #254	@ 00034274 fe31
.org 0x34276
	adds r0, r5, r1	@ 00034276 6818
.org 0x34278
	strb r2, [r0, #0]	@ 00034278 0270
.org 0x3427a
	adds r0, r5, #0	@ 0003427a 281c
.org 0x3427c
	bl 0x334dc	@ 0003427c fff72ef9
.org 0x34280
	b.n 0x342c2	@ 00034280 1fe0
.org 0x34282
	.byte 0x00	@ 00034282 data
.org 0x34283
	.byte 0x00	@ 00034283 data
.org 0x34284
	.byte 0x09,0x27,0x00,0x00	@ 00034284 data
.org 0x34288
	.byte 0x51,0x01,0x00,0x00	@ 00034288 data
.org 0x3428c
	.byte 0x53,0x01,0x00,0x00	@ 0003428c data
.org 0x34290
	ldr r0, [pc, #52]	@ 00034290 0d48
.org 0x34292
	adds r2, r5, r0	@ 00034292 2a18
.org 0x34294
	ldrb r0, [r2, #0]	@ 00034294 1078
.org 0x34296
	movs r1, #4	@ 00034296 0421
.org 0x34298
	orrs r0, r1	@ 00034298 0843
.org 0x3429a
	movs r1, #2	@ 0003429a 0221
.org 0x3429c
	orrs r0, r1	@ 0003429c 0843
.org 0x3429e
	strb r0, [r2, #0]	@ 0003429e 1070
.org 0x342a0
	ldr r0, [pc, #40]	@ 000342a0 0a48
.org 0x342a2
	adds r1, r5, r0	@ 000342a2 2918
.org 0x342a4
	ldrb r0, [r1, #0]	@ 000342a4 0878
.org 0x342a6
	subs r0, #1	@ 000342a6 0138
.org 0x342a8
	strb r0, [r1, #0]	@ 000342a8 0870
.org 0x342aa
	lsls r0, r0, #24	@ 000342aa 0006
.org 0x342ac
	lsrs r0, r0, #24	@ 000342ac 000e
.org 0x342ae
	cmp r0, #255	@ 000342ae ff28
.org 0x342b0
	bne.n 0x342c2	@ 000342b0 07d1
.org 0x342b2
	ldr r0, [pc, #28]	@ 000342b2 0748
.org 0x342b4
	adds r1, r5, r0	@ 000342b4 2918
.org 0x342b6
	movs r0, #5	@ 000342b6 0520
.org 0x342b8
	strb r0, [r1, #0]	@ 000342b8 0870
