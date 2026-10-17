@ FUN_080c298c  entry 0x080c298c  size 90
.thumb
.org 0xc298c
FUN_080c298c:
	push {r4, r5, r6, r7, lr}	@ 000c298c f0b5
.org 0xc298e
	adds r4, r0, #0	@ 000c298e 041c
.org 0xc2990
	adds r5, r1, #0	@ 000c2990 0d1c
.org 0xc2992
	lsls r2, r2, #24	@ 000c2992 1206
.org 0xc2994
	lsrs r6, r2, #24	@ 000c2994 160e
.org 0xc2996
	lsls r3, r3, #24	@ 000c2996 1b06
.org 0xc2998
	lsrs r7, r3, #24	@ 000c2998 1f0e
.org 0xc299a
	ldr r0, [pc, #76]	@ 000c299a 1348
.org 0xc299c
	ldr r0, [r0, #0]	@ 000c299c 0068
.org 0xc299e
	bl 0x5500	@ 000c299e 42f7affd
.org 0xc29a2
	adds r3, r0, #0	@ 000c29a2 031c
.org 0xc29a4
	cmp r3, #0	@ 000c29a4 002b
.org 0xc29a6
	beq.n 0xc29de	@ 000c29a6 1ad0
.org 0xc29a8
	adds r1, r3, #0	@ 000c29a8 191c
.org 0xc29aa
	adds r1, #37	@ 000c29aa 2531
.org 0xc29ac
	movs r2, #0	@ 000c29ac 0022
.org 0xc29ae
	movs r0, #8	@ 000c29ae 0820
.org 0xc29b0
	strb r0, [r1, #0]	@ 000c29b0 0870
.org 0xc29b2
	ldr r1, [pc, #56]	@ 000c29b2 0e49
.org 0xc29b4
	movs r0, #16	@ 000c29b4 1020
.org 0xc29b6
	strb r0, [r3, #9]	@ 000c29b6 5872
.org 0xc29b8
	ldr r0, [r1, #64]	@ 000c29b8 086c
.org 0xc29ba
	ldr r0, [r0, #0]	@ 000c29ba 0068
.org 0xc29bc
	str r0, [r3, #20]	@ 000c29bc 5861
.org 0xc29be
	movs r0, #0	@ 000c29be 0020
.org 0xc29c0
	strh r2, [r3, #32]	@ 000c29c0 1a84
.org 0xc29c2
	adds r1, r3, #0	@ 000c29c2 191c
.org 0xc29c4
	adds r1, #34	@ 000c29c4 2231
.org 0xc29c6
	strb r0, [r1, #0]	@ 000c29c6 0870
.org 0xc29c8
	str r4, [r3, #40]	@ 000c29c8 9c62
.org 0xc29ca
	ldr r0, [r5, #0]	@ 000c29ca 2868
.org 0xc29cc
	ldr r1, [r5, #4]	@ 000c29cc 6968
.org 0xc29ce
	str r0, [r3, #84]	@ 000c29ce 5865
.org 0xc29d0
	str r1, [r3, #88]	@ 000c29d0 9965
.org 0xc29d2
	movs r0, #1	@ 000c29d2 0120
.org 0xc29d4
	strb r0, [r3, #16]	@ 000c29d4 1874
.org 0xc29d6
	strb r6, [r3, #17]	@ 000c29d6 5e74
.org 0xc29d8
	adds r0, r3, #0	@ 000c29d8 181c
.org 0xc29da
	adds r0, #180	@ 000c29da b430
.org 0xc29dc
	strb r7, [r0, #0]	@ 000c29dc 0770
.org 0xc29de
	adds r0, r3, #0	@ 000c29de 181c
.org 0xc29e0
	pop {r4, r5, r6, r7}	@ 000c29e0 f0bc
.org 0xc29e2
	pop {r1}	@ 000c29e2 02bc
.org 0xc29e4
	bx r1	@ 000c29e4 0847
