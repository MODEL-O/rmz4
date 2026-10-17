@ FUN_080c3490  entry 0x080c3490  size 72
.thumb
.org 0xc3490
FUN_080c3490:
	push {r4, r5, r6, lr}	@ 000c3490 70b5
.org 0xc3492
	adds r5, r0, #0	@ 000c3492 051c
.org 0xc3494
	lsls r1, r1, #24	@ 000c3494 0906
.org 0xc3496
	lsrs r6, r1, #24	@ 000c3496 0e0e
.org 0xc3498
	ldr r0, [pc, #60]	@ 000c3498 0f48
.org 0xc349a
	ldr r0, [r0, #0]	@ 000c349a 0068
.org 0xc349c
	bl 0x5500	@ 000c349c 42f730f8
.org 0xc34a0
	adds r4, r0, #0	@ 000c34a0 041c
.org 0xc34a2
	cmp r4, #0	@ 000c34a2 002c
.org 0xc34a4
	beq.n 0xc34d2	@ 000c34a4 15d0
.org 0xc34a6
	adds r1, r4, #0	@ 000c34a6 211c
.org 0xc34a8
	adds r1, #37	@ 000c34a8 2531
.org 0xc34aa
	movs r3, #0	@ 000c34aa 0023
.org 0xc34ac
	movs r0, #8	@ 000c34ac 0820
.org 0xc34ae
	strb r0, [r1, #0]	@ 000c34ae 0870
.org 0xc34b0
	ldr r1, [pc, #40]	@ 000c34b0 0a49
.org 0xc34b2
	movs r0, #18	@ 000c34b2 1220
.org 0xc34b4
	strb r0, [r4, #9]	@ 000c34b4 6072
.org 0xc34b6
	ldr r0, [r1, #72]	@ 000c34b6 886c
.org 0xc34b8
	ldr r0, [r0, #0]	@ 000c34b8 0068
.org 0xc34ba
	str r0, [r4, #20]	@ 000c34ba 6061
.org 0xc34bc
	movs r2, #0	@ 000c34bc 0022
.org 0xc34be
	strh r3, [r4, #32]	@ 000c34be 2384
.org 0xc34c0
	adds r0, r4, #0	@ 000c34c0 201c
.org 0xc34c2
	adds r0, #34	@ 000c34c2 2230
.org 0xc34c4
	strb r2, [r0, #0]	@ 000c34c4 0270
.org 0xc34c6
	ldr r0, [r5, #0]	@ 000c34c6 2868
.org 0xc34c8
	ldr r1, [r5, #4]	@ 000c34c8 6968
.org 0xc34ca
	str r0, [r4, #84]	@ 000c34ca 6065
.org 0xc34cc
	str r1, [r4, #88]	@ 000c34cc a165
.org 0xc34ce
	strb r2, [r4, #16]	@ 000c34ce 2274
.org 0xc34d0
	strb r6, [r4, #17]	@ 000c34d0 6674
.org 0xc34d2
	pop {r4, r5, r6}	@ 000c34d2 70bc
.org 0xc34d4
	pop {r0}	@ 000c34d4 01bc
.org 0xc34d6
	bx r0	@ 000c34d6 0047
