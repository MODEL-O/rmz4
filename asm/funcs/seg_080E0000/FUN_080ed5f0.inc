@ FUN_080ed5f0  entry 0x080ed5f0  size 130
.thumb
.org 0xed5f0
FUN_080ed5f0:
	push {r4, r5, lr}	@ 000ed5f0 30b5
.org 0xed5f2
	adds r4, r0, #0	@ 000ed5f2 041c
.org 0xed5f4
	bl 0x1cff0	@ 000ed5f4 2ff7fcfc
.org 0xed5f8
	ldrb r1, [r4, #18]	@ 000ed5f8 a17c
.org 0xed5fa
	movs r0, #1	@ 000ed5fa 0120
.org 0xed5fc
	ands r0, r1	@ 000ed5fc 0840
.org 0xed5fe
	cmp r0, #0	@ 000ed5fe 0028
.org 0xed600
	beq.n 0xed60a	@ 000ed600 03d0
.org 0xed602
	ldrb r1, [r4, #10]	@ 000ed602 a17a
.org 0xed604
	movs r0, #254	@ 000ed604 fe20
.org 0xed606
	ands r0, r1	@ 000ed606 0840
.org 0xed608
	b.n 0xed610	@ 000ed608 02e0
.org 0xed60a
	ldrb r0, [r4, #10]	@ 000ed60a a07a
.org 0xed60c
	movs r1, #1	@ 000ed60c 0121
.org 0xed60e
	orrs r0, r1	@ 000ed60e 0843
.org 0xed610
	strb r0, [r4, #10]	@ 000ed610 a072
.org 0xed612
	ldr r1, [pc, #96]	@ 000ed612 1849
.org 0xed614
	ldrb r2, [r4, #18]	@ 000ed614 a27c
.org 0xed616
	lsls r0, r2, #28	@ 000ed616 1007
.org 0xed618
	movs r3, #128	@ 000ed618 8023
.org 0xed61a
	lsls r3, r3, #23	@ 000ed61a db05
.org 0xed61c
	adds r0, r0, r3	@ 000ed61c c018
.org 0xed61e
	lsrs r0, r0, #23	@ 000ed61e c00d
.org 0xed620
	adds r0, r0, r1	@ 000ed620 4018
.org 0xed622
	ldrh r1, [r0, #0]	@ 000ed622 0188
.org 0xed624
	lsls r1, r1, #16	@ 000ed624 0904
.org 0xed626
	asrs r1, r1, #18	@ 000ed626 8914
.org 0xed628
	ldr r0, [r4, #84]	@ 000ed628 606d
.org 0xed62a
	adds r0, r0, r1	@ 000ed62a 4018
.org 0xed62c
	str r0, [r4, #84]	@ 000ed62c 6065
.org 0xed62e
	ldr r0, [r4, #88]	@ 000ed62e a06d
.org 0xed630
	ldr r1, [r4, #96]	@ 000ed630 216e
.org 0xed632
	adds r0, r0, r1	@ 000ed632 4018
.org 0xed634
	str r0, [r4, #88]	@ 000ed634 a065
.org 0xed636
	subs r1, #32	@ 000ed636 2039
.org 0xed638
	str r1, [r4, #96]	@ 000ed638 2166
.org 0xed63a
	ldr r5, [pc, #60]	@ 000ed63a 0f4d
.org 0xed63c
	adds r3, r0, r5	@ 000ed63c 4319
.org 0xed63e
	subs r2, #1	@ 000ed63e 013a
.org 0xed640
	strb r2, [r4, #18]	@ 000ed640 a274
.org 0xed642
	lsls r2, r2, #24	@ 000ed642 1206
.org 0xed644
	lsrs r2, r2, #24	@ 000ed644 120e
.org 0xed646
	cmp r2, #255	@ 000ed646 ff2a
.org 0xed648
	beq.n 0xed65a	@ 000ed648 07d0
.org 0xed64a
	ldr r0, [pc, #48]	@ 000ed64a 0c48
.org 0xed64c
	ldr r2, [pc, #48]	@ 000ed64c 0c4a
.org 0xed64e
	adds r0, r0, r2	@ 000ed64e 8018
.org 0xed650
	ldr r0, [r0, #0]	@ 000ed650 0068
.org 0xed652
	cmp r0, r3	@ 000ed652 9842
.org 0xed654
	ble.n 0xed66c	@ 000ed654 0add
.org 0xed656
	cmp r1, #0	@ 000ed656 0029
.org 0xed658
	bge.n 0xed66c	@ 000ed658 08da
.org 0xed65a
	ldr r1, [pc, #40]	@ 000ed65a 0a49
.org 0xed65c
	ldrb r0, [r4, #9]	@ 000ed65c 607a
.org 0xed65e
	lsls r0, r0, #2	@ 000ed65e 8000
.org 0xed660
	adds r0, r0, r1	@ 000ed660 4018
.org 0xed662
	movs r1, #2	@ 000ed662 0221
.org 0xed664
	str r1, [r4, #12]	@ 000ed664 e160
.org 0xed666
	ldr r0, [r0, #0]	@ 000ed666 0068
.org 0xed668
	ldr r0, [r0, #8]	@ 000ed668 8068
.org 0xed66a
	str r0, [r4, #20]	@ 000ed66a 6061
.org 0xed66c
	pop {r4, r5}	@ 000ed66c 30bc
.org 0xed66e
	pop {r0}	@ 000ed66e 01bc
.org 0xed670
	bx r0	@ 000ed670 0047
