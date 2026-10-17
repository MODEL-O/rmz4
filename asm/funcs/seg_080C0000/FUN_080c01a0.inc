@ FUN_080c01a0  entry 0x080c01a0  size 82
.thumb
.org 0xc01a0
FUN_080c01a0:
	push {r4, r5, r6, r7, lr}	@ 000c01a0 f0b5
.org 0xc01a2
	adds r6, r0, #0	@ 000c01a2 061c
.org 0xc01a4
	adds r7, r1, #0	@ 000c01a4 0f1c
.org 0xc01a6
	lsls r2, r2, #24	@ 000c01a6 1206
.org 0xc01a8
	lsrs r5, r2, #24	@ 000c01a8 150e
.org 0xc01aa
	lsls r3, r3, #24	@ 000c01aa 1b06
.org 0xc01ac
	lsrs r4, r3, #24	@ 000c01ac 1c0e
.org 0xc01ae
	ldr r0, [pc, #68]	@ 000c01ae 1148
.org 0xc01b0
	ldr r0, [r0, #0]	@ 000c01b0 0068
.org 0xc01b2
	bl 0x5500	@ 000c01b2 45f7a5f9
.org 0xc01b6
	adds r3, r0, #0	@ 000c01b6 031c
.org 0xc01b8
	cmp r3, #0	@ 000c01b8 002b
.org 0xc01ba
	beq.n 0xc01ea	@ 000c01ba 16d0
.org 0xc01bc
	adds r1, r3, #0	@ 000c01bc 191c
.org 0xc01be
	adds r1, #37	@ 000c01be 2531
.org 0xc01c0
	movs r2, #0	@ 000c01c0 0022
.org 0xc01c2
	movs r0, #8	@ 000c01c2 0820
.org 0xc01c4
	strb r0, [r1, #0]	@ 000c01c4 0870
.org 0xc01c6
	ldr r1, [pc, #48]	@ 000c01c6 0c49
.org 0xc01c8
	movs r0, #10	@ 000c01c8 0a20
.org 0xc01ca
	strb r0, [r3, #9]	@ 000c01ca 5872
.org 0xc01cc
	ldr r0, [r1, #40]	@ 000c01cc 886a
.org 0xc01ce
	ldr r0, [r0, #0]	@ 000c01ce 0068
.org 0xc01d0
	str r0, [r3, #20]	@ 000c01d0 5861
.org 0xc01d2
	movs r0, #0	@ 000c01d2 0020
.org 0xc01d4
	strh r2, [r3, #32]	@ 000c01d4 1a84
.org 0xc01d6
	adds r1, r3, #0	@ 000c01d6 191c
.org 0xc01d8
	adds r1, #34	@ 000c01d8 2231
.org 0xc01da
	strb r0, [r1, #0]	@ 000c01da 0870
.org 0xc01dc
	str r6, [r3, #40]	@ 000c01dc 9e62
.org 0xc01de
	ldr r0, [r7, #0]	@ 000c01de 3868
.org 0xc01e0
	ldr r1, [r7, #4]	@ 000c01e0 7968
.org 0xc01e2
	str r0, [r3, #84]	@ 000c01e2 5865
.org 0xc01e4
	str r1, [r3, #88]	@ 000c01e4 9965
.org 0xc01e6
	strb r5, [r3, #16]	@ 000c01e6 1d74
.org 0xc01e8
	strb r4, [r3, #17]	@ 000c01e8 5c74
.org 0xc01ea
	adds r0, r3, #0	@ 000c01ea 181c
.org 0xc01ec
	pop {r4, r5, r6, r7}	@ 000c01ec f0bc
.org 0xc01ee
	pop {r1}	@ 000c01ee 02bc
.org 0xc01f0
	bx r1	@ 000c01f0 0847
