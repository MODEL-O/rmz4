@ FUN_0808c1a8  entry 0x0808c1a8  size 94
.thumb
.org 0x8c1a8
FUN_0808c1a8:
	push {r4, r5, r6, r7, lr}	@ 0008c1a8 f0b5
.org 0x8c1aa
	adds r6, r0, #0	@ 0008c1aa 061c
.org 0x8c1ac
	adds r7, r1, #0	@ 0008c1ac 0f1c
.org 0x8c1ae
	lsls r2, r2, #24	@ 0008c1ae 1206
.org 0x8c1b0
	lsrs r5, r2, #24	@ 0008c1b0 150e
.org 0x8c1b2
	lsls r3, r3, #24	@ 0008c1b2 1b06
.org 0x8c1b4
	lsrs r4, r3, #24	@ 0008c1b4 1c0e
.org 0x8c1b6
	ldr r0, [pc, #80]	@ 0008c1b6 1448
.org 0x8c1b8
	ldr r0, [r0, #0]	@ 0008c1b8 0068
.org 0x8c1ba
	bl 0x5500	@ 0008c1ba 79f7a1f9
.org 0x8c1be
	adds r3, r0, #0	@ 0008c1be 031c
.org 0x8c1c0
	cmp r3, #0	@ 0008c1c0 002b
.org 0x8c1c2
	beq.n 0x8c1fe	@ 0008c1c2 1cd0
.org 0x8c1c4
	adds r1, r3, #0	@ 0008c1c4 191c
.org 0x8c1c6
	adds r1, #37	@ 0008c1c6 2531
.org 0x8c1c8
	movs r2, #0	@ 0008c1c8 0022
.org 0x8c1ca
	movs r0, #24	@ 0008c1ca 1820
.org 0x8c1cc
	strb r0, [r1, #0]	@ 0008c1cc 0870
.org 0x8c1ce
	ldr r1, [pc, #60]	@ 0008c1ce 0f49
.org 0x8c1d0
	movs r0, #14	@ 0008c1d0 0e20
.org 0x8c1d2
	strb r0, [r3, #9]	@ 0008c1d2 5872
.org 0x8c1d4
	ldr r0, [r1, #56]	@ 0008c1d4 886b
.org 0x8c1d6
	ldr r0, [r0, #0]	@ 0008c1d6 0068
.org 0x8c1d8
	str r0, [r3, #20]	@ 0008c1d8 5861
.org 0x8c1da
	movs r0, #0	@ 0008c1da 0020
.org 0x8c1dc
	strh r2, [r3, #32]	@ 0008c1dc 1a84
.org 0x8c1de
	adds r1, r3, #0	@ 0008c1de 191c
.org 0x8c1e0
	adds r1, #34	@ 0008c1e0 2231
.org 0x8c1e2
	strb r0, [r1, #0]	@ 0008c1e2 0870
.org 0x8c1e4
	ldrb r1, [r3, #11]	@ 0008c1e4 d97a
.org 0x8c1e6
	movs r0, #16	@ 0008c1e6 1020
.org 0x8c1e8
	orrs r0, r1	@ 0008c1e8 0843
.org 0x8c1ea
	strb r0, [r3, #11]	@ 0008c1ea d872
.org 0x8c1ec
	ldrb r0, [r3, #28]	@ 0008c1ec 187f
.org 0x8c1ee
	strb r0, [r3, #29]	@ 0008c1ee 5877
.org 0x8c1f0
	str r6, [r3, #40]	@ 0008c1f0 9e62
.org 0x8c1f2
	ldr r0, [r7, #0]	@ 0008c1f2 3868
.org 0x8c1f4
	ldr r1, [r7, #4]	@ 0008c1f4 7968
.org 0x8c1f6
	str r0, [r3, #84]	@ 0008c1f6 5865
.org 0x8c1f8
	str r1, [r3, #88]	@ 0008c1f8 9965
.org 0x8c1fa
	strb r5, [r3, #16]	@ 0008c1fa 1d74
.org 0x8c1fc
	strb r4, [r3, #17]	@ 0008c1fc 5c74
.org 0x8c1fe
	adds r0, r3, #0	@ 0008c1fe 181c
.org 0x8c200
	pop {r4, r5, r6, r7}	@ 0008c200 f0bc
.org 0x8c202
	pop {r1}	@ 0008c202 02bc
.org 0x8c204
	bx r1	@ 0008c204 0847
