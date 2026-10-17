@ FUN_0808b930  entry 0x0808b930  size 272
.thumb
.org 0x8b930
FUN_0808b930:
	push {r4, r5, r6, r7, lr}	@ 0008b930 f0b5
.org 0x8b932
	sub sp, #8	@ 0008b932 82b0
.org 0x8b934
	adds r7, r0, #0	@ 0008b934 071c
.org 0x8b936
	ldrb r0, [r7, #10]	@ 0008b936 b87a
.org 0x8b938
	lsrs r5, r0, #4	@ 0008b938 0509
.org 0x8b93a
	movs r0, #1	@ 0008b93a 0120
.org 0x8b93c
	ands r5, r0	@ 0008b93c 0540
.org 0x8b93e
	ldrb r4, [r7, #15]	@ 0008b93e fc7b
.org 0x8b940
	cmp r4, #0	@ 0008b940 002c
.org 0x8b942
	bne.n 0x8b996	@ 0008b942 28d1
.org 0x8b944
	ldr r0, [r7, #84]	@ 0008b944 786d
.org 0x8b946
	str r0, [sp, #0]	@ 0008b946 0090
.org 0x8b948
	ldr r0, [r7, #88]	@ 0008b948 b86d
.org 0x8b94a
	ldr r1, [pc, #244]	@ 0008b94a 3d49
.org 0x8b94c
	adds r0, r0, r1	@ 0008b94c 4018
.org 0x8b94e
	str r0, [sp, #4]	@ 0008b94e 0190
.org 0x8b950
	movs r2, #128	@ 0008b950 8022
.org 0x8b952
	lsls r2, r2, #2	@ 0008b952 9200
.org 0x8b954
	adds r0, r7, #0	@ 0008b954 381c
.org 0x8b956
	adds r0, #189	@ 0008b956 bd30
.org 0x8b958
	ldrb r3, [r0, #0]	@ 0008b958 0378
.org 0x8b95a
	movs r0, #0	@ 0008b95a 0020
.org 0x8b95c
	mov r1, sp	@ 0008b95c 6946
.org 0x8b95e
	bl 0xd0dc4	@ 0008b95e 45f031fa
.org 0x8b962
	adds r0, r7, #0	@ 0008b962 381c
.org 0x8b964
	adds r0, #84	@ 0008b964 5430
.org 0x8b966
	movs r1, #0	@ 0008b966 0021
.org 0x8b968
	adds r2, r5, #0	@ 0008b968 2a1c
.org 0x8b96a
	bl 0xd9990	@ 0008b96a 4ef011f8
.org 0x8b96e
	adds r0, r7, #0	@ 0008b96e 381c
.org 0x8b970
	adds r0, #140	@ 0008b970 8c30
.org 0x8b972
	str r4, [r0, #0]	@ 0008b972 0460
.org 0x8b974
	adds r0, #4	@ 0008b974 0430
.org 0x8b976
	str r4, [r0, #0]	@ 0008b976 0460
.org 0x8b978
	adds r0, #4	@ 0008b978 0430
.org 0x8b97a
	strb r4, [r0, #0]	@ 0008b97a 0470
.org 0x8b97c
	ldrb r1, [r7, #10]	@ 0008b97c b97a
.org 0x8b97e
	movs r0, #251	@ 0008b97e fb20
.org 0x8b980
	ands r0, r1	@ 0008b980 0840
.org 0x8b982
	strb r0, [r7, #10]	@ 0008b982 b872
.org 0x8b984
	ldr r1, [pc, #188]	@ 0008b984 2f49
.org 0x8b986
	adds r0, r7, #0	@ 0008b986 381c
.org 0x8b988
	bl 0x1cf00	@ 0008b988 91f7bafa
.org 0x8b98c
	movs r0, #16	@ 0008b98c 1020
.org 0x8b98e
	strb r0, [r7, #18]	@ 0008b98e b874
.org 0x8b990
	ldrb r0, [r7, #15]	@ 0008b990 f87b
.org 0x8b992
	adds r0, #1	@ 0008b992 0130
.org 0x8b994
	strb r0, [r7, #15]	@ 0008b994 f873
.org 0x8b996
	adds r0, r7, #0	@ 0008b996 381c
.org 0x8b998
	bl 0x1cff0	@ 0008b998 91f72afb
.org 0x8b99c
	ldrb r0, [r7, #18]	@ 0008b99c b87c
.org 0x8b99e
	subs r0, #1	@ 0008b99e 0138
.org 0x8b9a0
	strb r0, [r7, #18]	@ 0008b9a0 b874
.org 0x8b9a2
	lsls r0, r0, #24	@ 0008b9a2 0006
.org 0x8b9a4
	cmp r0, #0	@ 0008b9a4 0028
.org 0x8b9a6
	bne.n 0x8ba38	@ 0008b9a6 47d1
.org 0x8b9a8
	movs r0, #42	@ 0008b9a8 2a20
.org 0x8b9aa
	bl 0x2b10	@ 0008b9aa 77f7b1f8
.org 0x8b9ae
	ldrb r1, [r7, #10]	@ 0008b9ae b97a
.org 0x8b9b0
	movs r0, #254	@ 0008b9b0 fe20
.org 0x8b9b2
	ands r0, r1	@ 0008b9b2 0840
.org 0x8b9b4
	strb r0, [r7, #10]	@ 0008b9b4 b872
.org 0x8b9b6
	ldr r6, [pc, #144]	@ 0008b9b6 244e
.org 0x8b9b8
	ldr r0, [r6, #0]	@ 0008b9b8 3068
.org 0x8b9ba
	ldr r5, [pc, #144]	@ 0008b9ba 244d
.org 0x8b9bc
	muls r0, r5	@ 0008b9bc 6843
.org 0x8b9be
	ldr r2, [pc, #144]	@ 0008b9be 244a
.org 0x8b9c0
	adds r0, r0, r2	@ 0008b9c0 8018
.org 0x8b9c2
	lsls r0, r0, #1	@ 0008b9c2 4000
.org 0x8b9c4
	lsrs r4, r0, #1	@ 0008b9c4 4408
.org 0x8b9c6
	lsrs r0, r0, #17	@ 0008b9c6 400c
.org 0x8b9c8
	movs r3, #7	@ 0008b9c8 0723
.org 0x8b9ca
	ands r0, r3	@ 0008b9ca 1840
.org 0x8b9cc
	subs r0, #3	@ 0008b9cc 0338
.org 0x8b9ce
	lsls r0, r0, #8	@ 0008b9ce 0002
.org 0x8b9d0
	ldr r1, [r7, #84]	@ 0008b9d0 796d
.org 0x8b9d2
	adds r1, r1, r0	@ 0008b9d2 0918
.org 0x8b9d4
	str r1, [sp, #0]	@ 0008b9d4 0091
.org 0x8b9d6
	adds r0, r4, #0	@ 0008b9d6 201c
.org 0x8b9d8
	muls r0, r5	@ 0008b9d8 6843
.org 0x8b9da
	adds r0, r0, r2	@ 0008b9da 8018
.org 0x8b9dc
	lsls r0, r0, #1	@ 0008b9dc 4000
.org 0x8b9de
	lsrs r1, r0, #1	@ 0008b9de 4108
.org 0x8b9e0
	str r1, [r6, #0]	@ 0008b9e0 3160
.org 0x8b9e2
	lsrs r0, r0, #17	@ 0008b9e2 400c
.org 0x8b9e4
	ands r0, r3	@ 0008b9e4 1840
.org 0x8b9e6
	subs r0, #3	@ 0008b9e6 0338
.org 0x8b9e8
	lsls r0, r0, #8	@ 0008b9e8 0002
.org 0x8b9ea
	ldr r1, [r7, #88]	@ 0008b9ea b96d
.org 0x8b9ec
	adds r1, r1, r0	@ 0008b9ec 0918
.org 0x8b9ee
	ldr r0, [pc, #80]	@ 0008b9ee 1448
.org 0x8b9f0
	adds r1, r1, r0	@ 0008b9f0 0918
.org 0x8b9f2
	str r1, [sp, #4]	@ 0008b9f2 0191
.org 0x8b9f4
	movs r0, #1	@ 0008b9f4 0120
.org 0x8b9f6
	mov r1, sp	@ 0008b9f6 6946
.org 0x8b9f8
	bl 0xd0c88	@ 0008b9f8 45f046f9
.org 0x8b9fc
	adds r0, r7, #0	@ 0008b9fc 381c
.org 0x8b9fe
	bl 0x8bdac	@ 0008b9fe 00f0d5f9
.org 0x8ba02
	adds r4, r7, #0	@ 0008ba02 3c1c
.org 0x8ba04
	adds r4, #84	@ 0008ba04 5434
.org 0x8ba06
	movs r0, #3	@ 0008ba06 0320
.org 0x8ba08
	movs r1, #9	@ 0008ba08 0921
.org 0x8ba0a
	adds r2, r4, #0	@ 0008ba0a 221c
.org 0x8ba0c
	bl 0x2ab88	@ 0008ba0c 9ff7bcf8
.org 0x8ba10
	ldr r2, [pc, #64]	@ 0008ba10 104a
.org 0x8ba12
	ldrh r1, [r2, #12]	@ 0008ba12 9189
.org 0x8ba14
	ldr r0, [pc, #64]	@ 0008ba14 1048
.org 0x8ba16
	cmp r1, r0	@ 0008ba16 8142
.org 0x8ba18
	bhi.n 0x8ba1e	@ 0008ba18 01d8
.org 0x8ba1a
	adds r0, r1, #1	@ 0008ba1a 481c
.org 0x8ba1c
	strh r0, [r2, #12]	@ 0008ba1c 9081
.org 0x8ba1e
	adds r0, r7, #0	@ 0008ba1e 381c
.org 0x8ba20
	adds r1, r4, #0	@ 0008ba20 211c
.org 0x8ba22
	bl 0x2abe0	@ 0008ba22 9ff7ddf8
.org 0x8ba26
	ldr r1, [pc, #52]	@ 0008ba26 0d49
.org 0x8ba28
	ldrb r0, [r7, #9]	@ 0008ba28 787a
.org 0x8ba2a
	lsls r0, r0, #2	@ 0008ba2a 8000
.org 0x8ba2c
	adds r0, r0, r1	@ 0008ba2c 4018
.org 0x8ba2e
	movs r1, #4	@ 0008ba2e 0421
.org 0x8ba30
	str r1, [r7, #12]	@ 0008ba30 f960
.org 0x8ba32
	ldr r0, [r0, #0]	@ 0008ba32 0068
.org 0x8ba34
	ldr r0, [r0, #16]	@ 0008ba34 0069
.org 0x8ba36
	str r0, [r7, #20]	@ 0008ba36 7861
.org 0x8ba38
	add sp, #8	@ 0008ba38 02b0
.org 0x8ba3a
	pop {r4, r5, r6, r7}	@ 0008ba3a f0bc
.org 0x8ba3c
	pop {r0}	@ 0008ba3c 01bc
.org 0x8ba3e
	bx r0	@ 0008ba3e 0047
