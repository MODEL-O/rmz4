@ FUN_080a21b4  entry 0x080a21b4  size 90
.thumb
.org 0xa21b4
FUN_080a21b4:
	push {r4, r5, r6, lr}	@ 000a21b4 70b5
.org 0xa21b6
	adds r6, r0, #0	@ 000a21b6 061c
.org 0xa21b8
	lsls r1, r1, #24	@ 000a21b8 0906
.org 0xa21ba
	lsrs r5, r1, #24	@ 000a21ba 0d0e
.org 0xa21bc
	lsls r2, r2, #24	@ 000a21bc 1206
.org 0xa21be
	lsrs r4, r2, #24	@ 000a21be 140e
.org 0xa21c0
	ldr r0, [pc, #76]	@ 000a21c0 1348
.org 0xa21c2
	ldr r0, [r0, #0]	@ 000a21c2 0068
.org 0xa21c4
	bl 0x5500	@ 000a21c4 63f79cf9
.org 0xa21c8
	adds r3, r0, #0	@ 000a21c8 031c
.org 0xa21ca
	cmp r3, #0	@ 000a21ca 002b
.org 0xa21cc
	beq.n 0xa2208	@ 000a21cc 1cd0
.org 0xa21ce
	adds r1, r3, #0	@ 000a21ce 191c
.org 0xa21d0
	adds r1, #37	@ 000a21d0 2531
.org 0xa21d2
	movs r2, #0	@ 000a21d2 0022
.org 0xa21d4
	movs r0, #24	@ 000a21d4 1820
.org 0xa21d6
	strb r0, [r1, #0]	@ 000a21d6 0870
.org 0xa21d8
	ldr r0, [pc, #56]	@ 000a21d8 0e48
.org 0xa21da
	movs r1, #54	@ 000a21da 3621
.org 0xa21dc
	strb r1, [r3, #9]	@ 000a21dc 5972
.org 0xa21de
	adds r0, #216	@ 000a21de d830
.org 0xa21e0
	ldr r0, [r0, #0]	@ 000a21e0 0068
.org 0xa21e2
	ldr r0, [r0, #0]	@ 000a21e2 0068
.org 0xa21e4
	str r0, [r3, #20]	@ 000a21e4 5861
.org 0xa21e6
	movs r0, #0	@ 000a21e6 0020
.org 0xa21e8
	strh r2, [r3, #32]	@ 000a21e8 1a84
.org 0xa21ea
	adds r1, r3, #0	@ 000a21ea 191c
.org 0xa21ec
	adds r1, #34	@ 000a21ec 2231
.org 0xa21ee
	strb r0, [r1, #0]	@ 000a21ee 0870
.org 0xa21f0
	ldrb r1, [r3, #11]	@ 000a21f0 d97a
.org 0xa21f2
	movs r0, #16	@ 000a21f2 1020
.org 0xa21f4
	orrs r0, r1	@ 000a21f4 0843
.org 0xa21f6
	strb r0, [r3, #11]	@ 000a21f6 d872
.org 0xa21f8
	ldrb r0, [r3, #28]	@ 000a21f8 187f
.org 0xa21fa
	strb r0, [r3, #29]	@ 000a21fa 5877
.org 0xa21fc
	ldr r0, [r6, #0]	@ 000a21fc 3068
.org 0xa21fe
	ldr r1, [r6, #4]	@ 000a21fe 7168
.org 0xa2200
	str r0, [r3, #84]	@ 000a2200 5865
.org 0xa2202
	str r1, [r3, #88]	@ 000a2202 9965
.org 0xa2204
	strb r5, [r3, #16]	@ 000a2204 1d74
.org 0xa2206
	strb r4, [r3, #17]	@ 000a2206 5c74
.org 0xa2208
	pop {r4, r5, r6}	@ 000a2208 70bc
.org 0xa220a
	pop {r0}	@ 000a220a 01bc
.org 0xa220c
	bx r0	@ 000a220c 0047
