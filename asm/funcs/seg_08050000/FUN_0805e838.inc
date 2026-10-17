@ FUN_0805e838  entry 0x0805e838  size 418
.thumb
.org 0x5e838
FUN_0805e838:
	push {r4, r5, r6, r7, lr}	@ 0005e838 f0b5
.org 0x5e83a
	mov r7, r8	@ 0005e83a 4746
.org 0x5e83c
	push {r7}	@ 0005e83c 80b4
.org 0x5e83e
	sub sp, #16	@ 0005e83e 84b0
.org 0x5e840
	adds r5, r0, #0	@ 0005e840 051c
.org 0x5e842
	ldr r0, [pc, #172]	@ 0005e842 2b48
.org 0x5e844
	ldr r7, [r0, #0]	@ 0005e844 0768
.org 0x5e846
	ldrb r0, [r5, #10]	@ 0005e846 a87a
.org 0x5e848
	lsrs r6, r0, #4	@ 0005e848 0609
.org 0x5e84a
	movs r0, #1	@ 0005e84a 0120
.org 0x5e84c
	ands r6, r0	@ 0005e84c 0640
.org 0x5e84e
	ldrb r4, [r5, #15]	@ 0005e84e ec7b
.org 0x5e850
	cmp r4, #0	@ 0005e850 002c
.org 0x5e852
	bne.n 0x5e888	@ 0005e852 19d1
.org 0x5e854
	adds r0, r5, #0	@ 0005e854 281c
.org 0x5e856
	movs r1, #49	@ 0005e856 3121
.org 0x5e858
	bl 0x5ee6c	@ 0005e858 00f008fb
.org 0x5e85c
	movs r0, #160	@ 0005e85c a020
.org 0x5e85e
	lsls r0, r0, #2	@ 0005e85e 8000
.org 0x5e860
	str r0, [r5, #96]	@ 0005e860 2866
.org 0x5e862
	movs r0, #32	@ 0005e862 2020
.org 0x5e864
	str r0, [r5, #104]	@ 0005e864 a866
.org 0x5e866
	movs r2, #0	@ 0005e866 0022
.org 0x5e868
	adds r0, r5, #0	@ 0005e868 281c
.org 0x5e86a
	adds r0, #180	@ 0005e86a b430
.org 0x5e86c
	ldr r0, [r0, #0]	@ 0005e86c 0068
.org 0x5e86e
	ldr r1, [pc, #132]	@ 0005e86e 2149
.org 0x5e870
	adds r0, r0, r1	@ 0005e870 4018
.org 0x5e872
	ldr r1, [r5, #88]	@ 0005e872 a96d
.org 0x5e874
	cmp r1, r0	@ 0005e874 8142
.org 0x5e876
	blt.n 0x5e87a	@ 0005e876 00db
.org 0x5e878
	movs r2, #1	@ 0005e878 0122
.org 0x5e87a
	str r2, [r5, #92]	@ 0005e87a ea65
.org 0x5e87c
	str r1, [r5, #100]	@ 0005e87c 6966
.org 0x5e87e
	strb r4, [r5, #18]	@ 0005e87e ac74
.org 0x5e880
	strb r4, [r5, #19]	@ 0005e880 ec74
.org 0x5e882
	ldrb r0, [r5, #15]	@ 0005e882 e87b
.org 0x5e884
	adds r0, #1	@ 0005e884 0130
.org 0x5e886
	strb r0, [r5, #15]	@ 0005e886 e873
.org 0x5e888
	adds r0, r5, #0	@ 0005e888 281c
.org 0x5e88a
	bl 0x1cff0	@ 0005e88a bef7b1fb
.org 0x5e88e
	adds r0, r5, #0	@ 0005e88e 281c
.org 0x5e890
	adds r0, #116	@ 0005e890 7430
.org 0x5e892
	ldr r4, [pc, #100]	@ 0005e892 194c
.org 0x5e894
	ldr r3, [pc, #100]	@ 0005e894 194b
.org 0x5e896
	adds r1, r5, #0	@ 0005e896 291c
.org 0x5e898
	adds r1, #184	@ 0005e898 b831
.org 0x5e89a
	ldrb r2, [r1, #0]	@ 0005e89a 0a78
.org 0x5e89c
	lsls r1, r2, #1	@ 0005e89c 5100
.org 0x5e89e
	adds r1, r1, r3	@ 0005e89e c918
.org 0x5e8a0
	ldrh r1, [r1, #0]	@ 0005e8a0 0988
.org 0x5e8a2
	lsls r1, r1, #2	@ 0005e8a2 8900
.org 0x5e8a4
	adds r1, r1, r4	@ 0005e8a4 0919
.org 0x5e8a6
	adds r3, r5, #0	@ 0005e8a6 2b1c
.org 0x5e8a8
	adds r3, #113	@ 0005e8a8 7133
.org 0x5e8aa
	movs r4, #0	@ 0005e8aa 0024
.org 0x5e8ac
	ldrsb r4, [r3, r4]	@ 0005e8ac 1c57
.org 0x5e8ae
	ldr r1, [r1, #0]	@ 0005e8ae 0968
.org 0x5e8b0
	lsls r3, r4, #2	@ 0005e8b0 a300
.org 0x5e8b2
	adds r3, r3, r1	@ 0005e8b2 5b18
.org 0x5e8b4
	ldr r1, [pc, #72]	@ 0005e8b4 1249
.org 0x5e8b6
	lsls r2, r2, #2	@ 0005e8b6 9200
.org 0x5e8b8
	adds r2, r2, r1	@ 0005e8b8 5218
.org 0x5e8ba
	ldr r1, [r2, #0]	@ 0005e8ba 1168
.org 0x5e8bc
	adds r1, r1, r4	@ 0005e8bc 0919
.org 0x5e8be
	ldrb r1, [r1, #0]	@ 0005e8be 0978
.org 0x5e8c0
	lsls r2, r1, #1	@ 0005e8c0 4a00
.org 0x5e8c2
	adds r2, r2, r1	@ 0005e8c2 5218
.org 0x5e8c4
	lsls r2, r2, #3	@ 0005e8c4 d200
.org 0x5e8c6
	ldr r1, [r3, #0]	@ 0005e8c6 1968
.org 0x5e8c8
	adds r1, r1, r2	@ 0005e8c8 8918
.org 0x5e8ca
	bl 0x5784	@ 0005e8ca a6f75bff
.org 0x5e8ce
	ldrb r0, [r5, #18]	@ 0005e8ce a87c
.org 0x5e8d0
	adds r0, #1	@ 0005e8d0 0130
.org 0x5e8d2
	movs r3, #0	@ 0005e8d2 0023
.org 0x5e8d4
	strb r0, [r5, #18]	@ 0005e8d4 a874
.org 0x5e8d6
	adds r0, r5, #0	@ 0005e8d6 281c
.org 0x5e8d8
	adds r0, #204	@ 0005e8d8 cc30
.org 0x5e8da
	ldr r1, [r0, #0]	@ 0005e8da 0168
.org 0x5e8dc
	mov r8, r0	@ 0005e8dc 8046
.org 0x5e8de
	cmp r1, #0	@ 0005e8de 0029
.org 0x5e8e0
	beq.n 0x5e978	@ 0005e8e0 4ad0
.org 0x5e8e2
	ldrb r0, [r1, #12]	@ 0005e8e2 087b
.org 0x5e8e4
	cmp r0, #2	@ 0005e8e4 0228
.org 0x5e8e6
	bls.n 0x5e904	@ 0005e8e6 0dd9
.org 0x5e8e8
	mov r0, r8	@ 0005e8e8 4046
.org 0x5e8ea
	str r3, [r0, #0]	@ 0005e8ea 0360
.org 0x5e8ec
	b.n 0x5e978	@ 0005e8ec 44e0
.org 0x5e8ee
	.byte 0x00	@ 0005e8ee data
.org 0x5e8ef
	.byte 0x00	@ 0005e8ef data
.org 0x5e8f0
	.byte 0xf0,0xdb,0x02,0x02	@ 0005e8f0 data
.org 0x5e8f4
	.byte 0x00,0xb0,0xff,0xff	@ 0005e8f4 data
.org 0x5e8f8
	.byte 0xa8,0xa7,0x85,0x08	@ 0005e8f8 data
.org 0x5e8fc
	.byte 0x10,0xa9,0x85,0x08	@ 0005e8fc data
.org 0x5e900
	.byte 0x44,0xa8,0x85,0x08	@ 0005e900 data
.org 0x5e904
	lsls r0, r6, #1	@ 0005e904 7000
.org 0x5e906
	subs r4, r0, #1	@ 0005e906 441e
.org 0x5e908
	lsls r0, r4, #1	@ 0005e908 6000
.org 0x5e90a
	adds r0, r0, r4	@ 0005e90a 0019
.org 0x5e90c
	lsls r2, r0, #7	@ 0005e90c c201
.org 0x5e90e
	str r2, [sp, #0]	@ 0005e90e 0092
.org 0x5e910
	str r3, [sp, #4]	@ 0005e910 0193
.org 0x5e912
	cmp r7, #0	@ 0005e912 002f
.org 0x5e914
	beq.n 0x5e92e	@ 0005e914 0bd0
.org 0x5e916
	ldr r0, [pc, #168]	@ 0005e916 2a48
.org 0x5e918
	ldrh r1, [r0, #8]	@ 0005e918 0189
.org 0x5e91a
	movs r0, #8	@ 0005e91a 0820
.org 0x5e91c
	ands r0, r1	@ 0005e91c 0840
.org 0x5e91e
	cmp r0, #0	@ 0005e91e 0028
.org 0x5e920
	bne.n 0x5e92e	@ 0005e920 05d1
.org 0x5e922
	movs r0, #222	@ 0005e922 de20
.org 0x5e924
	lsls r0, r0, #1	@ 0005e924 4000
.org 0x5e926
	adds r1, r7, r0	@ 0005e926 3918
.org 0x5e928
	ldr r0, [r1, #0]	@ 0005e928 0868
.org 0x5e92a
	adds r0, r0, r2	@ 0005e92a 8018
.org 0x5e92c
	str r0, [r1, #0]	@ 0005e92c 0860
.org 0x5e92e
	ldrb r0, [r5, #18]	@ 0005e92e a87c
.org 0x5e930
	movs r1, #15	@ 0005e930 0f21
.org 0x5e932
	bl 0x129198	@ 0005e932 caf031fc
.org 0x5e936
	lsls r0, r0, #24	@ 0005e936 0006
.org 0x5e938
	cmp r0, #0	@ 0005e938 0028
.org 0x5e93a
	bne.n 0x5e978	@ 0005e93a 1dd1
.org 0x5e93c
	lsls r0, r4, #15	@ 0005e93c e003
.org 0x5e93e
	ldr r2, [r5, #84]	@ 0005e93e 6a6d
.org 0x5e940
	adds r2, r2, r0	@ 0005e940 1218
.org 0x5e942
	ldr r3, [pc, #128]	@ 0005e942 204b
.org 0x5e944
	ldr r1, [r3, #0]	@ 0005e944 1968
.org 0x5e946
	ldr r0, [pc, #128]	@ 0005e946 2048
.org 0x5e948
	muls r1, r0	@ 0005e948 4143
.org 0x5e94a
	ldr r0, [pc, #128]	@ 0005e94a 2048
.org 0x5e94c
	adds r1, r1, r0	@ 0005e94c 0918
.org 0x5e94e
	lsls r1, r1, #1	@ 0005e94e 4900
.org 0x5e950
	lsrs r0, r1, #1	@ 0005e950 4808
.org 0x5e952
	str r0, [r3, #0]	@ 0005e952 1860
.org 0x5e954
	lsrs r1, r1, #17	@ 0005e954 490c
.org 0x5e956
	movs r0, #127	@ 0005e956 7f20
.org 0x5e958
	ands r1, r0	@ 0005e958 0140
.org 0x5e95a
	movs r0, #64	@ 0005e95a 4020
.org 0x5e95c
	subs r0, r0, r1	@ 0005e95c 401a
.org 0x5e95e
	lsls r0, r0, #8	@ 0005e95e 0002
.org 0x5e960
	adds r2, r2, r0	@ 0005e960 1218
.org 0x5e962
	str r2, [sp, #8]	@ 0005e962 0292
.org 0x5e964
	adds r0, r5, #0	@ 0005e964 281c
.org 0x5e966
	adds r0, #180	@ 0005e966 b430
.org 0x5e968
	ldr r1, [r0, #0]	@ 0005e968 0168
.org 0x5e96a
	add r0, sp, #8	@ 0005e96a 02a8
.org 0x5e96c
	str r1, [r0, #4]	@ 0005e96c 4160
.org 0x5e96e
	mov r1, sp	@ 0005e96e 6946
.org 0x5e970
	movs r2, #0	@ 0005e970 0022
.org 0x5e972
	movs r3, #0	@ 0005e972 0023
.org 0x5e974
	bl 0xde31c	@ 0005e974 7ff0d2fc
.org 0x5e978
	ldr r2, [r5, #88]	@ 0005e978 aa6d
.org 0x5e97a
	ldr r6, [r5, #92]	@ 0005e97a ee6d
.org 0x5e97c
	adds r1, r2, r6	@ 0005e97c 9119
.org 0x5e97e
	ldr r0, [r5, #100]	@ 0005e97e 686e
.org 0x5e980
	subs r0, r0, r1	@ 0005e980 401a
.org 0x5e982
	movs r3, #1	@ 0005e982 0123
.org 0x5e984
	lsrs r0, r0, #31	@ 0005e984 c00f
.org 0x5e986
	ldrb r1, [r5, #19]	@ 0005e986 e97c
.org 0x5e988
	adds r4, r0, r1	@ 0005e988 4418
.org 0x5e98a
	ands r4, r3	@ 0005e98a 1c40
.org 0x5e98c
	lsls r0, r4, #1	@ 0005e98c 6000
.org 0x5e98e
	subs r0, #1	@ 0005e98e 0138
.org 0x5e990
	ldr r3, [r5, #96]	@ 0005e990 2b6e
.org 0x5e992
	muls r0, r3	@ 0005e992 5843
.org 0x5e994
	adds r2, r2, r0	@ 0005e994 1218
.org 0x5e996
	str r2, [r5, #88]	@ 0005e996 aa65
.org 0x5e998
	lsls r1, r1, #24	@ 0005e998 0906
.org 0x5e99a
	cmp r1, #0	@ 0005e99a 0029
.org 0x5e99c
	beq.n 0x5e9dc	@ 0005e99c 1ed0
.org 0x5e99e
	ldr r0, [r5, #104]	@ 0005e99e a86e
.org 0x5e9a0
	adds r0, r3, r0	@ 0005e9a0 1818
.org 0x5e9a2
	str r0, [r5, #96]	@ 0005e9a2 2866
.org 0x5e9a4
	movs r1, #160	@ 0005e9a4 a021
.org 0x5e9a6
	lsls r1, r1, #2	@ 0005e9a6 8900
.org 0x5e9a8
	cmp r0, r1	@ 0005e9a8 8842
.org 0x5e9aa
	ble.n 0x5e9f4	@ 0005e9aa 23dd
.org 0x5e9ac
	cmp r4, #0	@ 0005e9ac 002c
.org 0x5e9ae
	beq.n 0x5e9d0	@ 0005e9ae 0fd0
.org 0x5e9b0
	mov r1, r8	@ 0005e9b0 4146
.org 0x5e9b2
	ldr r0, [r1, #0]	@ 0005e9b2 0868
.org 0x5e9b4
	cmp r0, #0	@ 0005e9b4 0028
.org 0x5e9b6
	bne.n 0x5e9d0	@ 0005e9b6 0bd1
.org 0x5e9b8
	strb r0, [r5, #13]	@ 0005e9b8 6873
.org 0x5e9ba
	strb r0, [r5, #14]	@ 0005e9ba a873
.org 0x5e9bc
	strb r0, [r5, #15]	@ 0005e9bc e873
.org 0x5e9be
	b.n 0x5e9f4	@ 0005e9be 19e0
.org 0x5e9c0
	.byte 0x10,0xe9,0x02,0x02	@ 0005e9c0 data
.org 0x5e9c4
	.byte 0x38,0xdc,0x02,0x02	@ 0005e9c4 data
.org 0x5e9c8
	.byte 0xfd,0x43,0x03,0x00	@ 0005e9c8 data
.org 0x5e9cc
	.byte 0xc3,0x9e,0x26,0x00	@ 0005e9cc data
.org 0x5e9d0
	movs r0, #160	@ 0005e9d0 a020
.org 0x5e9d2
	lsls r0, r0, #2	@ 0005e9d2 8000
.org 0x5e9d4
	str r0, [r5, #96]	@ 0005e9d4 2866
.org 0x5e9d6
	movs r0, #0	@ 0005e9d6 0020
.org 0x5e9d8
	strb r0, [r5, #19]	@ 0005e9d8 e874
