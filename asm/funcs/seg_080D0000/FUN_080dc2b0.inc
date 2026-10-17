@ FUN_080dc2b0  entry 0x080dc2b0  size 120
.thumb
.org 0xdc2b0
FUN_080dc2b0:
	push {r4, r5, r6, r7, lr}	@ 000dc2b0 f0b5
.org 0xdc2b2
	mov r7, r8	@ 000dc2b2 4746
.org 0xdc2b4
	push {r7}	@ 000dc2b4 80b4
.org 0xdc2b6
	adds r6, r0, #0	@ 000dc2b6 061c
.org 0xdc2b8
	adds r4, r1, #0	@ 000dc2b8 0c1c
.org 0xdc2ba
	adds r5, r2, #0	@ 000dc2ba 151c
.org 0xdc2bc
	mov r8, r3	@ 000dc2bc 9846
.org 0xdc2be
	ldr r0, [sp, #28]	@ 000dc2be 0798
.org 0xdc2c0
	lsls r0, r0, #24	@ 000dc2c0 0006
.org 0xdc2c2
	lsrs r7, r0, #24	@ 000dc2c2 070e
.org 0xdc2c4
	ldr r0, [pc, #96]	@ 000dc2c4 1848
.org 0xdc2c6
	ldr r0, [r0, #0]	@ 000dc2c6 0068
.org 0xdc2c8
	bl 0x5500	@ 000dc2c8 29f71af9
.org 0xdc2cc
	adds r3, r0, #0	@ 000dc2cc 031c
.org 0xdc2ce
	cmp r3, #0	@ 000dc2ce 002b
.org 0xdc2d0
	beq.n 0xdc31e	@ 000dc2d0 25d0
.org 0xdc2d2
	adds r1, r3, #0	@ 000dc2d2 191c
.org 0xdc2d4
	adds r1, #37	@ 000dc2d4 2531
.org 0xdc2d6
	movs r2, #0	@ 000dc2d6 0022
.org 0xdc2d8
	movs r0, #1	@ 000dc2d8 0120
.org 0xdc2da
	strb r0, [r1, #0]	@ 000dc2da 0870
.org 0xdc2dc
	ldr r0, [pc, #76]	@ 000dc2dc 1348
.org 0xdc2de
	movs r1, #43	@ 000dc2de 2b21
.org 0xdc2e0
	strb r1, [r3, #9]	@ 000dc2e0 5972
.org 0xdc2e2
	adds r0, #172	@ 000dc2e2 ac30
.org 0xdc2e4
	ldr r0, [r0, #0]	@ 000dc2e4 0068
.org 0xdc2e6
	ldr r0, [r0, #0]	@ 000dc2e6 0068
.org 0xdc2e8
	str r0, [r3, #20]	@ 000dc2e8 5861
.org 0xdc2ea
	movs r1, #0	@ 000dc2ea 0021
.org 0xdc2ec
	strh r2, [r3, #32]	@ 000dc2ec 1a84
.org 0xdc2ee
	adds r0, r3, #0	@ 000dc2ee 181c
.org 0xdc2f0
	adds r0, #34	@ 000dc2f0 2230
.org 0xdc2f2
	strb r1, [r0, #0]	@ 000dc2f2 0170
.org 0xdc2f4
	movs r0, #3	@ 000dc2f4 0320
.org 0xdc2f6
	strb r0, [r3, #16]	@ 000dc2f6 1874
.org 0xdc2f8
	str r6, [r3, #40]	@ 000dc2f8 9e62
.org 0xdc2fa
	ldr r0, [sp, #24]	@ 000dc2fa 0698
.org 0xdc2fc
	str r0, [r3, #116]	@ 000dc2fc 5867
.org 0xdc2fe
	ldr r0, [r4, #0]	@ 000dc2fe 2068
.org 0xdc300
	str r0, [r3, #84]	@ 000dc300 5865
.org 0xdc302
	ldr r0, [r4, #4]	@ 000dc302 6068
.org 0xdc304
	str r0, [r3, #88]	@ 000dc304 9865
.org 0xdc306
	ldr r0, [r5, #0]	@ 000dc306 2868
.org 0xdc308
	str r0, [r3, #92]	@ 000dc308 d865
.org 0xdc30a
	ldr r0, [r5, #4]	@ 000dc30a 6868
.org 0xdc30c
	str r0, [r3, #96]	@ 000dc30c 1866
.org 0xdc30e
	mov r0, r8	@ 000dc30e 4046
.org 0xdc310
	str r0, [r3, #104]	@ 000dc310 9866
.org 0xdc312
	strb r7, [r3, #18]	@ 000dc312 9f74
.org 0xdc314
	adds r0, r3, #0	@ 000dc314 181c
.org 0xdc316
	adds r0, #120	@ 000dc316 7830
.org 0xdc318
	strb r1, [r0, #0]	@ 000dc318 0170
.org 0xdc31a
	adds r0, #1	@ 000dc31a 0130
.org 0xdc31c
	strb r1, [r0, #0]	@ 000dc31c 0170
.org 0xdc31e
	pop {r3}	@ 000dc31e 08bc
.org 0xdc320
	mov r8, r3	@ 000dc320 9846
.org 0xdc322
	pop {r4, r5, r6, r7}	@ 000dc322 f0bc
.org 0xdc324
	pop {r0}	@ 000dc324 01bc
.org 0xdc326
	bx r0	@ 000dc326 0047
