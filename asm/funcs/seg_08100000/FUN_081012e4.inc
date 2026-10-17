@ FUN_081012e4  entry 0x081012e4  size 92
.thumb
.org 0x1012e4
FUN_081012e4:
	push {r4, r5, r6, lr}	@ 001012e4 70b5
.org 0x1012e6
	adds r6, r0, #0	@ 001012e6 061c
.org 0x1012e8
	lsls r1, r1, #24	@ 001012e8 0906
.org 0x1012ea
	lsrs r5, r1, #24	@ 001012ea 0d0e
.org 0x1012ec
	lsls r2, r2, #24	@ 001012ec 1206
.org 0x1012ee
	lsrs r4, r2, #24	@ 001012ee 140e
.org 0x1012f0
	ldr r0, [pc, #76]	@ 001012f0 1348
.org 0x1012f2
	ldr r0, [r0, #0]	@ 001012f2 0068
.org 0x1012f4
	bl 0x5500	@ 001012f4 04f704f9
.org 0x1012f8
	adds r3, r0, #0	@ 001012f8 031c
.org 0x1012fa
	cmp r3, #0	@ 001012fa 002b
.org 0x1012fc
	beq.n 0x101338	@ 001012fc 1cd0
.org 0x1012fe
	adds r1, r3, #0	@ 001012fe 191c
.org 0x101300
	adds r1, #37	@ 00101300 2531
.org 0x101302
	movs r2, #0	@ 00101302 0022
.org 0x101304
	movs r0, #30	@ 00101304 1e20
.org 0x101306
	strb r0, [r1, #0]	@ 00101306 0870
.org 0x101308
	ldr r0, [pc, #56]	@ 00101308 0e48
.org 0x10130a
	movs r1, #61	@ 0010130a 3d21
.org 0x10130c
	strb r1, [r3, #9]	@ 0010130c 5972
.org 0x10130e
	adds r0, #244	@ 0010130e f430
.org 0x101310
	ldr r0, [r0, #0]	@ 00101310 0068
.org 0x101312
	ldr r0, [r0, #0]	@ 00101312 0068
.org 0x101314
	str r0, [r3, #20]	@ 00101314 5861
.org 0x101316
	movs r0, #0	@ 00101316 0020
.org 0x101318
	strh r2, [r3, #32]	@ 00101318 1a84
.org 0x10131a
	adds r1, r3, #0	@ 0010131a 191c
.org 0x10131c
	adds r1, #34	@ 0010131c 2231
.org 0x10131e
	strb r0, [r1, #0]	@ 0010131e 0870
.org 0x101320
	ldrb r1, [r3, #11]	@ 00101320 d97a
.org 0x101322
	movs r0, #16	@ 00101322 1020
.org 0x101324
	orrs r0, r1	@ 00101324 0843
.org 0x101326
	strb r0, [r3, #11]	@ 00101326 d872
.org 0x101328
	ldrb r0, [r3, #28]	@ 00101328 187f
.org 0x10132a
	strb r0, [r3, #29]	@ 0010132a 5877
.org 0x10132c
	ldr r0, [r6, #0]	@ 0010132c 3068
.org 0x10132e
	ldr r1, [r6, #4]	@ 0010132e 7168
.org 0x101330
	str r0, [r3, #84]	@ 00101330 5865
.org 0x101332
	str r1, [r3, #88]	@ 00101332 9965
.org 0x101334
	strb r5, [r3, #16]	@ 00101334 1d74
.org 0x101336
	strb r4, [r3, #17]	@ 00101336 5c74
.org 0x101338
	adds r0, r3, #0	@ 00101338 181c
.org 0x10133a
	pop {r4, r5, r6}	@ 0010133a 70bc
.org 0x10133c
	pop {r1}	@ 0010133c 02bc
.org 0x10133e
	bx r1	@ 0010133e 0847
