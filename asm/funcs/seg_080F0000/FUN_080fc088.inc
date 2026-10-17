@ FUN_080fc088  entry 0x080fc088  size 214
.thumb
.org 0xfc088
FUN_080fc088:
	push {r4, r5, r6, r7, lr}	@ 000fc088 f0b5
.org 0xfc08a
	adds r7, r0, #0	@ 000fc08a 071c
.org 0xfc08c
	bl 0x1cc9c	@ 000fc08c 20f706fe
.org 0xfc090
	ldrb r1, [r7, #10]	@ 000fc090 b97a
.org 0xfc092
	movs r0, #1	@ 000fc092 0120
.org 0xfc094
	orrs r0, r1	@ 000fc094 0843
.org 0xfc096
	movs r1, #2	@ 000fc096 0221
.org 0xfc098
	orrs r0, r1	@ 000fc098 0843
.org 0xfc09a
	strb r0, [r7, #10]	@ 000fc09a b872
.org 0xfc09c
	ldrb r0, [r7, #16]	@ 000fc09c 387c
.org 0xfc09e
	cmp r0, #0	@ 000fc09e 0028
.org 0xfc0a0
	bne.n 0xfc0ae	@ 000fc0a0 05d1
.org 0xfc0a2
	movs r1, #153	@ 000fc0a2 9921
.org 0xfc0a4
	lsls r1, r1, #8	@ 000fc0a4 0902
.org 0xfc0a6
	adds r0, r7, #0	@ 000fc0a6 381c
.org 0xfc0a8
	bl 0x1cf00	@ 000fc0a8 20f72aff
.org 0xfc0ac
	b.n 0xfc0b6	@ 000fc0ac 03e0
.org 0xfc0ae
	ldr r1, [pc, #28]	@ 000fc0ae 0749
.org 0xfc0b0
	adds r0, r7, #0	@ 000fc0b0 381c
.org 0xfc0b2
	bl 0x1cf00	@ 000fc0b2 20f725ff
.org 0xfc0b6
	adds r0, r7, #0	@ 000fc0b6 381c
.org 0xfc0b8
	bl 0x1cff0	@ 000fc0b8 20f79aff
.org 0xfc0bc
	ldrb r2, [r7, #17]	@ 000fc0bc 7a7c
.org 0xfc0be
	cmp r2, #0	@ 000fc0be 002a
.org 0xfc0c0
	beq.n 0xfc0d0	@ 000fc0c0 06d0
.org 0xfc0c2
	ldrb r1, [r7, #10]	@ 000fc0c2 b97a
.org 0xfc0c4
	movs r0, #16	@ 000fc0c4 1020
.org 0xfc0c6
	orrs r0, r1	@ 000fc0c6 0843
.org 0xfc0c8
	b.n 0xfc0d6	@ 000fc0c8 05e0
.org 0xfc0ca
	.byte 0x00	@ 000fc0ca data
.org 0xfc0cb
	.byte 0x00	@ 000fc0cb data
.org 0xfc0cc
	.byte 0x04,0x99,0x00,0x00	@ 000fc0cc data
.org 0xfc0d0
	ldrb r1, [r7, #10]	@ 000fc0d0 b97a
.org 0xfc0d2
	movs r0, #239	@ 000fc0d2 ef20
.org 0xfc0d4
	ands r0, r1	@ 000fc0d4 0840
.org 0xfc0d6
	strb r0, [r7, #10]	@ 000fc0d6 b872
.org 0xfc0d8
	movs r6, #1	@ 000fc0d8 0126
.org 0xfc0da
	adds r1, r6, #0	@ 000fc0da 311c
.org 0xfc0dc
	ands r1, r2	@ 000fc0dc 1140
.org 0xfc0de
	adds r0, r7, #0	@ 000fc0de 381c
.org 0xfc0e0
	adds r0, #76	@ 000fc0e0 4c30
.org 0xfc0e2
	movs r5, #0	@ 000fc0e2 0025
.org 0xfc0e4
	strb r1, [r0, #0]	@ 000fc0e4 0170
.org 0xfc0e6
	adds r3, r7, #0	@ 000fc0e6 3b1c
.org 0xfc0e8
	adds r3, #74	@ 000fc0e8 4a33
.org 0xfc0ea
	lsls r1, r1, #4	@ 000fc0ea 0901
.org 0xfc0ec
	ldrb r2, [r3, #0]	@ 000fc0ec 1a78
.org 0xfc0ee
	movs r0, #17	@ 000fc0ee 1120
.org 0xfc0f0
	negs r0, r0	@ 000fc0f0 4042
.org 0xfc0f2
	ands r0, r2	@ 000fc0f2 1040
.org 0xfc0f4
	orrs r0, r1	@ 000fc0f4 0843
.org 0xfc0f6
	strb r0, [r3, #0]	@ 000fc0f6 1870
.org 0xfc0f8
	ldrb r0, [r7, #10]	@ 000fc0f8 b87a
.org 0xfc0fa
	movs r1, #4	@ 000fc0fa 0421
.org 0xfc0fc
	orrs r0, r1	@ 000fc0fc 0843
.org 0xfc0fe
	strb r0, [r7, #10]	@ 000fc0fe b872
.org 0xfc100
	adds r4, r7, #0	@ 000fc100 3c1c
.org 0xfc102
	adds r4, #116	@ 000fc102 7434
.org 0xfc104
	ldr r1, [pc, #92]	@ 000fc104 1749
.org 0xfc106
	adds r2, r7, #0	@ 000fc106 3a1c
.org 0xfc108
	adds r2, #84	@ 000fc108 5432
.org 0xfc10a
	adds r0, r4, #0	@ 000fc10a 201c
.org 0xfc10c
	movs r3, #8	@ 000fc10c 0823
.org 0xfc10e
	bl 0x5760	@ 000fc10e 09f727fb
.org 0xfc112
	str r7, [r4, #44]	@ 000fc112 e762
.org 0xfc114
	ldr r0, [pc, #80]	@ 000fc114 1448
.org 0xfc116
	str r0, [r4, #36]	@ 000fc116 6062
.org 0xfc118
	ldrb r1, [r7, #11]	@ 000fc118 f97a
.org 0xfc11a
	movs r0, #8	@ 000fc11a 0820
.org 0xfc11c
	orrs r0, r1	@ 000fc11c 0843
.org 0xfc11e
	strb r0, [r7, #11]	@ 000fc11e f872
.org 0xfc120
	ldr r0, [pc, #72]	@ 000fc120 1248
.org 0xfc122
	str r0, [r7, #48]	@ 000fc122 3863
.org 0xfc124
	movs r0, #47	@ 000fc124 2f20
.org 0xfc126
	strh r0, [r7, #38]	@ 000fc126 f884
.org 0xfc128
	ldr r0, [r7, #84]	@ 000fc128 786d
.org 0xfc12a
	ldr r1, [r7, #88]	@ 000fc12a b96d
.org 0xfc12c
	str r0, [r7, #100]	@ 000fc12c 7866
.org 0xfc12e
	str r1, [r7, #104]	@ 000fc12e b966
.org 0xfc130
	adds r0, r7, #0	@ 000fc130 381c
.org 0xfc132
	adds r0, #100	@ 000fc132 6430
.org 0xfc134
	str r0, [r7, #64]	@ 000fc134 3864
.org 0xfc136
	adds r1, r7, #0	@ 000fc136 391c
.org 0xfc138
	adds r1, #184	@ 000fc138 b831
.org 0xfc13a
	ldr r0, [r7, #88]	@ 000fc13a b86d
.org 0xfc13c
	str r0, [r1, #0]	@ 000fc13c 0860
.org 0xfc13e
	adds r0, r7, #0	@ 000fc13e 381c
.org 0xfc140
	adds r0, #180	@ 000fc140 b430
.org 0xfc142
	str r5, [r0, #0]	@ 000fc142 0560
.org 0xfc144
	adds r0, #12	@ 000fc144 0c30
.org 0xfc146
	str r5, [r0, #0]	@ 000fc146 0560
.org 0xfc148
	ldr r1, [pc, #36]	@ 000fc148 0949
.org 0xfc14a
	ldrb r0, [r7, #9]	@ 000fc14a 787a
.org 0xfc14c
	lsls r0, r0, #2	@ 000fc14c 8000
.org 0xfc14e
	adds r0, r0, r1	@ 000fc14e 4018
.org 0xfc150
	str r6, [r7, #12]	@ 000fc150 fe60
.org 0xfc152
	ldr r0, [r0, #0]	@ 000fc152 0068
.org 0xfc154
	ldr r0, [r0, #4]	@ 000fc154 4068
.org 0xfc156
	str r0, [r7, #20]	@ 000fc156 7861
.org 0xfc158
	adds r0, r7, #0	@ 000fc158 381c
.org 0xfc15a
	bl 0xfc174	@ 000fc15a 00f00bf8
