@ FUN_0805ef70  entry 0x0805ef70  size 266
.thumb
.org 0x5ef70
FUN_0805ef70:
	push {r4, r5, r6, r7, lr}	@ 0005ef70 f0b5
.org 0x5ef72
	mov r7, r9	@ 0005ef72 4f46
.org 0x5ef74
	mov r6, r8	@ 0005ef74 4646
.org 0x5ef76
	push {r6, r7}	@ 0005ef76 c0b4
.org 0x5ef78
	sub sp, #72	@ 0005ef78 92b0
.org 0x5ef7a
	adds r7, r0, #0	@ 0005ef7a 071c
.org 0x5ef7c
	ldr r4, [pc, #232]	@ 0005ef7c 3a4c
.org 0x5ef7e
	mov r0, sp	@ 0005ef7e 6846
.org 0x5ef80
	adds r1, r4, #0	@ 0005ef80 211c
.org 0x5ef82
	movs r2, #3	@ 0005ef82 0322
.org 0x5ef84
	bl 0x129258	@ 0005ef84 caf068f9
.org 0x5ef88
	add r6, sp, #4	@ 0005ef88 01ae
.org 0x5ef8a
	adds r0, r6, #0	@ 0005ef8a 301c
.org 0x5ef8c
	adds r1, r4, #0	@ 0005ef8c 211c
.org 0x5ef8e
	movs r2, #3	@ 0005ef8e 0322
.org 0x5ef90
	bl 0x129258	@ 0005ef90 caf062f9
.org 0x5ef94
	add r5, sp, #8	@ 0005ef94 02ad
.org 0x5ef96
	adds r0, r5, #0	@ 0005ef96 281c
.org 0x5ef98
	adds r1, r4, #0	@ 0005ef98 211c
.org 0x5ef9a
	movs r2, #3	@ 0005ef9a 0322
.org 0x5ef9c
	bl 0x129258	@ 0005ef9c caf05cf9
.org 0x5efa0
	add r0, sp, #12	@ 0005efa0 03a8
.org 0x5efa2
	mov r9, r0	@ 0005efa2 8146
.org 0x5efa4
	mov r0, sp	@ 0005efa4 6846
.org 0x5efa6
	str r0, [sp, #24]	@ 0005efa6 0690
.org 0x5efa8
	str r6, [sp, #28]	@ 0005efa8 0796
.org 0x5efaa
	str r5, [sp, #32]	@ 0005efaa 0895
.org 0x5efac
	add r5, sp, #24	@ 0005efac 06ad
.org 0x5efae
	mov r0, r9	@ 0005efae 4846
.org 0x5efb0
	adds r1, r5, #0	@ 0005efb0 291c
.org 0x5efb2
	movs r2, #12	@ 0005efb2 0c22
.org 0x5efb4
	bl 0x129258	@ 0005efb4 caf050f9
.org 0x5efb8
	ldr r1, [pc, #176]	@ 0005efb8 2c49
.org 0x5efba
	adds r0, r5, #0	@ 0005efba 281c
.org 0x5efbc
	movs r2, #3	@ 0005efbc 0322
.org 0x5efbe
	bl 0x129258	@ 0005efbe caf04bf9
.org 0x5efc2
	add r0, sp, #28	@ 0005efc2 07a8
.org 0x5efc4
	mov r8, r0	@ 0005efc4 8046
.org 0x5efc6
	ldr r1, [pc, #168]	@ 0005efc6 2a49
.org 0x5efc8
	movs r2, #3	@ 0005efc8 0322
.org 0x5efca
	bl 0x129258	@ 0005efca caf045f9
.org 0x5efce
	add r6, sp, #32	@ 0005efce 08ae
.org 0x5efd0
	ldr r1, [pc, #160]	@ 0005efd0 2849
.org 0x5efd2
	adds r0, r6, #0	@ 0005efd2 301c
.org 0x5efd4
	movs r2, #3	@ 0005efd4 0322
.org 0x5efd6
	bl 0x129258	@ 0005efd6 caf03ff9
.org 0x5efda
	add r4, sp, #36	@ 0005efda 09ac
.org 0x5efdc
	str r5, [sp, #48]	@ 0005efdc 0c95
.org 0x5efde
	mov r0, r8	@ 0005efde 4046
.org 0x5efe0
	str r0, [sp, #52]	@ 0005efe0 0d90
.org 0x5efe2
	str r6, [sp, #56]	@ 0005efe2 0e96
.org 0x5efe4
	add r5, sp, #48	@ 0005efe4 0cad
.org 0x5efe6
	adds r0, r4, #0	@ 0005efe6 201c
.org 0x5efe8
	adds r1, r5, #0	@ 0005efe8 291c
.org 0x5efea
	movs r2, #12	@ 0005efea 0c22
.org 0x5efec
	bl 0x129258	@ 0005efec caf034f9
.org 0x5eff0
	str r4, [sp, #60]	@ 0005eff0 0f94
.org 0x5eff2
	str r4, [sp, #64]	@ 0005eff2 1094
.org 0x5eff4
	str r4, [sp, #68]	@ 0005eff4 1194
.org 0x5eff6
	add r1, sp, #60	@ 0005eff6 0fa9
.org 0x5eff8
	adds r0, r5, #0	@ 0005eff8 281c
.org 0x5effa
	movs r2, #12	@ 0005effa 0c22
.org 0x5effc
	bl 0x129258	@ 0005effc caf02cf9
.org 0x5f000
	ldrb r4, [r7, #16]	@ 0005f000 3c7c
.org 0x5f002
	mov r8, r4	@ 0005f002 a046
.org 0x5f004
	adds r0, r7, #0	@ 0005f004 381c
.org 0x5f006
	bl 0x5f150	@ 0005f006 00f0a3f8
.org 0x5f00a
	adds r3, r0, #0	@ 0005f00a 031c
.org 0x5f00c
	adds r6, r7, #0	@ 0005f00c 3e1c
.org 0x5f00e
	adds r6, #186	@ 0005f00e ba36
.org 0x5f010
	ldrb r0, [r6, #0]	@ 0005f010 3078
.org 0x5f012
	cmp r0, #2	@ 0005f012 0228
.org 0x5f014
	bls.n 0x5f02e	@ 0005f014 0bd9
.org 0x5f016
	adds r0, r7, #0	@ 0005f016 381c
.org 0x5f018
	adds r0, #185	@ 0005f018 b930
.org 0x5f01a
	ldrb r2, [r0, #0]	@ 0005f01a 0278
.org 0x5f01c
	lsls r0, r4, #2	@ 0005f01c a000
.org 0x5f01e
	adds r0, r5, r0	@ 0005f01e 2818
.org 0x5f020
	ldr r1, [r0, #0]	@ 0005f020 0168
.org 0x5f022
	lsls r0, r3, #2	@ 0005f022 9800
.org 0x5f024
	adds r0, r0, r1	@ 0005f024 4018
.org 0x5f026
	ldr r0, [r0, #0]	@ 0005f026 0068
.org 0x5f028
	adds r0, r0, r2	@ 0005f028 8018
.org 0x5f02a
	movs r1, #0	@ 0005f02a 0021
.org 0x5f02c
	strb r1, [r0, #0]	@ 0005f02c 0170
.org 0x5f02e
	mov r0, r8	@ 0005f02e 4046
.org 0x5f030
	lsls r4, r0, #2	@ 0005f030 8400
.org 0x5f032
	adds r0, r5, r4	@ 0005f032 2819
.org 0x5f034
	ldr r1, [r0, #0]	@ 0005f034 0168
.org 0x5f036
	lsls r0, r3, #2	@ 0005f036 9800
.org 0x5f038
	adds r0, r0, r1	@ 0005f038 4018
.org 0x5f03a
	ldr r0, [r0, #0]	@ 0005f03a 0068
.org 0x5f03c
	movs r1, #3	@ 0005f03c 0321
.org 0x5f03e
	bl 0x5f194	@ 0005f03e 00f0a9f8
.org 0x5f042
	adds r2, r0, #0	@ 0005f042 021c
.org 0x5f044
	add r4, r9	@ 0005f044 4c44
.org 0x5f046
	ldr r0, [r4, #0]	@ 0005f046 2068
.org 0x5f048
	adds r0, r0, r2	@ 0005f048 8018
.org 0x5f04a
	ldrb r0, [r0, #0]	@ 0005f04a 0078
.org 0x5f04c
	movs r1, #0	@ 0005f04c 0021
.org 0x5f04e
	strb r0, [r7, #13]	@ 0005f04e 7873
.org 0x5f050
	strb r1, [r7, #14]	@ 0005f050 b973
.org 0x5f052
	strb r1, [r7, #15]	@ 0005f052 f973
.org 0x5f054
	adds r1, r7, #0	@ 0005f054 391c
.org 0x5f056
	adds r1, #185	@ 0005f056 b931
.org 0x5f058
	ldrb r0, [r1, #0]	@ 0005f058 0878
.org 0x5f05a
	cmp r2, r0	@ 0005f05a 8242
.org 0x5f05c
	bne.n 0x5f078	@ 0005f05c 0cd1
.org 0x5f05e
	ldrb r0, [r6, #0]	@ 0005f05e 3078
.org 0x5f060
	adds r0, #1	@ 0005f060 0130
.org 0x5f062
	strb r0, [r6, #0]	@ 0005f062 3070
.org 0x5f064
	b.n 0x5f07e	@ 0005f064 0be0
.org 0x5f066
	.byte 0x00	@ 0005f066 data
.org 0x5f067
	.byte 0x00	@ 0005f067 data
.org 0x5f068
	.byte 0xd8,0x97,0x12,0x08	@ 0005f068 data
.org 0x5f06c
	.byte 0xdb,0x97,0x12,0x08	@ 0005f06c data
.org 0x5f070
	.byte 0xde,0x97,0x12,0x08	@ 0005f070 data
.org 0x5f074
	.byte 0xe1,0x97,0x12,0x08	@ 0005f074 data
.org 0x5f078
	movs r0, #1	@ 0005f078 0120
