@ FUN_0809923c  entry 0x0809923c  size 92
.thumb
.org 0x9923c
FUN_0809923c:
	push {r4, lr}	@ 0009923c 10b5
.org 0x9923e
	adds r4, r0, #0	@ 0009923e 041c
.org 0x99240
	ldrb r0, [r4, #14]	@ 00099240 a07b
.org 0x99242
	cmp r0, #0	@ 00099242 0028
.org 0x99244
	bne.n 0x99268	@ 00099244 10d1
.org 0x99246
	ldr r1, [pc, #68]	@ 00099246 1149
.org 0x99248
	adds r0, r4, #0	@ 00099248 201c
.org 0x9924a
	bl 0x1cf00	@ 0009924a 83f759fe
.org 0x9924e
	ldr r0, [pc, #64]	@ 0009924e 1048
.org 0x99250
	bl 0x2b10	@ 00099250 69f75efc
.org 0x99254
	movs r0, #24	@ 00099254 1820
.org 0x99256
	strb r0, [r4, #18]	@ 00099256 a074
.org 0x99258
	adds r1, r4, #0	@ 00099258 211c
.org 0x9925a
	adds r1, #180	@ 0009925a b431
.org 0x9925c
	ldr r0, [r1, #0]	@ 0009925c 0868
.org 0x9925e
	adds r0, #1	@ 0009925e 0130
.org 0x99260
	str r0, [r1, #0]	@ 00099260 0860
.org 0x99262
	ldrb r0, [r4, #14]	@ 00099262 a07b
.org 0x99264
	adds r0, #1	@ 00099264 0130
.org 0x99266
	strb r0, [r4, #14]	@ 00099266 a073
.org 0x99268
	adds r0, r4, #0	@ 00099268 201c
.org 0x9926a
	bl 0x1cff0	@ 0009926a 83f7c1fe
.org 0x9926e
	ldrb r0, [r4, #18]	@ 0009926e a07c
.org 0x99270
	subs r0, #1	@ 00099270 0138
.org 0x99272
	strb r0, [r4, #18]	@ 00099272 a074
.org 0x99274
	lsls r0, r0, #24	@ 00099274 0006
.org 0x99276
	lsrs r0, r0, #24	@ 00099276 000e
.org 0x99278
	cmp r0, #255	@ 00099278 ff28
.org 0x9927a
	bne.n 0x9929c	@ 0009927a 0fd1
.org 0x9927c
	adds r0, r4, #0	@ 0009927c 201c
.org 0x9927e
	adds r0, #180	@ 0009927e b430
.org 0x99280
	ldr r0, [r0, #0]	@ 00099280 0068
.org 0x99282
	cmp r0, #4	@ 00099282 0428
.org 0x99284
	ble.n 0x99294	@ 00099284 06dd
.org 0x99286
	movs r0, #3	@ 00099286 0320
.org 0x99288
	b.n 0x99296	@ 00099288 05e0
.org 0x9928a
	.byte 0x00	@ 0009928a data
.org 0x9928b
	.byte 0x00	@ 0009928b data
.org 0x9928c
	.byte 0x04,0x68,0x00,0x00	@ 0009928c data
.org 0x99290
	.byte 0x5b,0x01,0x00,0x00	@ 00099290 data
.org 0x99294
	movs r0, #0	@ 00099294 0020
.org 0x99296
	strb r0, [r4, #13]	@ 00099296 6073
