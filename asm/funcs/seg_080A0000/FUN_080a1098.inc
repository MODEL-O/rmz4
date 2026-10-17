@ FUN_080a1098  entry 0x080a1098  size 110
.thumb
.org 0xa1098
FUN_080a1098:
	push {r4, r5, r6, r7, lr}	@ 000a1098 f0b5
.org 0xa109a
	adds r6, r0, #0	@ 000a109a 061c
.org 0xa109c
	adds r7, r1, #0	@ 000a109c 0f1c
.org 0xa109e
	lsls r2, r2, #24	@ 000a109e 1206
.org 0xa10a0
	lsrs r4, r2, #24	@ 000a10a0 140e
.org 0xa10a2
	lsls r3, r3, #24	@ 000a10a2 1b06
.org 0xa10a4
	lsrs r5, r3, #24	@ 000a10a4 1d0e
.org 0xa10a6
	ldr r0, [pc, #96]	@ 000a10a6 1848
.org 0xa10a8
	ldr r0, [r0, #0]	@ 000a10a8 0068
.org 0xa10aa
	bl 0x5500	@ 000a10aa 64f729fa
.org 0xa10ae
	adds r3, r0, #0	@ 000a10ae 031c
.org 0xa10b0
	cmp r3, #0	@ 000a10b0 002b
.org 0xa10b2
	beq.n 0xa10fe	@ 000a10b2 24d0
.org 0xa10b4
	adds r1, r3, #0	@ 000a10b4 191c
.org 0xa10b6
	adds r1, #37	@ 000a10b6 2531
.org 0xa10b8
	movs r2, #0	@ 000a10b8 0022
.org 0xa10ba
	movs r0, #24	@ 000a10ba 1820
.org 0xa10bc
	strb r0, [r1, #0]	@ 000a10bc 0870
.org 0xa10be
	ldr r0, [pc, #76]	@ 000a10be 1348
.org 0xa10c0
	movs r1, #52	@ 000a10c0 3421
.org 0xa10c2
	strb r1, [r3, #9]	@ 000a10c2 5972
.org 0xa10c4
	adds r0, #208	@ 000a10c4 d030
.org 0xa10c6
	ldr r0, [r0, #0]	@ 000a10c6 0068
.org 0xa10c8
	ldr r0, [r0, #0]	@ 000a10c8 0068
.org 0xa10ca
	str r0, [r3, #20]	@ 000a10ca 5861
.org 0xa10cc
	movs r0, #0	@ 000a10cc 0020
.org 0xa10ce
	strh r2, [r3, #32]	@ 000a10ce 1a84
.org 0xa10d0
	adds r1, r3, #0	@ 000a10d0 191c
.org 0xa10d2
	adds r1, #34	@ 000a10d2 2231
.org 0xa10d4
	strb r0, [r1, #0]	@ 000a10d4 0870
.org 0xa10d6
	ldrb r1, [r3, #11]	@ 000a10d6 d97a
.org 0xa10d8
	movs r0, #16	@ 000a10d8 1020
.org 0xa10da
	orrs r0, r1	@ 000a10da 0843
.org 0xa10dc
	strb r0, [r3, #11]	@ 000a10dc d872
.org 0xa10de
	ldrb r0, [r3, #28]	@ 000a10de 187f
.org 0xa10e0
	strb r0, [r3, #29]	@ 000a10e0 5877
.org 0xa10e2
	str r6, [r3, #40]	@ 000a10e2 9e62
.org 0xa10e4
	ldr r0, [r7, #0]	@ 000a10e4 3868
.org 0xa10e6
	ldr r1, [r7, #4]	@ 000a10e6 7968
.org 0xa10e8
	str r0, [r3, #84]	@ 000a10e8 5865
.org 0xa10ea
	str r1, [r3, #88]	@ 000a10ea 9965
.org 0xa10ec
	strb r4, [r3, #16]	@ 000a10ec 1c74
.org 0xa10ee
	strb r5, [r3, #17]	@ 000a10ee 5d74
.org 0xa10f0
	cmp r4, #1	@ 000a10f0 012c
.org 0xa10f2
	bne.n 0xa10fe	@ 000a10f2 04d1
.org 0xa10f4
	ldr r1, [pc, #24]	@ 000a10f4 0649
.org 0xa10f6
	adds r1, #38	@ 000a10f6 2631
.org 0xa10f8
	ldrb r0, [r1, #0]	@ 000a10f8 0878
.org 0xa10fa
	adds r0, #1	@ 000a10fa 0130
.org 0xa10fc
	strb r0, [r1, #0]	@ 000a10fc 0870
.org 0xa10fe
	adds r0, r3, #0	@ 000a10fe 181c
.org 0xa1100
	pop {r4, r5, r6, r7}	@ 000a1100 f0bc
.org 0xa1102
	pop {r1}	@ 000a1102 02bc
.org 0xa1104
	bx r1	@ 000a1104 0847
