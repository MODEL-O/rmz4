@ FUN_080a5888  entry 0x080a5888  size 92
.thumb
.org 0xa5888
FUN_080a5888:
	push {r4, r5, r6, lr}	@ 000a5888 70b5
.org 0xa588a
	adds r6, r1, #0	@ 000a588a 0e1c
.org 0xa588c
	lsls r2, r2, #24	@ 000a588c 1206
.org 0xa588e
	lsrs r5, r2, #24	@ 000a588e 150e
.org 0xa5890
	lsls r3, r3, #24	@ 000a5890 1b06
.org 0xa5892
	lsrs r4, r3, #24	@ 000a5892 1c0e
.org 0xa5894
	ldr r0, [pc, #76]	@ 000a5894 1348
.org 0xa5896
	ldr r0, [r0, #0]	@ 000a5896 0068
.org 0xa5898
	bl 0x5500	@ 000a5898 5ff732fe
.org 0xa589c
	adds r3, r0, #0	@ 000a589c 031c
.org 0xa589e
	cmp r3, #0	@ 000a589e 002b
.org 0xa58a0
	beq.n 0xa58dc	@ 000a58a0 1cd0
.org 0xa58a2
	adds r1, r3, #0	@ 000a58a2 191c
.org 0xa58a4
	adds r1, #37	@ 000a58a4 2531
.org 0xa58a6
	movs r2, #0	@ 000a58a6 0022
.org 0xa58a8
	movs r0, #24	@ 000a58a8 1820
.org 0xa58aa
	strb r0, [r1, #0]	@ 000a58aa 0870
.org 0xa58ac
	ldr r0, [pc, #56]	@ 000a58ac 0e48
.org 0xa58ae
	movs r1, #62	@ 000a58ae 3e21
.org 0xa58b0
	strb r1, [r3, #9]	@ 000a58b0 5972
.org 0xa58b2
	adds r0, #248	@ 000a58b2 f830
.org 0xa58b4
	ldr r0, [r0, #0]	@ 000a58b4 0068
.org 0xa58b6
	ldr r0, [r0, #0]	@ 000a58b6 0068
.org 0xa58b8
	str r0, [r3, #20]	@ 000a58b8 5861
.org 0xa58ba
	movs r0, #0	@ 000a58ba 0020
.org 0xa58bc
	strh r2, [r3, #32]	@ 000a58bc 1a84
.org 0xa58be
	adds r1, r3, #0	@ 000a58be 191c
.org 0xa58c0
	adds r1, #34	@ 000a58c0 2231
.org 0xa58c2
	strb r0, [r1, #0]	@ 000a58c2 0870
.org 0xa58c4
	ldrb r1, [r3, #11]	@ 000a58c4 d97a
.org 0xa58c6
	movs r0, #16	@ 000a58c6 1020
.org 0xa58c8
	orrs r0, r1	@ 000a58c8 0843
.org 0xa58ca
	strb r0, [r3, #11]	@ 000a58ca d872
.org 0xa58cc
	ldrb r0, [r3, #28]	@ 000a58cc 187f
.org 0xa58ce
	strb r0, [r3, #29]	@ 000a58ce 5877
.org 0xa58d0
	ldr r0, [r6, #0]	@ 000a58d0 3068
.org 0xa58d2
	ldr r1, [r6, #4]	@ 000a58d2 7168
.org 0xa58d4
	str r0, [r3, #84]	@ 000a58d4 5865
.org 0xa58d6
	str r1, [r3, #88]	@ 000a58d6 9965
.org 0xa58d8
	strb r5, [r3, #16]	@ 000a58d8 1d74
.org 0xa58da
	strb r4, [r3, #17]	@ 000a58da 5c74
.org 0xa58dc
	adds r0, r3, #0	@ 000a58dc 181c
.org 0xa58de
	pop {r4, r5, r6}	@ 000a58de 70bc
.org 0xa58e0
	pop {r1}	@ 000a58e0 02bc
.org 0xa58e2
	bx r1	@ 000a58e2 0847
