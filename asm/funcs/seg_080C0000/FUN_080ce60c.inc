@ FUN_080ce60c  entry 0x080ce60c  size 92
.thumb
.org 0xce60c
FUN_080ce60c:
	push {r4, r5, r6, lr}	@ 000ce60c 70b5
.org 0xce60e
	adds r4, r0, #0	@ 000ce60e 041c
.org 0xce610
	adds r6, r4, #0	@ 000ce610 261c
.org 0xce612
	adds r6, #180	@ 000ce612 b436
.org 0xce614
	ldrb r0, [r4, #15]	@ 000ce614 e07b
.org 0xce616
	cmp r0, #0	@ 000ce616 0028
.org 0xce618
	bne.n 0xce636	@ 000ce618 0dd1
.org 0xce61a
	adds r0, r4, #0	@ 000ce61a 201c
.org 0xce61c
	adds r0, #116	@ 000ce61c 7430
.org 0xce61e
	ldr r1, [pc, #72]	@ 000ce61e 1249
.org 0xce620
	bl 0x5784	@ 000ce620 37f7b0f8
.org 0xce624
	ldr r1, [pc, #68]	@ 000ce624 1149
.org 0xce626
	adds r0, r4, #0	@ 000ce626 201c
.org 0xce628
	bl 0x1cf00	@ 000ce628 4ef76afc
.org 0xce62c
	movs r0, #8	@ 000ce62c 0820
.org 0xce62e
	strb r0, [r4, #18]	@ 000ce62e a074
.org 0xce630
	ldrb r0, [r4, #15]	@ 000ce630 e07b
.org 0xce632
	adds r0, #1	@ 000ce632 0130
.org 0xce634
	strb r0, [r4, #15]	@ 000ce634 e073
.org 0xce636
	adds r0, r4, #0	@ 000ce636 201c
.org 0xce638
	bl 0x1cff0	@ 000ce638 4ef7dafc
.org 0xce63c
	ldrb r0, [r4, #18]	@ 000ce63c a07c
.org 0xce63e
	subs r0, #1	@ 000ce63e 0138
.org 0xce640
	strb r0, [r4, #18]	@ 000ce640 a074
.org 0xce642
	lsls r0, r0, #24	@ 000ce642 0006
.org 0xce644
	lsrs r5, r0, #24	@ 000ce644 050e
.org 0xce646
	cmp r5, #0	@ 000ce646 002d
.org 0xce648
	bne.n 0xce662	@ 000ce648 0bd1
.org 0xce64a
	adds r0, r4, #0	@ 000ce64a 201c
.org 0xce64c
	adds r0, #84	@ 000ce64c 5430
.org 0xce64e
	ldr r1, [pc, #32]	@ 000ce64e 0849
.org 0xce650
	ldr r1, [r1, #0]	@ 000ce650 0968
.org 0xce652
	adds r1, #84	@ 000ce652 5431
.org 0xce654
	bl 0x10d3ac	@ 000ce654 3ef0aafe
.org 0xce658
	strb r0, [r6, #0]	@ 000ce658 3070
.org 0xce65a
	movs r0, #1	@ 000ce65a 0120
.org 0xce65c
	strb r0, [r4, #13]	@ 000ce65c 6073
.org 0xce65e
	strb r5, [r4, #14]	@ 000ce65e a573
.org 0xce660
	strb r5, [r4, #15]	@ 000ce660 e573
.org 0xce662
	pop {r4, r5, r6}	@ 000ce662 70bc
.org 0xce664
	pop {r0}	@ 000ce664 01bc
.org 0xce666
	bx r0	@ 000ce666 0047
