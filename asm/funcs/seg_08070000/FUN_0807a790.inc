@ FUN_0807a790  entry 0x0807a790  size 238
.thumb
.org 0x7a790
FUN_0807a790:
	push {r4, r5, r6, r7, lr}	@ 0007a790 f0b5
.org 0x7a792
	mov r7, sl	@ 0007a792 5746
.org 0x7a794
	mov r6, r9	@ 0007a794 4e46
.org 0x7a796
	mov r5, r8	@ 0007a796 4546
.org 0x7a798
	push {r5, r6, r7}	@ 0007a798 e0b4
.org 0x7a79a
	sub sp, #8	@ 0007a79a 82b0
.org 0x7a79c
	adds r7, r0, #0	@ 0007a79c 071c
.org 0x7a79e
	ldrb r6, [r7, #14]	@ 0007a79e be7b
.org 0x7a7a0
	cmp r6, #0	@ 0007a7a0 002e
.org 0x7a7a2
	bne.n 0x7a83a	@ 0007a7a2 4ad1
.org 0x7a7a4
	ldr r5, [pc, #176]	@ 0007a7a4 2c4d
.org 0x7a7a6
	ldr r0, [pc, #180]	@ 0007a7a6 2d48
.org 0x7a7a8
	mov r9, r0	@ 0007a7a8 8146
.org 0x7a7aa
	adds r0, r5, r0	@ 0007a7aa 2818
.org 0x7a7ac
	ldr r1, [pc, #176]	@ 0007a7ac 2c49
.org 0x7a7ae
	mov r8, r1	@ 0007a7ae 8846
.org 0x7a7b0
	movs r4, #214	@ 0007a7b0 d624
.org 0x7a7b2
	lsls r4, r4, #1	@ 0007a7b2 6400
.org 0x7a7b4
	adds r1, r1, r4	@ 0007a7b4 0919
.org 0x7a7b6
	ldrh r1, [r1, #0]	@ 0007a7b6 0988
.org 0x7a7b8
	ldrh r2, [r0, #6]	@ 0007a7b8 c288
.org 0x7a7ba
	lsrs r2, r2, #6	@ 0007a7ba 9209
.org 0x7a7bc
	subs r1, r1, r2	@ 0007a7bc 891a
.org 0x7a7be
	lsls r1, r1, #5	@ 0007a7be 4901
.org 0x7a7c0
	movs r2, #128	@ 0007a7c0 8022
.org 0x7a7c2
	lsls r2, r2, #9	@ 0007a7c2 5202
.org 0x7a7c4
	adds r1, r1, r2	@ 0007a7c4 8918
.org 0x7a7c6
	bl 0x1d30	@ 0007a7c6 87f7b3fa
.org 0x7a7ca
	ldr r0, [pc, #152]	@ 0007a7ca 2648
.org 0x7a7cc
	adds r5, r5, r0	@ 0007a7cc 2d18
.org 0x7a7ce
	ldr r1, [pc, #152]	@ 0007a7ce 2649
.org 0x7a7d0
	adds r4, r1, r4	@ 0007a7d0 0c19
.org 0x7a7d2
	ldrh r1, [r4, #0]	@ 0007a7d2 2188
.org 0x7a7d4
	ldrb r0, [r5, #7]	@ 0007a7d4 e879
.org 0x7a7d6
	subs r1, r1, r0	@ 0007a7d6 091a
.org 0x7a7d8
	lsls r1, r1, #5	@ 0007a7d8 4901
.org 0x7a7da
	movs r2, #128	@ 0007a7da 8022
.org 0x7a7dc
	lsls r2, r2, #2	@ 0007a7dc 9200
.org 0x7a7de
	mov sl, r2	@ 0007a7de 9246
.org 0x7a7e0
	add r1, sl	@ 0007a7e0 5144
.org 0x7a7e2
	adds r0, r5, #0	@ 0007a7e2 281c
.org 0x7a7e4
	bl 0x2208	@ 0007a7e4 87f710fd
.org 0x7a7e8
	ldr r4, [pc, #128]	@ 0007a7e8 204c
.org 0x7a7ea
	add r9, r4	@ 0007a7ea a144
.org 0x7a7ec
	movs r5, #212	@ 0007a7ec d425
.org 0x7a7ee
	lsls r5, r5, #1	@ 0007a7ee 6d00
.org 0x7a7f0
	add r8, r5	@ 0007a7f0 a844
.org 0x7a7f2
	mov r0, r8	@ 0007a7f2 4046
.org 0x7a7f4
	ldrh r1, [r0, #0]	@ 0007a7f4 0188
.org 0x7a7f6
	mov r2, r9	@ 0007a7f6 4a46
.org 0x7a7f8
	ldrh r0, [r2, #6]	@ 0007a7f8 d088
.org 0x7a7fa
	lsrs r0, r0, #6	@ 0007a7fa 8009
.org 0x7a7fc
	subs r1, r1, r0	@ 0007a7fc 091a
.org 0x7a7fe
	lsls r1, r1, #5	@ 0007a7fe 4901
.org 0x7a800
	movs r0, #128	@ 0007a800 8020
.org 0x7a802
	lsls r0, r0, #9	@ 0007a802 4002
.org 0x7a804
	adds r1, r1, r0	@ 0007a804 0918
.org 0x7a806
	mov r0, r9	@ 0007a806 4846
.org 0x7a808
	bl 0x1d30	@ 0007a808 87f792fa
.org 0x7a80c
	ldr r1, [pc, #84]	@ 0007a80c 1549
.org 0x7a80e
	adds r4, r4, r1	@ 0007a80e 6418
.org 0x7a810
	ldr r2, [pc, #92]	@ 0007a810 174a
.org 0x7a812
	ldrh r1, [r2, #0]	@ 0007a812 1188
.org 0x7a814
	ldrb r0, [r4, #7]	@ 0007a814 e079
.org 0x7a816
	subs r1, r1, r0	@ 0007a816 091a
.org 0x7a818
	lsls r1, r1, #5	@ 0007a818 4901
.org 0x7a81a
	add r1, sl	@ 0007a81a 5144
.org 0x7a81c
	adds r0, r4, #0	@ 0007a81c 201c
.org 0x7a81e
	bl 0x2208	@ 0007a81e 87f7f3fc
.org 0x7a822
	ldr r0, [pc, #80]	@ 0007a822 1448
.org 0x7a824
	bl 0x2b10	@ 0007a824 88f774f9
.org 0x7a828
	adds r0, r7, #0	@ 0007a828 381c
.org 0x7a82a
	adds r0, #216	@ 0007a82a d830
.org 0x7a82c
	strb r6, [r0, #0]	@ 0007a82c 0670
.org 0x7a82e
	strb r6, [r7, #18]	@ 0007a82e be74
.org 0x7a830
	strb r6, [r7, #19]	@ 0007a830 fe74
.org 0x7a832
	strb r6, [r7, #15]	@ 0007a832 fe73
.org 0x7a834
	ldrb r0, [r7, #14]	@ 0007a834 b87b
.org 0x7a836
	adds r0, #1	@ 0007a836 0130
.org 0x7a838
	strb r0, [r7, #14]	@ 0007a838 b873
.org 0x7a83a
	adds r0, r7, #0	@ 0007a83a 381c
.org 0x7a83c
	bl 0x1cff0	@ 0007a83c a2f7d8fb
.org 0x7a840
	adds r0, r7, #0	@ 0007a840 381c
.org 0x7a842
	adds r0, #216	@ 0007a842 d830
.org 0x7a844
	ldrb r0, [r0, #0]	@ 0007a844 0078
.org 0x7a846
	cmp r0, #0	@ 0007a846 0028
.org 0x7a848
	beq.n 0x7a878	@ 0007a848 16d0
.org 0x7a84a
	movs r0, #170	@ 0007a84a aa20
.org 0x7a84c
	lsls r0, r0, #1	@ 0007a84c 4000
.org 0x7a84e
	bl 0x2b10	@ 0007a84e 88f75ff9
.org 0x7a852
	movs r1, #0	@ 0007a852 0021
.org 0x7a854
	movs r0, #8	@ 0007a854 0820
.org 0x7a856
	b.n 0x7a9e2	@ 0007a856 c4e0
.org 0x7a858
	.byte 0xb8,0x10,0x00,0x00	@ 0007a858 data
.org 0x7a85c
	.byte 0x00,0x40,0xc4,0x08	@ 0007a85c data
.org 0x7a860
	.byte 0x40,0xe0,0x02,0x02	@ 0007a860 data
.org 0x7a864
	.byte 0x0c,0x40,0xc4,0x08	@ 0007a864 data
.org 0x7a868
	.byte 0x40,0xde,0x02,0x02	@ 0007a868 data
.org 0x7a86c
	.byte 0x90,0x10,0x00,0x00	@ 0007a86c data
.org 0x7a870
	.byte 0xe8,0xdf,0x02,0x02	@ 0007a870 data
.org 0x7a874
	.byte 0x53,0x01,0x00,0x00	@ 0007a874 data
.org 0x7a878
	ldrb r0, [r7, #15]	@ 0007a878 f87b
.org 0x7a87a
	cmp r0, #4	@ 0007a87a 0428
.org 0x7a87c
	bls.n 0x7a880	@ 0007a87c 00d9
