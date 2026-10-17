@ FUN_08015670  entry 0x08015670  size 60
.thumb
.org 0x15670
FUN_08015670:
	push {r4, lr}	@ 00015670 10b5
.org 0x15672
	adds r3, r0, #0	@ 00015672 031c
.org 0x15674
	ldrb r4, [r3, #14]	@ 00015674 9c7b
.org 0x15676
	cmp r4, #0	@ 00015676 002c
.org 0x15678
	bne.n 0x156a6	@ 00015678 15d1
.org 0x1567a
	ldr r1, [r3, #92]	@ 0001567a d96d
.org 0x1567c
	lsrs r1, r1, #4	@ 0001567c 0909
.org 0x1567e
	lsls r1, r1, #1	@ 0001567e 4900
.org 0x15680
	ldr r0, [pc, #40]	@ 00015680 0a48
.org 0x15682
	adds r1, r1, r0	@ 00015682 0918
.org 0x15684
	ldrh r2, [r1, #0]	@ 00015684 0a88
.org 0x15686
	ldr r0, [pc, #40]	@ 00015686 0a48
.org 0x15688
	ands r0, r2	@ 00015688 1040
.org 0x1568a
	movs r2, #3	@ 0001568a 0322
.org 0x1568c
	orrs r0, r2	@ 0001568c 1043
.org 0x1568e
	strh r0, [r1, #0]	@ 0001568e 0880
.org 0x15690
	movs r0, #240	@ 00015690 f020
.org 0x15692
	lsls r0, r0, #3	@ 00015692 c000
.org 0x15694
	str r0, [r3, #76]	@ 00015694 d864
.org 0x15696
	str r4, [r3, #80]	@ 00015696 1c65
.org 0x15698
	movs r0, #128	@ 00015698 8020
.org 0x1569a
	str r0, [r3, #68]	@ 0001569a 5864
.org 0x1569c
	adds r0, #128	@ 0001569c 8030
.org 0x1569e
	str r0, [r3, #72]	@ 0001569e 9864
.org 0x156a0
	ldrb r0, [r3, #14]	@ 000156a0 987b
.org 0x156a2
	adds r0, #1	@ 000156a2 0130
.org 0x156a4
	strb r0, [r3, #14]	@ 000156a4 9873
.org 0x156a6
	pop {r4}	@ 000156a6 10bc
.org 0x156a8
	pop {r0}	@ 000156a8 01bc
.org 0x156aa
	bx r0	@ 000156aa 0047
