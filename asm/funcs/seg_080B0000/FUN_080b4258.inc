@ FUN_080b4258  entry 0x080b4258  size 94
.thumb
.org 0xb4258
FUN_080b4258:
	push {r4, r5, lr}	@ 000b4258 30b5
.org 0xb425a
	adds r4, r0, #0	@ 000b425a 041c
.org 0xb425c
	ldrb r5, [r4, #14]	@ 000b425c a57b
.org 0xb425e
	cmp r5, #0	@ 000b425e 002d
.org 0xb4260
	bne.n 0xb4280	@ 000b4260 0ed1
.org 0xb4262
	ldrb r0, [r4, #16]	@ 000b4262 207c
.org 0xb4264
	lsls r1, r0, #3	@ 000b4264 c100
.org 0xb4266
	adds r1, r1, r0	@ 000b4266 0918
.org 0xb4268
	ldr r0, [pc, #76]	@ 000b4268 1348
.org 0xb426a
	adds r1, r1, r0	@ 000b426a 0918
.org 0xb426c
	lsls r1, r1, #16	@ 000b426c 0904
.org 0xb426e
	lsrs r1, r1, #16	@ 000b426e 090c
.org 0xb4270
	adds r0, r4, #0	@ 000b4270 201c
.org 0xb4272
	bl 0x1cf00	@ 000b4272 68f745fe
.org 0xb4276
	str r5, [r4, #96]	@ 000b4276 2566
.org 0xb4278
	str r5, [r4, #92]	@ 000b4278 e565
.org 0xb427a
	ldrb r0, [r4, #14]	@ 000b427a a07b
.org 0xb427c
	adds r0, #1	@ 000b427c 0130
.org 0xb427e
	strb r0, [r4, #14]	@ 000b427e a073
.org 0xb4280
	adds r0, r4, #0	@ 000b4280 201c
.org 0xb4282
	bl 0x1cff0	@ 000b4282 68f7b5fe
.org 0xb4286
	ldr r1, [r4, #88]	@ 000b4286 a16d
.org 0xb4288
	ldr r0, [r4, #96]	@ 000b4288 206e
.org 0xb428a
	adds r1, r1, r0	@ 000b428a 0918
.org 0xb428c
	str r1, [r4, #88]	@ 000b428c a165
.org 0xb428e
	adds r0, #64	@ 000b428e 4030
.org 0xb4290
	str r0, [r4, #96]	@ 000b4290 2066
.org 0xb4292
	ldr r0, [r4, #84]	@ 000b4292 606d
.org 0xb4294
	bl 0x7c7c	@ 000b4294 53f7f2fc
.org 0xb4298
	lsls r0, r0, #16	@ 000b4298 0004
.org 0xb429a
	cmp r0, #0	@ 000b429a 0028
.org 0xb429c
	beq.n 0xb42b0	@ 000b429c 08d0
.org 0xb429e
	ldr r0, [r4, #84]	@ 000b429e 606d
.org 0xb42a0
	ldr r1, [r4, #88]	@ 000b42a0 a16d
.org 0xb42a2
	bl 0x8534	@ 000b42a2 54f747f9
.org 0xb42a6
	str r0, [r4, #88]	@ 000b42a6 a065
.org 0xb42a8
	movs r1, #0	@ 000b42a8 0021
.org 0xb42aa
	movs r0, #1	@ 000b42aa 0120
.org 0xb42ac
	strb r0, [r4, #13]	@ 000b42ac 6073
.org 0xb42ae
	strb r1, [r4, #14]	@ 000b42ae a173
.org 0xb42b0
	pop {r4, r5}	@ 000b42b0 30bc
.org 0xb42b2
	pop {r0}	@ 000b42b2 01bc
.org 0xb42b4
	bx r0	@ 000b42b4 0047
