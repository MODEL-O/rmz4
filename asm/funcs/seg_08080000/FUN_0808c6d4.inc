@ FUN_0808c6d4  entry 0x0808c6d4  size 226
.thumb
.org 0x8c6d4
FUN_0808c6d4:
	push {r4, r5, r6, r7, lr}	@ 0008c6d4 f0b5
.org 0x8c6d6
	sub sp, #8	@ 0008c6d6 82b0
.org 0x8c6d8
	adds r4, r0, #0	@ 0008c6d8 041c
.org 0x8c6da
	ldr r1, [pc, #116]	@ 0008c6da 1d49
.org 0x8c6dc
	mov r0, sp	@ 0008c6dc 6846
.org 0x8c6de
	movs r2, #8	@ 0008c6de 0822
.org 0x8c6e0
	bl 0x129258	@ 0008c6e0 9cf0bafd
.org 0x8c6e4
	ldrb r5, [r4, #17]	@ 0008c6e4 657c
.org 0x8c6e6
	ldrb r0, [r4, #15]	@ 0008c6e6 e07b
.org 0x8c6e8
	cmp r0, #0	@ 0008c6e8 0028
.org 0x8c6ea
	bne.n 0x8c6fc	@ 0008c6ea 07d1
.org 0x8c6ec
	movs r1, #144	@ 0008c6ec 9021
.org 0x8c6ee
	lsls r1, r1, #6	@ 0008c6ee 8901
.org 0x8c6f0
	adds r0, r4, #0	@ 0008c6f0 201c
.org 0x8c6f2
	bl 0x1cf00	@ 0008c6f2 90f705fc
.org 0x8c6f6
	ldrb r0, [r4, #15]	@ 0008c6f6 e07b
.org 0x8c6f8
	adds r0, #1	@ 0008c6f8 0130
.org 0x8c6fa
	strb r0, [r4, #15]	@ 0008c6fa e073
.org 0x8c6fc
	adds r0, r4, #0	@ 0008c6fc 201c
.org 0x8c6fe
	bl 0x1cff0	@ 0008c6fe 90f777fc
.org 0x8c702
	ldr r1, [pc, #80]	@ 0008c702 1449
.org 0x8c704
	lsls r0, r5, #2	@ 0008c704 a800
.org 0x8c706
	adds r0, r0, r1	@ 0008c706 4018
.org 0x8c708
	ldr r1, [r0, #0]	@ 0008c708 0168
.org 0x8c70a
	adds r0, r4, #0	@ 0008c70a 201c
.org 0x8c70c
	bl 0x128f80	@ 0008c70c 9cf038fc
.org 0x8c710
	ldr r2, [pc, #68]	@ 0008c710 114a
.org 0x8c712
	adds r2, r5, r2	@ 0008c712 aa18
.org 0x8c714
	lsls r1, r5, #1	@ 0008c714 6900
.org 0x8c716
	adds r0, r0, r1	@ 0008c716 4018
.org 0x8c718
	add r0, sp	@ 0008c718 6844
.org 0x8c71a
	ldrb r0, [r0, #0]	@ 0008c71a 0078
.org 0x8c71c
	ldrb r2, [r2, #0]	@ 0008c71c 1278
.org 0x8c71e
	adds r0, r0, r2	@ 0008c71e 8018
.org 0x8c720
	lsls r0, r0, #24	@ 0008c720 0006
.org 0x8c722
	lsrs r6, r0, #24	@ 0008c722 060e
.org 0x8c724
	ldr r0, [pc, #52]	@ 0008c724 0d48
.org 0x8c726
	adds r1, r4, #0	@ 0008c726 211c
.org 0x8c728
	adds r1, #84	@ 0008c728 5431
.org 0x8c72a
	bl 0x1fb14	@ 0008c72a 93f7f3f9
.org 0x8c72e
	adds r7, r0, #0	@ 0008c72e 071c
.org 0x8c730
	cmp r7, #0	@ 0008c730 002f
.org 0x8c732
	beq.n 0x8c760	@ 0008c732 15d0
.org 0x8c734
	adds r5, r4, #0	@ 0008c734 251c
.org 0x8c736
	adds r5, #180	@ 0008c736 b435
.org 0x8c738
	ldrb r0, [r5, #0]	@ 0008c738 2878
.org 0x8c73a
	cmp r0, r6	@ 0008c73a b042
.org 0x8c73c
	beq.n 0x8c7c8	@ 0008c73c 44d0
.org 0x8c73e
	adds r0, r4, #0	@ 0008c73e 201c
.org 0x8c740
	adds r1, r6, #0	@ 0008c740 311c
.org 0x8c742
	bl 0x8ccc8	@ 0008c742 00f0c1fa
.org 0x8c746
	strb r0, [r5, #0]	@ 0008c746 2870
.org 0x8c748
	adds r0, #128	@ 0008c748 8030
.org 0x8c74a
	adds r1, r4, #0	@ 0008c74a 211c
.org 0x8c74c
	adds r1, #36	@ 0008c74c 2431
.org 0x8c74e
	b.n 0x8c7c6	@ 0008c74e 3ae0
.org 0x8c750
	.byte 0x90,0x9b,0x12,0x08	@ 0008c750 data
.org 0x8c754
	.byte 0xc4,0xf8,0x85,0x08	@ 0008c754 data
.org 0x8c758
	.byte 0xc0,0xf8,0x85,0x08	@ 0008c758 data
.org 0x8c75c
	.byte 0xf8,0xe9,0x02,0x02	@ 0008c75c data
.org 0x8c760
	ldr r0, [pc, #72]	@ 0008c760 1248
.org 0x8c762
	ldr r0, [r0, #0]	@ 0008c762 0068
.org 0x8c764
	ldr r2, [r0, #84]	@ 0008c764 426d
.org 0x8c766
	ldr r3, [r0, #88]	@ 0008c766 836d
.org 0x8c768
	ldr r0, [pc, #68]	@ 0008c768 1148
.org 0x8c76a
	adds r3, r3, r0	@ 0008c76a 1b18
.org 0x8c76c
	ldr r0, [r4, #84]	@ 0008c76c 606d
.org 0x8c76e
	ldr r1, [r4, #88]	@ 0008c76e a16d
.org 0x8c770
	bl 0x10d398	@ 0008c770 80f012fe
.org 0x8c774
	lsls r0, r0, #24	@ 0008c774 0006
.org 0x8c776
	lsrs r5, r0, #24	@ 0008c776 050e
.org 0x8c778
	adds r0, r4, #0	@ 0008c778 201c
.org 0x8c77a
	adds r1, r5, #0	@ 0008c77a 291c
.org 0x8c77c
	bl 0x8cd3c	@ 0008c77c 00f0defa
.org 0x8c780
	cmp r0, #0	@ 0008c780 0028
.org 0x8c782
	beq.n 0x8c7b4	@ 0008c782 17d0
.org 0x8c784
	adds r0, r4, #0	@ 0008c784 201c
.org 0x8c786
	adds r1, r5, #0	@ 0008c786 291c
.org 0x8c788
	bl 0x8ccc8	@ 0008c788 00f09efa
.org 0x8c78c
	adds r2, r4, #0	@ 0008c78c 221c
.org 0x8c78e
	adds r2, #180	@ 0008c78e b432
.org 0x8c790
	strb r0, [r2, #0]	@ 0008c790 1070
.org 0x8c792
	adds r0, #128	@ 0008c792 8030
.org 0x8c794
	adds r1, r4, #0	@ 0008c794 211c
.org 0x8c796
	adds r1, #36	@ 0008c796 2431
.org 0x8c798
	strb r0, [r1, #0]	@ 0008c798 0870
.org 0x8c79a
	ldrb r0, [r2, #0]	@ 0008c79a 1078
.org 0x8c79c
	cmp r0, r5	@ 0008c79c a842
.org 0x8c79e
	bne.n 0x8c7c8	@ 0008c79e 13d1
.org 0x8c7a0
	movs r0, #1	@ 0008c7a0 0120
.org 0x8c7a2
	strb r0, [r4, #13]	@ 0008c7a2 6073
.org 0x8c7a4
	strb r7, [r4, #14]	@ 0008c7a4 a773
.org 0x8c7a6
	strb r7, [r4, #15]	@ 0008c7a6 e773
.org 0x8c7a8
	b.n 0x8c7c8	@ 0008c7a8 0ee0
.org 0x8c7aa
	.byte 0x00	@ 0008c7aa data
.org 0x8c7ab
	.byte 0x00	@ 0008c7ab data
.org 0x8c7ac
	.byte 0xf0,0xdb,0x02,0x02	@ 0008c7ac data
.org 0x8c7b0
	.byte 0x00,0xed,0xff,0xff	@ 0008c7b0 data
.org 0x8c7b4
	adds r0, r4, #0	@ 0008c7b4 201c
