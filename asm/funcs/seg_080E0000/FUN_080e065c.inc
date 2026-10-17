@ FUN_080e065c  entry 0x080e065c  size 282
.thumb
.org 0xe065c
FUN_080e065c:
	push {r4, r5, r6, r7, lr}	@ 000e065c f0b5
.org 0xe065e
	mov r7, r8	@ 000e065e 4746
.org 0xe0660
	push {r7}	@ 000e0660 80b4
.org 0xe0662
	sub sp, #12	@ 000e0662 83b0
.org 0xe0664
	adds r5, r0, #0	@ 000e0664 051c
.org 0xe0666
	ldr r1, [pc, #52]	@ 000e0666 0d49
.org 0xe0668
	mov r0, sp	@ 000e0668 6846
.org 0xe066a
	movs r2, #6	@ 000e066a 0622
.org 0xe066c
	bl 0x129258	@ 000e066c 48f0f4fd
.org 0xe0670
	ldrb r0, [r5, #17]	@ 000e0670 687c
.org 0xe0672
	mov r8, r0	@ 000e0672 8046
.org 0xe0674
	ldrb r0, [r5, #18]	@ 000e0674 a87c
.org 0xe0676
	subs r0, #1	@ 000e0676 0138
.org 0xe0678
	strb r0, [r5, #18]	@ 000e0678 a874
.org 0xe067a
	lsls r0, r0, #24	@ 000e067a 0006
.org 0xe067c
	cmp r0, #0	@ 000e067c 0028
.org 0xe067e
	bne.n 0xe06a4	@ 000e067e 11d1
.org 0xe0680
	ldr r1, [pc, #28]	@ 000e0680 0749
.org 0xe0682
	ldrb r0, [r5, #9]	@ 000e0682 687a
.org 0xe0684
	lsls r0, r0, #2	@ 000e0684 8000
.org 0xe0686
	adds r0, r0, r1	@ 000e0686 4018
.org 0xe0688
	movs r1, #2	@ 000e0688 0221
.org 0xe068a
	str r1, [r5, #12]	@ 000e068a e960
.org 0xe068c
	ldr r0, [r0, #0]	@ 000e068c 0068
.org 0xe068e
	ldr r0, [r0, #8]	@ 000e068e 8068
.org 0xe0690
	str r0, [r5, #20]	@ 000e0690 6861
.org 0xe0692
	adds r0, r5, #0	@ 000e0692 281c
.org 0xe0694
	bl 0xe078c	@ 000e0694 00f07af8
.org 0xe0698
	b.n 0xe077c	@ 000e0698 70e0
.org 0xe069a
	.byte 0x00	@ 000e069a data
.org 0xe069b
	.byte 0x00	@ 000e069b data
.org 0xe069c
	.byte 0x78,0xa2,0x12,0x08	@ 000e069c data
.org 0xe06a0
	.byte 0x64,0x6f,0x86,0x08	@ 000e06a0 data
.org 0xe06a4
	adds r0, r5, #0	@ 000e06a4 281c
.org 0xe06a6
	bl 0x1cff0	@ 000e06a6 3cf7a3fc
.org 0xe06aa
	ldrb r0, [r5, #13]	@ 000e06aa 687b
.org 0xe06ac
	cmp r0, #0	@ 000e06ac 0028
.org 0xe06ae
	beq.n 0xe06b6	@ 000e06ae 02d0
.org 0xe06b0
	cmp r0, #1	@ 000e06b0 0128
.org 0xe06b2
	beq.n 0xe0738	@ 000e06b2 41d0
.org 0xe06b4
	b.n 0xe077c	@ 000e06b4 62e0
.org 0xe06b6
	ldrb r4, [r5, #18]	@ 000e06b6 ac7c
.org 0xe06b8
	subs r4, #32	@ 000e06b8 203c
.org 0xe06ba
	movs r0, #48	@ 000e06ba 3020
.org 0xe06bc
	subs r0, r0, r4	@ 000e06bc 001b
.org 0xe06be
	lsls r0, r0, #6	@ 000e06be 8001
.org 0xe06c0
	movs r1, #48	@ 000e06c0 3021
.org 0xe06c2
	bl 0x128fb8	@ 000e06c2 48f079fc
.org 0xe06c6
	ldr r1, [pc, #104]	@ 000e06c6 1a49
.org 0xe06c8
	lsls r0, r0, #24	@ 000e06c8 0006
.org 0xe06ca
	lsrs r0, r0, #23	@ 000e06ca c00d
.org 0xe06cc
	adds r0, r0, r1	@ 000e06cc 4018
.org 0xe06ce
	movs r1, #0	@ 000e06ce 0021
.org 0xe06d0
	ldrsh r2, [r0, r1]	@ 000e06d0 425e
.org 0xe06d2
	mov r0, r8	@ 000e06d2 4046
.org 0xe06d4
	lsls r1, r0, #1	@ 000e06d4 4100
.org 0xe06d6
	subs r1, #1	@ 000e06d6 0139
.org 0xe06d8
	lsls r0, r1, #3	@ 000e06d8 c800
.org 0xe06da
	subs r0, r0, r1	@ 000e06da 401a
.org 0xe06dc
	lsls r0, r0, #2	@ 000e06dc 8000
.org 0xe06de
	negs r0, r0	@ 000e06de 4042
.org 0xe06e0
	adds r1, r2, #0	@ 000e06e0 111c
.org 0xe06e2
	muls r1, r0	@ 000e06e2 4143
.org 0xe06e4
	ldr r0, [r5, #100]	@ 000e06e4 686e
.org 0xe06e6
	adds r0, r0, r1	@ 000e06e6 4018
.org 0xe06e8
	str r0, [r5, #84]	@ 000e06e8 6865
.org 0xe06ea
	lsls r1, r2, #1	@ 000e06ea 5100
.org 0xe06ec
	adds r1, r1, r2	@ 000e06ec 8918
.org 0xe06ee
	lsls r1, r1, #1	@ 000e06ee 4900
.org 0xe06f0
	ldr r0, [r5, #104]	@ 000e06f0 a86e
.org 0xe06f2
	adds r0, r0, r1	@ 000e06f2 4018
.org 0xe06f4
	str r0, [r5, #88]	@ 000e06f4 a865
.org 0xe06f6
	cmp r4, #0	@ 000e06f6 002c
.org 0xe06f8
	bgt.n 0xe0700	@ 000e06f8 02dc
.org 0xe06fa
	ldrb r0, [r5, #13]	@ 000e06fa 687b
.org 0xe06fc
	adds r0, #1	@ 000e06fc 0130
.org 0xe06fe
	strb r0, [r5, #13]	@ 000e06fe 6873
.org 0xe0700
	ldr r0, [r5, #88]	@ 000e0700 a86d
.org 0xe0702
	ldr r1, [pc, #48]	@ 000e0702 0c49
.org 0xe0704
	adds r7, r0, r1	@ 000e0704 4718
.org 0xe0706
	mov r4, sp	@ 000e0706 6c46
.org 0xe0708
	movs r2, #2	@ 000e0708 0222
.org 0xe070a
	movs r0, #0	@ 000e070a 0020
.org 0xe070c
	ldrsh r1, [r4, r0]	@ 000e070c 215e
.org 0xe070e
	ldr r0, [r5, #84]	@ 000e070e 686d
.org 0xe0710
	adds r0, r0, r1	@ 000e0710 4018
.org 0xe0712
	adds r1, r7, #0	@ 000e0712 391c
.org 0xe0714
	str r2, [sp, #8]	@ 000e0714 0292
.org 0xe0716
	bl 0x7c7c	@ 000e0716 27f7b1fa
.org 0xe071a
	lsls r0, r0, #16	@ 000e071a 0004
.org 0xe071c
	ldr r2, [sp, #8]	@ 000e071c 029a
.org 0xe071e
	cmp r0, #0	@ 000e071e 0028
.org 0xe0720
	beq.n 0xe0726	@ 000e0720 01d0
.org 0xe0722
	movs r0, #2	@ 000e0722 0220
.org 0xe0724
	strb r0, [r5, #13]	@ 000e0724 6873
.org 0xe0726
	adds r4, #2	@ 000e0726 0234
.org 0xe0728
	subs r2, #1	@ 000e0728 013a
.org 0xe072a
	cmp r2, #0	@ 000e072a 002a
.org 0xe072c
	bge.n 0xe070a	@ 000e072c edda
.org 0xe072e
	b.n 0xe077c	@ 000e072e 25e0
.org 0xe0730
	.byte 0x0c,0x93,0x12,0x08	@ 000e0730 data
.org 0xe0734
	.byte 0x00,0xea,0xff,0xff	@ 000e0734 data
.org 0xe0738
	ldr r0, [r5, #88]	@ 000e0738 a86d
.org 0xe073a
	ldr r1, [r5, #96]	@ 000e073a 296e
.org 0xe073c
	adds r0, r0, r1	@ 000e073c 4018
.org 0xe073e
	str r0, [r5, #88]	@ 000e073e a865
.org 0xe0740
	adds r1, #64	@ 000e0740 4031
.org 0xe0742
	str r1, [r5, #96]	@ 000e0742 2966
.org 0xe0744
	movs r0, #224	@ 000e0744 e020
.org 0xe0746
	lsls r0, r0, #3	@ 000e0746 c000
.org 0xe0748
	cmp r1, r0	@ 000e0748 8142
.org 0xe074a
	ble.n 0xe074e	@ 000e074a 00dd
.org 0xe074c
	str r0, [r5, #96]	@ 000e074c 2866
.org 0xe074e
	ldr r0, [r5, #88]	@ 000e074e a86d
.org 0xe0750
	ldr r1, [pc, #52]	@ 000e0750 0d49
.org 0xe0752
	adds r7, r0, r1	@ 000e0752 4718
.org 0xe0754
	mov r4, sp	@ 000e0754 6c46
.org 0xe0756
	movs r2, #2	@ 000e0756 0222
.org 0xe0758
	movs r0, #0	@ 000e0758 0020
.org 0xe075a
	ldrsh r1, [r4, r0]	@ 000e075a 215e
.org 0xe075c
	ldr r0, [r5, #84]	@ 000e075c 686d
.org 0xe075e
	adds r0, r0, r1	@ 000e075e 4018
.org 0xe0760
	adds r1, r7, #0	@ 000e0760 391c
.org 0xe0762
	str r2, [sp, #8]	@ 000e0762 0292
.org 0xe0764
	bl 0x7c7c	@ 000e0764 27f78afa
.org 0xe0768
	lsls r0, r0, #16	@ 000e0768 0004
.org 0xe076a
	ldr r2, [sp, #8]	@ 000e076a 029a
.org 0xe076c
	cmp r0, #0	@ 000e076c 0028
.org 0xe076e
	beq.n 0xe0774	@ 000e076e 01d0
.org 0xe0770
	movs r0, #2	@ 000e0770 0220
.org 0xe0772
	strb r0, [r5, #13]	@ 000e0772 6873
.org 0xe0774
	adds r4, #2	@ 000e0774 0234
