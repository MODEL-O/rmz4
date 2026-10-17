@ FUN_080cf36c  entry 0x080cf36c  size 110
.thumb
.org 0xcf36c
FUN_080cf36c:
	push {r4, r5, r6, r7, lr}	@ 000cf36c f0b5
.org 0xcf36e
	mov r7, r8	@ 000cf36e 4746
.org 0xcf370
	push {r7}	@ 000cf370 80b4
.org 0xcf372
	adds r5, r0, #0	@ 000cf372 051c
.org 0xcf374
	mov r8, r1	@ 000cf374 8846
.org 0xcf376
	lsls r2, r2, #24	@ 000cf376 1206
.org 0xcf378
	lsrs r7, r2, #24	@ 000cf378 170e
.org 0xcf37a
	lsls r3, r3, #24	@ 000cf37a 1b06
.org 0xcf37c
	lsrs r6, r3, #24	@ 000cf37c 1e0e
.org 0xcf37e
	ldr r0, [pc, #92]	@ 000cf37e 1748
.org 0xcf380
	ldr r0, [r0, #0]	@ 000cf380 0068
.org 0xcf382
	bl 0x5500	@ 000cf382 36f7bdf8
.org 0xcf386
	adds r4, r0, #0	@ 000cf386 041c
.org 0xcf388
	cmp r4, #0	@ 000cf388 002c
.org 0xcf38a
	beq.n 0xcf3ce	@ 000cf38a 20d0
.org 0xcf38c
	adds r1, r4, #0	@ 000cf38c 211c
.org 0xcf38e
	adds r1, #37	@ 000cf38e 2531
.org 0xcf390
	movs r3, #0	@ 000cf390 0023
.org 0xcf392
	movs r0, #8	@ 000cf392 0820
.org 0xcf394
	strb r0, [r1, #0]	@ 000cf394 0870
.org 0xcf396
	ldr r0, [pc, #72]	@ 000cf396 1248
.org 0xcf398
	movs r1, #58	@ 000cf398 3a21
.org 0xcf39a
	strb r1, [r4, #9]	@ 000cf39a 6172
.org 0xcf39c
	adds r0, #232	@ 000cf39c e830
.org 0xcf39e
	ldr r0, [r0, #0]	@ 000cf39e 0068
.org 0xcf3a0
	ldr r0, [r0, #0]	@ 000cf3a0 0068
.org 0xcf3a2
	str r0, [r4, #20]	@ 000cf3a2 6061
.org 0xcf3a4
	movs r2, #0	@ 000cf3a4 0022
.org 0xcf3a6
	strh r3, [r4, #32]	@ 000cf3a6 2384
.org 0xcf3a8
	adds r0, r4, #0	@ 000cf3a8 201c
.org 0xcf3aa
	adds r0, #34	@ 000cf3aa 2230
.org 0xcf3ac
	strb r2, [r0, #0]	@ 000cf3ac 0270
.org 0xcf3ae
	str r5, [r4, #40]	@ 000cf3ae a562
.org 0xcf3b0
	mov r3, r8	@ 000cf3b0 4346
.org 0xcf3b2
	ldr r0, [r3, #0]	@ 000cf3b2 1868
.org 0xcf3b4
	ldr r1, [r3, #4]	@ 000cf3b4 5968
.org 0xcf3b6
	str r0, [r4, #84]	@ 000cf3b6 6065
.org 0xcf3b8
	str r1, [r4, #88]	@ 000cf3b8 a165
.org 0xcf3ba
	strb r7, [r4, #16]	@ 000cf3ba 2774
.org 0xcf3bc
	strb r6, [r4, #17]	@ 000cf3bc 6674
.org 0xcf3be
	adds r0, r4, #0	@ 000cf3be 201c
.org 0xcf3c0
	adds r0, #188	@ 000cf3c0 bc30
.org 0xcf3c2
	strb r2, [r0, #0]	@ 000cf3c2 0270
.org 0xcf3c4
	adds r1, r5, #0	@ 000cf3c4 291c
.org 0xcf3c6
	adds r1, #204	@ 000cf3c6 cc31
.org 0xcf3c8
	ldrh r0, [r1, #0]	@ 000cf3c8 0888
.org 0xcf3ca
	adds r0, #1	@ 000cf3ca 0130
.org 0xcf3cc
	strh r0, [r1, #0]	@ 000cf3cc 0880
.org 0xcf3ce
	adds r0, r4, #0	@ 000cf3ce 201c
.org 0xcf3d0
	pop {r3}	@ 000cf3d0 08bc
.org 0xcf3d2
	mov r8, r3	@ 000cf3d2 9846
.org 0xcf3d4
	pop {r4, r5, r6, r7}	@ 000cf3d4 f0bc
.org 0xcf3d6
	pop {r1}	@ 000cf3d6 02bc
.org 0xcf3d8
	bx r1	@ 000cf3d8 0847
