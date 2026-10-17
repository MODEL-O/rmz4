@ FUN_080e27a8  entry 0x080e27a8  size 82
.thumb
.org 0xe27a8
FUN_080e27a8:
	push {r4, r5, r6, lr}	@ 000e27a8 70b5
.org 0xe27aa
	adds r6, r0, #0	@ 000e27aa 061c
.org 0xe27ac
	lsls r1, r1, #24	@ 000e27ac 0906
.org 0xe27ae
	lsrs r5, r1, #24	@ 000e27ae 0d0e
.org 0xe27b0
	lsls r2, r2, #24	@ 000e27b0 1206
.org 0xe27b2
	lsrs r4, r2, #24	@ 000e27b2 140e
.org 0xe27b4
	ldr r0, [pc, #68]	@ 000e27b4 1148
.org 0xe27b6
	ldr r0, [r0, #0]	@ 000e27b6 0068
.org 0xe27b8
	bl 0x5500	@ 000e27b8 22f7a2fe
.org 0xe27bc
	adds r3, r0, #0	@ 000e27bc 031c
.org 0xe27be
	cmp r3, #0	@ 000e27be 002b
.org 0xe27c0
	beq.n 0xe27f2	@ 000e27c0 17d0
.org 0xe27c2
	adds r1, r3, #0	@ 000e27c2 191c
.org 0xe27c4
	adds r1, #37	@ 000e27c4 2531
.org 0xe27c6
	movs r2, #0	@ 000e27c6 0022
.org 0xe27c8
	movs r0, #1	@ 000e27c8 0120
.org 0xe27ca
	strb r0, [r1, #0]	@ 000e27ca 0870
.org 0xe27cc
	ldr r0, [pc, #48]	@ 000e27cc 0c48
.org 0xe27ce
	movs r1, #66	@ 000e27ce 4221
.org 0xe27d0
	strb r1, [r3, #9]	@ 000e27d0 5972
.org 0xe27d2
	adds r1, #198	@ 000e27d2 c631
.org 0xe27d4
	adds r0, r0, r1	@ 000e27d4 4018
.org 0xe27d6
	ldr r0, [r0, #0]	@ 000e27d6 0068
.org 0xe27d8
	ldr r0, [r0, #0]	@ 000e27d8 0068
.org 0xe27da
	str r0, [r3, #20]	@ 000e27da 5861
.org 0xe27dc
	movs r0, #0	@ 000e27dc 0020
.org 0xe27de
	strh r2, [r3, #32]	@ 000e27de 1a84
.org 0xe27e0
	adds r1, r3, #0	@ 000e27e0 191c
.org 0xe27e2
	adds r1, #34	@ 000e27e2 2231
.org 0xe27e4
	strb r0, [r1, #0]	@ 000e27e4 0870
.org 0xe27e6
	ldr r0, [r6, #0]	@ 000e27e6 3068
.org 0xe27e8
	ldr r1, [r6, #4]	@ 000e27e8 7168
.org 0xe27ea
	str r0, [r3, #84]	@ 000e27ea 5865
.org 0xe27ec
	str r1, [r3, #88]	@ 000e27ec 9965
.org 0xe27ee
	strb r5, [r3, #16]	@ 000e27ee 1d74
.org 0xe27f0
	strb r4, [r3, #17]	@ 000e27f0 5c74
.org 0xe27f2
	adds r0, r3, #0	@ 000e27f2 181c
.org 0xe27f4
	pop {r4, r5, r6}	@ 000e27f4 70bc
.org 0xe27f6
	pop {r1}	@ 000e27f6 02bc
.org 0xe27f8
	bx r1	@ 000e27f8 0847
