@ FUN_080e575c  entry 0x080e575c  size 72
.thumb
.org 0xe575c
FUN_080e575c:
	push {r4, lr}	@ 000e575c 10b5
.org 0xe575e
	adds r4, r0, #0	@ 000e575e 041c
.org 0xe5760
	bl 0x1cc9c	@ 000e5760 37f79cfa
.org 0xe5764
	ldrb r1, [r4, #10]	@ 000e5764 a17a
.org 0xe5766
	movs r0, #1	@ 000e5766 0120
.org 0xe5768
	orrs r0, r1	@ 000e5768 0843
.org 0xe576a
	movs r1, #2	@ 000e576a 0221
.org 0xe576c
	orrs r0, r1	@ 000e576c 0843
.org 0xe576e
	strb r0, [r4, #10]	@ 000e576e a072
.org 0xe5770
	ldr r1, [pc, #48]	@ 000e5770 0c49
.org 0xe5772
	ldrb r0, [r4, #9]	@ 000e5772 607a
.org 0xe5774
	lsls r0, r0, #2	@ 000e5774 8000
.org 0xe5776
	adds r0, r0, r1	@ 000e5776 4018
.org 0xe5778
	movs r1, #1	@ 000e5778 0121
.org 0xe577a
	str r1, [r4, #12]	@ 000e577a e160
.org 0xe577c
	ldr r0, [r0, #0]	@ 000e577c 0068
.org 0xe577e
	ldr r0, [r0, #4]	@ 000e577e 4068
.org 0xe5780
	str r0, [r4, #20]	@ 000e5780 6061
.org 0xe5782
	adds r0, r4, #0	@ 000e5782 201c
.org 0xe5784
	adds r0, #116	@ 000e5784 7430
.org 0xe5786
	strb r1, [r0, #0]	@ 000e5786 0170
.org 0xe5788
	ldr r1, [pc, #28]	@ 000e5788 0749
.org 0xe578a
	ldrb r0, [r4, #16]	@ 000e578a 207c
.org 0xe578c
	lsls r0, r0, #2	@ 000e578c 8000
.org 0xe578e
	adds r0, r0, r1	@ 000e578e 4018
.org 0xe5790
	ldr r1, [r0, #0]	@ 000e5790 0168
.org 0xe5792
	adds r0, r4, #0	@ 000e5792 201c
.org 0xe5794
	bl 0x128f80	@ 000e5794 43f0f4fb
.org 0xe5798
	adds r0, r4, #0	@ 000e5798 201c
.org 0xe579a
	bl 0xe57ac	@ 000e579a 00f007f8
.org 0xe579e
	pop {r4}	@ 000e579e 10bc
.org 0xe57a0
	pop {r0}	@ 000e57a0 01bc
.org 0xe57a2
	bx r0	@ 000e57a2 0047
