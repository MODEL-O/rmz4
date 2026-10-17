@ FUN_080c6480  entry 0x080c6480  size 120
.thumb
.org 0xc6480
FUN_080c6480:
	push {r4, r5, r6, lr}	@ 000c6480 70b5
.org 0xc6482
	adds r5, r0, #0	@ 000c6482 051c
.org 0xc6484
	adds r6, r1, #0	@ 000c6484 0e1c
.org 0xc6486
	lsls r2, r2, #24	@ 000c6486 1206
.org 0xc6488
	lsrs r4, r2, #24	@ 000c6488 140e
.org 0xc648a
	ldr r0, [pc, #68]	@ 000c648a 1148
.org 0xc648c
	ldr r0, [r0, #0]	@ 000c648c 0068
.org 0xc648e
	bl 0x5500	@ 000c648e 3ff737f8
.org 0xc6492
	adds r3, r0, #0	@ 000c6492 031c
.org 0xc6494
	cmp r3, #0	@ 000c6494 002b
.org 0xc6496
	beq.n 0xc64fa	@ 000c6496 30d0
.org 0xc6498
	adds r1, r3, #0	@ 000c6498 191c
.org 0xc649a
	adds r1, #37	@ 000c649a 2531
.org 0xc649c
	movs r2, #0	@ 000c649c 0022
.org 0xc649e
	movs r0, #8	@ 000c649e 0820
.org 0xc64a0
	strb r0, [r1, #0]	@ 000c64a0 0870
.org 0xc64a2
	ldr r1, [pc, #48]	@ 000c64a2 0c49
.org 0xc64a4
	movs r0, #26	@ 000c64a4 1a20
.org 0xc64a6
	strb r0, [r3, #9]	@ 000c64a6 5872
.org 0xc64a8
	ldr r0, [r1, #104]	@ 000c64a8 886e
.org 0xc64aa
	ldr r0, [r0, #0]	@ 000c64aa 0068
.org 0xc64ac
	str r0, [r3, #20]	@ 000c64ac 5861
.org 0xc64ae
	movs r0, #0	@ 000c64ae 0020
.org 0xc64b0
	strh r2, [r3, #32]	@ 000c64b0 1a84
.org 0xc64b2
	adds r1, r3, #0	@ 000c64b2 191c
.org 0xc64b4
	adds r1, #34	@ 000c64b4 2231
.org 0xc64b6
	strb r0, [r1, #0]	@ 000c64b6 0870
.org 0xc64b8
	str r5, [r3, #84]	@ 000c64b8 5d65
.org 0xc64ba
	str r6, [r3, #88]	@ 000c64ba 9e65
.org 0xc64bc
	movs r0, #6	@ 000c64bc 0620
.org 0xc64be
	strb r0, [r3, #16]	@ 000c64be 1874
.org 0xc64c0
	strb r4, [r3, #17]	@ 000c64c0 5c74
.org 0xc64c2
	adds r2, r4, #0	@ 000c64c2 221c
.org 0xc64c4
	cmp r2, #0	@ 000c64c4 002a
.org 0xc64c6
	beq.n 0xc64d8	@ 000c64c6 07d0
.org 0xc64c8
	ldrb r0, [r3, #10]	@ 000c64c8 987a
.org 0xc64ca
	movs r1, #16	@ 000c64ca 1021
.org 0xc64cc
	orrs r0, r1	@ 000c64cc 0843
.org 0xc64ce
	b.n 0xc64de	@ 000c64ce 06e0
.org 0xc64d0
	.byte 0x94,0xed,0x02,0x02	@ 000c64d0 data
.org 0xc64d4
	.byte 0xf4,0x49,0x86,0x08	@ 000c64d4 data
.org 0xc64d8
	ldrb r1, [r3, #10]	@ 000c64d8 997a
.org 0xc64da
	movs r0, #239	@ 000c64da ef20
.org 0xc64dc
	ands r0, r1	@ 000c64dc 0840
.org 0xc64de
	strb r0, [r3, #10]	@ 000c64de 9872
.org 0xc64e0
	movs r1, #1	@ 000c64e0 0121
.org 0xc64e2
	ands r1, r2	@ 000c64e2 1140
.org 0xc64e4
	adds r0, r3, #0	@ 000c64e4 181c
.org 0xc64e6
	adds r0, #76	@ 000c64e6 4c30
.org 0xc64e8
	strb r1, [r0, #0]	@ 000c64e8 0170
.org 0xc64ea
	adds r3, #74	@ 000c64ea 4a33
.org 0xc64ec
	lsls r1, r1, #4	@ 000c64ec 0901
.org 0xc64ee
	ldrb r2, [r3, #0]	@ 000c64ee 1a78
.org 0xc64f0
	movs r0, #17	@ 000c64f0 1120
.org 0xc64f2
	negs r0, r0	@ 000c64f2 4042
.org 0xc64f4
	ands r0, r2	@ 000c64f4 1040
.org 0xc64f6
	orrs r0, r1	@ 000c64f6 0843
