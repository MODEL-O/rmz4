@ FUN_08098240  entry 0x08098240  size 98
.thumb
.org 0x98240
FUN_08098240:
	push {r4, r5, lr}	@ 00098240 30b5
.org 0x98242
	sub sp, #8	@ 00098242 82b0
.org 0x98244
	adds r4, r0, #0	@ 00098244 041c
.org 0x98246
	ldrb r1, [r4, #10]	@ 00098246 a17a
.org 0x98248
	movs r0, #254	@ 00098248 fe20
.org 0x9824a
	ands r0, r1	@ 0009824a 0840
.org 0x9824c
	strb r0, [r4, #10]	@ 0009824c a072
.org 0x9824e
	ldr r0, [r4, #84]	@ 0009824e 606d
.org 0x98250
	str r0, [sp, #0]	@ 00098250 0090
.org 0x98252
	ldr r0, [r4, #88]	@ 00098252 a06d
.org 0x98254
	str r0, [sp, #4]	@ 00098254 0190
.org 0x98256
	movs r0, #1	@ 00098256 0120
.org 0x98258
	mov r1, sp	@ 00098258 6946
.org 0x9825a
	bl 0xd0c88	@ 0009825a 38f015fd
.org 0x9825e
	movs r0, #42	@ 0009825e 2a20
.org 0x98260
	bl 0x2b10	@ 00098260 6af756fc
.org 0x98264
	adds r5, r4, #0	@ 00098264 251c
.org 0x98266
	adds r5, #84	@ 00098266 5435
.org 0x98268
	movs r0, #2	@ 00098268 0220
.org 0x9826a
	movs r1, #50	@ 0009826a 3221
.org 0x9826c
	adds r2, r5, #0	@ 0009826c 2a1c
.org 0x9826e
	bl 0x2ab88	@ 0009826e 92f78bfc
.org 0x98272
	ldr r2, [pc, #48]	@ 00098272 0c4a
.org 0x98274
	ldrh r1, [r2, #12]	@ 00098274 9189
.org 0x98276
	ldr r0, [pc, #48]	@ 00098276 0c48
.org 0x98278
	cmp r1, r0	@ 00098278 8142
.org 0x9827a
	bhi.n 0x98280	@ 0009827a 01d8
.org 0x9827c
	adds r0, r1, #1	@ 0009827c 481c
.org 0x9827e
	strh r0, [r2, #12]	@ 0009827e 9081
.org 0x98280
	adds r0, r4, #0	@ 00098280 201c
.org 0x98282
	adds r1, r5, #0	@ 00098282 291c
.org 0x98284
	bl 0x2abe0	@ 00098284 92f7acfc
.org 0x98288
	ldr r1, [pc, #32]	@ 00098288 0849
.org 0x9828a
	ldrb r0, [r4, #9]	@ 0009828a 607a
.org 0x9828c
	lsls r0, r0, #2	@ 0009828c 8000
.org 0x9828e
	adds r0, r0, r1	@ 0009828e 4018
.org 0x98290
	movs r1, #4	@ 00098290 0421
.org 0x98292
	str r1, [r4, #12]	@ 00098292 e160
.org 0x98294
	ldr r0, [r0, #0]	@ 00098294 0068
.org 0x98296
	ldr r0, [r0, #16]	@ 00098296 0069
.org 0x98298
	str r0, [r4, #20]	@ 00098298 6061
.org 0x9829a
	add sp, #8	@ 0009829a 02b0
.org 0x9829c
	pop {r4, r5}	@ 0009829c 30bc
.org 0x9829e
	pop {r0}	@ 0009829e 01bc
.org 0x982a0
	bx r0	@ 000982a0 0047
