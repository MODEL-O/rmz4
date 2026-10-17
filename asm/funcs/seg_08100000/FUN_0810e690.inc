@ FUN_0810e690  entry 0x0810e690  size 184
.thumb
.org 0x10e690
FUN_0810e690:
	push {r4, r5, r6, lr}	@ 0010e690 70b5
.org 0x10e692
	adds r3, r0, #0	@ 0010e692 031c
.org 0x10e694
	ldr r2, [r3, #28]	@ 0010e694 da69
.org 0x10e696
	movs r4, #255	@ 0010e696 ff24
.org 0x10e698
	movs r6, #255	@ 0010e698 ff26
.org 0x10e69a
	movs r0, #0	@ 0010e69a 0020
.org 0x10e69c
	str r0, [r3, #36]	@ 0010e69c 5862
.org 0x10e69e
	ldrb r0, [r2, #0]	@ 0010e69e 1078
.org 0x10e6a0
	cmp r0, #252	@ 0010e6a0 fc28
.org 0x10e6a2
	bhi.n 0x10e6e4	@ 0010e6a2 1fd8
.org 0x10e6a4
	movs r5, #1	@ 0010e6a4 0125
.org 0x10e6a6
	cmp r0, #243	@ 0010e6a6 f328
.org 0x10e6a8
	bne.n 0x10e6b8	@ 0010e6a8 06d1
.org 0x10e6aa
	adds r2, #1	@ 0010e6aa 0132
.org 0x10e6ac
	ldrb r1, [r2, #0]	@ 0010e6ac 1178
.org 0x10e6ae
	lsrs r0, r1, #1	@ 0010e6ae 4808
.org 0x10e6b0
	strb r0, [r3, #4]	@ 0010e6b0 1871
.org 0x10e6b2
	ands r1, r5	@ 0010e6b2 2940
.org 0x10e6b4
	strb r1, [r3, #6]	@ 0010e6b4 9971
.org 0x10e6b6
	b.n 0x10e6dc	@ 0010e6b6 11e0
.org 0x10e6b8
	cmp r0, #240	@ 0010e6b8 f028
.org 0x10e6ba
	bgt.n 0x10e6c2	@ 0010e6ba 02dc
.org 0x10e6bc
	adds r2, #1	@ 0010e6bc 0132
.org 0x10e6be
	nop	@ 0010e6be c046
.org 0x10e6c0
	b.n 0x10e6dc	@ 0010e6c0 0ce0
.org 0x10e6c2
	cmp r0, #246	@ 0010e6c2 f628
.org 0x10e6c4
	bne.n 0x10e6cc	@ 0010e6c4 02d1
.org 0x10e6c6
	adds r2, #1	@ 0010e6c6 0132
.org 0x10e6c8
	ldrb r6, [r2, #0]	@ 0010e6c8 1678
.org 0x10e6ca
	b.n 0x10e6dc	@ 0010e6ca 07e0
.org 0x10e6cc
	cmp r0, #250	@ 0010e6cc fa28
.org 0x10e6ce
	bne.n 0x10e6d4	@ 0010e6ce 01d1
.org 0x10e6d0
	strb r5, [r3, #5]	@ 0010e6d0 5d71
.org 0x10e6d2
	b.n 0x10e6dc	@ 0010e6d2 03e0
.org 0x10e6d4
	cmp r0, #251	@ 0010e6d4 fb28
.org 0x10e6d6
	bne.n 0x10e6dc	@ 0010e6d6 01d1
.org 0x10e6d8
	movs r0, #13	@ 0010e6d8 0d20
.org 0x10e6da
	strb r0, [r3, #5]	@ 0010e6da 5871
.org 0x10e6dc
	adds r2, #1	@ 0010e6dc 0132
.org 0x10e6de
	ldrb r0, [r2, #0]	@ 0010e6de 1078
.org 0x10e6e0
	cmp r0, #252	@ 0010e6e0 fc28
.org 0x10e6e2
	bls.n 0x10e6a6	@ 0010e6e2 e0d9
.org 0x10e6e4
	cmp r4, #255	@ 0010e6e4 ff2c
.org 0x10e6e6
	beq.n 0x10e70c	@ 0010e6e6 11d0
.org 0x10e6e8
	strh r4, [r3, #22]	@ 0010e6e8 dc82
.org 0x10e6ea
	ldr r2, [r3, #24]	@ 0010e6ea 9a69
.org 0x10e6ec
	b.n 0x10e6f0	@ 0010e6ec 00e0
.org 0x10e6ee
	adds r2, #1	@ 0010e6ee 0132
.org 0x10e6f0
	ldrb r0, [r2, #0]	@ 0010e6f0 1078
.org 0x10e6f2
	cmp r0, #254	@ 0010e6f2 fe28
.org 0x10e6f4
	bhi.n 0x10e704	@ 0010e6f4 06d8
.org 0x10e6f6
	cmp r0, #244	@ 0010e6f6 f428
.org 0x10e6f8
	bne.n 0x10e6ee	@ 0010e6f8 f9d1
.org 0x10e6fa
	ldrb r0, [r2, #1]	@ 0010e6fa 5078
.org 0x10e6fc
	cmp r0, r4	@ 0010e6fc a042
.org 0x10e6fe
	bne.n 0x10e6ee	@ 0010e6fe f6d1
.org 0x10e700
	adds r0, r2, #2	@ 0010e700 901c
.org 0x10e702
	str r0, [r3, #32]	@ 0010e702 1862
.org 0x10e704
	ldrb r0, [r2, #0]	@ 0010e704 1078
.org 0x10e706
	cmp r0, #255	@ 0010e706 ff28
.org 0x10e708
	bne.n 0x10e71a	@ 0010e708 07d1
.org 0x10e70a
	b.n 0x10e716	@ 0010e70a 04e0
.org 0x10e70c
	ldrb r0, [r2, #0]	@ 0010e70c 1078
.org 0x10e70e
	cmp r0, #253	@ 0010e70e fd28
.org 0x10e710
	bhi.n 0x10e716	@ 0010e710 01d8
.org 0x10e712
	adds r0, r2, #1	@ 0010e712 501c
.org 0x10e714
	b.n 0x10e718	@ 0010e714 00e0
.org 0x10e716
	movs r0, #0	@ 0010e716 0020
.org 0x10e718
	str r0, [r3, #32]	@ 0010e718 1862
.org 0x10e71a
	cmp r6, #255	@ 0010e71a ff2e
.org 0x10e71c
	beq.n 0x10e742	@ 0010e71c 11d0
.org 0x10e71e
	ldrb r0, [r3, #7]	@ 0010e71e d879
.org 0x10e720
	lsrs r0, r0, #4	@ 0010e720 0009
.org 0x10e722
	movs r1, #16	@ 0010e722 1021
.org 0x10e724
	orrs r0, r1	@ 0010e724 0843
.org 0x10e726
	strb r0, [r3, #7]	@ 0010e726 d871
.org 0x10e728
	ldr r2, [r3, #24]	@ 0010e728 9a69
.org 0x10e72a
	b.n 0x10e72e	@ 0010e72a 00e0
.org 0x10e72c
	adds r2, #1	@ 0010e72c 0132
.org 0x10e72e
	ldrb r0, [r2, #0]	@ 0010e72e 1078
.org 0x10e730
	cmp r0, #254	@ 0010e730 fe28
.org 0x10e732
	bhi.n 0x10e742	@ 0010e732 06d8
.org 0x10e734
	cmp r0, #244	@ 0010e734 f428
.org 0x10e736
	bne.n 0x10e72c	@ 0010e736 f9d1
.org 0x10e738
	ldrb r0, [r2, #1]	@ 0010e738 5078
.org 0x10e73a
	cmp r0, r6	@ 0010e73a b042
.org 0x10e73c
	bne.n 0x10e72c	@ 0010e73c f6d1
.org 0x10e73e
	adds r0, r2, #2	@ 0010e73e 901c
.org 0x10e740
	str r0, [r3, #36]	@ 0010e740 5862
.org 0x10e742
	pop {r4, r5, r6}	@ 0010e742 70bc
.org 0x10e744
	pop {r0}	@ 0010e744 01bc
.org 0x10e746
	bx r0	@ 0010e746 0047
