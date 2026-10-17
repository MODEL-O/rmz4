@ FUN_08041634  entry 0x08041634  size 130
.thumb
.org 0x41634
FUN_08041634:
	push {r4, r5, lr}	@ 00041634 30b5
.org 0x41636
	adds r4, r0, #0	@ 00041636 041c
.org 0x41638
	lsls r1, r1, #24	@ 00041638 0906
.org 0x4163a
	lsrs r5, r1, #24	@ 0004163a 0d0e
.org 0x4163c
	ldr r0, [pc, #60]	@ 0004163c 0f48
.org 0x4163e
	ldr r0, [r0, #0]	@ 0004163e 0068
.org 0x41640
	bl 0x5500	@ 00041640 c3f75eff
.org 0x41644
	adds r2, r0, #0	@ 00041644 021c
.org 0x41646
	cmp r2, #0	@ 00041646 002a
.org 0x41648
	beq.n 0x416be	@ 00041648 39d0
.org 0x4164a
	adds r0, r4, #0	@ 0004164a 201c
.org 0x4164c
	adds r0, #248	@ 0004164c f830
.org 0x4164e
	ldrb r0, [r0, #0]	@ 0004164e 0078
.org 0x41650
	cmp r0, #2	@ 00041650 0228
.org 0x41652
	bne.n 0x4168c	@ 00041652 1bd1
.org 0x41654
	ldr r1, [pc, #40]	@ 00041654 0a49
.org 0x41656
	movs r0, #12	@ 00041656 0c20
.org 0x41658
	strb r0, [r2, #9]	@ 00041658 5072
.org 0x4165a
	ldr r0, [r1, #48]	@ 0004165a 086b
.org 0x4165c
	ldr r0, [r0, #0]	@ 0004165c 0068
.org 0x4165e
	str r0, [r2, #20]	@ 0004165e 5061
.org 0x41660
	ldrb r1, [r2, #11]	@ 00041660 d17a
.org 0x41662
	movs r0, #191	@ 00041662 bf20
.org 0x41664
	ands r0, r1	@ 00041664 0840
.org 0x41666
	strb r0, [r2, #11]	@ 00041666 d072
.org 0x41668
	adds r1, r2, #0	@ 00041668 111c
.org 0x4166a
	adds r1, #37	@ 0004166a 2531
.org 0x4166c
	movs r0, #16	@ 0004166c 1020
.org 0x4166e
	strb r0, [r1, #0]	@ 0004166e 0870
.org 0x41670
	ldr r0, [pc, #16]	@ 00041670 0448
.org 0x41672
	ldrh r0, [r0, #0]	@ 00041672 0088
.org 0x41674
	strh r0, [r2, #32]	@ 00041674 1084
.org 0x41676
	ldr r0, [pc, #16]	@ 00041676 0448
.org 0x41678
	ldrb r0, [r0, #0]	@ 00041678 0078
.org 0x4167a
	b.n 0x416b2	@ 0004167a 1ae0
.org 0x4167c
	.byte 0x88,0xed,0x02,0x02	@ 0004167c data
.org 0x41680
	.byte 0xf8,0x39,0x85,0x08	@ 00041680 data
.org 0x41684
	.byte 0xfc,0x36,0x85,0x08	@ 00041684 data
.org 0x41688
	.byte 0x04,0x37,0x85,0x08	@ 00041688 data
.org 0x4168c
	ldr r1, [pc, #56]	@ 0004168c 0e49
.org 0x4168e
	movs r0, #12	@ 0004168e 0c20
.org 0x41690
	strb r0, [r2, #9]	@ 00041690 5072
.org 0x41692
	ldr r0, [r1, #48]	@ 00041692 086b
.org 0x41694
	ldr r0, [r0, #0]	@ 00041694 0068
.org 0x41696
	str r0, [r2, #20]	@ 00041696 5061
.org 0x41698
	ldrb r1, [r2, #11]	@ 00041698 d17a
.org 0x4169a
	movs r0, #191	@ 0004169a bf20
.org 0x4169c
	ands r0, r1	@ 0004169c 0840
.org 0x4169e
	strb r0, [r2, #11]	@ 0004169e d072
.org 0x416a0
	adds r1, r2, #0	@ 000416a0 111c
.org 0x416a2
	adds r1, #37	@ 000416a2 2531
.org 0x416a4
	movs r0, #16	@ 000416a4 1020
.org 0x416a6
	strb r0, [r1, #0]	@ 000416a6 0870
.org 0x416a8
	ldr r0, [pc, #32]	@ 000416a8 0848
.org 0x416aa
	ldrh r0, [r0, #2]	@ 000416aa 4088
.org 0x416ac
	strh r0, [r2, #32]	@ 000416ac 1084
.org 0x416ae
	ldr r0, [pc, #32]	@ 000416ae 0848
.org 0x416b0
	ldrb r0, [r0, #1]	@ 000416b0 4078
.org 0x416b2
	subs r1, #3	@ 000416b2 0339
.org 0x416b4
	strb r0, [r1, #0]	@ 000416b4 0870
