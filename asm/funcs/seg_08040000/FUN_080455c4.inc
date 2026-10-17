@ FUN_080455c4  entry 0x080455c4  size 132
.thumb
.org 0x455c4
FUN_080455c4:
	push {r4, r5, r6, lr}	@ 000455c4 70b5
.org 0x455c6
	adds r4, r0, #0	@ 000455c6 041c
.org 0x455c8
	adds r5, r1, #0	@ 000455c8 0d1c
.org 0x455ca
	lsls r2, r2, #24	@ 000455ca 1206
.org 0x455cc
	lsrs r6, r2, #24	@ 000455cc 160e
.org 0x455ce
	ldr r0, [pc, #64]	@ 000455ce 1048
.org 0x455d0
	ldr r0, [r0, #0]	@ 000455d0 0068
.org 0x455d2
	bl 0x5500	@ 000455d2 bff795ff
.org 0x455d6
	adds r2, r0, #0	@ 000455d6 021c
.org 0x455d8
	cmp r2, #0	@ 000455d8 002a
.org 0x455da
	beq.n 0x45654	@ 000455da 3bd0
.org 0x455dc
	adds r0, r4, #0	@ 000455dc 201c
.org 0x455de
	adds r0, #248	@ 000455de f830
.org 0x455e0
	ldrb r0, [r0, #0]	@ 000455e0 0078
.org 0x455e2
	cmp r0, #2	@ 000455e2 0228
.org 0x455e4
	bne.n 0x45620	@ 000455e4 1cd1
.org 0x455e6
	ldr r1, [pc, #44]	@ 000455e6 0b49
.org 0x455e8
	movs r0, #23	@ 000455e8 1720
.org 0x455ea
	strb r0, [r2, #9]	@ 000455ea 5072
.org 0x455ec
	ldr r0, [r1, #92]	@ 000455ec c86d
.org 0x455ee
	ldr r0, [r0, #0]	@ 000455ee 0068
.org 0x455f0
	str r0, [r2, #20]	@ 000455f0 5061
.org 0x455f2
	ldrb r1, [r2, #11]	@ 000455f2 d17a
.org 0x455f4
	movs r0, #191	@ 000455f4 bf20
.org 0x455f6
	ands r0, r1	@ 000455f6 0840
.org 0x455f8
	strb r0, [r2, #11]	@ 000455f8 d072
.org 0x455fa
	adds r1, r2, #0	@ 000455fa 111c
.org 0x455fc
	adds r1, #37	@ 000455fc 2531
.org 0x455fe
	movs r0, #16	@ 000455fe 1020
.org 0x45600
	strb r0, [r1, #0]	@ 00045600 0870
.org 0x45602
	ldr r0, [pc, #20]	@ 00045602 0548
.org 0x45604
	ldrh r0, [r0, #0]	@ 00045604 0088
.org 0x45606
	strh r0, [r2, #32]	@ 00045606 1084
.org 0x45608
	ldr r0, [pc, #16]	@ 00045608 0448
.org 0x4560a
	ldrb r0, [r0, #0]	@ 0004560a 0078
.org 0x4560c
	b.n 0x45646	@ 0004560c 1be0
.org 0x4560e
	.byte 0x00	@ 0004560e data
.org 0x4560f
	.byte 0x00	@ 0004560f data
.org 0x45610
	.byte 0x88,0xed,0x02,0x02	@ 00045610 data
.org 0x45614
	.byte 0xf8,0x39,0x85,0x08	@ 00045614 data
.org 0x45618
	.byte 0xfc,0x36,0x85,0x08	@ 00045618 data
.org 0x4561c
	.byte 0x04,0x37,0x85,0x08	@ 0004561c data
.org 0x45620
	ldr r1, [pc, #56]	@ 00045620 0e49
.org 0x45622
	movs r0, #23	@ 00045622 1720
.org 0x45624
	strb r0, [r2, #9]	@ 00045624 5072
.org 0x45626
	ldr r0, [r1, #92]	@ 00045626 c86d
.org 0x45628
	ldr r0, [r0, #0]	@ 00045628 0068
.org 0x4562a
	str r0, [r2, #20]	@ 0004562a 5061
.org 0x4562c
	ldrb r1, [r2, #11]	@ 0004562c d17a
.org 0x4562e
	movs r0, #191	@ 0004562e bf20
.org 0x45630
	ands r0, r1	@ 00045630 0840
.org 0x45632
	strb r0, [r2, #11]	@ 00045632 d072
.org 0x45634
	adds r1, r2, #0	@ 00045634 111c
.org 0x45636
	adds r1, #37	@ 00045636 2531
.org 0x45638
	movs r0, #16	@ 00045638 1020
.org 0x4563a
	strb r0, [r1, #0]	@ 0004563a 0870
.org 0x4563c
	ldr r0, [pc, #32]	@ 0004563c 0848
.org 0x4563e
	ldrh r0, [r0, #2]	@ 0004563e 4088
.org 0x45640
	strh r0, [r2, #32]	@ 00045640 1084
.org 0x45642
	ldr r0, [pc, #32]	@ 00045642 0848
.org 0x45644
	ldrb r0, [r0, #1]	@ 00045644 4078
.org 0x45646
	subs r1, #3	@ 00045646 0339
