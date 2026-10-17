@ FUN_08097220  entry 0x08097220  size 142
.thumb
.org 0x97220
FUN_08097220:
	push {r4, r5, lr}	@ 00097220 30b5
.org 0x97222
	sub sp, #8	@ 00097222 82b0
.org 0x97224
	adds r4, r0, #0	@ 00097224 041c
.org 0x97226
	ldrb r0, [r4, #16]	@ 00097226 207c
.org 0x97228
	cmp r0, #1	@ 00097228 0128
.org 0x9722a
	bne.n 0x97234	@ 0009722a 03d1
.org 0x9722c
	adds r0, r4, #0	@ 0009722c 201c
.org 0x9722e
	bl 0x972b8	@ 0009722e 00f043f8
.org 0x97232
	b.n 0x972aa	@ 00097232 3ae0
.org 0x97234
	ldrb r0, [r4, #14]	@ 00097234 a07b
.org 0x97236
	cmp r0, #0	@ 00097236 0028
.org 0x97238
	bne.n 0x9729a	@ 00097238 2fd1
.org 0x9723a
	adds r0, r4, #0	@ 0009723a 201c
.org 0x9723c
	adds r0, #190	@ 0009723c be30
.org 0x9723e
	ldrb r0, [r0, #0]	@ 0009723e 0078
.org 0x97240
	adds r5, r4, #0	@ 00097240 251c
.org 0x97242
	adds r5, #140	@ 00097242 8c35
.org 0x97244
	cmp r0, #0	@ 00097244 0028
.org 0x97246
	bne.n 0x9727e	@ 00097246 1ad1
.org 0x97248
	ldr r1, [r5, #0]	@ 00097248 2968
.org 0x9724a
	movs r0, #128	@ 0009724a 8020
.org 0x9724c
	lsls r0, r0, #9	@ 0009724c 4002
.org 0x9724e
	ands r1, r0	@ 0009724e 0140
.org 0x97250
	cmp r1, #0	@ 00097250 0029
.org 0x97252
	beq.n 0x9727c	@ 00097252 13d0
.org 0x97254
	ldr r0, [r4, #84]	@ 00097254 606d
.org 0x97256
	str r0, [sp, #0]	@ 00097256 0090
.org 0x97258
	ldr r0, [r4, #88]	@ 00097258 a06d
.org 0x9725a
	ldr r1, [pc, #28]	@ 0009725a 0749
.org 0x9725c
	adds r0, r0, r1	@ 0009725c 4018
.org 0x9725e
	str r0, [sp, #4]	@ 0009725e 0190
.org 0x97260
	movs r2, #128	@ 00097260 8022
.org 0x97262
	lsls r2, r2, #2	@ 00097262 9200
.org 0x97264
	adds r0, r4, #0	@ 00097264 201c
.org 0x97266
	adds r0, #188	@ 00097266 bc30
.org 0x97268
	ldrb r3, [r0, #0]	@ 00097268 0378
.org 0x9726a
	movs r0, #0	@ 0009726a 0020
.org 0x9726c
	mov r1, sp	@ 0009726c 6946
.org 0x9726e
	bl 0xd0dc4	@ 0009726e 39f0a9fd
.org 0x97272
	movs r0, #1	@ 00097272 0120
.org 0x97274
	strb r0, [r4, #13]	@ 00097274 6073
.org 0x97276
	b.n 0x9727e	@ 00097276 02e0
.org 0x97278
	.byte 0x00,0xf2,0xff,0xff	@ 00097278 data
.org 0x9727c
	strb r1, [r4, #13]	@ 0009727c 6173
.org 0x9727e
	movs r1, #0	@ 0009727e 0021
.org 0x97280
	str r1, [r5, #0]	@ 00097280 2960
.org 0x97282
	adds r0, r4, #0	@ 00097282 201c
.org 0x97284
	adds r0, #144	@ 00097284 9030
.org 0x97286
	str r1, [r0, #0]	@ 00097286 0160
.org 0x97288
	adds r0, #4	@ 00097288 0430
.org 0x9728a
	strb r1, [r0, #0]	@ 0009728a 0170
.org 0x9728c
	ldrb r1, [r4, #10]	@ 0009728c a17a
.org 0x9728e
	movs r0, #251	@ 0009728e fb20
.org 0x97290
	ands r0, r1	@ 00097290 0840
.org 0x97292
	strb r0, [r4, #10]	@ 00097292 a072
.org 0x97294
	ldrb r0, [r4, #14]	@ 00097294 a07b
.org 0x97296
	adds r0, #1	@ 00097296 0130
.org 0x97298
	strb r0, [r4, #14]	@ 00097298 a073
.org 0x9729a
	ldr r0, [pc, #24]	@ 0009729a 0648
.org 0x9729c
	ldrb r1, [r4, #13]	@ 0009729c 617b
.org 0x9729e
	lsls r1, r1, #2	@ 0009729e 8900
.org 0x972a0
	adds r1, r1, r0	@ 000972a0 0918
.org 0x972a2
	ldr r1, [r1, #0]	@ 000972a2 0968
.org 0x972a4
	adds r0, r4, #0	@ 000972a4 201c
.org 0x972a6
	bl 0x128f80	@ 000972a6 91f06bfe
.org 0x972aa
	add sp, #8	@ 000972aa 02b0
.org 0x972ac
	pop {r4, r5}	@ 000972ac 30bc
