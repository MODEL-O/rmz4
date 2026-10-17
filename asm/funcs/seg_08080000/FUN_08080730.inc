@ FUN_08080730  entry 0x08080730  size 128
.thumb
.org 0x80730
FUN_08080730:
	push {r4, r5, lr}	@ 00080730 30b5
.org 0x80732
	adds r5, r0, #0	@ 00080732 051c
.org 0x80734
	ldr r4, [r5, #84]	@ 00080734 6c6d
.org 0x80736
	ldr r1, [r5, #88]	@ 00080736 a96d
.org 0x80738
	adds r0, r4, #0	@ 00080738 201c
.org 0x8073a
	bl 0x7020	@ 0008073a 86f771fc
.org 0x8073e
	lsls r0, r0, #16	@ 0008073e 0004
.org 0x80740
	cmp r0, #0	@ 00080740 0028
.org 0x80742
	bne.n 0x807b4	@ 00080742 37d1
.org 0x80744
	ldr r0, [pc, #56]	@ 00080744 0e48
.org 0x80746
	adds r4, r4, r0	@ 00080746 2418
.org 0x80748
	ldrb r1, [r5, #10]	@ 00080748 a97a
.org 0x8074a
	movs r0, #16	@ 0008074a 1020
.org 0x8074c
	ands r0, r1	@ 0008074c 0840
.org 0x8074e
	cmp r0, #0	@ 0008074e 0028
.org 0x80750
	beq.n 0x80758	@ 00080750 02d0
.org 0x80752
	movs r0, #128	@ 00080752 8020
.org 0x80754
	lsls r0, r0, #7	@ 00080754 c001
.org 0x80756
	adds r4, r4, r0	@ 00080756 2418
.org 0x80758
	ldr r5, [r5, #88]	@ 00080758 ad6d
.org 0x8075a
	ldr r0, [pc, #40]	@ 0008075a 0a48
.org 0x8075c
	adds r1, r5, r0	@ 0008075c 2918
.org 0x8075e
	adds r0, r4, #0	@ 0008075e 201c
.org 0x80760
	bl 0x7c7c	@ 00080760 87f78cfa
.org 0x80764
	lsls r0, r0, #16	@ 00080764 0004
.org 0x80766
	lsrs r0, r0, #16	@ 00080766 000c
.org 0x80768
	cmp r0, #1	@ 00080768 0128
.org 0x8076a
	bne.n 0x8078c	@ 0008076a 0fd1
.org 0x8076c
	ldr r0, [pc, #24]	@ 0008076c 0648
.org 0x8076e
	adds r1, r5, r0	@ 0008076e 2918
.org 0x80770
	adds r0, r4, #0	@ 00080770 201c
.org 0x80772
	bl 0x7c7c	@ 00080772 87f783fa
.org 0x80776
	lsls r0, r0, #16	@ 00080776 0004
.org 0x80778
	cmp r0, #0	@ 00080778 0028
.org 0x8077a
	beq.n 0x807b0	@ 0008077a 19d0
.org 0x8077c
	movs r0, #2	@ 0008077c 0220
.org 0x8077e
	b.n 0x807b6	@ 0008077e 1ae0
.org 0x80780
	.byte 0x00,0xe0,0xff,0xff	@ 00080780 data
.org 0x80784
	.byte 0x00,0xf8,0xff,0xff	@ 00080784 data
.org 0x80788
	.byte 0x00,0xd8,0xff,0xff	@ 00080788 data
.org 0x8078c
	movs r0, #128	@ 0008078c 8020
.org 0x8078e
	lsls r0, r0, #4	@ 0008078e 0001
.org 0x80790
	adds r1, r5, r0	@ 00080790 2918
.org 0x80792
	adds r0, r4, #0	@ 00080792 201c
.org 0x80794
	bl 0x7c7c	@ 00080794 87f772fa
.org 0x80798
	lsls r0, r0, #16	@ 00080798 0004
.org 0x8079a
	cmp r0, #0	@ 0008079a 0028
.org 0x8079c
	bne.n 0x807b4	@ 0008079c 0ad1
.org 0x8079e
	movs r0, #144	@ 0008079e 9020
.org 0x807a0
	lsls r0, r0, #7	@ 000807a0 c001
.org 0x807a2
	adds r1, r5, r0	@ 000807a2 2918
.org 0x807a4
	adds r0, r4, #0	@ 000807a4 201c
.org 0x807a6
	bl 0x7c7c	@ 000807a6 87f769fa
.org 0x807aa
	lsls r0, r0, #16	@ 000807aa 0004
.org 0x807ac
	cmp r0, #0	@ 000807ac 0028
.org 0x807ae
	beq.n 0x8077c	@ 000807ae e5d0
