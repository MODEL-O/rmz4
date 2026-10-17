@ FUN_0808f678  entry 0x0808f678  size 198
.thumb
.org 0x8f678
FUN_0808f678:
	push {r4, r5, r6, r7, lr}	@ 0008f678 f0b5
.org 0x8f67a
	mov r7, sl	@ 0008f67a 5746
.org 0x8f67c
	mov r6, r9	@ 0008f67c 4e46
.org 0x8f67e
	mov r5, r8	@ 0008f67e 4546
.org 0x8f680
	push {r5, r6, r7}	@ 0008f680 e0b4
.org 0x8f682
	adds r4, r0, #0	@ 0008f682 041c
.org 0x8f684
	ldrb r0, [r4, #15]	@ 0008f684 e07b
.org 0x8f686
	cmp r0, #0	@ 0008f686 0028
.org 0x8f688
	bne.n 0x8f68e	@ 0008f688 01d1
.org 0x8f68a
	adds r0, #1	@ 0008f68a 0130
.org 0x8f68c
	strb r0, [r4, #15]	@ 0008f68c e073
.org 0x8f68e
	adds r0, r4, #0	@ 0008f68e 201c
.org 0x8f690
	bl 0x1cff0	@ 0008f690 8df7aefc
.org 0x8f694
	adds r7, r4, #0	@ 0008f694 271c
.org 0x8f696
	adds r7, #116	@ 0008f696 7437
.org 0x8f698
	ldr r0, [pc, #140]	@ 0008f698 2348
.org 0x8f69a
	mov sl, r0	@ 0008f69a 8246
.org 0x8f69c
	ldrb r0, [r4, #30]	@ 0008f69c a07f
.org 0x8f69e
	lsls r0, r0, #8	@ 0008f69e 0002
.org 0x8f6a0
	adds r5, r4, #0	@ 0008f6a0 251c
.org 0x8f6a2
	adds r5, #112	@ 0008f6a2 7035
.org 0x8f6a4
	ldrb r1, [r5, #0]	@ 0008f6a4 2978
.org 0x8f6a6
	orrs r0, r1	@ 0008f6a6 0843
.org 0x8f6a8
	ldr r1, [pc, #128]	@ 0008f6a8 2049
.org 0x8f6aa
	mov r9, r1	@ 0008f6aa 8946
.org 0x8f6ac
	add r0, r9	@ 0008f6ac 4844
.org 0x8f6ae
	lsls r0, r0, #2	@ 0008f6ae 8000
.org 0x8f6b0
	add r0, sl	@ 0008f6b0 5044
.org 0x8f6b2
	adds r6, r4, #0	@ 0008f6b2 261c
.org 0x8f6b4
	adds r6, #113	@ 0008f6b4 7136
.org 0x8f6b6
	movs r1, #0	@ 0008f6b6 0021
.org 0x8f6b8
	ldrsb r1, [r6, r1]	@ 0008f6b8 7156
.org 0x8f6ba
	ldr r0, [r0, #0]	@ 0008f6ba 0068
.org 0x8f6bc
	lsls r1, r1, #2	@ 0008f6bc 8900
.org 0x8f6be
	adds r1, r1, r0	@ 0008f6be 0918
.org 0x8f6c0
	ldr r0, [r1, #0]	@ 0008f6c0 0868
.org 0x8f6c2
	ldrb r0, [r0, #0]	@ 0008f6c2 0078
.org 0x8f6c4
	lsls r1, r0, #1	@ 0008f6c4 4100
.org 0x8f6c6
	adds r1, r1, r0	@ 0008f6c6 0918
.org 0x8f6c8
	lsls r1, r1, #3	@ 0008f6c8 c900
.org 0x8f6ca
	ldr r0, [pc, #100]	@ 0008f6ca 1948
.org 0x8f6cc
	mov r8, r0	@ 0008f6cc 8046
.org 0x8f6ce
	add r1, r8	@ 0008f6ce 4144
.org 0x8f6d0
	adds r0, r7, #0	@ 0008f6d0 381c
.org 0x8f6d2
	bl 0x5784	@ 0008f6d2 76f757f8
.org 0x8f6d6
	adds r0, r4, #0	@ 0008f6d6 201c
.org 0x8f6d8
	adds r0, #115	@ 0008f6d8 7330
.org 0x8f6da
	ldrb r0, [r0, #0]	@ 0008f6da 0078
.org 0x8f6dc
	cmp r0, #3	@ 0008f6dc 0328
.org 0x8f6de
	bne.n 0x8f740	@ 0008f6de 2fd1
.org 0x8f6e0
	ldrb r0, [r4, #30]	@ 0008f6e0 a07f
.org 0x8f6e2
	lsls r0, r0, #8	@ 0008f6e2 0002
.org 0x8f6e4
	ldrb r1, [r5, #0]	@ 0008f6e4 2978
.org 0x8f6e6
	orrs r0, r1	@ 0008f6e6 0843
.org 0x8f6e8
	ldr r1, [pc, #72]	@ 0008f6e8 1249
.org 0x8f6ea
	cmp r0, r1	@ 0008f6ea 8842
.org 0x8f6ec
	bne.n 0x8f738	@ 0008f6ec 24d1
.org 0x8f6ee
	adds r1, #1	@ 0008f6ee 0131
.org 0x8f6f0
	adds r0, r4, #0	@ 0008f6f0 201c
.org 0x8f6f2
	bl 0x1cf00	@ 0008f6f2 8df705fc
.org 0x8f6f6
	adds r0, r4, #0	@ 0008f6f6 201c
.org 0x8f6f8
	bl 0x1cff0	@ 0008f6f8 8df77afc
.org 0x8f6fc
	ldrb r0, [r4, #30]	@ 0008f6fc a07f
.org 0x8f6fe
	lsls r0, r0, #8	@ 0008f6fe 0002
.org 0x8f700
	ldrb r1, [r5, #0]	@ 0008f700 2978
.org 0x8f702
	orrs r0, r1	@ 0008f702 0843
.org 0x8f704
	add r0, r9	@ 0008f704 4844
.org 0x8f706
	lsls r0, r0, #2	@ 0008f706 8000
.org 0x8f708
	add r0, sl	@ 0008f708 5044
.org 0x8f70a
	movs r1, #0	@ 0008f70a 0021
.org 0x8f70c
	ldrsb r1, [r6, r1]	@ 0008f70c 7156
.org 0x8f70e
	ldr r0, [r0, #0]	@ 0008f70e 0068
.org 0x8f710
	lsls r1, r1, #2	@ 0008f710 8900
.org 0x8f712
	adds r1, r1, r0	@ 0008f712 0918
.org 0x8f714
	ldr r0, [r1, #0]	@ 0008f714 0868
.org 0x8f716
	ldrb r0, [r0, #0]	@ 0008f716 0078
.org 0x8f718
	lsls r1, r0, #1	@ 0008f718 4100
.org 0x8f71a
	adds r1, r1, r0	@ 0008f71a 0918
.org 0x8f71c
	lsls r1, r1, #3	@ 0008f71c c900
.org 0x8f71e
	add r1, r8	@ 0008f71e 4144
.org 0x8f720
	adds r0, r7, #0	@ 0008f720 381c
.org 0x8f722
	bl 0x5784	@ 0008f722 76f72ff8
.org 0x8f726
	b.n 0x8f740	@ 0008f726 0be0
.org 0x8f728
	.byte 0xac,0xff,0x85,0x08	@ 0008f728 data
.org 0x8f72c
	.byte 0x00,0xc7,0xff,0xff	@ 0008f72c data
.org 0x8f730
	.byte 0xd8,0xfb,0x85,0x08	@ 0008f730 data
.org 0x8f734
	.byte 0x02,0x39,0x00,0x00	@ 0008f734 data
.org 0x8f738
	movs r0, #0	@ 0008f738 0020
.org 0x8f73a
	strb r0, [r4, #13]	@ 0008f73a 6073
.org 0x8f73c
	strb r0, [r4, #14]	@ 0008f73c a073
