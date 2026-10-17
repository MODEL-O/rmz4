@ FUN_080ba5d8  entry 0x080ba5d8  size 122
.thumb
.org 0xba5d8
FUN_080ba5d8:
	push {r4, r5, r6, r7, lr}	@ 000ba5d8 f0b5
.org 0xba5da
	adds r4, r0, #0	@ 000ba5da 041c
.org 0xba5dc
	adds r7, r1, #0	@ 000ba5dc 0f1c
.org 0xba5de
	lsls r2, r2, #24	@ 000ba5de 1206
.org 0xba5e0
	lsrs r6, r2, #24	@ 000ba5e0 160e
.org 0xba5e2
	lsls r3, r3, #24	@ 000ba5e2 1b06
.org 0xba5e4
	lsrs r5, r3, #24	@ 000ba5e4 1d0e
.org 0xba5e6
	ldr r0, [pc, #108]	@ 000ba5e6 1b48
.org 0xba5e8
	ldr r0, [r0, #0]	@ 000ba5e8 0068
.org 0xba5ea
	bl 0x5500	@ 000ba5ea 4af789ff
.org 0xba5ee
	adds r3, r0, #0	@ 000ba5ee 031c
.org 0xba5f0
	cmp r3, #0	@ 000ba5f0 002b
.org 0xba5f2
	beq.n 0xba64a	@ 000ba5f2 2ad0
.org 0xba5f4
	adds r1, r3, #0	@ 000ba5f4 191c
.org 0xba5f6
	adds r1, #37	@ 000ba5f6 2531
.org 0xba5f8
	movs r2, #0	@ 000ba5f8 0022
.org 0xba5fa
	movs r0, #24	@ 000ba5fa 1820
.org 0xba5fc
	strb r0, [r1, #0]	@ 000ba5fc 0870
.org 0xba5fe
	ldr r0, [pc, #88]	@ 000ba5fe 1648
.org 0xba600
	movs r1, #110	@ 000ba600 6e21
.org 0xba602
	strb r1, [r3, #9]	@ 000ba602 5972
.org 0xba604
	movs r1, #220	@ 000ba604 dc21
.org 0xba606
	lsls r1, r1, #1	@ 000ba606 4900
.org 0xba608
	adds r0, r0, r1	@ 000ba608 4018
.org 0xba60a
	ldr r0, [r0, #0]	@ 000ba60a 0068
.org 0xba60c
	ldr r0, [r0, #0]	@ 000ba60c 0068
.org 0xba60e
	str r0, [r3, #20]	@ 000ba60e 5861
.org 0xba610
	movs r0, #0	@ 000ba610 0020
.org 0xba612
	strh r2, [r3, #32]	@ 000ba612 1a84
.org 0xba614
	adds r1, r3, #0	@ 000ba614 191c
.org 0xba616
	adds r1, #34	@ 000ba616 2231
.org 0xba618
	strb r0, [r1, #0]	@ 000ba618 0870
.org 0xba61a
	ldrb r1, [r3, #11]	@ 000ba61a d97a
.org 0xba61c
	movs r0, #16	@ 000ba61c 1020
.org 0xba61e
	orrs r0, r1	@ 000ba61e 0843
.org 0xba620
	strb r0, [r3, #11]	@ 000ba620 d872
.org 0xba622
	ldrb r0, [r3, #28]	@ 000ba622 187f
.org 0xba624
	strb r0, [r3, #29]	@ 000ba624 5877
.org 0xba626
	str r4, [r3, #40]	@ 000ba626 9c62
.org 0xba628
	ldr r0, [r7, #0]	@ 000ba628 3868
.org 0xba62a
	ldr r1, [r7, #4]	@ 000ba62a 7968
.org 0xba62c
	str r0, [r3, #84]	@ 000ba62c 5865
.org 0xba62e
	str r1, [r3, #88]	@ 000ba62e 9965
.org 0xba630
	strb r6, [r3, #16]	@ 000ba630 1e74
.org 0xba632
	strb r5, [r3, #17]	@ 000ba632 5d74
.org 0xba634
	adds r1, r4, #0	@ 000ba634 211c
.org 0xba636
	adds r1, #204	@ 000ba636 cc31
.org 0xba638
	ldrh r0, [r1, #0]	@ 000ba638 0888
.org 0xba63a
	adds r0, #1	@ 000ba63a 0130
.org 0xba63c
	strh r0, [r1, #0]	@ 000ba63c 0880
.org 0xba63e
	adds r2, r4, #0	@ 000ba63e 221c
.org 0xba640
	adds r2, #191	@ 000ba640 bf32
.org 0xba642
	ldrb r1, [r2, #0]	@ 000ba642 1178
.org 0xba644
	movs r0, #251	@ 000ba644 fb20
.org 0xba646
	ands r0, r1	@ 000ba646 0840
.org 0xba648
	strb r0, [r2, #0]	@ 000ba648 1070
.org 0xba64a
	adds r0, r3, #0	@ 000ba64a 181c
.org 0xba64c
	pop {r4, r5, r6, r7}	@ 000ba64c f0bc
.org 0xba64e
	pop {r1}	@ 000ba64e 02bc
.org 0xba650
	bx r1	@ 000ba650 0847
