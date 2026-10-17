@ FUN_080a5590  entry 0x080a5590  size 148
.thumb
.org 0xa5590
FUN_080a5590:
	push {r4, r5, r6, lr}	@ 000a5590 70b5
.org 0xa5592
	adds r6, r0, #0	@ 000a5592 061c
.org 0xa5594
	ldrb r4, [r6, #17]	@ 000a5594 747c
.org 0xa5596
	movs r0, #45	@ 000a5596 2d20
.org 0xa5598
	bl 0x2b10	@ 000a5598 5df7bafa
.org 0xa559c
	ldr r1, [pc, #52]	@ 000a559c 0d49
.org 0xa559e
	ldrb r0, [r6, #9]	@ 000a559e 707a
.org 0xa55a0
	lsls r0, r0, #2	@ 000a55a0 8000
.org 0xa55a2
	adds r0, r0, r1	@ 000a55a2 4018
.org 0xa55a4
	movs r1, #1	@ 000a55a4 0121
.org 0xa55a6
	str r1, [r6, #12]	@ 000a55a6 f160
.org 0xa55a8
	ldr r0, [r0, #0]	@ 000a55a8 0068
.org 0xa55aa
	ldr r0, [r0, #4]	@ 000a55aa 4068
.org 0xa55ac
	str r0, [r6, #20]	@ 000a55ac 7061
.org 0xa55ae
	movs r0, #0	@ 000a55ae 0020
.org 0xa55b0
	strb r0, [r6, #13]	@ 000a55b0 7073
.org 0xa55b2
	strb r0, [r6, #14]	@ 000a55b2 b073
.org 0xa55b4
	strb r0, [r6, #15]	@ 000a55b4 f073
.org 0xa55b6
	ldrb r0, [r6, #10]	@ 000a55b6 b07a
.org 0xa55b8
	movs r5, #0	@ 000a55b8 0025
.org 0xa55ba
	orrs r0, r1	@ 000a55ba 0843
.org 0xa55bc
	movs r1, #2	@ 000a55bc 0221
.org 0xa55be
	orrs r0, r1	@ 000a55be 0843
.org 0xa55c0
	strb r0, [r6, #10]	@ 000a55c0 b072
.org 0xa55c2
	adds r0, r6, #0	@ 000a55c2 301c
.org 0xa55c4
	bl 0x1cc9c	@ 000a55c4 77f76afb
.org 0xa55c8
	cmp r4, #0	@ 000a55c8 002c
.org 0xa55ca
	beq.n 0xa55d8	@ 000a55ca 05d0
.org 0xa55cc
	ldrb r0, [r6, #10]	@ 000a55cc b07a
.org 0xa55ce
	movs r1, #16	@ 000a55ce 1021
.org 0xa55d0
	orrs r0, r1	@ 000a55d0 0843
.org 0xa55d2
	b.n 0xa55de	@ 000a55d2 04e0
.org 0xa55d4
	.byte 0x40,0xdb,0x85,0x08	@ 000a55d4 data
.org 0xa55d8
	ldrb r1, [r6, #10]	@ 000a55d8 b17a
.org 0xa55da
	movs r0, #239	@ 000a55da ef20
.org 0xa55dc
	ands r0, r1	@ 000a55dc 0840
.org 0xa55de
	strb r0, [r6, #10]	@ 000a55de b072
.org 0xa55e0
	movs r1, #1	@ 000a55e0 0121
.org 0xa55e2
	ands r1, r4	@ 000a55e2 2140
.org 0xa55e4
	adds r0, r6, #0	@ 000a55e4 301c
.org 0xa55e6
	adds r0, #76	@ 000a55e6 4c30
.org 0xa55e8
	movs r5, #0	@ 000a55e8 0025
.org 0xa55ea
	strb r1, [r0, #0]	@ 000a55ea 0170
.org 0xa55ec
	adds r3, r6, #0	@ 000a55ec 331c
.org 0xa55ee
	adds r3, #74	@ 000a55ee 4a33
.org 0xa55f0
	lsls r1, r1, #4	@ 000a55f0 0901
.org 0xa55f2
	ldrb r2, [r3, #0]	@ 000a55f2 1a78
.org 0xa55f4
	movs r0, #17	@ 000a55f4 1120
.org 0xa55f6
	negs r0, r0	@ 000a55f6 4042
.org 0xa55f8
	ands r0, r2	@ 000a55f8 1040
.org 0xa55fa
	orrs r0, r1	@ 000a55fa 0843
.org 0xa55fc
	strb r0, [r3, #0]	@ 000a55fc 1870
.org 0xa55fe
	ldrb r1, [r6, #10]	@ 000a55fe b17a
.org 0xa5600
	movs r0, #4	@ 000a5600 0420
.org 0xa5602
	orrs r0, r1	@ 000a5602 0843
.org 0xa5604
	strb r0, [r6, #10]	@ 000a5604 b072
.org 0xa5606
	adds r4, r6, #0	@ 000a5606 341c
.org 0xa5608
	adds r4, #116	@ 000a5608 7434
.org 0xa560a
	ldr r1, [pc, #28]	@ 000a560a 0749
.org 0xa560c
	adds r2, r6, #0	@ 000a560c 321c
.org 0xa560e
	adds r2, #84	@ 000a560e 5432
.org 0xa5610
	adds r0, r4, #0	@ 000a5610 201c
.org 0xa5612
	movs r3, #4	@ 000a5612 0423
.org 0xa5614
	bl 0x5760	@ 000a5614 60f7a4f8
.org 0xa5618
	str r6, [r4, #44]	@ 000a5618 e662
.org 0xa561a
	str r5, [r4, #36]	@ 000a561a 6562
.org 0xa561c
	adds r0, r6, #0	@ 000a561c 301c
.org 0xa561e
	bl 0xa562c	@ 000a561e 00f005f8
.org 0xa5622
	pop {r4, r5, r6}	@ 000a5622 70bc
