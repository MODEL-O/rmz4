@ FUN_080dcfd8  entry 0x080dcfd8  size 292
.thumb
.org 0xdcfd8
FUN_080dcfd8:
	push {r4, r5, r6, lr}	@ 000dcfd8 70b5
.org 0xdcfda
	adds r4, r0, #0	@ 000dcfda 041c
.org 0xdcfdc
	ldr r5, [r4, #40]	@ 000dcfdc a56a
.org 0xdcfde
	bl 0x1cc9c	@ 000dcfde 3ff75dfe
.org 0xdcfe2
	ldrb r1, [r4, #10]	@ 000dcfe2 a17a
.org 0xdcfe4
	movs r0, #1	@ 000dcfe4 0120
.org 0xdcfe6
	movs r6, #0	@ 000dcfe6 0026
.org 0xdcfe8
	orrs r0, r1	@ 000dcfe8 0843
.org 0xdcfea
	movs r1, #2	@ 000dcfea 0221
.org 0xdcfec
	orrs r0, r1	@ 000dcfec 0843
.org 0xdcfee
	strb r0, [r4, #10]	@ 000dcfee a072
.org 0xdcff0
	ldr r1, [pc, #72]	@ 000dcff0 1249
.org 0xdcff2
	adds r0, r4, #0	@ 000dcff2 201c
.org 0xdcff4
	bl 0x1cf00	@ 000dcff4 3ff784ff
.org 0xdcff8
	adds r0, r4, #0	@ 000dcff8 201c
.org 0xdcffa
	bl 0x1cff0	@ 000dcffa 3ff7f9ff
.org 0xdcffe
	ldrb r1, [r4, #17]	@ 000dcffe 617c
.org 0xdd000
	adds r2, r1, #0	@ 000dd000 0a1c
.org 0xdd002
	cmp r2, #0	@ 000dd002 002a
.org 0xdd004
	beq.n 0xdd06c	@ 000dd004 32d0
.org 0xdd006
	movs r2, #1	@ 000dd006 0122
.org 0xdd008
	adds r0, r2, #0	@ 000dd008 101c
.org 0xdd00a
	ands r0, r1	@ 000dd00a 0840
.org 0xdd00c
	cmp r0, #0	@ 000dd00c 0028
.org 0xdd00e
	beq.n 0xdd040	@ 000dd00e 17d0
.org 0xdd010
	ldrb r1, [r4, #17]	@ 000dd010 617c
.org 0xdd012
	lsls r1, r1, #10	@ 000dd012 8902
.org 0xdd014
	ldr r0, [r5, #84]	@ 000dd014 686d
.org 0xdd016
	adds r0, r0, r1	@ 000dd016 4018
.org 0xdd018
	str r0, [r4, #84]	@ 000dd018 6065
.org 0xdd01a
	movs r2, #0	@ 000dd01a 0022
.org 0xdd01c
	ldrb r1, [r4, #10]	@ 000dd01c a17a
.org 0xdd01e
	movs r0, #239	@ 000dd01e ef20
.org 0xdd020
	ands r0, r1	@ 000dd020 0840
.org 0xdd022
	strb r0, [r4, #10]	@ 000dd022 a072
.org 0xdd024
	adds r0, r4, #0	@ 000dd024 201c
.org 0xdd026
	adds r0, #76	@ 000dd026 4c30
.org 0xdd028
	strb r2, [r0, #0]	@ 000dd028 0270
.org 0xdd02a
	adds r1, r4, #0	@ 000dd02a 211c
.org 0xdd02c
	adds r1, #74	@ 000dd02c 4a31
.org 0xdd02e
	ldrb r2, [r1, #0]	@ 000dd02e 0a78
.org 0xdd030
	movs r0, #17	@ 000dd030 1120
.org 0xdd032
	negs r0, r0	@ 000dd032 4042
.org 0xdd034
	ands r0, r2	@ 000dd034 1040
.org 0xdd036
	strb r0, [r1, #0]	@ 000dd036 0870
.org 0xdd038
	b.n 0xdd08c	@ 000dd038 28e0
.org 0xdd03a
	.byte 0x00	@ 000dd03a data
.org 0xdd03b
	.byte 0x00	@ 000dd03b data
.org 0xdd03c
	.byte 0x02,0x3d,0x00,0x00	@ 000dd03c data
.org 0xdd040
	ldrb r1, [r4, #17]	@ 000dd040 617c
.org 0xdd042
	lsls r1, r1, #10	@ 000dd042 8902
.org 0xdd044
	ldr r0, [r5, #84]	@ 000dd044 686d
.org 0xdd046
	subs r0, r0, r1	@ 000dd046 401a
.org 0xdd048
	str r0, [r4, #84]	@ 000dd048 6065
.org 0xdd04a
	ldrb r0, [r4, #10]	@ 000dd04a a07a
.org 0xdd04c
	movs r1, #16	@ 000dd04c 1021
.org 0xdd04e
	orrs r0, r1	@ 000dd04e 0843
.org 0xdd050
	strb r0, [r4, #10]	@ 000dd050 a072
.org 0xdd052
	adds r0, r4, #0	@ 000dd052 201c
.org 0xdd054
	adds r0, #76	@ 000dd054 4c30
.org 0xdd056
	strb r2, [r0, #0]	@ 000dd056 0270
.org 0xdd058
	adds r1, r4, #0	@ 000dd058 211c
.org 0xdd05a
	adds r1, #74	@ 000dd05a 4a31
.org 0xdd05c
	movs r3, #16	@ 000dd05c 1023
.org 0xdd05e
	ldrb r2, [r1, #0]	@ 000dd05e 0a78
.org 0xdd060
	movs r0, #17	@ 000dd060 1120
.org 0xdd062
	negs r0, r0	@ 000dd062 4042
.org 0xdd064
	ands r0, r2	@ 000dd064 1040
.org 0xdd066
	orrs r0, r3	@ 000dd066 1843
.org 0xdd068
	strb r0, [r1, #0]	@ 000dd068 0870
.org 0xdd06a
	b.n 0xdd08c	@ 000dd06a 0fe0
.org 0xdd06c
	ldrb r1, [r4, #10]	@ 000dd06c a17a
.org 0xdd06e
	movs r0, #239	@ 000dd06e ef20
.org 0xdd070
	ands r0, r1	@ 000dd070 0840
.org 0xdd072
	strb r0, [r4, #10]	@ 000dd072 a072
.org 0xdd074
	adds r0, r4, #0	@ 000dd074 201c
.org 0xdd076
	adds r0, #76	@ 000dd076 4c30
.org 0xdd078
	strb r2, [r0, #0]	@ 000dd078 0270
.org 0xdd07a
	adds r1, r4, #0	@ 000dd07a 211c
.org 0xdd07c
	adds r1, #74	@ 000dd07c 4a31
.org 0xdd07e
	ldrb r2, [r1, #0]	@ 000dd07e 0a78
.org 0xdd080
	movs r0, #17	@ 000dd080 1120
.org 0xdd082
	negs r0, r0	@ 000dd082 4042
.org 0xdd084
	ands r0, r2	@ 000dd084 1040
.org 0xdd086
	strb r0, [r1, #0]	@ 000dd086 0870
.org 0xdd088
	ldr r0, [r5, #84]	@ 000dd088 686d
.org 0xdd08a
	str r0, [r4, #84]	@ 000dd08a 6065
.org 0xdd08c
	adds r3, r1, #0	@ 000dd08c 0b1c
.org 0xdd08e
	ldrb r1, [r5, #10]	@ 000dd08e a97a
.org 0xdd090
	movs r6, #32	@ 000dd090 2026
.org 0xdd092
	adds r0, r6, #0	@ 000dd092 301c
.org 0xdd094
	ands r0, r1	@ 000dd094 0840
.org 0xdd096
	cmp r0, #0	@ 000dd096 0028
.org 0xdd098
	beq.n 0xdd0c0	@ 000dd098 12d0
.org 0xdd09a
	movs r2, #1	@ 000dd09a 0122
.org 0xdd09c
	ldrb r1, [r4, #10]	@ 000dd09c a17a
.org 0xdd09e
	movs r0, #32	@ 000dd09e 2020
.org 0xdd0a0
	orrs r0, r1	@ 000dd0a0 0843
.org 0xdd0a2
	strb r0, [r4, #10]	@ 000dd0a2 a072
.org 0xdd0a4
	adds r0, r4, #0	@ 000dd0a4 201c
.org 0xdd0a6
	adds r0, #77	@ 000dd0a6 4d30
.org 0xdd0a8
	strb r2, [r0, #0]	@ 000dd0a8 0270
.org 0xdd0aa
	ldrb r1, [r3, #0]	@ 000dd0aa 1978
.org 0xdd0ac
	movs r0, #33	@ 000dd0ac 2120
.org 0xdd0ae
	negs r0, r0	@ 000dd0ae 4042
.org 0xdd0b0
	ands r0, r1	@ 000dd0b0 0840
.org 0xdd0b2
	orrs r0, r6	@ 000dd0b2 3043
.org 0xdd0b4
	strb r0, [r3, #0]	@ 000dd0b4 1870
.org 0xdd0b6
	ldr r0, [r5, #84]	@ 000dd0b6 686d
.org 0xdd0b8
	ldr r1, [r5, #88]	@ 000dd0b8 a96d
.org 0xdd0ba
	bl 0x8748	@ 000dd0ba 2bf745fb
.org 0xdd0be
	b.n 0xdd0c8	@ 000dd0be 03e0
.org 0xdd0c0
	ldr r0, [r5, #84]	@ 000dd0c0 686d
.org 0xdd0c2
	ldr r1, [r5, #88]	@ 000dd0c2 a96d
.org 0xdd0c4
	bl 0x8534	@ 000dd0c4 2bf736fa
.org 0xdd0c8
	str r0, [r4, #88]	@ 000dd0c8 a065
.org 0xdd0ca
	ldrb r1, [r5, #10]	@ 000dd0ca a97a
.org 0xdd0cc
	movs r0, #16	@ 000dd0cc 1020
.org 0xdd0ce
	ands r0, r1	@ 000dd0ce 0840
.org 0xdd0d0
	cmp r0, #0	@ 000dd0d0 0028
.org 0xdd0d2
	beq.n 0xdd0dc	@ 000dd0d2 03d0
.org 0xdd0d4
	ldr r0, [r4, #84]	@ 000dd0d4 606d
.org 0xdd0d6
	movs r1, #192	@ 000dd0d6 c021
.org 0xdd0d8
	lsls r1, r1, #3	@ 000dd0d8 c900
.org 0xdd0da
	b.n 0xdd0e0	@ 000dd0da 01e0
.org 0xdd0dc
	ldr r0, [r4, #84]	@ 000dd0dc 606d
.org 0xdd0de
	ldr r1, [pc, #36]	@ 000dd0de 0949
.org 0xdd0e0
	adds r0, r0, r1	@ 000dd0e0 4018
.org 0xdd0e2
	str r0, [r4, #84]	@ 000dd0e2 6065
.org 0xdd0e4
	ldr r1, [pc, #32]	@ 000dd0e4 0849
.org 0xdd0e6
	ldrb r0, [r4, #9]	@ 000dd0e6 607a
.org 0xdd0e8
	lsls r0, r0, #2	@ 000dd0e8 8000
.org 0xdd0ea
	adds r0, r0, r1	@ 000dd0ea 4018
.org 0xdd0ec
	movs r1, #1	@ 000dd0ec 0121
.org 0xdd0ee
	str r1, [r4, #12]	@ 000dd0ee e160
.org 0xdd0f0
	ldr r0, [r0, #0]	@ 000dd0f0 0068
.org 0xdd0f2
	ldr r0, [r0, #4]	@ 000dd0f2 4068
.org 0xdd0f4
	str r0, [r4, #20]	@ 000dd0f4 6061
.org 0xdd0f6
	adds r0, r4, #0	@ 000dd0f6 201c
.org 0xdd0f8
	bl 0xdcdd8	@ 000dd0f8 fff76efe
