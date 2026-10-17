@ FUN_08070610  entry 0x08070610  size 174
.thumb
.org 0x70610
FUN_08070610:
	push {r4, r5, r6, lr}	@ 00070610 70b5
.org 0x70612
	sub sp, #8	@ 00070612 82b0
.org 0x70614
	adds r6, r0, #0	@ 00070614 061c
.org 0x70616
	ldr r0, [pc, #168]	@ 00070616 2a48
.org 0x70618
	ldr r1, [r0, #4]	@ 00070618 4168
.org 0x7061a
	ldr r0, [r0, #0]	@ 0007061a 0068
.org 0x7061c
	str r0, [sp, #0]	@ 0007061c 0090
.org 0x7061e
	str r1, [sp, #4]	@ 0007061e 0191
.org 0x70620
	ldrb r0, [r6, #15]	@ 00070620 f07b
.org 0x70622
	cmp r0, #0	@ 00070622 0028
.org 0x70624
	bne.n 0x7064e	@ 00070624 13d1
.org 0x70626
	ldr r0, [pc, #156]	@ 00070626 2748
.org 0x70628
	ldrh r0, [r0, #0]	@ 00070628 0088
.org 0x7062a
	movs r1, #0	@ 0007062a 0021
.org 0x7062c
	cmp r0, #16	@ 0007062c 1028
.org 0x7062e
	bne.n 0x70632	@ 0007062e 00d1
.org 0x70630
	movs r1, #4	@ 00070630 0421
.org 0x70632
	mov r2, sp	@ 00070632 6a46
.org 0x70634
	adds r0, r1, r2	@ 00070634 8818
.org 0x70636
	ldrh r0, [r0, #0]	@ 00070636 0088
.org 0x70638
	bl 0x2b10	@ 00070638 92f76afa
.org 0x7063c
	adds r0, r6, #0	@ 0007063c 301c
.org 0x7063e
	movs r1, #17	@ 0007063e 1121
.org 0x70640
	bl 0x736c4	@ 00070640 03f040f8
.org 0x70644
	movs r0, #64	@ 00070644 4020
.org 0x70646
	strb r0, [r6, #18]	@ 00070646 b074
.org 0x70648
	ldrb r0, [r6, #15]	@ 00070648 f07b
.org 0x7064a
	adds r0, #1	@ 0007064a 0130
.org 0x7064c
	strb r0, [r6, #15]	@ 0007064c f073
.org 0x7064e
	adds r0, r6, #0	@ 0007064e 301c
.org 0x70650
	bl 0x1cff0	@ 00070650 acf7cefc
.org 0x70654
	adds r0, r6, #0	@ 00070654 301c
.org 0x70656
	adds r0, #116	@ 00070656 7430
.org 0x70658
	ldr r4, [pc, #108]	@ 00070658 1b4c
.org 0x7065a
	ldr r3, [pc, #112]	@ 0007065a 1c4b
.org 0x7065c
	adds r1, r6, #0	@ 0007065c 311c
.org 0x7065e
	adds r1, #184	@ 0007065e b831
.org 0x70660
	ldrb r2, [r1, #0]	@ 00070660 0a78
.org 0x70662
	lsls r1, r2, #1	@ 00070662 5100
.org 0x70664
	adds r1, r1, r3	@ 00070664 c918
.org 0x70666
	ldrh r1, [r1, #0]	@ 00070666 0988
.org 0x70668
	lsls r1, r1, #2	@ 00070668 8900
.org 0x7066a
	adds r1, r1, r4	@ 0007066a 0919
.org 0x7066c
	adds r3, r6, #0	@ 0007066c 331c
.org 0x7066e
	adds r3, #113	@ 0007066e 7133
.org 0x70670
	movs r5, #0	@ 00070670 0025
.org 0x70672
	ldrsb r5, [r3, r5]	@ 00070672 5d57
.org 0x70674
	ldr r1, [r1, #0]	@ 00070674 0968
.org 0x70676
	lsls r3, r5, #2	@ 00070676 ab00
.org 0x70678
	adds r3, r3, r1	@ 00070678 5b18
.org 0x7067a
	ldr r4, [pc, #84]	@ 0007067a 154c
.org 0x7067c
	adds r1, r6, #0	@ 0007067c 311c
.org 0x7067e
	adds r1, #185	@ 0007067e b931
.org 0x70680
	ldrb r1, [r1, #0]	@ 00070680 0978
.org 0x70682
	lsls r1, r1, #2	@ 00070682 8900
.org 0x70684
	adds r1, r1, r4	@ 00070684 0919
.org 0x70686
	ldr r1, [r1, #0]	@ 00070686 0968
.org 0x70688
	lsls r2, r2, #2	@ 00070688 9200
.org 0x7068a
	adds r2, r2, r1	@ 0007068a 5218
.org 0x7068c
	ldr r1, [r2, #0]	@ 0007068c 1168
.org 0x7068e
	adds r1, r1, r5	@ 0007068e 4919
.org 0x70690
	ldrb r1, [r1, #0]	@ 00070690 0978
.org 0x70692
	lsls r2, r1, #1	@ 00070692 4a00
.org 0x70694
	adds r2, r2, r1	@ 00070694 5218
.org 0x70696
	lsls r2, r2, #3	@ 00070696 d200
.org 0x70698
	ldr r1, [r3, #0]	@ 00070698 1968
.org 0x7069a
	adds r1, r1, r2	@ 0007069a 8918
.org 0x7069c
	bl 0x5784	@ 0007069c 95f772f8
.org 0x706a0
	ldrb r0, [r6, #18]	@ 000706a0 b07c
.org 0x706a2
	subs r0, #1	@ 000706a2 0138
.org 0x706a4
	strb r0, [r6, #18]	@ 000706a4 b074
.org 0x706a6
	lsls r0, r0, #24	@ 000706a6 0006
.org 0x706a8
	lsrs r1, r0, #24	@ 000706a8 010e
.org 0x706aa
	cmp r1, #0	@ 000706aa 0029
.org 0x706ac
	bne.n 0x706b6	@ 000706ac 03d1
.org 0x706ae
	ldrb r0, [r6, #14]	@ 000706ae b07b
.org 0x706b0
	adds r0, #1	@ 000706b0 0130
.org 0x706b2
	strb r0, [r6, #14]	@ 000706b2 b073
.org 0x706b4
	strb r1, [r6, #15]	@ 000706b4 f173
.org 0x706b6
	add sp, #8	@ 000706b6 02b0
.org 0x706b8
	pop {r4, r5, r6}	@ 000706b8 70bc
.org 0x706ba
	pop {r0}	@ 000706ba 01bc
.org 0x706bc
	bx r0	@ 000706bc 0047
