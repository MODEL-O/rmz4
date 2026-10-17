@ FUN_080d3518  entry 0x080d3518  size 90
.thumb
.org 0xd3518
FUN_080d3518:
	push {r4, r5, r6, r7, lr}	@ 000d3518 f0b5
.org 0xd351a
	adds r6, r0, #0	@ 000d351a 061c
.org 0xd351c
	adds r5, r1, #0	@ 000d351c 0d1c
.org 0xd351e
	lsls r2, r2, #24	@ 000d351e 1206
.org 0xd3520
	lsrs r4, r2, #24	@ 000d3520 140e
.org 0xd3522
	lsls r3, r3, #24	@ 000d3522 1b06
.org 0xd3524
	lsrs r7, r3, #24	@ 000d3524 1f0e
.org 0xd3526
	ldr r0, [pc, #76]	@ 000d3526 1348
.org 0xd3528
	ldr r0, [r0, #0]	@ 000d3528 0068
.org 0xd352a
	bl 0x5500	@ 000d352a 31f7e9ff
.org 0xd352e
	adds r3, r0, #0	@ 000d352e 031c
.org 0xd3530
	cmp r3, #0	@ 000d3530 002b
.org 0xd3532
	beq.n 0xd356a	@ 000d3532 1ad0
.org 0xd3534
	adds r1, r3, #0	@ 000d3534 191c
.org 0xd3536
	adds r1, #37	@ 000d3536 2531
.org 0xd3538
	movs r2, #0	@ 000d3538 0022
.org 0xd353a
	movs r0, #1	@ 000d353a 0120
.org 0xd353c
	strb r0, [r1, #0]	@ 000d353c 0870
.org 0xd353e
	ldr r1, [pc, #56]	@ 000d353e 0e49
.org 0xd3540
	movs r0, #10	@ 000d3540 0a20
.org 0xd3542
	strb r0, [r3, #9]	@ 000d3542 5872
.org 0xd3544
	ldr r0, [r1, #40]	@ 000d3544 886a
.org 0xd3546
	ldr r0, [r0, #0]	@ 000d3546 0068
.org 0xd3548
	str r0, [r3, #20]	@ 000d3548 5861
.org 0xd354a
	movs r1, #0	@ 000d354a 0021
.org 0xd354c
	strh r2, [r3, #32]	@ 000d354c 1a84
.org 0xd354e
	adds r0, r3, #0	@ 000d354e 181c
.org 0xd3550
	adds r0, #34	@ 000d3550 2230
.org 0xd3552
	strb r1, [r0, #0]	@ 000d3552 0170
.org 0xd3554
	str r6, [r3, #40]	@ 000d3554 9e62
.org 0xd3556
	ldr r0, [r5, #0]	@ 000d3556 2868
.org 0xd3558
	str r0, [r3, #116]	@ 000d3558 5867
.org 0xd355a
	ldr r0, [r5, #4]	@ 000d355a 6868
.org 0xd355c
	str r0, [r3, #120]	@ 000d355c 9867
.org 0xd355e
	strb r4, [r3, #18]	@ 000d355e 9c74
.org 0xd3560
	adds r0, r3, #0	@ 000d3560 181c
.org 0xd3562
	adds r0, #124	@ 000d3562 7c30
.org 0xd3564
	strb r4, [r0, #0]	@ 000d3564 0470
.org 0xd3566
	strb r1, [r3, #16]	@ 000d3566 1974
.org 0xd3568
	strb r7, [r3, #17]	@ 000d3568 5f74
.org 0xd356a
	adds r0, r3, #0	@ 000d356a 181c
.org 0xd356c
	pop {r4, r5, r6, r7}	@ 000d356c f0bc
.org 0xd356e
	pop {r1}	@ 000d356e 02bc
.org 0xd3570
	bx r1	@ 000d3570 0847
