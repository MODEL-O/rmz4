@ FUN_0810b238  entry 0x0810b238  size 100
.thumb
.org 0x10b238
FUN_0810b238:
	push {r4, r5, lr}	@ 0010b238 30b5
.org 0x10b23a
	adds r4, r0, #0	@ 0010b23a 041c
.org 0x10b23c
	bl 0x1cc9c	@ 0010b23c 11f72efd
.org 0x10b240
	ldrb r1, [r4, #10]	@ 0010b240 a17a
.org 0x10b242
	movs r0, #1	@ 0010b242 0120
.org 0x10b244
	movs r5, #0	@ 0010b244 0025
.org 0x10b246
	orrs r0, r1	@ 0010b246 0843
.org 0x10b248
	movs r1, #2	@ 0010b248 0221
.org 0x10b24a
	orrs r0, r1	@ 0010b24a 0843
.org 0x10b24c
	strb r0, [r4, #10]	@ 0010b24c a072
.org 0x10b24e
	ldr r1, [pc, #76]	@ 0010b24e 1349
.org 0x10b250
	adds r0, r4, #0	@ 0010b250 201c
.org 0x10b252
	bl 0x1cf00	@ 0010b252 11f755fe
.org 0x10b256
	adds r0, r4, #0	@ 0010b256 201c
.org 0x10b258
	bl 0x1cff0	@ 0010b258 11f7cafe
.org 0x10b25c
	adds r0, r4, #0	@ 0010b25c 201c
.org 0x10b25e
	adds r0, #76	@ 0010b25e 4c30
.org 0x10b260
	strb r5, [r0, #0]	@ 0010b260 0570
.org 0x10b262
	adds r2, r4, #0	@ 0010b262 221c
.org 0x10b264
	adds r2, #74	@ 0010b264 4a32
.org 0x10b266
	ldrb r1, [r2, #0]	@ 0010b266 1178
.org 0x10b268
	movs r0, #17	@ 0010b268 1120
.org 0x10b26a
	negs r0, r0	@ 0010b26a 4042
.org 0x10b26c
	ands r0, r1	@ 0010b26c 0840
.org 0x10b26e
	strb r0, [r2, #0]	@ 0010b26e 1070
.org 0x10b270
	ldrb r1, [r4, #10]	@ 0010b270 a17a
.org 0x10b272
	movs r0, #239	@ 0010b272 ef20
.org 0x10b274
	ands r0, r1	@ 0010b274 0840
.org 0x10b276
	strb r0, [r4, #10]	@ 0010b276 a072
.org 0x10b278
	movs r0, #133	@ 0010b278 8520
.org 0x10b27a
	lsls r0, r0, #9	@ 0010b27a 4002
.org 0x10b27c
	str r0, [r4, #84]	@ 0010b27c 6065
.org 0x10b27e
	ldr r1, [pc, #32]	@ 0010b27e 0849
.org 0x10b280
	ldrb r0, [r4, #9]	@ 0010b280 607a
.org 0x10b282
	lsls r0, r0, #2	@ 0010b282 8000
.org 0x10b284
	adds r0, r0, r1	@ 0010b284 4018
.org 0x10b286
	movs r1, #1	@ 0010b286 0121
.org 0x10b288
	str r1, [r4, #12]	@ 0010b288 e160
.org 0x10b28a
	ldr r0, [r0, #0]	@ 0010b28a 0068
.org 0x10b28c
	ldr r0, [r0, #4]	@ 0010b28c 4068
.org 0x10b28e
	str r0, [r4, #20]	@ 0010b28e 6061
.org 0x10b290
	adds r0, r4, #0	@ 0010b290 201c
.org 0x10b292
	bl 0x10b148	@ 0010b292 fff759ff
.org 0x10b296
	pop {r4, r5}	@ 0010b296 30bc
.org 0x10b298
	pop {r0}	@ 0010b298 01bc
.org 0x10b29a
	bx r0	@ 0010b29a 0047
