@ FUN_080fa98c  entry 0x080fa98c  size 90
.thumb
.org 0xfa98c
FUN_080fa98c:
	push {r4, r5, r6, lr}	@ 000fa98c 70b5
.org 0xfa98e
	adds r6, r0, #0	@ 000fa98e 061c
.org 0xfa990
	lsls r1, r1, #24	@ 000fa990 0906
.org 0xfa992
	lsrs r5, r1, #24	@ 000fa992 0d0e
.org 0xfa994
	lsls r2, r2, #24	@ 000fa994 1206
.org 0xfa996
	lsrs r4, r2, #24	@ 000fa996 140e
.org 0xfa998
	ldr r0, [pc, #76]	@ 000fa998 1348
.org 0xfa99a
	ldr r0, [r0, #0]	@ 000fa99a 0068
.org 0xfa99c
	bl 0x5500	@ 000fa99c 0af7b0fd
.org 0xfa9a0
	adds r3, r0, #0	@ 000fa9a0 031c
.org 0xfa9a2
	cmp r3, #0	@ 000fa9a2 002b
.org 0xfa9a4
	beq.n 0xfa9e0	@ 000fa9a4 1cd0
.org 0xfa9a6
	adds r1, r3, #0	@ 000fa9a6 191c
.org 0xfa9a8
	adds r1, #37	@ 000fa9a8 2531
.org 0xfa9aa
	movs r2, #0	@ 000fa9aa 0022
.org 0xfa9ac
	movs r0, #30	@ 000fa9ac 1e20
.org 0xfa9ae
	strb r0, [r1, #0]	@ 000fa9ae 0870
.org 0xfa9b0
	ldr r0, [pc, #56]	@ 000fa9b0 0e48
.org 0xfa9b2
	movs r1, #35	@ 000fa9b2 2321
.org 0xfa9b4
	strb r1, [r3, #9]	@ 000fa9b4 5972
.org 0xfa9b6
	adds r0, #140	@ 000fa9b6 8c30
.org 0xfa9b8
	ldr r0, [r0, #0]	@ 000fa9b8 0068
.org 0xfa9ba
	ldr r0, [r0, #0]	@ 000fa9ba 0068
.org 0xfa9bc
	str r0, [r3, #20]	@ 000fa9bc 5861
.org 0xfa9be
	movs r0, #0	@ 000fa9be 0020
.org 0xfa9c0
	strh r2, [r3, #32]	@ 000fa9c0 1a84
.org 0xfa9c2
	adds r1, r3, #0	@ 000fa9c2 191c
.org 0xfa9c4
	adds r1, #34	@ 000fa9c4 2231
.org 0xfa9c6
	strb r0, [r1, #0]	@ 000fa9c6 0870
.org 0xfa9c8
	ldrb r1, [r3, #11]	@ 000fa9c8 d97a
.org 0xfa9ca
	movs r0, #16	@ 000fa9ca 1020
.org 0xfa9cc
	orrs r0, r1	@ 000fa9cc 0843
.org 0xfa9ce
	strb r0, [r3, #11]	@ 000fa9ce d872
.org 0xfa9d0
	ldrb r0, [r3, #28]	@ 000fa9d0 187f
.org 0xfa9d2
	strb r0, [r3, #29]	@ 000fa9d2 5877
.org 0xfa9d4
	ldr r0, [r6, #0]	@ 000fa9d4 3068
.org 0xfa9d6
	ldr r1, [r6, #4]	@ 000fa9d6 7168
.org 0xfa9d8
	str r0, [r3, #84]	@ 000fa9d8 5865
.org 0xfa9da
	str r1, [r3, #88]	@ 000fa9da 9965
.org 0xfa9dc
	strb r5, [r3, #16]	@ 000fa9dc 1d74
.org 0xfa9de
	strb r4, [r3, #17]	@ 000fa9de 5c74
.org 0xfa9e0
	pop {r4, r5, r6}	@ 000fa9e0 70bc
.org 0xfa9e2
	pop {r0}	@ 000fa9e2 01bc
.org 0xfa9e4
	bx r0	@ 000fa9e4 0047
