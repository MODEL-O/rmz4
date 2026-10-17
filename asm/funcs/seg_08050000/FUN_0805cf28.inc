@ FUN_0805cf28  entry 0x0805cf28  size 408
.thumb
.org 0x5cf28
FUN_0805cf28:
	push {r4, r5, r6, r7, lr}	@ 0005cf28 f0b5
.org 0x5cf2a
	mov r7, sl	@ 0005cf2a 5746
.org 0x5cf2c
	mov r6, r9	@ 0005cf2c 4e46
.org 0x5cf2e
	mov r5, r8	@ 0005cf2e 4546
.org 0x5cf30
	push {r5, r6, r7}	@ 0005cf30 e0b4
.org 0x5cf32
	sub sp, #36	@ 0005cf32 89b0
.org 0x5cf34
	adds r5, r0, #0	@ 0005cf34 051c
.org 0x5cf36
	ldr r1, [pc, #256]	@ 0005cf36 4049
.org 0x5cf38
	mov r0, sp	@ 0005cf38 6846
.org 0x5cf3a
	movs r2, #6	@ 0005cf3a 0622
.org 0x5cf3c
	bl 0x129258	@ 0005cf3c ccf08cf9
.org 0x5cf40
	add r0, sp, #8	@ 0005cf40 02a8
.org 0x5cf42
	mov sl, r0	@ 0005cf42 8246
.org 0x5cf44
	ldr r1, [pc, #244]	@ 0005cf44 3d49
.org 0x5cf46
	movs r2, #6	@ 0005cf46 0622
.org 0x5cf48
	bl 0x129258	@ 0005cf48 ccf086f9
.org 0x5cf4c
	add r2, sp, #16	@ 0005cf4c 04aa
.org 0x5cf4e
	mov r9, r2	@ 0005cf4e 9146
.org 0x5cf50
	ldr r1, [pc, #236]	@ 0005cf50 3b49
.org 0x5cf52
	mov r0, r9	@ 0005cf52 4846
.org 0x5cf54
	movs r2, #6	@ 0005cf54 0622
.org 0x5cf56
	bl 0x129258	@ 0005cf56 ccf07ff9
.org 0x5cf5a
	add r0, sp, #24	@ 0005cf5a 06a8
.org 0x5cf5c
	mov r8, r0	@ 0005cf5c 8046
.org 0x5cf5e
	ldr r1, [pc, #228]	@ 0005cf5e 3949
.org 0x5cf60
	movs r2, #6	@ 0005cf60 0622
.org 0x5cf62
	bl 0x129258	@ 0005cf62 ccf079f9
.org 0x5cf66
	ldr r0, [pc, #224]	@ 0005cf66 3848
.org 0x5cf68
	ldr r0, [r0, #0]	@ 0005cf68 0068
.org 0x5cf6a
	str r0, [sp, #32]	@ 0005cf6a 0890
.org 0x5cf6c
	ldrb r6, [r5, #16]	@ 0005cf6c 2e7c
.org 0x5cf6e
	ldrb r0, [r5, #10]	@ 0005cf6e a87a
.org 0x5cf70
	lsrs r4, r0, #4	@ 0005cf70 0409
.org 0x5cf72
	movs r0, #1	@ 0005cf72 0120
.org 0x5cf74
	ands r4, r0	@ 0005cf74 0440
.org 0x5cf76
	adds r0, r5, #0	@ 0005cf76 281c
.org 0x5cf78
	bl 0x5f150	@ 0005cf78 02f0eaf8
.org 0x5cf7c
	lsls r0, r0, #24	@ 0005cf7c 0006
.org 0x5cf7e
	lsrs r7, r0, #24	@ 0005cf7e 070e
.org 0x5cf80
	ldrb r0, [r5, #15]	@ 0005cf80 e87b
.org 0x5cf82
	cmp r0, #0	@ 0005cf82 0028
.org 0x5cf84
	bne.n 0x5cfb8	@ 0005cf84 18d1
.org 0x5cf86
	lsls r0, r6, #1	@ 0005cf86 7000
.org 0x5cf88
	add r0, sp	@ 0005cf88 6844
.org 0x5cf8a
	ldrb r1, [r0, #0]	@ 0005cf8a 0178
.org 0x5cf8c
	adds r0, r5, #0	@ 0005cf8c 281c
.org 0x5cf8e
	bl 0x5ee6c	@ 0005cf8e 01f06dff
.org 0x5cf92
	lsls r0, r4, #1	@ 0005cf92 6000
.org 0x5cf94
	subs r0, #1	@ 0005cf94 0138
.org 0x5cf96
	str r0, [r5, #100]	@ 0005cf96 6866
.org 0x5cf98
	lsls r1, r7, #1	@ 0005cf98 7900
.org 0x5cf9a
	mov r2, sl	@ 0005cf9a 5246
.org 0x5cf9c
	adds r0, r2, r1	@ 0005cf9c 5018
.org 0x5cf9e
	ldrh r0, [r0, #0]	@ 0005cf9e 0088
.org 0x5cfa0
	str r0, [r5, #92]	@ 0005cfa0 e865
.org 0x5cfa2
	mov r2, r9	@ 0005cfa2 4a46
.org 0x5cfa4
	adds r0, r2, r1	@ 0005cfa4 5018
.org 0x5cfa6
	ldrh r0, [r0, #0]	@ 0005cfa6 0088
.org 0x5cfa8
	str r0, [r5, #96]	@ 0005cfa8 2866
.org 0x5cfaa
	add r1, r8	@ 0005cfaa 4144
.org 0x5cfac
	ldrh r0, [r1, #0]	@ 0005cfac 0888
.org 0x5cfae
	negs r0, r0	@ 0005cfae 4042
.org 0x5cfb0
	str r0, [r5, #104]	@ 0005cfb0 a866
.org 0x5cfb2
	ldrb r0, [r5, #15]	@ 0005cfb2 e87b
.org 0x5cfb4
	adds r0, #1	@ 0005cfb4 0130
.org 0x5cfb6
	strb r0, [r5, #15]	@ 0005cfb6 e873
.org 0x5cfb8
	adds r0, r5, #0	@ 0005cfb8 281c
.org 0x5cfba
	bl 0x1cff0	@ 0005cfba c0f719f8
.org 0x5cfbe
	adds r0, r5, #0	@ 0005cfbe 281c
.org 0x5cfc0
	adds r0, #116	@ 0005cfc0 7430
.org 0x5cfc2
	ldr r4, [pc, #136]	@ 0005cfc2 224c
.org 0x5cfc4
	ldr r3, [pc, #136]	@ 0005cfc4 224b
.org 0x5cfc6
	adds r1, r5, #0	@ 0005cfc6 291c
.org 0x5cfc8
	adds r1, #184	@ 0005cfc8 b831
.org 0x5cfca
	ldrb r2, [r1, #0]	@ 0005cfca 0a78
.org 0x5cfcc
	lsls r1, r2, #1	@ 0005cfcc 5100
.org 0x5cfce
	adds r1, r1, r3	@ 0005cfce c918
.org 0x5cfd0
	ldrh r1, [r1, #0]	@ 0005cfd0 0988
.org 0x5cfd2
	lsls r1, r1, #2	@ 0005cfd2 8900
.org 0x5cfd4
	adds r1, r1, r4	@ 0005cfd4 0919
.org 0x5cfd6
	adds r3, r5, #0	@ 0005cfd6 2b1c
.org 0x5cfd8
	adds r3, #113	@ 0005cfd8 7133
.org 0x5cfda
	movs r4, #0	@ 0005cfda 0024
.org 0x5cfdc
	ldrsb r4, [r3, r4]	@ 0005cfdc 1c57
.org 0x5cfde
	ldr r1, [r1, #0]	@ 0005cfde 0968
.org 0x5cfe0
	lsls r3, r4, #2	@ 0005cfe0 a300
.org 0x5cfe2
	adds r3, r3, r1	@ 0005cfe2 5b18
.org 0x5cfe4
	ldr r1, [pc, #108]	@ 0005cfe4 1b49
.org 0x5cfe6
	lsls r2, r2, #2	@ 0005cfe6 9200
.org 0x5cfe8
	adds r2, r2, r1	@ 0005cfe8 5218
.org 0x5cfea
	ldr r1, [r2, #0]	@ 0005cfea 1168
.org 0x5cfec
	adds r1, r1, r4	@ 0005cfec 0919
.org 0x5cfee
	ldrb r1, [r1, #0]	@ 0005cfee 0978
.org 0x5cff0
	lsls r2, r1, #1	@ 0005cff0 4a00
.org 0x5cff2
	adds r2, r2, r1	@ 0005cff2 5218
.org 0x5cff4
	lsls r2, r2, #3	@ 0005cff4 d200
.org 0x5cff6
	ldr r1, [r3, #0]	@ 0005cff6 1968
.org 0x5cff8
	adds r1, r1, r2	@ 0005cff8 8918
.org 0x5cffa
	bl 0x5784	@ 0005cffa a8f7c3fb
.org 0x5cffe
	adds r2, r5, #0	@ 0005cffe 2a1c
.org 0x5d000
	adds r2, #140	@ 0005d000 8c32
.org 0x5d002
	ldr r0, [sp, #32]	@ 0005d002 0898
.org 0x5d004
	cmp r0, #0	@ 0005d004 0028
.org 0x5d006
	beq.n 0x5d05c	@ 0005d006 29d0
.org 0x5d008
	ldr r0, [r2, #0]	@ 0005d008 1068
.org 0x5d00a
	movs r1, #128	@ 0005d00a 8021
.org 0x5d00c
	lsls r1, r1, #4	@ 0005d00c 0901
.org 0x5d00e
	ands r0, r1	@ 0005d00e 0840
.org 0x5d010
	cmp r0, #0	@ 0005d010 0028
.org 0x5d012
	beq.n 0x5d05c	@ 0005d012 23d0
.org 0x5d014
	movs r4, #0	@ 0005d014 0024
.org 0x5d016
	ldr r2, [sp, #32]	@ 0005d016 089a
.org 0x5d018
	str r4, [r2, #96]	@ 0005d018 1466
.org 0x5d01a
	adds r0, r5, #0	@ 0005d01a 281c
.org 0x5d01c
	movs r1, #0	@ 0005d01c 0021
.org 0x5d01e
	movs r2, #0	@ 0005d01e 0022
.org 0x5d020
	bl 0x98314	@ 0005d020 3bf078f9
.org 0x5d024
	movs r0, #2	@ 0005d024 0220
.org 0x5d026
	strb r0, [r5, #14]	@ 0005d026 a873
.org 0x5d028
	strb r4, [r5, #15]	@ 0005d028 ec73
.org 0x5d02a
	ldr r0, [pc, #44]	@ 0005d02a 0b48
.org 0x5d02c
	ldr r1, [r0, #8]	@ 0005d02c 8168
.org 0x5d02e
	adds r0, r5, #0	@ 0005d02e 281c
.org 0x5d030
	bl 0x128f80	@ 0005d030 cbf0a6ff
.org 0x5d034
	b.n 0x5d0d6	@ 0005d034 4fe0
.org 0x5d036
	.byte 0x00	@ 0005d036 data
.org 0x5d037
	.byte 0x00	@ 0005d037 data
.org 0x5d038
	.byte 0x54,0x97,0x12,0x08	@ 0005d038 data
.org 0x5d03c
	.byte 0x4e,0x97,0x12,0x08	@ 0005d03c data
.org 0x5d040
	.byte 0x5a,0x97,0x12,0x08	@ 0005d040 data
.org 0x5d044
	.byte 0x60,0x97,0x12,0x08	@ 0005d044 data
.org 0x5d048
	.byte 0xf0,0xdb,0x02,0x02	@ 0005d048 data
.org 0x5d04c
	.byte 0xa8,0xa7,0x85,0x08	@ 0005d04c data
.org 0x5d050
	.byte 0x10,0xa9,0x85,0x08	@ 0005d050 data
.org 0x5d054
	.byte 0x44,0xa8,0x85,0x08	@ 0005d054 data
.org 0x5d058
	.byte 0xdc,0x89,0x85,0x08	@ 0005d058 data
.org 0x5d05c
	ldr r0, [r2, #0]	@ 0005d05c 1068
.org 0x5d05e
	movs r1, #1	@ 0005d05e 0121
.org 0x5d060
	ands r0, r1	@ 0005d060 0840
.org 0x5d062
	cmp r0, #0	@ 0005d062 0028
.org 0x5d064
	beq.n 0x5d08c	@ 0005d064 12d0
.org 0x5d066
	adds r0, r5, #0	@ 0005d066 281c
.org 0x5d068
	adds r0, #202	@ 0005d068 ca30
.org 0x5d06a
	movs r2, #0	@ 0005d06a 0022
.org 0x5d06c
	ldrsh r1, [r0, r2]	@ 0005d06c 815e
.org 0x5d06e
	subs r0, #38	@ 0005d06e 2638
.org 0x5d070
	movs r2, #0	@ 0005d070 0022
.org 0x5d072
	ldrsh r0, [r0, r2]	@ 0005d072 805e
.org 0x5d074
	subs r1, r1, r0	@ 0005d074 091a
.org 0x5d076
	lsls r1, r1, #6	@ 0005d076 8901
.org 0x5d078
	ldr r0, [r5, #92]	@ 0005d078 e86d
.org 0x5d07a
	subs r0, r0, r1	@ 0005d07a 401a
.org 0x5d07c
	str r0, [r5, #92]	@ 0005d07c e865
.org 0x5d07e
	movs r1, #128	@ 0005d07e 8021
.org 0x5d080
	lsls r1, r1, #1	@ 0005d080 4900
.org 0x5d082
	cmp r0, r1	@ 0005d082 8842
.org 0x5d084
	bgt.n 0x5d08c	@ 0005d084 02dc
.org 0x5d086
	movs r1, #0	@ 0005d086 0021
.org 0x5d088
	movs r0, #7	@ 0005d088 0720
.org 0x5d08a
	b.n 0x5d0d2	@ 0005d08a 22e0
.org 0x5d08c
	ldr r0, [r5, #92]	@ 0005d08c e86d
.org 0x5d08e
	ldr r2, [r5, #100]	@ 0005d08e 6a6e
.org 0x5d090
	adds r1, r0, #0	@ 0005d090 011c
.org 0x5d092
	muls r1, r2	@ 0005d092 5143
.org 0x5d094
	ldr r0, [r5, #84]	@ 0005d094 686d
.org 0x5d096
	adds r0, r0, r1	@ 0005d096 4018
.org 0x5d098
	str r0, [r5, #84]	@ 0005d098 6865
.org 0x5d09a
	ldr r0, [r5, #88]	@ 0005d09a a86d
.org 0x5d09c
	ldr r1, [r5, #96]	@ 0005d09c 296e
.org 0x5d09e
	adds r0, r0, r1	@ 0005d09e 4018
.org 0x5d0a0
	str r0, [r5, #88]	@ 0005d0a0 a865
.org 0x5d0a2
	ldr r0, [r5, #104]	@ 0005d0a2 a86e
.org 0x5d0a4
	adds r1, r1, r0	@ 0005d0a4 0918
.org 0x5d0a6
	str r1, [r5, #96]	@ 0005d0a6 2966
.org 0x5d0a8
	cmp r1, #0	@ 0005d0a8 0029
.org 0x5d0aa
	bge.n 0x5d0b0	@ 0005d0aa 01da
.org 0x5d0ac
	movs r0, #0	@ 0005d0ac 0020
.org 0x5d0ae
	str r0, [r5, #96]	@ 0005d0ae 2866
.org 0x5d0b0
	adds r1, r5, #0	@ 0005d0b0 291c
.org 0x5d0b2
	adds r1, #208	@ 0005d0b2 d031
.org 0x5d0b4
	lsls r0, r2, #1	@ 0005d0b4 5000
.org 0x5d0b6
	adds r0, r0, r2	@ 0005d0b6 8018
.org 0x5d0b8
	lsls r0, r0, #2	@ 0005d0b8 8000
.org 0x5d0ba
	subs r0, r0, r2	@ 0005d0ba 801a
.org 0x5d0bc
	lsls r0, r0, #11	@ 0005d0bc c002
.org 0x5d0be
	ldr r1, [r1, #0]	@ 0005d0be 0968
