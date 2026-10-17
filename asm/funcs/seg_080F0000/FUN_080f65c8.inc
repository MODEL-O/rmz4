@ FUN_080f65c8  entry 0x080f65c8  size 136
.thumb
.org 0xf65c8
FUN_080f65c8:
	push {r4, r5, r6, lr}	@ 000f65c8 70b5
.org 0xf65ca
	adds r6, r0, #0	@ 000f65ca 061c
.org 0xf65cc
	bl 0x1cc9c	@ 000f65cc 26f766fb
.org 0xf65d0
	ldrb r1, [r6, #10]	@ 000f65d0 b17a
.org 0xf65d2
	movs r0, #1	@ 000f65d2 0120
.org 0xf65d4
	orrs r0, r1	@ 000f65d4 0843
.org 0xf65d6
	movs r1, #2	@ 000f65d6 0221
.org 0xf65d8
	orrs r0, r1	@ 000f65d8 0843
.org 0xf65da
	strb r0, [r6, #10]	@ 000f65da b072
.org 0xf65dc
	ldr r1, [r6, #84]	@ 000f65dc 716d
.org 0xf65de
	ldr r0, [pc, #16]	@ 000f65de 0448
.org 0xf65e0
	cmp r1, r0	@ 000f65e0 8142
.org 0xf65e2
	bgt.n 0xf65f4	@ 000f65e2 07dc
.org 0xf65e4
	movs r1, #150	@ 000f65e4 9621
.org 0xf65e6
	lsls r1, r1, #7	@ 000f65e6 c901
.org 0xf65e8
	adds r0, r6, #0	@ 000f65e8 301c
.org 0xf65ea
	bl 0x1cf00	@ 000f65ea 26f789fc
.org 0xf65ee
	b.n 0xf65fe	@ 000f65ee 06e0
.org 0xf65f0
	.byte 0xff,0x1f,0x1c,0x00	@ 000f65f0 data
.org 0xf65f4
	movs r1, #252	@ 000f65f4 fc21
.org 0xf65f6
	lsls r1, r1, #7	@ 000f65f6 c901
.org 0xf65f8
	adds r0, r6, #0	@ 000f65f8 301c
.org 0xf65fa
	bl 0x1cf00	@ 000f65fa 26f781fc
.org 0xf65fe
	ldrb r1, [r6, #11]	@ 000f65fe f17a
.org 0xf6600
	movs r0, #8	@ 000f6600 0820
.org 0xf6602
	orrs r0, r1	@ 000f6602 0843
.org 0xf6604
	strb r0, [r6, #11]	@ 000f6604 f072
.org 0xf6606
	ldrb r0, [r6, #16]	@ 000f6606 307c
.org 0xf6608
	lsls r0, r0, #3	@ 000f6608 c000
.org 0xf660a
	ldr r1, [pc, #72]	@ 000f660a 1249
.org 0xf660c
	adds r0, r0, r1	@ 000f660c 4018
.org 0xf660e
	str r0, [r6, #48]	@ 000f660e 3063
.org 0xf6610
	movs r5, #0	@ 000f6610 0025
.org 0xf6612
	ldr r0, [pc, #68]	@ 000f6612 1148
.org 0xf6614
	strh r0, [r6, #38]	@ 000f6614 f084
.org 0xf6616
	ldr r0, [r6, #84]	@ 000f6616 706d
.org 0xf6618
	ldr r1, [r6, #88]	@ 000f6618 b16d
.org 0xf661a
	bl 0x8748	@ 000f661a 12f795f8
.org 0xf661e
	adds r0, #1	@ 000f661e 0130
.org 0xf6620
	str r0, [r6, #88]	@ 000f6620 b065
.org 0xf6622
	movs r4, #1	@ 000f6622 0124
.org 0xf6624
	strb r4, [r6, #13]	@ 000f6624 7473
.org 0xf6626
	strb r5, [r6, #14]	@ 000f6626 b573
.org 0xf6628
	ldrb r1, [r6, #16]	@ 000f6628 317c
.org 0xf662a
	adds r0, r6, #0	@ 000f662a 301c
.org 0xf662c
	bl 0xf6a24	@ 000f662c 00f0faf9
.org 0xf6630
	ldrb r2, [r6, #13]	@ 000f6630 727b
.org 0xf6632
	ldrb r3, [r6, #14]	@ 000f6632 b37b
.org 0xf6634
	ldr r1, [pc, #36]	@ 000f6634 0949
.org 0xf6636
	ldrb r0, [r6, #9]	@ 000f6636 707a
.org 0xf6638
	lsls r0, r0, #2	@ 000f6638 8000
.org 0xf663a
	adds r0, r0, r1	@ 000f663a 4018
.org 0xf663c
	str r4, [r6, #12]	@ 000f663c f460
.org 0xf663e
	ldr r0, [r0, #0]	@ 000f663e 0068
.org 0xf6640
	ldr r0, [r0, #4]	@ 000f6640 4068
.org 0xf6642
	str r0, [r6, #20]	@ 000f6642 7061
.org 0xf6644
	strb r2, [r6, #13]	@ 000f6644 7273
.org 0xf6646
	strb r3, [r6, #14]	@ 000f6646 b373
.org 0xf6648
	adds r0, r6, #0	@ 000f6648 301c
.org 0xf664a
	bl 0xf64c0	@ 000f664a fff739ff
.org 0xf664e
	pop {r4, r5, r6}	@ 000f664e 70bc
