@ FUN_08065fe0  entry 0x08065fe0  size 342
.thumb
.org 0x65fe0
FUN_08065fe0:
	push {r4, r5, r6, r7, lr}	@ 00065fe0 f0b5
.org 0x65fe2
	mov r7, sl	@ 00065fe2 5746
.org 0x65fe4
	mov r6, r9	@ 00065fe4 4e46
.org 0x65fe6
	mov r5, r8	@ 00065fe6 4546
.org 0x65fe8
	push {r5, r6, r7}	@ 00065fe8 e0b4
.org 0x65fea
	sub sp, #80	@ 00065fea 94b0
.org 0x65fec
	adds r7, r0, #0	@ 00065fec 071c
.org 0x65fee
	ldr r1, [pc, #228]	@ 00065fee 3949
.org 0x65ff0
	mov r0, sp	@ 00065ff0 6846
.org 0x65ff2
	movs r2, #2	@ 00065ff2 0222
.org 0x65ff4
	bl 0x129258	@ 00065ff4 c3f030f9
.org 0x65ff8
	mov r0, sp	@ 00065ff8 6846
.org 0x65ffa
	adds r0, #4	@ 00065ffa 0430
.org 0x65ffc
	str r0, [sp, #72]	@ 00065ffc 1290
.org 0x65ffe
	ldr r5, [pc, #216]	@ 00065ffe 364d
.org 0x66000
	adds r1, r5, #0	@ 00066000 291c
.org 0x66002
	movs r2, #2	@ 00066002 0222
.org 0x66004
	bl 0x129258	@ 00066004 c3f028f9
.org 0x66008
	mov r1, sp	@ 00066008 6946
.org 0x6600a
	adds r1, #8	@ 0006600a 0831
.org 0x6600c
	str r1, [sp, #76]	@ 0006600c 1391
.org 0x6600e
	ldr r4, [pc, #204]	@ 0006600e 334c
.org 0x66010
	adds r0, r1, #0	@ 00066010 081c
.org 0x66012
	adds r1, r4, #0	@ 00066012 211c
.org 0x66014
	movs r2, #2	@ 00066014 0222
.org 0x66016
	bl 0x129258	@ 00066016 c3f01ff9
.org 0x6601a
	add r0, sp, #12	@ 0006601a 03a8
.org 0x6601c
	mov r9, r0	@ 0006601c 8146
.org 0x6601e
	ldr r1, [pc, #192]	@ 0006601e 3049
.org 0x66020
	movs r2, #2	@ 00066020 0222
.org 0x66022
	bl 0x129258	@ 00066022 c3f019f9
.org 0x66026
	add r1, sp, #16	@ 00066026 04a9
.org 0x66028
	mov sl, r1	@ 00066028 8a46
.org 0x6602a
	ldr r1, [pc, #184]	@ 0006602a 2e49
.org 0x6602c
	mov r0, sl	@ 0006602c 5046
.org 0x6602e
	movs r2, #2	@ 0006602e 0222
.org 0x66030
	bl 0x129258	@ 00066030 c3f012f9
.org 0x66034
	add r0, sp, #20	@ 00066034 05a8
.org 0x66036
	mov r8, r0	@ 00066036 8046
.org 0x66038
	adds r1, r5, #0	@ 00066038 291c
.org 0x6603a
	movs r2, #2	@ 0006603a 0222
.org 0x6603c
	bl 0x129258	@ 0006603c c3f00cf9
.org 0x66040
	add r5, sp, #24	@ 00066040 06ad
.org 0x66042
	adds r0, r5, #0	@ 00066042 281c
.org 0x66044
	adds r1, r4, #0	@ 00066044 211c
.org 0x66046
	movs r2, #2	@ 00066046 0222
.org 0x66048
	bl 0x129258	@ 00066048 c3f006f9
.org 0x6604c
	add r6, sp, #28	@ 0006604c 07ae
.org 0x6604e
	ldr r1, [sp, #72]	@ 0006604e 1299
.org 0x66050
	str r1, [sp, #40]	@ 00066050 0a91
.org 0x66052
	ldr r0, [sp, #76]	@ 00066052 1398
.org 0x66054
	str r0, [sp, #44]	@ 00066054 0b90
.org 0x66056
	mov r1, r9	@ 00066056 4946
.org 0x66058
	str r1, [sp, #48]	@ 00066058 0c91
.org 0x6605a
	add r4, sp, #40	@ 0006605a 0aac
.org 0x6605c
	adds r0, r6, #0	@ 0006605c 301c
.org 0x6605e
	adds r1, r4, #0	@ 0006605e 211c
.org 0x66060
	movs r2, #12	@ 00066060 0c22
.org 0x66062
	bl 0x129258	@ 00066062 c3f0f9f8
.org 0x66066
	mov r0, sl	@ 00066066 5046
.org 0x66068
	str r0, [sp, #52]	@ 00066068 0d90
.org 0x6606a
	mov r1, r8	@ 0006606a 4146
.org 0x6606c
	str r1, [sp, #56]	@ 0006606c 0e91
.org 0x6606e
	str r5, [sp, #60]	@ 0006606e 0f95
.org 0x66070
	add r1, sp, #52	@ 00066070 0da9
.org 0x66072
	adds r0, r4, #0	@ 00066072 201c
.org 0x66074
	movs r2, #12	@ 00066074 0c22
.org 0x66076
	bl 0x129258	@ 00066076 c3f0eff8
.org 0x6607a
	str r6, [sp, #64]	@ 0006607a 1096
.org 0x6607c
	add r2, sp, #64	@ 0006607c 10aa
.org 0x6607e
	str r4, [r2, #4]	@ 0006607e 5460
.org 0x66080
	movs r0, #0	@ 00066080 0020
.org 0x66082
	mov r9, r0	@ 00066082 8146
.org 0x66084
	ldr r0, [pc, #96]	@ 00066084 1848
.org 0x66086
	ldr r0, [r0, #0]	@ 00066086 0068
.org 0x66088
	ldr r0, [r0, #84]	@ 00066088 406d
.org 0x6608a
	ldr r1, [r7, #84]	@ 0006608a 796d
.org 0x6608c
	subs r0, r0, r1	@ 0006608c 401a
.org 0x6608e
	ldr r1, [pc, #92]	@ 0006608e 1749
.org 0x66090
	adds r0, r0, r1	@ 00066090 4018
.org 0x66092
	ldr r1, [pc, #92]	@ 00066092 1749
.org 0x66094
	mov r8, r2	@ 00066094 9046
.org 0x66096
	cmp r0, r1	@ 00066096 8842
.org 0x66098
	bls.n 0x6609e	@ 00066098 01d9
.org 0x6609a
	movs r0, #1	@ 0006609a 0120
.org 0x6609c
	mov r9, r0	@ 0006609c 8146
.org 0x6609e
	adds r0, r7, #0	@ 0006609e 381c
.org 0x660a0
	bl 0x66160	@ 000660a0 00f05ef8
.org 0x660a4
	adds r4, r0, #0	@ 000660a4 041c
.org 0x660a6
	adds r0, r7, #0	@ 000660a6 381c
.org 0x660a8
	adds r0, #205	@ 000660a8 cd30
.org 0x660aa
	ldrb r1, [r0, #0]	@ 000660aa 0178
.org 0x660ac
	adds r6, r0, #0	@ 000660ac 061c
.org 0x660ae
	adds r5, r7, #0	@ 000660ae 3d1c
.org 0x660b0
	adds r5, #204	@ 000660b0 cc35
.org 0x660b2
	mov r0, r9	@ 000660b2 4846
.org 0x660b4
	lsls r0, r0, #2	@ 000660b4 8000
.org 0x660b6
	mov r9, r0	@ 000660b6 8146
.org 0x660b8
	cmp r1, #2	@ 000660b8 0229
.org 0x660ba
	bls.n 0x66112	@ 000660ba 2ad9
.org 0x660bc
	ldrb r2, [r5, #0]	@ 000660bc 2a78
.org 0x660be
	movs r3, #0	@ 000660be 0023
.org 0x660c0
	mov r0, sp	@ 000660c0 6846
.org 0x660c2
	ldrb r0, [r0, #0]	@ 000660c2 0078
.org 0x660c4
	cmp r0, r2	@ 000660c4 9042
.org 0x660c6
	bne.n 0x660f4	@ 000660c6 15d1
.org 0x660c8
	lsls r0, r4, #2	@ 000660c8 a000
.org 0x660ca
	add r0, r8	@ 000660ca 4044
.org 0x660cc
	ldr r0, [r0, #0]	@ 000660cc 0068
.org 0x660ce
	str r3, [r0, #0]	@ 000660ce 0360
.org 0x660d0
	b.n 0x66112	@ 000660d0 1fe0
.org 0x660d2
	.byte 0x00	@ 000660d2 data
.org 0x660d3
	.byte 0x00	@ 000660d3 data
.org 0x660d4
	.byte 0xab,0x98,0x12,0x08	@ 000660d4 data
.org 0x660d8
	.byte 0xad,0x98,0x12,0x08	@ 000660d8 data
.org 0x660dc
	.byte 0xaf,0x98,0x12,0x08	@ 000660dc data
.org 0x660e0
	.byte 0xb1,0x98,0x12,0x08	@ 000660e0 data
.org 0x660e4
	.byte 0xb3,0x98,0x12,0x08	@ 000660e4 data
.org 0x660e8
	.byte 0xf0,0xdb,0x02,0x02	@ 000660e8 data
.org 0x660ec
	.byte 0xff,0x3f,0x00,0x00	@ 000660ec data
.org 0x660f0
	.byte 0xfe,0x7f,0x00,0x00	@ 000660f0 data
.org 0x660f4
	adds r3, #1	@ 000660f4 0133
.org 0x660f6
	cmp r3, #1	@ 000660f6 012b
.org 0x660f8
	bgt.n 0x66112	@ 000660f8 0bdc
.org 0x660fa
	mov r1, sp	@ 000660fa 6946
.org 0x660fc
	adds r0, r1, r3	@ 000660fc c818
.org 0x660fe
	ldrb r0, [r0, #0]	@ 000660fe 0078
.org 0x66100
	cmp r0, r2	@ 00066100 9042
.org 0x66102
	bne.n 0x660f4	@ 00066102 f7d1
.org 0x66104
	lsls r0, r4, #2	@ 00066104 a000
.org 0x66106
	add r0, r8	@ 00066106 4044
.org 0x66108
	ldr r1, [r0, #0]	@ 00066108 0168
.org 0x6610a
	lsls r0, r3, #2	@ 0006610a 9800
.org 0x6610c
	adds r0, r0, r1	@ 0006610c 4018
.org 0x6610e
	movs r1, #0	@ 0006610e 0021
.org 0x66110
	str r1, [r0, #0]	@ 00066110 0160
.org 0x66112
	mov r0, r9	@ 00066112 4846
.org 0x66114
	add r0, r8	@ 00066114 4044
.org 0x66116
	ldr r1, [r0, #0]	@ 00066116 0168
.org 0x66118
	lsls r0, r4, #2	@ 00066118 a000
.org 0x6611a
	adds r0, r0, r1	@ 0006611a 4018
.org 0x6611c
	ldr r0, [r0, #0]	@ 0006611c 0068
.org 0x6611e
	movs r1, #2	@ 0006611e 0221
.org 0x66120
	bl 0x6635c	@ 00066120 00f01cf9
.org 0x66124
	add r0, sp	@ 00066124 6844
.org 0x66126
	ldrb r2, [r0, #0]	@ 00066126 0278
.org 0x66128
	ldr r0, [pc, #24]	@ 00066128 0648
.org 0x6612a
	adds r0, r2, r0	@ 0006612a 1018
.org 0x6612c
	ldrb r0, [r0, #0]	@ 0006612c 0078
.org 0x6612e
	movs r1, #0	@ 0006612e 0021
.org 0x66130
	strb r0, [r7, #13]	@ 00066130 7873
.org 0x66132
	strb r1, [r7, #14]	@ 00066132 b973
.org 0x66134
	strb r1, [r7, #15]	@ 00066134 f973
