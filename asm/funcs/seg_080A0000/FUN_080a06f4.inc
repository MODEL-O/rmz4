@ FUN_080a06f4  entry 0x080a06f4  size 212
.thumb
.org 0xa06f4
FUN_080a06f4:
	push {r4, r5, r6, r7, lr}	@ 000a06f4 f0b5
.org 0xa06f6
	mov r7, r8	@ 000a06f6 4746
.org 0xa06f8
	push {r7}	@ 000a06f8 80b4
.org 0xa06fa
	sub sp, #8	@ 000a06fa 82b0
.org 0xa06fc
	adds r7, r0, #0	@ 000a06fc 071c
.org 0xa06fe
	ldrb r0, [r7, #16]	@ 000a06fe 387c
.org 0xa0700
	mov r8, r0	@ 000a0700 8046
.org 0xa0702
	movs r0, #42	@ 000a0702 2a20
.org 0xa0704
	bl 0x2b10	@ 000a0704 62f704fa
.org 0xa0708
	ldr r6, [pc, #188]	@ 000a0708 2f4e
.org 0xa070a
	ldr r0, [r6, #0]	@ 000a070a 3068
.org 0xa070c
	ldr r5, [pc, #188]	@ 000a070c 2f4d
.org 0xa070e
	muls r0, r5	@ 000a070e 6843
.org 0xa0710
	ldr r2, [pc, #188]	@ 000a0710 2f4a
.org 0xa0712
	adds r0, r0, r2	@ 000a0712 8018
.org 0xa0714
	lsls r0, r0, #1	@ 000a0714 4000
.org 0xa0716
	lsrs r4, r0, #1	@ 000a0716 4408
.org 0xa0718
	lsrs r0, r0, #17	@ 000a0718 400c
.org 0xa071a
	movs r3, #7	@ 000a071a 0723
.org 0xa071c
	ands r0, r3	@ 000a071c 1840
.org 0xa071e
	subs r0, #3	@ 000a071e 0338
.org 0xa0720
	lsls r0, r0, #8	@ 000a0720 0002
.org 0xa0722
	ldr r1, [r7, #84]	@ 000a0722 796d
.org 0xa0724
	adds r1, r1, r0	@ 000a0724 0918
.org 0xa0726
	str r1, [sp, #0]	@ 000a0726 0091
.org 0xa0728
	adds r0, r4, #0	@ 000a0728 201c
.org 0xa072a
	muls r0, r5	@ 000a072a 6843
.org 0xa072c
	adds r0, r0, r2	@ 000a072c 8018
.org 0xa072e
	lsls r0, r0, #1	@ 000a072e 4000
.org 0xa0730
	lsrs r1, r0, #1	@ 000a0730 4108
.org 0xa0732
	str r1, [r6, #0]	@ 000a0732 3160
.org 0xa0734
	lsrs r0, r0, #17	@ 000a0734 400c
.org 0xa0736
	ands r0, r3	@ 000a0736 1840
.org 0xa0738
	subs r0, #3	@ 000a0738 0338
.org 0xa073a
	lsls r0, r0, #8	@ 000a073a 0002
.org 0xa073c
	ldr r1, [r7, #88]	@ 000a073c b96d
.org 0xa073e
	adds r1, r1, r0	@ 000a073e 0918
.org 0xa0740
	str r1, [sp, #4]	@ 000a0740 0191
.org 0xa0742
	movs r0, #1	@ 000a0742 0120
.org 0xa0744
	mov r1, sp	@ 000a0744 6946
.org 0xa0746
	bl 0xd0c88	@ 000a0746 30f09ffa
.org 0xa074a
	adds r0, r7, #0	@ 000a074a 381c
.org 0xa074c
	bl 0xa0c88	@ 000a074c 00f09cfa
.org 0xa0750
	adds r2, r7, #0	@ 000a0750 3a1c
.org 0xa0752
	adds r2, #84	@ 000a0752 5432
.org 0xa0754
	movs r0, #4	@ 000a0754 0420
.org 0xa0756
	movs r1, #35	@ 000a0756 2321
.org 0xa0758
	bl 0x2ab88	@ 000a0758 8af716fa
.org 0xa075c
	mov r0, r8	@ 000a075c 4046
.org 0xa075e
	cmp r0, #1	@ 000a075e 0128
.org 0xa0760
	bne.n 0xa0772	@ 000a0760 07d1
.org 0xa0762
	ldr r0, [pc, #112]	@ 000a0762 1c48
.org 0xa0764
	adds r1, r0, #0	@ 000a0764 011c
.org 0xa0766
	adds r1, #38	@ 000a0766 2631
.org 0xa0768
	ldrb r0, [r1, #0]	@ 000a0768 0878
.org 0xa076a
	cmp r0, #0	@ 000a076a 0028
.org 0xa076c
	beq.n 0xa0772	@ 000a076c 01d0
.org 0xa076e
	adds r0, #255	@ 000a076e ff30
.org 0xa0770
	strb r0, [r1, #0]	@ 000a0770 0870
.org 0xa0772
	ldrb r1, [r7, #10]	@ 000a0772 b97a
.org 0xa0774
	movs r0, #254	@ 000a0774 fe20
.org 0xa0776
	ands r0, r1	@ 000a0776 0840
.org 0xa0778
	movs r1, #0	@ 000a0778 0021
.org 0xa077a
	strb r0, [r7, #10]	@ 000a077a b872
.org 0xa077c
	adds r0, r7, #0	@ 000a077c 381c
.org 0xa077e
	adds r0, #140	@ 000a077e 8c30
.org 0xa0780
	str r1, [r0, #0]	@ 000a0780 0160
.org 0xa0782
	adds r0, #4	@ 000a0782 0430
.org 0xa0784
	str r1, [r0, #0]	@ 000a0784 0160
.org 0xa0786
	adds r0, #4	@ 000a0786 0430
.org 0xa0788
	strb r1, [r0, #0]	@ 000a0788 0170
.org 0xa078a
	ldrb r1, [r7, #10]	@ 000a078a b97a
.org 0xa078c
	movs r0, #251	@ 000a078c fb20
.org 0xa078e
	ands r0, r1	@ 000a078e 0840
.org 0xa0790
	strb r0, [r7, #10]	@ 000a0790 b872
.org 0xa0792
	ldr r2, [pc, #68]	@ 000a0792 114a
.org 0xa0794
	ldrh r1, [r2, #12]	@ 000a0794 9189
.org 0xa0796
	ldr r0, [pc, #68]	@ 000a0796 1148
.org 0xa0798
	cmp r1, r0	@ 000a0798 8142
.org 0xa079a
	bhi.n 0xa07a0	@ 000a079a 01d8
.org 0xa079c
	adds r0, r1, #1	@ 000a079c 481c
.org 0xa079e
	strh r0, [r2, #12]	@ 000a079e 9081
.org 0xa07a0
	adds r1, r7, #0	@ 000a07a0 391c
.org 0xa07a2
	adds r1, #84	@ 000a07a2 5431
.org 0xa07a4
	adds r0, r7, #0	@ 000a07a4 381c
.org 0xa07a6
	bl 0x2abe0	@ 000a07a6 8af71bfa
.org 0xa07aa
	ldr r1, [pc, #52]	@ 000a07aa 0d49
.org 0xa07ac
	ldrb r0, [r7, #9]	@ 000a07ac 787a
.org 0xa07ae
	lsls r0, r0, #2	@ 000a07ae 8000
.org 0xa07b0
	adds r0, r0, r1	@ 000a07b0 4018
.org 0xa07b2
	movs r1, #4	@ 000a07b2 0421
.org 0xa07b4
	str r1, [r7, #12]	@ 000a07b4 f960
.org 0xa07b6
	ldr r0, [r0, #0]	@ 000a07b6 0068
.org 0xa07b8
	ldr r0, [r0, #16]	@ 000a07b8 0069
.org 0xa07ba
	str r0, [r7, #20]	@ 000a07ba 7861
.org 0xa07bc
	add sp, #8	@ 000a07bc 02b0
.org 0xa07be
	pop {r3}	@ 000a07be 08bc
.org 0xa07c0
	mov r8, r3	@ 000a07c0 9846
.org 0xa07c2
	pop {r4, r5, r6, r7}	@ 000a07c2 f0bc
.org 0xa07c4
	pop {r0}	@ 000a07c4 01bc
.org 0xa07c6
	bx r0	@ 000a07c6 0047
