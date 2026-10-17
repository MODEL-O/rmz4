@ FUN_0802d7f8  entry 0x0802d7f8  size 1014
.thumb
.org 0x2d7f8
FUN_0802d7f8:
	push {r4, r5, r6, r7, lr}	@ 0002d7f8 f0b5
.org 0x2d7fa
	mov r7, sl	@ 0002d7fa 5746
.org 0x2d7fc
	mov r6, r9	@ 0002d7fc 4e46
.org 0x2d7fe
	mov r5, r8	@ 0002d7fe 4546
.org 0x2d800
	push {r5, r6, r7}	@ 0002d800 e0b4
.org 0x2d802
	sub sp, #24	@ 0002d802 86b0
.org 0x2d804
	adds r5, r0, #0	@ 0002d804 051c
.org 0x2d806
	str r1, [sp, #0]	@ 0002d806 0091
.org 0x2d808
	mov sl, r2	@ 0002d808 9246
.org 0x2d80a
	adds r4, r3, #0	@ 0002d80a 1c1c
.org 0x2d80c
	movs r0, #0	@ 0002d80c 0020
.org 0x2d80e
	str r0, [r4, #4]	@ 0002d80e 6060
.org 0x2d810
	str r0, [r4, #0]	@ 0002d810 2060
.org 0x2d812
	str r0, [sp, #4]	@ 0002d812 0190
.org 0x2d814
	movs r1, #0	@ 0002d814 0021
.org 0x2d816
	str r1, [sp, #12]	@ 0002d816 0391
.org 0x2d818
	movs r2, #220	@ 0002d818 dc22
.org 0x2d81a
	lsls r2, r2, #1	@ 0002d81a 5200
.org 0x2d81c
	adds r0, r5, r2	@ 0002d81c a818
.org 0x2d81e
	ldr r3, [sp, #4]	@ 0002d81e 019b
.org 0x2d820
	ldrb r0, [r0, #0]	@ 0002d820 0078
.org 0x2d822
	cmp r3, r0	@ 0002d822 8342
.org 0x2d824
	bcc.n 0x2d828	@ 0002d824 00d3
.org 0x2d826
	b.n 0x2dc1e	@ 0002d826 fae1
.org 0x2d828
	ldr r6, [pc, #200]	@ 0002d828 324e
.org 0x2d82a
	str r6, [sp, #16]	@ 0002d82a 0496
.org 0x2d82c
	movs r7, #196	@ 0002d82c c427
.org 0x2d82e
	lsls r7, r7, #1	@ 0002d82e 7f00
.org 0x2d830
	adds r0, r5, r7	@ 0002d830 e819
.org 0x2d832
	ldr r1, [sp, #12]	@ 0002d832 0399
.org 0x2d834
	adds r0, r0, r1	@ 0002d834 4018
.org 0x2d836
	ldrb r6, [r0, #0]	@ 0002d836 0678
.org 0x2d838
	lsls r0, r6, #1	@ 0002d838 7000
.org 0x2d83a
	adds r0, r0, r6	@ 0002d83a 8019
.org 0x2d83c
	lsls r7, r0, #3	@ 0002d83c c700
.org 0x2d83e
	ldr r3, [sp, #16]	@ 0002d83e 049b
.org 0x2d840
	adds r2, r7, r3	@ 0002d840 fa18
.org 0x2d842
	movs r1, #235	@ 0002d842 eb21
.org 0x2d844
	lsls r1, r1, #1	@ 0002d844 4900
.org 0x2d846
	adds r0, r2, r1	@ 0002d846 5018
.org 0x2d848
	ldrh r0, [r0, #0]	@ 0002d848 0088
.org 0x2d84a
	str r0, [sp, #8]	@ 0002d84a 0290
.org 0x2d84c
	movs r0, #15	@ 0002d84c 0f20
.org 0x2d84e
	ldr r3, [sp, #8]	@ 0002d84e 029b
.org 0x2d850
	ands r0, r3	@ 0002d850 1840
.org 0x2d852
	cmp r0, #15	@ 0002d852 0f28
.org 0x2d854
	bne.n 0x2d868	@ 0002d854 08d1
.org 0x2d856
	movs r1, #128	@ 0002d856 8021
.org 0x2d858
	lsls r1, r1, #8	@ 0002d858 0902
.org 0x2d85a
	adds r0, r1, #0	@ 0002d85a 081c
.org 0x2d85c
	ands r3, r0	@ 0002d85c 0340
.org 0x2d85e
	cmp r3, #0	@ 0002d85e 002b
.org 0x2d860
	bne.n 0x2d864	@ 0002d860 00d1
.org 0x2d862
	b.n 0x2dc04	@ 0002d862 cfe1
.org 0x2d864
	ldr r3, [pc, #144]	@ 0002d864 244b
.org 0x2d866
	str r3, [sp, #8]	@ 0002d866 0293
.org 0x2d868
	ldr r1, [sp, #16]	@ 0002d868 0499
.org 0x2d86a
	movs r3, #238	@ 0002d86a ee23
.org 0x2d86c
	lsls r3, r3, #1	@ 0002d86c 5b00
.org 0x2d86e
	adds r0, r1, r3	@ 0002d86e c818
.org 0x2d870
	adds r0, r0, r7	@ 0002d870 c019
.org 0x2d872
	mov r9, r0	@ 0002d872 8146
.org 0x2d874
	ldr r1, [r0, #0]	@ 0002d874 0168
.org 0x2d876
	ldr r0, [sp, #0]	@ 0002d876 0098
.org 0x2d878
	subs r1, r0, r1	@ 0002d878 411a
.org 0x2d87a
	movs r0, #236	@ 0002d87a ec20
.org 0x2d87c
	lsls r0, r0, #1	@ 0002d87c 4000
.org 0x2d87e
	adds r3, r2, r0	@ 0002d87e 1318
.org 0x2d880
	ldrh r0, [r3, #0]	@ 0002d880 1888
.org 0x2d882
	adds r1, r1, r0	@ 0002d882 0918
.org 0x2d884
	lsls r0, r0, #1	@ 0002d884 4000
.org 0x2d886
	cmp r1, r0	@ 0002d886 8142
.org 0x2d888
	bcc.n 0x2d88c	@ 0002d888 00d3
.org 0x2d88a
	b.n 0x2dc04	@ 0002d88a bbe1
.org 0x2d88c
	ldr r1, [sp, #16]	@ 0002d88c 0499
.org 0x2d88e
	movs r0, #240	@ 0002d88e f020
.org 0x2d890
	lsls r0, r0, #1	@ 0002d890 4000
.org 0x2d892
	adds r1, r1, r0	@ 0002d892 0918
.org 0x2d894
	mov r8, r1	@ 0002d894 8846
.org 0x2d896
	add r8, r7	@ 0002d896 b844
.org 0x2d898
	mov r0, r8	@ 0002d898 4046
.org 0x2d89a
	ldr r1, [r0, #0]	@ 0002d89a 0168
.org 0x2d89c
	mov r0, sl	@ 0002d89c 5046
.org 0x2d89e
	subs r0, r0, r1	@ 0002d89e 401a
.org 0x2d8a0
	mov ip, r0	@ 0002d8a0 8446
.org 0x2d8a2
	movs r1, #237	@ 0002d8a2 ed21
.org 0x2d8a4
	lsls r1, r1, #1	@ 0002d8a4 4900
.org 0x2d8a6
	adds r0, r2, r1	@ 0002d8a6 5018
.org 0x2d8a8
	ldrh r0, [r0, #0]	@ 0002d8a8 0088
.org 0x2d8aa
	mov r2, ip	@ 0002d8aa 6246
.org 0x2d8ac
	adds r1, r2, r0	@ 0002d8ac 1118
.org 0x2d8ae
	lsls r0, r0, #1	@ 0002d8ae 4000
.org 0x2d8b0
	cmp r1, r0	@ 0002d8b0 8142
.org 0x2d8b2
	bcc.n 0x2d8b6	@ 0002d8b2 00d3
.org 0x2d8b4
	b.n 0x2dc04	@ 0002d8b4 a6e1
.org 0x2d8b6
	adds r0, r5, #0	@ 0002d8b6 281c
.org 0x2d8b8
	adds r1, r6, #0	@ 0002d8b8 311c
.org 0x2d8ba
	str r3, [sp, #20]	@ 0002d8ba 0593
.org 0x2d8bc
	bl 0x2e63c	@ 0002d8bc 00f0befe
.org 0x2d8c0
	ldr r1, [sp, #16]	@ 0002d8c0 0499
.org 0x2d8c2
	movs r2, #242	@ 0002d8c2 f222
.org 0x2d8c4
	lsls r2, r2, #1	@ 0002d8c4 5200
.org 0x2d8c6
	adds r0, r1, r2	@ 0002d8c6 8818
.org 0x2d8c8
	adds r0, r7, r0	@ 0002d8c8 3818
.org 0x2d8ca
	mov r1, r9	@ 0002d8ca 4946
.org 0x2d8cc
	ldr r2, [r1, #0]	@ 0002d8cc 0a68
.org 0x2d8ce
	ldr r0, [r0, #0]	@ 0002d8ce 0068
.org 0x2d8d0
	ldr r3, [sp, #20]	@ 0002d8d0 059b
.org 0x2d8d2
	cmp r2, r0	@ 0002d8d2 8242
.org 0x2d8d4
	bne.n 0x2d9b0	@ 0002d8d4 6cd1
.org 0x2d8d6
	ldr r1, [pc, #36]	@ 0002d8d6 0949
.org 0x2d8d8
	adds r0, r7, r1	@ 0002d8d8 7818
.org 0x2d8da
	mov r7, r8	@ 0002d8da 4746
.org 0x2d8dc
	ldr r1, [r7, #0]	@ 0002d8dc 3968
.org 0x2d8de
	ldr r0, [r0, #0]	@ 0002d8de 0068
.org 0x2d8e0
	cmp r1, r0	@ 0002d8e0 8142
.org 0x2d8e2
	bne.n 0x2d9b0	@ 0002d8e2 65d1
.org 0x2d8e4
	ldr r7, [r5, #84]	@ 0002d8e4 6f6d
.org 0x2d8e6
	cmp r2, r7	@ 0002d8e6 ba42
.org 0x2d8e8
	bge.n 0x2d900	@ 0002d8e8 0ada
.org 0x2d8ea
	ldrh r0, [r3, #0]	@ 0002d8ea 1888
.org 0x2d8ec
	adds r0, r2, r0	@ 0002d8ec 1018
.org 0x2d8ee
	ldr r1, [sp, #0]	@ 0002d8ee 0099
.org 0x2d8f0
	subs r0, r0, r1	@ 0002d8f0 401a
.org 0x2d8f2
	b.n 0x2d90a	@ 0002d8f2 0ae0
.org 0x2d8f4
	.byte 0xb0,0x0a,0x00,0x02	@ 0002d8f4 data
.org 0x2d8f8
	.byte 0x01,0x80,0x00,0x00	@ 0002d8f8 data
.org 0x2d8fc
	.byte 0x98,0x0c,0x00,0x02	@ 0002d8fc data
.org 0x2d900
	ldrh r0, [r3, #0]	@ 0002d900 1888
.org 0x2d902
	subs r0, r2, r0	@ 0002d902 101a
.org 0x2d904
	ldr r2, [sp, #0]	@ 0002d904 009a
.org 0x2d906
	subs r0, r0, r2	@ 0002d906 801a
.org 0x2d908
	subs r0, #1	@ 0002d908 0138
.org 0x2d90a
	str r0, [r4, #0]	@ 0002d90a 2060
.org 0x2d90c
	ldr r1, [r4, #0]	@ 0002d90c 2168
.org 0x2d90e
	cmp r1, #0	@ 0002d90e 0029
.org 0x2d910
	beq.n 0x2d934	@ 0002d910 10d0
.org 0x2d912
	adds r2, r1, #0	@ 0002d912 0a1c
.org 0x2d914
	cmp r1, #0	@ 0002d914 0029
.org 0x2d916
	bge.n 0x2d91a	@ 0002d916 00da
.org 0x2d918
	negs r2, r1	@ 0002d918 4a42
.org 0x2d91a
	ldr r0, [pc, #20]	@ 0002d91a 0548
.org 0x2d91c
	cmp r2, r0	@ 0002d91c 8242
.org 0x2d91e
	bgt.n 0x2d934	@ 0002d91e 09dc
.org 0x2d920
	ldr r3, [sp, #8]	@ 0002d920 029b
.org 0x2d922
	str r3, [sp, #4]	@ 0002d922 0193
.org 0x2d924
	adds r0, r7, r1	@ 0002d924 7818
.org 0x2d926
	str r0, [r5, #84]	@ 0002d926 6865
.org 0x2d928
	ldr r6, [sp, #0]	@ 0002d928 009e
.org 0x2d92a
	adds r6, r6, r1	@ 0002d92a 7618
.org 0x2d92c
	str r6, [sp, #0]	@ 0002d92c 0096
.org 0x2d92e
	b.n 0x2dbfc	@ 0002d92e 65e1
.org 0x2d930
	.byte 0xff,0x0f,0x00,0x00	@ 0002d930 data
.org 0x2d934
	movs r0, #0	@ 0002d934 0020
.org 0x2d936
	str r0, [r4, #0]	@ 0002d936 2060
.org 0x2d938
	ldr r0, [r5, #88]	@ 0002d938 a86d
.org 0x2d93a
	ldr r2, [pc, #48]	@ 0002d93a 0c4a
.org 0x2d93c
	adds r1, r0, r2	@ 0002d93c 8118
.org 0x2d93e
	adds r3, r0, #0	@ 0002d93e 031c
.org 0x2d940
	cmp sl, r1	@ 0002d940 8a45
.org 0x2d942
	ble.n 0x2d970	@ 0002d942 15dd
.org 0x2d944
	lsls r0, r6, #1	@ 0002d944 7000
.org 0x2d946
	adds r0, r0, r6	@ 0002d946 8019
.org 0x2d948
	lsls r0, r0, #3	@ 0002d948 c000
.org 0x2d94a
	ldr r6, [sp, #16]	@ 0002d94a 049e
.org 0x2d94c
	movs r7, #240	@ 0002d94c f027
.org 0x2d94e
	lsls r7, r7, #1	@ 0002d94e 7f00
.org 0x2d950
	adds r1, r6, r7	@ 0002d950 f119
.org 0x2d952
	adds r1, r0, r1	@ 0002d952 4118
.org 0x2d954
	adds r0, r0, r6	@ 0002d954 8019
.org 0x2d956
	movs r2, #237	@ 0002d956 ed22
.org 0x2d958
	lsls r2, r2, #1	@ 0002d958 5200
.org 0x2d95a
	adds r0, r0, r2	@ 0002d95a 8018
.org 0x2d95c
	ldrh r2, [r0, #0]	@ 0002d95c 0288
.org 0x2d95e
	ldr r0, [r1, #0]	@ 0002d95e 0868
.org 0x2d960
	subs r0, r0, r2	@ 0002d960 801a
.org 0x2d962
	mov r6, sl	@ 0002d962 5646
.org 0x2d964
	subs r0, r0, r6	@ 0002d964 801b
.org 0x2d966
	subs r0, #1	@ 0002d966 0138
.org 0x2d968
	b.n 0x2d992	@ 0002d968 13e0
.org 0x2d96a
	.byte 0x00	@ 0002d96a data
.org 0x2d96b
	.byte 0x00	@ 0002d96b data
.org 0x2d96c
	.byte 0x00,0xf0,0xff,0xff	@ 0002d96c data
.org 0x2d970
	lsls r0, r6, #1	@ 0002d970 7000
.org 0x2d972
	adds r0, r0, r6	@ 0002d972 8019
.org 0x2d974
	lsls r0, r0, #3	@ 0002d974 c000
.org 0x2d976
	ldr r7, [sp, #16]	@ 0002d976 049f
.org 0x2d978
	movs r2, #240	@ 0002d978 f022
.org 0x2d97a
	lsls r2, r2, #1	@ 0002d97a 5200
.org 0x2d97c
	adds r1, r7, r2	@ 0002d97c b918
.org 0x2d97e
	adds r1, r0, r1	@ 0002d97e 4118
.org 0x2d980
	adds r0, r0, r7	@ 0002d980 c019
.org 0x2d982
	movs r6, #237	@ 0002d982 ed26
.org 0x2d984
	lsls r6, r6, #1	@ 0002d984 7600
.org 0x2d986
	adds r0, r0, r6	@ 0002d986 8019
.org 0x2d988
	ldrh r2, [r0, #0]	@ 0002d988 0288
.org 0x2d98a
	ldr r0, [r1, #0]	@ 0002d98a 0868
.org 0x2d98c
	adds r0, r0, r2	@ 0002d98c 8018
.org 0x2d98e
	mov r7, sl	@ 0002d98e 5746
.org 0x2d990
	subs r0, r0, r7	@ 0002d990 c01b
.org 0x2d992
	str r0, [r4, #4]	@ 0002d992 6060
.org 0x2d994
	ldr r1, [r4, #4]	@ 0002d994 6168
.org 0x2d996
	cmp r1, #0	@ 0002d996 0029
.org 0x2d998
	bne.n 0x2d99c	@ 0002d998 00d1
.org 0x2d99a
	b.n 0x2dc04	@ 0002d99a 33e1
.org 0x2d99c
	ldr r0, [sp, #8]	@ 0002d99c 0298
.org 0x2d99e
	str r0, [sp, #4]	@ 0002d99e 0190
.org 0x2d9a0
	adds r0, r3, r1	@ 0002d9a0 5818
.org 0x2d9a2
	str r0, [r5, #88]	@ 0002d9a2 a865
.org 0x2d9a4
	add sl, r1	@ 0002d9a4 8a44
.org 0x2d9a6
	ldr r2, [pc, #4]	@ 0002d9a6 014a
.org 0x2d9a8
	adds r1, r5, r2	@ 0002d9a8 a918
.org 0x2d9aa
	b.n 0x2dc00	@ 0002d9aa 29e1
.org 0x2d9ac
	.byte 0xbb,0x01,0x00,0x00	@ 0002d9ac data
.org 0x2d9b0
	ldr r7, [pc, #136]	@ 0002d9b0 224f
.org 0x2d9b2
	lsls r0, r6, #1	@ 0002d9b2 7000
.org 0x2d9b4
	adds r0, r0, r6	@ 0002d9b4 8019
.org 0x2d9b6
	lsls r1, r0, #3	@ 0002d9b6 c100
.org 0x2d9b8
	movs r3, #238	@ 0002d9b8 ee23
.org 0x2d9ba
	lsls r3, r3, #1	@ 0002d9ba 5b00
.org 0x2d9bc
	adds r0, r7, r3	@ 0002d9bc f818
.org 0x2d9be
	adds r0, r1, r0	@ 0002d9be 0818
.org 0x2d9c0
	ldr r2, [r0, #0]	@ 0002d9c0 0268
.org 0x2d9c2
	ldr r6, [r5, #84]	@ 0002d9c2 6e6d
.org 0x2d9c4
	mov r8, r6	@ 0002d9c4 b046
.org 0x2d9c6
	cmp r2, r8	@ 0002d9c6 4245
.org 0x2d9c8
	blt.n 0x2d9cc	@ 0002d9c8 00db
.org 0x2d9ca
	b.n 0x2dacc	@ 0002d9ca 7fe0
.org 0x2d9cc
	adds r3, r1, r7	@ 0002d9cc cb19
.org 0x2d9ce
	movs r6, #236	@ 0002d9ce ec26
.org 0x2d9d0
	lsls r6, r6, #1	@ 0002d9d0 7600
.org 0x2d9d2
	adds r0, r3, r6	@ 0002d9d2 9819
.org 0x2d9d4
	ldrh r0, [r0, #0]	@ 0002d9d4 0088
.org 0x2d9d6
	adds r0, r2, r0	@ 0002d9d6 1018
.org 0x2d9d8
	ldr r6, [sp, #0]	@ 0002d9d8 009e
.org 0x2d9da
	subs r2, r0, r6	@ 0002d9da 821b
.org 0x2d9dc
	str r2, [r4, #0]	@ 0002d9dc 2260
.org 0x2d9de
	movs r6, #240	@ 0002d9de f026
.org 0x2d9e0
	lsls r6, r6, #1	@ 0002d9e0 7600
.org 0x2d9e2
	adds r0, r7, r6	@ 0002d9e2 b819
.org 0x2d9e4
	adds r0, r1, r0	@ 0002d9e4 0818
.org 0x2d9e6
	ldr r1, [r0, #0]	@ 0002d9e6 0168
.org 0x2d9e8
	cmp r1, sl	@ 0002d9e8 5145
.org 0x2d9ea
	bge.n 0x2da44	@ 0002d9ea 2bda
.org 0x2d9ec
	ldr r7, [pc, #80]	@ 0002d9ec 144f
.org 0x2d9ee
	adds r0, r5, r7	@ 0002d9ee e819
.org 0x2d9f0
	ldrb r6, [r0, #0]	@ 0002d9f0 0678
.org 0x2d9f2
	cmp r6, #0	@ 0002d9f2 002e
.org 0x2d9f4
	beq.n 0x2d9f8	@ 0002d9f4 00d0
.org 0x2d9f6
	b.n 0x2daf8	@ 0002d9f6 7fe0
.org 0x2d9f8
	movs r7, #237	@ 0002d9f8 ed27
.org 0x2d9fa
	lsls r7, r7, #1	@ 0002d9fa 7f00
.org 0x2d9fc
	adds r0, r3, r7	@ 0002d9fc d819
.org 0x2d9fe
	ldrh r0, [r0, #0]	@ 0002d9fe 0088
.org 0x2da00
	adds r0, r1, r0	@ 0002da00 0818
.org 0x2da02
	mov r1, sl	@ 0002da02 5146
.org 0x2da04
	subs r0, r0, r1	@ 0002da04 401a
.org 0x2da06
	str r0, [r4, #4]	@ 0002da06 6060
.org 0x2da08
	cmp r2, r0	@ 0002da08 8242
.org 0x2da0a
	blt.n 0x2da38	@ 0002da0a 15db
.org 0x2da0c
	ldr r1, [r5, #88]	@ 0002da0c a96d
.org 0x2da0e
	cmp r1, sl	@ 0002da0e 5145
.org 0x2da10
	beq.n 0x2da38	@ 0002da10 12d0
.org 0x2da12
	adds r1, r1, r0	@ 0002da12 0918
.org 0x2da14
	ldr r0, [sp, #0]	@ 0002da14 0098
.org 0x2da16
	bl 0x7d28	@ 0002da16 daf787f9
.org 0x2da1a
	lsls r0, r0, #16	@ 0002da1a 0004
.org 0x2da1c
	cmp r0, #0	@ 0002da1c 0028
.org 0x2da1e
	bne.n 0x2da38	@ 0002da1e 0bd1
.org 0x2da20
	ldr r2, [r5, #88]	@ 0002da20 aa6d
.org 0x2da22
	ldr r0, [r4, #4]	@ 0002da22 6068
.org 0x2da24
	adds r2, r2, r0	@ 0002da24 1218
.org 0x2da26
	adds r0, r5, #0	@ 0002da26 281c
.org 0x2da28
	ldr r1, [sp, #0]	@ 0002da28 0099
.org 0x2da2a
	bl 0x2e2d0	@ 0002da2a 00f051fc
.org 0x2da2e
	lsls r0, r0, #16	@ 0002da2e 0004
.org 0x2da30
	lsrs r0, r0, #16	@ 0002da30 000c
.org 0x2da32
	cmp r0, #0	@ 0002da32 0028
.org 0x2da34
	bne.n 0x2da38	@ 0002da34 00d1
.org 0x2da36
	b.n 0x2dbd4	@ 0002da36 cde0
.org 0x2da38
	str r6, [r4, #4]	@ 0002da38 6660
.org 0x2da3a
	b.n 0x2dbd6	@ 0002da3a cce0
.org 0x2da3c
	.byte 0xb0,0x0a,0x00,0x02	@ 0002da3c data
.org 0x2da40
	.byte 0xb9,0x01,0x00,0x00	@ 0002da40 data
.org 0x2da44
	movs r6, #237	@ 0002da44 ed26
.org 0x2da46
	lsls r6, r6, #1	@ 0002da46 7600
.org 0x2da48
	adds r0, r3, r6	@ 0002da48 9819
.org 0x2da4a
	ldrh r0, [r0, #0]	@ 0002da4a 0088
.org 0x2da4c
	subs r0, r1, r0	@ 0002da4c 081a
.org 0x2da4e
	mov r7, sl	@ 0002da4e 5746
.org 0x2da50
	subs r1, r0, r7	@ 0002da50 c11b
.org 0x2da52
	subs r0, r1, #1	@ 0002da52 481e
.org 0x2da54
	str r0, [r4, #4]	@ 0002da54 6060
.org 0x2da56
	cmn r2, r0	@ 0002da56 c242
.org 0x2da58
	bge.n 0x2da86	@ 0002da58 15da
.org 0x2da5a
	mov r1, r8	@ 0002da5a 4146
.org 0x2da5c
	adds r0, r1, r2	@ 0002da5c 8818
.org 0x2da5e
	ldr r1, [r5, #88]	@ 0002da5e a96d
.org 0x2da60
	bl 0x7d28	@ 0002da60 daf762f9
.org 0x2da64
	lsls r0, r0, #16	@ 0002da64 0004
.org 0x2da66
	cmp r0, #0	@ 0002da66 0028
.org 0x2da68
	bne.n 0x2da80	@ 0002da68 0ad1
.org 0x2da6a
	ldr r1, [r5, #84]	@ 0002da6a 696d
.org 0x2da6c
	ldr r0, [r4, #0]	@ 0002da6c 2068
.org 0x2da6e
	adds r1, r1, r0	@ 0002da6e 0918
.org 0x2da70
	ldr r2, [r5, #88]	@ 0002da70 aa6d
.org 0x2da72
	adds r0, r5, #0	@ 0002da72 281c
.org 0x2da74
	bl 0x2e2d0	@ 0002da74 00f02cfc
.org 0x2da78
	lsls r0, r0, #16	@ 0002da78 0004
.org 0x2da7a
	lsrs r0, r0, #16	@ 0002da7a 000c
.org 0x2da7c
	cmp r0, #0	@ 0002da7c 0028
.org 0x2da7e
	beq.n 0x2dafa	@ 0002da7e 3cd0
.org 0x2da80
	movs r2, #0	@ 0002da80 0022
.org 0x2da82
	str r2, [r4, #0]	@ 0002da82 2260
.org 0x2da84
	b.n 0x2dbd6	@ 0002da84 a7e0
.org 0x2da86
	ldr r2, [r5, #88]	@ 0002da86 aa6d
.org 0x2da88
	ldr r3, [pc, #52]	@ 0002da88 0d4b
.org 0x2da8a
	adds r0, r2, r3	@ 0002da8a d018
.org 0x2da8c
	cmp r0, sl	@ 0002da8c 5045
.org 0x2da8e
	bgt.n 0x2daf8	@ 0002da8e 33dc
.org 0x2da90
	ldr r6, [pc, #48]	@ 0002da90 0c4e
.org 0x2da92
	adds r1, r1, r6	@ 0002da92 8919
.org 0x2da94
	adds r1, r2, r1	@ 0002da94 5118
.org 0x2da96
	ldr r0, [sp, #0]	@ 0002da96 0098
.org 0x2da98
	bl 0x7d28	@ 0002da98 daf746f9
.org 0x2da9c
	lsls r0, r0, #16	@ 0002da9c 0004
.org 0x2da9e
	cmp r0, #0	@ 0002da9e 0028
.org 0x2daa0
	bne.n 0x2daf8	@ 0002daa0 2ad1
.org 0x2daa2
	ldr r0, [r4, #4]	@ 0002daa2 6068
.org 0x2daa4
	ldr r7, [pc, #32]	@ 0002daa4 084f
.org 0x2daa6
	adds r0, r0, r7	@ 0002daa6 c019
.org 0x2daa8
	ldr r2, [r5, #88]	@ 0002daa8 aa6d
.org 0x2daaa
	adds r2, r2, r0	@ 0002daaa 1218
.org 0x2daac
	adds r0, r5, #0	@ 0002daac 281c
.org 0x2daae
	ldr r1, [sp, #0]	@ 0002daae 0099
.org 0x2dab0
	bl 0x2e2d0	@ 0002dab0 00f00efc
.org 0x2dab4
	lsls r0, r0, #16	@ 0002dab4 0004
.org 0x2dab6
	lsrs r0, r0, #16	@ 0002dab6 000c
.org 0x2dab8
	cmp r0, #0	@ 0002dab8 0028
.org 0x2daba
	bne.n 0x2daf8	@ 0002daba 1dd1
.org 0x2dabc
	b.n 0x2dbd4	@ 0002dabc 8ae0
.org 0x2dabe
	.byte 0x00	@ 0002dabe data
.org 0x2dabf
	.byte 0x00	@ 0002dabf data
.org 0x2dac0
	.byte 0x00,0xf6,0xff,0xff	@ 0002dac0 data
.org 0x2dac4
	.byte 0xff,0xe1,0xff,0xff	@ 0002dac4 data
.org 0x2dac8
	.byte 0x00,0xe2,0xff,0xff	@ 0002dac8 data
.org 0x2dacc
	adds r3, r1, r7	@ 0002dacc cb19
.org 0x2dace
	movs r6, #236	@ 0002dace ec26
.org 0x2dad0
	lsls r6, r6, #1	@ 0002dad0 7600
.org 0x2dad2
	adds r0, r3, r6	@ 0002dad2 9819
.org 0x2dad4
	ldrh r0, [r0, #0]	@ 0002dad4 0088
.org 0x2dad6
	subs r0, r2, r0	@ 0002dad6 101a
.org 0x2dad8
	ldr r2, [sp, #0]	@ 0002dad8 009a
.org 0x2dada
	subs r0, r0, r2	@ 0002dada 801a
.org 0x2dadc
	subs r6, r0, #1	@ 0002dadc 461e
.org 0x2dade
	str r6, [r4, #0]	@ 0002dade 2660
.org 0x2dae0
	movs r2, #240	@ 0002dae0 f022
.org 0x2dae2
	lsls r2, r2, #1	@ 0002dae2 5200
.org 0x2dae4
	adds r0, r7, r2	@ 0002dae4 b818
.org 0x2dae6
	adds r0, r1, r0	@ 0002dae6 0818
.org 0x2dae8
	ldr r1, [r0, #0]	@ 0002dae8 0168
.org 0x2daea
	cmp r1, sl	@ 0002daea 5145
.org 0x2daec
	bge.n 0x2db48	@ 0002daec 2cda
.org 0x2daee
	ldr r7, [pc, #16]	@ 0002daee 044f
.org 0x2daf0
	adds r0, r5, r7	@ 0002daf0 e819
.org 0x2daf2
	ldrb r7, [r0, #0]	@ 0002daf2 0778
.org 0x2daf4
	cmp r7, #0	@ 0002daf4 002f
.org 0x2daf6
	beq.n 0x2db04	@ 0002daf6 05d0
.org 0x2daf8
	movs r0, #0	@ 0002daf8 0020
.org 0x2dafa
	str r0, [r4, #4]	@ 0002dafa 6060
.org 0x2dafc
	b.n 0x2dbd6	@ 0002dafc 6be0
.org 0x2dafe
	.byte 0x00	@ 0002dafe data
.org 0x2daff
	.byte 0x00	@ 0002daff data
.org 0x2db00
	.byte 0xb9,0x01,0x00,0x00	@ 0002db00 data
.org 0x2db04
	movs r2, #237	@ 0002db04 ed22
.org 0x2db06
	lsls r2, r2, #1	@ 0002db06 5200
.org 0x2db08
	adds r0, r3, r2	@ 0002db08 9818
.org 0x2db0a
	ldrh r0, [r0, #0]	@ 0002db0a 0088
.org 0x2db0c
	adds r0, r1, r0	@ 0002db0c 0818
.org 0x2db0e
	mov r3, sl	@ 0002db0e 5346
.org 0x2db10
	subs r2, r0, r3	@ 0002db10 c21a
.org 0x2db12
	str r2, [r4, #4]	@ 0002db12 6260
.org 0x2db14
	negs r0, r6	@ 0002db14 7042
.org 0x2db16
	cmp r0, r2	@ 0002db16 9042
.org 0x2db18
	blt.n 0x2db44	@ 0002db18 14db
.org 0x2db1a
	ldr r1, [r5, #88]	@ 0002db1a a96d
.org 0x2db1c
	cmp r1, sl	@ 0002db1c 5145
.org 0x2db1e
	beq.n 0x2db44	@ 0002db1e 11d0
.org 0x2db20
	adds r1, r1, r2	@ 0002db20 8918
.org 0x2db22
	ldr r0, [sp, #0]	@ 0002db22 0098
.org 0x2db24
	bl 0x7d28	@ 0002db24 daf700f9
.org 0x2db28
	lsls r0, r0, #16	@ 0002db28 0004
.org 0x2db2a
	cmp r0, #0	@ 0002db2a 0028
.org 0x2db2c
	bne.n 0x2db44	@ 0002db2c 0ad1
.org 0x2db2e
	ldr r2, [r5, #88]	@ 0002db2e aa6d
.org 0x2db30
	ldr r0, [r4, #4]	@ 0002db30 6068
.org 0x2db32
	adds r2, r2, r0	@ 0002db32 1218
.org 0x2db34
	adds r0, r5, #0	@ 0002db34 281c
.org 0x2db36
	ldr r1, [sp, #0]	@ 0002db36 0099
.org 0x2db38
	bl 0x2e2d0	@ 0002db38 00f0cafb
.org 0x2db3c
	lsls r0, r0, #16	@ 0002db3c 0004
.org 0x2db3e
	lsrs r0, r0, #16	@ 0002db3e 000c
.org 0x2db40
	cmp r0, #0	@ 0002db40 0028
.org 0x2db42
	beq.n 0x2dbd4	@ 0002db42 47d0
.org 0x2db44
	str r7, [r4, #4]	@ 0002db44 6760
.org 0x2db46
	b.n 0x2dbd6	@ 0002db46 46e0
.org 0x2db48
	movs r7, #237	@ 0002db48 ed27
.org 0x2db4a
	lsls r7, r7, #1	@ 0002db4a 7f00
.org 0x2db4c
	adds r0, r3, r7	@ 0002db4c d819
.org 0x2db4e
	ldrh r0, [r0, #0]	@ 0002db4e 0088
.org 0x2db50
	subs r0, r1, r0	@ 0002db50 081a
.org 0x2db52
	mov r1, sl	@ 0002db52 5146
.org 0x2db54
	subs r3, r0, r1	@ 0002db54 431a
.org 0x2db56
	subs r1, r3, #1	@ 0002db56 591e
.org 0x2db58
	str r1, [r4, #4]	@ 0002db58 6160
.org 0x2db5a
	negs r0, r6	@ 0002db5a 7042
.org 0x2db5c
	cmn r0, r1	@ 0002db5c c842
.org 0x2db5e
	bge.n 0x2db8c	@ 0002db5e 15da
.org 0x2db60
	mov r2, r8	@ 0002db60 4246
.org 0x2db62
	adds r0, r2, r6	@ 0002db62 9019
.org 0x2db64
	ldr r1, [r5, #88]	@ 0002db64 a96d
.org 0x2db66
	bl 0x7d28	@ 0002db66 daf7dff8
.org 0x2db6a
	lsls r0, r0, #16	@ 0002db6a 0004
.org 0x2db6c
	cmp r0, #0	@ 0002db6c 0028
.org 0x2db6e
	bne.n 0x2db86	@ 0002db6e 0ad1
.org 0x2db70
	ldr r1, [r5, #84]	@ 0002db70 696d
.org 0x2db72
	ldr r0, [r4, #0]	@ 0002db72 2068
.org 0x2db74
	adds r1, r1, r0	@ 0002db74 0918
.org 0x2db76
	ldr r2, [r5, #88]	@ 0002db76 aa6d
.org 0x2db78
	adds r0, r5, #0	@ 0002db78 281c
.org 0x2db7a
	bl 0x2e2d0	@ 0002db7a 00f0a9fb
.org 0x2db7e
	lsls r0, r0, #16	@ 0002db7e 0004
.org 0x2db80
	lsrs r0, r0, #16	@ 0002db80 000c
.org 0x2db82
	cmp r0, #0	@ 0002db82 0028
.org 0x2db84
	beq.n 0x2dafa	@ 0002db84 b9d0
.org 0x2db86
	movs r3, #0	@ 0002db86 0023
.org 0x2db88
	str r3, [r4, #0]	@ 0002db88 2360
.org 0x2db8a
	b.n 0x2dbd6	@ 0002db8a 24e0
.org 0x2db8c
	ldr r2, [r5, #88]	@ 0002db8c aa6d
.org 0x2db8e
	ldr r6, [pc, #56]	@ 0002db8e 0e4e
.org 0x2db90
	adds r0, r2, r6	@ 0002db90 9019
.org 0x2db92
	cmp r0, sl	@ 0002db92 5045
.org 0x2db94
	bgt.n 0x2dbc2	@ 0002db94 15dc
.org 0x2db96
	ldr r7, [pc, #52]	@ 0002db96 0d4f
.org 0x2db98
	adds r1, r3, r7	@ 0002db98 d919
.org 0x2db9a
	adds r1, r2, r1	@ 0002db9a 5118
.org 0x2db9c
	ldr r0, [sp, #0]	@ 0002db9c 0098
.org 0x2db9e
	bl 0x7d28	@ 0002db9e daf7c3f8
.org 0x2dba2
	lsls r0, r0, #16	@ 0002dba2 0004
.org 0x2dba4
	cmp r0, #0	@ 0002dba4 0028
.org 0x2dba6
	bne.n 0x2dbc2	@ 0002dba6 0cd1
.org 0x2dba8
	ldr r0, [r4, #4]	@ 0002dba8 6068
.org 0x2dbaa
	ldr r1, [pc, #36]	@ 0002dbaa 0949
.org 0x2dbac
	adds r0, r0, r1	@ 0002dbac 4018
.org 0x2dbae
	ldr r2, [r5, #88]	@ 0002dbae aa6d
.org 0x2dbb0
	adds r2, r2, r0	@ 0002dbb0 1218
.org 0x2dbb2
	adds r0, r5, #0	@ 0002dbb2 281c
.org 0x2dbb4
	ldr r1, [sp, #0]	@ 0002dbb4 0099
.org 0x2dbb6
	bl 0x2e2d0	@ 0002dbb6 00f08bfb
.org 0x2dbba
	lsls r0, r0, #16	@ 0002dbba 0004
.org 0x2dbbc
	lsrs r0, r0, #16	@ 0002dbbc 000c
.org 0x2dbbe
	cmp r0, #0	@ 0002dbbe 0028
.org 0x2dbc0
	beq.n 0x2dbd4	@ 0002dbc0 08d0
.org 0x2dbc2
	movs r2, #0	@ 0002dbc2 0022
.org 0x2dbc4
	str r2, [r4, #4]	@ 0002dbc4 6260
.org 0x2dbc6
	b.n 0x2dbd6	@ 0002dbc6 06e0
.org 0x2dbc8
	.byte 0x00,0xf6,0xff,0xff	@ 0002dbc8 data
.org 0x2dbcc
	.byte 0xff,0xe1,0xff,0xff	@ 0002dbcc data
.org 0x2dbd0
	.byte 0x00,0xe2,0xff,0xff	@ 0002dbd0 data
.org 0x2dbd4
	str r0, [r4, #0]	@ 0002dbd4 2060
.org 0x2dbd6
	ldr r1, [r4, #0]	@ 0002dbd6 2168
.org 0x2dbd8
	cmp r1, #0	@ 0002dbd8 0029
.org 0x2dbda
	bne.n 0x2dbec	@ 0002dbda 07d1
.org 0x2dbdc
	ldr r1, [r4, #4]	@ 0002dbdc 6168
.org 0x2dbde
	cmp r1, #0	@ 0002dbde 0029
.org 0x2dbe0
	beq.n 0x2dc04	@ 0002dbe0 10d0
.org 0x2dbe2
	ldr r0, [r5, #88]	@ 0002dbe2 a86d
.org 0x2dbe4
	adds r0, r0, r1	@ 0002dbe4 4018
.org 0x2dbe6
	str r0, [r5, #88]	@ 0002dbe6 a865
.org 0x2dbe8
	add sl, r1	@ 0002dbe8 8a44
.org 0x2dbea
	b.n 0x2dbf8	@ 0002dbea 05e0
.org 0x2dbec
	ldr r0, [r5, #84]	@ 0002dbec 686d
