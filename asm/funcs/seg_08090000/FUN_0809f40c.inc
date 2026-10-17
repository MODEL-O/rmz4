@ FUN_0809f40c  entry 0x0809f40c  size 158
.thumb
.org 0x9f40c
FUN_0809f40c:
	push {r4, r5, lr}	@ 0009f40c 30b5
.org 0x9f40e
	adds r4, r0, #0	@ 0009f40e 041c
.org 0x9f410
	ldr r0, [pc, #96]	@ 0009f410 1848
.org 0x9f412
	ldr r0, [r0, #0]	@ 0009f412 0068
.org 0x9f414
	bl 0x5500	@ 0009f414 66f774f8
.org 0x9f418
	mov ip, r0	@ 0009f418 8446
.org 0x9f41a
	cmp r0, #0	@ 0009f41a 0028
.org 0x9f41c
	beq.n 0x9f4ac	@ 0009f41c 46d0
.org 0x9f41e
	mov r1, ip	@ 0009f41e 6146
.org 0x9f420
	adds r1, #37	@ 0009f420 2531
.org 0x9f422
	movs r2, #0	@ 0009f422 0022
.org 0x9f424
	movs r0, #24	@ 0009f424 1820
.org 0x9f426
	strb r0, [r1, #0]	@ 0009f426 0870
.org 0x9f428
	ldr r0, [pc, #76]	@ 0009f428 1348
.org 0x9f42a
	movs r1, #49	@ 0009f42a 3121
.org 0x9f42c
	mov r3, ip	@ 0009f42c 6346
.org 0x9f42e
	strb r1, [r3, #9]	@ 0009f42e 5972
.org 0x9f430
	adds r0, #196	@ 0009f430 c430
.org 0x9f432
	ldr r0, [r0, #0]	@ 0009f432 0068
.org 0x9f434
	ldr r0, [r0, #0]	@ 0009f434 0068
.org 0x9f436
	str r0, [r3, #20]	@ 0009f436 5861
.org 0x9f438
	movs r0, #0	@ 0009f438 0020
.org 0x9f43a
	strh r2, [r3, #32]	@ 0009f43a 1a84
.org 0x9f43c
	mov r1, ip	@ 0009f43c 6146
.org 0x9f43e
	adds r1, #34	@ 0009f43e 2231
.org 0x9f440
	strb r0, [r1, #0]	@ 0009f440 0870
.org 0x9f442
	ldrb r0, [r3, #11]	@ 0009f442 d87a
.org 0x9f444
	movs r3, #16	@ 0009f444 1023
.org 0x9f446
	orrs r0, r3	@ 0009f446 1843
.org 0x9f448
	mov r1, ip	@ 0009f448 6146
.org 0x9f44a
	strb r0, [r1, #11]	@ 0009f44a c872
.org 0x9f44c
	ldrb r0, [r1, #28]	@ 0009f44c 087f
.org 0x9f44e
	strb r0, [r1, #29]	@ 0009f44e 4877
.org 0x9f450
	str r4, [r1, #40]	@ 0009f450 8c62
.org 0x9f452
	ldr r0, [r4, #84]	@ 0009f452 606d
.org 0x9f454
	ldr r1, [r4, #88]	@ 0009f454 a16d
.org 0x9f456
	mov r2, ip	@ 0009f456 6246
.org 0x9f458
	str r0, [r2, #84]	@ 0009f458 5065
.org 0x9f45a
	str r1, [r2, #88]	@ 0009f45a 9165
.org 0x9f45c
	ldrb r0, [r4, #10]	@ 0009f45c a07a
.org 0x9f45e
	lsrs r2, r0, #4	@ 0009f45e 0209
.org 0x9f460
	movs r0, #1	@ 0009f460 0120
.org 0x9f462
	ands r2, r0	@ 0009f462 0240
.org 0x9f464
	cmp r2, #0	@ 0009f464 002a
.org 0x9f466
	beq.n 0x9f47c	@ 0009f466 09d0
.org 0x9f468
	mov r1, ip	@ 0009f468 6146
.org 0x9f46a
	ldrb r0, [r1, #10]	@ 0009f46a 887a
.org 0x9f46c
	orrs r0, r3	@ 0009f46c 1843
.org 0x9f46e
	strb r0, [r1, #10]	@ 0009f46e 8872
.org 0x9f470
	b.n 0x9f486	@ 0009f470 09e0
.org 0x9f472
	.byte 0x00	@ 0009f472 data
.org 0x9f473
	.byte 0x00	@ 0009f473 data
.org 0x9f474
	.byte 0x90,0xed,0x02,0x02	@ 0009f474 data
.org 0x9f478
	.byte 0x40,0xdb,0x85,0x08	@ 0009f478 data
.org 0x9f47c
	mov r3, ip	@ 0009f47c 6346
.org 0x9f47e
	ldrb r1, [r3, #10]	@ 0009f47e 997a
.org 0x9f480
	movs r0, #239	@ 0009f480 ef20
.org 0x9f482
	ands r0, r1	@ 0009f482 0840
.org 0x9f484
	strb r0, [r3, #10]	@ 0009f484 9872
.org 0x9f486
	movs r3, #1	@ 0009f486 0123
.org 0x9f488
	adds r1, r3, #0	@ 0009f488 191c
.org 0x9f48a
	ands r1, r2	@ 0009f48a 1140
.org 0x9f48c
	mov r0, ip	@ 0009f48c 6046
.org 0x9f48e
	adds r0, #76	@ 0009f48e 4c30
.org 0x9f490
	movs r4, #0	@ 0009f490 0024
.org 0x9f492
	strb r1, [r0, #0]	@ 0009f492 0170
.org 0x9f494
	mov r5, ip	@ 0009f494 6546
.org 0x9f496
	adds r5, #74	@ 0009f496 4a35
.org 0x9f498
	lsls r1, r1, #4	@ 0009f498 0901
.org 0x9f49a
	ldrb r2, [r5, #0]	@ 0009f49a 2a78
.org 0x9f49c
	movs r0, #17	@ 0009f49c 1120
.org 0x9f49e
	negs r0, r0	@ 0009f49e 4042
.org 0x9f4a0
	ands r0, r2	@ 0009f4a0 1040
.org 0x9f4a2
	orrs r0, r1	@ 0009f4a2 0843
.org 0x9f4a4
	strb r0, [r5, #0]	@ 0009f4a4 2870
.org 0x9f4a6
	mov r0, ip	@ 0009f4a6 6046
.org 0x9f4a8
	strb r3, [r0, #16]	@ 0009f4a8 0374
