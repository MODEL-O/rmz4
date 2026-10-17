@ FUN_080c06d0  entry 0x080c06d0  size 184
.thumb
.org 0xc06d0
FUN_080c06d0:
	push {r4, r5, lr}	@ 000c06d0 30b5
.org 0xc06d2
	adds r3, r0, #0	@ 000c06d2 031c
.org 0xc06d4
	ldr r2, [r3, #40]	@ 000c06d4 9a6a
.org 0xc06d6
	ldrb r0, [r2, #10]	@ 000c06d6 907a
.org 0xc06d8
	lsrs r5, r0, #4	@ 000c06d8 0509
.org 0xc06da
	movs r0, #1	@ 000c06da 0120
.org 0xc06dc
	ands r5, r0	@ 000c06dc 0540
.org 0xc06de
	ldrb r4, [r3, #17]	@ 000c06de 5c7c
.org 0xc06e0
	ldrb r0, [r2, #12]	@ 000c06e0 107b
.org 0xc06e2
	cmp r0, #1	@ 000c06e2 0128
.org 0xc06e4
	bls.n 0xc0704	@ 000c06e4 0ed9
.org 0xc06e6
	ldr r1, [pc, #24]	@ 000c06e6 0649
.org 0xc06e8
	ldrb r0, [r3, #9]	@ 000c06e8 587a
.org 0xc06ea
	lsls r0, r0, #2	@ 000c06ea 8000
.org 0xc06ec
	adds r0, r0, r1	@ 000c06ec 4018
.org 0xc06ee
	movs r1, #2	@ 000c06ee 0221
.org 0xc06f0
	str r1, [r3, #12]	@ 000c06f0 d960
.org 0xc06f2
	ldr r0, [r0, #0]	@ 000c06f2 0068
.org 0xc06f4
	ldr r0, [r0, #8]	@ 000c06f4 8068
.org 0xc06f6
	str r0, [r3, #20]	@ 000c06f6 5861
.org 0xc06f8
	adds r0, r3, #0	@ 000c06f8 181c
.org 0xc06fa
	bl 0xc0c74	@ 000c06fa 00f0bbfa
.org 0xc06fe
	b.n 0xc0796	@ 000c06fe 4ae0
.org 0xc0700
	.byte 0xf4,0x49,0x86,0x08	@ 000c0700 data
.org 0xc0704
	ldrb r1, [r2, #13]	@ 000c0704 517b
.org 0xc0706
	ldrb r0, [r3, #13]	@ 000c0706 587b
.org 0xc0708
	cmp r0, r1	@ 000c0708 8842
.org 0xc070a
	beq.n 0xc0714	@ 000c070a 03d0
.org 0xc070c
	movs r0, #0	@ 000c070c 0020
.org 0xc070e
	strb r1, [r3, #13]	@ 000c070e 5973
.org 0xc0710
	strb r0, [r3, #14]	@ 000c0710 9873
.org 0xc0712
	strb r0, [r3, #15]	@ 000c0712 d873
.org 0xc0714
	cmp r4, #0	@ 000c0714 002c
.org 0xc0716
	bne.n 0xc0740	@ 000c0716 13d1
.org 0xc0718
	ldr r4, [r2, #84]	@ 000c0718 546d
.org 0xc071a
	ldrb r1, [r2, #10]	@ 000c071a 917a
.org 0xc071c
	movs r0, #16	@ 000c071c 1020
.org 0xc071e
	ands r0, r1	@ 000c071e 0840
.org 0xc0720
	cmp r0, #0	@ 000c0720 0028
.org 0xc0722
	beq.n 0xc072a	@ 000c0722 02d0
.org 0xc0724
	movs r1, #176	@ 000c0724 b021
.org 0xc0726
	lsls r1, r1, #5	@ 000c0726 4901
.org 0xc0728
	b.n 0xc072c	@ 000c0728 00e0
.org 0xc072a
	ldr r1, [pc, #12]	@ 000c072a 0349
.org 0xc072c
	adds r0, r4, r1	@ 000c072c 6018
.org 0xc072e
	str r0, [r3, #84]	@ 000c072e 5865
.org 0xc0730
	ldr r0, [r2, #88]	@ 000c0730 906d
.org 0xc0732
	ldr r1, [pc, #8]	@ 000c0732 0249
.org 0xc0734
	b.n 0xc0748	@ 000c0734 08e0
.org 0xc0736
	.byte 0x00	@ 000c0736 data
.org 0xc0737
	.byte 0x00	@ 000c0737 data
.org 0xc0738
	.byte 0x00,0xea,0xff,0xff	@ 000c0738 data
.org 0xc073c
	.byte 0x00,0xce,0xff,0xff	@ 000c073c data
.org 0xc0740
	ldr r0, [r2, #84]	@ 000c0740 506d
.org 0xc0742
	str r0, [r3, #84]	@ 000c0742 5865
.org 0xc0744
	ldr r0, [r2, #88]	@ 000c0744 906d
.org 0xc0746
	ldr r1, [pc, #20]	@ 000c0746 0549
.org 0xc0748
	adds r0, r0, r1	@ 000c0748 4018
.org 0xc074a
	str r0, [r3, #88]	@ 000c074a 9865
.org 0xc074c
	adds r2, r5, #0	@ 000c074c 2a1c
.org 0xc074e
	cmp r2, #0	@ 000c074e 002a
.org 0xc0750
	beq.n 0xc0760	@ 000c0750 06d0
.org 0xc0752
	ldrb r1, [r3, #10]	@ 000c0752 997a
.org 0xc0754
	movs r0, #16	@ 000c0754 1020
.org 0xc0756
	orrs r0, r1	@ 000c0756 0843
.org 0xc0758
	b.n 0xc0766	@ 000c0758 05e0
.org 0xc075a
	.byte 0x00	@ 000c075a data
.org 0xc075b
	.byte 0x00	@ 000c075b data
.org 0xc075c
	.byte 0x00,0xd8,0xff,0xff	@ 000c075c data
.org 0xc0760
	ldrb r1, [r3, #10]	@ 000c0760 997a
.org 0xc0762
	movs r0, #239	@ 000c0762 ef20
.org 0xc0764
	ands r0, r1	@ 000c0764 0840
.org 0xc0766
	strb r0, [r3, #10]	@ 000c0766 9872
.org 0xc0768
	adds r1, r2, #0	@ 000c0768 111c
.org 0xc076a
	adds r0, r3, #0	@ 000c076a 181c
.org 0xc076c
	adds r0, #76	@ 000c076c 4c30
.org 0xc076e
	strb r1, [r0, #0]	@ 000c076e 0170
.org 0xc0770
	movs r0, #74	@ 000c0770 4a20
.org 0xc0772
	adds r0, r0, r3	@ 000c0772 c018
.org 0xc0774
	mov ip, r0	@ 000c0774 8446
.org 0xc0776
	lsls r1, r1, #4	@ 000c0776 0901
.org 0xc0778
	ldrb r2, [r0, #0]	@ 000c0778 0278
.org 0xc077a
	movs r0, #17	@ 000c077a 1120
.org 0xc077c
	negs r0, r0	@ 000c077c 4042
.org 0xc077e
	ands r0, r2	@ 000c077e 1040
.org 0xc0780
	orrs r0, r1	@ 000c0780 0843
.org 0xc0782
	mov r1, ip	@ 000c0782 6146
.org 0xc0784
	strb r0, [r1, #0]	@ 000c0784 0870
.org 0xc0786
	ldr r1, [pc, #20]	@ 000c0786 0549
