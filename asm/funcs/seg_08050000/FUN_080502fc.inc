@ FUN_080502fc  entry 0x080502fc  size 102
.thumb
.org 0x502fc
FUN_080502fc:
	push {r4, r5, r6, r7, lr}	@ 000502fc f0b5
.org 0x502fe
	mov r7, r9	@ 000502fe 4f46
.org 0x50300
	mov r6, r8	@ 00050300 4646
.org 0x50302
	push {r6, r7}	@ 00050302 c0b4
.org 0x50304
	sub sp, #4	@ 00050304 81b0
.org 0x50306
	mov r8, r0	@ 00050306 8046
.org 0x50308
	adds r5, r1, #0	@ 00050308 0d1c
.org 0x5030a
	lsls r2, r2, #16	@ 0005030a 1204
.org 0x5030c
	lsrs r0, r2, #16	@ 0005030c 100c
.org 0x5030e
	mov r9, r0	@ 0005030e 8146
.org 0x50310
	asrs r4, r2, #16	@ 00050310 1414
.org 0x50312
	str r4, [sp, #0]	@ 00050312 0094
.org 0x50314
	mov r0, r8	@ 00050314 4046
.org 0x50316
	movs r1, #2	@ 00050316 0221
.org 0x50318
	adds r2, r5, #0	@ 00050318 2a1c
.org 0x5031a
	movs r3, #228	@ 0005031a e423
.org 0x5031c
	bl 0x5440	@ 0005031c b5f790f8
.org 0x50320
	movs r3, #0	@ 00050320 0023
.org 0x50322
	cmp r3, r4	@ 00050322 a342
.org 0x50324
	bge.n 0x50346	@ 00050324 0fda
.org 0x50326
	movs r7, #228	@ 00050326 e427
.org 0x50328
	ldr r6, [pc, #56]	@ 00050328 0e4e
.org 0x5032a
	lsls r0, r3, #16	@ 0005032a 1804
.org 0x5032c
	asrs r0, r0, #16	@ 0005032c 0014
.org 0x5032e
	adds r2, r0, #0	@ 0005032e 021c
.org 0x50330
	muls r2, r7	@ 00050330 7a43
.org 0x50332
	adds r2, r2, r5	@ 00050332 5219
.org 0x50334
	ldrb r1, [r6, #0]	@ 00050334 3178
.org 0x50336
	adds r1, r1, r3	@ 00050336 c918
.org 0x50338
	strb r1, [r2, #28]	@ 00050338 1177
.org 0x5033a
	adds r0, #1	@ 0005033a 0130
.org 0x5033c
	lsls r0, r0, #16	@ 0005033c 0004
.org 0x5033e
	lsrs r3, r0, #16	@ 0005033e 030c
.org 0x50340
	asrs r0, r0, #16	@ 00050340 0014
.org 0x50342
	cmp r0, r4	@ 00050342 a042
.org 0x50344
	blt.n 0x5032a	@ 00050344 f1db
.org 0x50346
	ldr r0, [pc, #28]	@ 00050346 0748
.org 0x50348
	ldrb r1, [r0, #0]	@ 00050348 0178
.org 0x5034a
	add r1, r9	@ 0005034a 4944
.org 0x5034c
	strb r1, [r0, #0]	@ 0005034c 0170
.org 0x5034e
	ldr r0, [pc, #24]	@ 0005034e 0648
.org 0x50350
	mov r1, r8	@ 00050350 4146
.org 0x50352
	str r1, [r0, #0]	@ 00050352 0160
.org 0x50354
	add sp, #4	@ 00050354 01b0
.org 0x50356
	pop {r3, r4}	@ 00050356 18bc
.org 0x50358
	mov r8, r3	@ 00050358 9846
.org 0x5035a
	mov r9, r4	@ 0005035a a146
.org 0x5035c
	pop {r4, r5, r6, r7}	@ 0005035c f0bc
.org 0x5035e
	pop {r0}	@ 0005035e 01bc
.org 0x50360
	bx r0	@ 00050360 0047
