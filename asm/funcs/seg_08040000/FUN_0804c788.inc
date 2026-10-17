@ FUN_0804c788  entry 0x0804c788  size 248
.thumb
.org 0x4c788
FUN_0804c788:
	push {r4, r5, r6, r7, lr}	@ 0004c788 f0b5
.org 0x4c78a
	mov r7, sl	@ 0004c78a 5746
.org 0x4c78c
	mov r6, r9	@ 0004c78c 4e46
.org 0x4c78e
	mov r5, r8	@ 0004c78e 4546
.org 0x4c790
	push {r5, r6, r7}	@ 0004c790 e0b4
.org 0x4c792
	sub sp, #8	@ 0004c792 82b0
.org 0x4c794
	adds r6, r0, #0	@ 0004c794 061c
.org 0x4c796
	ldr r5, [r6, #40]	@ 0004c796 b56a
.org 0x4c798
	ldr r1, [pc, #196]	@ 0004c798 3149
.org 0x4c79a
	ldrb r0, [r6, #9]	@ 0004c79a 707a
.org 0x4c79c
	lsls r0, r0, #2	@ 0004c79c 8000
.org 0x4c79e
	adds r0, r0, r1	@ 0004c79e 4018
.org 0x4c7a0
	movs r1, #1	@ 0004c7a0 0121
.org 0x4c7a2
	str r1, [r6, #12]	@ 0004c7a2 f160
.org 0x4c7a4
	ldr r0, [r0, #0]	@ 0004c7a4 0068
.org 0x4c7a6
	ldr r0, [r0, #4]	@ 0004c7a6 4068
.org 0x4c7a8
	str r0, [r6, #20]	@ 0004c7a8 7061
.org 0x4c7aa
	adds r0, r6, #0	@ 0004c7aa 301c
.org 0x4c7ac
	bl 0x1cc9c	@ 0004c7ac d0f776fa
.org 0x4c7b0
	adds r0, r6, #0	@ 0004c7b0 301c
.org 0x4c7b2
	bl 0x1ceec	@ 0004c7b2 d0f79bfb
.org 0x4c7b6
	ldrb r1, [r6, #10]	@ 0004c7b6 b17a
.org 0x4c7b8
	movs r0, #1	@ 0004c7b8 0120
.org 0x4c7ba
	movs r4, #0	@ 0004c7ba 0024
.org 0x4c7bc
	orrs r0, r1	@ 0004c7bc 0843
.org 0x4c7be
	movs r1, #2	@ 0004c7be 0221
.org 0x4c7c0
	orrs r0, r1	@ 0004c7c0 0843
.org 0x4c7c2
	strb r0, [r6, #10]	@ 0004c7c2 b072
.org 0x4c7c4
	movs r1, #182	@ 0004c7c4 b621
.org 0x4c7c6
	lsls r1, r1, #7	@ 0004c7c6 c901
.org 0x4c7c8
	adds r0, r6, #0	@ 0004c7c8 301c
.org 0x4c7ca
	bl 0x1cf00	@ 0004c7ca d0f799fb
.org 0x4c7ce
	adds r0, r6, #0	@ 0004c7ce 301c
.org 0x4c7d0
	bl 0x1cff0	@ 0004c7d0 d0f70efc
.org 0x4c7d4
	ldrb r1, [r6, #10]	@ 0004c7d4 b17a
.org 0x4c7d6
	movs r0, #4	@ 0004c7d6 0420
.org 0x4c7d8
	orrs r0, r1	@ 0004c7d8 0843
.org 0x4c7da
	strb r0, [r6, #10]	@ 0004c7da b072
.org 0x4c7dc
	adds r7, r6, #0	@ 0004c7dc 371c
.org 0x4c7de
	adds r7, #116	@ 0004c7de 7437
.org 0x4c7e0
	ldr r0, [pc, #128]	@ 0004c7e0 2048
.org 0x4c7e2
	mov sl, r0	@ 0004c7e2 8246
.org 0x4c7e4
	adds r2, r6, #0	@ 0004c7e4 321c
.org 0x4c7e6
	adds r2, #84	@ 0004c7e6 5432
.org 0x4c7e8
	adds r0, r7, #0	@ 0004c7e8 381c
.org 0x4c7ea
	mov r1, sl	@ 0004c7ea 5146
.org 0x4c7ec
	movs r3, #8	@ 0004c7ec 0823
.org 0x4c7ee
	bl 0x5760	@ 0004c7ee b8f7b7ff
.org 0x4c7f2
	str r6, [r7, #44]	@ 0004c7f2 fe62
.org 0x4c7f4
	ldr r0, [pc, #112]	@ 0004c7f4 1c48
.org 0x4c7f6
	str r0, [r7, #36]	@ 0004c7f6 7862
.org 0x4c7f8
	movs r1, #189	@ 0004c7f8 bd21
.org 0x4c7fa
	adds r1, r1, r6	@ 0004c7fa 8919
.org 0x4c7fc
	mov r8, r1	@ 0004c7fc 8846
.org 0x4c7fe
	strb r4, [r1, #0]	@ 0004c7fe 0c70
.org 0x4c800
	movs r4, #190	@ 0004c800 be24
.org 0x4c802
	adds r4, r4, r6	@ 0004c802 a419
.org 0x4c804
	mov r9, r4	@ 0004c804 a146
.org 0x4c806
	movs r0, #2	@ 0004c806 0220
.org 0x4c808
	strb r0, [r4, #0]	@ 0004c808 2070
.org 0x4c80a
	adds r4, r6, #0	@ 0004c80a 341c
.org 0x4c80c
	adds r4, #191	@ 0004c80c bf34
.org 0x4c80e
	movs r0, #3	@ 0004c80e 0320
.org 0x4c810
	strb r0, [r4, #0]	@ 0004c810 2070
.org 0x4c812
	adds r0, r5, #0	@ 0004c812 281c
.org 0x4c814
	bl 0x3a4a8	@ 0004c814 edf748fe
.org 0x4c818
	ldrb r1, [r4, #0]	@ 0004c818 2178
.org 0x4c81a
	adds r0, r0, r1	@ 0004c81a 4018
.org 0x4c81c
	strb r0, [r4, #0]	@ 0004c81c 2070
.org 0x4c81e
	adds r0, r5, #0	@ 0004c81e 281c
.org 0x4c820
	bl 0x38a78	@ 0004c820 ecf72af9
.org 0x4c824
	lsls r0, r0, #24	@ 0004c824 0006
.org 0x4c826
	cmp r0, #0	@ 0004c826 0028
.org 0x4c828
	beq.n 0x4c830	@ 0004c828 02d0
.org 0x4c82a
	ldrb r0, [r4, #0]	@ 0004c82a 2078
.org 0x4c82c
	lsls r0, r0, #1	@ 0004c82c 4000
.org 0x4c82e
	strb r0, [r4, #0]	@ 0004c82e 2070
.org 0x4c830
	mov r1, r8	@ 0004c830 4146
.org 0x4c832
	ldrb r0, [r1, #0]	@ 0004c832 0878
.org 0x4c834
	lsls r1, r0, #1	@ 0004c834 4100
.org 0x4c836
	adds r1, r1, r0	@ 0004c836 0918
.org 0x4c838
	lsls r1, r1, #4	@ 0004c838 0901
.org 0x4c83a
	add r1, sl	@ 0004c83a 5144
.org 0x4c83c
	ldrb r2, [r4, #0]	@ 0004c83c 2278
.org 0x4c83e
	movs r3, #1	@ 0004c83e 0123
.org 0x4c840
	negs r3, r3	@ 0004c840 5b42
.org 0x4c842
	str r3, [sp, #0]	@ 0004c842 0093
.org 0x4c844
	mov r4, r9	@ 0004c844 4c46
.org 0x4c846
	ldrb r0, [r4, #0]	@ 0004c846 2078
.org 0x4c848
	str r0, [sp, #4]	@ 0004c848 0190
.org 0x4c84a
	adds r0, r7, #0	@ 0004c84a 381c
.org 0x4c84c
	bl 0x5794	@ 0004c84c b8f7a2ff
.org 0x4c850
	ldrb r1, [r6, #10]	@ 0004c850 b17a
.org 0x4c852
	movs r0, #16	@ 0004c852 1020
.org 0x4c854
	ands r0, r1	@ 0004c854 0840
.org 0x4c856
	cmp r0, #0	@ 0004c856 0028
.org 0x4c858
	beq.n 0x4c86c	@ 0004c858 08d0
.org 0x4c85a
	movs r0, #128	@ 0004c85a 8020
.org 0x4c85c
	lsls r0, r0, #3	@ 0004c85c c000
.org 0x4c85e
	b.n 0x4c86e	@ 0004c85e 06e0
.org 0x4c860
	.byte 0xf8,0x39,0x85,0x08	@ 0004c860 data
.org 0x4c864
	.byte 0x74,0x77,0x85,0x08	@ 0004c864 data
.org 0x4c868
	.byte 0x01,0xcc,0x04,0x08	@ 0004c868 data
.org 0x4c86c
	ldr r0, [pc, #28]	@ 0004c86c 0748
.org 0x4c86e
	str r0, [r6, #92]	@ 0004c86e f065
.org 0x4c870
	movs r0, #0	@ 0004c870 0020
.org 0x4c872
	strb r0, [r6, #18]	@ 0004c872 b074
.org 0x4c874
	strb r0, [r6, #19]	@ 0004c874 f074
.org 0x4c876
	adds r0, r6, #0	@ 0004c876 301c
.org 0x4c878
	bl 0x4c728	@ 0004c878 fff756ff
.org 0x4c87c
	add sp, #8	@ 0004c87c 02b0
.org 0x4c87e
	pop {r3, r4, r5}	@ 0004c87e 38bc
