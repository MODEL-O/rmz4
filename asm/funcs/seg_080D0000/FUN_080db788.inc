@ FUN_080db788  entry 0x080db788  size 90
.thumb
.org 0xdb788
FUN_080db788:
	push {r4, r5, r6, r7, lr}	@ 000db788 f0b5
.org 0xdb78a
	adds r7, r0, #0	@ 000db78a 071c
.org 0xdb78c
	lsls r1, r1, #24	@ 000db78c 0906
.org 0xdb78e
	lsrs r6, r1, #24	@ 000db78e 0e0e
.org 0xdb790
	lsls r2, r2, #24	@ 000db790 1206
.org 0xdb792
	lsrs r4, r2, #24	@ 000db792 140e
.org 0xdb794
	lsls r3, r3, #24	@ 000db794 1b06
.org 0xdb796
	lsrs r5, r3, #24	@ 000db796 1d0e
.org 0xdb798
	ldr r0, [pc, #72]	@ 000db798 1248
.org 0xdb79a
	ldr r0, [r0, #0]	@ 000db79a 0068
.org 0xdb79c
	bl 0x5500	@ 000db79c 29f7b0fe
.org 0xdb7a0
	adds r3, r0, #0	@ 000db7a0 031c
.org 0xdb7a2
	cmp r3, #0	@ 000db7a2 002b
.org 0xdb7a4
	beq.n 0xdb7da	@ 000db7a4 19d0
.org 0xdb7a6
	adds r1, r3, #0	@ 000db7a6 191c
.org 0xdb7a8
	adds r1, #37	@ 000db7a8 2531
.org 0xdb7aa
	movs r2, #0	@ 000db7aa 0022
.org 0xdb7ac
	movs r0, #1	@ 000db7ac 0120
.org 0xdb7ae
	strb r0, [r1, #0]	@ 000db7ae 0870
.org 0xdb7b0
	ldr r0, [pc, #52]	@ 000db7b0 0d48
.org 0xdb7b2
	movs r1, #41	@ 000db7b2 2921
.org 0xdb7b4
	strb r1, [r3, #9]	@ 000db7b4 5972
.org 0xdb7b6
	adds r0, #164	@ 000db7b6 a430
.org 0xdb7b8
	ldr r0, [r0, #0]	@ 000db7b8 0068
.org 0xdb7ba
	ldr r0, [r0, #0]	@ 000db7ba 0068
.org 0xdb7bc
	str r0, [r3, #20]	@ 000db7bc 5861
.org 0xdb7be
	movs r0, #0	@ 000db7be 0020
.org 0xdb7c0
	strh r2, [r3, #32]	@ 000db7c0 1a84
.org 0xdb7c2
	adds r1, r3, #0	@ 000db7c2 191c
.org 0xdb7c4
	adds r1, #34	@ 000db7c4 2231
.org 0xdb7c6
	strb r0, [r1, #0]	@ 000db7c6 0870
.org 0xdb7c8
	ldr r0, [r7, #0]	@ 000db7c8 3868
.org 0xdb7ca
	ldr r1, [r7, #4]	@ 000db7ca 7968
.org 0xdb7cc
	str r0, [r3, #84]	@ 000db7cc 5865
.org 0xdb7ce
	str r1, [r3, #88]	@ 000db7ce 9965
.org 0xdb7d0
	strb r6, [r3, #16]	@ 000db7d0 1e74
.org 0xdb7d2
	strb r4, [r3, #17]	@ 000db7d2 5c74
.org 0xdb7d4
	adds r0, r3, #0	@ 000db7d4 181c
.org 0xdb7d6
	adds r0, #116	@ 000db7d6 7430
.org 0xdb7d8
	strb r5, [r0, #0]	@ 000db7d8 0570
.org 0xdb7da
	adds r0, r3, #0	@ 000db7da 181c
.org 0xdb7dc
	pop {r4, r5, r6, r7}	@ 000db7dc f0bc
.org 0xdb7de
	pop {r1}	@ 000db7de 02bc
.org 0xdb7e0
	bx r1	@ 000db7e0 0847
