@ FUN_0802b7f0  entry 0x0802b7f0  size 748
.thumb
.org 0x2b7f0
FUN_0802b7f0:
	push {r4, r5, r6, r7, lr}	@ 0002b7f0 f0b5
.org 0x2b7f2
	mov r7, sl	@ 0002b7f2 5746
.org 0x2b7f4
	mov r6, r9	@ 0002b7f4 4e46
.org 0x2b7f6
	mov r5, r8	@ 0002b7f6 4546
.org 0x2b7f8
	push {r5, r6, r7}	@ 0002b7f8 e0b4
.org 0x2b7fa
	sub sp, #24	@ 0002b7fa 86b0
.org 0x2b7fc
	adds r7, r0, #0	@ 0002b7fc 071c
.org 0x2b7fe
	mov r8, r1	@ 0002b7fe 8846
.org 0x2b800
	lsls r2, r2, #24	@ 0002b800 1206
.org 0x2b802
	lsrs r2, r2, #24	@ 0002b802 120e
.org 0x2b804
	mov sl, r2	@ 0002b804 9246
.org 0x2b806
	movs r0, #0	@ 0002b806 0020
.org 0x2b808
	str r0, [sp, #20]	@ 0002b808 0590
.org 0x2b80a
	adds r0, r7, #0	@ 0002b80a 381c
.org 0x2b80c
	movs r2, #0	@ 0002b80c 0022
.org 0x2b80e
	bl 0x2cc18	@ 0002b80e 01f003fa
.org 0x2b812
	ldrb r1, [r7, #10]	@ 0002b812 b97a
.org 0x2b814
	movs r0, #16	@ 0002b814 1020
.org 0x2b816
	ands r0, r1	@ 0002b816 0840
.org 0x2b818
	cmp r0, #0	@ 0002b818 0028
.org 0x2b81a
	beq.n 0x2b83e	@ 0002b81a 10d0
.org 0x2b81c
	mov r1, sl	@ 0002b81c 5146
.org 0x2b81e
	cmp r1, #0	@ 0002b81e 0029
.org 0x2b820
	bne.n 0x2b830	@ 0002b820 06d1
.org 0x2b822
	mov r2, r8	@ 0002b822 4246
.org 0x2b824
	movs r3, #0	@ 0002b824 0023
.org 0x2b826
	ldrsh r0, [r2, r3]	@ 0002b826 d05e
.org 0x2b828
	ldr r1, [r7, #84]	@ 0002b828 796d
.org 0x2b82a
	subs r1, r1, r0	@ 0002b82a 091a
.org 0x2b82c
	ldrh r0, [r2, #4]	@ 0002b82c 9088
.org 0x2b82e
	b.n 0x2b866	@ 0002b82e 1ae0
.org 0x2b830
	mov r4, r8	@ 0002b830 4446
.org 0x2b832
	movs r1, #0	@ 0002b832 0021
.org 0x2b834
	ldrsh r0, [r4, r1]	@ 0002b834 605e
.org 0x2b836
	ldr r1, [r7, #84]	@ 0002b836 796d
.org 0x2b838
	subs r1, r1, r0	@ 0002b838 091a
.org 0x2b83a
	ldrh r0, [r4, #4]	@ 0002b83a a088
.org 0x2b83c
	b.n 0x2b850	@ 0002b83c 08e0
.org 0x2b83e
	mov r2, sl	@ 0002b83e 5246
.org 0x2b840
	cmp r2, #0	@ 0002b840 002a
.org 0x2b842
	bne.n 0x2b858	@ 0002b842 09d1
.org 0x2b844
	mov r3, r8	@ 0002b844 4346
.org 0x2b846
	movs r4, #0	@ 0002b846 0024
.org 0x2b848
	ldrsh r0, [r3, r4]	@ 0002b848 185f
.org 0x2b84a
	ldr r1, [r7, #84]	@ 0002b84a 796d
.org 0x2b84c
	adds r1, r1, r0	@ 0002b84c 0918
.org 0x2b84e
	ldrh r0, [r3, #4]	@ 0002b84e 9888
.org 0x2b850
	lsls r0, r0, #16	@ 0002b850 0004
.org 0x2b852
	asrs r0, r0, #17	@ 0002b852 4014
.org 0x2b854
	subs r6, r1, r0	@ 0002b854 0e1a
.org 0x2b856
	b.n 0x2b86c	@ 0002b856 09e0
.org 0x2b858
	mov r1, r8	@ 0002b858 4146
.org 0x2b85a
	movs r2, #0	@ 0002b85a 0022
.org 0x2b85c
	ldrsh r0, [r1, r2]	@ 0002b85c 885e
.org 0x2b85e
	ldr r1, [r7, #84]	@ 0002b85e 796d
.org 0x2b860
	adds r1, r1, r0	@ 0002b860 0918
.org 0x2b862
	mov r3, r8	@ 0002b862 4346
.org 0x2b864
	ldrh r0, [r3, #4]	@ 0002b864 9888
.org 0x2b866
	lsls r0, r0, #16	@ 0002b866 0004
.org 0x2b868
	asrs r0, r0, #17	@ 0002b868 4014
.org 0x2b86a
	adds r6, r1, r0	@ 0002b86a 0e18
.org 0x2b86c
	mov r4, r8	@ 0002b86c 4446
.org 0x2b86e
	movs r1, #2	@ 0002b86e 0221
.org 0x2b870
	ldrsh r0, [r4, r1]	@ 0002b870 605e
.org 0x2b872
	ldr r2, [r7, #88]	@ 0002b872 ba6d
.org 0x2b874
	adds r0, r2, r0	@ 0002b874 1018
.org 0x2b876
	str r0, [sp, #0]	@ 0002b876 0090
.org 0x2b878
	movs r3, #2	@ 0002b878 0223
.org 0x2b87a
	ldrsh r0, [r4, r3]	@ 0002b87a e05e
.org 0x2b87c
	adds r0, r2, r0	@ 0002b87c 1018
.org 0x2b87e
	ldrh r1, [r4, #6]	@ 0002b87e e188
.org 0x2b880
	lsls r1, r1, #16	@ 0002b880 0904
.org 0x2b882
	asrs r1, r1, #17	@ 0002b882 4914
.org 0x2b884
	subs r0, r0, r1	@ 0002b884 401a
.org 0x2b886
	str r0, [sp, #4]	@ 0002b886 0190
.org 0x2b888
	movs r3, #2	@ 0002b888 0223
.org 0x2b88a
	ldrsh r0, [r4, r3]	@ 0002b88a e05e
.org 0x2b88c
	adds r2, r2, r0	@ 0002b88c 1218
.org 0x2b88e
	adds r2, r2, r1	@ 0002b88e 5218
.org 0x2b890
	str r2, [sp, #8]	@ 0002b890 0292
.org 0x2b892
	movs r4, #220	@ 0002b892 dc24
.org 0x2b894
	lsls r4, r4, #1	@ 0002b894 6400
.org 0x2b896
	adds r0, r7, r4	@ 0002b896 3819
.org 0x2b898
	ldrb r0, [r0, #0]	@ 0002b898 0078
.org 0x2b89a
	cmp r0, #0	@ 0002b89a 0028
.org 0x2b89c
	beq.n 0x2b988	@ 0002b89c 74d0
.org 0x2b89e
	movs r0, #0	@ 0002b89e 0020
.org 0x2b8a0
	mov r9, r0	@ 0002b8a0 8146
.org 0x2b8a2
	movs r0, #3	@ 0002b8a2 0320
.org 0x2b8a4
	mov r1, sl	@ 0002b8a4 5146
.org 0x2b8a6
	subs r0, r0, r1	@ 0002b8a6 401a
.org 0x2b8a8
	cmp r9, r0	@ 0002b8a8 8145
.org 0x2b8aa
	bge.n 0x2b988	@ 0002b8aa 6dda
.org 0x2b8ac
	mov r2, r9	@ 0002b8ac 4a46
.org 0x2b8ae
	lsls r4, r2, #2	@ 0002b8ae 9400
.org 0x2b8b0
	mov r3, sp	@ 0002b8b0 6b46
.org 0x2b8b2
	adds r0, r3, r4	@ 0002b8b2 1819
.org 0x2b8b4
	ldr r2, [r0, #0]	@ 0002b8b4 0268
.org 0x2b8b6
	adds r0, r7, #0	@ 0002b8b6 381c
.org 0x2b8b8
	adds r1, r6, #0	@ 0002b8b8 311c
.org 0x2b8ba
	bl 0x2e058	@ 0002b8ba 02f0cdfb
.org 0x2b8be
	lsls r0, r0, #16	@ 0002b8be 0004
.org 0x2b8c0
	lsrs r5, r0, #16	@ 0002b8c0 050c
.org 0x2b8c2
	movs r0, #128	@ 0002b8c2 8020
.org 0x2b8c4
	lsls r0, r0, #8	@ 0002b8c4 0002
.org 0x2b8c6
	adds r1, r0, #0	@ 0002b8c6 011c
.org 0x2b8c8
	adds r0, r5, #0	@ 0002b8c8 281c
.org 0x2b8ca
	ands r0, r1	@ 0002b8ca 0840
.org 0x2b8cc
	cmp r0, #0	@ 0002b8cc 0028
.org 0x2b8ce
	beq.n 0x2b8dc	@ 0002b8ce 05d0
.org 0x2b8d0
	movs r0, #15	@ 0002b8d0 0f20
.org 0x2b8d2
	ands r0, r5	@ 0002b8d2 2840
.org 0x2b8d4
	cmp r0, #0	@ 0002b8d4 0028
.org 0x2b8d6
	beq.n 0x2b8dc	@ 0002b8d6 01d0
.org 0x2b8d8
	cmp r0, #14	@ 0002b8d8 0e28
.org 0x2b8da
	bls.n 0x2b974	@ 0002b8da 4bd9
.org 0x2b8dc
	movs r0, #15	@ 0002b8dc 0f20
.org 0x2b8de
	ands r0, r5	@ 0002b8de 2840
.org 0x2b8e0
	cmp r0, #15	@ 0002b8e0 0f28
.org 0x2b8e2
	beq.n 0x2b974	@ 0002b8e2 47d0
.org 0x2b8e4
	cmp r0, #0	@ 0002b8e4 0028
.org 0x2b8e6
	beq.n 0x2b974	@ 0002b8e6 45d0
.org 0x2b8e8
	ldrb r0, [r7, #13]	@ 0002b8e8 787b
.org 0x2b8ea
	cmp r0, #2	@ 0002b8ea 0228
.org 0x2b8ec
	beq.n 0x2b8f4	@ 0002b8ec 02d0
.org 0x2b8ee
	mov r1, r9	@ 0002b8ee 4946
.org 0x2b8f0
	cmp r1, #0	@ 0002b8f0 0029
.org 0x2b8f2
	bne.n 0x2b906	@ 0002b8f2 08d1
.org 0x2b8f4
	mov r2, sp	@ 0002b8f4 6a46
.org 0x2b8f6
	adds r0, r2, r4	@ 0002b8f6 1019
.org 0x2b8f8
	ldr r2, [r0, #0]	@ 0002b8f8 0268
.org 0x2b8fa
	adds r0, r7, #0	@ 0002b8fa 381c
.org 0x2b8fc
	adds r1, r6, #0	@ 0002b8fc 311c
.org 0x2b8fe
	add r3, sp, #12	@ 0002b8fe 03ab
.org 0x2b900
	bl 0x2dc34	@ 0002b900 02f098f9
.org 0x2b904
	b.n 0x2b916	@ 0002b904 07e0
.org 0x2b906
	mov r3, sp	@ 0002b906 6b46
.org 0x2b908
	adds r0, r3, r4	@ 0002b908 1819
.org 0x2b90a
	ldr r2, [r0, #0]	@ 0002b90a 0268
.org 0x2b90c
	adds r0, r7, #0	@ 0002b90c 381c
.org 0x2b90e
	adds r1, r6, #0	@ 0002b90e 311c
.org 0x2b910
	add r3, sp, #12	@ 0002b910 03ab
.org 0x2b912
	bl 0x2d7f8	@ 0002b912 01f071ff
.org 0x2b916
	lsls r0, r0, #16	@ 0002b916 0004
.org 0x2b918
	lsrs r0, r0, #16	@ 0002b918 000c
.org 0x2b91a
	str r0, [sp, #20]	@ 0002b91a 0590
.org 0x2b91c
	add r2, sp, #12	@ 0002b91c 03aa
.org 0x2b91e
	ldr r4, [sp, #20]	@ 0002b91e 059c
.org 0x2b920
	cmp r4, #0	@ 0002b920 002c
.org 0x2b922
	beq.n 0x2b974	@ 0002b922 27d0
.org 0x2b924
	ldr r1, [pc, #40]	@ 0002b924 0a49
.org 0x2b926
	adds r0, r7, r1	@ 0002b926 7818
.org 0x2b928
	ldrb r0, [r0, #0]	@ 0002b928 0078
.org 0x2b92a
	cmp r0, #0	@ 0002b92a 0028
.org 0x2b92c
	beq.n 0x2b958	@ 0002b92c 14d0
.org 0x2b92e
	ldr r0, [sp, #12]	@ 0002b92e 0398
.org 0x2b930
	adds r1, r0, #0	@ 0002b930 011c
.org 0x2b932
	cmp r0, #0	@ 0002b932 0028
.org 0x2b934
	bge.n 0x2b938	@ 0002b934 00da
.org 0x2b936
	negs r1, r0	@ 0002b936 4142
.org 0x2b938
	ldr r3, [pc, #24]	@ 0002b938 064b
.org 0x2b93a
	cmp r1, r3	@ 0002b93a 9942
.org 0x2b93c
	bgt.n 0x2b940	@ 0002b93c 00dc
.org 0x2b93e
	adds r6, r6, r0	@ 0002b93e 3618
.org 0x2b940
	ldr r0, [r2, #4]	@ 0002b940 5068
.org 0x2b942
	cmp r0, #0	@ 0002b942 0028
.org 0x2b944
	bge.n 0x2b948	@ 0002b944 00da
.org 0x2b946
	negs r0, r0	@ 0002b946 4042
.org 0x2b948
	cmp r0, r3	@ 0002b948 9842
.org 0x2b94a
	bgt.n 0x2b974	@ 0002b94a 13dc
.org 0x2b94c
	b.n 0x2b95c	@ 0002b94c 06e0
.org 0x2b94e
	.byte 0x00	@ 0002b94e data
.org 0x2b94f
	.byte 0x00	@ 0002b94f data
.org 0x2b950
	.byte 0xcf,0x01,0x00,0x00	@ 0002b950 data
.org 0x2b954
	.byte 0xff,0x0f,0x00,0x00	@ 0002b954 data
.org 0x2b958
	ldr r0, [sp, #12]	@ 0002b958 0398
.org 0x2b95a
	adds r6, r6, r0	@ 0002b95a 3618
.org 0x2b95c
	ldr r0, [sp, #0]	@ 0002b95c 0098
.org 0x2b95e
	ldr r1, [r2, #4]	@ 0002b95e 5168
.org 0x2b960
	adds r0, r0, r1	@ 0002b960 4018
.org 0x2b962
	str r0, [sp, #0]	@ 0002b962 0090
.org 0x2b964
	ldr r0, [sp, #4]	@ 0002b964 0198
.org 0x2b966
	ldr r1, [r2, #4]	@ 0002b966 5168
.org 0x2b968
	adds r0, r0, r1	@ 0002b968 4018
.org 0x2b96a
	str r0, [sp, #4]	@ 0002b96a 0190
.org 0x2b96c
	ldr r0, [sp, #8]	@ 0002b96c 0298
.org 0x2b96e
	ldr r1, [r2, #4]	@ 0002b96e 5168
.org 0x2b970
	adds r0, r0, r1	@ 0002b970 4018
.org 0x2b972
	str r0, [sp, #8]	@ 0002b972 0290
.org 0x2b974
	mov r0, r9	@ 0002b974 4846
.org 0x2b976
	adds r0, #1	@ 0002b976 0130
.org 0x2b978
	lsls r0, r0, #16	@ 0002b978 0004
.org 0x2b97a
	lsrs r0, r0, #16	@ 0002b97a 000c
.org 0x2b97c
	mov r9, r0	@ 0002b97c 8146
.org 0x2b97e
	movs r0, #3	@ 0002b97e 0320
.org 0x2b980
	mov r2, sl	@ 0002b980 5246
.org 0x2b982
	subs r0, r0, r2	@ 0002b982 801a
.org 0x2b984
	cmp r9, r0	@ 0002b984 8145
.org 0x2b986
	blt.n 0x2b8ac	@ 0002b986 91db
.org 0x2b988
	movs r3, #138	@ 0002b988 8a23
.org 0x2b98a
	lsls r3, r3, #1	@ 0002b98a 5b00
.org 0x2b98c
	adds r1, r7, r3	@ 0002b98c f918
.org 0x2b98e
	ldr r0, [r1, #0]	@ 0002b98e 0868
.org 0x2b990
	mov r4, r8	@ 0002b990 4446
.org 0x2b992
	movs r3, #2	@ 0002b992 0223
.org 0x2b994
	ldrsh r2, [r4, r3]	@ 0002b994 e25e
.org 0x2b996
	ldr r1, [r1, #4]	@ 0002b996 4968
.org 0x2b998
	adds r1, r1, r2	@ 0002b998 8918
.org 0x2b99a
	ldrh r2, [r4, #6]	@ 0002b99a e288
.org 0x2b99c
	lsls r2, r2, #16	@ 0002b99c 1204
.org 0x2b99e
	asrs r2, r2, #17	@ 0002b99e 5214
.org 0x2b9a0
	adds r1, r1, r2	@ 0002b9a0 8918
.org 0x2b9a2
	bl 0x7020	@ 0002b9a2 dbf73dfb
.org 0x2b9a6
	lsls r0, r0, #16	@ 0002b9a6 0004
.org 0x2b9a8
	lsrs r5, r0, #16	@ 0002b9a8 050c
.org 0x2b9aa
	movs r4, #15	@ 0002b9aa 0f24
.org 0x2b9ac
	adds r0, r5, #0	@ 0002b9ac 281c
.org 0x2b9ae
	ands r0, r4	@ 0002b9ae 2040
.org 0x2b9b0
	cmp r0, #1	@ 0002b9b0 0128
.org 0x2b9b2
	bne.n 0x2b9da	@ 0002b9b2 12d1
.org 0x2b9b4
	ldr r0, [r7, #84]	@ 0002b9b4 786d
.org 0x2b9b6
	ldr r1, [sp, #8]	@ 0002b9b6 0299
.org 0x2b9b8
	ldr r2, [pc, #60]	@ 0002b9b8 0f4a
.org 0x2b9ba
	adds r1, r1, r2	@ 0002b9ba 8918
.org 0x2b9bc
	bl 0x7020	@ 0002b9bc dbf730fb
.org 0x2b9c0
	lsls r0, r0, #16	@ 0002b9c0 0004
.org 0x2b9c2
	lsrs r5, r0, #16	@ 0002b9c2 050c
.org 0x2b9c4
	adds r0, r5, #0	@ 0002b9c4 281c
.org 0x2b9c6
	ands r0, r4	@ 0002b9c6 2040
.org 0x2b9c8
	cmp r0, #2	@ 0002b9c8 0228
.org 0x2b9ca
	beq.n 0x2b9da	@ 0002b9ca 06d0
.org 0x2b9cc
	cmp r0, #4	@ 0002b9cc 0428
.org 0x2b9ce
	beq.n 0x2b9da	@ 0002b9ce 04d0
.org 0x2b9d0
	cmp r0, #9	@ 0002b9d0 0928
.org 0x2b9d2
	beq.n 0x2b9da	@ 0002b9d2 02d0
.org 0x2b9d4
	cmp r0, #13	@ 0002b9d4 0d28
.org 0x2b9d6
	beq.n 0x2b9da	@ 0002b9d6 00d0
.org 0x2b9d8
	movs r5, #1	@ 0002b9d8 0125
.org 0x2b9da
	movs r0, #15	@ 0002b9da 0f20
.org 0x2b9dc
	ands r0, r5	@ 0002b9dc 2840
.org 0x2b9de
	cmp r0, #1	@ 0002b9de 0128
.org 0x2b9e0
	bls.n 0x2ba0e	@ 0002b9e0 15d9
.org 0x2b9e2
	cmp r0, #7	@ 0002b9e2 0728
.org 0x2b9e4
	bhi.n 0x2b9fc	@ 0002b9e4 0ad8
.org 0x2b9e6
	ldrb r0, [r7, #10]	@ 0002b9e6 b87a
.org 0x2b9e8
	lsrs r0, r0, #4	@ 0002b9e8 0009
.org 0x2b9ea
	movs r1, #1	@ 0002b9ea 0121
.org 0x2b9ec
	bics r1, r0	@ 0002b9ec 8143
.org 0x2b9ee
	movs r0, #3	@ 0002b9ee 0320
.org 0x2b9f0
	cmp r1, sl	@ 0002b9f0 5145
.org 0x2b9f2
	bne.n 0x2ba10	@ 0002b9f2 0dd1
.org 0x2b9f4
	movs r0, #2	@ 0002b9f4 0220
.org 0x2b9f6
	b.n 0x2ba10	@ 0002b9f6 0be0
.org 0x2b9f8
	.byte 0x00,0xfc,0xff,0xff	@ 0002b9f8 data
.org 0x2b9fc
	cmp r0, #13	@ 0002b9fc 0d28
.org 0x2b9fe
	bhi.n 0x2ba0e	@ 0002b9fe 06d8
.org 0x2ba00
	ldrb r0, [r7, #10]	@ 0002ba00 b87a
.org 0x2ba02
	lsrs r0, r0, #4	@ 0002ba02 0009
.org 0x2ba04
	movs r1, #1	@ 0002ba04 0121
.org 0x2ba06
	bics r1, r0	@ 0002ba06 8143
.org 0x2ba08
	movs r0, #2	@ 0002ba08 0220
.org 0x2ba0a
	cmp r1, sl	@ 0002ba0a 5145
.org 0x2ba0c
	bne.n 0x2ba10	@ 0002ba0c 00d1
.org 0x2ba0e
	movs r0, #3	@ 0002ba0e 0320
.org 0x2ba10
	lsls r0, r0, #16	@ 0002ba10 0004
.org 0x2ba12
	movs r3, #0	@ 0002ba12 0023
.org 0x2ba14
	mov r9, r3	@ 0002ba14 9946
.org 0x2ba16
	mov r8, r0	@ 0002ba16 8046
.org 0x2ba18
	cmp r0, #0	@ 0002ba18 0028
.org 0x2ba1a
	beq.n 0x2bad8	@ 0002ba1a 5dd0
.org 0x2ba1c
	mov r4, r9	@ 0002ba1c 4c46
.org 0x2ba1e
	lsls r0, r4, #2	@ 0002ba1e a000
.org 0x2ba20
	mov r1, sp	@ 0002ba20 6946
.org 0x2ba22
	adds r4, r1, r0	@ 0002ba22 0c18
.org 0x2ba24
	ldr r1, [r4, #0]	@ 0002ba24 2168
.org 0x2ba26
	adds r0, r6, #0	@ 0002ba26 301c
.org 0x2ba28
	bl 0x7d28	@ 0002ba28 dcf77ef9
.org 0x2ba2c
	lsls r0, r0, #16	@ 0002ba2c 0004
.org 0x2ba2e
	lsrs r5, r0, #16	@ 0002ba2e 050c
.org 0x2ba30
	movs r0, #15	@ 0002ba30 0f20
.org 0x2ba32
	ands r0, r5	@ 0002ba32 2840
.org 0x2ba34
	adds r2, r0, #0	@ 0002ba34 021c
.org 0x2ba36
	cmp r2, #1	@ 0002ba36 012a
.org 0x2ba38
	bne.n 0x2ba6a	@ 0002ba38 17d1
.org 0x2ba3a
	movs r3, #128	@ 0002ba3a 8023
.org 0x2ba3c
	lsls r3, r3, #8	@ 0002ba3c 1b02
.org 0x2ba3e
	adds r1, r3, #0	@ 0002ba3e 191c
.org 0x2ba40
	adds r0, r5, #0	@ 0002ba40 281c
.org 0x2ba42
	ands r0, r1	@ 0002ba42 0840
.org 0x2ba44
	cmp r0, #0	@ 0002ba44 0028
.org 0x2ba46
	bne.n 0x2baca	@ 0002ba46 40d1
.org 0x2ba48
	movs r0, #128	@ 0002ba48 8020
.org 0x2ba4a
	lsls r0, r0, #3	@ 0002ba4a c000
.org 0x2ba4c
	adds r1, r0, #0	@ 0002ba4c 011c
.org 0x2ba4e
	adds r0, r5, #0	@ 0002ba4e 281c
.org 0x2ba50
	ands r0, r1	@ 0002ba50 0840
.org 0x2ba52
	cmp r0, #0	@ 0002ba52 0028
.org 0x2ba54
	bne.n 0x2baca	@ 0002ba54 39d1
.org 0x2ba56
	ldrb r0, [r7, #10]	@ 0002ba56 b87a
.org 0x2ba58
	lsrs r0, r0, #4	@ 0002ba58 0009
.org 0x2ba5a
	ands r0, r2	@ 0002ba5a 1040
.org 0x2ba5c
	cmp r0, sl	@ 0002ba5c 5045
.org 0x2ba5e
	bne.n 0x2bab6	@ 0002ba5e 2ad1
.org 0x2ba60
	ldr r1, [r4, #0]	@ 0002ba60 2168
.org 0x2ba62
	adds r0, r6, #0	@ 0002ba62 301c
.org 0x2ba64
	bl 0x8448	@ 0002ba64 dcf7f0fc
.org 0x2ba68
	b.n 0x2babe	@ 0002ba68 29e0
.org 0x2ba6a
	subs r0, #1	@ 0002ba6a 0138
.org 0x2ba6c
	lsls r0, r0, #16	@ 0002ba6c 0004
.org 0x2ba6e
	lsrs r0, r0, #16	@ 0002ba6e 000c
.org 0x2ba70
	cmp r0, #12	@ 0002ba70 0c28
.org 0x2ba72
	bhi.n 0x2baca	@ 0002ba72 2ad8
.org 0x2ba74
	mov r1, sl	@ 0002ba74 5146
.org 0x2ba76
	cmp r1, #0	@ 0002ba76 0029
.org 0x2ba78
	bne.n 0x2baca	@ 0002ba78 27d1
.org 0x2ba7a
	cmp r2, #7	@ 0002ba7a 072a
.org 0x2ba7c
	bhi.n 0x2baa0	@ 0002ba7c 10d8
.org 0x2ba7e
	ldr r0, [r7, #84]	@ 0002ba7e 786d
.org 0x2ba80
	cmp r0, r6	@ 0002ba80 b042
.org 0x2ba82
	ble.n 0x2baca	@ 0002ba82 22dd
.org 0x2ba84
	movs r2, #128	@ 0002ba84 8022
.org 0x2ba86
	lsls r2, r2, #5	@ 0002ba86 5201
.org 0x2ba88
	adds r0, r6, r2	@ 0002ba88 b018
.org 0x2ba8a
	ldr r1, [r4, #0]	@ 0002ba8a 2168
.org 0x2ba8c
	bl 0x7020	@ 0002ba8c dbf7c8fa
.org 0x2ba90
	lsls r0, r0, #16	@ 0002ba90 0004
.org 0x2ba92
	cmp r0, #0	@ 0002ba92 0028
.org 0x2ba94
	bne.n 0x2baca	@ 0002ba94 19d1
.org 0x2ba96
	ldr r1, [r4, #0]	@ 0002ba96 2168
.org 0x2ba98
	adds r0, r6, #0	@ 0002ba98 301c
.org 0x2ba9a
	bl 0x8448	@ 0002ba9a dcf7d5fc
.org 0x2ba9e
	b.n 0x2babe	@ 0002ba9e 0ee0
.org 0x2baa0
	ldr r0, [r7, #84]	@ 0002baa0 786d
.org 0x2baa2
	cmp r0, r6	@ 0002baa2 b042
.org 0x2baa4
	bge.n 0x2baca	@ 0002baa4 11da
.org 0x2baa6
	ldr r3, [pc, #68]	@ 0002baa6 114b
.org 0x2baa8
	adds r0, r6, r3	@ 0002baa8 f018
.org 0x2baaa
	ldr r1, [r4, #0]	@ 0002baaa 2168
.org 0x2baac
	bl 0x7020	@ 0002baac dbf7b8fa
.org 0x2bab0
	lsls r0, r0, #16	@ 0002bab0 0004
.org 0x2bab2
	cmp r0, #0	@ 0002bab2 0028
.org 0x2bab4
	bne.n 0x2baca	@ 0002bab4 09d1
.org 0x2bab6
	ldr r1, [r4, #0]	@ 0002bab6 2168
.org 0x2bab8
	adds r0, r6, #0	@ 0002bab8 301c
.org 0x2baba
	bl 0x8264	@ 0002baba dcf7d3fb
.org 0x2babe
	adds r1, r0, #0	@ 0002babe 011c
.org 0x2bac0
	ldr r0, [r7, #84]	@ 0002bac0 786d
.org 0x2bac2
	adds r0, r0, r1	@ 0002bac2 4018
.org 0x2bac4
	str r0, [r7, #84]	@ 0002bac4 7865
.org 0x2bac6
	adds r6, r6, r1	@ 0002bac6 7618
.org 0x2bac8
	str r5, [sp, #20]	@ 0002bac8 0595
.org 0x2baca
	mov r0, r9	@ 0002baca 4846
.org 0x2bacc
	adds r0, #1	@ 0002bacc 0130
.org 0x2bace
	lsls r0, r0, #16	@ 0002bace 0004
.org 0x2bad0
	lsrs r4, r0, #16	@ 0002bad0 040c
.org 0x2bad2
	mov r9, r4	@ 0002bad2 a146
.org 0x2bad4
	cmp r0, r8	@ 0002bad4 4045
.org 0x2bad6
	bcc.n 0x2ba1c	@ 0002bad6 a1d3
.org 0x2bad8
	ldr r0, [sp, #20]	@ 0002bad8 0598
.org 0x2bada
	add sp, #24	@ 0002bada 06b0
