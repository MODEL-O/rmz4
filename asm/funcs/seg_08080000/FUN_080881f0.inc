@ FUN_080881f0  entry 0x080881f0  size 144
.thumb
.org 0x881f0
FUN_080881f0:
	push {r4, lr}	@ 000881f0 10b5
.org 0x881f2
	sub sp, #16	@ 000881f2 84b0
.org 0x881f4
	adds r4, r0, #0	@ 000881f4 041c
.org 0x881f6
	ldrb r0, [r4, #15]	@ 000881f6 e07b
.org 0x881f8
	cmp r0, #0	@ 000881f8 0028
.org 0x881fa
	bne.n 0x88250	@ 000881fa 29d1
.org 0x881fc
	ldr r0, [pc, #20]	@ 000881fc 0548
.org 0x881fe
	bl 0x2b10	@ 000881fe 7af787fc
.org 0x88202
	ldr r2, [r4, #84]	@ 00088202 626d
.org 0x88204
	ldrb r1, [r4, #10]	@ 00088204 a17a
.org 0x88206
	movs r0, #16	@ 00088206 1020
.org 0x88208
	ands r0, r1	@ 00088208 0840
.org 0x8820a
	cmp r0, #0	@ 0008820a 0028
.org 0x8820c
	beq.n 0x88218	@ 0008820c 04d0
.org 0x8820e
	movs r1, #128	@ 0008820e 8021
.org 0x88210
	lsls r1, r1, #3	@ 00088210 c900
.org 0x88212
	b.n 0x8821a	@ 00088212 02e0
.org 0x88214
	.byte 0x37,0x01,0x00,0x00	@ 00088214 data
.org 0x88218
	ldr r1, [pc, #92]	@ 00088218 1749
.org 0x8821a
	adds r0, r2, r1	@ 0008821a 5018
.org 0x8821c
	str r0, [sp, #0]	@ 0008821c 0090
.org 0x8821e
	ldr r0, [r4, #88]	@ 0008821e a06d
.org 0x88220
	str r0, [sp, #4]	@ 00088220 0190
.org 0x88222
	movs r0, #128	@ 00088222 8020
.org 0x88224
	lsls r0, r0, #2	@ 00088224 8000
.org 0x88226
	str r0, [sp, #8]	@ 00088226 0290
.org 0x88228
	add r1, sp, #8	@ 00088228 02a9
.org 0x8822a
	movs r0, #0	@ 0008822a 0020
.org 0x8822c
	str r0, [r1, #4]	@ 0008822c 4860
.org 0x8822e
	mov r0, sp	@ 0008822e 6846
.org 0x88230
	movs r2, #0	@ 00088230 0022
.org 0x88232
	movs r3, #2	@ 00088232 0223
.org 0x88234
	bl 0x88ff0	@ 00088234 00f0dcfe
.org 0x88238
	adds r0, r4, #0	@ 00088238 201c
.org 0x8823a
	adds r0, #116	@ 0008823a 7430
.org 0x8823c
	ldr r1, [pc, #60]	@ 0008823c 0f49
.org 0x8823e
	bl 0x5784	@ 0008823e 7df7a1fa
.org 0x88242
	ldr r1, [pc, #60]	@ 00088242 0f49
.org 0x88244
	adds r0, r4, #0	@ 00088244 201c
.org 0x88246
	bl 0x1cf00	@ 00088246 94f75bfe
.org 0x8824a
	ldrb r0, [r4, #15]	@ 0008824a e07b
.org 0x8824c
	adds r0, #1	@ 0008824c 0130
.org 0x8824e
	strb r0, [r4, #15]	@ 0008824e e073
.org 0x88250
	adds r0, r4, #0	@ 00088250 201c
.org 0x88252
	bl 0x1cff0	@ 00088252 94f7cdfe
.org 0x88256
	adds r0, r4, #0	@ 00088256 201c
.org 0x88258
	adds r0, #115	@ 00088258 7330
.org 0x8825a
	ldrb r0, [r0, #0]	@ 0008825a 0078
.org 0x8825c
	cmp r0, #3	@ 0008825c 0328
.org 0x8825e
	bne.n 0x8828a	@ 0008825e 14d1
.org 0x88260
	adds r1, r4, #0	@ 00088260 211c
.org 0x88262
	adds r1, #180	@ 00088262 b431
.org 0x88264
	ldrb r0, [r1, #0]	@ 00088264 0878
.org 0x88266
	subs r0, #1	@ 00088266 0138
.org 0x88268
	movs r2, #0	@ 00088268 0022
.org 0x8826a
	strb r0, [r1, #0]	@ 0008826a 0870
.org 0x8826c
	lsls r0, r0, #24	@ 0008826c 0006
.org 0x8826e
	cmp r0, #0	@ 0008826e 0028
.org 0x88270
	bne.n 0x88284	@ 00088270 08d1
.org 0x88272
	movs r0, #4	@ 00088272 0420
.org 0x88274
	b.n 0x88286	@ 00088274 07e0
.org 0x88276
	.byte 0x00	@ 00088276 data
.org 0x88277
	.byte 0x00	@ 00088277 data
.org 0x88278
	.byte 0x00,0xfc,0xff,0xff	@ 00088278 data
.org 0x8827c
	.byte 0x34,0xf0,0x85,0x08	@ 0008827c data
