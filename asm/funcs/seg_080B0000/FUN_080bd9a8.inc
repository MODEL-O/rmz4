@ FUN_080bd9a8  entry 0x080bd9a8  size 86
.thumb
.org 0xbd9a8
FUN_080bd9a8:
	push {r4, r5, r6, lr}	@ 000bd9a8 70b5
.org 0xbd9aa
	adds r4, r0, #0	@ 000bd9aa 041c
.org 0xbd9ac
	lsls r1, r1, #24	@ 000bd9ac 0906
.org 0xbd9ae
	lsrs r5, r1, #24	@ 000bd9ae 0d0e
.org 0xbd9b0
	lsls r2, r2, #24	@ 000bd9b0 1206
.org 0xbd9b2
	lsrs r6, r2, #24	@ 000bd9b2 160e
.org 0xbd9b4
	ldr r0, [pc, #72]	@ 000bd9b4 1248
.org 0xbd9b6
	ldr r0, [r0, #0]	@ 000bd9b6 0068
.org 0xbd9b8
	bl 0x5500	@ 000bd9b8 47f7a2fd
.org 0xbd9bc
	adds r3, r0, #0	@ 000bd9bc 031c
.org 0xbd9be
	cmp r3, #0	@ 000bd9be 002b
.org 0xbd9c0
	beq.n 0xbd9f6	@ 000bd9c0 19d0
.org 0xbd9c2
	adds r1, r3, #0	@ 000bd9c2 191c
.org 0xbd9c4
	adds r1, #37	@ 000bd9c4 2531
.org 0xbd9c6
	movs r2, #0	@ 000bd9c6 0022
.org 0xbd9c8
	movs r0, #8	@ 000bd9c8 0820
.org 0xbd9ca
	strb r0, [r1, #0]	@ 000bd9ca 0870
.org 0xbd9cc
	ldr r1, [pc, #52]	@ 000bd9cc 0d49
.org 0xbd9ce
	movs r0, #1	@ 000bd9ce 0120
.org 0xbd9d0
	strb r0, [r3, #9]	@ 000bd9d0 5872
.org 0xbd9d2
	ldr r0, [r1, #4]	@ 000bd9d2 4868
.org 0xbd9d4
	ldr r0, [r0, #0]	@ 000bd9d4 0068
.org 0xbd9d6
	str r0, [r3, #20]	@ 000bd9d6 5861
.org 0xbd9d8
	movs r0, #0	@ 000bd9d8 0020
.org 0xbd9da
	strh r2, [r3, #32]	@ 000bd9da 1a84
.org 0xbd9dc
	adds r1, r3, #0	@ 000bd9dc 191c
.org 0xbd9de
	adds r1, #34	@ 000bd9de 2231
.org 0xbd9e0
	strb r0, [r1, #0]	@ 000bd9e0 0870
.org 0xbd9e2
	ldr r0, [r4, #0]	@ 000bd9e2 2068
.org 0xbd9e4
	ldr r1, [r4, #4]	@ 000bd9e4 6168
.org 0xbd9e6
	str r0, [r3, #84]	@ 000bd9e6 5865
.org 0xbd9e8
	str r1, [r3, #88]	@ 000bd9e8 9965
.org 0xbd9ea
	movs r0, #3	@ 000bd9ea 0320
.org 0xbd9ec
	strb r0, [r3, #16]	@ 000bd9ec 1874
.org 0xbd9ee
	strb r5, [r3, #17]	@ 000bd9ee 5d74
.org 0xbd9f0
	adds r0, r3, #0	@ 000bd9f0 181c
.org 0xbd9f2
	adds r0, #180	@ 000bd9f2 b430
.org 0xbd9f4
	strb r6, [r0, #0]	@ 000bd9f4 0670
.org 0xbd9f6
	adds r0, r3, #0	@ 000bd9f6 181c
.org 0xbd9f8
	pop {r4, r5, r6}	@ 000bd9f8 70bc
.org 0xbd9fa
	pop {r1}	@ 000bd9fa 02bc
.org 0xbd9fc
	bx r1	@ 000bd9fc 0847
