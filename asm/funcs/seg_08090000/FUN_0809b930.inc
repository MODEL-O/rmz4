@ FUN_0809b930  entry 0x0809b930  size 208
.thumb
.org 0x9b930
FUN_0809b930:
	push {r4, r5, r6, r7, lr}	@ 0009b930 f0b5
.org 0x9b932
	mov r7, sl	@ 0009b932 5746
.org 0x9b934
	mov r6, r9	@ 0009b934 4e46
.org 0x9b936
	mov r5, r8	@ 0009b936 4546
.org 0x9b938
	push {r5, r6, r7}	@ 0009b938 e0b4
.org 0x9b93a
	sub sp, #12	@ 0009b93a 83b0
.org 0x9b93c
	adds r6, r0, #0	@ 0009b93c 061c
.org 0x9b93e
	ldr r1, [pc, #192]	@ 0009b93e 3049
.org 0x9b940
	mov r0, sp	@ 0009b940 6846
.org 0x9b942
	movs r2, #8	@ 0009b942 0822
.org 0x9b944
	bl 0x129258	@ 0009b944 8df088fc
.org 0x9b948
	ldrb r0, [r6, #10]	@ 0009b948 b07a
.org 0x9b94a
	lsrs r0, r0, #4	@ 0009b94a 0009
.org 0x9b94c
	mov r9, r0	@ 0009b94c 8146
.org 0x9b94e
	movs r0, #1	@ 0009b94e 0120
.org 0x9b950
	mov r1, r9	@ 0009b950 4946
.org 0x9b952
	ands r1, r0	@ 0009b952 0140
.org 0x9b954
	mov r9, r1	@ 0009b954 8946
.org 0x9b956
	ldrb r0, [r6, #15]	@ 0009b956 f07b
.org 0x9b958
	cmp r0, #0	@ 0009b958 0028
.org 0x9b95a
	bne.n 0x9b9ce	@ 0009b95a 38d1
.org 0x9b95c
	lsls r0, r1, #1	@ 0009b95c 4800
.org 0x9b95e
	subs r0, #1	@ 0009b95e 0138
.org 0x9b960
	str r0, [sp, #8]	@ 0009b960 0290
.org 0x9b962
	movs r0, #0	@ 0009b962 0020
.org 0x9b964
	movs r2, #182	@ 0009b964 b622
.org 0x9b966
	adds r2, r2, r6	@ 0009b966 9219
.org 0x9b968
	mov r8, r2	@ 0009b968 9046
.org 0x9b96a
	lsls r5, r0, #6	@ 0009b96a 8501
.org 0x9b96c
	movs r7, #0	@ 0009b96c 0027
.org 0x9b96e
	adds r0, #1	@ 0009b96e 0130
.org 0x9b970
	mov sl, r0	@ 0009b970 8246
.org 0x9b972
	mov r4, sp	@ 0009b972 6c46
.org 0x9b974
	ldr r0, [pc, #140]	@ 0009b974 2348
.org 0x9b976
	ldr r1, [r0, #0]	@ 0009b976 0168
.org 0x9b978
	ldr r0, [pc, #140]	@ 0009b978 2348
.org 0x9b97a
	muls r0, r1	@ 0009b97a 4843
.org 0x9b97c
	ldr r1, [pc, #140]	@ 0009b97c 2349
.org 0x9b97e
	adds r0, r0, r1	@ 0009b97e 4018
.org 0x9b980
	lsls r0, r0, #1	@ 0009b980 4000
.org 0x9b982
	lsrs r1, r0, #1	@ 0009b982 4108
.org 0x9b984
	ldr r2, [pc, #124]	@ 0009b984 1f4a
.org 0x9b986
	str r1, [r2, #0]	@ 0009b986 1160
.org 0x9b988
	lsrs r0, r0, #17	@ 0009b988 400c
.org 0x9b98a
	movs r1, #7	@ 0009b98a 0721
.org 0x9b98c
	ands r0, r1	@ 0009b98c 0840
.org 0x9b98e
	adds r0, #15	@ 0009b98e 0f30
.org 0x9b990
	ldr r1, [sp, #8]	@ 0009b990 0299
.org 0x9b992
	muls r0, r1	@ 0009b992 4843
.org 0x9b994
	adds r5, r5, r0	@ 0009b994 2d18
.org 0x9b996
	movs r2, #0	@ 0009b996 0022
.org 0x9b998
	ldrsh r1, [r4, r2]	@ 0009b998 a15e
.org 0x9b99a
	lsls r2, r5, #24	@ 0009b99a 2a06
.org 0x9b99c
	lsrs r2, r2, #24	@ 0009b99c 120e
.org 0x9b99e
	adds r0, r6, #0	@ 0009b99e 301c
.org 0x9b9a0
	mov r3, r9	@ 0009b9a0 4b46
.org 0x9b9a2
	bl 0xde9ac	@ 0009b9a2 43f003f8
.org 0x9b9a6
	cmp r0, #0	@ 0009b9a6 0028
.org 0x9b9a8
	beq.n 0x9b9ba	@ 0009b9a8 07d0
.org 0x9b9aa
	mov r1, r8	@ 0009b9aa 4146
.org 0x9b9ac
	ldrb r0, [r1, #0]	@ 0009b9ac 0878
.org 0x9b9ae
	adds r0, #1	@ 0009b9ae 0130
.org 0x9b9b0
	strb r0, [r1, #0]	@ 0009b9b0 0870
.org 0x9b9b2
	adds r4, #2	@ 0009b9b2 0234
.org 0x9b9b4
	adds r7, #1	@ 0009b9b4 0137
.org 0x9b9b6
	cmp r7, #3	@ 0009b9b6 032f
.org 0x9b9b8
	ble.n 0x9b974	@ 0009b9b8 dcdd
.org 0x9b9ba
	mov r0, sl	@ 0009b9ba 5046
.org 0x9b9bc
	cmp r0, #3	@ 0009b9bc 0328
.org 0x9b9be
	ble.n 0x9b96a	@ 0009b9be d4dd
.org 0x9b9c0
	ldrb r0, [r6, #10]	@ 0009b9c0 b07a
.org 0x9b9c2
	movs r1, #254	@ 0009b9c2 fe21
.org 0x9b9c4
	ands r1, r0	@ 0009b9c4 0140
.org 0x9b9c6
	strb r1, [r6, #10]	@ 0009b9c6 b172
.org 0x9b9c8
	ldrb r0, [r6, #15]	@ 0009b9c8 f07b
.org 0x9b9ca
	adds r0, #1	@ 0009b9ca 0130
.org 0x9b9cc
	strb r0, [r6, #15]	@ 0009b9cc f073
.org 0x9b9ce
	adds r0, r6, #0	@ 0009b9ce 301c
.org 0x9b9d0
	adds r0, #182	@ 0009b9d0 b630
.org 0x9b9d2
	ldrb r0, [r0, #0]	@ 0009b9d2 0078
.org 0x9b9d4
	cmp r0, #0	@ 0009b9d4 0028
.org 0x9b9d6
	bne.n 0x9b9f0	@ 0009b9d6 0bd1
.org 0x9b9d8
	ldr r1, [pc, #52]	@ 0009b9d8 0d49
.org 0x9b9da
	ldrb r0, [r6, #9]	@ 0009b9da 707a
.org 0x9b9dc
	lsls r0, r0, #2	@ 0009b9dc 8000
.org 0x9b9de
	adds r0, r0, r1	@ 0009b9de 4018
.org 0x9b9e0
	movs r1, #2	@ 0009b9e0 0221
.org 0x9b9e2
	str r1, [r6, #12]	@ 0009b9e2 f160
.org 0x9b9e4
	ldr r0, [r0, #0]	@ 0009b9e4 0068
.org 0x9b9e6
	ldr r0, [r0, #8]	@ 0009b9e6 8068
.org 0x9b9e8
	str r0, [r6, #20]	@ 0009b9e8 7061
.org 0x9b9ea
	adds r0, r6, #0	@ 0009b9ea 301c
.org 0x9b9ec
	bl 0x9ba14	@ 0009b9ec 00f012f8
.org 0x9b9f0
	add sp, #12	@ 0009b9f0 03b0
.org 0x9b9f2
	pop {r3, r4, r5}	@ 0009b9f2 38bc
.org 0x9b9f4
	mov r8, r3	@ 0009b9f4 9846
.org 0x9b9f6
	mov r9, r4	@ 0009b9f6 a146
.org 0x9b9f8
	mov sl, r5	@ 0009b9f8 aa46
.org 0x9b9fa
	pop {r4, r5, r6, r7}	@ 0009b9fa f0bc
.org 0x9b9fc
	pop {r0}	@ 0009b9fc 01bc
.org 0x9b9fe
	bx r0	@ 0009b9fe 0047
