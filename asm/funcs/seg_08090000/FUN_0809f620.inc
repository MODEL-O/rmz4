@ FUN_0809f620  entry 0x0809f620  size 86
.thumb
.org 0x9f620
FUN_0809f620:
	push {r4, r5, lr}	@ 0009f620 30b5
.org 0x9f622
	adds r5, r0, #0	@ 0009f622 051c
.org 0x9f624
	ldr r4, [r5, #40]	@ 0009f624 ac6a
.org 0x9f626
	bl 0x1cc9c	@ 0009f626 7df739fb
.org 0x9f62a
	adds r0, r5, #0	@ 0009f62a 281c
.org 0x9f62c
	bl 0x1ceec	@ 0009f62c 7df75efc
.org 0x9f630
	ldrb r1, [r5, #10]	@ 0009f630 a97a
.org 0x9f632
	movs r0, #1	@ 0009f632 0120
.org 0x9f634
	orrs r0, r1	@ 0009f634 0843
.org 0x9f636
	movs r1, #2	@ 0009f636 0221
.org 0x9f638
	orrs r0, r1	@ 0009f638 0843
.org 0x9f63a
	strb r0, [r5, #10]	@ 0009f63a a872
.org 0x9f63c
	ldr r1, [pc, #36]	@ 0009f63c 0949
.org 0x9f63e
	adds r0, r5, #0	@ 0009f63e 281c
.org 0x9f640
	bl 0x1cf00	@ 0009f640 7df75efc
.org 0x9f644
	ldrb r1, [r5, #11]	@ 0009f644 e97a
.org 0x9f646
	movs r0, #16	@ 0009f646 1020
.org 0x9f648
	orrs r0, r1	@ 0009f648 0843
.org 0x9f64a
	strb r0, [r5, #11]	@ 0009f64a e872
.org 0x9f64c
	ldrb r0, [r4, #28]	@ 0009f64c 207f
.org 0x9f64e
	strb r0, [r5, #29]	@ 0009f64e 6877
.org 0x9f650
	ldrb r1, [r5, #10]	@ 0009f650 a97a
.org 0x9f652
	movs r0, #16	@ 0009f652 1020
.org 0x9f654
	ands r0, r1	@ 0009f654 0840
.org 0x9f656
	cmp r0, #0	@ 0009f656 0028
.org 0x9f658
	beq.n 0x9f668	@ 0009f658 06d0
.org 0x9f65a
	movs r0, #128	@ 0009f65a 8020
.org 0x9f65c
	negs r0, r0	@ 0009f65c 4042
.org 0x9f65e
	str r0, [r5, #92]	@ 0009f65e e865
.org 0x9f660
	movs r0, #2	@ 0009f660 0220
.org 0x9f662
	b.n 0x9f66e	@ 0009f662 04e0
.org 0x9f664
	.byte 0x07,0xaa,0x00,0x00	@ 0009f664 data
.org 0x9f668
	movs r0, #128	@ 0009f668 8020
.org 0x9f66a
	str r0, [r5, #92]	@ 0009f66a e865
.org 0x9f66c
	subs r0, #130	@ 0009f66c 8238
.org 0x9f66e
	str r0, [r5, #100]	@ 0009f66e 6866
.org 0x9f670
	movs r0, #0	@ 0009f670 0020
.org 0x9f672
	strb r0, [r5, #18]	@ 0009f672 a874
.org 0x9f674
	pop {r4, r5}	@ 0009f674 30bc
