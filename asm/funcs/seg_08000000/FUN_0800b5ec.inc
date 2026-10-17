@ FUN_0800b5ec  entry 0x0800b5ec  size 302
.thumb
.org 0xb5ec
FUN_0800b5ec:
	push {r4, r5, r6, r7, lr}	@ 0000b5ec f0b5
.org 0xb5ee
	mov r7, r8	@ 0000b5ee 4746
.org 0xb5f0
	push {r7}	@ 0000b5f0 80b4
.org 0xb5f2
	sub sp, #8	@ 0000b5f2 82b0
.org 0xb5f4
	adds r7, r0, #0	@ 0000b5f4 071c
.org 0xb5f6
	movs r0, #20	@ 0000b5f6 1420
.org 0xb5f8
	adds r0, r0, r7	@ 0000b5f8 c019
.org 0xb5fa
	mov r8, r0	@ 0000b5fa 8046
.org 0xb5fc
	ldr r0, [r7, #52]	@ 0000b5fc 786b
.org 0xb5fe
	ldr r1, [r7, #68]	@ 0000b5fe 796c
.org 0xb600
	adds r2, r0, #0	@ 0000b600 021c
.org 0xb602
	muls r2, r1	@ 0000b602 4a43
.org 0xb604
	asrs r2, r2, #8	@ 0000b604 1212
.org 0xb606
	ldr r0, [r7, #76]	@ 0000b606 f86c
.org 0xb608
	adds r2, r2, r0	@ 0000b608 1218
.org 0xb60a
	ldr r0, [r7, #56]	@ 0000b60a b86b
.org 0xb60c
	ldr r4, [r7, #72]	@ 0000b60c bc6c
.org 0xb60e
	adds r3, r0, #0	@ 0000b60e 031c
.org 0xb610
	muls r3, r4	@ 0000b610 6343
.org 0xb612
	asrs r3, r3, #8	@ 0000b612 1b12
.org 0xb614
	ldr r0, [r7, #80]	@ 0000b614 386d
.org 0xb616
	adds r3, r3, r0	@ 0000b616 1b18
.org 0xb618
	ldr r0, [r7, #60]	@ 0000b618 f86b
.org 0xb61a
	muls r0, r1	@ 0000b61a 4843
.org 0xb61c
	asrs r0, r0, #8	@ 0000b61c 0012
.org 0xb61e
	ldr r1, [r7, #84]	@ 0000b61e 796d
.org 0xb620
	adds r5, r0, r1	@ 0000b620 4518
.org 0xb622
	ldr r0, [r7, #64]	@ 0000b622 386c
.org 0xb624
	muls r0, r4	@ 0000b624 6043
.org 0xb626
	asrs r0, r0, #8	@ 0000b626 0012
.org 0xb628
	ldr r1, [r7, #88]	@ 0000b628 b96d
.org 0xb62a
	adds r6, r0, r1	@ 0000b62a 4618
.org 0xb62c
	ldr r0, [r7, #104]	@ 0000b62c b86e
.org 0xb62e
	asrs r0, r0, #4	@ 0000b62e 0011
.org 0xb630
	subs r2, r2, r0	@ 0000b630 121a
.org 0xb632
	subs r0, r2, r5	@ 0000b632 501b
.org 0xb634
	adds r1, r0, #0	@ 0000b634 011c
.org 0xb636
	adds r1, #15	@ 0000b636 0f31
.org 0xb638
	subs r0, r3, r6	@ 0000b638 981b
.org 0xb63a
	adds r4, r0, #0	@ 0000b63a 041c
.org 0xb63c
	adds r4, #15	@ 0000b63c 0f34
.org 0xb63e
	ldr r0, [r7, #44]	@ 0000b63e f86a
.org 0xb640
	asrs r0, r0, #8	@ 0000b640 0012
.org 0xb642
	adds r0, r0, r2	@ 0000b642 8018
.org 0xb644
	str r0, [sp, #0]	@ 0000b644 0090
.org 0xb646
	ldr r0, [r7, #48]	@ 0000b646 386b
.org 0xb648
	asrs r0, r0, #8	@ 0000b648 0012
.org 0xb64a
	adds r0, r0, r3	@ 0000b64a c018
.org 0xb64c
	str r0, [sp, #4]	@ 0000b64c 0190
.org 0xb64e
	ldrh r0, [r7, #12]	@ 0000b64e b889
.org 0xb650
	cmp r0, #0	@ 0000b650 0028
.org 0xb652
	beq.n 0xb6d4	@ 0000b652 3fd0
.org 0xb654
	cmp r1, #30	@ 0000b654 1e29
.org 0xb656
	bhi.n 0xb668	@ 0000b656 07d8
.org 0xb658
	cmp r4, #30	@ 0000b658 1e2c
.org 0xb65a
	bhi.n 0xb668	@ 0000b65a 05d8
.org 0xb65c
	ldr r0, [pc, #44]	@ 0000b65c 0b48
.org 0xb65e
	ldr r1, [pc, #48]	@ 0000b65e 0c49
.org 0xb660
	adds r0, r0, r1	@ 0000b660 4018
.org 0xb662
	ldrb r0, [r0, #0]	@ 0000b662 0078
.org 0xb664
	cmp r0, #0	@ 0000b664 0028
.org 0xb666
	beq.n 0xb698	@ 0000b666 17d0
.org 0xb668
	ldr r0, [r7, #92]	@ 0000b668 f86d
.org 0xb66a
	lsrs r0, r0, #4	@ 0000b66a 0009
.org 0xb66c
	lsls r0, r0, #1	@ 0000b66c 4000
.org 0xb66e
	ldr r1, [pc, #36]	@ 0000b66e 0949
.org 0xb670
	adds r0, r0, r1	@ 0000b670 4018
.org 0xb672
	ldrh r0, [r0, #0]	@ 0000b672 0088
.org 0xb674
	movs r2, #248	@ 0000b674 f822
.org 0xb676
	lsls r2, r2, #5	@ 0000b676 5201
.org 0xb678
	ands r2, r0	@ 0000b678 0240
.org 0xb67a
	lsls r2, r2, #3	@ 0000b67a d200
.org 0xb67c
	movs r0, #192	@ 0000b67c c020
.org 0xb67e
	lsls r0, r0, #19	@ 0000b67e c004
.org 0xb680
	adds r2, r2, r0	@ 0000b680 1218
.org 0xb682
	mov r0, r8	@ 0000b682 4046
.org 0xb684
	mov r1, sp	@ 0000b684 6946
.org 0xb686
	bl 0x3fe0	@ 0000b686 f8f7abfc
.org 0xb68a
	b.n 0xb6ba	@ 0000b68a 16e0
.org 0xb68c
	.byte 0xb0,0x0a,0x00,0x02	@ 0000b68c data
.org 0xb690
	.byte 0x2d,0xd0,0x02,0x00	@ 0000b690 data
.org 0xb694
	.byte 0x04,0x0a,0x00,0x02	@ 0000b694 data
.org 0xb698
	ldr r0, [r7, #92]	@ 0000b698 f86d
.org 0xb69a
	lsrs r0, r0, #4	@ 0000b69a 0009
.org 0xb69c
	lsls r0, r0, #1	@ 0000b69c 4000
.org 0xb69e
	ldr r1, [pc, #40]	@ 0000b69e 0a49
.org 0xb6a0
	adds r0, r0, r1	@ 0000b6a0 4018
.org 0xb6a2
	ldrh r0, [r0, #0]	@ 0000b6a2 0088
.org 0xb6a4
	movs r2, #248	@ 0000b6a4 f822
.org 0xb6a6
	lsls r2, r2, #5	@ 0000b6a6 5201
.org 0xb6a8
	ands r2, r0	@ 0000b6a8 0240
.org 0xb6aa
	lsls r2, r2, #3	@ 0000b6aa d200
.org 0xb6ac
	movs r0, #192	@ 0000b6ac c020
.org 0xb6ae
	lsls r0, r0, #19	@ 0000b6ae c004
.org 0xb6b0
	adds r2, r2, r0	@ 0000b6b0 1218
.org 0xb6b2
	mov r0, r8	@ 0000b6b2 4046
.org 0xb6b4
	mov r1, sp	@ 0000b6b4 6946
.org 0xb6b6
	bl 0x3620	@ 0000b6b6 f7f7b3ff
.org 0xb6ba
	ldr r0, [pc, #16]	@ 0000b6ba 0448
.org 0xb6bc
	ldr r1, [pc, #16]	@ 0000b6bc 0449
.org 0xb6be
	adds r0, r0, r1	@ 0000b6be 4018
.org 0xb6c0
	movs r1, #0	@ 0000b6c0 0021
.org 0xb6c2
	strb r1, [r0, #0]	@ 0000b6c2 0170
.org 0xb6c4
	b.n 0xb726	@ 0000b6c4 2fe0
.org 0xb6c6
	.byte 0x00	@ 0000b6c6 data
.org 0xb6c7
	.byte 0x00	@ 0000b6c7 data
.org 0xb6c8
	.byte 0x04,0x0a,0x00,0x02	@ 0000b6c8 data
.org 0xb6cc
	.byte 0xb0,0x0a,0x00,0x02	@ 0000b6cc data
.org 0xb6d0
	.byte 0x2d,0xd0,0x02,0x00	@ 0000b6d0 data
.org 0xb6d4
	cmp r1, #30	@ 0000b6d4 1e29
.org 0xb6d6
	bhi.n 0xb6ea	@ 0000b6d6 08d8
.org 0xb6d8
	cmp r4, #30	@ 0000b6d8 1e2c
.org 0xb6da
	bhi.n 0xb6ea	@ 0000b6da 06d8
.org 0xb6dc
	ldr r3, [pc, #28]	@ 0000b6dc 074b
.org 0xb6de
	movs r1, #176	@ 0000b6de b021
.org 0xb6e0
	lsls r1, r1, #10	@ 0000b6e0 8902
.org 0xb6e2
	adds r0, r3, r1	@ 0000b6e2 5818
.org 0xb6e4
	ldrh r0, [r0, #0]	@ 0000b6e4 0088
.org 0xb6e6
	cmp r0, #0	@ 0000b6e6 0028
.org 0xb6e8
	beq.n 0xb708	@ 0000b6e8 0ed0
.org 0xb6ea
	ldr r2, [pc, #20]	@ 0000b6ea 054a
.org 0xb6ec
	ldr r0, [pc, #20]	@ 0000b6ec 0548
.org 0xb6ee
	adds r3, r2, r0	@ 0000b6ee 1318
.org 0xb6f0
	mov r0, r8	@ 0000b6f0 4046
.org 0xb6f2
	mov r1, sp	@ 0000b6f2 6946
.org 0xb6f4
	bl 0x4f80	@ 0000b6f4 f9f744fc
.org 0xb6f8
	b.n 0xb71a	@ 0000b6f8 0fe0
.org 0xb6fa
	.byte 0x00	@ 0000b6fa data
.org 0xb6fb
	.byte 0x00	@ 0000b6fb data
.org 0xb6fc
	.byte 0xb0,0x0a,0x00,0x02	@ 0000b6fc data
.org 0xb700
	.byte 0xd4,0xca,0x02,0x02	@ 0000b700 data
.org 0xb704
	.byte 0xbc,0x47,0xfd,0xff	@ 0000b704 data
.org 0xb708
	ldr r1, [pc, #56]	@ 0000b708 0e49
.org 0xb70a
	adds r2, r3, r1	@ 0000b70a 5a18
.org 0xb70c
	movs r0, #252	@ 0000b70c fc20
.org 0xb70e
	lsls r0, r0, #3	@ 0000b70e c000
.org 0xb710
	adds r3, r3, r0	@ 0000b710 1b18
.org 0xb712
	mov r0, r8	@ 0000b712 4046
.org 0xb714
	mov r1, sp	@ 0000b714 6946
.org 0xb716
	bl 0x5124	@ 0000b716 f9f705fd
