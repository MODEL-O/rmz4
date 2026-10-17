@ FUN_080c5574  entry 0x080c5574  size 186
.thumb
.org 0xc5574
FUN_080c5574:
	push {r4, r5, r6, r7, lr}	@ 000c5574 f0b5
.org 0xc5576
	sub sp, #4	@ 000c5576 81b0
.org 0xc5578
	adds r6, r0, #0	@ 000c5578 061c
.org 0xc557a
	ldr r1, [pc, #84]	@ 000c557a 1549
.org 0xc557c
	mov r0, sp	@ 000c557c 6846
.org 0xc557e
	movs r2, #2	@ 000c557e 0222
.org 0xc5580
	bl 0x129258	@ 000c5580 63f06afe
.org 0xc5584
	ldr r0, [r6, #40]	@ 000c5584 b06a
.org 0xc5586
	ldrb r0, [r0, #10]	@ 000c5586 807a
.org 0xc5588
	lsrs r4, r0, #4	@ 000c5588 0409
.org 0xc558a
	movs r2, #1	@ 000c558a 0122
.org 0xc558c
	ands r4, r2	@ 000c558c 1440
.org 0xc558e
	ldrb r7, [r6, #17]	@ 000c558e 777c
.org 0xc5590
	ldr r1, [pc, #64]	@ 000c5590 1049
.org 0xc5592
	ldrb r0, [r6, #9]	@ 000c5592 707a
.org 0xc5594
	lsls r0, r0, #2	@ 000c5594 8000
.org 0xc5596
	adds r0, r0, r1	@ 000c5596 4018
.org 0xc5598
	str r2, [r6, #12]	@ 000c5598 f260
.org 0xc559a
	ldr r0, [r0, #0]	@ 000c559a 0068
.org 0xc559c
	ldr r0, [r0, #4]	@ 000c559c 4068
.org 0xc559e
	str r0, [r6, #20]	@ 000c559e 7061
.org 0xc55a0
	ldrb r1, [r6, #10]	@ 000c55a0 b17a
.org 0xc55a2
	movs r0, #1	@ 000c55a2 0120
.org 0xc55a4
	movs r5, #0	@ 000c55a4 0025
.org 0xc55a6
	orrs r0, r1	@ 000c55a6 0843
.org 0xc55a8
	movs r1, #2	@ 000c55a8 0221
.org 0xc55aa
	orrs r0, r1	@ 000c55aa 0843
.org 0xc55ac
	strb r0, [r6, #10]	@ 000c55ac b072
.org 0xc55ae
	ldr r0, [r6, #96]	@ 000c55ae 306e
.org 0xc55b0
	cmp r0, #0	@ 000c55b0 0028
.org 0xc55b2
	bge.n 0xc55b6	@ 000c55b2 00da
.org 0xc55b4
	adds r0, #31	@ 000c55b4 1f30
.org 0xc55b6
	asrs r0, r0, #5	@ 000c55b6 4011
.org 0xc55b8
	negs r0, r0	@ 000c55b8 4042
.org 0xc55ba
	str r0, [r6, #104]	@ 000c55ba b066
.org 0xc55bc
	adds r0, r6, #0	@ 000c55bc 301c
.org 0xc55be
	bl 0x1cc9c	@ 000c55be 57f76dfb
.org 0xc55c2
	adds r2, r4, #0	@ 000c55c2 221c
.org 0xc55c4
	cmp r2, #0	@ 000c55c4 002a
.org 0xc55c6
	beq.n 0xc55d8	@ 000c55c6 07d0
.org 0xc55c8
	ldrb r0, [r6, #10]	@ 000c55c8 b07a
.org 0xc55ca
	movs r1, #16	@ 000c55ca 1021
.org 0xc55cc
	orrs r0, r1	@ 000c55cc 0843
.org 0xc55ce
	b.n 0xc55de	@ 000c55ce 06e0
.org 0xc55d0
	.byte 0x68,0xa1,0x12,0x08	@ 000c55d0 data
.org 0xc55d4
	.byte 0xf4,0x49,0x86,0x08	@ 000c55d4 data
.org 0xc55d8
	ldrb r1, [r6, #10]	@ 000c55d8 b17a
.org 0xc55da
	movs r0, #239	@ 000c55da ef20
.org 0xc55dc
	ands r0, r1	@ 000c55dc 0840
.org 0xc55de
	strb r0, [r6, #10]	@ 000c55de b072
.org 0xc55e0
	adds r1, r2, #0	@ 000c55e0 111c
.org 0xc55e2
	adds r0, r6, #0	@ 000c55e2 301c
.org 0xc55e4
	adds r0, #76	@ 000c55e4 4c30
.org 0xc55e6
	movs r5, #0	@ 000c55e6 0025
.org 0xc55e8
	strb r1, [r0, #0]	@ 000c55e8 0170
.org 0xc55ea
	adds r3, r6, #0	@ 000c55ea 331c
.org 0xc55ec
	adds r3, #74	@ 000c55ec 4a33
.org 0xc55ee
	lsls r1, r1, #4	@ 000c55ee 0901
.org 0xc55f0
	ldrb r2, [r3, #0]	@ 000c55f0 1a78
.org 0xc55f2
	movs r0, #17	@ 000c55f2 1120
.org 0xc55f4
	negs r0, r0	@ 000c55f4 4042
.org 0xc55f6
	ands r0, r2	@ 000c55f6 1040
.org 0xc55f8
	orrs r0, r1	@ 000c55f8 0843
.org 0xc55fa
	strb r0, [r3, #0]	@ 000c55fa 1870
.org 0xc55fc
	ldrb r1, [r6, #10]	@ 000c55fc b17a
.org 0xc55fe
	movs r0, #4	@ 000c55fe 0420
.org 0xc5600
	orrs r0, r1	@ 000c5600 0843
.org 0xc5602
	strb r0, [r6, #10]	@ 000c5602 b072
.org 0xc5604
	adds r4, r6, #0	@ 000c5604 341c
.org 0xc5606
	adds r4, #116	@ 000c5606 7434
.org 0xc5608
	mov r1, sp	@ 000c5608 6946
.org 0xc560a
	adds r0, r1, r7	@ 000c560a c819
.org 0xc560c
	ldrb r0, [r0, #0]	@ 000c560c 0078
.org 0xc560e
	lsls r1, r0, #1	@ 000c560e 4100
.org 0xc5610
	adds r1, r1, r0	@ 000c5610 0918
.org 0xc5612
	lsls r1, r1, #3	@ 000c5612 c900
.org 0xc5614
	ldr r0, [pc, #32]	@ 000c5614 0848
.org 0xc5616
	adds r1, r1, r0	@ 000c5616 0918
.org 0xc5618
	adds r2, r6, #0	@ 000c5618 321c
.org 0xc561a
	adds r2, #84	@ 000c561a 5432
.org 0xc561c
	adds r0, r4, #0	@ 000c561c 201c
.org 0xc561e
	movs r3, #64	@ 000c561e 4023
.org 0xc5620
	bl 0x5760	@ 000c5620 40f79ef8
.org 0xc5624
	str r6, [r4, #44]	@ 000c5624 e662
.org 0xc5626
	str r5, [r4, #36]	@ 000c5626 6562
.org 0xc5628
	adds r0, r6, #0	@ 000c5628 301c
.org 0xc562a
	bl 0xc56d4	@ 000c562a 00f053f8
