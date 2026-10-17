@ FUN_0803dfb0  entry 0x0803dfb0  size 248
.thumb
.org 0x3dfb0
FUN_0803dfb0:
	push {r4, r5, lr}	@ 0003dfb0 30b5
.org 0x3dfb2
	sub sp, #16	@ 0003dfb2 84b0
.org 0x3dfb4
	adds r4, r0, #0	@ 0003dfb4 041c
.org 0x3dfb6
	adds r0, #180	@ 0003dfb6 b430
.org 0x3dfb8
	ldr r5, [r0, #0]	@ 0003dfb8 0568
.org 0x3dfba
	ldrb r1, [r4, #13]	@ 0003dfba 617b
.org 0x3dfbc
	cmp r1, #1	@ 0003dfbc 0129
.org 0x3dfbe
	beq.n 0x3e030	@ 0003dfbe 37d0
.org 0x3dfc0
	cmp r1, #1	@ 0003dfc0 0129
.org 0x3dfc2
	bgt.n 0x3dfca	@ 0003dfc2 02dc
.org 0x3dfc4
	cmp r1, #0	@ 0003dfc4 0029
.org 0x3dfc6
	beq.n 0x3dfd4	@ 0003dfc6 05d0
.org 0x3dfc8
	b.n 0x3e0a4	@ 0003dfc8 6ce0
.org 0x3dfca
	cmp r1, #2	@ 0003dfca 0229
.org 0x3dfcc
	beq.n 0x3e050	@ 0003dfcc 40d0
.org 0x3dfce
	cmp r1, #3	@ 0003dfce 0329
.org 0x3dfd0
	beq.n 0x3e088	@ 0003dfd0 5ad0
.org 0x3dfd2
	b.n 0x3e0a4	@ 0003dfd2 67e0
.org 0x3dfd4
	ldr r1, [pc, #116]	@ 0003dfd4 1d49
.org 0x3dfd6
	adds r0, r4, #0	@ 0003dfd6 201c
.org 0x3dfd8
	bl 0x1cf00	@ 0003dfd8 def792ff
.org 0x3dfdc
	adds r3, r5, #0	@ 0003dfdc 2b1c
.org 0x3dfde
	adds r3, #180	@ 0003dfde b433
.org 0x3dfe0
	adds r2, r5, #0	@ 0003dfe0 2a1c
.org 0x3dfe2
	adds r2, #230	@ 0003dfe2 e632
.org 0x3dfe4
	ldrb r0, [r2, #0]	@ 0003dfe4 1078
.org 0x3dfe6
	adds r1, r0, #0	@ 0003dfe6 011c
.org 0x3dfe8
	cmp r1, #0	@ 0003dfe8 0029
.org 0x3dfea
	beq.n 0x3e01c	@ 0003dfea 17d0
.org 0x3dfec
	cmp r1, #255	@ 0003dfec ff29
.org 0x3dfee
	beq.n 0x3dff4	@ 0003dfee 01d0
.org 0x3dff0
	subs r0, #1	@ 0003dff0 0138
.org 0x3dff2
	strb r0, [r2, #0]	@ 0003dff2 1070
.org 0x3dff4
	ldrb r3, [r3, #14]	@ 0003dff4 9b7b
.org 0x3dff6
	movs r0, #192	@ 0003dff6 c020
.org 0x3dff8
	lsls r0, r0, #3	@ 0003dff8 c000
.org 0x3dffa
	str r0, [sp, #0]	@ 0003dffa 0090
.org 0x3dffc
	ldrb r1, [r4, #19]	@ 0003dffc e17c
.org 0x3dffe
	lsls r1, r1, #4	@ 0003dffe 0901
.org 0x3e000
	movs r0, #88	@ 0003e000 5820
.org 0x3e002
	subs r0, r0, r1	@ 0003e002 401a
.org 0x3e004
	lsls r0, r0, #24	@ 0003e004 0006
.org 0x3e006
	lsrs r0, r0, #24	@ 0003e006 000e
.org 0x3e008
	str r0, [sp, #4]	@ 0003e008 0190
.org 0x3e00a
	movs r0, #2	@ 0003e00a 0220
.org 0x3e00c
	str r0, [sp, #8]	@ 0003e00c 0290
.org 0x3e00e
	ldrb r0, [r4, #19]	@ 0003e00e e07c
.org 0x3e010
	str r0, [sp, #12]	@ 0003e010 0390
.org 0x3e012
	adds r0, r5, #0	@ 0003e012 281c
.org 0x3e014
	adds r1, r4, #0	@ 0003e014 211c
.org 0x3e016
	movs r2, #0	@ 0003e016 0022
.org 0x3e018
	bl 0x3f000	@ 0003e018 00f0f2ff
.org 0x3e01c
	movs r0, #170	@ 0003e01c aa20
.org 0x3e01e
	lsls r0, r0, #1	@ 0003e01e 4000
.org 0x3e020
	adds r1, r5, r0	@ 0003e020 2918
.org 0x3e022
	movs r0, #0	@ 0003e022 0020
.org 0x3e024
	strb r0, [r1, #0]	@ 0003e024 0870
.org 0x3e026
	movs r0, #2	@ 0003e026 0220
.org 0x3e028
	strb r0, [r4, #18]	@ 0003e028 a074
.org 0x3e02a
	ldrb r0, [r4, #13]	@ 0003e02a 607b
.org 0x3e02c
	adds r0, #1	@ 0003e02c 0130
.org 0x3e02e
	strb r0, [r4, #13]	@ 0003e02e 6073
.org 0x3e030
	ldrb r0, [r4, #18]	@ 0003e030 a07c
.org 0x3e032
	subs r0, #1	@ 0003e032 0138
.org 0x3e034
	strb r0, [r4, #18]	@ 0003e034 a074
.org 0x3e036
	lsls r0, r0, #24	@ 0003e036 0006
.org 0x3e038
	cmp r0, #0	@ 0003e038 0028
.org 0x3e03a
	bne.n 0x3e0a4	@ 0003e03a 33d1
.org 0x3e03c
	movs r3, #170	@ 0003e03c aa23
.org 0x3e03e
	lsls r3, r3, #1	@ 0003e03e 5b00
.org 0x3e040
	adds r1, r5, r3	@ 0003e040 e918
.org 0x3e042
	movs r0, #1	@ 0003e042 0120
.org 0x3e044
	strb r0, [r1, #0]	@ 0003e044 0870
.org 0x3e046
	movs r0, #4	@ 0003e046 0420
.org 0x3e048
	strb r0, [r4, #18]	@ 0003e048 a074
.org 0x3e04a
	b.n 0x3e09e	@ 0003e04a 28e0
.org 0x3e04c
	.byte 0x02,0x80,0x00,0x00	@ 0003e04c data
.org 0x3e050
	ldrb r0, [r4, #18]	@ 0003e050 a07c
.org 0x3e052
	subs r0, #1	@ 0003e052 0138
.org 0x3e054
	strb r0, [r4, #18]	@ 0003e054 a074
.org 0x3e056
	movs r3, #255	@ 0003e056 ff23
.org 0x3e058
	lsls r0, r0, #24	@ 0003e058 0006
.org 0x3e05a
	lsrs r2, r0, #24	@ 0003e05a 020e
.org 0x3e05c
	cmp r2, #0	@ 0003e05c 002a
.org 0x3e05e
	bne.n 0x3e0a4	@ 0003e05e 21d1
.org 0x3e060
	ldrb r0, [r4, #19]	@ 0003e060 e07c
.org 0x3e062
	adds r0, #1	@ 0003e062 0130
.org 0x3e064
	strb r0, [r4, #19]	@ 0003e064 e074
.org 0x3e066
	ands r0, r3	@ 0003e066 1840
.org 0x3e068
	cmp r0, #3	@ 0003e068 0328
.org 0x3e06a
	bhi.n 0x3e078	@ 0003e06a 05d8
.org 0x3e06c
	movs r3, #170	@ 0003e06c aa23
.org 0x3e06e
	lsls r3, r3, #1	@ 0003e06e 5b00
.org 0x3e070
	adds r0, r5, r3	@ 0003e070 e818
.org 0x3e072
	strb r1, [r0, #0]	@ 0003e072 0170
.org 0x3e074
	strb r2, [r4, #13]	@ 0003e074 6273
.org 0x3e076
	b.n 0x3e0a4	@ 0003e076 15e0
.org 0x3e078
	movs r0, #170	@ 0003e078 aa20
.org 0x3e07a
	lsls r0, r0, #1	@ 0003e07a 4000
.org 0x3e07c
	adds r1, r5, r0	@ 0003e07c 2918
.org 0x3e07e
	movs r0, #3	@ 0003e07e 0320
.org 0x3e080
	strb r0, [r1, #0]	@ 0003e080 0870
.org 0x3e082
	movs r0, #16	@ 0003e082 1020
.org 0x3e084
	strb r0, [r4, #18]	@ 0003e084 a074
.org 0x3e086
	b.n 0x3e09e	@ 0003e086 0ae0
.org 0x3e088
	ldrb r0, [r4, #18]	@ 0003e088 a07c
.org 0x3e08a
	subs r0, #1	@ 0003e08a 0138
.org 0x3e08c
	strb r0, [r4, #18]	@ 0003e08c a074
.org 0x3e08e
	lsls r0, r0, #24	@ 0003e08e 0006
.org 0x3e090
	cmp r0, #0	@ 0003e090 0028
.org 0x3e092
	bne.n 0x3e0a4	@ 0003e092 07d1
.org 0x3e094
	movs r3, #170	@ 0003e094 aa23
.org 0x3e096
	lsls r3, r3, #1	@ 0003e096 5b00
.org 0x3e098
	adds r1, r5, r3	@ 0003e098 e918
.org 0x3e09a
	movs r0, #4	@ 0003e09a 0420
.org 0x3e09c
	strb r0, [r1, #0]	@ 0003e09c 0870
.org 0x3e09e
	ldrb r0, [r4, #13]	@ 0003e09e 607b
.org 0x3e0a0
	adds r0, #1	@ 0003e0a0 0130
.org 0x3e0a2
	strb r0, [r4, #13]	@ 0003e0a2 6073
.org 0x3e0a4
	add sp, #16	@ 0003e0a4 04b0
.org 0x3e0a6
	pop {r4, r5}	@ 0003e0a6 30bc
