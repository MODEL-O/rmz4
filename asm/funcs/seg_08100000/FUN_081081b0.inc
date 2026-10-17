@ FUN_081081b0  entry 0x081081b0  size 110
.thumb
.org 0x1081b0
FUN_081081b0:
	push {r4, r5, r6, lr}	@ 001081b0 70b5
.org 0x1081b2
	adds r6, r0, #0	@ 001081b2 061c
.org 0x1081b4
	lsls r1, r1, #24	@ 001081b4 0906
.org 0x1081b6
	lsrs r5, r1, #24	@ 001081b6 0d0e
.org 0x1081b8
	lsls r2, r2, #24	@ 001081b8 1206
.org 0x1081ba
	lsrs r4, r2, #24	@ 001081ba 140e
.org 0x1081bc
	ldr r0, [pc, #96]	@ 001081bc 1848
.org 0x1081be
	ldr r0, [r0, #0]	@ 001081be 0068
.org 0x1081c0
	bl 0x5500	@ 001081c0 fdf69ef9
.org 0x1081c4
	adds r3, r0, #0	@ 001081c4 031c
.org 0x1081c6
	cmp r3, #0	@ 001081c6 002b
.org 0x1081c8
	beq.n 0x108218	@ 001081c8 26d0
.org 0x1081ca
	adds r1, r3, #0	@ 001081ca 191c
.org 0x1081cc
	adds r1, #37	@ 001081cc 2531
.org 0x1081ce
	movs r2, #0	@ 001081ce 0022
.org 0x1081d0
	movs r0, #30	@ 001081d0 1e20
.org 0x1081d2
	strb r0, [r1, #0]	@ 001081d2 0870
.org 0x1081d4
	ldr r0, [pc, #76]	@ 001081d4 1348
.org 0x1081d6
	movs r1, #82	@ 001081d6 5221
.org 0x1081d8
	strb r1, [r3, #9]	@ 001081d8 5972
.org 0x1081da
	adds r1, #246	@ 001081da f631
.org 0x1081dc
	adds r0, r0, r1	@ 001081dc 4018
.org 0x1081de
	ldr r0, [r0, #0]	@ 001081de 0068
.org 0x1081e0
	ldr r0, [r0, #0]	@ 001081e0 0068
.org 0x1081e2
	str r0, [r3, #20]	@ 001081e2 5861
.org 0x1081e4
	movs r0, #0	@ 001081e4 0020
.org 0x1081e6
	strh r2, [r3, #32]	@ 001081e6 1a84
.org 0x1081e8
	adds r1, r3, #0	@ 001081e8 191c
.org 0x1081ea
	adds r1, #34	@ 001081ea 2231
.org 0x1081ec
	strb r0, [r1, #0]	@ 001081ec 0870
.org 0x1081ee
	ldrb r1, [r3, #11]	@ 001081ee d97a
.org 0x1081f0
	movs r0, #16	@ 001081f0 1020
.org 0x1081f2
	orrs r0, r1	@ 001081f2 0843
.org 0x1081f4
	strb r0, [r3, #11]	@ 001081f4 d872
.org 0x1081f6
	ldrb r0, [r3, #28]	@ 001081f6 187f
.org 0x1081f8
	strb r0, [r3, #29]	@ 001081f8 5877
.org 0x1081fa
	ldr r0, [r6, #0]	@ 001081fa 3068
.org 0x1081fc
	ldr r1, [r6, #4]	@ 001081fc 7168
.org 0x1081fe
	str r0, [r3, #84]	@ 001081fe 5865
.org 0x108200
	str r1, [r3, #88]	@ 00108200 9965
.org 0x108202
	strb r5, [r3, #16]	@ 00108202 1d74
.org 0x108204
	strb r4, [r3, #17]	@ 00108204 5c74
.org 0x108206
	cmp r4, #3	@ 00108206 032c
.org 0x108208
	bhi.n 0x108218	@ 00108208 06d8
.org 0x10820a
	adds r2, r4, #1	@ 0010820a 621c
.org 0x10820c
	lsls r2, r2, #24	@ 0010820c 1206
.org 0x10820e
	lsrs r2, r2, #24	@ 0010820e 120e
.org 0x108210
	adds r0, r6, #0	@ 00108210 301c
.org 0x108212
	adds r1, r5, #0	@ 00108212 291c
.org 0x108214
	bl 0x1081b0	@ 00108214 fff7ccff
.org 0x108218
	pop {r4, r5, r6}	@ 00108218 70bc
.org 0x10821a
	pop {r0}	@ 0010821a 01bc
.org 0x10821c
	bx r0	@ 0010821c 0047
