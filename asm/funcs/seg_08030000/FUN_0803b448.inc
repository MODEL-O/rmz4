@ FUN_0803b448  entry 0x0803b448  size 98
.thumb
.org 0x3b448
FUN_0803b448:
	push {r4, r5, r6, lr}	@ 0003b448 70b5
.org 0x3b44a
	mov r6, r8	@ 0003b44a 4646
.org 0x3b44c
	push {r6}	@ 0003b44c 40b4
.org 0x3b44e
	adds r4, r0, #0	@ 0003b44e 041c
.org 0x3b450
	ldr r1, [pc, #88]	@ 0003b450 1649
.org 0x3b452
	ldrb r0, [r4, #9]	@ 0003b452 607a
.org 0x3b454
	lsls r0, r0, #2	@ 0003b454 8000
.org 0x3b456
	adds r0, r0, r1	@ 0003b456 4018
.org 0x3b458
	movs r6, #1	@ 0003b458 0126
.org 0x3b45a
	str r6, [r4, #12]	@ 0003b45a e660
.org 0x3b45c
	ldr r0, [r0, #0]	@ 0003b45c 0068
.org 0x3b45e
	ldr r0, [r0, #4]	@ 0003b45e 4068
.org 0x3b460
	str r0, [r4, #20]	@ 0003b460 6061
.org 0x3b462
	adds r5, r4, #0	@ 0003b462 251c
.org 0x3b464
	adds r5, #180	@ 0003b464 b435
.org 0x3b466
	movs r0, #0	@ 0003b466 0020
.org 0x3b468
	mov r8, r0	@ 0003b468 8046
.org 0x3b46a
	strb r6, [r5, #14]	@ 0003b46a ae73
.org 0x3b46c
	ldr r1, [pc, #64]	@ 0003b46c 1049
.org 0x3b46e
	ldrb r0, [r4, #16]	@ 0003b46e 207c
.org 0x3b470
	lsls r0, r0, #2	@ 0003b470 8000
.org 0x3b472
	adds r0, r0, r1	@ 0003b472 4018
.org 0x3b474
	ldr r1, [r0, #0]	@ 0003b474 0168
.org 0x3b476
	adds r0, r4, #0	@ 0003b476 201c
.org 0x3b478
	bl 0x128f80	@ 0003b478 edf082fd
.org 0x3b47c
	mov r2, r8	@ 0003b47c 4246
.org 0x3b47e
	strb r2, [r5, #12]	@ 0003b47e 2a73
.org 0x3b480
	strb r6, [r5, #15]	@ 0003b480 ee73
.org 0x3b482
	ldr r1, [r5, #0]	@ 0003b482 2968
.org 0x3b484
	movs r0, #164	@ 0003b484 a420
.org 0x3b486
	lsls r0, r0, #1	@ 0003b486 4000
.org 0x3b488
	adds r1, r1, r0	@ 0003b488 0918
.org 0x3b48a
	ldrb r0, [r5, #14]	@ 0003b48a a87b
.org 0x3b48c
	ldrb r2, [r1, #0]	@ 0003b48c 0a78
.org 0x3b48e
	adds r0, r0, r2	@ 0003b48e 8018
.org 0x3b490
	strb r0, [r1, #0]	@ 0003b490 0870
.org 0x3b492
	ldr r1, [pc, #32]	@ 0003b492 0849
.org 0x3b494
	adds r0, r4, #0	@ 0003b494 201c
.org 0x3b496
	adds r0, #116	@ 0003b496 7430
.org 0x3b498
	str r1, [r0, #36]	@ 0003b498 4162
.org 0x3b49a
	adds r0, r4, #0	@ 0003b49a 201c
.org 0x3b49c
	bl 0x3b4b8	@ 0003b49c 00f00cf8
.org 0x3b4a0
	pop {r3}	@ 0003b4a0 08bc
.org 0x3b4a2
	mov r8, r3	@ 0003b4a2 9846
.org 0x3b4a4
	pop {r4, r5, r6}	@ 0003b4a4 70bc
.org 0x3b4a6
	pop {r0}	@ 0003b4a6 01bc
.org 0x3b4a8
	bx r0	@ 0003b4a8 0047
