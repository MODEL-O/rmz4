@ FUN_080dd60c  entry 0x080dd60c  size 154
.thumb
.org 0xdd60c
FUN_080dd60c:
	push {r4, r5, r6, r7, lr}	@ 000dd60c f0b5
.org 0xdd60e
	mov r7, r8	@ 000dd60e 4746
.org 0xdd610
	push {r7}	@ 000dd610 80b4
.org 0xdd612
	adds r5, r0, #0	@ 000dd612 051c
.org 0xdd614
	adds r6, r1, #0	@ 000dd614 0e1c
.org 0xdd616
	ldr r0, [sp, #24]	@ 000dd616 0698
.org 0xdd618
	lsls r2, r2, #24	@ 000dd618 1206
.org 0xdd61a
	lsrs r2, r2, #24	@ 000dd61a 120e
.org 0xdd61c
	mov r8, r2	@ 000dd61c 9046
.org 0xdd61e
	lsls r3, r3, #24	@ 000dd61e 1b06
.org 0xdd620
	lsrs r7, r3, #24	@ 000dd620 1f0e
.org 0xdd622
	lsls r0, r0, #24	@ 000dd622 0006
.org 0xdd624
	lsrs r4, r0, #24	@ 000dd624 040e
.org 0xdd626
	ldr r0, [pc, #72]	@ 000dd626 1248
.org 0xdd628
	ldr r0, [r0, #0]	@ 000dd628 0068
.org 0xdd62a
	bl 0x5500	@ 000dd62a 27f769ff
.org 0xdd62e
	adds r3, r0, #0	@ 000dd62e 031c
.org 0xdd630
	cmp r3, #0	@ 000dd630 002b
.org 0xdd632
	beq.n 0xdd6a6	@ 000dd632 38d0
.org 0xdd634
	adds r1, r3, #0	@ 000dd634 191c
.org 0xdd636
	adds r1, #37	@ 000dd636 2531
.org 0xdd638
	movs r2, #0	@ 000dd638 0022
.org 0xdd63a
	movs r0, #1	@ 000dd63a 0120
.org 0xdd63c
	strb r0, [r1, #0]	@ 000dd63c 0870
.org 0xdd63e
	ldr r0, [pc, #52]	@ 000dd63e 0d48
.org 0xdd640
	movs r1, #45	@ 000dd640 2d21
.org 0xdd642
	strb r1, [r3, #9]	@ 000dd642 5972
.org 0xdd644
	adds r0, #180	@ 000dd644 b430
.org 0xdd646
	ldr r0, [r0, #0]	@ 000dd646 0068
.org 0xdd648
	ldr r0, [r0, #0]	@ 000dd648 0068
.org 0xdd64a
	str r0, [r3, #20]	@ 000dd64a 5861
.org 0xdd64c
	movs r0, #0	@ 000dd64c 0020
.org 0xdd64e
	strh r2, [r3, #32]	@ 000dd64e 1a84
.org 0xdd650
	adds r1, r3, #0	@ 000dd650 191c
.org 0xdd652
	adds r1, #34	@ 000dd652 2231
.org 0xdd654
	strb r0, [r1, #0]	@ 000dd654 0870
.org 0xdd656
	str r5, [r3, #40]	@ 000dd656 9d62
.org 0xdd658
	ldr r0, [r6, #0]	@ 000dd658 3068
.org 0xdd65a
	ldr r1, [r6, #4]	@ 000dd65a 7168
.org 0xdd65c
	str r0, [r3, #84]	@ 000dd65c 5865
.org 0xdd65e
	str r1, [r3, #88]	@ 000dd65e 9965
.org 0xdd660
	adds r2, r4, #0	@ 000dd660 221c
.org 0xdd662
	cmp r2, #0	@ 000dd662 002a
.org 0xdd664
	beq.n 0xdd678	@ 000dd664 08d0
.org 0xdd666
	ldrb r0, [r3, #10]	@ 000dd666 987a
.org 0xdd668
	movs r1, #16	@ 000dd668 1021
.org 0xdd66a
	orrs r0, r1	@ 000dd66a 0843
.org 0xdd66c
	b.n 0xdd67e	@ 000dd66c 07e0
.org 0xdd66e
	.byte 0x00	@ 000dd66e data
.org 0xdd66f
	.byte 0x00	@ 000dd66f data
.org 0xdd670
	.byte 0x9c,0xed,0x02,0x02	@ 000dd670 data
.org 0xdd674
	.byte 0x64,0x6f,0x86,0x08	@ 000dd674 data
.org 0xdd678
	ldrb r1, [r3, #10]	@ 000dd678 997a
.org 0xdd67a
	movs r0, #239	@ 000dd67a ef20
.org 0xdd67c
	ands r0, r1	@ 000dd67c 0840
.org 0xdd67e
	strb r0, [r3, #10]	@ 000dd67e 9872
.org 0xdd680
	movs r1, #1	@ 000dd680 0121
.org 0xdd682
	ands r1, r2	@ 000dd682 1140
.org 0xdd684
	adds r0, r3, #0	@ 000dd684 181c
.org 0xdd686
	adds r0, #76	@ 000dd686 4c30
.org 0xdd688
	strb r1, [r0, #0]	@ 000dd688 0170
.org 0xdd68a
	movs r0, #74	@ 000dd68a 4a20
.org 0xdd68c
	adds r0, r0, r3	@ 000dd68c c018
.org 0xdd68e
	mov ip, r0	@ 000dd68e 8446
.org 0xdd690
	lsls r1, r1, #4	@ 000dd690 0901
.org 0xdd692
	ldrb r2, [r0, #0]	@ 000dd692 0278
.org 0xdd694
	movs r0, #17	@ 000dd694 1120
.org 0xdd696
	negs r0, r0	@ 000dd696 4042
.org 0xdd698
	ands r0, r2	@ 000dd698 1040
.org 0xdd69a
	orrs r0, r1	@ 000dd69a 0843
.org 0xdd69c
	mov r1, ip	@ 000dd69c 6146
.org 0xdd69e
	strb r0, [r1, #0]	@ 000dd69e 0870
.org 0xdd6a0
	mov r0, r8	@ 000dd6a0 4046
.org 0xdd6a2
	strb r0, [r3, #16]	@ 000dd6a2 1874
.org 0xdd6a4
	strb r7, [r3, #17]	@ 000dd6a4 5f74
