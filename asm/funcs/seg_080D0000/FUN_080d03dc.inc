@ FUN_080d03dc  entry 0x080d03dc  size 96
.thumb
.org 0xd03dc
FUN_080d03dc:
	push {r4, r5, r6, r7, lr}	@ 000d03dc f0b5
.org 0xd03de
	adds r4, r0, #0	@ 000d03de 041c
.org 0xd03e0
	adds r7, r1, #0	@ 000d03e0 0f1c
.org 0xd03e2
	lsls r2, r2, #24	@ 000d03e2 1206
.org 0xd03e4
	lsrs r6, r2, #24	@ 000d03e4 160e
.org 0xd03e6
	lsls r3, r3, #24	@ 000d03e6 1b06
.org 0xd03e8
	lsrs r5, r3, #24	@ 000d03e8 1d0e
.org 0xd03ea
	ldr r0, [pc, #80]	@ 000d03ea 1448
.org 0xd03ec
	ldr r0, [r0, #0]	@ 000d03ec 0068
.org 0xd03ee
	bl 0x5500	@ 000d03ee 35f787f8
.org 0xd03f2
	adds r3, r0, #0	@ 000d03f2 031c
.org 0xd03f4
	cmp r3, #0	@ 000d03f4 002b
.org 0xd03f6
	beq.n 0xd0434	@ 000d03f6 1dd0
.org 0xd03f8
	adds r1, r3, #0	@ 000d03f8 191c
.org 0xd03fa
	adds r1, #37	@ 000d03fa 2531
.org 0xd03fc
	movs r2, #0	@ 000d03fc 0022
.org 0xd03fe
	movs r0, #8	@ 000d03fe 0820
.org 0xd0400
	strb r0, [r1, #0]	@ 000d0400 0870
.org 0xd0402
	ldr r0, [pc, #60]	@ 000d0402 0f48
.org 0xd0404
	movs r1, #64	@ 000d0404 4021
.org 0xd0406
	strb r1, [r3, #9]	@ 000d0406 5972
.org 0xd0408
	adds r1, #192	@ 000d0408 c031
.org 0xd040a
	adds r0, r0, r1	@ 000d040a 4018
.org 0xd040c
	ldr r0, [r0, #0]	@ 000d040c 0068
.org 0xd040e
	ldr r0, [r0, #0]	@ 000d040e 0068
.org 0xd0410
	str r0, [r3, #20]	@ 000d0410 5861
.org 0xd0412
	movs r0, #0	@ 000d0412 0020
.org 0xd0414
	strh r2, [r3, #32]	@ 000d0414 1a84
.org 0xd0416
	adds r1, r3, #0	@ 000d0416 191c
.org 0xd0418
	adds r1, #34	@ 000d0418 2231
.org 0xd041a
	strb r0, [r1, #0]	@ 000d041a 0870
.org 0xd041c
	str r4, [r3, #40]	@ 000d041c 9c62
.org 0xd041e
	ldr r0, [r7, #0]	@ 000d041e 3868
.org 0xd0420
	ldr r1, [r7, #4]	@ 000d0420 7968
.org 0xd0422
	str r0, [r3, #84]	@ 000d0422 5865
.org 0xd0424
	str r1, [r3, #88]	@ 000d0424 9965
.org 0xd0426
	strb r6, [r3, #16]	@ 000d0426 1e74
.org 0xd0428
	strb r5, [r3, #17]	@ 000d0428 5d74
.org 0xd042a
	adds r1, r4, #0	@ 000d042a 211c
.org 0xd042c
	adds r1, #204	@ 000d042c cc31
.org 0xd042e
	ldrh r0, [r1, #0]	@ 000d042e 0888
.org 0xd0430
	adds r0, #1	@ 000d0430 0130
.org 0xd0432
	strh r0, [r1, #0]	@ 000d0432 0880
.org 0xd0434
	adds r0, r3, #0	@ 000d0434 181c
.org 0xd0436
	pop {r4, r5, r6, r7}	@ 000d0436 f0bc
.org 0xd0438
	pop {r1}	@ 000d0438 02bc
.org 0xd043a
	bx r1	@ 000d043a 0847
