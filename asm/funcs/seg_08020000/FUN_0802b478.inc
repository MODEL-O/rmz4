@ FUN_0802b478  entry 0x0802b478  size 74
.thumb
.org 0x2b478
FUN_0802b478:
	push {r4, r5, r6, lr}	@ 0002b478 70b5
.org 0x2b47a
	ldr r6, [pc, #72]	@ 0002b47a 124e
.org 0x2b47c
	ldr r0, [r6, #0]	@ 0002b47c 3068
.org 0x2b47e
	bl 0x54cc	@ 0002b47e daf725f8
.org 0x2b482
	adds r5, r0, #0	@ 0002b482 051c
.org 0x2b484
	cmp r5, #0	@ 0002b484 002d
.org 0x2b486
	beq.n 0x2b4a0	@ 0002b486 0bd0
.org 0x2b488
	ldr r0, [pc, #60]	@ 0002b488 0f48
.org 0x2b48a
	ldr r0, [r0, #0]	@ 0002b48a 0068
.org 0x2b48c
	cmp r5, r0	@ 0002b48c 8542
.org 0x2b48e
	beq.n 0x2b4a0	@ 0002b48e 07d0
.org 0x2b490
	bl 0x2b478	@ 0002b490 fff7f2ff
.org 0x2b494
	adds r4, r0, #0	@ 0002b494 041c
.org 0x2b496
	ldr r0, [r6, #0]	@ 0002b496 3068
.org 0x2b498
	adds r1, r5, #0	@ 0002b498 291c
.org 0x2b49a
	bl 0x55c8	@ 0002b49a daf795f8
.org 0x2b49e
	adds r5, r4, #0	@ 0002b49e 251c
.org 0x2b4a0
	movs r0, #0	@ 0002b4a0 0020
.org 0x2b4a2
	strb r0, [r5, #16]	@ 0002b4a2 2874
.org 0x2b4a4
	movs r1, #0	@ 0002b4a4 0021
.org 0x2b4a6
	strh r0, [r5, #32]	@ 0002b4a6 2884
.org 0x2b4a8
	adds r0, r5, #0	@ 0002b4a8 281c
.org 0x2b4aa
	adds r0, #34	@ 0002b4aa 2230
.org 0x2b4ac
	strb r1, [r0, #0]	@ 0002b4ac 0170
.org 0x2b4ae
	ldrb r1, [r5, #11]	@ 0002b4ae e97a
.org 0x2b4b0
	movs r0, #16	@ 0002b4b0 1020
.org 0x2b4b2
	orrs r0, r1	@ 0002b4b2 0843
.org 0x2b4b4
	strb r0, [r5, #11]	@ 0002b4b4 e872
.org 0x2b4b6
	ldrb r0, [r5, #28]	@ 0002b4b6 287f
.org 0x2b4b8
	strb r0, [r5, #29]	@ 0002b4b8 6877
.org 0x2b4ba
	adds r0, r5, #0	@ 0002b4ba 281c
.org 0x2b4bc
	pop {r4, r5, r6}	@ 0002b4bc 70bc
.org 0x2b4be
	pop {r1}	@ 0002b4be 02bc
.org 0x2b4c0
	bx r1	@ 0002b4c0 0847
