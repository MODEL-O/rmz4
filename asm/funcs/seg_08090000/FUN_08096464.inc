@ FUN_08096464  entry 0x08096464  size 92
.thumb
.org 0x96464
FUN_08096464:
	push {r4, r5, r6, lr}	@ 00096464 70b5
.org 0x96466
	adds r4, r0, #0	@ 00096466 041c
.org 0x96468
	ldr r6, [r4, #40]	@ 00096468 a66a
.org 0x9646a
	ldrb r0, [r6, #10]	@ 0009646a b07a
.org 0x9646c
	lsrs r5, r0, #4	@ 0009646c 0509
.org 0x9646e
	movs r0, #1	@ 0009646e 0120
.org 0x96470
	ands r5, r0	@ 00096470 0540
.org 0x96472
	ldrb r0, [r4, #15]	@ 00096472 e07b
.org 0x96474
	cmp r0, #0	@ 00096474 0028
.org 0x96476
	bne.n 0x9647c	@ 00096476 01d1
.org 0x96478
	adds r0, #1	@ 00096478 0130
.org 0x9647a
	strb r0, [r4, #15]	@ 0009647a e073
.org 0x9647c
	adds r0, r4, #0	@ 0009647c 201c
.org 0x9647e
	bl 0x1cff0	@ 0009647e 86f7b7fd
.org 0x96482
	adds r2, r5, #0	@ 00096482 2a1c
.org 0x96484
	cmp r2, #0	@ 00096484 002a
.org 0x96486
	beq.n 0x96490	@ 00096486 03d0
.org 0x96488
	ldrb r1, [r4, #10]	@ 00096488 a17a
.org 0x9648a
	movs r0, #16	@ 0009648a 1020
.org 0x9648c
	orrs r0, r1	@ 0009648c 0843
.org 0x9648e
	b.n 0x96496	@ 0009648e 02e0
.org 0x96490
	ldrb r1, [r4, #10]	@ 00096490 a17a
.org 0x96492
	movs r0, #239	@ 00096492 ef20
.org 0x96494
	ands r0, r1	@ 00096494 0840
.org 0x96496
	strb r0, [r4, #10]	@ 00096496 a072
.org 0x96498
	adds r1, r2, #0	@ 00096498 111c
.org 0x9649a
	adds r0, r4, #0	@ 0009649a 201c
.org 0x9649c
	adds r0, #76	@ 0009649c 4c30
.org 0x9649e
	strb r1, [r0, #0]	@ 0009649e 0170
.org 0x964a0
	adds r3, r4, #0	@ 000964a0 231c
.org 0x964a2
	adds r3, #74	@ 000964a2 4a33
.org 0x964a4
	lsls r1, r1, #4	@ 000964a4 0901
.org 0x964a6
	ldrb r2, [r3, #0]	@ 000964a6 1a78
.org 0x964a8
	movs r0, #17	@ 000964a8 1120
.org 0x964aa
	negs r0, r0	@ 000964aa 4042
.org 0x964ac
	ands r0, r2	@ 000964ac 1040
.org 0x964ae
	orrs r0, r1	@ 000964ae 0843
.org 0x964b0
	strb r0, [r3, #0]	@ 000964b0 1870
.org 0x964b2
	ldr r0, [r6, #84]	@ 000964b2 706d
.org 0x964b4
	ldr r1, [r6, #88]	@ 000964b4 b16d
.org 0x964b6
	str r0, [r4, #84]	@ 000964b6 6065
.org 0x964b8
	str r1, [r4, #88]	@ 000964b8 a165
.org 0x964ba
	pop {r4, r5, r6}	@ 000964ba 70bc
.org 0x964bc
	pop {r0}	@ 000964bc 01bc
.org 0x964be
	bx r0	@ 000964be 0047
