@ FUN_0809e5f4  entry 0x0809e5f4  size 102
.thumb
.org 0x9e5f4
FUN_0809e5f4:
	push {r4, r5, r6, r7, lr}	@ 0009e5f4 f0b5
.org 0x9e5f6
	adds r7, r0, #0	@ 0009e5f6 071c
.org 0x9e5f8
	lsls r1, r1, #24	@ 0009e5f8 0906
.org 0x9e5fa
	lsrs r6, r1, #24	@ 0009e5fa 0e0e
.org 0x9e5fc
	lsls r2, r2, #24	@ 0009e5fc 1206
.org 0x9e5fe
	lsrs r4, r2, #24	@ 0009e5fe 140e
.org 0x9e600
	lsls r3, r3, #24	@ 0009e600 1b06
.org 0x9e602
	lsrs r5, r3, #24	@ 0009e602 1d0e
.org 0x9e604
	ldr r0, [pc, #84]	@ 0009e604 1548
.org 0x9e606
	ldr r0, [r0, #0]	@ 0009e606 0068
.org 0x9e608
	bl 0x5500	@ 0009e608 66f77aff
.org 0x9e60c
	adds r3, r0, #0	@ 0009e60c 031c
.org 0x9e60e
	cmp r3, #0	@ 0009e60e 002b
.org 0x9e610
	beq.n 0x9e652	@ 0009e610 1fd0
.org 0x9e612
	adds r1, r3, #0	@ 0009e612 191c
.org 0x9e614
	adds r1, #37	@ 0009e614 2531
.org 0x9e616
	movs r2, #0	@ 0009e616 0022
.org 0x9e618
	movs r0, #24	@ 0009e618 1820
.org 0x9e61a
	strb r0, [r1, #0]	@ 0009e61a 0870
.org 0x9e61c
	ldr r0, [pc, #64]	@ 0009e61c 1048
.org 0x9e61e
	movs r1, #45	@ 0009e61e 2d21
.org 0x9e620
	strb r1, [r3, #9]	@ 0009e620 5972
.org 0x9e622
	adds r0, #180	@ 0009e622 b430
.org 0x9e624
	ldr r0, [r0, #0]	@ 0009e624 0068
.org 0x9e626
	ldr r0, [r0, #0]	@ 0009e626 0068
.org 0x9e628
	str r0, [r3, #20]	@ 0009e628 5861
.org 0x9e62a
	movs r0, #0	@ 0009e62a 0020
.org 0x9e62c
	strh r2, [r3, #32]	@ 0009e62c 1a84
.org 0x9e62e
	adds r1, r3, #0	@ 0009e62e 191c
.org 0x9e630
	adds r1, #34	@ 0009e630 2231
.org 0x9e632
	strb r0, [r1, #0]	@ 0009e632 0870
.org 0x9e634
	ldrb r1, [r3, #11]	@ 0009e634 d97a
.org 0x9e636
	movs r0, #16	@ 0009e636 1020
.org 0x9e638
	orrs r0, r1	@ 0009e638 0843
.org 0x9e63a
	strb r0, [r3, #11]	@ 0009e63a d872
.org 0x9e63c
	ldrb r0, [r3, #28]	@ 0009e63c 187f
.org 0x9e63e
	strb r0, [r3, #29]	@ 0009e63e 5877
.org 0x9e640
	ldr r0, [r7, #0]	@ 0009e640 3868
.org 0x9e642
	ldr r1, [r7, #4]	@ 0009e642 7968
.org 0x9e644
	str r0, [r3, #84]	@ 0009e644 5865
.org 0x9e646
	str r1, [r3, #88]	@ 0009e646 9965
.org 0x9e648
	strb r6, [r3, #16]	@ 0009e648 1e74
.org 0x9e64a
	strb r4, [r3, #17]	@ 0009e64a 5c74
.org 0x9e64c
	adds r0, r3, #0	@ 0009e64c 181c
.org 0x9e64e
	adds r0, #180	@ 0009e64e b430
.org 0x9e650
	strb r5, [r0, #0]	@ 0009e650 0570
.org 0x9e652
	adds r0, r3, #0	@ 0009e652 181c
.org 0x9e654
	pop {r4, r5, r6, r7}	@ 0009e654 f0bc
.org 0x9e656
	pop {r1}	@ 0009e656 02bc
.org 0x9e658
	bx r1	@ 0009e658 0847
