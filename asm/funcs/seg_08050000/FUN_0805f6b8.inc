@ FUN_0805f6b8  entry 0x0805f6b8  size 340
.thumb
.org 0x5f6b8
FUN_0805f6b8:
	push {r4, r5, r6, r7, lr}	@ 0005f6b8 f0b5
.org 0x5f6ba
	mov r7, sl	@ 0005f6ba 5746
.org 0x5f6bc
	mov r6, r9	@ 0005f6bc 4e46
.org 0x5f6be
	mov r5, r8	@ 0005f6be 4546
.org 0x5f6c0
	push {r5, r6, r7}	@ 0005f6c0 e0b4
.org 0x5f6c2
	adds r7, r0, #0	@ 0005f6c2 071c
.org 0x5f6c4
	ldrb r0, [r7, #14]	@ 0005f6c4 b87b
.org 0x5f6c6
	cmp r0, #0	@ 0005f6c6 0028
.org 0x5f6c8
	beq.n 0x5f6cc	@ 0005f6c8 00d0
.org 0x5f6ca
	b.n 0x5f7f0	@ 0005f6ca 91e0
.org 0x5f6cc
	ldr r1, [pc, #24]	@ 0005f6cc 0649
.org 0x5f6ce
	adds r0, r7, #0	@ 0005f6ce 381c
.org 0x5f6d0
	bl 0x1cf00	@ 0005f6d0 bdf716fc
.org 0x5f6d4
	ldr r0, [pc, #20]	@ 0005f6d4 0548
.org 0x5f6d6
	ldrh r0, [r0, #0]	@ 0005f6d6 0088
.org 0x5f6d8
	cmp r0, #11	@ 0005f6d8 0b28
.org 0x5f6da
	bne.n 0x5f6f0	@ 0005f6da 09d1
.org 0x5f6dc
	movs r0, #138	@ 0005f6dc 8a20
.org 0x5f6de
	lsls r0, r0, #1	@ 0005f6de 4000
.org 0x5f6e0
	bl 0x2b10	@ 0005f6e0 a3f716fa
.org 0x5f6e4
	b.n 0x5f6f6	@ 0005f6e4 07e0
.org 0x5f6e6
	.byte 0x00	@ 0005f6e6 data
.org 0x5f6e7
	.byte 0x00	@ 0005f6e7 data
.org 0x5f6e8
	.byte 0x24,0xa5,0x00,0x00	@ 0005f6e8 data
.org 0x5f6ec
	.byte 0x10,0xe9,0x02,0x02	@ 0005f6ec data
.org 0x5f6f0
	ldr r0, [pc, #292]	@ 0005f6f0 4948
.org 0x5f6f2
	bl 0x2b10	@ 0005f6f2 a3f70dfa
.org 0x5f6f6
	movs r1, #192	@ 0005f6f6 c021
.org 0x5f6f8
	lsls r1, r1, #2	@ 0005f6f8 8900
.org 0x5f6fa
	movs r0, #92	@ 0005f6fa 5c20
.org 0x5f6fc
	bl 0x249c	@ 0005f6fc a2f7cefe
.org 0x5f700
	movs r0, #92	@ 0005f700 5c20
.org 0x5f702
	bl 0x25d8	@ 0005f702 a2f769ff
.org 0x5f706
	movs r0, #92	@ 0005f706 5c20
.org 0x5f708
	bl 0x2624	@ 0005f708 a2f78cff
.org 0x5f70c
	ldr r4, [pc, #268]	@ 0005f70c 434c
.org 0x5f70e
	ldr r5, [pc, #272]	@ 0005f70e 444d
.org 0x5f710
	adds r0, r4, r5	@ 0005f710 6019
.org 0x5f712
	ldr r1, [pc, #272]	@ 0005f712 4449
.org 0x5f714
	mov r9, r1	@ 0005f714 8946
.org 0x5f716
	adds r1, #194	@ 0005f716 c231
.org 0x5f718
	ldrh r1, [r1, #0]	@ 0005f718 0988
.org 0x5f71a
	ldrh r2, [r0, #6]	@ 0005f71a c288
.org 0x5f71c
	lsrs r2, r2, #6	@ 0005f71c 9209
.org 0x5f71e
	subs r1, r1, r2	@ 0005f71e 891a
.org 0x5f720
	lsls r1, r1, #5	@ 0005f720 4901
.org 0x5f722
	movs r2, #128	@ 0005f722 8022
.org 0x5f724
	lsls r2, r2, #9	@ 0005f724 5202
.org 0x5f726
	adds r1, r1, r2	@ 0005f726 8918
.org 0x5f728
	bl 0x1d30	@ 0005f728 a2f702fb
.org 0x5f72c
	ldr r0, [pc, #248]	@ 0005f72c 3e48
.org 0x5f72e
	mov r8, r0	@ 0005f72e 8046
.org 0x5f730
	add r4, r8	@ 0005f730 4444
.org 0x5f732
	ldr r1, [pc, #248]	@ 0005f732 3e49
.org 0x5f734
	mov sl, r1	@ 0005f734 8a46
.org 0x5f736
	mov r0, sl	@ 0005f736 5046
.org 0x5f738
	adds r0, #194	@ 0005f738 c230
.org 0x5f73a
	ldrh r1, [r0, #0]	@ 0005f73a 0188
.org 0x5f73c
	ldrb r0, [r4, #7]	@ 0005f73c e079
.org 0x5f73e
	subs r1, r1, r0	@ 0005f73e 091a
.org 0x5f740
	lsls r1, r1, #5	@ 0005f740 4901
.org 0x5f742
	movs r6, #128	@ 0005f742 8026
.org 0x5f744
	lsls r6, r6, #2	@ 0005f744 b600
.org 0x5f746
	adds r1, r1, r6	@ 0005f746 8919
.org 0x5f748
	adds r0, r4, #0	@ 0005f748 201c
.org 0x5f74a
	bl 0x2208	@ 0005f74a a2f75dfd
.org 0x5f74e
	movs r4, #240	@ 0005f74e f024
.org 0x5f750
	lsls r4, r4, #3	@ 0005f750 e400
.org 0x5f752
	adds r0, r4, r5	@ 0005f752 6019
.org 0x5f754
	mov r1, r9	@ 0005f754 4946
.org 0x5f756
	adds r1, #192	@ 0005f756 c031
.org 0x5f758
	ldrh r1, [r1, #0]	@ 0005f758 0988
.org 0x5f75a
	ldrh r2, [r0, #6]	@ 0005f75a c288
.org 0x5f75c
	lsrs r2, r2, #6	@ 0005f75c 9209
.org 0x5f75e
	subs r1, r1, r2	@ 0005f75e 891a
.org 0x5f760
	lsls r1, r1, #5	@ 0005f760 4901
.org 0x5f762
	movs r2, #128	@ 0005f762 8022
.org 0x5f764
	lsls r2, r2, #9	@ 0005f764 5202
.org 0x5f766
	adds r1, r1, r2	@ 0005f766 8918
.org 0x5f768
	bl 0x1d30	@ 0005f768 a2f7e2fa
.org 0x5f76c
	add r4, r8	@ 0005f76c 4444
.org 0x5f76e
	mov r0, sl	@ 0005f76e 5046
.org 0x5f770
	adds r0, #192	@ 0005f770 c030
.org 0x5f772
	ldrh r1, [r0, #0]	@ 0005f772 0188
.org 0x5f774
	ldrb r0, [r4, #7]	@ 0005f774 e079
.org 0x5f776
	subs r1, r1, r0	@ 0005f776 091a
.org 0x5f778
	lsls r1, r1, #5	@ 0005f778 4901
.org 0x5f77a
	adds r1, r1, r6	@ 0005f77a 8919
.org 0x5f77c
	adds r0, r4, #0	@ 0005f77c 201c
.org 0x5f77e
	bl 0x2208	@ 0005f77e a2f743fd
.org 0x5f782
	ldr r4, [pc, #172]	@ 0005f782 2b4c
.org 0x5f784
	adds r0, r4, r5	@ 0005f784 6019
.org 0x5f786
	mov r1, r9	@ 0005f786 4946
.org 0x5f788
	adds r1, #198	@ 0005f788 c631
.org 0x5f78a
	ldrh r1, [r1, #0]	@ 0005f78a 0988
.org 0x5f78c
	ldrh r2, [r0, #6]	@ 0005f78c c288
.org 0x5f78e
	lsrs r2, r2, #6	@ 0005f78e 9209
.org 0x5f790
	subs r1, r1, r2	@ 0005f790 891a
.org 0x5f792
	lsls r1, r1, #5	@ 0005f792 4901
.org 0x5f794
	movs r2, #128	@ 0005f794 8022
.org 0x5f796
	lsls r2, r2, #9	@ 0005f796 5202
.org 0x5f798
	adds r1, r1, r2	@ 0005f798 8918
.org 0x5f79a
	bl 0x1d30	@ 0005f79a a2f7c9fa
.org 0x5f79e
	add r4, r8	@ 0005f79e 4444
.org 0x5f7a0
	mov r0, sl	@ 0005f7a0 5046
.org 0x5f7a2
	adds r0, #198	@ 0005f7a2 c630
.org 0x5f7a4
	ldrh r1, [r0, #0]	@ 0005f7a4 0188
.org 0x5f7a6
	ldrb r0, [r4, #7]	@ 0005f7a6 e079
.org 0x5f7a8
	subs r1, r1, r0	@ 0005f7a8 091a
.org 0x5f7aa
	lsls r1, r1, #5	@ 0005f7aa 4901
.org 0x5f7ac
	adds r1, r1, r6	@ 0005f7ac 8919
.org 0x5f7ae
	adds r0, r4, #0	@ 0005f7ae 201c
.org 0x5f7b0
	bl 0x2208	@ 0005f7b0 a2f72afd
.org 0x5f7b4
	movs r4, #245	@ 0005f7b4 f524
.org 0x5f7b6
	lsls r4, r4, #3	@ 0005f7b6 e400
.org 0x5f7b8
	adds r5, r4, r5	@ 0005f7b8 6519
.org 0x5f7ba
	mov r0, r9	@ 0005f7ba 4846
.org 0x5f7bc
	adds r0, #196	@ 0005f7bc c430
.org 0x5f7be
	ldrh r1, [r0, #0]	@ 0005f7be 0188
.org 0x5f7c0
	ldrh r0, [r5, #6]	@ 0005f7c0 e888
.org 0x5f7c2
	lsrs r0, r0, #6	@ 0005f7c2 8009
.org 0x5f7c4
	subs r1, r1, r0	@ 0005f7c4 091a
.org 0x5f7c6
	lsls r1, r1, #5	@ 0005f7c6 4901
.org 0x5f7c8
	movs r0, #128	@ 0005f7c8 8020
.org 0x5f7ca
	lsls r0, r0, #9	@ 0005f7ca 4002
.org 0x5f7cc
	adds r1, r1, r0	@ 0005f7cc 0918
.org 0x5f7ce
	adds r0, r5, #0	@ 0005f7ce 281c
.org 0x5f7d0
	bl 0x1d30	@ 0005f7d0 a2f7aefa
.org 0x5f7d4
	add r4, r8	@ 0005f7d4 4444
.org 0x5f7d6
	mov r0, sl	@ 0005f7d6 5046
.org 0x5f7d8
	adds r0, #196	@ 0005f7d8 c430
.org 0x5f7da
	ldrh r1, [r0, #0]	@ 0005f7da 0188
.org 0x5f7dc
	ldrb r0, [r4, #7]	@ 0005f7dc e079
.org 0x5f7de
	subs r1, r1, r0	@ 0005f7de 091a
.org 0x5f7e0
	lsls r1, r1, #5	@ 0005f7e0 4901
.org 0x5f7e2
	adds r1, r1, r6	@ 0005f7e2 8919
.org 0x5f7e4
	adds r0, r4, #0	@ 0005f7e4 201c
.org 0x5f7e6
	bl 0x2208	@ 0005f7e6 a2f70ffd
.org 0x5f7ea
	ldrb r0, [r7, #14]	@ 0005f7ea b87b
.org 0x5f7ec
	adds r0, #1	@ 0005f7ec 0130
.org 0x5f7ee
	strb r0, [r7, #14]	@ 0005f7ee b873
.org 0x5f7f0
	adds r0, r7, #0	@ 0005f7f0 381c
.org 0x5f7f2
	bl 0x1cff0	@ 0005f7f2 bdf7fdfb
.org 0x5f7f6
	ldr r0, [pc, #60]	@ 0005f7f6 0f48
.org 0x5f7f8
	ldrb r0, [r0, #18]	@ 0005f7f8 807c
.org 0x5f7fa
	movs r1, #1	@ 0005f7fa 0121
.org 0x5f7fc
	ands r1, r0	@ 0005f7fc 0140
.org 0x5f7fe
	cmp r1, #0	@ 0005f7fe 0029
.org 0x5f800
	bne.n 0x5f808	@ 0005f800 02d1
.org 0x5f802
	movs r0, #2	@ 0005f802 0220
.org 0x5f804
	strb r0, [r7, #13]	@ 0005f804 7873
.org 0x5f806
	strb r1, [r7, #14]	@ 0005f806 b973
.org 0x5f808
	pop {r3, r4, r5}	@ 0005f808 38bc
.org 0x5f80a
	mov r8, r3	@ 0005f80a 9846
