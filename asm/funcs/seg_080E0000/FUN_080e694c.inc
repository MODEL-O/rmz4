@ FUN_080e694c  entry 0x080e694c  size 260
.thumb
.org 0xe694c
FUN_080e694c:
	push {r4, r5, r6, r7, lr}	@ 000e694c f0b5
.org 0xe694e
	mov r7, r8	@ 000e694e 4746
.org 0xe6950
	push {r7}	@ 000e6950 80b4
.org 0xe6952
	sub sp, #56	@ 000e6952 8eb0
.org 0xe6954
	adds r6, r0, #0	@ 000e6954 061c
.org 0xe6956
	mov r1, sp	@ 000e6956 6946
.org 0xe6958
	ldr r0, [pc, #244]	@ 000e6958 3d48
.org 0xe695a
	ldmia r0!, {r2, r3, r4}	@ 000e695a 1cc8
.org 0xe695c
	stmia r1!, {r2, r3, r4}	@ 000e695c 1cc1
.org 0xe695e
	ldmia r0!, {r2, r3, r4}	@ 000e695e 1cc8
.org 0xe6960
	stmia r1!, {r2, r3, r4}	@ 000e6960 1cc1
.org 0xe6962
	ldmia r0!, {r2, r3}	@ 000e6962 0cc8
.org 0xe6964
	stmia r1!, {r2, r3}	@ 000e6964 0cc1
.org 0xe6966
	add r7, sp, #32	@ 000e6966 08af
.org 0xe6968
	adds r1, r7, #0	@ 000e6968 391c
.org 0xe696a
	ldr r0, [pc, #232]	@ 000e696a 3a48
.org 0xe696c
	ldmia r0!, {r2, r3, r4}	@ 000e696c 1cc8
.org 0xe696e
	stmia r1!, {r2, r3, r4}	@ 000e696e 1cc1
.org 0xe6970
	ldr r0, [r0, #0]	@ 000e6970 0068
.org 0xe6972
	str r0, [r1, #0]	@ 000e6972 0860
.org 0xe6974
	add r4, sp, #48	@ 000e6974 0cac
.org 0xe6976
	mov r8, r4	@ 000e6976 a046
.org 0xe6978
	ldr r1, [pc, #220]	@ 000e6978 3749
.org 0xe697a
	mov r0, r8	@ 000e697a 4046
.org 0xe697c
	movs r2, #8	@ 000e697c 0822
.org 0xe697e
	bl 0x129258	@ 000e697e 42f06bfc
.org 0xe6982
	ldrb r0, [r6, #17]	@ 000e6982 707c
.org 0xe6984
	cmp r0, #0	@ 000e6984 0028
.org 0xe6986
	bne.n 0xe69be	@ 000e6986 1ad1
.org 0xe6988
	movs r4, #1	@ 000e6988 0124
.org 0xe698a
	strb r4, [r6, #17]	@ 000e698a 7474
.org 0xe698c
	adds r5, r6, #0	@ 000e698c 351c
.org 0xe698e
	adds r5, #84	@ 000e698e 5435
.org 0xe6990
	movs r1, #129	@ 000e6990 8121
.org 0xe6992
	lsls r1, r1, #1	@ 000e6992 4900
.org 0xe6994
	ldrb r2, [r6, #10]	@ 000e6994 b27a
.org 0xe6996
	lsrs r2, r2, #4	@ 000e6996 1209
.org 0xe6998
	ands r2, r4	@ 000e6998 2240
.org 0xe699a
	adds r0, r5, #0	@ 000e699a 281c
.org 0xe699c
	bl 0xe67ac	@ 000e699c fff706ff
.org 0xe69a0
	ldr r1, [pc, #184]	@ 000e69a0 2e49
.org 0xe69a2
	ldrb r2, [r6, #10]	@ 000e69a2 b27a
.org 0xe69a4
	lsrs r2, r2, #4	@ 000e69a4 1209
.org 0xe69a6
	ands r2, r4	@ 000e69a6 2240
.org 0xe69a8
	adds r0, r5, #0	@ 000e69a8 281c
.org 0xe69aa
	bl 0xe67ac	@ 000e69aa fff7fffe
.org 0xe69ae
	movs r1, #130	@ 000e69ae 8221
.org 0xe69b0
	lsls r1, r1, #1	@ 000e69b0 4900
.org 0xe69b2
	ldrb r2, [r6, #10]	@ 000e69b2 b27a
.org 0xe69b4
	lsrs r2, r2, #4	@ 000e69b4 1209
.org 0xe69b6
	ands r2, r4	@ 000e69b6 2240
.org 0xe69b8
	adds r0, r5, #0	@ 000e69b8 281c
.org 0xe69ba
	bl 0xe67ac	@ 000e69ba fff7f7fe
.org 0xe69be
	ldrb r2, [r6, #17]	@ 000e69be 727c
.org 0xe69c0
	subs r2, #1	@ 000e69c0 013a
.org 0xe69c2
	lsls r2, r2, #2	@ 000e69c2 9200
.org 0xe69c4
	adds r2, r7, r2	@ 000e69c4 ba18
.org 0xe69c6
	ldr r4, [pc, #152]	@ 000e69c6 264c
.org 0xe69c8
	ldr r0, [r4, #0]	@ 000e69c8 2068
.org 0xe69ca
	ldr r1, [pc, #152]	@ 000e69ca 2649
.org 0xe69cc
	mov ip, r1	@ 000e69cc 8c46
.org 0xe69ce
	mov r3, ip	@ 000e69ce 6346
.org 0xe69d0
	muls r3, r0	@ 000e69d0 4343
.org 0xe69d2
	adds r0, r3, #0	@ 000e69d2 181c
.org 0xe69d4
	ldr r7, [pc, #144]	@ 000e69d4 244f
.org 0xe69d6
	adds r0, r0, r7	@ 000e69d6 c019
.org 0xe69d8
	lsls r0, r0, #1	@ 000e69d8 4000
.org 0xe69da
	lsrs r3, r0, #1	@ 000e69da 4308
.org 0xe69dc
	str r3, [r4, #0]	@ 000e69dc 2360
.org 0xe69de
	lsrs r0, r0, #17	@ 000e69de 400c
.org 0xe69e0
	movs r5, #255	@ 000e69e0 ff25
.org 0xe69e2
	ands r0, r5	@ 000e69e2 2840
.org 0xe69e4
	movs r1, #128	@ 000e69e4 8021
.org 0xe69e6
	lsls r1, r1, #1	@ 000e69e6 4900
.org 0xe69e8
	adds r0, r0, r1	@ 000e69e8 4018
.org 0xe69ea
	ldr r1, [r2, #0]	@ 000e69ea 1168
.org 0xe69ec
	muls r0, r1	@ 000e69ec 4843
.org 0xe69ee
	ldrb r2, [r6, #17]	@ 000e69ee 727c
.org 0xe69f0
	cmp r0, #0	@ 000e69f0 0028
.org 0xe69f2
	bge.n 0xe69f6	@ 000e69f2 00da
.org 0xe69f4
	adds r0, #255	@ 000e69f4 ff30
.org 0xe69f6
	asrs r0, r0, #8	@ 000e69f6 0012
.org 0xe69f8
	str r0, [r6, #92]	@ 000e69f8 f065
.org 0xe69fa
	mov r0, ip	@ 000e69fa 6046
.org 0xe69fc
	muls r0, r3	@ 000e69fc 5843
.org 0xe69fe
	adds r0, r0, r7	@ 000e69fe c019
.org 0xe6a00
	lsls r0, r0, #1	@ 000e6a00 4000
.org 0xe6a02
	lsrs r1, r0, #1	@ 000e6a02 4108
.org 0xe6a04
	str r1, [r4, #0]	@ 000e6a04 2160
.org 0xe6a06
	lsrs r0, r0, #17	@ 000e6a06 400c
.org 0xe6a08
	ands r0, r5	@ 000e6a08 2840
.org 0xe6a0a
	movs r4, #192	@ 000e6a0a c024
.org 0xe6a0c
	lsls r4, r4, #1	@ 000e6a0c 6400
.org 0xe6a0e
	adds r0, r0, r4	@ 000e6a0e 0019
.org 0xe6a10
	lsls r0, r0, #8	@ 000e6a10 0002
.org 0xe6a12
	negs r0, r0	@ 000e6a12 4042
.org 0xe6a14
	cmp r0, #0	@ 000e6a14 0028
.org 0xe6a16
	bge.n 0xe6a1a	@ 000e6a16 00da
.org 0xe6a18
	adds r0, #255	@ 000e6a18 ff30
.org 0xe6a1a
	asrs r0, r0, #8	@ 000e6a1a 0012
.org 0xe6a1c
	str r0, [r6, #96]	@ 000e6a1c 3066
.org 0xe6a1e
	subs r1, r2, #1	@ 000e6a1e 511e
.org 0xe6a20
	lsls r1, r1, #3	@ 000e6a20 c900
.org 0xe6a22
	add r0, sp, #4	@ 000e6a22 01a8
.org 0xe6a24
	adds r0, r0, r1	@ 000e6a24 4018
.org 0xe6a26
	ldr r1, [r0, #0]	@ 000e6a26 0168
.org 0xe6a28
	lsls r1, r1, #8	@ 000e6a28 0902
.org 0xe6a2a
	ldr r0, [r6, #88]	@ 000e6a2a b06d
.org 0xe6a2c
	adds r0, r0, r1	@ 000e6a2c 4018
.org 0xe6a2e
	str r0, [r6, #88]	@ 000e6a2e b065
.org 0xe6a30
	ldrb r0, [r6, #17]	@ 000e6a30 707c
.org 0xe6a32
	subs r0, #1	@ 000e6a32 0138
.org 0xe6a34
	lsls r0, r0, #1	@ 000e6a34 4000
.org 0xe6a36
	add r0, r8	@ 000e6a36 4044
.org 0xe6a38
	ldrh r1, [r0, #0]	@ 000e6a38 0188
.org 0xe6a3a
	adds r0, r6, #0	@ 000e6a3a 301c
.org 0xe6a3c
	bl 0x1cf00	@ 000e6a3c 36f760fa
.org 0xe6a40
	movs r0, #1	@ 000e6a40 0120
.org 0xe6a42
	strb r0, [r6, #13]	@ 000e6a42 7073
.org 0xe6a44
	add sp, #56	@ 000e6a44 0eb0
.org 0xe6a46
	pop {r3}	@ 000e6a46 08bc
.org 0xe6a48
	mov r8, r3	@ 000e6a48 9846
.org 0xe6a4a
	pop {r4, r5, r6, r7}	@ 000e6a4a f0bc
.org 0xe6a4c
	pop {r0}	@ 000e6a4c 01bc
.org 0xe6a4e
	bx r0	@ 000e6a4e 0047
