@ FUN_0810a738  entry 0x0810a738  size 120
.thumb
.org 0x10a738
FUN_0810a738:
	push {lr}	@ 0010a738 00b5
.org 0x10a73a
	adds r2, r0, #0	@ 0010a73a 021c
.org 0x10a73c
	ldr r0, [r2, #40]	@ 0010a73c 906a
.org 0x10a73e
	ldr r1, [pc, #24]	@ 0010a73e 0649
.org 0x10a740
	adds r0, r0, r1	@ 0010a740 4018
.org 0x10a742
	ldr r3, [r0, #0]	@ 0010a742 0368
.org 0x10a744
	ldrb r0, [r2, #17]	@ 0010a744 507c
.org 0x10a746
	cmp r0, #0	@ 0010a746 0028
.org 0x10a748
	bne.n 0x10a75c	@ 0010a748 08d1
.org 0x10a74a
	adds r0, r3, #0	@ 0010a74a 181c
.org 0x10a74c
	adds r0, #180	@ 0010a74c b430
.org 0x10a74e
	ldrb r1, [r0, #12]	@ 0010a74e 017b
.org 0x10a750
	movs r0, #224	@ 0010a750 e020
.org 0x10a752
	lsls r0, r0, #6	@ 0010a752 8001
.org 0x10a754
	str r0, [r2, #84]	@ 0010a754 5065
.org 0x10a756
	b.n 0x10a76c	@ 0010a756 09e0
.org 0x10a758
	.byte 0xa8,0x63,0x00,0x00	@ 0010a758 data
.org 0x10a75c
	adds r0, r3, #0	@ 0010a75c 181c
.org 0x10a75e
	adds r0, #180	@ 0010a75e b430
.org 0x10a760
	ldrb r1, [r0, #13]	@ 0010a760 417b
.org 0x10a762
	movs r0, #224	@ 0010a762 e020
.org 0x10a764
	lsls r0, r0, #6	@ 0010a764 8001
.org 0x10a766
	str r0, [r2, #84]	@ 0010a766 5065
.org 0x10a768
	movs r0, #192	@ 0010a768 c020
.org 0x10a76a
	lsls r0, r0, #7	@ 0010a76a c001
.org 0x10a76c
	str r0, [r2, #88]	@ 0010a76c 9065
.org 0x10a76e
	cmp r1, #1	@ 0010a76e 0129
.org 0x10a770
	beq.n 0x10a788	@ 0010a770 0ad0
.org 0x10a772
	cmp r1, #1	@ 0010a772 0129
.org 0x10a774
	bgt.n 0x10a77c	@ 0010a774 02dc
.org 0x10a776
	cmp r1, #0	@ 0010a776 0029
.org 0x10a778
	beq.n 0x10a782	@ 0010a778 03d0
.org 0x10a77a
	b.n 0x10a798	@ 0010a77a 0de0
.org 0x10a77c
	cmp r1, #2	@ 0010a77c 0229
.org 0x10a77e
	beq.n 0x10a790	@ 0010a77e 07d0
.org 0x10a780
	b.n 0x10a798	@ 0010a780 0ae0
.org 0x10a782
	movs r1, #208	@ 0010a782 d021
.org 0x10a784
	lsls r1, r1, #6	@ 0010a784 8901
.org 0x10a786
	b.n 0x10a7a2	@ 0010a786 0ce0
.org 0x10a788
	ldr r1, [pc, #0]	@ 0010a788 0049
.org 0x10a78a
	b.n 0x10a7a2	@ 0010a78a 0ae0
.org 0x10a78c
	.byte 0x01,0x34,0x00,0x00	@ 0010a78c data
.org 0x10a790
	ldr r1, [pc, #0]	@ 0010a790 0049
.org 0x10a792
	b.n 0x10a7a2	@ 0010a792 06e0
.org 0x10a794
	.byte 0x02,0x34,0x00,0x00	@ 0010a794 data
.org 0x10a798
	adds r3, #230	@ 0010a798 e633
.org 0x10a79a
	ldrb r0, [r3, #0]	@ 0010a79a 1878
.org 0x10a79c
	cmp r0, #255	@ 0010a79c ff28
.org 0x10a79e
	bne.n 0x10a7b0	@ 0010a79e 07d1
.org 0x10a7a0
	ldr r1, [pc, #8]	@ 0010a7a0 0249
.org 0x10a7a2
	adds r0, r2, #0	@ 0010a7a2 101c
.org 0x10a7a4
	bl 0x1cf00	@ 0010a7a4 12f7acfb
.org 0x10a7a8
	b.n 0x10a7be	@ 0010a7a8 09e0
.org 0x10a7aa
	.byte 0x00	@ 0010a7aa data
.org 0x10a7ab
	.byte 0x00	@ 0010a7ab data
.org 0x10a7ac
	.byte 0x2b,0x34,0x00,0x00	@ 0010a7ac data
