@ FUN_080e0430  entry 0x080e0430  size 140
.thumb
.org 0xe0430
FUN_080e0430:
	push {r4, r5, r6, r7, lr}	@ 000e0430 f0b5
.org 0xe0432
	sub sp, #12	@ 000e0432 83b0
.org 0xe0434
	adds r5, r0, #0	@ 000e0434 051c
.org 0xe0436
	mov r1, sp	@ 000e0436 6946
.org 0xe0438
	ldr r0, [pc, #68]	@ 000e0438 1148
.org 0xe043a
	ldmia r0!, {r2, r3, r4}	@ 000e043a 1cc8
.org 0xe043c
	stmia r1!, {r2, r3, r4}	@ 000e043c 1cc1
.org 0xe043e
	ldrb r7, [r5, #16]	@ 000e043e 2f7c
.org 0xe0440
	ldrb r4, [r5, #17]	@ 000e0440 6c7c
.org 0xe0442
	ldr r1, [pc, #64]	@ 000e0442 1049
.org 0xe0444
	ldrb r0, [r5, #9]	@ 000e0444 687a
.org 0xe0446
	lsls r0, r0, #2	@ 000e0446 8000
.org 0xe0448
	adds r0, r0, r1	@ 000e0448 4018
.org 0xe044a
	movs r1, #1	@ 000e044a 0121
.org 0xe044c
	str r1, [r5, #12]	@ 000e044c e960
.org 0xe044e
	ldr r0, [r0, #0]	@ 000e044e 0068
.org 0xe0450
	ldr r0, [r0, #4]	@ 000e0450 4068
.org 0xe0452
	str r0, [r5, #20]	@ 000e0452 6861
.org 0xe0454
	ldrb r1, [r5, #10]	@ 000e0454 a97a
.org 0xe0456
	movs r0, #1	@ 000e0456 0120
.org 0xe0458
	movs r6, #0	@ 000e0458 0026
.org 0xe045a
	orrs r0, r1	@ 000e045a 0843
.org 0xe045c
	movs r1, #2	@ 000e045c 0221
.org 0xe045e
	orrs r0, r1	@ 000e045e 0843
.org 0xe0460
	strb r0, [r5, #10]	@ 000e0460 a872
.org 0xe0462
	movs r0, #128	@ 000e0462 8020
.org 0xe0464
	lsls r0, r0, #1	@ 000e0464 4000
.org 0xe0466
	str r0, [r5, #96]	@ 000e0466 2866
.org 0xe0468
	movs r0, #64	@ 000e0468 4020
.org 0xe046a
	strb r0, [r5, #18]	@ 000e046a a874
.org 0xe046c
	adds r0, r5, #0	@ 000e046c 281c
.org 0xe046e
	bl 0x1cc9c	@ 000e046e 3cf715fc
.org 0xe0472
	cmp r4, #0	@ 000e0472 002c
.org 0xe0474
	beq.n 0xe0488	@ 000e0474 08d0
.org 0xe0476
	ldrb r0, [r5, #10]	@ 000e0476 a87a
.org 0xe0478
	movs r1, #16	@ 000e0478 1021
.org 0xe047a
	orrs r0, r1	@ 000e047a 0843
.org 0xe047c
	b.n 0xe048e	@ 000e047c 07e0
.org 0xe047e
	.byte 0x00	@ 000e047e data
.org 0xe047f
	.byte 0x00	@ 000e047f data
.org 0xe0480
	.byte 0x6c,0xa2,0x12,0x08	@ 000e0480 data
.org 0xe0484
	.byte 0x64,0x6f,0x86,0x08	@ 000e0484 data
.org 0xe0488
	ldrb r1, [r5, #10]	@ 000e0488 a97a
.org 0xe048a
	movs r0, #239	@ 000e048a ef20
.org 0xe048c
	ands r0, r1	@ 000e048c 0840
.org 0xe048e
	strb r0, [r5, #10]	@ 000e048e a872
.org 0xe0490
	movs r1, #1	@ 000e0490 0121
.org 0xe0492
	ands r1, r4	@ 000e0492 2140
.org 0xe0494
	adds r0, r5, #0	@ 000e0494 281c
.org 0xe0496
	adds r0, #76	@ 000e0496 4c30
.org 0xe0498
	strb r1, [r0, #0]	@ 000e0498 0170
.org 0xe049a
	adds r3, r5, #0	@ 000e049a 2b1c
.org 0xe049c
	adds r3, #74	@ 000e049c 4a33
.org 0xe049e
	lsls r1, r1, #4	@ 000e049e 0901
.org 0xe04a0
	ldrb r2, [r3, #0]	@ 000e04a0 1a78
.org 0xe04a2
	movs r0, #17	@ 000e04a2 1120
.org 0xe04a4
	negs r0, r0	@ 000e04a4 4042
.org 0xe04a6
	ands r0, r2	@ 000e04a6 1040
.org 0xe04a8
	orrs r0, r1	@ 000e04a8 0843
.org 0xe04aa
	strb r0, [r3, #0]	@ 000e04aa 1870
.org 0xe04ac
	lsls r0, r7, #2	@ 000e04ac b800
.org 0xe04ae
	add r0, sp	@ 000e04ae 6844
.org 0xe04b0
	ldrh r1, [r0, #0]	@ 000e04b0 0188
.org 0xe04b2
	adds r0, r5, #0	@ 000e04b2 281c
.org 0xe04b4
	bl 0x1cf00	@ 000e04b4 3cf724fd
.org 0xe04b8
	adds r0, r5, #0	@ 000e04b8 281c
.org 0xe04ba
	bl 0xe04c8	@ 000e04ba 00f005f8
