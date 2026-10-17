@ FUN_080495e8  entry 0x080495e8  size 112
.thumb
.org 0x495e8
FUN_080495e8:
	push {r4, lr}	@ 000495e8 10b5
.org 0x495ea
	adds r4, r0, #0	@ 000495ea 041c
.org 0x495ec
	ldrb r0, [r4, #13]	@ 000495ec 607b
.org 0x495ee
	cmp r0, #0	@ 000495ee 0028
.org 0x495f0
	bne.n 0x4962e	@ 000495f0 1dd1
.org 0x495f2
	ldrb r0, [r4, #16]	@ 000495f2 207c
.org 0x495f4
	cmp r0, #0	@ 000495f4 0028
.org 0x495f6
	bne.n 0x49608	@ 000495f6 07d1
.org 0x495f8
	ldr r1, [pc, #8]	@ 000495f8 0249
.org 0x495fa
	adds r0, r4, #0	@ 000495fa 201c
.org 0x495fc
	bl 0x1cf00	@ 000495fc d3f780fc
.org 0x49600
	b.n 0x49610	@ 00049600 06e0
.org 0x49602
	.byte 0x00	@ 00049602 data
.org 0x49603
	.byte 0x00	@ 00049603 data
.org 0x49604
	.byte 0x39,0x80,0x00,0x00	@ 00049604 data
.org 0x49608
	ldr r1, [pc, #84]	@ 00049608 1549
.org 0x4960a
	adds r0, r4, #0	@ 0004960a 201c
.org 0x4960c
	bl 0x1cf00	@ 0004960c d3f778fc
.org 0x49610
	adds r0, r4, #0	@ 00049610 201c
.org 0x49612
	adds r0, #140	@ 00049612 8c30
.org 0x49614
	movs r1, #0	@ 00049614 0021
.org 0x49616
	str r1, [r0, #0]	@ 00049616 0160
.org 0x49618
	adds r0, #4	@ 00049618 0430
.org 0x4961a
	str r1, [r0, #0]	@ 0004961a 0160
.org 0x4961c
	adds r0, #4	@ 0004961c 0430
.org 0x4961e
	strb r1, [r0, #0]	@ 0004961e 0170
.org 0x49620
	ldrb r1, [r4, #10]	@ 00049620 a17a
.org 0x49622
	movs r0, #251	@ 00049622 fb20
.org 0x49624
	ands r0, r1	@ 00049624 0840
.org 0x49626
	strb r0, [r4, #10]	@ 00049626 a072
.org 0x49628
	ldrb r0, [r4, #13]	@ 00049628 607b
.org 0x4962a
	adds r0, #1	@ 0004962a 0130
.org 0x4962c
	strb r0, [r4, #13]	@ 0004962c 6073
.org 0x4962e
	adds r0, r4, #0	@ 0004962e 201c
.org 0x49630
	bl 0x1cff0	@ 00049630 d3f7defc
.org 0x49634
	adds r0, r4, #0	@ 00049634 201c
.org 0x49636
	adds r0, #115	@ 00049636 7330
.org 0x49638
	ldrb r0, [r0, #0]	@ 00049638 0078
.org 0x4963a
	cmp r0, #3	@ 0004963a 0328
.org 0x4963c
	bne.n 0x49658	@ 0004963c 0cd1
.org 0x4963e
	ldrb r1, [r4, #10]	@ 0004963e a17a
.org 0x49640
	movs r0, #254	@ 00049640 fe20
.org 0x49642
	ands r0, r1	@ 00049642 0840
.org 0x49644
	strb r0, [r4, #10]	@ 00049644 a072
.org 0x49646
	ldr r1, [pc, #28]	@ 00049646 0749
.org 0x49648
	ldrb r0, [r4, #9]	@ 00049648 607a
.org 0x4964a
	lsls r0, r0, #2	@ 0004964a 8000
.org 0x4964c
	adds r0, r0, r1	@ 0004964c 4018
.org 0x4964e
	movs r1, #4	@ 0004964e 0421
.org 0x49650
	str r1, [r4, #12]	@ 00049650 e160
.org 0x49652
	ldr r0, [r0, #0]	@ 00049652 0068
.org 0x49654
	ldr r0, [r0, #16]	@ 00049654 0069
.org 0x49656
	str r0, [r4, #20]	@ 00049656 6061
