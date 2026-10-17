@ FUN_080bf58c  entry 0x080bf58c  size 82
.thumb
.org 0xbf58c
FUN_080bf58c:
	push {r4, r5, r6, r7, lr}	@ 000bf58c f0b5
.org 0xbf58e
	adds r6, r0, #0	@ 000bf58e 061c
.org 0xbf590
	adds r7, r1, #0	@ 000bf590 0f1c
.org 0xbf592
	lsls r2, r2, #24	@ 000bf592 1206
.org 0xbf594
	lsrs r5, r2, #24	@ 000bf594 150e
.org 0xbf596
	lsls r3, r3, #24	@ 000bf596 1b06
.org 0xbf598
	lsrs r4, r3, #24	@ 000bf598 1c0e
.org 0xbf59a
	ldr r0, [pc, #68]	@ 000bf59a 1148
.org 0xbf59c
	ldr r0, [r0, #0]	@ 000bf59c 0068
.org 0xbf59e
	bl 0x5500	@ 000bf59e 45f7afff
.org 0xbf5a2
	adds r3, r0, #0	@ 000bf5a2 031c
.org 0xbf5a4
	cmp r3, #0	@ 000bf5a4 002b
.org 0xbf5a6
	beq.n 0xbf5d6	@ 000bf5a6 16d0
.org 0xbf5a8
	adds r1, r3, #0	@ 000bf5a8 191c
.org 0xbf5aa
	adds r1, #37	@ 000bf5aa 2531
.org 0xbf5ac
	movs r2, #0	@ 000bf5ac 0022
.org 0xbf5ae
	movs r0, #8	@ 000bf5ae 0820
.org 0xbf5b0
	strb r0, [r1, #0]	@ 000bf5b0 0870
.org 0xbf5b2
	ldr r1, [pc, #48]	@ 000bf5b2 0c49
.org 0xbf5b4
	movs r0, #7	@ 000bf5b4 0720
.org 0xbf5b6
	strb r0, [r3, #9]	@ 000bf5b6 5872
.org 0xbf5b8
	ldr r0, [r1, #28]	@ 000bf5b8 c869
.org 0xbf5ba
	ldr r0, [r0, #0]	@ 000bf5ba 0068
.org 0xbf5bc
	str r0, [r3, #20]	@ 000bf5bc 5861
.org 0xbf5be
	movs r0, #0	@ 000bf5be 0020
.org 0xbf5c0
	strh r2, [r3, #32]	@ 000bf5c0 1a84
.org 0xbf5c2
	adds r1, r3, #0	@ 000bf5c2 191c
.org 0xbf5c4
	adds r1, #34	@ 000bf5c4 2231
.org 0xbf5c6
	strb r0, [r1, #0]	@ 000bf5c6 0870
.org 0xbf5c8
	str r6, [r3, #40]	@ 000bf5c8 9e62
.org 0xbf5ca
	ldr r0, [r7, #0]	@ 000bf5ca 3868
.org 0xbf5cc
	ldr r1, [r7, #4]	@ 000bf5cc 7968
.org 0xbf5ce
	str r0, [r3, #84]	@ 000bf5ce 5865
.org 0xbf5d0
	str r1, [r3, #88]	@ 000bf5d0 9965
.org 0xbf5d2
	strb r5, [r3, #16]	@ 000bf5d2 1d74
.org 0xbf5d4
	strb r4, [r3, #17]	@ 000bf5d4 5c74
.org 0xbf5d6
	adds r0, r3, #0	@ 000bf5d6 181c
.org 0xbf5d8
	pop {r4, r5, r6, r7}	@ 000bf5d8 f0bc
.org 0xbf5da
	pop {r1}	@ 000bf5da 02bc
.org 0xbf5dc
	bx r1	@ 000bf5dc 0847
