@ FUN_0803b730  entry 0x0803b730  size 240
.thumb
.org 0x3b730
FUN_0803b730:
	push {r4, r5, r6, r7, lr}	@ 0003b730 f0b5
.org 0x3b732
	mov r7, r9	@ 0003b732 4f46
.org 0x3b734
	mov r6, r8	@ 0003b734 4646
.org 0x3b736
	push {r6, r7}	@ 0003b736 c0b4
.org 0x3b738
	sub sp, #8	@ 0003b738 82b0
.org 0x3b73a
	adds r5, r0, #0	@ 0003b73a 051c
.org 0x3b73c
	adds r4, r5, #0	@ 0003b73c 2c1c
.org 0x3b73e
	adds r4, #180	@ 0003b73e b434
.org 0x3b740
	ldr r7, [r4, #0]	@ 0003b740 2768
.org 0x3b742
	bl 0x1cc9c	@ 0003b742 e1f7abfa
.org 0x3b746
	adds r0, r5, #0	@ 0003b746 281c
.org 0x3b748
	bl 0x1ceec	@ 0003b748 e1f7d0fb
.org 0x3b74c
	ldrb r1, [r5, #10]	@ 0003b74c a97a
.org 0x3b74e
	movs r0, #1	@ 0003b74e 0120
.org 0x3b750
	orrs r0, r1	@ 0003b750 0843
.org 0x3b752
	movs r1, #2	@ 0003b752 0221
.org 0x3b754
	orrs r0, r1	@ 0003b754 0843
.org 0x3b756
	strb r0, [r5, #10]	@ 0003b756 a872
.org 0x3b758
	movs r1, #166	@ 0003b758 a621
.org 0x3b75a
	lsls r1, r1, #7	@ 0003b75a c901
.org 0x3b75c
	adds r0, r5, #0	@ 0003b75c 281c
.org 0x3b75e
	bl 0x1cf00	@ 0003b75e e1f7cffb
.org 0x3b762
	movs r0, #26	@ 0003b762 1a20
.org 0x3b764
	bl 0x2b10	@ 0003b764 c7f7d4f9
.org 0x3b768
	movs r0, #0	@ 0003b768 0020
.org 0x3b76a
	mov r9, r0	@ 0003b76a 8146
.org 0x3b76c
	ldr r0, [r5, #84]	@ 0003b76c 686d
.org 0x3b76e
	ldr r1, [r7, #84]	@ 0003b76e 796d
.org 0x3b770
	subs r0, r0, r1	@ 0003b770 401a
.org 0x3b772
	str r0, [r4, #4]	@ 0003b772 6060
.org 0x3b774
	ldrb r1, [r5, #10]	@ 0003b774 a97a
.org 0x3b776
	movs r0, #16	@ 0003b776 1020
.org 0x3b778
	ands r0, r1	@ 0003b778 0840
.org 0x3b77a
	cmp r0, #0	@ 0003b77a 0028
.org 0x3b77c
	beq.n 0x3b784	@ 0003b77c 02d0
.org 0x3b77e
	movs r0, #224	@ 0003b77e e020
.org 0x3b780
	lsls r0, r0, #3	@ 0003b780 c000
.org 0x3b782
	b.n 0x3b786	@ 0003b782 00e0
.org 0x3b784
	ldr r0, [pc, #108]	@ 0003b784 1b48
.org 0x3b786
	str r0, [r5, #92]	@ 0003b786 e865
.org 0x3b788
	mov r0, r9	@ 0003b788 4846
.org 0x3b78a
	str r0, [r5, #96]	@ 0003b78a 2866
.org 0x3b78c
	ldrb r1, [r5, #10]	@ 0003b78c a97a
.org 0x3b78e
	movs r0, #4	@ 0003b78e 0420
.org 0x3b790
	movs r4, #0	@ 0003b790 0024
.org 0x3b792
	orrs r0, r1	@ 0003b792 0843
.org 0x3b794
	strb r0, [r5, #10]	@ 0003b794 a872
.org 0x3b796
	adds r6, r5, #0	@ 0003b796 2e1c
.org 0x3b798
	adds r6, #116	@ 0003b798 7436
.org 0x3b79a
	ldr r0, [pc, #92]	@ 0003b79a 1748
.org 0x3b79c
	mov r8, r0	@ 0003b79c 8046
.org 0x3b79e
	adds r2, r5, #0	@ 0003b79e 2a1c
.org 0x3b7a0
	adds r2, #84	@ 0003b7a0 5432
.org 0x3b7a2
	adds r0, r6, #0	@ 0003b7a2 301c
.org 0x3b7a4
	mov r1, r8	@ 0003b7a4 4146
.org 0x3b7a6
	movs r3, #1	@ 0003b7a6 0123
.org 0x3b7a8
	bl 0x5760	@ 0003b7a8 c9f7daff
.org 0x3b7ac
	str r5, [r6, #44]	@ 0003b7ac f562
.org 0x3b7ae
	str r4, [r6, #36]	@ 0003b7ae 7462
.org 0x3b7b0
	adds r0, r7, #0	@ 0003b7b0 381c
.org 0x3b7b2
	bl 0x3a4a8	@ 0003b7b2 fef779fe
.org 0x3b7b6
	adds r0, #12	@ 0003b7b6 0c30
.org 0x3b7b8
	lsls r0, r0, #24	@ 0003b7b8 0006
.org 0x3b7ba
	lsrs r4, r0, #24	@ 0003b7ba 040e
.org 0x3b7bc
	adds r0, r7, #0	@ 0003b7bc 381c
.org 0x3b7be
	bl 0x38a78	@ 0003b7be fdf75bf9
.org 0x3b7c2
	lsls r0, r0, #24	@ 0003b7c2 0006
.org 0x3b7c4
	cmp r0, #0	@ 0003b7c4 0028
.org 0x3b7c6
	beq.n 0x3b7cc	@ 0003b7c6 01d0
.org 0x3b7c8
	lsls r0, r4, #25	@ 0003b7c8 6006
.org 0x3b7ca
	lsrs r4, r0, #24	@ 0003b7ca 040e
.org 0x3b7cc
	mov r0, r9	@ 0003b7cc 4846
.org 0x3b7ce
	cmp r0, #0	@ 0003b7ce 0028
.org 0x3b7d0
	beq.n 0x3b800	@ 0003b7d0 16d0
.org 0x3b7d2
	mov r1, r8	@ 0003b7d2 4146
.org 0x3b7d4
	adds r1, #192	@ 0003b7d4 c031
.org 0x3b7d6
	ldr r2, [pc, #36]	@ 0003b7d6 094a
.org 0x3b7d8
	adds r0, r5, #0	@ 0003b7d8 281c
.org 0x3b7da
	adds r0, #180	@ 0003b7da b430
.org 0x3b7dc
	ldrb r0, [r0, #13]	@ 0003b7dc 407b
.org 0x3b7de
	adds r0, r0, r2	@ 0003b7de 8018
.org 0x3b7e0
	ldrb r3, [r0, #0]	@ 0003b7e0 0378
.org 0x3b7e2
	movs r0, #1	@ 0003b7e2 0120
.org 0x3b7e4
	negs r0, r0	@ 0003b7e4 4042
.org 0x3b7e6
	str r0, [sp, #0]	@ 0003b7e6 0090
.org 0x3b7e8
	str r0, [sp, #4]	@ 0003b7e8 0190
.org 0x3b7ea
	adds r0, r6, #0	@ 0003b7ea 301c
.org 0x3b7ec
	adds r2, r4, #0	@ 0003b7ec 221c
.org 0x3b7ee
	bl 0x5794	@ 0003b7ee c9f7d1ff
.org 0x3b7f2
	b.n 0x3b81e	@ 0003b7f2 14e0
.org 0x3b7f4
	.byte 0x00,0xf9,0xff,0xff	@ 0003b7f4 data
.org 0x3b7f8
	.byte 0xac,0x3b,0x85,0x08	@ 0003b7f8 data
.org 0x3b7fc
	.byte 0x46,0x3b,0x85,0x08	@ 0003b7fc data
.org 0x3b800
	ldr r1, [pc, #40]	@ 0003b800 0a49
.org 0x3b802
	adds r0, r5, #0	@ 0003b802 281c
.org 0x3b804
	adds r0, #180	@ 0003b804 b430
.org 0x3b806
	ldrb r0, [r0, #13]	@ 0003b806 407b
.org 0x3b808
	adds r0, r0, r1	@ 0003b808 4018
.org 0x3b80a
	ldrb r3, [r0, #0]	@ 0003b80a 0378
.org 0x3b80c
	movs r0, #1	@ 0003b80c 0120
.org 0x3b80e
	negs r0, r0	@ 0003b80e 4042
.org 0x3b810
	str r0, [sp, #0]	@ 0003b810 0090
.org 0x3b812
	str r0, [sp, #4]	@ 0003b812 0190
.org 0x3b814
	adds r0, r6, #0	@ 0003b814 301c
.org 0x3b816
	mov r1, r8	@ 0003b816 4146
.org 0x3b818
	adds r2, r4, #0	@ 0003b818 221c
.org 0x3b81a
	bl 0x5794	@ 0003b81a c9f7bbff
.org 0x3b81e
	add sp, #8	@ 0003b81e 02b0
