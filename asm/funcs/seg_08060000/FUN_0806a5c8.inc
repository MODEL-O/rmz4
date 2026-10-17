@ FUN_0806a5c8  entry 0x0806a5c8  size 148
.thumb
.org 0x6a5c8
FUN_0806a5c8:
	push {r4, r5, r6, r7, lr}	@ 0006a5c8 f0b5
.org 0x6a5ca
	sub sp, #8	@ 0006a5ca 82b0
.org 0x6a5cc
	ldrb r1, [r0, #10]	@ 0006a5cc 817a
.org 0x6a5ce
	lsrs r3, r1, #4	@ 0006a5ce 0b09
.org 0x6a5d0
	movs r7, #1	@ 0006a5d0 0127
.org 0x6a5d2
	ands r3, r7	@ 0006a5d2 3b40
.org 0x6a5d4
	mov ip, r3	@ 0006a5d4 9c46
.org 0x6a5d6
	adds r1, r0, #0	@ 0006a5d6 011c
.org 0x6a5d8
	adds r1, #184	@ 0006a5d8 b831
.org 0x6a5da
	ldr r2, [r1, #0]	@ 0006a5da 0a68
.org 0x6a5dc
	adds r0, #199	@ 0006a5dc c730
.org 0x6a5de
	ldrb r1, [r0, #0]	@ 0006a5de 0178
.org 0x6a5e0
	adds r1, #1	@ 0006a5e0 0131
.org 0x6a5e2
	strb r1, [r0, #0]	@ 0006a5e2 0170
.org 0x6a5e4
	movs r0, #255	@ 0006a5e4 ff20
.org 0x6a5e6
	ands r1, r0	@ 0006a5e6 0140
.org 0x6a5e8
	movs r0, #15	@ 0006a5e8 0f20
.org 0x6a5ea
	ands r1, r0	@ 0006a5ea 0140
.org 0x6a5ec
	cmp r1, #0	@ 0006a5ec 0029
.org 0x6a5ee
	bne.n 0x6a654	@ 0006a5ee 31d1
.org 0x6a5f0
	ldr r4, [r2, #84]	@ 0006a5f0 546d
.org 0x6a5f2
	ldr r5, [r2, #88]	@ 0006a5f2 956d
.org 0x6a5f4
	adds r0, r2, #0	@ 0006a5f4 101c
.org 0x6a5f6
	adds r0, #180	@ 0006a5f6 b430
.org 0x6a5f8
	ldrb r0, [r0, #0]	@ 0006a5f8 0078
.org 0x6a5fa
	adds r6, r0, #0	@ 0006a5fa 061c
.org 0x6a5fc
	lsls r1, r3, #1	@ 0006a5fc 5900
.org 0x6a5fe
	subs r1, #1	@ 0006a5fe 0139
.org 0x6a600
	lsls r0, r1, #1	@ 0006a600 4800
.org 0x6a602
	adds r0, r0, r1	@ 0006a602 4018
.org 0x6a604
	lsls r0, r0, #11	@ 0006a604 c002
.org 0x6a606
	adds r2, r0, #0	@ 0006a606 021c
.org 0x6a608
	adds r0, r3, #1	@ 0006a608 581c
.org 0x6a60a
	ands r0, r7	@ 0006a60a 3840
.org 0x6a60c
	lsls r0, r0, #7	@ 0006a60c c001
.org 0x6a60e
	adds r0, r6, r0	@ 0006a60e 3018
.org 0x6a610
	lsls r0, r0, #24	@ 0006a610 0006
.org 0x6a612
	ldr r3, [pc, #72]	@ 0006a612 124b
.org 0x6a614
	lsrs r1, r0, #24	@ 0006a614 010e
.org 0x6a616
	movs r7, #128	@ 0006a616 8027
.org 0x6a618
	lsls r7, r7, #23	@ 0006a618 ff05
.org 0x6a61a
	adds r0, r0, r7	@ 0006a61a c019
.org 0x6a61c
	lsrs r0, r0, #23	@ 0006a61c c00d
.org 0x6a61e
	adds r0, r0, r3	@ 0006a61e c018
.org 0x6a620
	movs r7, #0	@ 0006a620 0027
.org 0x6a622
	ldrsh r0, [r0, r7]	@ 0006a622 c05f
.org 0x6a624
	muls r0, r2	@ 0006a624 5043
.org 0x6a626
	cmp r0, #0	@ 0006a626 0028
.org 0x6a628
	bge.n 0x6a62c	@ 0006a628 00da
.org 0x6a62a
	adds r0, #255	@ 0006a62a ff30
.org 0x6a62c
	asrs r0, r0, #8	@ 0006a62c 0012
.org 0x6a62e
	lsls r1, r1, #1	@ 0006a62e 4900
.org 0x6a630
	adds r1, r1, r3	@ 0006a630 c918
.org 0x6a632
	movs r3, #0	@ 0006a632 0023
.org 0x6a634
	ldrsh r1, [r1, r3]	@ 0006a634 c95e
.org 0x6a636
	adds r0, r0, r4	@ 0006a636 0019
.org 0x6a638
	str r0, [sp, #0]	@ 0006a638 0090
.org 0x6a63a
	adds r0, r2, #0	@ 0006a63a 101c
.org 0x6a63c
	muls r0, r1	@ 0006a63c 4843
.org 0x6a63e
	cmp r0, #0	@ 0006a63e 0028
.org 0x6a640
	bge.n 0x6a644	@ 0006a640 00da
.org 0x6a642
	adds r0, #255	@ 0006a642 ff30
.org 0x6a644
	asrs r0, r0, #8	@ 0006a644 0012
.org 0x6a646
	adds r0, r0, r5	@ 0006a646 4019
.org 0x6a648
	str r0, [sp, #4]	@ 0006a648 0190
.org 0x6a64a
	mov r0, sp	@ 0006a64a 6846
.org 0x6a64c
	adds r1, r6, #0	@ 0006a64c 311c
.org 0x6a64e
	mov r2, ip	@ 0006a64e 6246
.org 0x6a650
	bl 0xc9804	@ 0006a650 5ff0d8f8
.org 0x6a654
	add sp, #8	@ 0006a654 02b0
.org 0x6a656
	pop {r4, r5, r6, r7}	@ 0006a656 f0bc
.org 0x6a658
	pop {r0}	@ 0006a658 01bc
.org 0x6a65a
	bx r0	@ 0006a65a 0047
