@ FUN_080b15bc  entry 0x080b15bc  size 134
.thumb
.org 0xb15bc
FUN_080b15bc:
	push {r4, r5, lr}	@ 000b15bc 30b5
.org 0xb15be
	adds r4, r0, #0	@ 000b15be 041c
.org 0xb15c0
	ldr r0, [r4, #88]	@ 000b15c0 a06d
.org 0xb15c2
	ldr r1, [r4, #96]	@ 000b15c2 216e
.org 0xb15c4
	adds r0, r0, r1	@ 000b15c4 4018
.org 0xb15c6
	str r0, [r4, #88]	@ 000b15c6 a065
.org 0xb15c8
	adds r3, r4, #0	@ 000b15c8 231c
.org 0xb15ca
	adds r3, #188	@ 000b15ca bc33
.org 0xb15cc
	ldr r2, [r3, #0]	@ 000b15cc 1a68
.org 0xb15ce
	ldr r5, [pc, #116]	@ 000b15ce 1d4d
.org 0xb15d0
	cmp r2, r5	@ 000b15d0 aa42
.org 0xb15d2
	bgt.n 0xb15f8	@ 000b15d2 11dc
.org 0xb15d4
	adds r0, r1, #0	@ 000b15d4 081c
.org 0xb15d6
	cmp r0, #0	@ 000b15d6 0028
.org 0xb15d8
	bge.n 0xb15dc	@ 000b15d8 00da
.org 0xb15da
	negs r0, r0	@ 000b15da 4042
.org 0xb15dc
	adds r0, r2, r0	@ 000b15dc 1018
.org 0xb15de
	str r0, [r3, #0]	@ 000b15de 1860
.org 0xb15e0
	cmp r0, r5	@ 000b15e0 a842
.org 0xb15e2
	ble.n 0xb15f8	@ 000b15e2 09dd
.org 0xb15e4
	adds r1, r4, #0	@ 000b15e4 211c
.org 0xb15e6
	adds r1, #184	@ 000b15e6 b831
.org 0xb15e8
	ldr r0, [r1, #0]	@ 000b15e8 0868
.org 0xb15ea
	lsls r0, r0, #8	@ 000b15ea 0002
.org 0xb15ec
	negs r0, r0	@ 000b15ec 4042
.org 0xb15ee
	cmp r0, #0	@ 000b15ee 0028
.org 0xb15f0
	bge.n 0xb15f4	@ 000b15f0 00da
.org 0xb15f2
	adds r0, #255	@ 000b15f2 ff30
.org 0xb15f4
	asrs r0, r0, #8	@ 000b15f4 0012
.org 0xb15f6
	str r0, [r1, #0]	@ 000b15f6 0860
.org 0xb15f8
	adds r1, r4, #0	@ 000b15f8 211c
.org 0xb15fa
	adds r1, #180	@ 000b15fa b431
.org 0xb15fc
	ldr r0, [r4, #84]	@ 000b15fc 606d
.org 0xb15fe
	ldr r1, [r1, #0]	@ 000b15fe 0968
.org 0xb1600
	adds r0, r0, r1	@ 000b1600 4018
.org 0xb1602
	adds r2, r4, #0	@ 000b1602 221c
.org 0xb1604
	adds r2, #184	@ 000b1604 b832
.org 0xb1606
	ldr r1, [r4, #88]	@ 000b1606 a16d
.org 0xb1608
	ldr r2, [r2, #0]	@ 000b1608 1268
.org 0xb160a
	adds r1, r1, r2	@ 000b160a 8918
.org 0xb160c
	bl 0x7c7c	@ 000b160c 56f736fb
.org 0xb1610
	lsls r0, r0, #16	@ 000b1610 0004
.org 0xb1612
	cmp r0, #0	@ 000b1612 0028
.org 0xb1614
	bne.n 0xb163c	@ 000b1614 12d1
.org 0xb1616
	movs r0, #1	@ 000b1616 0120
.org 0xb1618
	strb r0, [r4, #13]	@ 000b1618 6073
.org 0xb161a
	ldr r0, [r4, #92]	@ 000b161a e06d
.org 0xb161c
	lsls r0, r0, #8	@ 000b161c 0002
.org 0xb161e
	negs r0, r0	@ 000b161e 4042
.org 0xb1620
	cmp r0, #0	@ 000b1620 0028
.org 0xb1622
	bge.n 0xb1626	@ 000b1622 00da
.org 0xb1624
	adds r0, #255	@ 000b1624 ff30
.org 0xb1626
	asrs r0, r0, #8	@ 000b1626 0012
.org 0xb1628
	str r0, [r4, #92]	@ 000b1628 e065
.org 0xb162a
	ldr r0, [r4, #88]	@ 000b162a a06d
.org 0xb162c
	ldr r1, [r4, #96]	@ 000b162c 216e
.org 0xb162e
	subs r0, r0, r1	@ 000b162e 401a
.org 0xb1630
	str r0, [r4, #88]	@ 000b1630 a065
.org 0xb1632
	adds r1, r4, #0	@ 000b1632 211c
.org 0xb1634
	adds r1, #193	@ 000b1634 c131
.org 0xb1636
	ldrb r0, [r1, #0]	@ 000b1636 0878
.org 0xb1638
	adds r0, #1	@ 000b1638 0130
.org 0xb163a
	strb r0, [r1, #0]	@ 000b163a 0870
.org 0xb163c
	pop {r4, r5}	@ 000b163c 30bc
.org 0xb163e
	pop {r0}	@ 000b163e 01bc
.org 0xb1640
	bx r0	@ 000b1640 0047
