@ FUN_080b3528  entry 0x080b3528  size 124
.thumb
.org 0xb3528
FUN_080b3528:
	push {r4, r5, r6, r7, lr}	@ 000b3528 f0b5
.org 0xb352a
	adds r6, r0, #0	@ 000b352a 061c
.org 0xb352c
	ldrb r2, [r6, #14]	@ 000b352c b27b
.org 0xb352e
	cmp r2, #0	@ 000b352e 002a
.org 0xb3530
	bne.n 0xb3556	@ 000b3530 11d1
.org 0xb3532
	ldrb r1, [r6, #10]	@ 000b3532 b17a
.org 0xb3534
	movs r0, #254	@ 000b3534 fe20
.org 0xb3536
	ands r0, r1	@ 000b3536 0840
.org 0xb3538
	strb r0, [r6, #10]	@ 000b3538 b072
.org 0xb353a
	adds r0, r6, #0	@ 000b353a 301c
.org 0xb353c
	adds r0, #140	@ 000b353c 8c30
.org 0xb353e
	str r2, [r0, #0]	@ 000b353e 0260
.org 0xb3540
	adds r0, #4	@ 000b3540 0430
.org 0xb3542
	str r2, [r0, #0]	@ 000b3542 0260
.org 0xb3544
	adds r0, #4	@ 000b3544 0430
.org 0xb3546
	strb r2, [r0, #0]	@ 000b3546 0270
.org 0xb3548
	ldrb r1, [r6, #10]	@ 000b3548 b17a
.org 0xb354a
	movs r0, #251	@ 000b354a fb20
.org 0xb354c
	ands r0, r1	@ 000b354c 0840
.org 0xb354e
	strb r0, [r6, #10]	@ 000b354e b072
.org 0xb3550
	ldrb r0, [r6, #14]	@ 000b3550 b07b
.org 0xb3552
	adds r0, #1	@ 000b3552 0130
.org 0xb3554
	strb r0, [r6, #14]	@ 000b3554 b073
.org 0xb3556
	ldr r1, [r6, #44]	@ 000b3556 f16a
.org 0xb3558
	ldrb r0, [r1, #12]	@ 000b3558 087b
.org 0xb355a
	cmp r0, #1	@ 000b355a 0128
.org 0xb355c
	bls.n 0xb359e	@ 000b355c 1fd9
.org 0xb355e
	ldr r0, [r1, #84]	@ 000b355e 486d
.org 0xb3560
	str r0, [r6, #84]	@ 000b3560 7065
.org 0xb3562
	ldr r0, [r1, #88]	@ 000b3562 886d
.org 0xb3564
	ldr r1, [pc, #60]	@ 000b3564 0f49
.org 0xb3566
	adds r0, r0, r1	@ 000b3566 4018
.org 0xb3568
	str r0, [r6, #88]	@ 000b3568 b065
.org 0xb356a
	ldrb r1, [r6, #10]	@ 000b356a b17a
.org 0xb356c
	movs r0, #1	@ 000b356c 0120
.org 0xb356e
	movs r5, #0	@ 000b356e 0025
.org 0xb3570
	orrs r0, r1	@ 000b3570 0843
.org 0xb3572
	movs r1, #4	@ 000b3572 0421
.org 0xb3574
	orrs r0, r1	@ 000b3574 0843
.org 0xb3576
	strb r0, [r6, #10]	@ 000b3576 b072
.org 0xb3578
	adds r4, r6, #0	@ 000b3578 341c
.org 0xb357a
	adds r4, #116	@ 000b357a 7434
.org 0xb357c
	ldr r1, [pc, #40]	@ 000b357c 0a49
.org 0xb357e
	adds r2, r6, #0	@ 000b357e 321c
.org 0xb3580
	adds r2, #84	@ 000b3580 5432
.org 0xb3582
	adds r0, r6, #0	@ 000b3582 301c
.org 0xb3584
	adds r0, #164	@ 000b3584 a430
.org 0xb3586
	movs r7, #0	@ 000b3586 0027
.org 0xb3588
	ldrsh r3, [r0, r7]	@ 000b3588 c35f
.org 0xb358a
	adds r0, r4, #0	@ 000b358a 201c
.org 0xb358c
	bl 0x5760	@ 000b358c 52f7e8f8
.org 0xb3590
	str r6, [r4, #44]	@ 000b3590 e662
.org 0xb3592
	ldr r0, [pc, #24]	@ 000b3592 0648
.org 0xb3594
	str r0, [r4, #36]	@ 000b3594 6062
.org 0xb3596
	str r5, [r6, #44]	@ 000b3596 f562
.org 0xb3598
	movs r0, #4	@ 000b3598 0420
.org 0xb359a
	strb r0, [r6, #13]	@ 000b359a 7073
.org 0xb359c
	strb r5, [r6, #14]	@ 000b359c b573
.org 0xb359e
	pop {r4, r5, r6, r7}	@ 000b359e f0bc
.org 0xb35a0
	pop {r0}	@ 000b35a0 01bc
.org 0xb35a2
	bx r0	@ 000b35a2 0047
