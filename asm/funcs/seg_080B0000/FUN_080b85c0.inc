@ FUN_080b85c0  entry 0x080b85c0  size 358
.thumb
.org 0xb85c0
FUN_080b85c0:
	push {r4, r5, lr}	@ 000b85c0 30b5
.org 0xb85c2
	adds r4, r0, #0	@ 000b85c2 041c
.org 0xb85c4
	ldr r5, [r4, #40]	@ 000b85c4 a56a
.org 0xb85c6
	ldrb r0, [r5, #12]	@ 000b85c6 287b
.org 0xb85c8
	cmp r0, #1	@ 000b85c8 0128
.org 0xb85ca
	bls.n 0xb85f8	@ 000b85ca 15d9
.org 0xb85cc
	ldrb r1, [r4, #11]	@ 000b85cc e17a
.org 0xb85ce
	movs r0, #16	@ 000b85ce 1020
.org 0xb85d0
	orrs r0, r1	@ 000b85d0 0843
.org 0xb85d2
	strb r0, [r4, #11]	@ 000b85d2 e072
.org 0xb85d4
	ldrb r0, [r5, #28]	@ 000b85d4 287f
.org 0xb85d6
	strb r0, [r4, #29]	@ 000b85d6 6077
.org 0xb85d8
	ldr r1, [pc, #24]	@ 000b85d8 0649
.org 0xb85da
	ldrb r0, [r4, #9]	@ 000b85da 607a
.org 0xb85dc
	lsls r0, r0, #2	@ 000b85dc 8000
.org 0xb85de
	adds r0, r0, r1	@ 000b85de 4018
.org 0xb85e0
	movs r1, #2	@ 000b85e0 0221
.org 0xb85e2
	str r1, [r4, #12]	@ 000b85e2 e160
.org 0xb85e4
	ldr r0, [r0, #0]	@ 000b85e4 0068
.org 0xb85e6
	ldr r0, [r0, #8]	@ 000b85e6 8068
.org 0xb85e8
	str r0, [r4, #20]	@ 000b85e8 6061
.org 0xb85ea
	adds r0, r4, #0	@ 000b85ea 201c
.org 0xb85ec
	bl 0xb8748	@ 000b85ec 00f0acf8
.org 0xb85f0
	b.n 0xb873a	@ 000b85f0 a3e0
.org 0xb85f2
	.byte 0x00	@ 000b85f2 data
.org 0xb85f3
	.byte 0x00	@ 000b85f3 data
.org 0xb85f4
	.byte 0x40,0xdb,0x85,0x08	@ 000b85f4 data
.org 0xb85f8
	ldrb r0, [r4, #13]	@ 000b85f8 607b
.org 0xb85fa
	cmp r0, #1	@ 000b85fa 0128
.org 0xb85fc
	beq.n 0xb8668	@ 000b85fc 34d0
.org 0xb85fe
	cmp r0, #1	@ 000b85fe 0128
.org 0xb8600
	bgt.n 0xb8608	@ 000b8600 02dc
.org 0xb8602
	cmp r0, #0	@ 000b8602 0028
.org 0xb8604
	beq.n 0xb8612	@ 000b8604 05d0
.org 0xb8606
	b.n 0xb8728	@ 000b8606 8fe0
.org 0xb8608
	cmp r0, #2	@ 000b8608 0228
.org 0xb860a
	beq.n 0xb86c4	@ 000b860a 5bd0
.org 0xb860c
	cmp r0, #3	@ 000b860c 0328
.org 0xb860e
	beq.n 0xb86d8	@ 000b860e 63d0
.org 0xb8610
	b.n 0xb8728	@ 000b8610 8ae0
.org 0xb8612
	ldrb r0, [r4, #16]	@ 000b8612 207c
.org 0xb8614
	cmp r0, #0	@ 000b8614 0028
.org 0xb8616
	bne.n 0xb8638	@ 000b8616 0fd1
.org 0xb8618
	ldrb r0, [r4, #30]	@ 000b8618 a07f
.org 0xb861a
	lsls r0, r0, #8	@ 000b861a 0002
.org 0xb861c
	adds r1, r4, #0	@ 000b861c 211c
.org 0xb861e
	adds r1, #112	@ 000b861e 7031
.org 0xb8620
	ldrb r1, [r1, #0]	@ 000b8620 0978
.org 0xb8622
	orrs r0, r1	@ 000b8622 0843
.org 0xb8624
	ldr r1, [pc, #12]	@ 000b8624 0349
.org 0xb8626
	cmp r0, r1	@ 000b8626 8842
.org 0xb8628
	beq.n 0xb8652	@ 000b8628 13d0
.org 0xb862a
	adds r0, r4, #0	@ 000b862a 201c
.org 0xb862c
	bl 0x1cf00	@ 000b862c 64f768fc
.org 0xb8630
	b.n 0xb8652	@ 000b8630 0fe0
.org 0xb8632
	.byte 0x00	@ 000b8632 data
.org 0xb8633
	.byte 0x00	@ 000b8633 data
.org 0xb8634
	.byte 0x03,0xd8,0x00,0x00	@ 000b8634 data
.org 0xb8638
	ldrb r0, [r4, #30]	@ 000b8638 a07f
.org 0xb863a
	lsls r0, r0, #8	@ 000b863a 0002
.org 0xb863c
	adds r1, r4, #0	@ 000b863c 211c
.org 0xb863e
	adds r1, #112	@ 000b863e 7031
.org 0xb8640
	ldrb r1, [r1, #0]	@ 000b8640 0978
.org 0xb8642
	orrs r0, r1	@ 000b8642 0843
.org 0xb8644
	movs r1, #216	@ 000b8644 d821
.org 0xb8646
	lsls r1, r1, #8	@ 000b8646 0902
.org 0xb8648
	cmp r0, r1	@ 000b8648 8842
.org 0xb864a
	beq.n 0xb8652	@ 000b864a 02d0
.org 0xb864c
	adds r0, r4, #0	@ 000b864c 201c
.org 0xb864e
	bl 0x1cf00	@ 000b864e 64f757fc
.org 0xb8652
	adds r0, r4, #0	@ 000b8652 201c
.org 0xb8654
	bl 0x1cff0	@ 000b8654 64f7ccfc
.org 0xb8658
	adds r0, r5, #0	@ 000b8658 281c
.org 0xb865a
	adds r0, #214	@ 000b865a d630
.org 0xb865c
	ldrb r0, [r0, #0]	@ 000b865c 0078
.org 0xb865e
	cmp r0, #0	@ 000b865e 0028
.org 0xb8660
	beq.n 0xb8728	@ 000b8660 62d0
.org 0xb8662
	ldrb r0, [r4, #13]	@ 000b8662 607b
.org 0xb8664
	adds r0, #1	@ 000b8664 0130
.org 0xb8666
	b.n 0xb8726	@ 000b8666 5ee0
.org 0xb8668
	ldrb r0, [r4, #16]	@ 000b8668 207c
.org 0xb866a
	cmp r0, #0	@ 000b866a 0028
.org 0xb866c
	bne.n 0xb868c	@ 000b866c 0ed1
.org 0xb866e
	ldrb r0, [r4, #30]	@ 000b866e a07f
.org 0xb8670
	lsls r0, r0, #8	@ 000b8670 0002
.org 0xb8672
	adds r1, r4, #0	@ 000b8672 211c
.org 0xb8674
	adds r1, #112	@ 000b8674 7031
.org 0xb8676
	ldrb r1, [r1, #0]	@ 000b8676 0978
.org 0xb8678
	orrs r0, r1	@ 000b8678 0843
.org 0xb867a
	ldr r1, [pc, #12]	@ 000b867a 0349
.org 0xb867c
	cmp r0, r1	@ 000b867c 8842
.org 0xb867e
	beq.n 0xb86a4	@ 000b867e 11d0
.org 0xb8680
	adds r0, r4, #0	@ 000b8680 201c
.org 0xb8682
	bl 0x1cf00	@ 000b8682 64f73dfc
.org 0xb8686
	b.n 0xb86a4	@ 000b8686 0de0
.org 0xb8688
	.byte 0x04,0xd8,0x00,0x00	@ 000b8688 data
.org 0xb868c
	ldrb r0, [r4, #30]	@ 000b868c a07f
.org 0xb868e
	lsls r0, r0, #8	@ 000b868e 0002
.org 0xb8690
	adds r1, r4, #0	@ 000b8690 211c
.org 0xb8692
	adds r1, #112	@ 000b8692 7031
.org 0xb8694
	ldrb r1, [r1, #0]	@ 000b8694 0978
.org 0xb8696
	orrs r0, r1	@ 000b8696 0843
.org 0xb8698
	ldr r1, [pc, #36]	@ 000b8698 0949
.org 0xb869a
	cmp r0, r1	@ 000b869a 8842
.org 0xb869c
	beq.n 0xb86a4	@ 000b869c 02d0
.org 0xb869e
	adds r0, r4, #0	@ 000b869e 201c
.org 0xb86a0
	bl 0x1cf00	@ 000b86a0 64f72efc
.org 0xb86a4
	adds r0, r4, #0	@ 000b86a4 201c
.org 0xb86a6
	bl 0x1cff0	@ 000b86a6 64f7a3fc
.org 0xb86aa
	adds r0, r5, #0	@ 000b86aa 281c
.org 0xb86ac
	adds r0, #214	@ 000b86ac d630
.org 0xb86ae
	ldrb r0, [r0, #0]	@ 000b86ae 0078
.org 0xb86b0
	cmp r0, #0	@ 000b86b0 0028
.org 0xb86b2
	bne.n 0xb8728	@ 000b86b2 39d1
.org 0xb86b4
	movs r0, #40	@ 000b86b4 2820
.org 0xb86b6
	strb r0, [r4, #18]	@ 000b86b6 a074
.org 0xb86b8
	ldrb r0, [r4, #13]	@ 000b86b8 607b
.org 0xb86ba
	adds r0, #1	@ 000b86ba 0130
.org 0xb86bc
	b.n 0xb8726	@ 000b86bc 33e0
.org 0xb86be
	.byte 0x00	@ 000b86be data
.org 0xb86bf
	.byte 0x00	@ 000b86bf data
.org 0xb86c0
	.byte 0x01,0xd8,0x00,0x00	@ 000b86c0 data
.org 0xb86c4
	ldrb r0, [r4, #18]	@ 000b86c4 a07c
.org 0xb86c6
	subs r0, #1	@ 000b86c6 0138
.org 0xb86c8
	strb r0, [r4, #18]	@ 000b86c8 a074
.org 0xb86ca
	lsls r0, r0, #24	@ 000b86ca 0006
.org 0xb86cc
	lsrs r0, r0, #24	@ 000b86cc 000e
.org 0xb86ce
	cmp r0, #255	@ 000b86ce ff28
.org 0xb86d0
	bne.n 0xb8728	@ 000b86d0 2ad1
.org 0xb86d2
	ldrb r0, [r4, #13]	@ 000b86d2 607b
.org 0xb86d4
	adds r0, #1	@ 000b86d4 0130
.org 0xb86d6
	b.n 0xb8726	@ 000b86d6 26e0
.org 0xb86d8
	ldrb r0, [r4, #16]	@ 000b86d8 207c
.org 0xb86da
	cmp r0, #0	@ 000b86da 0028
.org 0xb86dc
	bne.n 0xb86fc	@ 000b86dc 0ed1
.org 0xb86de
	ldrb r0, [r4, #30]	@ 000b86de a07f
.org 0xb86e0
	lsls r0, r0, #8	@ 000b86e0 0002
.org 0xb86e2
	adds r1, r4, #0	@ 000b86e2 211c
.org 0xb86e4
	adds r1, #112	@ 000b86e4 7031
.org 0xb86e6
	ldrb r1, [r1, #0]	@ 000b86e6 0978
.org 0xb86e8
	orrs r0, r1	@ 000b86e8 0843
.org 0xb86ea
	ldr r1, [pc, #12]	@ 000b86ea 0349
.org 0xb86ec
	cmp r0, r1	@ 000b86ec 8842
.org 0xb86ee
	beq.n 0xb8714	@ 000b86ee 11d0
.org 0xb86f0
	adds r0, r4, #0	@ 000b86f0 201c
.org 0xb86f2
	bl 0x1cf00	@ 000b86f2 64f705fc
.org 0xb86f6
	b.n 0xb8714	@ 000b86f6 0de0
.org 0xb86f8
	.byte 0x05,0xd8,0x00,0x00	@ 000b86f8 data
.org 0xb86fc
	ldrb r0, [r4, #30]	@ 000b86fc a07f
.org 0xb86fe
	lsls r0, r0, #8	@ 000b86fe 0002
.org 0xb8700
	adds r1, r4, #0	@ 000b8700 211c
.org 0xb8702
	adds r1, #112	@ 000b8702 7031
.org 0xb8704
	ldrb r1, [r1, #0]	@ 000b8704 0978
.org 0xb8706
	orrs r0, r1	@ 000b8706 0843
.org 0xb8708
	ldr r1, [pc, #52]	@ 000b8708 0d49
.org 0xb870a
	cmp r0, r1	@ 000b870a 8842
.org 0xb870c
	beq.n 0xb8714	@ 000b870c 02d0
.org 0xb870e
	adds r0, r4, #0	@ 000b870e 201c
.org 0xb8710
	bl 0x1cf00	@ 000b8710 64f7f6fb
.org 0xb8714
	adds r0, r4, #0	@ 000b8714 201c
.org 0xb8716
	bl 0x1cff0	@ 000b8716 64f76bfc
.org 0xb871a
	adds r0, r4, #0	@ 000b871a 201c
.org 0xb871c
	adds r0, #115	@ 000b871c 7330
.org 0xb871e
	ldrb r0, [r0, #0]	@ 000b871e 0078
.org 0xb8720
	cmp r0, #3	@ 000b8720 0328
.org 0xb8722
	bne.n 0xb8728	@ 000b8722 01d1
.org 0xb8724
	movs r0, #0	@ 000b8724 0020
