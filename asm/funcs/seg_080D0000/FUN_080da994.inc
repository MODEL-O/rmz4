@ FUN_080da994  entry 0x080da994  size 78
.thumb
.org 0xda994
FUN_080da994:
	push {r4, r5, r6, lr}	@ 000da994 70b5
.org 0xda996
	adds r5, r0, #0	@ 000da996 051c
.org 0xda998
	adds r6, r1, #0	@ 000da998 0e1c
.org 0xda99a
	lsls r2, r2, #24	@ 000da99a 1206
.org 0xda99c
	lsrs r4, r2, #24	@ 000da99c 140e
.org 0xda99e
	ldr r0, [pc, #68]	@ 000da99e 1148
.org 0xda9a0
	ldr r0, [r0, #0]	@ 000da9a0 0068
.org 0xda9a2
	bl 0x5500	@ 000da9a2 2af7adfd
.org 0xda9a6
	adds r3, r0, #0	@ 000da9a6 031c
.org 0xda9a8
	cmp r3, #0	@ 000da9a8 002b
.org 0xda9aa
	beq.n 0xda9da	@ 000da9aa 16d0
.org 0xda9ac
	adds r1, r3, #0	@ 000da9ac 191c
.org 0xda9ae
	adds r1, #37	@ 000da9ae 2531
.org 0xda9b0
	movs r2, #0	@ 000da9b0 0022
.org 0xda9b2
	movs r0, #1	@ 000da9b2 0120
.org 0xda9b4
	strb r0, [r1, #0]	@ 000da9b4 0870
.org 0xda9b6
	ldr r0, [pc, #48]	@ 000da9b6 0c48
.org 0xda9b8
	movs r1, #37	@ 000da9b8 2521
.org 0xda9ba
	strb r1, [r3, #9]	@ 000da9ba 5972
.org 0xda9bc
	adds r0, #148	@ 000da9bc 9430
.org 0xda9be
	ldr r0, [r0, #0]	@ 000da9be 0068
.org 0xda9c0
	ldr r0, [r0, #0]	@ 000da9c0 0068
.org 0xda9c2
	str r0, [r3, #20]	@ 000da9c2 5861
.org 0xda9c4
	movs r0, #0	@ 000da9c4 0020
.org 0xda9c6
	strh r2, [r3, #32]	@ 000da9c6 1a84
.org 0xda9c8
	adds r1, r3, #0	@ 000da9c8 191c
.org 0xda9ca
	adds r1, #34	@ 000da9ca 2231
.org 0xda9cc
	strb r0, [r1, #0]	@ 000da9cc 0870
.org 0xda9ce
	ldr r0, [r5, #0]	@ 000da9ce 2868
.org 0xda9d0
	ldr r1, [r5, #4]	@ 000da9d0 6968
.org 0xda9d2
	str r0, [r3, #84]	@ 000da9d2 5865
.org 0xda9d4
	str r1, [r3, #88]	@ 000da9d4 9965
.org 0xda9d6
	str r6, [r3, #92]	@ 000da9d6 de65
.org 0xda9d8
	strb r4, [r3, #18]	@ 000da9d8 9c74
.org 0xda9da
	adds r0, r3, #0	@ 000da9da 181c
.org 0xda9dc
	pop {r4, r5, r6}	@ 000da9dc 70bc
.org 0xda9de
	pop {r1}	@ 000da9de 02bc
.org 0xda9e0
	bx r1	@ 000da9e0 0847
