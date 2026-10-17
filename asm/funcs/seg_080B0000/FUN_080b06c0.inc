@ FUN_080b06c0  entry 0x080b06c0  size 156
.thumb
.org 0xb06c0
FUN_080b06c0:
	push {r4, r5, r6, r7, lr}	@ 000b06c0 f0b5
.org 0xb06c2
	adds r5, r0, #0	@ 000b06c2 051c
.org 0xb06c4
	movs r4, #0	@ 000b06c4 0024
.org 0xb06c6
	ldr r0, [r5, #40]	@ 000b06c6 a86a
.org 0xb06c8
	adds r0, #183	@ 000b06c8 b730
.org 0xb06ca
	ldrb r1, [r0, #0]	@ 000b06ca 0178
.org 0xb06cc
	movs r0, #1	@ 000b06cc 0120
.org 0xb06ce
	ands r0, r1	@ 000b06ce 0840
.org 0xb06d0
	ldr r6, [pc, #136]	@ 000b06d0 224e
.org 0xb06d2
	ldr r7, [pc, #140]	@ 000b06d2 234f
.org 0xb06d4
	ldr r2, [pc, #140]	@ 000b06d4 234a
.org 0xb06d6
	mov ip, r2	@ 000b06d6 9446
.org 0xb06d8
	cmp r0, #0	@ 000b06d8 0028
.org 0xb06da
	beq.n 0xb06ee	@ 000b06da 08d0
.org 0xb06dc
	movs r2, #1	@ 000b06dc 0122
.org 0xb06de
	adds r0, r4, #1	@ 000b06de 601c
.org 0xb06e0
	lsls r0, r0, #24	@ 000b06e0 0006
.org 0xb06e2
	lsrs r4, r0, #24	@ 000b06e2 040e
.org 0xb06e4
	adds r0, r1, #0	@ 000b06e4 081c
.org 0xb06e6
	asrs r0, r4	@ 000b06e6 2041
.org 0xb06e8
	ands r0, r2	@ 000b06e8 1040
.org 0xb06ea
	cmp r0, #0	@ 000b06ea 0028
.org 0xb06ec
	bne.n 0xb06de	@ 000b06ec f7d1
.org 0xb06ee
	ldr r2, [r5, #40]	@ 000b06ee aa6a
.org 0xb06f0
	adds r2, #183	@ 000b06f0 b732
.org 0xb06f2
	movs r0, #1	@ 000b06f2 0120
.org 0xb06f4
	lsls r0, r4	@ 000b06f4 a040
.org 0xb06f6
	ldrb r1, [r2, #0]	@ 000b06f6 1178
.org 0xb06f8
	orrs r0, r1	@ 000b06f8 0843
.org 0xb06fa
	movs r3, #0	@ 000b06fa 0023
.org 0xb06fc
	strb r0, [r2, #0]	@ 000b06fc 1070
.org 0xb06fe
	strb r4, [r5, #17]	@ 000b06fe 6c74
.org 0xb0700
	adds r1, r4, r7	@ 000b0700 e119
.org 0xb0702
	ldrb r0, [r1, #0]	@ 000b0702 0878
.org 0xb0704
	adds r0, #64	@ 000b0704 4030
.org 0xb0706
	lsls r0, r0, #24	@ 000b0706 0006
.org 0xb0708
	lsrs r0, r0, #23	@ 000b0708 c00d
.org 0xb070a
	adds r0, r0, r6	@ 000b070a 8019
.org 0xb070c
	movs r2, #0	@ 000b070c 0022
.org 0xb070e
	ldrsh r0, [r0, r2]	@ 000b070e 805e
.org 0xb0710
	str r0, [r5, #92]	@ 000b0710 e865
.org 0xb0712
	ldrb r0, [r1, #0]	@ 000b0712 0878
.org 0xb0714
	lsls r0, r0, #1	@ 000b0714 4000
.org 0xb0716
	adds r0, r0, r6	@ 000b0716 8019
.org 0xb0718
	movs r1, #0	@ 000b0718 0021
.org 0xb071a
	ldrsh r0, [r0, r1]	@ 000b071a 405e
.org 0xb071c
	str r0, [r5, #96]	@ 000b071c 2866
.org 0xb071e
	adds r1, r5, #0	@ 000b071e 291c
.org 0xb0720
	adds r1, #37	@ 000b0720 2531
.org 0xb0722
	movs r0, #25	@ 000b0722 1920
.org 0xb0724
	strb r0, [r1, #0]	@ 000b0724 0870
.org 0xb0726
	movs r0, #30	@ 000b0726 1e20
.org 0xb0728
	strb r0, [r5, #18]	@ 000b0728 a874
.org 0xb072a
	strb r3, [r5, #13]	@ 000b072a 6b73
.org 0xb072c
	strb r3, [r5, #14]	@ 000b072c ab73
.org 0xb072e
	ldrb r1, [r5, #10]	@ 000b072e a97a
.org 0xb0730
	movs r0, #4	@ 000b0730 0420
.org 0xb0732
	orrs r0, r1	@ 000b0732 0843
.org 0xb0734
	strb r0, [r5, #10]	@ 000b0734 a872
.org 0xb0736
	adds r4, r5, #0	@ 000b0736 2c1c
.org 0xb0738
	adds r4, #116	@ 000b0738 7434
.org 0xb073a
	adds r2, r5, #0	@ 000b073a 2a1c
.org 0xb073c
	adds r2, #84	@ 000b073c 5432
.org 0xb073e
	adds r0, r4, #0	@ 000b073e 201c
.org 0xb0740
	mov r1, ip	@ 000b0740 6146
.org 0xb0742
	movs r3, #2	@ 000b0742 0223
.org 0xb0744
	bl 0x5760	@ 000b0744 55f70cf8
.org 0xb0748
	str r5, [r4, #44]	@ 000b0748 e562
.org 0xb074a
	ldr r0, [pc, #28]	@ 000b074a 0748
.org 0xb074c
	str r0, [r4, #36]	@ 000b074c 6062
.org 0xb074e
	ldr r1, [pc, #28]	@ 000b074e 0749
.org 0xb0750
	adds r0, r5, #0	@ 000b0750 281c
.org 0xb0752
	bl 0x1cf00	@ 000b0752 6cf7d5fb
.org 0xb0756
	pop {r4, r5, r6, r7}	@ 000b0756 f0bc
.org 0xb0758
	pop {r0}	@ 000b0758 01bc
.org 0xb075a
	bx r0	@ 000b075a 0047
