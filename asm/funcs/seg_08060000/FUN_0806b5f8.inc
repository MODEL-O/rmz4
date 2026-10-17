@ FUN_0806b5f8  entry 0x0806b5f8  size 172
.thumb
.org 0x6b5f8
FUN_0806b5f8:
	push {r4, r5, lr}	@ 0006b5f8 30b5
.org 0x6b5fa
	adds r4, r0, #0	@ 0006b5fa 041c
.org 0x6b5fc
	ldrb r5, [r4, #14]	@ 0006b5fc a57b
.org 0x6b5fe
	cmp r5, #0	@ 0006b5fe 002d
.org 0x6b600
	bne.n 0x6b61e	@ 0006b600 0dd1
.org 0x6b602
	ldr r1, [pc, #120]	@ 0006b602 1e49
.org 0x6b604
	bl 0x1cf00	@ 0006b604 b1f77cfc
.org 0x6b608
	adds r0, r4, #0	@ 0006b608 201c
.org 0x6b60a
	adds r0, #116	@ 0006b60a 7430
.org 0x6b60c
	ldr r1, [pc, #112]	@ 0006b60c 1c49
.org 0x6b60e
	bl 0x5784	@ 0006b60e 9af7b9f8
.org 0x6b612
	movs r0, #16	@ 0006b612 1020
.org 0x6b614
	strb r0, [r4, #18]	@ 0006b614 a074
.org 0x6b616
	strb r5, [r4, #15]	@ 0006b616 e573
.org 0x6b618
	ldrb r0, [r4, #14]	@ 0006b618 a07b
.org 0x6b61a
	adds r0, #1	@ 0006b61a 0130
.org 0x6b61c
	strb r0, [r4, #14]	@ 0006b61c a073
.org 0x6b61e
	adds r0, r4, #0	@ 0006b61e 201c
.org 0x6b620
	bl 0x1cff0	@ 0006b620 b1f7e6fc
.org 0x6b624
	ldrb r0, [r4, #15]	@ 0006b624 e07b
.org 0x6b626
	cmp r0, #0	@ 0006b626 0028
.org 0x6b628
	bne.n 0x6b698	@ 0006b628 36d1
.org 0x6b62a
	adds r0, r4, #0	@ 0006b62a 201c
.org 0x6b62c
	adds r0, #113	@ 0006b62c 7130
.org 0x6b62e
	ldrb r0, [r0, #0]	@ 0006b62e 0078
.org 0x6b630
	lsls r0, r0, #24	@ 0006b630 0006
.org 0x6b632
	asrs r0, r0, #24	@ 0006b632 0016
.org 0x6b634
	cmp r0, #0	@ 0006b634 0028
.org 0x6b636
	ble.n 0x6b6aa	@ 0006b636 38dd
.org 0x6b638
	movs r3, #0	@ 0006b638 0023
.org 0x6b63a
	ldr r0, [pc, #72]	@ 0006b63a 1248
.org 0x6b63c
	ldr r2, [r0, #0]	@ 0006b63c 0268
.org 0x6b63e
	ldr r1, [r4, #84]	@ 0006b63e 616d
.org 0x6b640
	ldr r0, [r2, #84]	@ 0006b640 506d
.org 0x6b642
	cmp r1, r0	@ 0006b642 8142
.org 0x6b644
	bge.n 0x6b648	@ 0006b644 00da
.org 0x6b646
	movs r3, #1	@ 0006b646 0123
.org 0x6b648
	adds r0, r4, #0	@ 0006b648 201c
.org 0x6b64a
	adds r0, #76	@ 0006b64a 4c30
.org 0x6b64c
	strb r3, [r0, #0]	@ 0006b64c 0370
.org 0x6b64e
	movs r3, #0	@ 0006b64e 0023
.org 0x6b650
	ldr r1, [r4, #84]	@ 0006b650 616d
.org 0x6b652
	ldr r0, [r2, #84]	@ 0006b652 506d
.org 0x6b654
	cmp r1, r0	@ 0006b654 8142
.org 0x6b656
	bge.n 0x6b65a	@ 0006b656 00da
.org 0x6b658
	movs r3, #1	@ 0006b658 0123
.org 0x6b65a
	movs r0, #74	@ 0006b65a 4a20
.org 0x6b65c
	adds r0, r0, r4	@ 0006b65c 0019
.org 0x6b65e
	mov ip, r0	@ 0006b65e 8446
.org 0x6b660
	lsls r2, r3, #4	@ 0006b660 1a01
.org 0x6b662
	ldrb r1, [r0, #0]	@ 0006b662 0178
.org 0x6b664
	movs r0, #17	@ 0006b664 1120
.org 0x6b666
	negs r0, r0	@ 0006b666 4042
.org 0x6b668
	ands r0, r1	@ 0006b668 0840
.org 0x6b66a
	orrs r0, r2	@ 0006b66a 1043
.org 0x6b66c
	mov r1, ip	@ 0006b66c 6146
.org 0x6b66e
	strb r0, [r1, #0]	@ 0006b66e 0870
.org 0x6b670
	cmp r3, #0	@ 0006b670 002b
.org 0x6b672
	beq.n 0x6b688	@ 0006b672 09d0
.org 0x6b674
	ldrb r0, [r4, #10]	@ 0006b674 a07a
.org 0x6b676
	movs r1, #16	@ 0006b676 1021
.org 0x6b678
	orrs r0, r1	@ 0006b678 0843
.org 0x6b67a
	b.n 0x6b68e	@ 0006b67a 08e0
.org 0x6b67c
	.byte 0x02,0xaa,0x00,0x00	@ 0006b67c data
.org 0x6b680
	.byte 0xac,0xc1,0x85,0x08	@ 0006b680 data
.org 0x6b684
	.byte 0xf0,0xdb,0x02,0x02	@ 0006b684 data
.org 0x6b688
	ldrb r1, [r4, #10]	@ 0006b688 a17a
.org 0x6b68a
	movs r0, #239	@ 0006b68a ef20
.org 0x6b68c
	ands r0, r1	@ 0006b68c 0840
.org 0x6b68e
	strb r0, [r4, #10]	@ 0006b68e a072
.org 0x6b690
	ldrb r0, [r4, #15]	@ 0006b690 e07b
.org 0x6b692
	adds r0, #1	@ 0006b692 0130
.org 0x6b694
	strb r0, [r4, #15]	@ 0006b694 e073
.org 0x6b696
	b.n 0x6b6aa	@ 0006b696 08e0
.org 0x6b698
	adds r0, r4, #0	@ 0006b698 201c
.org 0x6b69a
	adds r0, #115	@ 0006b69a 7330
.org 0x6b69c
	ldrb r0, [r0, #0]	@ 0006b69c 0078
.org 0x6b69e
	cmp r0, #3	@ 0006b69e 0328
.org 0x6b6a0
	bne.n 0x6b6aa	@ 0006b6a0 03d1
.org 0x6b6a2
	movs r1, #0	@ 0006b6a2 0021
