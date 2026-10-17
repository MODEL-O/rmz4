@ FUN_0809b46c  entry 0x0809b46c  size 112
.thumb
.org 0x9b46c
FUN_0809b46c:
	push {r4, r5, lr}	@ 0009b46c 30b5
.org 0x9b46e
	adds r4, r0, #0	@ 0009b46e 041c
.org 0x9b470
	ldr r1, [r4, #40]	@ 0009b470 a16a
.org 0x9b472
	ldrb r5, [r4, #15]	@ 0009b472 e57b
.org 0x9b474
	cmp r5, #0	@ 0009b474 002d
.org 0x9b476
	bne.n 0x9b4ac	@ 0009b476 19d1
.org 0x9b478
	adds r0, #182	@ 0009b478 b630
.org 0x9b47a
	ldrb r0, [r0, #0]	@ 0009b47a 0078
.org 0x9b47c
	cmp r0, #0	@ 0009b47c 0028
.org 0x9b47e
	beq.n 0x9b488	@ 0009b47e 03d0
.org 0x9b480
	adds r0, r1, #0	@ 0009b480 081c
.org 0x9b482
	adds r1, r4, #0	@ 0009b482 211c
.org 0x9b484
	bl 0x66408	@ 0009b484 caf7c0ff
.org 0x9b488
	adds r0, r4, #0	@ 0009b488 201c
.org 0x9b48a
	adds r0, #140	@ 0009b48a 8c30
.org 0x9b48c
	str r5, [r0, #0]	@ 0009b48c 0560
.org 0x9b48e
	adds r0, #4	@ 0009b48e 0430
.org 0x9b490
	str r5, [r0, #0]	@ 0009b490 0560
.org 0x9b492
	adds r0, #4	@ 0009b492 0430
.org 0x9b494
	strb r5, [r0, #0]	@ 0009b494 0570
.org 0x9b496
	ldrb r1, [r4, #10]	@ 0009b496 a17a
.org 0x9b498
	movs r0, #251	@ 0009b498 fb20
.org 0x9b49a
	ands r0, r1	@ 0009b49a 0840
.org 0x9b49c
	strb r0, [r4, #10]	@ 0009b49c a072
.org 0x9b49e
	ldr r1, [pc, #60]	@ 0009b49e 0f49
.org 0x9b4a0
	adds r0, r4, #0	@ 0009b4a0 201c
.org 0x9b4a2
	bl 0x1cf00	@ 0009b4a2 81f72dfd
.org 0x9b4a6
	ldrb r0, [r4, #15]	@ 0009b4a6 e07b
.org 0x9b4a8
	adds r0, #1	@ 0009b4a8 0130
.org 0x9b4aa
	strb r0, [r4, #15]	@ 0009b4aa e073
.org 0x9b4ac
	adds r0, r4, #0	@ 0009b4ac 201c
.org 0x9b4ae
	bl 0x1cff0	@ 0009b4ae 81f79ffd
.org 0x9b4b2
	adds r0, r4, #0	@ 0009b4b2 201c
.org 0x9b4b4
	adds r0, #115	@ 0009b4b4 7330
.org 0x9b4b6
	ldrb r0, [r0, #0]	@ 0009b4b6 0078
.org 0x9b4b8
	cmp r0, #3	@ 0009b4b8 0328
.org 0x9b4ba
	bne.n 0x9b4d6	@ 0009b4ba 0cd1
.org 0x9b4bc
	ldrb r1, [r4, #10]	@ 0009b4bc a17a
.org 0x9b4be
	movs r0, #254	@ 0009b4be fe20
.org 0x9b4c0
	ands r0, r1	@ 0009b4c0 0840
.org 0x9b4c2
	strb r0, [r4, #10]	@ 0009b4c2 a072
.org 0x9b4c4
	ldr r1, [pc, #24]	@ 0009b4c4 0649
.org 0x9b4c6
	ldrb r0, [r4, #9]	@ 0009b4c6 607a
.org 0x9b4c8
	lsls r0, r0, #2	@ 0009b4c8 8000
.org 0x9b4ca
	adds r0, r0, r1	@ 0009b4ca 4018
.org 0x9b4cc
	movs r1, #4	@ 0009b4cc 0421
.org 0x9b4ce
	str r1, [r4, #12]	@ 0009b4ce e160
.org 0x9b4d0
	ldr r0, [r0, #0]	@ 0009b4d0 0068
.org 0x9b4d2
	ldr r0, [r0, #16]	@ 0009b4d2 0069
.org 0x9b4d4
	str r0, [r4, #20]	@ 0009b4d4 6061
.org 0x9b4d6
	pop {r4, r5}	@ 0009b4d6 30bc
.org 0x9b4d8
	pop {r0}	@ 0009b4d8 01bc
.org 0x9b4da
	bx r0	@ 0009b4da 0047
