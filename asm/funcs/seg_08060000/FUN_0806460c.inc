@ FUN_0806460c  entry 0x0806460c  size 76
.thumb
.org 0x6460c
FUN_0806460c:
	push {r4, r5, lr}	@ 0006460c 30b5
.org 0x6460e
	adds r2, r0, #0	@ 0006460e 021c
.org 0x64610
	ldrb r0, [r2, #10]	@ 00064610 907a
.org 0x64612
	lsrs r3, r0, #4	@ 00064612 0309
.org 0x64614
	movs r5, #1	@ 00064614 0125
.org 0x64616
	ands r3, r5	@ 00064616 2b40
.org 0x64618
	movs r4, #0	@ 00064618 0024
.org 0x6461a
	adds r0, r2, #0	@ 0006461a 101c
.org 0x6461c
	adds r0, #208	@ 0006461c d030
.org 0x6461e
	ldr r0, [r0, #0]	@ 0006461e 0068
.org 0x64620
	movs r1, #240	@ 00064620 f021
.org 0x64622
	lsls r1, r1, #7	@ 00064622 c901
.org 0x64624
	adds r0, r0, r1	@ 00064624 4018
.org 0x64626
	ldr r1, [r2, #84]	@ 00064626 516d
.org 0x64628
	cmp r1, r0	@ 00064628 8142
.org 0x6462a
	bge.n 0x6462e	@ 0006462a 00da
.org 0x6462c
	movs r4, #1	@ 0006462c 0124
.org 0x6462e
	cmp r3, r4	@ 0006462e a342
.org 0x64630
	beq.n 0x6463a	@ 00064630 03d0
.org 0x64632
	movs r0, #0	@ 00064632 0020
.org 0x64634
	strb r5, [r2, #14]	@ 00064634 9573
.org 0x64636
	strb r0, [r2, #15]	@ 00064636 d073
.org 0x64638
	b.n 0x64642	@ 00064638 03e0
.org 0x6463a
	movs r1, #0	@ 0006463a 0021
.org 0x6463c
	movs r0, #3	@ 0006463c 0320
.org 0x6463e
	strb r0, [r2, #14]	@ 0006463e 9073
.org 0x64640
	strb r1, [r2, #15]	@ 00064640 d173
.org 0x64642
	ldr r0, [pc, #20]	@ 00064642 0548
.org 0x64644
	ldrb r1, [r2, #14]	@ 00064644 917b
.org 0x64646
	lsls r1, r1, #2	@ 00064646 8900
.org 0x64648
	adds r1, r1, r0	@ 00064648 0918
.org 0x6464a
	ldr r1, [r1, #0]	@ 0006464a 0968
.org 0x6464c
	adds r0, r2, #0	@ 0006464c 101c
.org 0x6464e
	bl 0x128f80	@ 0006464e c4f097fc
.org 0x64652
	pop {r4, r5}	@ 00064652 30bc
.org 0x64654
	pop {r0}	@ 00064654 01bc
.org 0x64656
	bx r0	@ 00064656 0047
