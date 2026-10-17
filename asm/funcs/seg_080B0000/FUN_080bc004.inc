@ FUN_080bc004  entry 0x080bc004  size 258
.thumb
.org 0xbc004
FUN_080bc004:
	push {r4, r5, r6, lr}	@ 000bc004 70b5
.org 0xbc006
	sub sp, #24	@ 000bc006 86b0
.org 0xbc008
	adds r5, r0, #0	@ 000bc008 051c
.org 0xbc00a
	ldr r0, [pc, #128]	@ 000bc00a 2048
.org 0xbc00c
	ldr r1, [r0, #4]	@ 000bc00c 4168
.org 0xbc00e
	ldr r0, [r0, #0]	@ 000bc00e 0068
.org 0xbc010
	str r0, [sp, #16]	@ 000bc010 0490
.org 0xbc012
	str r1, [sp, #20]	@ 000bc012 0591
.org 0xbc014
	mov r1, sp	@ 000bc014 6946
.org 0xbc016
	ldr r0, [pc, #120]	@ 000bc016 1e48
.org 0xbc018
	ldmia r0!, {r2, r3, r4}	@ 000bc018 1cc8
.org 0xbc01a
	stmia r1!, {r2, r3, r4}	@ 000bc01a 1cc1
.org 0xbc01c
	ldr r0, [r0, #0]	@ 000bc01c 0068
.org 0xbc01e
	str r0, [r1, #0]	@ 000bc01e 0860
.org 0xbc020
	ldrb r6, [r5, #16]	@ 000bc020 2e7c
.org 0xbc022
	ldrb r0, [r5, #15]	@ 000bc022 e87b
.org 0xbc024
	cmp r0, #0	@ 000bc024 0028
.org 0xbc026
	bne.n 0xbc0ea	@ 000bc026 60d1
.org 0xbc028
	adds r0, r5, #0	@ 000bc028 281c
.org 0xbc02a
	adds r0, #116	@ 000bc02a 7430
.org 0xbc02c
	ldr r1, [pc, #100]	@ 000bc02c 1949
.org 0xbc02e
	bl 0x5784	@ 000bc02e 49f7a9fb
.org 0xbc032
	ldr r1, [pc, #100]	@ 000bc032 1949
.org 0xbc034
	movs r4, #0	@ 000bc034 0024
.org 0xbc036
	ldr r0, [pc, #100]	@ 000bc036 1948
.org 0xbc038
	strh r0, [r1, #0]	@ 000bc038 0880
.org 0xbc03a
	adds r2, r5, #0	@ 000bc03a 2a1c
.org 0xbc03c
	adds r2, #69	@ 000bc03c 4532
.org 0xbc03e
	ldrb r1, [r2, #0]	@ 000bc03e 1178
.org 0xbc040
	movs r0, #13	@ 000bc040 0d20
.org 0xbc042
	negs r0, r0	@ 000bc042 4042
.org 0xbc044
	ands r0, r1	@ 000bc044 0840
.org 0xbc046
	movs r1, #4	@ 000bc046 0421
.org 0xbc048
	orrs r0, r1	@ 000bc048 0843
.org 0xbc04a
	strb r0, [r2, #0]	@ 000bc04a 1070
.org 0xbc04c
	adds r0, r5, #0	@ 000bc04c 281c
.org 0xbc04e
	bl 0x1ceec	@ 000bc04e 60f74dff
.org 0xbc052
	adds r0, r5, #0	@ 000bc052 281c
.org 0xbc054
	adds r0, #34	@ 000bc054 2230
.org 0xbc056
	strb r4, [r0, #0]	@ 000bc056 0470
.org 0xbc058
	lsls r0, r6, #2	@ 000bc058 b000
.org 0xbc05a
	add r1, sp, #16	@ 000bc05a 04a9
.org 0xbc05c
	adds r0, r0, r1	@ 000bc05c 4018
.org 0xbc05e
	ldrh r1, [r0, #0]	@ 000bc05e 0188
.org 0xbc060
	adds r0, r5, #0	@ 000bc060 281c
.org 0xbc062
	bl 0x1cf00	@ 000bc062 60f74dff
.org 0xbc066
	adds r1, r5, #0	@ 000bc066 291c
.org 0xbc068
	adds r1, #37	@ 000bc068 2531
.org 0xbc06a
	movs r0, #24	@ 000bc06a 1820
.org 0xbc06c
	strb r0, [r1, #0]	@ 000bc06c 0870
.org 0xbc06e
	movs r2, #0	@ 000bc06e 0022
.org 0xbc070
	ldr r0, [pc, #44]	@ 000bc070 0b48
.org 0xbc072
	ldr r0, [r0, #0]	@ 000bc072 0068
.org 0xbc074
	ldr r1, [r5, #84]	@ 000bc074 696d
.org 0xbc076
	ldr r0, [r0, #84]	@ 000bc076 406d
.org 0xbc078
	cmp r1, r0	@ 000bc078 8142
.org 0xbc07a
	bge.n 0xbc07e	@ 000bc07a 00da
.org 0xbc07c
	movs r2, #1	@ 000bc07c 0122
.org 0xbc07e
	cmp r2, #0	@ 000bc07e 002a
.org 0xbc080
	beq.n 0xbc0a4	@ 000bc080 10d0
.org 0xbc082
	ldrb r0, [r5, #10]	@ 000bc082 a87a
.org 0xbc084
	movs r1, #16	@ 000bc084 1021
.org 0xbc086
	orrs r0, r1	@ 000bc086 0843
.org 0xbc088
	b.n 0xbc0aa	@ 000bc088 0fe0
.org 0xbc08a
	.byte 0x00	@ 000bc08a data
.org 0xbc08b
	.byte 0x00	@ 000bc08b data
.org 0xbc08c
	.byte 0x54,0xa0,0x12,0x08	@ 000bc08c data
.org 0xbc090
	.byte 0x5c,0xa0,0x12,0x08	@ 000bc090 data
.org 0xbc094
	.byte 0x8c,0x46,0x86,0x08	@ 000bc094 data
.org 0xbc098
	.byte 0x40,0x0a,0x00,0x02	@ 000bc098 data
.org 0xbc09c
	.byte 0x10,0x3f,0x00,0x00	@ 000bc09c data
.org 0xbc0a0
	.byte 0xf0,0xdb,0x02,0x02	@ 000bc0a0 data
.org 0xbc0a4
	ldrb r1, [r5, #10]	@ 000bc0a4 a97a
.org 0xbc0a6
	movs r0, #239	@ 000bc0a6 ef20
.org 0xbc0a8
	ands r0, r1	@ 000bc0a8 0840
.org 0xbc0aa
	strb r0, [r5, #10]	@ 000bc0aa a872
.org 0xbc0ac
	adds r1, r2, #0	@ 000bc0ac 111c
.org 0xbc0ae
	adds r0, r5, #0	@ 000bc0ae 281c
.org 0xbc0b0
	adds r0, #76	@ 000bc0b0 4c30
.org 0xbc0b2
	strb r1, [r0, #0]	@ 000bc0b2 0170
.org 0xbc0b4
	adds r3, r5, #0	@ 000bc0b4 2b1c
.org 0xbc0b6
	adds r3, #74	@ 000bc0b6 4a33
.org 0xbc0b8
	lsls r1, r1, #4	@ 000bc0b8 0901
.org 0xbc0ba
	ldrb r2, [r3, #0]	@ 000bc0ba 1a78
.org 0xbc0bc
	movs r0, #17	@ 000bc0bc 1120
.org 0xbc0be
	negs r0, r0	@ 000bc0be 4042
.org 0xbc0c0
	ands r0, r2	@ 000bc0c0 1040
.org 0xbc0c2
	orrs r0, r1	@ 000bc0c2 0843
.org 0xbc0c4
	strb r0, [r3, #0]	@ 000bc0c4 1870
.org 0xbc0c6
	lsls r2, r6, #3	@ 000bc0c6 f200
.org 0xbc0c8
	mov r0, sp	@ 000bc0c8 6846
.org 0xbc0ca
	adds r1, r0, r2	@ 000bc0ca 8118
.org 0xbc0cc
	ldr r0, [r5, #84]	@ 000bc0cc 686d
.org 0xbc0ce
	ldr r1, [r1, #0]	@ 000bc0ce 0968
.org 0xbc0d0
	adds r0, r0, r1	@ 000bc0d0 4018
.org 0xbc0d2
	str r0, [r5, #84]	@ 000bc0d2 6865
.org 0xbc0d4
	add r0, sp, #4	@ 000bc0d4 01a8
.org 0xbc0d6
	adds r0, r0, r2	@ 000bc0d6 8018
.org 0xbc0d8
	ldr r1, [r5, #88]	@ 000bc0d8 a96d
.org 0xbc0da
	ldr r0, [r0, #0]	@ 000bc0da 0068
.org 0xbc0dc
	adds r1, r1, r0	@ 000bc0dc 0918
.org 0xbc0de
	str r1, [r5, #88]	@ 000bc0de a965
.org 0xbc0e0
	movs r0, #16	@ 000bc0e0 1020
.org 0xbc0e2
	strb r0, [r5, #18]	@ 000bc0e2 a874
.org 0xbc0e4
	ldrb r0, [r5, #15]	@ 000bc0e4 e87b
.org 0xbc0e6
	adds r0, #1	@ 000bc0e6 0130
.org 0xbc0e8
	strb r0, [r5, #15]	@ 000bc0e8 e873
.org 0xbc0ea
	adds r0, r5, #0	@ 000bc0ea 281c
.org 0xbc0ec
	bl 0x1cff0	@ 000bc0ec 60f780ff
.org 0xbc0f0
	ldrb r3, [r5, #18]	@ 000bc0f0 ab7c
.org 0xbc0f2
	subs r3, #1	@ 000bc0f2 013b
.org 0xbc0f4
	strb r3, [r5, #18]	@ 000bc0f4 ab74
.org 0xbc0f6
	ldrb r2, [r5, #18]	@ 000bc0f6 aa7c
.org 0xbc0f8
	ldr r4, [pc, #36]	@ 000bc0f8 094c
.org 0xbc0fa
	movs r0, #16	@ 000bc0fa 1020
.org 0xbc0fc
	subs r0, r0, r2	@ 000bc0fc 801a
.org 0xbc0fe
	movs r1, #31	@ 000bc0fe 1f21
.org 0xbc100
	ands r0, r1	@ 000bc100 0840
.org 0xbc102
	lsls r2, r2, #8	@ 000bc102 1202
.org 0xbc104
	orrs r0, r2	@ 000bc104 1043
