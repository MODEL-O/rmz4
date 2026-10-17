@ FUN_080a8884  entry 0x080a8884  size 90
.thumb
.org 0xa8884
FUN_080a8884:
	push {r4, r5, r6, lr}	@ 000a8884 70b5
.org 0xa8886
	adds r4, r0, #0	@ 000a8886 041c
.org 0xa8888
	adds r5, r1, #0	@ 000a8888 0d1c
.org 0xa888a
	lsls r2, r2, #24	@ 000a888a 1206
.org 0xa888c
	lsrs r6, r2, #24	@ 000a888c 160e
.org 0xa888e
	ldr r0, [pc, #80]	@ 000a888e 1448
.org 0xa8890
	ldr r0, [r0, #0]	@ 000a8890 0068
.org 0xa8892
	bl 0x5500	@ 000a8892 5cf735fe
.org 0xa8896
	adds r3, r0, #0	@ 000a8896 031c
.org 0xa8898
	cmp r3, #0	@ 000a8898 002b
.org 0xa889a
	beq.n 0xa88d6	@ 000a889a 1cd0
.org 0xa889c
	adds r1, r3, #0	@ 000a889c 191c
.org 0xa889e
	adds r1, #37	@ 000a889e 2531
.org 0xa88a0
	movs r2, #0	@ 000a88a0 0022
.org 0xa88a2
	movs r0, #24	@ 000a88a2 1820
.org 0xa88a4
	strb r0, [r1, #0]	@ 000a88a4 0870
.org 0xa88a6
	ldr r0, [pc, #60]	@ 000a88a6 0f48
.org 0xa88a8
	movs r1, #67	@ 000a88a8 4321
.org 0xa88aa
	strb r1, [r3, #9]	@ 000a88aa 5972
.org 0xa88ac
	adds r1, #201	@ 000a88ac c931
.org 0xa88ae
	adds r0, r0, r1	@ 000a88ae 4018
.org 0xa88b0
	ldr r0, [r0, #0]	@ 000a88b0 0068
.org 0xa88b2
	ldr r0, [r0, #0]	@ 000a88b2 0068
.org 0xa88b4
	str r0, [r3, #20]	@ 000a88b4 5861
.org 0xa88b6
	movs r0, #0	@ 000a88b6 0020
.org 0xa88b8
	strh r2, [r3, #32]	@ 000a88b8 1a84
.org 0xa88ba
	adds r1, r3, #0	@ 000a88ba 191c
.org 0xa88bc
	adds r1, #34	@ 000a88bc 2231
.org 0xa88be
	strb r0, [r1, #0]	@ 000a88be 0870
.org 0xa88c0
	ldrb r1, [r3, #11]	@ 000a88c0 d97a
.org 0xa88c2
	movs r0, #16	@ 000a88c2 1020
.org 0xa88c4
	orrs r0, r1	@ 000a88c4 0843
.org 0xa88c6
	strb r0, [r3, #11]	@ 000a88c6 d872
.org 0xa88c8
	ldrb r0, [r3, #28]	@ 000a88c8 187f
.org 0xa88ca
	strb r0, [r3, #29]	@ 000a88ca 5877
.org 0xa88cc
	str r4, [r3, #40]	@ 000a88cc 9c62
.org 0xa88ce
	str r5, [r3, #44]	@ 000a88ce dd62
.org 0xa88d0
	movs r0, #1	@ 000a88d0 0120
.org 0xa88d2
	strb r0, [r3, #16]	@ 000a88d2 1874
.org 0xa88d4
	strb r6, [r3, #17]	@ 000a88d4 5e74
.org 0xa88d6
	adds r0, r3, #0	@ 000a88d6 181c
.org 0xa88d8
	pop {r4, r5, r6}	@ 000a88d8 70bc
.org 0xa88da
	pop {r1}	@ 000a88da 02bc
.org 0xa88dc
	bx r1	@ 000a88dc 0847
