@ FUN_0808d92c  entry 0x0808d92c  size 328
.thumb
.org 0x8d92c
FUN_0808d92c:
	push {r4, r5, r6, r7, lr}	@ 0008d92c f0b5
.org 0x8d92e
	mov r7, sl	@ 0008d92e 5746
.org 0x8d930
	mov r6, r9	@ 0008d930 4e46
.org 0x8d932
	mov r5, r8	@ 0008d932 4546
.org 0x8d934
	push {r5, r6, r7}	@ 0008d934 e0b4
.org 0x8d936
	sub sp, #12	@ 0008d936 83b0
.org 0x8d938
	adds r7, r0, #0	@ 0008d938 071c
.org 0x8d93a
	adds r0, #140	@ 0008d93a 8c30
.org 0x8d93c
	movs r1, #0	@ 0008d93c 0021
.org 0x8d93e
	str r1, [r0, #0]	@ 0008d93e 0160
.org 0x8d940
	adds r0, #4	@ 0008d940 0430
.org 0x8d942
	str r1, [r0, #0]	@ 0008d942 0160
.org 0x8d944
	adds r0, #4	@ 0008d944 0430
.org 0x8d946
	strb r1, [r0, #0]	@ 0008d946 0170
.org 0x8d948
	ldrb r2, [r7, #10]	@ 0008d948 ba7a
.org 0x8d94a
	movs r0, #251	@ 0008d94a fb20
.org 0x8d94c
	ands r0, r2	@ 0008d94c 1040
.org 0x8d94e
	strb r0, [r7, #10]	@ 0008d94e b872
.org 0x8d950
	str r1, [r7, #92]	@ 0008d950 f965
.org 0x8d952
	ldr r0, [r7, #84]	@ 0008d952 786d
.org 0x8d954
	str r0, [sp, #4]	@ 0008d954 0190
.org 0x8d956
	ldr r0, [r7, #88]	@ 0008d956 b86d
.org 0x8d958
	ldr r1, [pc, #280]	@ 0008d958 4649
.org 0x8d95a
	adds r0, r0, r1	@ 0008d95a 4018
.org 0x8d95c
	str r0, [sp, #8]	@ 0008d95c 0290
.org 0x8d95e
	movs r0, #1	@ 0008d95e 0120
.org 0x8d960
	add r1, sp, #4	@ 0008d960 01a9
.org 0x8d962
	bl 0xd0c88	@ 0008d962 43f091f9
.org 0x8d966
	movs r0, #180	@ 0008d966 b420
.org 0x8d968
	adds r0, r0, r7	@ 0008d968 c019
.org 0x8d96a
	mov r8, r0	@ 0008d96a 8046
.org 0x8d96c
	movs r0, #42	@ 0008d96c 2a20
.org 0x8d96e
	bl 0x2b10	@ 0008d96e 75f7cff8
.org 0x8d972
	movs r0, #3	@ 0008d972 0320
.org 0x8d974
	movs r1, #48	@ 0008d974 3021
.org 0x8d976
	add r2, sp, #4	@ 0008d976 01aa
.org 0x8d978
	bl 0x2ab88	@ 0008d978 9df706f9
.org 0x8d97c
	ldr r6, [pc, #248]	@ 0008d97c 3e4e
.org 0x8d97e
	ldr r0, [r6, #0]	@ 0008d97e 3068
.org 0x8d980
	ldr r1, [pc, #248]	@ 0008d980 3e49
.org 0x8d982
	adds r4, r0, #0	@ 0008d982 041c
.org 0x8d984
	muls r4, r1	@ 0008d984 4c43
.org 0x8d986
	ldr r0, [pc, #248]	@ 0008d986 3e48
.org 0x8d988
	adds r4, r4, r0	@ 0008d988 2418
.org 0x8d98a
	lsls r4, r4, #1	@ 0008d98a 6400
.org 0x8d98c
	lsrs r0, r4, #1	@ 0008d98c 6008
.org 0x8d98e
	str r0, [r6, #0]	@ 0008d98e 3060
.org 0x8d990
	lsrs r4, r4, #17	@ 0008d990 640c
.org 0x8d992
	movs r1, #3	@ 0008d992 0321
.org 0x8d994
	mov sl, r1	@ 0008d994 8a46
.org 0x8d996
	ands r4, r1	@ 0008d996 0c40
.org 0x8d998
	mov r0, r8	@ 0008d998 4046
.org 0x8d99a
	ldr r1, [r0, #0]	@ 0008d99a 0168
.org 0x8d99c
	lsrs r1, r1, #31	@ 0008d99c c90f
.org 0x8d99e
	movs r5, #1	@ 0008d99e 0125
.org 0x8d9a0
	str r5, [sp, #0]	@ 0008d9a0 0095
.org 0x8d9a2
	add r0, sp, #4	@ 0008d9a2 01a8
.org 0x8d9a4
	ldr r2, [pc, #220]	@ 0008d9a4 374a
.org 0x8d9a6
	adds r3, r4, #0	@ 0008d9a6 231c
.org 0x8d9a8
	bl 0xd9fbc	@ 0008d9a8 4cf008fb
.org 0x8d9ac
	mov r0, r8	@ 0008d9ac 4046
.org 0x8d9ae
	ldr r1, [r0, #0]	@ 0008d9ae 0168
.org 0x8d9b0
	lsrs r1, r1, #31	@ 0008d9b0 c90f
.org 0x8d9b2
	str r5, [sp, #0]	@ 0008d9b2 0095
.org 0x8d9b4
	add r0, sp, #4	@ 0008d9b4 01a8
.org 0x8d9b6
	ldr r2, [pc, #208]	@ 0008d9b6 344a
.org 0x8d9b8
	adds r3, r4, #0	@ 0008d9b8 231c
.org 0x8d9ba
	bl 0xd9fbc	@ 0008d9ba 4cf0fffa
.org 0x8d9be
	mov r0, r8	@ 0008d9be 4046
.org 0x8d9c0
	ldr r1, [r0, #0]	@ 0008d9c0 0168
.org 0x8d9c2
	lsrs r1, r1, #31	@ 0008d9c2 c90f
.org 0x8d9c4
	ldr r0, [pc, #196]	@ 0008d9c4 3148
.org 0x8d9c6
	mov r9, r0	@ 0008d9c6 8146
.org 0x8d9c8
	str r5, [sp, #0]	@ 0008d9c8 0095
.org 0x8d9ca
	add r0, sp, #4	@ 0008d9ca 01a8
.org 0x8d9cc
	mov r2, r9	@ 0008d9cc 4a46
.org 0x8d9ce
	adds r3, r4, #0	@ 0008d9ce 231c
.org 0x8d9d0
	bl 0xd9fbc	@ 0008d9d0 4cf0f4fa
.org 0x8d9d4
	ldr r0, [sp, #8]	@ 0008d9d4 0298
.org 0x8d9d6
	ldr r1, [pc, #184]	@ 0008d9d6 2e49
.org 0x8d9d8
	adds r0, r0, r1	@ 0008d9d8 4018
.org 0x8d9da
	str r0, [sp, #8]	@ 0008d9da 0290
.org 0x8d9dc
	movs r0, #2	@ 0008d9dc 0220
.org 0x8d9de
	add r1, sp, #4	@ 0008d9de 01a9
.org 0x8d9e0
	bl 0xd0c88	@ 0008d9e0 43f052f9
.org 0x8d9e4
	ldr r0, [r6, #0]	@ 0008d9e4 3068
.org 0x8d9e6
	ldr r1, [pc, #148]	@ 0008d9e6 2549
.org 0x8d9e8
	adds r4, r0, #0	@ 0008d9e8 041c
.org 0x8d9ea
	muls r4, r1	@ 0008d9ea 4c43
.org 0x8d9ec
	ldr r0, [pc, #144]	@ 0008d9ec 2448
.org 0x8d9ee
	adds r4, r4, r0	@ 0008d9ee 2418
.org 0x8d9f0
	lsls r4, r4, #1	@ 0008d9f0 6400
.org 0x8d9f2
	lsrs r0, r4, #1	@ 0008d9f2 6008
.org 0x8d9f4
	str r0, [r6, #0]	@ 0008d9f4 3060
.org 0x8d9f6
	lsrs r4, r4, #17	@ 0008d9f6 640c
.org 0x8d9f8
	mov r1, sl	@ 0008d9f8 5146
.org 0x8d9fa
	ands r4, r1	@ 0008d9fa 0c40
.org 0x8d9fc
	mov r0, r8	@ 0008d9fc 4046
.org 0x8d9fe
	ldr r1, [r0, #0]	@ 0008d9fe 0168
.org 0x8da00
	lsrs r1, r1, #31	@ 0008da00 c90f
.org 0x8da02
	str r5, [sp, #0]	@ 0008da02 0095
.org 0x8da04
	add r0, sp, #4	@ 0008da04 01a8
.org 0x8da06
	ldr r2, [pc, #124]	@ 0008da06 1f4a
.org 0x8da08
	adds r3, r4, #0	@ 0008da08 231c
.org 0x8da0a
	bl 0xd9fbc	@ 0008da0a 4cf0d7fa
.org 0x8da0e
	mov r0, r8	@ 0008da0e 4046
.org 0x8da10
	ldr r1, [r0, #0]	@ 0008da10 0168
.org 0x8da12
	lsrs r1, r1, #31	@ 0008da12 c90f
.org 0x8da14
	str r5, [sp, #0]	@ 0008da14 0095
.org 0x8da16
	add r0, sp, #4	@ 0008da16 01a8
.org 0x8da18
	ldr r2, [pc, #108]	@ 0008da18 1b4a
.org 0x8da1a
	adds r3, r4, #0	@ 0008da1a 231c
.org 0x8da1c
	bl 0xd9fbc	@ 0008da1c 4cf0cefa
.org 0x8da20
	mov r0, r8	@ 0008da20 4046
.org 0x8da22
	ldr r1, [r0, #0]	@ 0008da22 0168
.org 0x8da24
	lsrs r1, r1, #31	@ 0008da24 c90f
.org 0x8da26
	str r5, [sp, #0]	@ 0008da26 0095
.org 0x8da28
	add r0, sp, #4	@ 0008da28 01a8
.org 0x8da2a
	mov r2, r9	@ 0008da2a 4a46
.org 0x8da2c
	adds r3, r4, #0	@ 0008da2c 231c
.org 0x8da2e
	bl 0xd9fbc	@ 0008da2e 4cf0c5fa
.org 0x8da32
	ldr r2, [pc, #96]	@ 0008da32 184a
.org 0x8da34
	ldrh r1, [r2, #12]	@ 0008da34 9189
.org 0x8da36
	ldr r0, [pc, #96]	@ 0008da36 1848
.org 0x8da38
	cmp r1, r0	@ 0008da38 8142
.org 0x8da3a
	bhi.n 0x8da40	@ 0008da3a 01d8
.org 0x8da3c
	adds r0, r1, #1	@ 0008da3c 481c
.org 0x8da3e
	strh r0, [r2, #12]	@ 0008da3e 9081
.org 0x8da40
	adds r1, r7, #0	@ 0008da40 391c
.org 0x8da42
	adds r1, #84	@ 0008da42 5431
.org 0x8da44
	adds r0, r7, #0	@ 0008da44 381c
.org 0x8da46
	bl 0x2abe0	@ 0008da46 9df7cbf8
.org 0x8da4a
	ldrb r1, [r7, #10]	@ 0008da4a b97a
.org 0x8da4c
	movs r0, #254	@ 0008da4c fe20
.org 0x8da4e
	ands r0, r1	@ 0008da4e 0840
.org 0x8da50
	strb r0, [r7, #10]	@ 0008da50 b872
.org 0x8da52
	ldr r1, [pc, #72]	@ 0008da52 1249
.org 0x8da54
	ldrb r0, [r7, #9]	@ 0008da54 787a
.org 0x8da56
	lsls r0, r0, #2	@ 0008da56 8000
.org 0x8da58
	adds r0, r0, r1	@ 0008da58 4018
.org 0x8da5a
	movs r1, #4	@ 0008da5a 0421
.org 0x8da5c
	str r1, [r7, #12]	@ 0008da5c f960
.org 0x8da5e
	ldr r0, [r0, #0]	@ 0008da5e 0068
.org 0x8da60
	ldr r0, [r0, #16]	@ 0008da60 0069
.org 0x8da62
	str r0, [r7, #20]	@ 0008da62 7861
.org 0x8da64
	add sp, #12	@ 0008da64 03b0
.org 0x8da66
	pop {r3, r4, r5}	@ 0008da66 38bc
.org 0x8da68
	mov r8, r3	@ 0008da68 9846
.org 0x8da6a
	mov r9, r4	@ 0008da6a a146
.org 0x8da6c
	mov sl, r5	@ 0008da6c aa46
.org 0x8da6e
	pop {r4, r5, r6, r7}	@ 0008da6e f0bc
.org 0x8da70
	pop {r0}	@ 0008da70 01bc
.org 0x8da72
	bx r0	@ 0008da72 0047
