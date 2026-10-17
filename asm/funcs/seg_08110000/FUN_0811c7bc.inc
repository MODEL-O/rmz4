@ FUN_0811c7bc  entry 0x0811c7bc  size 786
.thumb
.org 0x11c7bc
FUN_0811c7bc:
	push {r4, r5, r6, r7, lr}	@ 0011c7bc f0b5
.org 0x11c7be
	mov r7, r8	@ 0011c7be 4746
.org 0x11c7c0
	push {r7}	@ 0011c7c0 80b4
.org 0x11c7c2
	sub sp, #4	@ 0011c7c2 81b0
.org 0x11c7c4
	adds r6, r0, #0	@ 0011c7c4 061c
.org 0x11c7c6
	ldrb r5, [r6, #3]	@ 0011c7c6 f578
.org 0x11c7c8
	cmp r5, #0	@ 0011c7c8 002d
.org 0x11c7ca
	bne.n 0x11c804	@ 0011c7ca 1bd1
.org 0x11c7cc
	ldr r0, [pc, #144]	@ 0011c7cc 2448
.org 0x11c7ce
	adds r4, r6, r0	@ 0011c7ce 3418
.org 0x11c7d0
	ldr r1, [pc, #144]	@ 0011c7d0 2449
.org 0x11c7d2
	str r5, [sp, #0]	@ 0011c7d2 0095
.org 0x11c7d4
	adds r0, r4, #0	@ 0011c7d4 201c
.org 0x11c7d6
	movs r2, #133	@ 0011c7d6 8522
.org 0x11c7d8
	movs r3, #0	@ 0011c7d8 0023
.org 0x11c7da
	bl 0x27b8	@ 0011c7da e5f6edff
.org 0x11c7de
	ldr r0, [pc, #136]	@ 0011c7de 2248
.org 0x11c7e0
	ldrh r0, [r0, #0]	@ 0011c7e0 0088
.org 0x11c7e2
	movs r1, #248	@ 0011c7e2 f821
.org 0x11c7e4
	lsls r1, r1, #5	@ 0011c7e4 4901
.org 0x11c7e6
	ands r1, r0	@ 0011c7e6 0140
.org 0x11c7e8
	lsls r1, r1, #3	@ 0011c7e8 c900
.org 0x11c7ea
	movs r2, #128	@ 0011c7ea 8022
.org 0x11c7ec
	lsls r2, r2, #5	@ 0011c7ec 5201
.org 0x11c7ee
	adds r0, r4, #0	@ 0011c7ee 201c
.org 0x11c7f0
	bl 0x1f1c	@ 0011c7f0 e5f694fb
.org 0x11c7f4
	ldr r1, [pc, #116]	@ 0011c7f4 1d49
.org 0x11c7f6
	adds r0, r6, r1	@ 0011c7f6 7018
.org 0x11c7f8
	strb r5, [r0, #2]	@ 0011c7f8 8570
.org 0x11c7fa
	strb r5, [r0, #4]	@ 0011c7fa 0571
.org 0x11c7fc
	strb r5, [r0, #22]	@ 0011c7fc 8575
.org 0x11c7fe
	ldrb r0, [r6, #3]	@ 0011c7fe f078
.org 0x11c800
	adds r0, #1	@ 0011c800 0130
.org 0x11c802
	strb r0, [r6, #3]	@ 0011c802 f070
.org 0x11c804
	adds r0, r6, #0	@ 0011c804 301c
.org 0x11c806
	bl 0x11d380	@ 0011c806 00f0bbfd
.org 0x11c80a
	ldrb r7, [r6, #3]	@ 0011c80a f778
.org 0x11c80c
	cmp r7, #1	@ 0011c80c 012f
.org 0x11c80e
	bne.n 0x11c8b0	@ 0011c80e 4fd1
.org 0x11c810
	adds r0, r6, #0	@ 0011c810 301c
.org 0x11c812
	bl 0x11d6c0	@ 0011c812 00f055ff
.org 0x11c816
	ldr r2, [pc, #88]	@ 0011c816 164a
.org 0x11c818
	ldrh r1, [r2, #6]	@ 0011c818 d188
.org 0x11c81a
	movs r0, #32	@ 0011c81a 2020
.org 0x11c81c
	ands r0, r1	@ 0011c81c 0840
.org 0x11c81e
	lsls r0, r0, #16	@ 0011c81e 0004
.org 0x11c820
	lsrs r5, r0, #16	@ 0011c820 050c
.org 0x11c822
	cmp r5, #0	@ 0011c822 002d
.org 0x11c824
	beq.n 0x11c874	@ 0011c824 26d0
.org 0x11c826
	movs r0, #1	@ 0011c826 0120
.org 0x11c828
	bl 0x2b10	@ 0011c828 e6f672f9
.org 0x11c82c
	ldr r2, [pc, #48]	@ 0011c82c 0c4a
.org 0x11c82e
	adds r4, r6, r2	@ 0011c82e b418
.org 0x11c830
	ldr r1, [pc, #48]	@ 0011c830 0c49
.org 0x11c832
	movs r5, #0	@ 0011c832 0025
.org 0x11c834
	str r5, [sp, #0]	@ 0011c834 0095
.org 0x11c836
	adds r0, r4, #0	@ 0011c836 201c
.org 0x11c838
	movs r2, #133	@ 0011c838 8522
.org 0x11c83a
	movs r3, #0	@ 0011c83a 0023
.org 0x11c83c
	bl 0x27b8	@ 0011c83c e5f6bcff
.org 0x11c840
	ldr r0, [pc, #36]	@ 0011c840 0948
.org 0x11c842
	ldrh r0, [r0, #0]	@ 0011c842 0088
.org 0x11c844
	movs r1, #248	@ 0011c844 f821
.org 0x11c846
	lsls r1, r1, #5	@ 0011c846 4901
.org 0x11c848
	ands r1, r0	@ 0011c848 0140
.org 0x11c84a
	lsls r1, r1, #3	@ 0011c84a c900
.org 0x11c84c
	movs r2, #128	@ 0011c84c 8022
.org 0x11c84e
	lsls r2, r2, #5	@ 0011c84e 5201
.org 0x11c850
	adds r0, r4, #0	@ 0011c850 201c
.org 0x11c852
	bl 0x1f1c	@ 0011c852 e5f663fb
.org 0x11c856
	strb r7, [r6, #2]	@ 0011c856 b770
.org 0x11c858
	strb r5, [r6, #3]	@ 0011c858 f570
.org 0x11c85a
	movs r0, #0	@ 0011c85a 0020
.org 0x11c85c
	b.n 0x11cb1e	@ 0011c85c 5fe1
.org 0x11c85e
	.byte 0x00	@ 0011c85e data
.org 0x11c85f
	.byte 0x00	@ 0011c85f data
.org 0x11c860
	.byte 0xd8,0x0e,0x00,0x00	@ 0011c860 data
.org 0x11c864
	.byte 0x00,0xc0,0xb2,0x08	@ 0011c864 data
.org 0x11c868
	.byte 0x06,0x0a,0x00,0x02	@ 0011c868 data
.org 0x11c86c
	.byte 0xcc,0x0d,0x00,0x00	@ 0011c86c data
.org 0x11c870
	.byte 0x60,0x07,0x00,0x02	@ 0011c870 data
.org 0x11c874
	ldrh r1, [r2, #4]	@ 0011c874 9188
.org 0x11c876
	movs r0, #129	@ 0011c876 8120
.org 0x11c878
	ands r0, r1	@ 0011c878 0840
.org 0x11c87a
	cmp r0, #0	@ 0011c87a 0028
.org 0x11c87c
	beq.n 0x11c898	@ 0011c87c 0cd0
.org 0x11c87e
	ldr r0, [pc, #20]	@ 0011c87e 0548
.org 0x11c880
	adds r4, r6, r0	@ 0011c880 3418
.org 0x11c882
	ldrb r0, [r4, #3]	@ 0011c882 e078
.org 0x11c884
	cmp r0, #0	@ 0011c884 0028
.org 0x11c886
	bne.n 0x11c88a	@ 0011c886 00d1
.org 0x11c888
	b.n 0x11caa6	@ 0011c888 0de1
.org 0x11c88a
	movs r0, #2	@ 0011c88a 0220
.org 0x11c88c
	bl 0x2b10	@ 0011c88c e6f640f9
.org 0x11c890
	strb r5, [r4, #2]	@ 0011c890 a570
.org 0x11c892
	b.n 0x11cb18	@ 0011c892 41e1
.org 0x11c894
	.byte 0xcc,0x0d,0x00,0x00	@ 0011c894 data
.org 0x11c898
	movs r0, #2	@ 0011c898 0220
.org 0x11c89a
	ands r0, r1	@ 0011c89a 0840
.org 0x11c89c
	cmp r0, #0	@ 0011c89c 0028
.org 0x11c89e
	bne.n 0x11c8a2	@ 0011c89e 00d1
.org 0x11c8a0
	b.n 0x11cb1c	@ 0011c8a0 3ce1
.org 0x11c8a2
	ldr r1, [pc, #8]	@ 0011c8a2 0249
.org 0x11c8a4
	adds r0, r6, r1	@ 0011c8a4 7018
.org 0x11c8a6
	strb r7, [r0, #27]	@ 0011c8a6 c776
.org 0x11c8a8
	b.n 0x11cb1c	@ 0011c8a8 38e1
.org 0x11c8aa
	.byte 0x00	@ 0011c8aa data
.org 0x11c8ab
	.byte 0x00	@ 0011c8ab data
.org 0x11c8ac
	.byte 0xcc,0x0d,0x00,0x00	@ 0011c8ac data
.org 0x11c8b0
	cmp r7, #2	@ 0011c8b0 022f
.org 0x11c8b2
	bne.n 0x11c99a	@ 0011c8b2 72d1
.org 0x11c8b4
	ldr r0, [pc, #16]	@ 0011c8b4 0448
.org 0x11c8b6
	ldrh r1, [r0, #4]	@ 0011c8b6 8188
.org 0x11c8b8
	ands r7, r1	@ 0011c8b8 0f40
.org 0x11c8ba
	cmp r7, #0	@ 0011c8ba 002f
.org 0x11c8bc
	beq.n 0x11c8cc	@ 0011c8bc 06d0
.org 0x11c8be
	movs r0, #3	@ 0011c8be 0320
.org 0x11c8c0
	bl 0x2b10	@ 0011c8c0 e6f626f9
.org 0x11c8c4
	movs r0, #1	@ 0011c8c4 0120
.org 0x11c8c6
	b.n 0x11cb1a	@ 0011c8c6 28e1
.org 0x11c8c8
	.byte 0x60,0x07,0x00,0x02	@ 0011c8c8 data
.org 0x11c8cc
	movs r4, #1	@ 0011c8cc 0124
.org 0x11c8ce
	ands r4, r1	@ 0011c8ce 0c40
.org 0x11c8d0
	cmp r4, #0	@ 0011c8d0 002c
.org 0x11c8d2
	beq.n 0x11c8f8	@ 0011c8d2 11d0
.org 0x11c8d4
	ldr r2, [pc, #28]	@ 0011c8d4 074a
.org 0x11c8d6
	adds r1, r6, r2	@ 0011c8d6 b118
.org 0x11c8d8
	adds r2, #6	@ 0011c8d8 0632
.org 0x11c8da
	adds r0, r6, r2	@ 0011c8da b018
.org 0x11c8dc
	ldrb r1, [r1, #2]	@ 0011c8dc 8978
.org 0x11c8de
	adds r0, r0, r1	@ 0011c8de 4018
.org 0x11c8e0
	ldrb r1, [r0, #0]	@ 0011c8e0 0178
.org 0x11c8e2
	adds r0, r6, #0	@ 0011c8e2 301c
.org 0x11c8e4
	bl 0x11d5cc	@ 0011c8e4 00f072fe
.org 0x11c8e8
	lsls r0, r0, #24	@ 0011c8e8 0006
.org 0x11c8ea
	cmp r0, #0	@ 0011c8ea 0028
.org 0x11c8ec
	beq.n 0x11c8f0	@ 0011c8ec 00d0
.org 0x11c8ee
	b.n 0x11ca9e	@ 0011c8ee d6e0
.org 0x11c8f0
	b.n 0x11caa6	@ 0011c8f0 d9e0
.org 0x11c8f2
	.byte 0x00	@ 0011c8f2 data
.org 0x11c8f3
	.byte 0x00	@ 0011c8f3 data
.org 0x11c8f4
	.byte 0xcc,0x0d,0x00,0x00	@ 0011c8f4 data
.org 0x11c8f8
	ldrh r1, [r0, #6]	@ 0011c8f8 c188
.org 0x11c8fa
	movs r0, #16	@ 0011c8fa 1020
.org 0x11c8fc
	ands r0, r1	@ 0011c8fc 0840
.org 0x11c8fe
	cmp r0, #0	@ 0011c8fe 0028
.org 0x11c900
	beq.n 0x11c918	@ 0011c900 0ad0
.org 0x11c902
	movs r0, #1	@ 0011c902 0120
.org 0x11c904
	bl 0x2b10	@ 0011c904 e6f604f9
.org 0x11c908
	ldr r1, [pc, #8]	@ 0011c908 0249
.org 0x11c90a
	adds r0, r6, r1	@ 0011c90a 7018
.org 0x11c90c
	strb r4, [r0, #4]	@ 0011c90c 0471
.org 0x11c90e
	movs r0, #3	@ 0011c90e 0320
.org 0x11c910
	b.n 0x11cb1a	@ 0011c910 03e1
.org 0x11c912
	.byte 0x00	@ 0011c912 data
.org 0x11c913
	.byte 0x00	@ 0011c913 data
.org 0x11c914
	.byte 0xcc,0x0d,0x00,0x00	@ 0011c914 data
.org 0x11c918
	movs r0, #64	@ 0011c918 4020
.org 0x11c91a
	ands r0, r1	@ 0011c91a 0840
.org 0x11c91c
	cmp r0, #0	@ 0011c91c 0028
.org 0x11c91e
	beq.n 0x11c95a	@ 0011c91e 1cd0
.org 0x11c920
	ldr r2, [pc, #20]	@ 0011c920 054a
.org 0x11c922
	adds r4, r6, r2	@ 0011c922 b418
.org 0x11c924
	ldrb r0, [r4, #2]	@ 0011c924 a078
.org 0x11c926
	cmp r0, #0	@ 0011c926 0028
.org 0x11c928
	beq.n 0x11c93c	@ 0011c928 08d0
.org 0x11c92a
	movs r0, #1	@ 0011c92a 0120
.org 0x11c92c
	bl 0x2b10	@ 0011c92c e6f6f0f8
.org 0x11c930
	ldrb r0, [r4, #2]	@ 0011c930 a078
.org 0x11c932
	subs r0, #1	@ 0011c932 0138
.org 0x11c934
	strb r0, [r4, #2]	@ 0011c934 a070
.org 0x11c936
	b.n 0x11cb1c	@ 0011c936 f1e0
.org 0x11c938
	.byte 0xcc,0x0d,0x00,0x00	@ 0011c938 data
.org 0x11c93c
	ldrb r0, [r4, #23]	@ 0011c93c e07d
.org 0x11c93e
	cmp r0, #0	@ 0011c93e 0028
.org 0x11c940
	beq.n 0x11c950	@ 0011c940 06d0
.org 0x11c942
	movs r0, #1	@ 0011c942 0120
.org 0x11c944
	bl 0x2b10	@ 0011c944 e6f6e4f8
.org 0x11c948
	ldrb r0, [r4, #22]	@ 0011c948 a07d
.org 0x11c94a
	subs r0, #1	@ 0011c94a 0138
.org 0x11c94c
	strb r0, [r4, #22]	@ 0011c94c a075
.org 0x11c94e
	b.n 0x11cb1c	@ 0011c94e e5e0
.org 0x11c950
	movs r0, #3	@ 0011c950 0320
.org 0x11c952
	bl 0x2b10	@ 0011c952 e6f6ddf8
.org 0x11c956
	movs r0, #1	@ 0011c956 0120
.org 0x11c958
	b.n 0x11cb1a	@ 0011c958 dfe0
.org 0x11c95a
	movs r0, #128	@ 0011c95a 8020
.org 0x11c95c
	ands r0, r1	@ 0011c95c 0840
.org 0x11c95e
	cmp r0, #0	@ 0011c95e 0028
.org 0x11c960
	bne.n 0x11c964	@ 0011c960 00d1
.org 0x11c962
	b.n 0x11cb1c	@ 0011c962 dbe0
.org 0x11c964
	ldr r0, [pc, #24]	@ 0011c964 0648
.org 0x11c966
	adds r4, r6, r0	@ 0011c966 3418
.org 0x11c968
	ldrb r0, [r4, #2]	@ 0011c968 a078
.org 0x11c96a
	adds r0, #1	@ 0011c96a 0130
.org 0x11c96c
	ldrb r1, [r4, #3]	@ 0011c96c e178
.org 0x11c96e
	cmp r0, r1	@ 0011c96e 8842
.org 0x11c970
	bge.n 0x11c984	@ 0011c970 08da
.org 0x11c972
	movs r0, #1	@ 0011c972 0120
.org 0x11c974
	bl 0x2b10	@ 0011c974 e6f6ccf8
.org 0x11c978
	ldrb r0, [r4, #2]	@ 0011c978 a078
.org 0x11c97a
	adds r0, #1	@ 0011c97a 0130
.org 0x11c97c
	strb r0, [r4, #2]	@ 0011c97c a070
.org 0x11c97e
	b.n 0x11cb1c	@ 0011c97e cde0
.org 0x11c980
	.byte 0xcc,0x0d,0x00,0x00	@ 0011c980 data
.org 0x11c984
	ldrb r0, [r4, #24]	@ 0011c984 207e
.org 0x11c986
	cmp r0, #0	@ 0011c986 0028
.org 0x11c988
	bne.n 0x11c98c	@ 0011c988 00d1
.org 0x11c98a
	b.n 0x11cb1c	@ 0011c98a c7e0
.org 0x11c98c
	movs r0, #1	@ 0011c98c 0120
.org 0x11c98e
	bl 0x2b10	@ 0011c98e e6f6bff8
.org 0x11c992
	ldrb r0, [r4, #22]	@ 0011c992 a07d
.org 0x11c994
	adds r0, #1	@ 0011c994 0130
.org 0x11c996
	strb r0, [r4, #22]	@ 0011c996 a075
.org 0x11c998
	b.n 0x11cb1c	@ 0011c998 c0e0
.org 0x11c99a
	cmp r7, #3	@ 0011c99a 032f
.org 0x11c99c
	beq.n 0x11c9a0	@ 0011c99c 00d0
.org 0x11c99e
	b.n 0x11cb0c	@ 0011c99e b5e0
.org 0x11c9a0
	ldr r2, [pc, #28]	@ 0011c9a0 074a
.org 0x11c9a2
	ldrh r1, [r2, #4]	@ 0011c9a2 9188
.org 0x11c9a4
	movs r0, #2	@ 0011c9a4 0220
.org 0x11c9a6
	ands r0, r1	@ 0011c9a6 0840
.org 0x11c9a8
	cmp r0, #0	@ 0011c9a8 0028
.org 0x11c9aa
	beq.n 0x11ca04	@ 0011c9aa 2bd0
.org 0x11c9ac
	ldr r2, [pc, #20]	@ 0011c9ac 054a
.org 0x11c9ae
	adds r1, r6, r2	@ 0011c9ae b118
.org 0x11c9b0
	ldrb r0, [r1, #16]	@ 0011c9b0 087c
.org 0x11c9b2
	cmp r0, #255	@ 0011c9b2 ff28
.org 0x11c9b4
	beq.n 0x11c9c8	@ 0011c9b4 08d0
.org 0x11c9b6
	adds r0, r6, #0	@ 0011c9b6 301c
.org 0x11c9b8
	movs r1, #3	@ 0011c9b8 0321
.org 0x11c9ba
	bl 0x11d62c	@ 0011c9ba 00f037fe
.org 0x11c9be
	b.n 0x11c9fc	@ 0011c9be 1de0
.org 0x11c9c0
	.byte 0x60,0x07,0x00,0x02	@ 0011c9c0 data
.org 0x11c9c4
	.byte 0xcc,0x0d,0x00,0x00	@ 0011c9c4 data
.org 0x11c9c8
	ldrb r0, [r1, #15]	@ 0011c9c8 c87b
.org 0x11c9ca
	cmp r0, #255	@ 0011c9ca ff28
.org 0x11c9cc
	beq.n 0x11c9d8	@ 0011c9cc 04d0
.org 0x11c9ce
	adds r0, r6, #0	@ 0011c9ce 301c
.org 0x11c9d0
	movs r1, #2	@ 0011c9d0 0221
.org 0x11c9d2
	bl 0x11d62c	@ 0011c9d2 00f02bfe
.org 0x11c9d6
	b.n 0x11c9fc	@ 0011c9d6 11e0
.org 0x11c9d8
	ldrb r0, [r1, #14]	@ 0011c9d8 887b
.org 0x11c9da
	cmp r0, #255	@ 0011c9da ff28
.org 0x11c9dc
	beq.n 0x11c9e8	@ 0011c9dc 04d0
.org 0x11c9de
	adds r0, r6, #0	@ 0011c9de 301c
.org 0x11c9e0
	movs r1, #1	@ 0011c9e0 0121
.org 0x11c9e2
	bl 0x11d62c	@ 0011c9e2 00f023fe
.org 0x11c9e6
	b.n 0x11c9fc	@ 0011c9e6 09e0
.org 0x11c9e8
	ldrb r0, [r1, #13]	@ 0011c9e8 487b
.org 0x11c9ea
	cmp r0, #255	@ 0011c9ea ff28
.org 0x11c9ec
	beq.n 0x11c9f8	@ 0011c9ec 04d0
.org 0x11c9ee
	adds r0, r6, #0	@ 0011c9ee 301c
.org 0x11c9f0
	movs r1, #0	@ 0011c9f0 0021
.org 0x11c9f2
	bl 0x11d62c	@ 0011c9f2 00f01bfe
.org 0x11c9f6
	b.n 0x11c9fc	@ 0011c9f6 01e0
.org 0x11c9f8
	movs r0, #1	@ 0011c9f8 0120
.org 0x11c9fa
	strb r0, [r6, #3]	@ 0011c9fa f070
.org 0x11c9fc
	movs r0, #3	@ 0011c9fc 0320
.org 0x11c9fe
	bl 0x2b10	@ 0011c9fe e6f687f8
.org 0x11ca02
	b.n 0x11cb1c	@ 0011ca02 8be0
.org 0x11ca04
	movs r0, #1	@ 0011ca04 0120
.org 0x11ca06
	mov r8, r0	@ 0011ca06 8046
.org 0x11ca08
	ands r0, r1	@ 0011ca08 0840
.org 0x11ca0a
	cmp r0, #0	@ 0011ca0a 0028
.org 0x11ca0c
	beq.n 0x11caae	@ 0011ca0c 4fd0
.org 0x11ca0e
	ldr r1, [pc, #80]	@ 0011ca0e 1449
.org 0x11ca10
	adds r4, r6, r1	@ 0011ca10 7418
.org 0x11ca12
	ldrb r0, [r4, #4]	@ 0011ca12 2079
.org 0x11ca14
	cmp r0, #4	@ 0011ca14 0428
.org 0x11ca16
	bne.n 0x11ca90	@ 0011ca16 3bd1
.org 0x11ca18
	ldr r2, [pc, #72]	@ 0011ca18 124a
.org 0x11ca1a
	adds r0, r6, r2	@ 0011ca1a b018
.org 0x11ca1c
	bl 0x11d718	@ 0011ca1c 00f07cfe
.org 0x11ca20
	lsls r0, r0, #24	@ 0011ca20 0006
.org 0x11ca22
	lsrs r5, r0, #24	@ 0011ca22 050e
.org 0x11ca24
	strb r5, [r4, #21]	@ 0011ca24 6575
.org 0x11ca26
	ldr r1, [pc, #64]	@ 0011ca26 1049
.org 0x11ca28
	ldr r1, [r1, #0]	@ 0011ca28 0968
.org 0x11ca2a
	lsrs r0, r0, #26	@ 0011ca2a 800e
.org 0x11ca2c
	adds r1, r1, r0	@ 0011ca2c 0918
.org 0x11ca2e
	ldrb r0, [r1, #0]	@ 0011ca2e 0878
.org 0x11ca30
	ands r7, r5	@ 0011ca30 2f40
.org 0x11ca32
	adds r1, r7, #4	@ 0011ca32 391d
.org 0x11ca34
	asrs r0, r1	@ 0011ca34 0841
.org 0x11ca36
	mov r1, r8	@ 0011ca36 4146
.org 0x11ca38
	ands r0, r1	@ 0011ca38 0840
.org 0x11ca3a
	cmp r0, #0	@ 0011ca3a 0028
.org 0x11ca3c
	bne.n 0x11caa6	@ 0011ca3c 33d1
.org 0x11ca3e
	ldrb r1, [r4, #14]	@ 0011ca3e a17b
.org 0x11ca40
	adds r0, r1, #0	@ 0011ca40 081c
.org 0x11ca42
	cmp r0, #255	@ 0011ca42 ff28
.org 0x11ca44
	beq.n 0x11caa6	@ 0011ca44 2fd0
.org 0x11ca46
	ldrb r0, [r4, #13]	@ 0011ca46 607b
.org 0x11ca48
	strb r0, [r4, #17]	@ 0011ca48 6074
.org 0x11ca4a
	strb r1, [r4, #18]	@ 0011ca4a a174
.org 0x11ca4c
	ldrb r0, [r4, #15]	@ 0011ca4c e07b
.org 0x11ca4e
	strb r0, [r4, #19]	@ 0011ca4e e074
.org 0x11ca50
	ldrb r0, [r4, #16]	@ 0011ca50 207c
.org 0x11ca52
	strb r0, [r4, #20]	@ 0011ca52 2075
.org 0x11ca54
	cmp r5, #255	@ 0011ca54 ff2d
.org 0x11ca56
	bne.n 0x11ca6c	@ 0011ca56 09d1
.org 0x11ca58
	adds r0, r6, #0	@ 0011ca58 301c
.org 0x11ca5a
	bl 0x11d8c4	@ 0011ca5a 00f033ff
.org 0x11ca5e
	b.n 0x11ca78	@ 0011ca5e 0be0
.org 0x11ca60
	.byte 0xcc,0x0d,0x00,0x00	@ 0011ca60 data
.org 0x11ca64
	.byte 0xd9,0x0d,0x00,0x00	@ 0011ca64 data
.org 0x11ca68
	.byte 0xac,0xed,0x02,0x02	@ 0011ca68 data
.org 0x11ca6c
	adds r0, r6, #0	@ 0011ca6c 301c
.org 0x11ca6e
	bl 0x11d6c0	@ 0011ca6e 00f027fe
.org 0x11ca72
	adds r0, r5, #0	@ 0011ca72 281c
.org 0x11ca74
	bl 0x11d818	@ 0011ca74 00f0d0fe
.org 0x11ca78
	movs r0, #28	@ 0011ca78 1c20
.org 0x11ca7a
	bl 0x2b10	@ 0011ca7a e6f649f8
.org 0x11ca7e
	ldr r2, [pc, #12]	@ 0011ca7e 034a
.org 0x11ca80
	adds r0, r6, r2	@ 0011ca80 b018
.org 0x11ca82
	movs r1, #0	@ 0011ca82 0021
.org 0x11ca84
	strb r1, [r0, #2]	@ 0011ca84 8170
.org 0x11ca86
	movs r0, #4	@ 0011ca86 0420
.org 0x11ca88
	b.n 0x11cb1a	@ 0011ca88 47e0
.org 0x11ca8a
	.byte 0x00	@ 0011ca8a data
.org 0x11ca8b
	.byte 0x00	@ 0011ca8b data
.org 0x11ca8c
	.byte 0xcc,0x0d,0x00,0x00	@ 0011ca8c data
.org 0x11ca90
	ldrb r1, [r4, #4]	@ 0011ca90 2179
.org 0x11ca92
	adds r0, r6, #0	@ 0011ca92 301c
.org 0x11ca94
	bl 0x11d62c	@ 0011ca94 00f0cafd
.org 0x11ca98
	lsls r0, r0, #24	@ 0011ca98 0006
.org 0x11ca9a
	cmp r0, #0	@ 0011ca9a 0028
.org 0x11ca9c
	beq.n 0x11caa6	@ 0011ca9c 03d0
.org 0x11ca9e
	movs r0, #2	@ 0011ca9e 0220
.org 0x11caa0
	bl 0x2b10	@ 0011caa0 e6f636f8
.org 0x11caa4
	b.n 0x11cb1c	@ 0011caa4 3ae0
.org 0x11caa6
	movs r0, #4	@ 0011caa6 0420
.org 0x11caa8
	bl 0x2b10	@ 0011caa8 e6f632f8
.org 0x11caac
	b.n 0x11cb1c	@ 0011caac 36e0
.org 0x11caae
	ldrh r1, [r2, #6]	@ 0011caae d188
.org 0x11cab0
	movs r0, #32	@ 0011cab0 2020
.org 0x11cab2
	ands r0, r1	@ 0011cab2 0840
.org 0x11cab4
	cmp r0, #0	@ 0011cab4 0028
.org 0x11cab6
	beq.n 0x11cac2	@ 0011cab6 04d0
.org 0x11cab8
	movs r0, #1	@ 0011cab8 0120
.org 0x11caba
	bl 0x2b10	@ 0011caba e6f629f8
.org 0x11cabe
	movs r0, #2	@ 0011cabe 0220
.org 0x11cac0
	b.n 0x11cb1a	@ 0011cac0 2be0
.org 0x11cac2
	movs r0, #64	@ 0011cac2 4020
.org 0x11cac4
	ands r0, r1	@ 0011cac4 0840
.org 0x11cac6
	cmp r0, #0	@ 0011cac6 0028
.org 0x11cac8
	beq.n 0x11cae8	@ 0011cac8 0ed0
.org 0x11caca
	ldr r0, [pc, #24]	@ 0011caca 0648
.org 0x11cacc
	adds r4, r6, r0	@ 0011cacc 3418
