@ FUN_080ab71c  entry 0x080ab71c  size 154
.thumb
.org 0xab71c
FUN_080ab71c:
	push {r4, r5, r6, r7, lr}	@ 000ab71c f0b5
.org 0xab71e
	adds r5, r0, #0	@ 000ab71e 051c
.org 0xab720
	ldr r7, [r5, #40]	@ 000ab720 af6a
.org 0xab722
	ldrb r4, [r5, #17]	@ 000ab722 6c7c
.org 0xab724
	ldr r1, [pc, #76]	@ 000ab724 1349
.org 0xab726
	ldrb r0, [r5, #9]	@ 000ab726 687a
.org 0xab728
	lsls r0, r0, #2	@ 000ab728 8000
.org 0xab72a
	adds r0, r0, r1	@ 000ab72a 4018
.org 0xab72c
	movs r2, #1	@ 000ab72c 0122
.org 0xab72e
	str r2, [r5, #12]	@ 000ab72e ea60
.org 0xab730
	ldr r0, [r0, #0]	@ 000ab730 0068
.org 0xab732
	ldr r0, [r0, #4]	@ 000ab732 4068
.org 0xab734
	str r0, [r5, #20]	@ 000ab734 6861
.org 0xab736
	ldrb r1, [r5, #10]	@ 000ab736 a97a
.org 0xab738
	movs r0, #1	@ 000ab738 0120
.org 0xab73a
	movs r6, #0	@ 000ab73a 0026
.org 0xab73c
	orrs r0, r1	@ 000ab73c 0843
.org 0xab73e
	movs r1, #2	@ 000ab73e 0221
.org 0xab740
	orrs r0, r1	@ 000ab740 0843
.org 0xab742
	strb r0, [r5, #10]	@ 000ab742 a872
.org 0xab744
	lsls r0, r4, #1	@ 000ab744 6000
.org 0xab746
	subs r2, r2, r0	@ 000ab746 121a
.org 0xab748
	lsls r0, r2, #1	@ 000ab748 5000
.org 0xab74a
	adds r0, r0, r2	@ 000ab74a 8018
.org 0xab74c
	lsls r0, r0, #5	@ 000ab74c 4001
.org 0xab74e
	str r0, [r5, #92]	@ 000ab74e e865
.org 0xab750
	movs r0, #32	@ 000ab750 2020
.org 0xab752
	negs r0, r0	@ 000ab752 4042
.org 0xab754
	str r0, [r5, #96]	@ 000ab754 2866
.org 0xab756
	movs r0, #48	@ 000ab756 3020
.org 0xab758
	strb r0, [r5, #18]	@ 000ab758 a874
.org 0xab75a
	adds r0, r5, #0	@ 000ab75a 281c
.org 0xab75c
	bl 0x1cc9c	@ 000ab75c 71f79efa
.org 0xab760
	adds r0, r5, #0	@ 000ab760 281c
.org 0xab762
	bl 0x1ceec	@ 000ab762 71f7c3fb
.org 0xab766
	cmp r4, #0	@ 000ab766 002c
.org 0xab768
	beq.n 0xab778	@ 000ab768 06d0
.org 0xab76a
	ldrb r0, [r5, #10]	@ 000ab76a a87a
.org 0xab76c
	movs r1, #16	@ 000ab76c 1021
.org 0xab76e
	orrs r0, r1	@ 000ab76e 0843
.org 0xab770
	b.n 0xab77e	@ 000ab770 05e0
.org 0xab772
	.byte 0x00	@ 000ab772 data
.org 0xab773
	.byte 0x00	@ 000ab773 data
.org 0xab774
	.byte 0x40,0xdb,0x85,0x08	@ 000ab774 data
.org 0xab778
	ldrb r1, [r5, #10]	@ 000ab778 a97a
.org 0xab77a
	movs r0, #239	@ 000ab77a ef20
.org 0xab77c
	ands r0, r1	@ 000ab77c 0840
.org 0xab77e
	strb r0, [r5, #10]	@ 000ab77e a872
.org 0xab780
	movs r1, #1	@ 000ab780 0121
.org 0xab782
	ands r1, r4	@ 000ab782 2140
.org 0xab784
	adds r0, r5, #0	@ 000ab784 281c
.org 0xab786
	adds r0, #76	@ 000ab786 4c30
.org 0xab788
	strb r1, [r0, #0]	@ 000ab788 0170
.org 0xab78a
	adds r3, r5, #0	@ 000ab78a 2b1c
.org 0xab78c
	adds r3, #74	@ 000ab78c 4a33
.org 0xab78e
	lsls r1, r1, #4	@ 000ab78e 0901
.org 0xab790
	ldrb r2, [r3, #0]	@ 000ab790 1a78
.org 0xab792
	movs r0, #17	@ 000ab792 1120
.org 0xab794
	negs r0, r0	@ 000ab794 4042
.org 0xab796
	ands r0, r2	@ 000ab796 1040
.org 0xab798
	orrs r0, r1	@ 000ab798 0843
.org 0xab79a
	strb r0, [r3, #0]	@ 000ab79a 1870
.org 0xab79c
	ldr r1, [pc, #28]	@ 000ab79c 0749
.org 0xab79e
	adds r0, r5, #0	@ 000ab79e 281c
.org 0xab7a0
	bl 0x1cf00	@ 000ab7a0 71f7aefb
.org 0xab7a4
	ldrb r1, [r5, #11]	@ 000ab7a4 e97a
.org 0xab7a6
	movs r0, #16	@ 000ab7a6 1020
.org 0xab7a8
	orrs r0, r1	@ 000ab7a8 0843
.org 0xab7aa
	strb r0, [r5, #11]	@ 000ab7aa e872
.org 0xab7ac
	ldrb r0, [r7, #28]	@ 000ab7ac 387f
.org 0xab7ae
	strb r0, [r5, #29]	@ 000ab7ae 6877
.org 0xab7b0
	adds r0, r5, #0	@ 000ab7b0 281c
.org 0xab7b2
	bl 0xab7c0	@ 000ab7b2 00f005f8
