@ FUN_0805c8dc  entry 0x0805c8dc  size 284
.thumb
.org 0x5c8dc
FUN_0805c8dc:
	push {r4, r5, lr}	@ 0005c8dc 30b5
.org 0x5c8de
	sub sp, #8	@ 0005c8de 82b0
.org 0x5c8e0
	adds r5, r0, #0	@ 0005c8e0 051c
.org 0x5c8e2
	ldr r1, [pc, #232]	@ 0005c8e2 3a49
.org 0x5c8e4
	mov r0, sp	@ 0005c8e4 6846
.org 0x5c8e6
	movs r2, #6	@ 0005c8e6 0622
.org 0x5c8e8
	bl 0x129258	@ 0005c8e8 ccf0b6fc
.org 0x5c8ec
	ldrb r0, [r5, #16]	@ 0005c8ec 287c
.org 0x5c8ee
	ldrb r4, [r5, #15]	@ 0005c8ee ec7b
.org 0x5c8f0
	cmp r4, #0	@ 0005c8f0 002c
.org 0x5c8f2
	bne.n 0x5c92e	@ 0005c8f2 1cd1
.org 0x5c8f4
	lsls r0, r0, #1	@ 0005c8f4 4000
.org 0x5c8f6
	add r0, sp	@ 0005c8f6 6844
.org 0x5c8f8
	ldrb r1, [r0, #0]	@ 0005c8f8 0178
.org 0x5c8fa
	adds r0, r5, #0	@ 0005c8fa 281c
.org 0x5c8fc
	bl 0x5ee6c	@ 0005c8fc 02f0b6fa
.org 0x5c900
	movs r0, #160	@ 0005c900 a020
.org 0x5c902
	lsls r0, r0, #2	@ 0005c902 8000
.org 0x5c904
	str r0, [r5, #96]	@ 0005c904 2866
.org 0x5c906
	movs r0, #32	@ 0005c906 2020
.org 0x5c908
	str r0, [r5, #104]	@ 0005c908 a866
.org 0x5c90a
	movs r2, #0	@ 0005c90a 0022
.org 0x5c90c
	adds r0, r5, #0	@ 0005c90c 281c
.org 0x5c90e
	adds r0, #180	@ 0005c90e b430
.org 0x5c910
	ldr r0, [r0, #0]	@ 0005c910 0068
.org 0x5c912
	ldr r1, [pc, #188]	@ 0005c912 2f49
.org 0x5c914
	adds r0, r0, r1	@ 0005c914 4018
.org 0x5c916
	ldr r1, [r5, #88]	@ 0005c916 a96d
.org 0x5c918
	cmp r1, r0	@ 0005c918 8142
.org 0x5c91a
	blt.n 0x5c91e	@ 0005c91a 00db
.org 0x5c91c
	movs r2, #1	@ 0005c91c 0122
.org 0x5c91e
	str r2, [r5, #92]	@ 0005c91e ea65
.org 0x5c920
	str r1, [r5, #100]	@ 0005c920 6966
.org 0x5c922
	movs r0, #80	@ 0005c922 5020
.org 0x5c924
	strb r0, [r5, #18]	@ 0005c924 a874
.org 0x5c926
	strb r4, [r5, #19]	@ 0005c926 ec74
.org 0x5c928
	ldrb r0, [r5, #15]	@ 0005c928 e87b
.org 0x5c92a
	adds r0, #1	@ 0005c92a 0130
.org 0x5c92c
	strb r0, [r5, #15]	@ 0005c92c e873
.org 0x5c92e
	adds r0, r5, #0	@ 0005c92e 281c
.org 0x5c930
	bl 0x1cff0	@ 0005c930 c0f75efb
.org 0x5c934
	adds r0, r5, #0	@ 0005c934 281c
.org 0x5c936
	adds r0, #116	@ 0005c936 7430
.org 0x5c938
	ldr r4, [pc, #152]	@ 0005c938 264c
.org 0x5c93a
	ldr r3, [pc, #156]	@ 0005c93a 274b
.org 0x5c93c
	adds r1, r5, #0	@ 0005c93c 291c
.org 0x5c93e
	adds r1, #184	@ 0005c93e b831
.org 0x5c940
	ldrb r2, [r1, #0]	@ 0005c940 0a78
.org 0x5c942
	lsls r1, r2, #1	@ 0005c942 5100
.org 0x5c944
	adds r1, r1, r3	@ 0005c944 c918
.org 0x5c946
	ldrh r1, [r1, #0]	@ 0005c946 0988
.org 0x5c948
	lsls r1, r1, #2	@ 0005c948 8900
.org 0x5c94a
	adds r1, r1, r4	@ 0005c94a 0919
.org 0x5c94c
	adds r3, r5, #0	@ 0005c94c 2b1c
.org 0x5c94e
	adds r3, #113	@ 0005c94e 7133
.org 0x5c950
	movs r4, #0	@ 0005c950 0024
.org 0x5c952
	ldrsb r4, [r3, r4]	@ 0005c952 1c57
.org 0x5c954
	ldr r1, [r1, #0]	@ 0005c954 0968
.org 0x5c956
	lsls r3, r4, #2	@ 0005c956 a300
.org 0x5c958
	adds r3, r3, r1	@ 0005c958 5b18
.org 0x5c95a
	ldr r1, [pc, #128]	@ 0005c95a 2049
.org 0x5c95c
	lsls r2, r2, #2	@ 0005c95c 9200
.org 0x5c95e
	adds r2, r2, r1	@ 0005c95e 5218
.org 0x5c960
	ldr r1, [r2, #0]	@ 0005c960 1168
.org 0x5c962
	adds r1, r1, r4	@ 0005c962 0919
.org 0x5c964
	ldrb r1, [r1, #0]	@ 0005c964 0978
.org 0x5c966
	lsls r2, r1, #1	@ 0005c966 4a00
.org 0x5c968
	adds r2, r2, r1	@ 0005c968 5218
.org 0x5c96a
	lsls r2, r2, #3	@ 0005c96a d200
.org 0x5c96c
	ldr r1, [r3, #0]	@ 0005c96c 1968
.org 0x5c96e
	adds r1, r1, r2	@ 0005c96e 8918
.org 0x5c970
	bl 0x5784	@ 0005c970 a8f708ff
.org 0x5c974
	ldrb r0, [r5, #18]	@ 0005c974 a87c
.org 0x5c976
	cmp r0, #0	@ 0005c976 0028
.org 0x5c978
	beq.n 0x5c97e	@ 0005c978 01d0
.org 0x5c97a
	subs r0, #1	@ 0005c97a 0138
.org 0x5c97c
	strb r0, [r5, #18]	@ 0005c97c a874
.org 0x5c97e
	ldr r2, [r5, #88]	@ 0005c97e aa6d
.org 0x5c980
	ldr r4, [r5, #92]	@ 0005c980 ec6d
.org 0x5c982
	adds r1, r2, r4	@ 0005c982 1119
.org 0x5c984
	ldr r0, [r5, #100]	@ 0005c984 686e
.org 0x5c986
	subs r0, r0, r1	@ 0005c986 401a
.org 0x5c988
	movs r3, #1	@ 0005c988 0123
.org 0x5c98a
	lsrs r0, r0, #31	@ 0005c98a c00f
.org 0x5c98c
	ldrb r1, [r5, #19]	@ 0005c98c e97c
.org 0x5c98e
	adds r0, r0, r1	@ 0005c98e 4018
.org 0x5c990
	ands r0, r3	@ 0005c990 1840
.org 0x5c992
	lsls r0, r0, #1	@ 0005c992 4000
.org 0x5c994
	subs r0, #1	@ 0005c994 0138
.org 0x5c996
	ldr r3, [r5, #96]	@ 0005c996 2b6e
.org 0x5c998
	muls r0, r3	@ 0005c998 5843
.org 0x5c99a
	adds r2, r2, r0	@ 0005c99a 1218
.org 0x5c99c
	str r2, [r5, #88]	@ 0005c99c aa65
.org 0x5c99e
	lsls r1, r1, #24	@ 0005c99e 0906
.org 0x5c9a0
	cmp r1, #0	@ 0005c9a0 0029
.org 0x5c9a2
	beq.n 0x5c9f0	@ 0005c9a2 25d0
.org 0x5c9a4
	ldr r0, [r5, #104]	@ 0005c9a4 a86e
.org 0x5c9a6
	adds r0, r3, r0	@ 0005c9a6 1818
.org 0x5c9a8
	str r0, [r5, #96]	@ 0005c9a8 2866
.org 0x5c9aa
	movs r1, #160	@ 0005c9aa a021
.org 0x5c9ac
	lsls r1, r1, #2	@ 0005c9ac 8900
.org 0x5c9ae
	cmp r0, r1	@ 0005c9ae 8842
.org 0x5c9b0
	ble.n 0x5ca08	@ 0005c9b0 2add
.org 0x5c9b2
	ldr r0, [pc, #44]	@ 0005c9b2 0b48
.org 0x5c9b4
	ldrb r1, [r0, #18]	@ 0005c9b4 817c
.org 0x5c9b6
	movs r0, #1	@ 0005c9b6 0120
.org 0x5c9b8
	ands r0, r1	@ 0005c9b8 0840
.org 0x5c9ba
	cmp r0, #0	@ 0005c9ba 0028
.org 0x5c9bc
	bne.n 0x5c9e4	@ 0005c9bc 12d1
.org 0x5c9be
	ldrb r0, [r5, #18]	@ 0005c9be a87c
.org 0x5c9c0
	cmp r0, #0	@ 0005c9c0 0028
.org 0x5c9c2
	bne.n 0x5c9e4	@ 0005c9c2 0fd1
.org 0x5c9c4
	adds r0, r5, #0	@ 0005c9c4 281c
.org 0x5c9c6
	bl 0x5ef70	@ 0005c9c6 02f0d3fa
.org 0x5c9ca
	b.n 0x5ca08	@ 0005c9ca 1de0
.org 0x5c9cc
	.byte 0x2c,0x97,0x12,0x08	@ 0005c9cc data
.org 0x5c9d0
	.byte 0x00,0xb0,0xff,0xff	@ 0005c9d0 data
.org 0x5c9d4
	.byte 0xa8,0xa7,0x85,0x08	@ 0005c9d4 data
.org 0x5c9d8
	.byte 0x10,0xa9,0x85,0x08	@ 0005c9d8 data
.org 0x5c9dc
	.byte 0x44,0xa8,0x85,0x08	@ 0005c9dc data
.org 0x5c9e0
	.byte 0x10,0xe9,0x02,0x02	@ 0005c9e0 data
.org 0x5c9e4
	movs r0, #160	@ 0005c9e4 a020
.org 0x5c9e6
	lsls r0, r0, #2	@ 0005c9e6 8000
.org 0x5c9e8
	str r0, [r5, #96]	@ 0005c9e8 2866
.org 0x5c9ea
	movs r0, #0	@ 0005c9ea 0020
.org 0x5c9ec
	strb r0, [r5, #19]	@ 0005c9ec e874
.org 0x5c9ee
	b.n 0x5ca08	@ 0005c9ee 0be0
.org 0x5c9f0
	ldr r0, [r5, #104]	@ 0005c9f0 a86e
.org 0x5c9f2
	subs r0, r3, r0	@ 0005c9f2 181a
.org 0x5c9f4
	str r0, [r5, #96]	@ 0005c9f4 2866
.org 0x5c9f6
	cmp r0, #31	@ 0005c9f6 1f28
