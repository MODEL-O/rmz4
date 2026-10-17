@ FUN_080c4480  entry 0x080c4480  size 84
.thumb
.org 0xc4480
FUN_080c4480:
	push {r4, r5, r6, r7, lr}	@ 000c4480 f0b5
.org 0xc4482
	adds r5, r0, #0	@ 000c4482 051c
.org 0xc4484
	adds r6, r1, #0	@ 000c4484 0e1c
.org 0xc4486
	lsls r2, r2, #24	@ 000c4486 1206
.org 0xc4488
	lsrs r7, r2, #24	@ 000c4488 170e
.org 0xc448a
	ldr r0, [pc, #72]	@ 000c448a 1248
.org 0xc448c
	ldr r0, [r0, #0]	@ 000c448c 0068
.org 0xc448e
	bl 0x5500	@ 000c448e 41f737f8
.org 0xc4492
	adds r4, r0, #0	@ 000c4492 041c
.org 0xc4494
	cmp r4, #0	@ 000c4494 002c
.org 0xc4496
	beq.n 0xc44cc	@ 000c4496 19d0
.org 0xc4498
	adds r1, r4, #0	@ 000c4498 211c
.org 0xc449a
	adds r1, #37	@ 000c449a 2531
.org 0xc449c
	movs r3, #0	@ 000c449c 0023
.org 0xc449e
	movs r0, #8	@ 000c449e 0820
.org 0xc44a0
	strb r0, [r1, #0]	@ 000c44a0 0870
.org 0xc44a2
	ldr r1, [pc, #52]	@ 000c44a2 0d49
.org 0xc44a4
	movs r0, #22	@ 000c44a4 1620
.org 0xc44a6
	strb r0, [r4, #9]	@ 000c44a6 6072
.org 0xc44a8
	ldr r0, [r1, #88]	@ 000c44a8 886d
.org 0xc44aa
	ldr r0, [r0, #0]	@ 000c44aa 0068
.org 0xc44ac
	str r0, [r4, #20]	@ 000c44ac 6061
.org 0xc44ae
	movs r2, #0	@ 000c44ae 0022
.org 0xc44b0
	strh r3, [r4, #32]	@ 000c44b0 2384
.org 0xc44b2
	adds r0, r4, #0	@ 000c44b2 201c
.org 0xc44b4
	adds r0, #34	@ 000c44b4 2230
.org 0xc44b6
	strb r2, [r0, #0]	@ 000c44b6 0270
.org 0xc44b8
	str r5, [r4, #40]	@ 000c44b8 a562
.org 0xc44ba
	ldr r0, [r6, #0]	@ 000c44ba 3068
.org 0xc44bc
	ldr r1, [r6, #4]	@ 000c44bc 7168
.org 0xc44be
	str r0, [r4, #84]	@ 000c44be 6065
.org 0xc44c0
	str r1, [r4, #88]	@ 000c44c0 a165
.org 0xc44c2
	strb r2, [r4, #16]	@ 000c44c2 2274
.org 0xc44c4
	strb r7, [r4, #17]	@ 000c44c4 6774
.org 0xc44c6
	adds r0, r4, #0	@ 000c44c6 201c
.org 0xc44c8
	adds r0, #185	@ 000c44c8 b930
.org 0xc44ca
	strb r2, [r0, #0]	@ 000c44ca 0270
.org 0xc44cc
	adds r0, r4, #0	@ 000c44cc 201c
.org 0xc44ce
	pop {r4, r5, r6, r7}	@ 000c44ce f0bc
.org 0xc44d0
	pop {r1}	@ 000c44d0 02bc
.org 0xc44d2
	bx r1	@ 000c44d2 0847
