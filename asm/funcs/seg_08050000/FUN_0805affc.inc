@ FUN_0805affc  entry 0x0805affc  size 214
.thumb
.org 0x5affc
FUN_0805affc:
	push {r4, r5, r6, lr}	@ 0005affc 70b5
.org 0x5affe
	sub sp, #8	@ 0005affe 82b0
.org 0x5b000
	adds r4, r0, #0	@ 0005b000 041c
.org 0x5b002
	ldrb r0, [r4, #15]	@ 0005b002 e07b
.org 0x5b004
	cmp r0, #0	@ 0005b004 0028
.org 0x5b006
	bne.n 0x5b034	@ 0005b006 15d1
.org 0x5b008
	movs r0, #191	@ 0005b008 bf20
.org 0x5b00a
	bl 0x2b10	@ 0005b00a a7f781fd
.org 0x5b00e
	adds r0, r4, #0	@ 0005b00e 201c
.org 0x5b010
	adds r0, #116	@ 0005b010 7430
.org 0x5b012
	ldr r1, [pc, #192]	@ 0005b012 3049
.org 0x5b014
	bl 0x5784	@ 0005b014 aaf7b6fb
.org 0x5b018
	ldr r1, [pc, #188]	@ 0005b018 2f49
.org 0x5b01a
	adds r0, r4, #0	@ 0005b01a 201c
.org 0x5b01c
	bl 0x1cf00	@ 0005b01c c1f770ff
.org 0x5b020
	adds r0, r4, #0	@ 0005b020 201c
.org 0x5b022
	adds r0, #189	@ 0005b022 bd30
.org 0x5b024
	movs r1, #1	@ 0005b024 0121
.org 0x5b026
	strb r1, [r0, #0]	@ 0005b026 0170
.org 0x5b028
	movs r0, #16	@ 0005b028 1020
.org 0x5b02a
	strb r0, [r4, #18]	@ 0005b02a a074
.org 0x5b02c
	strb r1, [r4, #19]	@ 0005b02c e174
.org 0x5b02e
	ldrb r0, [r4, #15]	@ 0005b02e e07b
.org 0x5b030
	adds r0, #1	@ 0005b030 0130
.org 0x5b032
	strb r0, [r4, #15]	@ 0005b032 e073
.org 0x5b034
	adds r0, r4, #0	@ 0005b034 201c
.org 0x5b036
	bl 0x1cff0	@ 0005b036 c1f7dbff
.org 0x5b03a
	adds r0, r4, #0	@ 0005b03a 201c
.org 0x5b03c
	adds r0, #115	@ 0005b03c 7330
.org 0x5b03e
	ldrb r0, [r0, #0]	@ 0005b03e 0078
.org 0x5b040
	cmp r0, #3	@ 0005b040 0328
.org 0x5b042
	bne.n 0x5b0ca	@ 0005b042 42d1
.org 0x5b044
	ldrb r0, [r4, #19]	@ 0005b044 e07c
.org 0x5b046
	cmp r0, #0	@ 0005b046 0028
.org 0x5b048
	beq.n 0x5b0b6	@ 0005b048 35d0
.org 0x5b04a
	ldr r0, [pc, #144]	@ 0005b04a 2448
.org 0x5b04c
	ldr r1, [pc, #144]	@ 0005b04c 2449
.org 0x5b04e
	adds r1, #144	@ 0005b04e 9031
.org 0x5b050
	ldrh r1, [r1, #0]	@ 0005b050 0988
.org 0x5b052
	ldrh r2, [r0, #6]	@ 0005b052 c288
.org 0x5b054
	lsrs r2, r2, #6	@ 0005b054 9209
.org 0x5b056
	subs r1, r1, r2	@ 0005b056 891a
.org 0x5b058
	lsls r1, r1, #5	@ 0005b058 4901
.org 0x5b05a
	movs r2, #128	@ 0005b05a 8022
.org 0x5b05c
	lsls r2, r2, #9	@ 0005b05c 5202
.org 0x5b05e
	adds r1, r1, r2	@ 0005b05e 8918
.org 0x5b060
	bl 0x1d30	@ 0005b060 a6f766fe
.org 0x5b064
	ldr r0, [pc, #124]	@ 0005b064 1f48
.org 0x5b066
	ldr r1, [pc, #128]	@ 0005b066 2049
.org 0x5b068
	adds r1, #144	@ 0005b068 9031
.org 0x5b06a
	ldrh r1, [r1, #0]	@ 0005b06a 0988
.org 0x5b06c
	ldrb r2, [r0, #7]	@ 0005b06c c279
.org 0x5b06e
	subs r1, r1, r2	@ 0005b06e 891a
.org 0x5b070
	lsls r1, r1, #5	@ 0005b070 4901
.org 0x5b072
	movs r2, #128	@ 0005b072 8022
.org 0x5b074
	lsls r2, r2, #2	@ 0005b074 9200
.org 0x5b076
	adds r1, r1, r2	@ 0005b076 8918
.org 0x5b078
	bl 0x2208	@ 0005b078 a7f7c6f8
.org 0x5b07c
	ldr r0, [r4, #84]	@ 0005b07c 606d
.org 0x5b07e
	str r0, [sp, #0]	@ 0005b07e 0090
.org 0x5b080
	ldr r0, [r4, #88]	@ 0005b080 a06d
.org 0x5b082
	ldr r1, [pc, #104]	@ 0005b082 1a49
.org 0x5b084
	adds r0, r0, r1	@ 0005b084 4018
.org 0x5b086
	str r0, [sp, #4]	@ 0005b086 0190
.org 0x5b088
	adds r5, r4, #0	@ 0005b088 251c
.org 0x5b08a
	adds r5, #200	@ 0005b08a c835
.org 0x5b08c
	ldr r0, [r5, #0]	@ 0005b08c 2868
.org 0x5b08e
	adds r6, r4, #0	@ 0005b08e 261c
.org 0x5b090
	adds r6, #191	@ 0005b090 bf36
.org 0x5b092
	cmp r0, #0	@ 0005b092 0028
.org 0x5b094
	beq.n 0x5b09c	@ 0005b094 02d0
.org 0x5b096
	ldrb r0, [r6, #0]	@ 0005b096 3078
.org 0x5b098
	cmp r0, #4	@ 0005b098 0428
.org 0x5b09a
	beq.n 0x5b0b2	@ 0005b09a 0ad0
.org 0x5b09c
	adds r0, r4, #0	@ 0005b09c 201c
.org 0x5b09e
	mov r1, sp	@ 0005b09e 6946
.org 0x5b0a0
	movs r2, #0	@ 0005b0a0 0022
.org 0x5b0a2
	bl 0xc2920	@ 0005b0a2 67f03dfc
.org 0x5b0a6
	str r0, [r5, #0]	@ 0005b0a6 2860
.org 0x5b0a8
	movs r1, #255	@ 0005b0a8 ff21
.org 0x5b0aa
	cmp r0, #0	@ 0005b0aa 0028
.org 0x5b0ac
	beq.n 0x5b0b0	@ 0005b0ac 00d0
.org 0x5b0ae
	movs r1, #4	@ 0005b0ae 0421
.org 0x5b0b0
	strb r1, [r6, #0]	@ 0005b0b0 3170
.org 0x5b0b2
	movs r0, #0	@ 0005b0b2 0020
.org 0x5b0b4
	strb r0, [r4, #19]	@ 0005b0b4 e074
.org 0x5b0b6
	ldrb r0, [r4, #18]	@ 0005b0b6 a07c
.org 0x5b0b8
	subs r0, #1	@ 0005b0b8 0138
.org 0x5b0ba
	strb r0, [r4, #18]	@ 0005b0ba a074
.org 0x5b0bc
	lsls r0, r0, #24	@ 0005b0bc 0006
.org 0x5b0be
	lsrs r1, r0, #24	@ 0005b0be 010e
.org 0x5b0c0
	cmp r1, #0	@ 0005b0c0 0029
.org 0x5b0c2
	bne.n 0x5b0ca	@ 0005b0c2 02d1
.org 0x5b0c4
	movs r0, #1	@ 0005b0c4 0120
.org 0x5b0c6
	strb r0, [r4, #14]	@ 0005b0c6 a073
.org 0x5b0c8
	strb r1, [r4, #15]	@ 0005b0c8 e173
.org 0x5b0ca
	add sp, #8	@ 0005b0ca 02b0
.org 0x5b0cc
	pop {r4, r5, r6}	@ 0005b0cc 70bc
.org 0x5b0ce
	pop {r0}	@ 0005b0ce 01bc
.org 0x5b0d0
	bx r0	@ 0005b0d0 0047
