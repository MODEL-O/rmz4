@ FUN_08103888  entry 0x08103888  size 106
.thumb
.org 0x103888
FUN_08103888:
	push {r4, r5, r6, lr}	@ 00103888 70b5
.org 0x10388a
	adds r4, r1, #0	@ 0010388a 0c1c
.org 0x10388c
	adds r6, r2, #0	@ 0010388c 161c
.org 0x10388e
	lsls r0, r0, #24	@ 0010388e 0006
.org 0x103890
	lsrs r5, r0, #24	@ 00103890 050e
.org 0x103892
	ldr r0, [pc, #96]	@ 00103892 1848
.org 0x103894
	ldr r0, [r0, #0]	@ 00103894 0068
.org 0x103896
	bl 0x5500	@ 00103896 01f733fe
.org 0x10389a
	adds r3, r0, #0	@ 0010389a 031c
.org 0x10389c
	cmp r3, #0	@ 0010389c 002b
.org 0x10389e
	beq.n 0x1038ec	@ 0010389e 25d0
.org 0x1038a0
	adds r1, r3, #0	@ 001038a0 191c
.org 0x1038a2
	adds r1, #37	@ 001038a2 2531
.org 0x1038a4
	movs r2, #0	@ 001038a4 0022
.org 0x1038a6
	movs r0, #30	@ 001038a6 1e20
.org 0x1038a8
	strb r0, [r1, #0]	@ 001038a8 0870
.org 0x1038aa
	ldr r0, [pc, #76]	@ 001038aa 1348
.org 0x1038ac
	movs r1, #70	@ 001038ac 4621
.org 0x1038ae
	strb r1, [r3, #9]	@ 001038ae 5972
.org 0x1038b0
	adds r1, #210	@ 001038b0 d231
.org 0x1038b2
	adds r0, r0, r1	@ 001038b2 4018
.org 0x1038b4
	ldr r0, [r0, #0]	@ 001038b4 0068
.org 0x1038b6
	ldr r0, [r0, #0]	@ 001038b6 0068
.org 0x1038b8
	str r0, [r3, #20]	@ 001038b8 5861
.org 0x1038ba
	movs r0, #0	@ 001038ba 0020
.org 0x1038bc
	strh r2, [r3, #32]	@ 001038bc 1a84
.org 0x1038be
	adds r1, r3, #0	@ 001038be 191c
.org 0x1038c0
	adds r1, #34	@ 001038c0 2231
.org 0x1038c2
	strb r0, [r1, #0]	@ 001038c2 0870
.org 0x1038c4
	ldrb r1, [r3, #11]	@ 001038c4 d97a
.org 0x1038c6
	movs r0, #16	@ 001038c6 1020
.org 0x1038c8
	orrs r0, r1	@ 001038c8 0843
.org 0x1038ca
	strb r0, [r3, #11]	@ 001038ca d872
.org 0x1038cc
	ldrb r0, [r3, #28]	@ 001038cc 187f
.org 0x1038ce
	strb r0, [r3, #29]	@ 001038ce 5877
.org 0x1038d0
	movs r0, #192	@ 001038d0 c020
.org 0x1038d2
	lsls r0, r0, #5	@ 001038d2 4001
.org 0x1038d4
	adds r1, r4, r0	@ 001038d4 2118
.org 0x1038d6
	str r1, [r3, #84]	@ 001038d6 5965
.org 0x1038d8
	adds r0, r6, r0	@ 001038d8 3018
.org 0x1038da
	str r0, [r3, #88]	@ 001038da 9865
.org 0x1038dc
	strb r5, [r3, #16]	@ 001038dc 1d74
.org 0x1038de
	movs r0, #1	@ 001038de 0120
.org 0x1038e0
	strb r0, [r3, #17]	@ 001038e0 5874
.org 0x1038e2
	adds r1, r3, #0	@ 001038e2 191c
.org 0x1038e4
	adds r1, #84	@ 001038e4 5431
.org 0x1038e6
	movs r0, #5	@ 001038e6 0520
.org 0x1038e8
	bl 0x1fe64	@ 001038e8 1cf7bcfa
.org 0x1038ec
	pop {r4, r5, r6}	@ 001038ec 70bc
.org 0x1038ee
	pop {r0}	@ 001038ee 01bc
.org 0x1038f0
	bx r0	@ 001038f0 0047
