@ FUN_08095188  entry 0x08095188  size 92
.thumb
.org 0x95188
FUN_08095188:
	push {r4, r5, r6, lr}	@ 00095188 70b5
.org 0x9518a
	adds r4, r0, #0	@ 0009518a 041c
.org 0x9518c
	adds r5, r1, #0	@ 0009518c 0d1c
.org 0x9518e
	lsls r2, r2, #24	@ 0009518e 1206
.org 0x95190
	lsrs r6, r2, #24	@ 00095190 160e
.org 0x95192
	ldr r0, [pc, #80]	@ 00095192 1448
.org 0x95194
	ldr r0, [r0, #0]	@ 00095194 0068
.org 0x95196
	bl 0x5500	@ 00095196 70f7b3f9
.org 0x9519a
	adds r3, r0, #0	@ 0009519a 031c
.org 0x9519c
	cmp r3, #0	@ 0009519c 002b
.org 0x9519e
	beq.n 0x951dc	@ 0009519e 1dd0
.org 0x951a0
	adds r1, r3, #0	@ 000951a0 191c
.org 0x951a2
	adds r1, #37	@ 000951a2 2531
.org 0x951a4
	movs r2, #0	@ 000951a4 0022
.org 0x951a6
	movs r0, #24	@ 000951a6 1820
.org 0x951a8
	strb r0, [r1, #0]	@ 000951a8 0870
.org 0x951aa
	ldr r1, [pc, #60]	@ 000951aa 0f49
.org 0x951ac
	movs r0, #26	@ 000951ac 1a20
.org 0x951ae
	strb r0, [r3, #9]	@ 000951ae 5872
.org 0x951b0
	ldr r0, [r1, #104]	@ 000951b0 886e
.org 0x951b2
	ldr r0, [r0, #0]	@ 000951b2 0068
.org 0x951b4
	str r0, [r3, #20]	@ 000951b4 5861
.org 0x951b6
	movs r0, #0	@ 000951b6 0020
.org 0x951b8
	strh r2, [r3, #32]	@ 000951b8 1a84
.org 0x951ba
	adds r1, r3, #0	@ 000951ba 191c
.org 0x951bc
	adds r1, #34	@ 000951bc 2231
.org 0x951be
	strb r0, [r1, #0]	@ 000951be 0870
.org 0x951c0
	ldrb r1, [r3, #11]	@ 000951c0 d97a
.org 0x951c2
	movs r0, #16	@ 000951c2 1020
.org 0x951c4
	orrs r0, r1	@ 000951c4 0843
.org 0x951c6
	strb r0, [r3, #11]	@ 000951c6 d872
.org 0x951c8
	ldrb r0, [r3, #28]	@ 000951c8 187f
.org 0x951ca
	strb r0, [r3, #29]	@ 000951ca 5877
.org 0x951cc
	str r4, [r3, #40]	@ 000951cc 9c62
.org 0x951ce
	ldr r0, [r5, #0]	@ 000951ce 2868
.org 0x951d0
	ldr r1, [r5, #4]	@ 000951d0 6968
.org 0x951d2
	str r0, [r3, #84]	@ 000951d2 5865
.org 0x951d4
	str r1, [r3, #88]	@ 000951d4 9965
.org 0x951d6
	movs r0, #1	@ 000951d6 0120
.org 0x951d8
	strb r0, [r3, #16]	@ 000951d8 1874
.org 0x951da
	strb r6, [r3, #17]	@ 000951da 5e74
.org 0x951dc
	adds r0, r3, #0	@ 000951dc 181c
.org 0x951de
	pop {r4, r5, r6}	@ 000951de 70bc
.org 0x951e0
	pop {r1}	@ 000951e0 02bc
.org 0x951e2
	bx r1	@ 000951e2 0847
