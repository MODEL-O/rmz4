@ FUN_080fb630  entry 0x080fb630  size 108
.thumb
.org 0xfb630
FUN_080fb630:
	push {r4, r5, r6, lr}	@ 000fb630 70b5
.org 0xfb632
	adds r4, r0, #0	@ 000fb632 041c
.org 0xfb634
	adds r5, r4, #0	@ 000fb634 251c
.org 0xfb636
	adds r5, #192	@ 000fb636 c035
.org 0xfb638
	ldr r6, [r5, #0]	@ 000fb638 2e68
.org 0xfb63a
	cmp r6, #0	@ 000fb63a 002e
.org 0xfb63c
	bne.n 0xfb6ac	@ 000fb63c 36d1
.org 0xfb63e
	adds r0, #140	@ 000fb63e 8c30
.org 0xfb640
	ldr r0, [r0, #0]	@ 000fb640 0068
.org 0xfb642
	movs r1, #1	@ 000fb642 0121
.org 0xfb644
	ands r0, r1	@ 000fb644 0840
.org 0xfb646
	cmp r0, #0	@ 000fb646 0028
.org 0xfb648
	beq.n 0xfb6ac	@ 000fb648 30d0
.org 0xfb64a
	ldr r2, [pc, #64]	@ 000fb64a 104a
.org 0xfb64c
	movs r0, #0	@ 000fb64c 0020
.org 0xfb64e
	adds r1, r4, #0	@ 000fb64e 211c
.org 0xfb650
	bl 0x2adac	@ 000fb650 2ff7acfb
.org 0xfb654
	str r0, [r5, #0]	@ 000fb654 2860
.org 0xfb656
	cmp r0, #0	@ 000fb656 0028
.org 0xfb658
	beq.n 0xfb6ac	@ 000fb658 28d0
.org 0xfb65a
	adds r0, r4, #0	@ 000fb65a 201c
.org 0xfb65c
	adds r0, #116	@ 000fb65c 7430
.org 0xfb65e
	ldr r1, [pc, #48]	@ 000fb65e 0c49
.org 0xfb660
	bl 0x5784	@ 000fb660 0af790f8
.org 0xfb664
	ldrb r0, [r4, #13]	@ 000fb664 607b
.org 0xfb666
	cmp r0, #1	@ 000fb666 0128
.org 0xfb668
	bne.n 0xfb6ac	@ 000fb668 20d1
.org 0xfb66a
	ldr r1, [pc, #40]	@ 000fb66a 0a49
.org 0xfb66c
	adds r0, r4, #0	@ 000fb66c 201c
.org 0xfb66e
	bl 0x1cf00	@ 000fb66e 21f747fc
.org 0xfb672
	ldr r0, [pc, #36]	@ 000fb672 0948
.org 0xfb674
	ldr r1, [pc, #36]	@ 000fb674 0949
.org 0xfb676
	adds r0, r0, r1	@ 000fb676 4018
.org 0xfb678
	ldrb r1, [r0, #0]	@ 000fb678 0178
.org 0xfb67a
	movs r0, #15	@ 000fb67a 0f20
.org 0xfb67c
	ands r0, r1	@ 000fb67c 0840
.org 0xfb67e
	cmp r0, #0	@ 000fb67e 0028
.org 0xfb680
	bne.n 0xfb6a0	@ 000fb680 0ed1
.org 0xfb682
	ldrb r0, [r4, #18]	@ 000fb682 a07c
.org 0xfb684
	cmp r0, #99	@ 000fb684 6328
.org 0xfb686
	bhi.n 0xfb6ac	@ 000fb686 11d8
.org 0xfb688
	b.n 0xfb6a6	@ 000fb688 0de0
.org 0xfb68a
	.byte 0x00	@ 000fb68a data
.org 0xfb68b
	.byte 0x00	@ 000fb68b data
.org 0xfb68c
	.byte 0x1c,0xab,0x86,0x08	@ 000fb68c data
.org 0xfb690
	.byte 0xac,0xa9,0x86,0x08	@ 000fb690 data
.org 0xfb694
	.byte 0x01,0x96,0x00,0x00	@ 000fb694 data
.org 0xfb698
	.byte 0xb0,0x0a,0x00,0x02	@ 000fb698 data
