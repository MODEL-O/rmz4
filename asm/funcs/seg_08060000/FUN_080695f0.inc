@ FUN_080695f0  entry 0x080695f0  size 190
.thumb
.org 0x695f0
FUN_080695f0:
	push {r4, r5, r6, r7, lr}	@ 000695f0 f0b5
.org 0x695f2
	mov r7, r9	@ 000695f2 4f46
.org 0x695f4
	mov r6, r8	@ 000695f4 4646
.org 0x695f6
	push {r6, r7}	@ 000695f6 c0b4
.org 0x695f8
	adds r5, r0, #0	@ 000695f8 051c
.org 0x695fa
	adds r0, #180	@ 000695fa b430
.org 0x695fc
	ldr r0, [r0, #0]	@ 000695fc 0068
.org 0x695fe
	mov r8, r0	@ 000695fe 8046
.org 0x69600
	adds r0, r5, #0	@ 00069600 281c
.org 0x69602
	adds r0, #184	@ 00069602 b830
.org 0x69604
	ldr r6, [r0, #0]	@ 00069604 0668
.org 0x69606
	adds r0, #4	@ 00069606 0430
.org 0x69608
	ldr r0, [r0, #0]	@ 00069608 0068
.org 0x6960a
	mov r9, r0	@ 0006960a 8146
.org 0x6960c
	adds r0, r5, #0	@ 0006960c 281c
.org 0x6960e
	adds r0, #192	@ 0006960e c030
.org 0x69610
	ldr r2, [r0, #0]	@ 00069610 0268
.org 0x69612
	ldrb r0, [r5, #10]	@ 00069612 a87a
.org 0x69614
	lsrs r7, r0, #4	@ 00069614 0709
.org 0x69616
	movs r0, #1	@ 00069616 0120
.org 0x69618
	ands r7, r0	@ 00069618 0740
.org 0x6961a
	ldrb r0, [r5, #15]	@ 0006961a e87b
.org 0x6961c
	cmp r0, #0	@ 0006961c 0028
.org 0x6961e
	bne.n 0x69680	@ 0006961e 2fd1
.org 0x69620
	ldrb r1, [r2, #10]	@ 00069620 917a
.org 0x69622
	movs r0, #254	@ 00069622 fe20
.org 0x69624
	ands r0, r1	@ 00069624 0840
.org 0x69626
	strb r0, [r2, #10]	@ 00069626 9072
.org 0x69628
	ldr r4, [pc, #40]	@ 00069628 0a4c
.org 0x6962a
	ldrh r1, [r4, #0]	@ 0006962a 2188
.org 0x6962c
	mov r0, r8	@ 0006962c 4046
.org 0x6962e
	bl 0x1cf00	@ 0006962e b3f767fc
.org 0x69632
	ldrh r1, [r4, #24]	@ 00069632 218b
.org 0x69634
	adds r0, r6, #0	@ 00069634 301c
.org 0x69636
	bl 0x1cf00	@ 00069636 b3f763fc
.org 0x6963a
	ldrh r1, [r4, #24]	@ 0006963a 218b
.org 0x6963c
	mov r0, r9	@ 0006963c 4846
.org 0x6963e
	bl 0x1cf00	@ 0006963e b3f75ffc
.org 0x69642
	adds r2, r7, #1	@ 00069642 7a1c
.org 0x69644
	movs r0, #1	@ 00069644 0120
.org 0x69646
	ands r2, r0	@ 00069646 0240
.org 0x69648
	cmp r2, #0	@ 00069648 002a
.org 0x6964a
	beq.n 0x69658	@ 0006964a 05d0
.org 0x6964c
	ldrb r0, [r6, #10]	@ 0006964c b07a
.org 0x6964e
	movs r1, #16	@ 0006964e 1021
.org 0x69650
	orrs r0, r1	@ 00069650 0843
.org 0x69652
	b.n 0x6965e	@ 00069652 04e0
.org 0x69654
	.byte 0x58,0xb6,0x85,0x08	@ 00069654 data
.org 0x69658
	ldrb r1, [r6, #10]	@ 00069658 b17a
.org 0x6965a
	movs r0, #239	@ 0006965a ef20
.org 0x6965c
	ands r0, r1	@ 0006965c 0840
.org 0x6965e
	strb r0, [r6, #10]	@ 0006965e b072
.org 0x69660
	adds r1, r2, #0	@ 00069660 111c
.org 0x69662
	adds r0, r6, #0	@ 00069662 301c
.org 0x69664
	adds r0, #76	@ 00069664 4c30
.org 0x69666
	strb r1, [r0, #0]	@ 00069666 0170
.org 0x69668
	adds r3, r6, #0	@ 00069668 331c
.org 0x6966a
	adds r3, #74	@ 0006966a 4a33
.org 0x6966c
	lsls r1, r1, #4	@ 0006966c 0901
.org 0x6966e
	ldrb r2, [r3, #0]	@ 0006966e 1a78
.org 0x69670
	movs r0, #17	@ 00069670 1120
.org 0x69672
	negs r0, r0	@ 00069672 4042
.org 0x69674
	ands r0, r2	@ 00069674 1040
.org 0x69676
	orrs r0, r1	@ 00069676 0843
.org 0x69678
	strb r0, [r3, #0]	@ 00069678 1870
.org 0x6967a
	ldrb r0, [r5, #15]	@ 0006967a e87b
.org 0x6967c
	adds r0, #1	@ 0006967c 0130
.org 0x6967e
	strb r0, [r5, #15]	@ 0006967e e873
.org 0x69680
	mov r0, r8	@ 00069680 4046
.org 0x69682
	bl 0x1cff0	@ 00069682 b3f7b5fc
.org 0x69686
	adds r0, r6, #0	@ 00069686 301c
.org 0x69688
	bl 0x1cff0	@ 00069688 b3f7b2fc
.org 0x6968c
	mov r0, r9	@ 0006968c 4846
.org 0x6968e
	bl 0x1cff0	@ 0006968e b3f7affc
.org 0x69692
	ldr r0, [r5, #24]	@ 00069692 a869
.org 0x69694
	ldrb r1, [r0, #9]	@ 00069694 417a
.org 0x69696
	movs r2, #1	@ 00069696 0122
.org 0x69698
	adds r0, r2, #0	@ 00069698 101c
.org 0x6969a
	ands r0, r1	@ 0006969a 0840
.org 0x6969c
	cmp r0, #0	@ 0006969c 0028
.org 0x6969e
	beq.n 0x696a6	@ 0006969e 02d0
.org 0x696a0
	movs r0, #0	@ 000696a0 0020
.org 0x696a2
	strb r2, [r5, #14]	@ 000696a2 aa73
.org 0x696a4
	strb r0, [r5, #15]	@ 000696a4 e873
.org 0x696a6
	pop {r3, r4}	@ 000696a6 18bc
.org 0x696a8
	mov r8, r3	@ 000696a8 9846
.org 0x696aa
	mov r9, r4	@ 000696aa a146
.org 0x696ac
	pop {r4, r5, r6, r7}	@ 000696ac f0bc
