@ FUN_080c41f0  entry 0x080c41f0  size 190
.thumb
.org 0xc41f0
FUN_080c41f0:
	push {r4, r5, r6, lr}	@ 000c41f0 70b5
.org 0xc41f2
	adds r4, r0, #0	@ 000c41f2 041c
.org 0xc41f4
	ldr r6, [r4, #40]	@ 000c41f4 a66a
.org 0xc41f6
	ldrb r0, [r6, #10]	@ 000c41f6 b07a
.org 0xc41f8
	lsrs r5, r0, #4	@ 000c41f8 0509
.org 0xc41fa
	movs r0, #1	@ 000c41fa 0120
.org 0xc41fc
	ands r5, r0	@ 000c41fc 0540
.org 0xc41fe
	ldrb r0, [r4, #15]	@ 000c41fe e07b
.org 0xc4200
	cmp r0, #0	@ 000c4200 0028
.org 0xc4202
	bne.n 0xc4212	@ 000c4202 06d1
.org 0xc4204
	ldr r1, [pc, #32]	@ 000c4204 0849
.org 0xc4206
	adds r0, r4, #0	@ 000c4206 201c
.org 0xc4208
	bl 0x1cf00	@ 000c4208 58f77afe
.org 0xc420c
	ldrb r0, [r4, #15]	@ 000c420c e07b
.org 0xc420e
	adds r0, #1	@ 000c420e 0130
.org 0xc4210
	strb r0, [r4, #15]	@ 000c4210 e073
.org 0xc4212
	adds r0, r4, #0	@ 000c4212 201c
.org 0xc4214
	bl 0x1cff0	@ 000c4214 58f7ecfe
.org 0xc4218
	adds r2, r5, #0	@ 000c4218 2a1c
.org 0xc421a
	cmp r2, #0	@ 000c421a 002a
.org 0xc421c
	beq.n 0xc422c	@ 000c421c 06d0
.org 0xc421e
	ldrb r1, [r4, #10]	@ 000c421e a17a
.org 0xc4220
	movs r0, #16	@ 000c4220 1020
.org 0xc4222
	orrs r0, r1	@ 000c4222 0843
.org 0xc4224
	b.n 0xc4232	@ 000c4224 05e0
.org 0xc4226
	.byte 0x00	@ 000c4226 data
.org 0xc4227
	.byte 0x00	@ 000c4227 data
.org 0xc4228
	.byte 0x01,0x52,0x00,0x00	@ 000c4228 data
.org 0xc422c
	ldrb r1, [r4, #10]	@ 000c422c a17a
.org 0xc422e
	movs r0, #239	@ 000c422e ef20
.org 0xc4230
	ands r0, r1	@ 000c4230 0840
.org 0xc4232
	strb r0, [r4, #10]	@ 000c4232 a072
.org 0xc4234
	adds r1, r2, #0	@ 000c4234 111c
.org 0xc4236
	adds r0, r4, #0	@ 000c4236 201c
.org 0xc4238
	adds r0, #76	@ 000c4238 4c30
.org 0xc423a
	strb r1, [r0, #0]	@ 000c423a 0170
.org 0xc423c
	adds r3, r4, #0	@ 000c423c 231c
.org 0xc423e
	adds r3, #74	@ 000c423e 4a33
.org 0xc4240
	lsls r1, r1, #4	@ 000c4240 0901
.org 0xc4242
	ldrb r2, [r3, #0]	@ 000c4242 1a78
.org 0xc4244
	movs r0, #17	@ 000c4244 1120
.org 0xc4246
	negs r0, r0	@ 000c4246 4042
.org 0xc4248
	ands r0, r2	@ 000c4248 1040
.org 0xc424a
	orrs r0, r1	@ 000c424a 0843
.org 0xc424c
	strb r0, [r3, #0]	@ 000c424c 1870
.org 0xc424e
	ldr r2, [r6, #84]	@ 000c424e 726d
.org 0xc4250
	ldrb r1, [r6, #10]	@ 000c4250 b17a
.org 0xc4252
	movs r0, #16	@ 000c4252 1020
.org 0xc4254
	ands r0, r1	@ 000c4254 0840
.org 0xc4256
	cmp r0, #0	@ 000c4256 0028
.org 0xc4258
	beq.n 0xc4260	@ 000c4258 02d0
.org 0xc425a
	movs r1, #176	@ 000c425a b021
.org 0xc425c
	lsls r1, r1, #6	@ 000c425c 8901
.org 0xc425e
	b.n 0xc4262	@ 000c425e 00e0
.org 0xc4260
	ldr r1, [pc, #80]	@ 000c4260 1449
.org 0xc4262
	adds r0, r2, r1	@ 000c4262 5018
.org 0xc4264
	str r0, [r4, #84]	@ 000c4264 6065
.org 0xc4266
	ldr r0, [r6, #88]	@ 000c4266 b06d
.org 0xc4268
	movs r1, #176	@ 000c4268 b021
.org 0xc426a
	lsls r1, r1, #6	@ 000c426a 8901
.org 0xc426c
	adds r0, r0, r1	@ 000c426c 4018
.org 0xc426e
	str r0, [r4, #88]	@ 000c426e a065
.org 0xc4270
	adds r0, r4, #0	@ 000c4270 201c
.org 0xc4272
	adds r0, #115	@ 000c4272 7330
.org 0xc4274
	ldrb r3, [r0, #0]	@ 000c4274 0378
.org 0xc4276
	cmp r3, #3	@ 000c4276 032b
.org 0xc4278
	bne.n 0xc42ae	@ 000c4278 19d1
.org 0xc427a
	ldrb r1, [r4, #10]	@ 000c427a a17a
.org 0xc427c
	movs r0, #254	@ 000c427c fe20
.org 0xc427e
	ands r0, r1	@ 000c427e 0840
.org 0xc4280
	movs r2, #0	@ 000c4280 0022
.org 0xc4282
	movs r1, #253	@ 000c4282 fd21
.org 0xc4284
	ands r0, r1	@ 000c4284 0840
.org 0xc4286
	strb r0, [r4, #10]	@ 000c4286 a072
.org 0xc4288
	adds r0, r4, #0	@ 000c4288 201c
.org 0xc428a
	adds r0, #140	@ 000c428a 8c30
.org 0xc428c
	str r2, [r0, #0]	@ 000c428c 0260
.org 0xc428e
	adds r0, #4	@ 000c428e 0430
.org 0xc4290
	str r2, [r0, #0]	@ 000c4290 0260
.org 0xc4292
	adds r0, #4	@ 000c4292 0430
.org 0xc4294
	strb r2, [r0, #0]	@ 000c4294 0270
.org 0xc4296
	ldrb r1, [r4, #10]	@ 000c4296 a17a
.org 0xc4298
	movs r0, #251	@ 000c4298 fb20
.org 0xc429a
	ands r0, r1	@ 000c429a 0840
.org 0xc429c
	strb r0, [r4, #10]	@ 000c429c a072
.org 0xc429e
	ldr r1, [pc, #24]	@ 000c429e 0649
.org 0xc42a0
	ldrb r0, [r4, #9]	@ 000c42a0 607a
.org 0xc42a2
	lsls r0, r0, #2	@ 000c42a2 8000
.org 0xc42a4
	adds r0, r0, r1	@ 000c42a4 4018
.org 0xc42a6
	str r3, [r4, #12]	@ 000c42a6 e360
.org 0xc42a8
	ldr r0, [r0, #0]	@ 000c42a8 0068
.org 0xc42aa
	ldr r0, [r0, #12]	@ 000c42aa c068
.org 0xc42ac
	str r0, [r4, #20]	@ 000c42ac 6061
