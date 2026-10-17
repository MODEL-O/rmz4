@ FUN_0805bf8c  entry 0x0805bf8c  size 426
.thumb
.org 0x5bf8c
FUN_0805bf8c:
	push {r4, r5, r6, r7, lr}	@ 0005bf8c f0b5
.org 0x5bf8e
	mov r7, sl	@ 0005bf8e 5746
.org 0x5bf90
	mov r6, r9	@ 0005bf90 4e46
.org 0x5bf92
	mov r5, r8	@ 0005bf92 4546
.org 0x5bf94
	push {r5, r6, r7}	@ 0005bf94 e0b4
.org 0x5bf96
	sub sp, #124	@ 0005bf96 9fb0
.org 0x5bf98
	adds r7, r0, #0	@ 0005bf98 071c
.org 0x5bf9a
	ldr r4, [pc, #220]	@ 0005bf9a 374c
.org 0x5bf9c
	mov r0, sp	@ 0005bf9c 6846
.org 0x5bf9e
	adds r1, r4, #0	@ 0005bf9e 211c
.org 0x5bfa0
	movs r2, #7	@ 0005bfa0 0722
.org 0x5bfa2
	bl 0x129258	@ 0005bfa2 cdf059f9
.org 0x5bfa6
	mov r0, sp	@ 0005bfa6 6846
.org 0x5bfa8
	adds r0, #8	@ 0005bfa8 0830
.org 0x5bfaa
	str r0, [sp, #120]	@ 0005bfaa 1e90
.org 0x5bfac
	adds r1, r4, #0	@ 0005bfac 211c
.org 0x5bfae
	movs r2, #7	@ 0005bfae 0722
.org 0x5bfb0
	bl 0x129258	@ 0005bfb0 cdf052f9
.org 0x5bfb4
	add r1, sp, #16	@ 0005bfb4 04a9
.org 0x5bfb6
	mov sl, r1	@ 0005bfb6 8a46
.org 0x5bfb8
	ldr r1, [pc, #192]	@ 0005bfb8 3049
.org 0x5bfba
	mov r0, sl	@ 0005bfba 5046
.org 0x5bfbc
	movs r2, #7	@ 0005bfbc 0722
.org 0x5bfbe
	bl 0x129258	@ 0005bfbe cdf04bf9
.org 0x5bfc2
	add r2, sp, #24	@ 0005bfc2 06aa
.org 0x5bfc4
	mov r9, r2	@ 0005bfc4 9146
.org 0x5bfc6
	ldr r1, [pc, #184]	@ 0005bfc6 2e49
.org 0x5bfc8
	mov r0, r9	@ 0005bfc8 4846
.org 0x5bfca
	movs r2, #7	@ 0005bfca 0722
.org 0x5bfcc
	bl 0x129258	@ 0005bfcc cdf044f9
.org 0x5bfd0
	add r0, sp, #32	@ 0005bfd0 08a8
.org 0x5bfd2
	mov r8, r0	@ 0005bfd2 8046
.org 0x5bfd4
	ldr r4, [pc, #172]	@ 0005bfd4 2b4c
.org 0x5bfd6
	adds r1, r4, #0	@ 0005bfd6 211c
.org 0x5bfd8
	movs r2, #7	@ 0005bfd8 0722
.org 0x5bfda
	bl 0x129258	@ 0005bfda cdf03df9
.org 0x5bfde
	add r6, sp, #40	@ 0005bfde 0aae
.org 0x5bfe0
	adds r0, r6, #0	@ 0005bfe0 301c
.org 0x5bfe2
	adds r1, r4, #0	@ 0005bfe2 211c
.org 0x5bfe4
	movs r2, #7	@ 0005bfe4 0722
.org 0x5bfe6
	bl 0x129258	@ 0005bfe6 cdf037f9
.org 0x5bfea
	add r5, sp, #48	@ 0005bfea 0cad
.org 0x5bfec
	ldr r1, [pc, #152]	@ 0005bfec 2649
.org 0x5bfee
	adds r0, r5, #0	@ 0005bfee 281c
.org 0x5bff0
	movs r2, #7	@ 0005bff0 0722
.org 0x5bff2
	bl 0x129258	@ 0005bff2 cdf031f9
.org 0x5bff6
	add r4, sp, #56	@ 0005bff6 0eac
.org 0x5bff8
	ldr r1, [pc, #144]	@ 0005bff8 2449
.org 0x5bffa
	adds r0, r4, #0	@ 0005bffa 201c
.org 0x5bffc
	movs r2, #7	@ 0005bffc 0722
.org 0x5bffe
	bl 0x129258	@ 0005bffe cdf02bf9
.org 0x5c002
	mov r1, sp	@ 0005c002 6946
.org 0x5c004
	str r1, [sp, #64]	@ 0005c004 1091
.org 0x5c006
	add r1, sp, #64	@ 0005c006 10a9
.org 0x5c008
	ldr r2, [sp, #120]	@ 0005c008 1e9a
.org 0x5c00a
	str r2, [r1, #4]	@ 0005c00a 4a60
.org 0x5c00c
	mov r0, sl	@ 0005c00c 5046
.org 0x5c00e
	str r0, [sp, #72]	@ 0005c00e 1290
.org 0x5c010
	add r3, sp, #72	@ 0005c010 12ab
.org 0x5c012
	mov r2, r9	@ 0005c012 4a46
.org 0x5c014
	str r2, [r3, #4]	@ 0005c014 5a60
.org 0x5c016
	mov r0, r8	@ 0005c016 4046
.org 0x5c018
	str r0, [sp, #80]	@ 0005c018 1490
.org 0x5c01a
	add r0, sp, #80	@ 0005c01a 14a8
.org 0x5c01c
	str r6, [r0, #4]	@ 0005c01c 4660
.org 0x5c01e
	str r5, [sp, #88]	@ 0005c01e 1695
.org 0x5c020
	add r2, sp, #88	@ 0005c020 16aa
.org 0x5c022
	str r4, [r2, #4]	@ 0005c022 5460
.org 0x5c024
	str r1, [sp, #96]	@ 0005c024 1891
.org 0x5c026
	add r1, sp, #96	@ 0005c026 18a9
.org 0x5c028
	str r3, [r1, #4]	@ 0005c028 4b60
.org 0x5c02a
	str r0, [sp, #104]	@ 0005c02a 1a90
.org 0x5c02c
	add r0, sp, #104	@ 0005c02c 1aa8
.org 0x5c02e
	str r2, [r0, #4]	@ 0005c02e 4260
.org 0x5c030
	str r1, [sp, #112]	@ 0005c030 1c91
.org 0x5c032
	add r2, sp, #112	@ 0005c032 1caa
.org 0x5c034
	str r0, [r2, #4]	@ 0005c034 5060
.org 0x5c036
	ldr r0, [pc, #88]	@ 0005c036 1648
.org 0x5c038
	ldrh r1, [r0, #8]	@ 0005c038 0189
.org 0x5c03a
	movs r0, #8	@ 0005c03a 0820
.org 0x5c03c
	ands r0, r1	@ 0005c03c 0840
.org 0x5c03e
	mov r9, r2	@ 0005c03e 9146
.org 0x5c040
	cmp r0, #0	@ 0005c040 0028
.org 0x5c042
	bne.n 0x5c06c	@ 0005c042 13d1
.org 0x5c044
	adds r0, r7, #0	@ 0005c044 381c
.org 0x5c046
	adds r0, #200	@ 0005c046 c830
.org 0x5c048
	ldr r0, [r0, #0]	@ 0005c048 0068
.org 0x5c04a
	cmp r0, #0	@ 0005c04a 0028
.org 0x5c04c
	beq.n 0x5c094	@ 0005c04c 22d0
.org 0x5c04e
	adds r0, r7, #0	@ 0005c04e 381c
.org 0x5c050
	adds r0, #191	@ 0005c050 bf30
.org 0x5c052
	ldrb r1, [r0, #0]	@ 0005c052 0178
.org 0x5c054
	subs r0, r1, #1	@ 0005c054 481e
.org 0x5c056
	lsls r0, r0, #24	@ 0005c056 0006
.org 0x5c058
	lsrs r0, r0, #24	@ 0005c058 000e
.org 0x5c05a
	cmp r0, #1	@ 0005c05a 0128
.org 0x5c05c
	bls.n 0x5c06c	@ 0005c05c 06d9
.org 0x5c05e
	adds r0, r1, #0	@ 0005c05e 081c
.org 0x5c060
	cmp r0, #4	@ 0005c060 0428
.org 0x5c062
	beq.n 0x5c06c	@ 0005c062 03d0
.org 0x5c064
	cmp r0, #5	@ 0005c064 0528
.org 0x5c066
	beq.n 0x5c06c	@ 0005c066 01d0
.org 0x5c068
	cmp r0, #3	@ 0005c068 0328
.org 0x5c06a
	bne.n 0x5c094	@ 0005c06a 13d1
.org 0x5c06c
	movs r0, #0	@ 0005c06c 0020
.org 0x5c06e
	strb r0, [r7, #13]	@ 0005c06e 7873
.org 0x5c070
	strb r0, [r7, #14]	@ 0005c070 b873
.org 0x5c072
	strb r0, [r7, #15]	@ 0005c072 f873
.org 0x5c074
	b.n 0x5c162	@ 0005c074 75e0
.org 0x5c076
	.byte 0x00	@ 0005c076 data
.org 0x5c077
	.byte 0x00	@ 0005c077 data
.org 0x5c078
	.byte 0xd8,0x96,0x12,0x08	@ 0005c078 data
.org 0x5c07c
	.byte 0xdf,0x96,0x12,0x08	@ 0005c07c data
.org 0x5c080
	.byte 0xe6,0x96,0x12,0x08	@ 0005c080 data
.org 0x5c084
	.byte 0xed,0x96,0x12,0x08	@ 0005c084 data
.org 0x5c088
	.byte 0xf4,0x96,0x12,0x08	@ 0005c088 data
.org 0x5c08c
	.byte 0xfb,0x96,0x12,0x08	@ 0005c08c data
.org 0x5c090
	.byte 0x10,0xe9,0x02,0x02	@ 0005c090 data
.org 0x5c094
	ldr r0, [pc, #168]	@ 0005c094 2a48
.org 0x5c096
	ldr r0, [r0, #0]	@ 0005c096 0068
.org 0x5c098
	ldr r0, [r0, #84]	@ 0005c098 406d
.org 0x5c09a
	ldr r1, [r7, #84]	@ 0005c09a 796d
.org 0x5c09c
	subs r0, r0, r1	@ 0005c09c 401a
.org 0x5c09e
	ldr r1, [pc, #164]	@ 0005c09e 2949
.org 0x5c0a0
	adds r0, r0, r1	@ 0005c0a0 4018
.org 0x5c0a2
	ldr r1, [pc, #164]	@ 0005c0a2 2949
.org 0x5c0a4
	movs r2, #1	@ 0005c0a4 0122
.org 0x5c0a6
	mov r8, r2	@ 0005c0a6 9046
.org 0x5c0a8
	cmp r0, r1	@ 0005c0a8 8842
.org 0x5c0aa
	bhi.n 0x5c0b0	@ 0005c0aa 01d8
.org 0x5c0ac
	movs r0, #0	@ 0005c0ac 0020
.org 0x5c0ae
	mov r8, r0	@ 0005c0ae 8046
.org 0x5c0b0
	adds r0, r7, #0	@ 0005c0b0 381c
.org 0x5c0b2
	bl 0x5c240	@ 0005c0b2 00f0c5f8
.org 0x5c0b6
	adds r6, r0, #0	@ 0005c0b6 061c
.org 0x5c0b8
	movs r2, #0	@ 0005c0b8 0022
.org 0x5c0ba
	ldr r0, [pc, #144]	@ 0005c0ba 2448
.org 0x5c0bc
	ldr r1, [pc, #144]	@ 0005c0bc 2449
.org 0x5c0be
	adds r0, r0, r1	@ 0005c0be 4018
.org 0x5c0c0
	ldrb r1, [r0, #0]	@ 0005c0c0 0178
.org 0x5c0c2
	movs r0, #16	@ 0005c0c2 1020
.org 0x5c0c4
	ands r0, r1	@ 0005c0c4 0840
.org 0x5c0c6
	cmp r0, #0	@ 0005c0c6 0028
.org 0x5c0c8
	beq.n 0x5c0d8	@ 0005c0c8 06d0
.org 0x5c0ca
	ldr r0, [pc, #136]	@ 0005c0ca 2248
.org 0x5c0cc
	ldrb r1, [r0, #4]	@ 0005c0cc 0179
.org 0x5c0ce
	movs r0, #4	@ 0005c0ce 0420
.org 0x5c0d0
	ands r0, r1	@ 0005c0d0 0840
.org 0x5c0d2
	cmp r0, #0	@ 0005c0d2 0028
.org 0x5c0d4
	bne.n 0x5c0d8	@ 0005c0d4 00d1
.org 0x5c0d6
	movs r2, #1	@ 0005c0d6 0122
.org 0x5c0d8
	cmp r2, #0	@ 0005c0d8 002a
.org 0x5c0da
	beq.n 0x5c0de	@ 0005c0da 00d0
.org 0x5c0dc
	movs r2, #1	@ 0005c0dc 0122
.org 0x5c0de
	adds r4, r7, #0	@ 0005c0de 3c1c
.org 0x5c0e0
	adds r4, #205	@ 0005c0e0 cd34
.org 0x5c0e2
	ldrb r0, [r4, #0]	@ 0005c0e2 2078
.org 0x5c0e4
	adds r5, r7, #0	@ 0005c0e4 3d1c
.org 0x5c0e6
	adds r5, #204	@ 0005c0e6 cc35
.org 0x5c0e8
	mov r1, r8	@ 0005c0e8 4146
.org 0x5c0ea
	lsls r3, r1, #2	@ 0005c0ea 8b00
.org 0x5c0ec
	lsls r6, r6, #2	@ 0005c0ec b600
.org 0x5c0ee
	lsls r2, r2, #2	@ 0005c0ee 9200
.org 0x5c0f0
	mov r8, r2	@ 0005c0f0 9046
.org 0x5c0f2
	cmp r0, #1	@ 0005c0f2 0128
.org 0x5c0f4
	bls.n 0x5c10c	@ 0005c0f4 0ad9
.org 0x5c0f6
	ldrb r2, [r5, #0]	@ 0005c0f6 2a78
.org 0x5c0f8
	mov r1, r9	@ 0005c0f8 4946
.org 0x5c0fa
	adds r0, r3, r1	@ 0005c0fa 5818
.org 0x5c0fc
	ldr r0, [r0, #0]	@ 0005c0fc 0068
.org 0x5c0fe
	adds r0, r6, r0	@ 0005c0fe 3018
.org 0x5c100
	ldr r0, [r0, #0]	@ 0005c100 0068
.org 0x5c102
	add r0, r8	@ 0005c102 4044
.org 0x5c104
	ldr r0, [r0, #0]	@ 0005c104 0068
.org 0x5c106
	adds r0, r0, r2	@ 0005c106 8018
.org 0x5c108
	movs r1, #0	@ 0005c108 0021
.org 0x5c10a
	strb r1, [r0, #0]	@ 0005c10a 0170
.org 0x5c10c
	mov r2, r9	@ 0005c10c 4a46
.org 0x5c10e
	adds r0, r3, r2	@ 0005c10e 9818
.org 0x5c110
	ldr r0, [r0, #0]	@ 0005c110 0068
.org 0x5c112
	adds r0, r6, r0	@ 0005c112 3018
.org 0x5c114
	ldr r0, [r0, #0]	@ 0005c114 0068
.org 0x5c116
	add r0, r8	@ 0005c116 4044
.org 0x5c118
	ldr r0, [r0, #0]	@ 0005c118 0068
.org 0x5c11a
	movs r1, #7	@ 0005c11a 0721
.org 0x5c11c
	bl 0x5c328	@ 0005c11c 00f004f9
.org 0x5c120
	adds r2, r0, #0	@ 0005c120 021c
.org 0x5c122
	ldr r0, [pc, #52]	@ 0005c122 0d48
.org 0x5c124
	adds r0, r2, r0	@ 0005c124 1018
.org 0x5c126
	ldrb r0, [r0, #0]	@ 0005c126 0078
.org 0x5c128
	movs r1, #0	@ 0005c128 0021
.org 0x5c12a
	strb r0, [r7, #13]	@ 0005c12a 7873
.org 0x5c12c
	strb r1, [r7, #14]	@ 0005c12c b973
.org 0x5c12e
	strb r1, [r7, #15]	@ 0005c12e f973
.org 0x5c130
	ldrb r0, [r5, #0]	@ 0005c130 2878
.org 0x5c132
	cmp r2, r0	@ 0005c132 8242
.org 0x5c134
	bne.n 0x5c15c	@ 0005c134 12d1
