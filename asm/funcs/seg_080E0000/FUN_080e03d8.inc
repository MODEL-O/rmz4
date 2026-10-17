@ FUN_080e03d8  entry 0x080e03d8  size 80
.thumb
.org 0xe03d8
FUN_080e03d8:
	push {r4, r5, r6, lr}	@ 000e03d8 70b5
.org 0xe03da
	adds r6, r0, #0	@ 000e03da 061c
.org 0xe03dc
	lsls r1, r1, #24	@ 000e03dc 0906
.org 0xe03de
	lsrs r5, r1, #24	@ 000e03de 0d0e
.org 0xe03e0
	lsls r2, r2, #24	@ 000e03e0 1206
.org 0xe03e2
	lsrs r4, r2, #24	@ 000e03e2 140e
.org 0xe03e4
	ldr r0, [pc, #64]	@ 000e03e4 1048
.org 0xe03e6
	ldr r0, [r0, #0]	@ 000e03e6 0068
.org 0xe03e8
	bl 0x5500	@ 000e03e8 25f78af8
.org 0xe03ec
	adds r3, r0, #0	@ 000e03ec 031c
.org 0xe03ee
	cmp r3, #0	@ 000e03ee 002b
.org 0xe03f0
	beq.n 0xe0420	@ 000e03f0 16d0
.org 0xe03f2
	adds r1, r3, #0	@ 000e03f2 191c
.org 0xe03f4
	adds r1, #37	@ 000e03f4 2531
.org 0xe03f6
	movs r2, #0	@ 000e03f6 0022
.org 0xe03f8
	movs r0, #1	@ 000e03f8 0120
.org 0xe03fa
	strb r0, [r1, #0]	@ 000e03fa 0870
.org 0xe03fc
	ldr r0, [pc, #44]	@ 000e03fc 0b48
.org 0xe03fe
	movs r1, #55	@ 000e03fe 3721
.org 0xe0400
	strb r1, [r3, #9]	@ 000e0400 5972
.org 0xe0402
	adds r0, #220	@ 000e0402 dc30
.org 0xe0404
	ldr r0, [r0, #0]	@ 000e0404 0068
.org 0xe0406
	ldr r0, [r0, #0]	@ 000e0406 0068
.org 0xe0408
	str r0, [r3, #20]	@ 000e0408 5861
.org 0xe040a
	movs r0, #0	@ 000e040a 0020
.org 0xe040c
	strh r2, [r3, #32]	@ 000e040c 1a84
.org 0xe040e
	adds r1, r3, #0	@ 000e040e 191c
.org 0xe0410
	adds r1, #34	@ 000e0410 2231
.org 0xe0412
	strb r0, [r1, #0]	@ 000e0412 0870
.org 0xe0414
	ldr r0, [r6, #0]	@ 000e0414 3068
.org 0xe0416
	ldr r1, [r6, #4]	@ 000e0416 7168
.org 0xe0418
	str r0, [r3, #84]	@ 000e0418 5865
.org 0xe041a
	str r1, [r3, #88]	@ 000e041a 9965
.org 0xe041c
	strb r5, [r3, #16]	@ 000e041c 1d74
.org 0xe041e
	strb r4, [r3, #17]	@ 000e041e 5c74
.org 0xe0420
	adds r0, r3, #0	@ 000e0420 181c
.org 0xe0422
	pop {r4, r5, r6}	@ 000e0422 70bc
.org 0xe0424
	pop {r1}	@ 000e0424 02bc
.org 0xe0426
	bx r1	@ 000e0426 0847
