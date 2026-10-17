@ FUN_0804e604  entry 0x0804e604  size 80
.thumb
.org 0x4e604
FUN_0804e604:
	push {r4, r5, lr}	@ 0004e604 30b5
.org 0x4e606
	adds r4, r0, #0	@ 0004e606 041c
.org 0x4e608
	ldr r1, [pc, #72]	@ 0004e608 1249
.org 0x4e60a
	ldrb r0, [r4, #9]	@ 0004e60a 607a
.org 0x4e60c
	lsls r0, r0, #2	@ 0004e60c 8000
.org 0x4e60e
	adds r0, r0, r1	@ 0004e60e 4018
.org 0x4e610
	movs r1, #1	@ 0004e610 0121
.org 0x4e612
	str r1, [r4, #12]	@ 0004e612 e160
.org 0x4e614
	ldr r0, [r0, #0]	@ 0004e614 0068
.org 0x4e616
	ldr r0, [r0, #4]	@ 0004e616 4068
.org 0x4e618
	str r0, [r4, #20]	@ 0004e618 6061
.org 0x4e61a
	adds r0, r4, #0	@ 0004e61a 201c
.org 0x4e61c
	bl 0x1cc9c	@ 0004e61c cef73efb
.org 0x4e620
	adds r0, r4, #0	@ 0004e620 201c
.org 0x4e622
	bl 0x1ceec	@ 0004e622 cef763fc
.org 0x4e626
	ldrb r1, [r4, #10]	@ 0004e626 a17a
.org 0x4e628
	movs r0, #254	@ 0004e628 fe20
.org 0x4e62a
	ands r0, r1	@ 0004e62a 0840
.org 0x4e62c
	movs r5, #0	@ 0004e62c 0025
.org 0x4e62e
	movs r1, #2	@ 0004e62e 0221
.org 0x4e630
	orrs r0, r1	@ 0004e630 0843
.org 0x4e632
	strb r0, [r4, #10]	@ 0004e632 a072
.org 0x4e634
	ldr r1, [pc, #32]	@ 0004e634 0849
.org 0x4e636
	adds r0, r4, #0	@ 0004e636 201c
.org 0x4e638
	bl 0x1cf00	@ 0004e638 cef762fc
.org 0x4e63c
	movs r0, #8	@ 0004e63c 0820
.org 0x4e63e
	strb r0, [r4, #18]	@ 0004e63e a074
.org 0x4e640
	strb r5, [r4, #19]	@ 0004e640 e574
.org 0x4e642
	adds r0, r4, #0	@ 0004e642 201c
.org 0x4e644
	adds r0, #189	@ 0004e644 bd30
.org 0x4e646
	strb r5, [r0, #0]	@ 0004e646 0570
.org 0x4e648
	adds r0, r4, #0	@ 0004e648 201c
.org 0x4e64a
	bl 0x4e65c	@ 0004e64a 00f007f8
.org 0x4e64e
	pop {r4, r5}	@ 0004e64e 30bc
.org 0x4e650
	pop {r0}	@ 0004e650 01bc
.org 0x4e652
	bx r0	@ 0004e652 0047
