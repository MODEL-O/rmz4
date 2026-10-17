@ FUN_080d5074  entry 0x080d5074  size 92
.thumb
.org 0xd5074
FUN_080d5074:
	push {r4, r5, r6, lr}	@ 000d5074 70b5
.org 0xd5076
	adds r6, r0, #0	@ 000d5076 061c
.org 0xd5078
	lsls r1, r1, #24	@ 000d5078 0906
.org 0xd507a
	lsrs r5, r1, #24	@ 000d507a 0d0e
.org 0xd507c
	lsls r2, r2, #24	@ 000d507c 1206
.org 0xd507e
	lsrs r4, r2, #24	@ 000d507e 140e
.org 0xd5080
	ldr r0, [pc, #76]	@ 000d5080 1348
.org 0xd5082
	ldr r0, [r0, #0]	@ 000d5082 0068
.org 0xd5084
	bl 0x5500	@ 000d5084 30f73cfa
.org 0xd5088
	adds r3, r0, #0	@ 000d5088 031c
.org 0xd508a
	cmp r3, #0	@ 000d508a 002b
.org 0xd508c
	beq.n 0xd50c8	@ 000d508c 1cd0
.org 0xd508e
	adds r1, r3, #0	@ 000d508e 191c
.org 0xd5090
	adds r1, #37	@ 000d5090 2531
.org 0xd5092
	movs r2, #0	@ 000d5092 0022
.org 0xd5094
	movs r0, #1	@ 000d5094 0120
.org 0xd5096
	strb r0, [r1, #0]	@ 000d5096 0870
.org 0xd5098
	ldr r1, [pc, #56]	@ 000d5098 0e49
.org 0xd509a
	movs r0, #17	@ 000d509a 1120
.org 0xd509c
	strb r0, [r3, #9]	@ 000d509c 5872
.org 0xd509e
	ldr r0, [r1, #68]	@ 000d509e 486c
.org 0xd50a0
	ldr r0, [r0, #0]	@ 000d50a0 0068
.org 0xd50a2
	str r0, [r3, #20]	@ 000d50a2 5861
.org 0xd50a4
	movs r0, #0	@ 000d50a4 0020
.org 0xd50a6
	strh r2, [r3, #32]	@ 000d50a6 1a84
.org 0xd50a8
	adds r1, r3, #0	@ 000d50a8 191c
.org 0xd50aa
	adds r1, #34	@ 000d50aa 2231
.org 0xd50ac
	strb r0, [r1, #0]	@ 000d50ac 0870
.org 0xd50ae
	ldr r0, [r6, #0]	@ 000d50ae 3068
.org 0xd50b0
	ldr r1, [r6, #4]	@ 000d50b0 7168
.org 0xd50b2
	str r0, [r3, #84]	@ 000d50b2 5865
.org 0xd50b4
	str r1, [r3, #88]	@ 000d50b4 9965
.org 0xd50b6
	strb r5, [r3, #16]	@ 000d50b6 1d74
.org 0xd50b8
	strb r4, [r3, #17]	@ 000d50b8 5c74
.org 0xd50ba
	adds r1, r3, #0	@ 000d50ba 191c
.org 0xd50bc
	adds r1, #124	@ 000d50bc 7c31
.org 0xd50be
	movs r0, #49	@ 000d50be 3120
.org 0xd50c0
	strb r0, [r1, #0]	@ 000d50c0 0870
.org 0xd50c2
	adds r1, #1	@ 000d50c2 0131
.org 0xd50c4
	movs r0, #14	@ 000d50c4 0e20
.org 0xd50c6
	strb r0, [r1, #0]	@ 000d50c6 0870
.org 0xd50c8
	adds r0, r3, #0	@ 000d50c8 181c
.org 0xd50ca
	pop {r4, r5, r6}	@ 000d50ca 70bc
.org 0xd50cc
	pop {r1}	@ 000d50cc 02bc
.org 0xd50ce
	bx r1	@ 000d50ce 0847
