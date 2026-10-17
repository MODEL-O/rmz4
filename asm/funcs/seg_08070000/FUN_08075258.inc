@ FUN_08075258  entry 0x08075258  size 76
.thumb
.org 0x75258
FUN_08075258:
	push {r4, r5, lr}	@ 00075258 30b5
.org 0x7525a
	adds r4, r0, #0	@ 0007525a 041c
.org 0x7525c
	ldrb r5, [r4, #14]	@ 0007525c a57b
.org 0x7525e
	cmp r5, #0	@ 0007525e 002d
.org 0x75260
	bne.n 0x75284	@ 00075260 10d1
.org 0x75262
	ldrb r0, [r4, #30]	@ 00075262 a07f
.org 0x75264
	lsls r0, r0, #8	@ 00075264 0002
.org 0x75266
	adds r1, r4, #0	@ 00075266 211c
.org 0x75268
	adds r1, #112	@ 00075268 7031
.org 0x7526a
	ldrb r1, [r1, #0]	@ 0007526a 0978
.org 0x7526c
	orrs r0, r1	@ 0007526c 0843
.org 0x7526e
	ldr r1, [pc, #52]	@ 0007526e 0d49
.org 0x75270
	cmp r0, r1	@ 00075270 8842
.org 0x75272
	beq.n 0x7527c	@ 00075272 03d0
.org 0x75274
	adds r1, #23	@ 00075274 1731
.org 0x75276
	adds r0, r4, #0	@ 00075276 201c
.org 0x75278
	bl 0x1cf00	@ 00075278 a7f742fe
.org 0x7527c
	ldrb r0, [r4, #14]	@ 0007527c a07b
.org 0x7527e
	adds r0, #1	@ 0007527e 0130
.org 0x75280
	strb r0, [r4, #14]	@ 00075280 a073
.org 0x75282
	strb r5, [r4, #15]	@ 00075282 e573
.org 0x75284
	adds r0, r4, #0	@ 00075284 201c
.org 0x75286
	bl 0x1cff0	@ 00075286 a7f7b3fe
.org 0x7528a
	ldr r0, [r4, #24]	@ 0007528a a069
.org 0x7528c
	ldrb r1, [r0, #9]	@ 0007528c 417a
.org 0x7528e
	movs r2, #1	@ 0007528e 0122
.org 0x75290
	adds r0, r2, #0	@ 00075290 101c
.org 0x75292
	ands r0, r1	@ 00075292 0840
.org 0x75294
	cmp r0, #0	@ 00075294 0028
.org 0x75296
	beq.n 0x7529e	@ 00075296 02d0
.org 0x75298
	movs r0, #0	@ 00075298 0020
.org 0x7529a
	strb r2, [r4, #13]	@ 0007529a 6273
.org 0x7529c
	strb r0, [r4, #14]	@ 0007529c a073
.org 0x7529e
	pop {r4, r5}	@ 0007529e 30bc
.org 0x752a0
	pop {r0}	@ 000752a0 01bc
.org 0x752a2
	bx r0	@ 000752a2 0047
