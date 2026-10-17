@ FUN_0810e584  entry 0x0810e584  size 94
.thumb
.org 0x10e584
FUN_0810e584:
	push {r4, r5, lr}	@ 0010e584 30b5
.org 0x10e586
	lsls r0, r0, #16	@ 0010e586 0004
.org 0x10e588
	ldr r4, [pc, #52]	@ 0010e588 0d4c
.org 0x10e58a
	ldr r3, [pc, #56]	@ 0010e58a 0e4b
.org 0x10e58c
	lsrs r2, r0, #24	@ 0010e58c 020e
.org 0x10e58e
	lsls r2, r2, #2	@ 0010e58e 9200
.org 0x10e590
	adds r3, r2, r3	@ 0010e590 d318
.org 0x10e592
	ldr r1, [pc, #52]	@ 0010e592 0d49
.org 0x10e594
	adds r2, r2, r1	@ 0010e594 5218
.org 0x10e596
	movs r1, #255	@ 0010e596 ff21
.org 0x10e598
	lsls r1, r1, #16	@ 0010e598 0904
.org 0x10e59a
	ands r1, r0	@ 0010e59a 0140
.org 0x10e59c
	ldr r0, [r2, #0]	@ 0010e59c 1068
.org 0x10e59e
	lsrs r1, r1, #15	@ 0010e59e c90b
.org 0x10e5a0
	adds r1, r1, r0	@ 0010e5a0 0918
.org 0x10e5a2
	ldrh r1, [r1, #0]	@ 0010e5a2 0988
.org 0x10e5a4
	ldr r0, [r3, #0]	@ 0010e5a4 1868
.org 0x10e5a6
	adds r1, r0, r1	@ 0010e5a6 4118
.org 0x10e5a8
	str r1, [r4, #24]	@ 0010e5a8 a161
.org 0x10e5aa
	movs r5, #1	@ 0010e5aa 0125
.org 0x10e5ac
	str r5, [r4, #8]	@ 0010e5ac a560
.org 0x10e5ae
	ldrb r0, [r4, #12]	@ 0010e5ae 207b
.org 0x10e5b0
	cmp r0, #1	@ 0010e5b0 0128
.org 0x10e5b2
	bne.n 0x10e5cc	@ 0010e5b2 0bd1
.org 0x10e5b4
	str r1, [r4, #32]	@ 0010e5b4 2162
.org 0x10e5b6
	strh r5, [r4, #2]	@ 0010e5b6 6580
.org 0x10e5b8
	movs r0, #5	@ 0010e5b8 0520
.org 0x10e5ba
	strb r0, [r4, #13]	@ 0010e5ba 6073
.org 0x10e5bc
	b.n 0x10e5e6	@ 0010e5bc 13e0
.org 0x10e5be
	.byte 0x00	@ 0010e5be data
.org 0x10e5bf
	.byte 0x00	@ 0010e5bf data
.org 0x10e5c0
	.byte 0x88,0xf3,0x02,0x02	@ 0010e5c0 data
.org 0x10e5c4
	.byte 0xcc,0x0c,0x87,0x08	@ 0010e5c4 data
.org 0x10e5c8
	.byte 0x74,0x0c,0x87,0x08	@ 0010e5c8 data
.org 0x10e5cc
	adds r0, r4, #0	@ 0010e5cc 201c
.org 0x10e5ce
	bl 0x10e66c	@ 0010e5ce 00f04df8
.org 0x10e5d2
	adds r0, r4, #0	@ 0010e5d2 201c
.org 0x10e5d4
	bl 0x10e690	@ 0010e5d4 00f05cf8
.org 0x10e5d8
	ldrb r0, [r4, #4]	@ 0010e5d8 2079
.org 0x10e5da
	cmp r0, #0	@ 0010e5da 0028
.org 0x10e5dc
	beq.n 0x10e5e2	@ 0010e5dc 01d0
.org 0x10e5de
	str r5, [r4, #12]	@ 0010e5de e560
.org 0x10e5e0
	b.n 0x10e5e6	@ 0010e5e0 01e0
