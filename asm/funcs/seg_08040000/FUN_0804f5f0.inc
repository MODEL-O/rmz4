@ FUN_0804f5f0  entry 0x0804f5f0  size 100
.thumb
.org 0x4f5f0
FUN_0804f5f0:
	push {r4, r5, lr}	@ 0004f5f0 30b5
.org 0x4f5f2
	adds r4, r0, #0	@ 0004f5f2 041c
.org 0x4f5f4
	ldr r5, [r4, #40]	@ 0004f5f4 a56a
.org 0x4f5f6
	ldrb r0, [r4, #13]	@ 0004f5f6 607b
.org 0x4f5f8
	cmp r0, #0	@ 0004f5f8 0028
.org 0x4f5fa
	bne.n 0x4f610	@ 0004f5fa 09d1
.org 0x4f5fc
	ldr r1, [pc, #84]	@ 0004f5fc 1549
.org 0x4f5fe
	adds r0, r4, #0	@ 0004f5fe 201c
.org 0x4f600
	bl 0x1cf00	@ 0004f600 cdf77efc
.org 0x4f604
	adds r0, r5, #0	@ 0004f604 281c
.org 0x4f606
	bl 0x3aabc	@ 0004f606 ebf759fa
.org 0x4f60a
	ldrb r0, [r4, #13]	@ 0004f60a 607b
.org 0x4f60c
	adds r0, #1	@ 0004f60c 0130
.org 0x4f60e
	strb r0, [r4, #13]	@ 0004f60e 6073
.org 0x4f610
	adds r0, r4, #0	@ 0004f610 201c
.org 0x4f612
	bl 0x1cff0	@ 0004f612 cdf7edfc
.org 0x4f616
	adds r0, r4, #0	@ 0004f616 201c
.org 0x4f618
	adds r0, #115	@ 0004f618 7330
.org 0x4f61a
	ldrb r0, [r0, #0]	@ 0004f61a 0078
.org 0x4f61c
	cmp r0, #3	@ 0004f61c 0328
.org 0x4f61e
	bne.n 0x4f64e	@ 0004f61e 16d1
.org 0x4f620
	adds r0, r4, #0	@ 0004f620 201c
.org 0x4f622
	adds r0, #140	@ 0004f622 8c30
.org 0x4f624
	movs r1, #0	@ 0004f624 0021
.org 0x4f626
	str r1, [r0, #0]	@ 0004f626 0160
.org 0x4f628
	adds r0, #4	@ 0004f628 0430
.org 0x4f62a
	str r1, [r0, #0]	@ 0004f62a 0160
.org 0x4f62c
	adds r0, #4	@ 0004f62c 0430
.org 0x4f62e
	strb r1, [r0, #0]	@ 0004f62e 0170
.org 0x4f630
	ldrb r1, [r4, #10]	@ 0004f630 a17a
.org 0x4f632
	movs r0, #251	@ 0004f632 fb20
.org 0x4f634
	ands r0, r1	@ 0004f634 0840
.org 0x4f636
	movs r1, #254	@ 0004f636 fe21
.org 0x4f638
	ands r0, r1	@ 0004f638 0840
.org 0x4f63a
	strb r0, [r4, #10]	@ 0004f63a a072
.org 0x4f63c
	ldr r1, [pc, #24]	@ 0004f63c 0649
.org 0x4f63e
	ldrb r0, [r4, #9]	@ 0004f63e 607a
.org 0x4f640
	lsls r0, r0, #2	@ 0004f640 8000
.org 0x4f642
	adds r0, r0, r1	@ 0004f642 4018
.org 0x4f644
	movs r1, #4	@ 0004f644 0421
.org 0x4f646
	str r1, [r4, #12]	@ 0004f646 e160
.org 0x4f648
	ldr r0, [r0, #0]	@ 0004f648 0068
.org 0x4f64a
	ldr r0, [r0, #16]	@ 0004f64a 0069
.org 0x4f64c
	str r0, [r4, #20]	@ 0004f64c 6061
.org 0x4f64e
	pop {r4, r5}	@ 0004f64e 30bc
.org 0x4f650
	pop {r0}	@ 0004f650 01bc
.org 0x4f652
	bx r0	@ 0004f652 0047
