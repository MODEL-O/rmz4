@ FUN_080aab48  entry 0x080aab48  size 108
.thumb
.org 0xaab48
FUN_080aab48:
	push {r4, r5, r6, r7, lr}	@ 000aab48 f0b5
.org 0xaab4a
	adds r4, r0, #0	@ 000aab4a 041c
.org 0xaab4c
	adds r7, r1, #0	@ 000aab4c 0f1c
.org 0xaab4e
	lsls r2, r2, #24	@ 000aab4e 1206
.org 0xaab50
	lsrs r6, r2, #24	@ 000aab50 160e
.org 0xaab52
	lsls r3, r3, #24	@ 000aab52 1b06
.org 0xaab54
	lsrs r5, r3, #24	@ 000aab54 1d0e
.org 0xaab56
	ldr r0, [pc, #92]	@ 000aab56 1748
.org 0xaab58
	ldr r0, [r0, #0]	@ 000aab58 0068
.org 0xaab5a
	bl 0x5500	@ 000aab5a 5af7d1fc
.org 0xaab5e
	adds r3, r0, #0	@ 000aab5e 031c
.org 0xaab60
	cmp r3, #0	@ 000aab60 002b
.org 0xaab62
	beq.n 0xaabac	@ 000aab62 23d0
.org 0xaab64
	adds r1, r3, #0	@ 000aab64 191c
.org 0xaab66
	adds r1, #37	@ 000aab66 2531
.org 0xaab68
	movs r2, #0	@ 000aab68 0022
.org 0xaab6a
	movs r0, #24	@ 000aab6a 1820
.org 0xaab6c
	strb r0, [r1, #0]	@ 000aab6c 0870
.org 0xaab6e
	ldr r0, [pc, #72]	@ 000aab6e 1248
.org 0xaab70
	movs r1, #71	@ 000aab70 4721
.org 0xaab72
	strb r1, [r3, #9]	@ 000aab72 5972
.org 0xaab74
	adds r1, #213	@ 000aab74 d531
.org 0xaab76
	adds r0, r0, r1	@ 000aab76 4018
.org 0xaab78
	ldr r0, [r0, #0]	@ 000aab78 0068
.org 0xaab7a
	ldr r0, [r0, #0]	@ 000aab7a 0068
.org 0xaab7c
	str r0, [r3, #20]	@ 000aab7c 5861
.org 0xaab7e
	movs r0, #0	@ 000aab7e 0020
.org 0xaab80
	strh r2, [r3, #32]	@ 000aab80 1a84
.org 0xaab82
	adds r1, r3, #0	@ 000aab82 191c
.org 0xaab84
	adds r1, #34	@ 000aab84 2231
.org 0xaab86
	strb r0, [r1, #0]	@ 000aab86 0870
.org 0xaab88
	ldrb r1, [r3, #11]	@ 000aab88 d97a
.org 0xaab8a
	movs r0, #16	@ 000aab8a 1020
.org 0xaab8c
	orrs r0, r1	@ 000aab8c 0843
.org 0xaab8e
	strb r0, [r3, #11]	@ 000aab8e d872
.org 0xaab90
	ldrb r0, [r3, #28]	@ 000aab90 187f
.org 0xaab92
	strb r0, [r3, #29]	@ 000aab92 5877
.org 0xaab94
	str r4, [r3, #40]	@ 000aab94 9c62
.org 0xaab96
	ldr r0, [r7, #0]	@ 000aab96 3868
.org 0xaab98
	ldr r1, [r7, #4]	@ 000aab98 7968
.org 0xaab9a
	str r0, [r3, #84]	@ 000aab9a 5865
.org 0xaab9c
	str r1, [r3, #88]	@ 000aab9c 9965
.org 0xaab9e
	strb r6, [r3, #16]	@ 000aab9e 1e74
.org 0xaaba0
	strb r5, [r3, #17]	@ 000aaba0 5d74
.org 0xaaba2
	adds r1, r4, #0	@ 000aaba2 211c
.org 0xaaba4
	adds r1, #187	@ 000aaba4 bb31
.org 0xaaba6
	ldrb r0, [r1, #0]	@ 000aaba6 0878
.org 0xaaba8
	adds r0, #1	@ 000aaba8 0130
.org 0xaabaa
	strb r0, [r1, #0]	@ 000aabaa 0870
.org 0xaabac
	adds r0, r3, #0	@ 000aabac 181c
.org 0xaabae
	pop {r4, r5, r6, r7}	@ 000aabae f0bc
.org 0xaabb0
	pop {r1}	@ 000aabb0 02bc
.org 0xaabb2
	bx r1	@ 000aabb2 0847
