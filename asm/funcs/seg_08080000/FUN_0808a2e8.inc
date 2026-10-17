@ FUN_0808a2e8  entry 0x0808a2e8  size 98
.thumb
.org 0x8a2e8
FUN_0808a2e8:
	push {r4, r5, lr}	@ 0008a2e8 30b5
.org 0x8a2ea
	adds r4, r0, #0	@ 0008a2ea 041c
.org 0x8a2ec
	ldrb r5, [r4, #14]	@ 0008a2ec a57b
.org 0x8a2ee
	cmp r5, #0	@ 0008a2ee 002d
.org 0x8a2f0
	beq.n 0x8a2f8	@ 0008a2f0 02d0
.org 0x8a2f2
	cmp r5, #1	@ 0008a2f2 012d
.org 0x8a2f4
	beq.n 0x8a324	@ 0008a2f4 16d0
.org 0x8a2f6
	b.n 0x8a344	@ 0008a2f6 25e0
.org 0x8a2f8
	ldr r1, [pc, #80]	@ 0008a2f8 1449
.org 0x8a2fa
	adds r0, r4, #0	@ 0008a2fa 201c
.org 0x8a2fc
	bl 0x1cf00	@ 0008a2fc 92f700fe
.org 0x8a300
	adds r0, r4, #0	@ 0008a300 201c
.org 0x8a302
	adds r0, #116	@ 0008a302 7430
.org 0x8a304
	ldr r1, [pc, #72]	@ 0008a304 1249
.org 0x8a306
	ldrb r2, [r1, #1]	@ 0008a306 4a78
.org 0x8a308
	lsls r1, r2, #1	@ 0008a308 5100
.org 0x8a30a
	adds r1, r1, r2	@ 0008a30a 8918
.org 0x8a30c
	lsls r1, r1, #3	@ 0008a30c c900
.org 0x8a30e
	ldr r2, [pc, #68]	@ 0008a30e 114a
.org 0x8a310
	adds r1, r1, r2	@ 0008a310 8918
.org 0x8a312
	bl 0x5784	@ 0008a312 7bf737fa
.org 0x8a316
	str r5, [r4, #96]	@ 0008a316 2566
.org 0x8a318
	str r5, [r4, #92]	@ 0008a318 e565
.org 0x8a31a
	movs r0, #30	@ 0008a31a 1e20
.org 0x8a31c
	strb r0, [r4, #18]	@ 0008a31c a074
.org 0x8a31e
	ldrb r0, [r4, #14]	@ 0008a31e a07b
.org 0x8a320
	adds r0, #1	@ 0008a320 0130
.org 0x8a322
	strb r0, [r4, #14]	@ 0008a322 a073
.org 0x8a324
	adds r0, r4, #0	@ 0008a324 201c
.org 0x8a326
	bl 0x1cff0	@ 0008a326 92f763fe
.org 0x8a32a
	adds r0, r4, #0	@ 0008a32a 201c
.org 0x8a32c
	bl 0x8b1dc	@ 0008a32c 00f056ff
.org 0x8a330
	ldrb r0, [r4, #18]	@ 0008a330 a07c
.org 0x8a332
	subs r0, #1	@ 0008a332 0138
.org 0x8a334
	strb r0, [r4, #18]	@ 0008a334 a074
.org 0x8a336
	lsls r0, r0, #24	@ 0008a336 0006
.org 0x8a338
	lsrs r1, r0, #24	@ 0008a338 010e
.org 0x8a33a
	cmp r1, #0	@ 0008a33a 0029
.org 0x8a33c
	bne.n 0x8a344	@ 0008a33c 02d1
.org 0x8a33e
	movs r0, #5	@ 0008a33e 0520
.org 0x8a340
	strb r0, [r4, #13]	@ 0008a340 6073
.org 0x8a342
	strb r1, [r4, #14]	@ 0008a342 a173
.org 0x8a344
	pop {r4, r5}	@ 0008a344 30bc
.org 0x8a346
	pop {r0}	@ 0008a346 01bc
.org 0x8a348
	bx r0	@ 0008a348 0047
