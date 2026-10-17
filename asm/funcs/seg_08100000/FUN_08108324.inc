@ FUN_08108324  entry 0x08108324  size 102
.thumb
.org 0x108324
FUN_08108324:
	push {r4, r5, r6, r7, lr}	@ 00108324 f0b5
.org 0x108326
	mov r7, r9	@ 00108326 4f46
.org 0x108328
	mov r6, r8	@ 00108328 4646
.org 0x10832a
	push {r6, r7}	@ 0010832a c0b4
.org 0x10832c
	sub sp, #4	@ 0010832c 81b0
.org 0x10832e
	mov r8, r0	@ 0010832e 8046
.org 0x108330
	adds r5, r1, #0	@ 00108330 0d1c
.org 0x108332
	lsls r2, r2, #16	@ 00108332 1204
.org 0x108334
	lsrs r0, r2, #16	@ 00108334 100c
.org 0x108336
	mov r9, r0	@ 00108336 8146
.org 0x108338
	asrs r4, r2, #16	@ 00108338 1414
.org 0x10833a
	str r4, [sp, #0]	@ 0010833a 0094
.org 0x10833c
	mov r0, r8	@ 0010833c 4046
.org 0x10833e
	movs r1, #7	@ 0010833e 0721
.org 0x108340
	adds r2, r5, #0	@ 00108340 2a1c
.org 0x108342
	movs r3, #196	@ 00108342 c423
.org 0x108344
	bl 0x5440	@ 00108344 fdf67cf8
.org 0x108348
	movs r3, #0	@ 00108348 0023
.org 0x10834a
	cmp r3, r4	@ 0010834a a342
.org 0x10834c
	bge.n 0x10836e	@ 0010834c 0fda
.org 0x10834e
	movs r7, #196	@ 0010834e c427
.org 0x108350
	ldr r6, [pc, #56]	@ 00108350 0e4e
.org 0x108352
	lsls r0, r3, #16	@ 00108352 1804
.org 0x108354
	asrs r0, r0, #16	@ 00108354 0014
.org 0x108356
	adds r2, r0, #0	@ 00108356 021c
.org 0x108358
	muls r2, r7	@ 00108358 7a43
.org 0x10835a
	adds r2, r2, r5	@ 0010835a 5219
.org 0x10835c
	ldrb r1, [r6, #0]	@ 0010835c 3178
.org 0x10835e
	adds r1, r1, r3	@ 0010835e c918
.org 0x108360
	strb r1, [r2, #28]	@ 00108360 1177
.org 0x108362
	adds r0, #1	@ 00108362 0130
.org 0x108364
	lsls r0, r0, #16	@ 00108364 0004
.org 0x108366
	lsrs r3, r0, #16	@ 00108366 030c
.org 0x108368
	asrs r0, r0, #16	@ 00108368 0014
.org 0x10836a
	cmp r0, r4	@ 0010836a a042
.org 0x10836c
	blt.n 0x108352	@ 0010836c f1db
.org 0x10836e
	ldr r0, [pc, #28]	@ 0010836e 0748
.org 0x108370
	ldrb r1, [r0, #0]	@ 00108370 0178
.org 0x108372
	add r1, r9	@ 00108372 4944
.org 0x108374
	strb r1, [r0, #0]	@ 00108374 0170
.org 0x108376
	ldr r0, [pc, #24]	@ 00108376 0648
.org 0x108378
	mov r1, r8	@ 00108378 4146
.org 0x10837a
	str r1, [r0, #0]	@ 0010837a 0160
.org 0x10837c
	add sp, #4	@ 0010837c 01b0
.org 0x10837e
	pop {r3, r4}	@ 0010837e 18bc
.org 0x108380
	mov r8, r3	@ 00108380 9846
.org 0x108382
	mov r9, r4	@ 00108382 a146
.org 0x108384
	pop {r4, r5, r6, r7}	@ 00108384 f0bc
.org 0x108386
	pop {r0}	@ 00108386 01bc
.org 0x108388
	bx r0	@ 00108388 0047
