@ FUN_08060250  entry 0x08060250  size 162
.thumb
.org 0x60250
FUN_08060250:
	push {r4, lr}	@ 00060250 10b5
.org 0x60252
	adds r4, r0, #0	@ 00060252 041c
.org 0x60254
	ldrb r0, [r4, #14]	@ 00060254 a07b
.org 0x60256
	cmp r0, #0	@ 00060256 0028
.org 0x60258
	bne.n 0x602da	@ 00060258 3fd1
.org 0x6025a
	adds r1, r4, #0	@ 0006025a 211c
.org 0x6025c
	adds r1, #180	@ 0006025c b431
.org 0x6025e
	movs r0, #8	@ 0006025e 0820
.org 0x60260
	strb r0, [r1, #28]	@ 00060260 0877
.org 0x60262
	ldr r1, [pc, #76]	@ 00060262 1349
.org 0x60264
	adds r0, r4, #0	@ 00060264 201c
.org 0x60266
	bl 0x1cf00	@ 00060266 bcf74bfe
.org 0x6026a
	movs r3, #0	@ 0006026a 0023
.org 0x6026c
	ldr r0, [pc, #68]	@ 0006026c 1148
.org 0x6026e
	ldr r2, [r0, #0]	@ 0006026e 0268
.org 0x60270
	ldr r1, [r4, #84]	@ 00060270 616d
.org 0x60272
	ldr r0, [r2, #84]	@ 00060272 506d
.org 0x60274
	cmp r1, r0	@ 00060274 8142
.org 0x60276
	bge.n 0x6027a	@ 00060276 00da
.org 0x60278
	movs r3, #1	@ 00060278 0123
.org 0x6027a
	adds r0, r4, #0	@ 0006027a 201c
.org 0x6027c
	adds r0, #76	@ 0006027c 4c30
.org 0x6027e
	strb r3, [r0, #0]	@ 0006027e 0370
.org 0x60280
	movs r3, #0	@ 00060280 0023
.org 0x60282
	ldr r1, [r4, #84]	@ 00060282 616d
.org 0x60284
	ldr r0, [r2, #84]	@ 00060284 506d
.org 0x60286
	cmp r1, r0	@ 00060286 8142
.org 0x60288
	bge.n 0x6028c	@ 00060288 00da
.org 0x6028a
	movs r3, #1	@ 0006028a 0123
.org 0x6028c
	movs r0, #74	@ 0006028c 4a20
.org 0x6028e
	adds r0, r0, r4	@ 0006028e 0019
.org 0x60290
	mov ip, r0	@ 00060290 8446
.org 0x60292
	lsls r2, r3, #4	@ 00060292 1a01
.org 0x60294
	ldrb r1, [r0, #0]	@ 00060294 0178
.org 0x60296
	movs r0, #17	@ 00060296 1120
.org 0x60298
	negs r0, r0	@ 00060298 4042
.org 0x6029a
	ands r0, r1	@ 0006029a 0840
.org 0x6029c
	orrs r0, r2	@ 0006029c 1043
.org 0x6029e
	mov r1, ip	@ 0006029e 6146
.org 0x602a0
	strb r0, [r1, #0]	@ 000602a0 0870
.org 0x602a2
	cmp r3, #0	@ 000602a2 002b
.org 0x602a4
	beq.n 0x602b8	@ 000602a4 08d0
.org 0x602a6
	ldrb r0, [r4, #10]	@ 000602a6 a07a
.org 0x602a8
	movs r1, #16	@ 000602a8 1021
.org 0x602aa
	orrs r0, r1	@ 000602aa 0843
.org 0x602ac
	b.n 0x602be	@ 000602ac 07e0
.org 0x602ae
	.byte 0x00	@ 000602ae data
.org 0x602af
	.byte 0x00	@ 000602af data
.org 0x602b0
	.byte 0x08,0xa5,0x00,0x00	@ 000602b0 data
.org 0x602b4
	.byte 0xf0,0xdb,0x02,0x02	@ 000602b4 data
.org 0x602b8
	ldrb r1, [r4, #10]	@ 000602b8 a17a
.org 0x602ba
	movs r0, #239	@ 000602ba ef20
.org 0x602bc
	ands r0, r1	@ 000602bc 0840
.org 0x602be
	strb r0, [r4, #10]	@ 000602be a072
.org 0x602c0
	adds r0, r4, #0	@ 000602c0 201c
.org 0x602c2
	adds r0, #116	@ 000602c2 7430
.org 0x602c4
	ldr r1, [pc, #52]	@ 000602c4 0d49
.org 0x602c6
	bl 0x5784	@ 000602c6 a5f75dfa
.org 0x602ca
	movs r0, #24	@ 000602ca 1820
.org 0x602cc
	strb r0, [r4, #18]	@ 000602cc a074
.org 0x602ce
	ldr r0, [pc, #48]	@ 000602ce 0c48
.org 0x602d0
	bl 0x2b10	@ 000602d0 a2f71efc
.org 0x602d4
	ldrb r0, [r4, #14]	@ 000602d4 a07b
.org 0x602d6
	adds r0, #1	@ 000602d6 0130
.org 0x602d8
	strb r0, [r4, #14]	@ 000602d8 a073
.org 0x602da
	adds r0, r4, #0	@ 000602da 201c
.org 0x602dc
	bl 0x1cff0	@ 000602dc bcf788fe
.org 0x602e0
	ldrb r0, [r4, #18]	@ 000602e0 a07c
.org 0x602e2
	subs r0, #1	@ 000602e2 0138
.org 0x602e4
	strb r0, [r4, #18]	@ 000602e4 a074
.org 0x602e6
	lsls r0, r0, #24	@ 000602e6 0006
.org 0x602e8
	lsrs r0, r0, #24	@ 000602e8 000e
.org 0x602ea
	cmp r0, #255	@ 000602ea ff28
.org 0x602ec
	bne.n 0x602f6	@ 000602ec 03d1
.org 0x602ee
	movs r0, #9	@ 000602ee 0920
.org 0x602f0
	strb r0, [r4, #13]	@ 000602f0 6073
