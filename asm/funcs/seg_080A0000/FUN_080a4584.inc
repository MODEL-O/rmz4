@ FUN_080a4584  entry 0x080a4584  size 92
.thumb
.org 0xa4584
FUN_080a4584:
	push {r4, r5, r6, lr}	@ 000a4584 70b5
.org 0xa4586
	adds r6, r0, #0	@ 000a4586 061c
.org 0xa4588
	lsls r1, r1, #24	@ 000a4588 0906
.org 0xa458a
	lsrs r5, r1, #24	@ 000a458a 0d0e
.org 0xa458c
	lsls r2, r2, #24	@ 000a458c 1206
.org 0xa458e
	lsrs r4, r2, #24	@ 000a458e 140e
.org 0xa4590
	ldr r0, [pc, #76]	@ 000a4590 1348
.org 0xa4592
	ldr r0, [r0, #0]	@ 000a4592 0068
.org 0xa4594
	bl 0x5500	@ 000a4594 60f7b4ff
.org 0xa4598
	adds r3, r0, #0	@ 000a4598 031c
.org 0xa459a
	cmp r3, #0	@ 000a459a 002b
.org 0xa459c
	beq.n 0xa45d8	@ 000a459c 1cd0
.org 0xa459e
	adds r1, r3, #0	@ 000a459e 191c
.org 0xa45a0
	adds r1, #37	@ 000a45a0 2531
.org 0xa45a2
	movs r2, #0	@ 000a45a2 0022
.org 0xa45a4
	movs r0, #24	@ 000a45a4 1820
.org 0xa45a6
	strb r0, [r1, #0]	@ 000a45a6 0870
.org 0xa45a8
	ldr r0, [pc, #56]	@ 000a45a8 0e48
.org 0xa45aa
	movs r1, #59	@ 000a45aa 3b21
.org 0xa45ac
	strb r1, [r3, #9]	@ 000a45ac 5972
.org 0xa45ae
	adds r0, #236	@ 000a45ae ec30
.org 0xa45b0
	ldr r0, [r0, #0]	@ 000a45b0 0068
.org 0xa45b2
	ldr r0, [r0, #0]	@ 000a45b2 0068
.org 0xa45b4
	str r0, [r3, #20]	@ 000a45b4 5861
.org 0xa45b6
	movs r0, #0	@ 000a45b6 0020
.org 0xa45b8
	strh r2, [r3, #32]	@ 000a45b8 1a84
.org 0xa45ba
	adds r1, r3, #0	@ 000a45ba 191c
.org 0xa45bc
	adds r1, #34	@ 000a45bc 2231
.org 0xa45be
	strb r0, [r1, #0]	@ 000a45be 0870
.org 0xa45c0
	ldrb r1, [r3, #11]	@ 000a45c0 d97a
.org 0xa45c2
	movs r0, #16	@ 000a45c2 1020
.org 0xa45c4
	orrs r0, r1	@ 000a45c4 0843
.org 0xa45c6
	strb r0, [r3, #11]	@ 000a45c6 d872
.org 0xa45c8
	ldrb r0, [r3, #28]	@ 000a45c8 187f
.org 0xa45ca
	strb r0, [r3, #29]	@ 000a45ca 5877
.org 0xa45cc
	ldr r0, [r6, #0]	@ 000a45cc 3068
.org 0xa45ce
	ldr r1, [r6, #4]	@ 000a45ce 7168
.org 0xa45d0
	str r0, [r3, #84]	@ 000a45d0 5865
.org 0xa45d2
	str r1, [r3, #88]	@ 000a45d2 9965
.org 0xa45d4
	strb r5, [r3, #16]	@ 000a45d4 1d74
.org 0xa45d6
	strb r4, [r3, #17]	@ 000a45d6 5c74
.org 0xa45d8
	adds r0, r3, #0	@ 000a45d8 181c
.org 0xa45da
	pop {r4, r5, r6}	@ 000a45da 70bc
.org 0xa45dc
	pop {r1}	@ 000a45dc 02bc
.org 0xa45de
	bx r1	@ 000a45de 0847
