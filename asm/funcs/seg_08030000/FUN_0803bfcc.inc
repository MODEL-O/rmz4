@ FUN_0803bfcc  entry 0x0803bfcc  size 488
.thumb
.org 0x3bfcc
FUN_0803bfcc:
	push {r4, r5, r6, r7, lr}	@ 0003bfcc f0b5
.org 0x3bfce
	mov r7, r8	@ 0003bfce 4746
.org 0x3bfd0
	push {r7}	@ 0003bfd0 80b4
.org 0x3bfd2
	sub sp, #8	@ 0003bfd2 82b0
.org 0x3bfd4
	adds r4, r0, #0	@ 0003bfd4 041c
.org 0x3bfd6
	adds r0, #180	@ 0003bfd6 b430
.org 0x3bfd8
	ldr r0, [r0, #0]	@ 0003bfd8 0068
.org 0x3bfda
	mov r8, r0	@ 0003bfda 8046
.org 0x3bfdc
	ldr r5, [r4, #44]	@ 0003bfdc e56a
.org 0x3bfde
	ldrb r0, [r4, #13]	@ 0003bfde 607b
.org 0x3bfe0
	cmp r0, #0	@ 0003bfe0 0028
.org 0x3bfe2
	beq.n 0x3bfe6	@ 0003bfe2 00d0
.org 0x3bfe4
	b.n 0x3c160	@ 0003bfe4 bce0
.org 0x3bfe6
	ldr r1, [pc, #76]	@ 0003bfe6 1349
.org 0x3bfe8
	add r1, r8	@ 0003bfe8 4144
.org 0x3bfea
	movs r0, #2	@ 0003bfea 0220
.org 0x3bfec
	strb r0, [r1, #0]	@ 0003bfec 0870
.org 0x3bfee
	movs r2, #174	@ 0003bfee ae22
.org 0x3bff0
	lsls r2, r2, #1	@ 0003bff0 5200
.org 0x3bff2
	add r2, r8	@ 0003bff2 4244
.org 0x3bff4
	ldr r0, [r4, #84]	@ 0003bff4 606d
.org 0x3bff6
	ldr r1, [r4, #88]	@ 0003bff6 a16d
.org 0x3bff8
	str r0, [r2, #0]	@ 0003bff8 1060
.org 0x3bffa
	str r1, [r2, #4]	@ 0003bffa 5160
.org 0x3bffc
	movs r0, #178	@ 0003bffc b220
.org 0x3bffe
	lsls r0, r0, #1	@ 0003bffe 4000
.org 0x3c000
	add r0, r8	@ 0003c000 4044
.org 0x3c002
	ldrb r1, [r0, #0]	@ 0003c002 0178
.org 0x3c004
	adds r7, r0, #0	@ 0003c004 071c
.org 0x3c006
	cmp r1, #64	@ 0003c006 4029
.org 0x3c008
	bls.n 0x3c00e	@ 0003c008 01d9
.org 0x3c00a
	movs r0, #64	@ 0003c00a 4020
.org 0x3c00c
	strb r0, [r7, #0]	@ 0003c00c 3870
.org 0x3c00e
	ldrb r0, [r4, #30]	@ 0003c00e a07f
.org 0x3c010
	lsls r0, r0, #8	@ 0003c010 0002
.org 0x3c012
	adds r1, r4, #0	@ 0003c012 211c
.org 0x3c014
	adds r1, #112	@ 0003c014 7031
.org 0x3c016
	ldrb r2, [r1, #0]	@ 0003c016 0a78
.org 0x3c018
	orrs r2, r0	@ 0003c018 0243
.org 0x3c01a
	movs r0, #224	@ 0003c01a e020
.org 0x3c01c
	lsls r0, r0, #7	@ 0003c01c c001
.org 0x3c01e
	adds r6, r1, #0	@ 0003c01e 0e1c
.org 0x3c020
	cmp r2, r0	@ 0003c020 8242
.org 0x3c022
	bne.n 0x3c03c	@ 0003c022 0bd1
.org 0x3c024
	ldrb r0, [r7, #0]	@ 0003c024 3878
.org 0x3c026
	cmp r0, #7	@ 0003c026 0728
.org 0x3c028
	bls.n 0x3c050	@ 0003c028 12d9
.org 0x3c02a
	ldr r1, [pc, #12]	@ 0003c02a 0349
.org 0x3c02c
	adds r0, r4, #0	@ 0003c02c 201c
.org 0x3c02e
	bl 0x1cf00	@ 0003c02e e0f767ff
.org 0x3c032
	b.n 0x3c050	@ 0003c032 0de0
.org 0x3c034
	.byte 0x65,0x01,0x00,0x00	@ 0003c034 data
.org 0x3c038
	.byte 0x01,0x70,0x00,0x00	@ 0003c038 data
.org 0x3c03c
	ldr r0, [pc, #52]	@ 0003c03c 0d48
.org 0x3c03e
	cmp r2, r0	@ 0003c03e 8242
.org 0x3c040
	bne.n 0x3c050	@ 0003c040 06d1
.org 0x3c042
	ldrb r0, [r7, #0]	@ 0003c042 3878
.org 0x3c044
	cmp r0, #15	@ 0003c044 0f28
.org 0x3c046
	bls.n 0x3c050	@ 0003c046 03d9
.org 0x3c048
	ldr r1, [pc, #44]	@ 0003c048 0b49
.org 0x3c04a
	adds r0, r4, #0	@ 0003c04a 201c
.org 0x3c04c
	bl 0x1cf00	@ 0003c04c e0f758ff
.org 0x3c050
	ldrb r0, [r5, #12]	@ 0003c050 287b
.org 0x3c052
	cmp r0, #1	@ 0003c052 0128
.org 0x3c054
	bls.n 0x3c0c6	@ 0003c054 37d9
.org 0x3c056
	ldrb r0, [r4, #30]	@ 0003c056 a07f
.org 0x3c058
	lsls r0, r0, #8	@ 0003c058 0002
.org 0x3c05a
	ldrb r1, [r6, #0]	@ 0003c05a 3178
.org 0x3c05c
	orrs r1, r0	@ 0003c05c 0143
.org 0x3c05e
	movs r0, #224	@ 0003c05e e020
.org 0x3c060
	lsls r0, r0, #7	@ 0003c060 c001
.org 0x3c062
	cmp r1, r0	@ 0003c062 8142
.org 0x3c064
	bne.n 0x3c07c	@ 0003c064 0ad1
.org 0x3c066
	movs r1, #226	@ 0003c066 e221
.org 0x3c068
	lsls r1, r1, #7	@ 0003c068 c901
.org 0x3c06a
	adds r0, r4, #0	@ 0003c06a 201c
.org 0x3c06c
	bl 0x1cf00	@ 0003c06c e0f748ff
.org 0x3c070
	movs r6, #20	@ 0003c070 1426
.org 0x3c072
	b.n 0x3c0a0	@ 0003c072 15e0
.org 0x3c074
	.byte 0x01,0x70,0x00,0x00	@ 0003c074 data
.org 0x3c078
	.byte 0x02,0x70,0x00,0x00	@ 0003c078 data
.org 0x3c07c
	ldr r0, [pc, #16]	@ 0003c07c 0448
.org 0x3c07e
	cmp r1, r0	@ 0003c07e 8142
.org 0x3c080
	bne.n 0x3c094	@ 0003c080 08d1
.org 0x3c082
	movs r1, #228	@ 0003c082 e421
.org 0x3c084
	lsls r1, r1, #7	@ 0003c084 c901
.org 0x3c086
	adds r0, r4, #0	@ 0003c086 201c
.org 0x3c088
	bl 0x1cf00	@ 0003c088 e0f73aff
.org 0x3c08c
	movs r6, #22	@ 0003c08c 1626
.org 0x3c08e
	b.n 0x3c0a0	@ 0003c08e 07e0
.org 0x3c090
	.byte 0x01,0x70,0x00,0x00	@ 0003c090 data
.org 0x3c094
	movs r1, #230	@ 0003c094 e621
.org 0x3c096
	lsls r1, r1, #7	@ 0003c096 c901
.org 0x3c098
	adds r0, r4, #0	@ 0003c098 201c
.org 0x3c09a
	bl 0x1cf00	@ 0003c09a e0f731ff
.org 0x3c09e
	movs r6, #24	@ 0003c09e 1826
.org 0x3c0a0
	ldrb r0, [r7, #0]	@ 0003c0a0 3878
.org 0x3c0a2
	adds r0, #3	@ 0003c0a2 0330
.org 0x3c0a4
	lsls r0, r0, #24	@ 0003c0a4 0006
.org 0x3c0a6
	lsrs r5, r0, #24	@ 0003c0a6 050e
.org 0x3c0a8
	mov r0, r8	@ 0003c0a8 4046
.org 0x3c0aa
	bl 0x3a4a8	@ 0003c0aa fef7fdf9
.org 0x3c0ae
	adds r0, r5, r0	@ 0003c0ae 2818
.org 0x3c0b0
	lsls r0, r0, #24	@ 0003c0b0 0006
.org 0x3c0b2
	lsrs r5, r0, #24	@ 0003c0b2 050e
.org 0x3c0b4
	movs r0, #0	@ 0003c0b4 0020
.org 0x3c0b6
	strb r0, [r7, #0]	@ 0003c0b6 3870
.org 0x3c0b8
	movs r0, #113	@ 0003c0b8 7120
.org 0x3c0ba
	bl 0x2b10	@ 0003c0ba c6f729fd
.org 0x3c0be
	ldrb r0, [r4, #13]	@ 0003c0be 607b
.org 0x3c0c0
	adds r0, #1	@ 0003c0c0 0130
.org 0x3c0c2
	strb r0, [r4, #13]	@ 0003c0c2 6073
.org 0x3c0c4
	b.n 0x3c13a	@ 0003c0c4 39e0
.org 0x3c0c6
	ldrb r1, [r5, #10]	@ 0003c0c6 a97a
.org 0x3c0c8
	movs r0, #16	@ 0003c0c8 1020
.org 0x3c0ca
	ands r0, r1	@ 0003c0ca 0840
.org 0x3c0cc
	cmp r0, #0	@ 0003c0cc 0028
.org 0x3c0ce
	beq.n 0x3c0e0	@ 0003c0ce 07d0
.org 0x3c0d0
	ldr r0, [r5, #84]	@ 0003c0d0 686d
.org 0x3c0d2
	movs r1, #224	@ 0003c0d2 e021
.org 0x3c0d4
	lsls r1, r1, #4	@ 0003c0d4 0901
.org 0x3c0d6
	adds r0, r0, r1	@ 0003c0d6 4018
.org 0x3c0d8
	str r0, [r4, #84]	@ 0003c0d8 6065
.org 0x3c0da
	movs r0, #192	@ 0003c0da c020
.org 0x3c0dc
	lsls r0, r0, #3	@ 0003c0dc c000
.org 0x3c0de
	b.n 0x3c0ea	@ 0003c0de 04e0
.org 0x3c0e0
	ldr r0, [r5, #84]	@ 0003c0e0 686d
.org 0x3c0e2
	ldr r1, [pc, #32]	@ 0003c0e2 0849
.org 0x3c0e4
	adds r0, r0, r1	@ 0003c0e4 4018
.org 0x3c0e6
	str r0, [r4, #84]	@ 0003c0e6 6065
.org 0x3c0e8
	ldr r0, [pc, #28]	@ 0003c0e8 0748
.org 0x3c0ea
	str r0, [r4, #92]	@ 0003c0ea e065
.org 0x3c0ec
	ldr r0, [r5, #88]	@ 0003c0ec a86d
.org 0x3c0ee
	str r0, [r4, #88]	@ 0003c0ee a065
.org 0x3c0f0
	ldrb r0, [r4, #30]	@ 0003c0f0 a07f
.org 0x3c0f2
	lsls r0, r0, #8	@ 0003c0f2 0002
.org 0x3c0f4
	ldrb r1, [r6, #0]	@ 0003c0f4 3178
.org 0x3c0f6
	orrs r1, r0	@ 0003c0f6 0143
.org 0x3c0f8
	movs r0, #224	@ 0003c0f8 e020
.org 0x3c0fa
	lsls r0, r0, #7	@ 0003c0fa c001
.org 0x3c0fc
	cmp r1, r0	@ 0003c0fc 8142
.org 0x3c0fe
	bne.n 0x3c10c	@ 0003c0fe 05d1
.org 0x3c100
	movs r6, #14	@ 0003c100 0e26
.org 0x3c102
	b.n 0x3c116	@ 0003c102 08e0
.org 0x3c104
	.byte 0x00,0xf2,0xff,0xff	@ 0003c104 data
.org 0x3c108
	.byte 0x00,0xfa,0xff,0xff	@ 0003c108 data
.org 0x3c10c
	ldr r0, [pc, #72]	@ 0003c10c 1248
.org 0x3c10e
	movs r6, #18	@ 0003c10e 1226
.org 0x3c110
	cmp r1, r0	@ 0003c110 8142
.org 0x3c112
	bne.n 0x3c116	@ 0003c112 00d1
.org 0x3c114
	movs r6, #16	@ 0003c114 1026
.org 0x3c116
	ldrb r0, [r7, #0]	@ 0003c116 3878
.org 0x3c118
	adds r0, #1	@ 0003c118 0130
.org 0x3c11a
	lsls r0, r0, #24	@ 0003c11a 0006
.org 0x3c11c
	lsrs r5, r0, #24	@ 0003c11c 050e
.org 0x3c11e
	mov r0, r8	@ 0003c11e 4046
.org 0x3c120
	bl 0x3a4a8	@ 0003c120 fef7c2f9
.org 0x3c124
	adds r0, r5, r0	@ 0003c124 2818
.org 0x3c126
	lsls r0, r0, #24	@ 0003c126 0006
.org 0x3c128
	lsrs r5, r0, #24	@ 0003c128 050e
.org 0x3c12a
	mov r0, r8	@ 0003c12a 4046
.org 0x3c12c
	bl 0x38a78	@ 0003c12c fcf7a4fc
.org 0x3c130
	lsls r0, r0, #24	@ 0003c130 0006
.org 0x3c132
	cmp r0, #0	@ 0003c132 0028
.org 0x3c134
	beq.n 0x3c13a	@ 0003c134 01d0
.org 0x3c136
	lsls r0, r5, #25	@ 0003c136 6806
.org 0x3c138
	lsrs r5, r0, #24	@ 0003c138 050e
.org 0x3c13a
	adds r0, r4, #0	@ 0003c13a 201c
.org 0x3c13c
	adds r0, #116	@ 0003c13c 7430
.org 0x3c13e
	lsls r1, r6, #1	@ 0003c13e 7100
.org 0x3c140
	adds r1, r1, r6	@ 0003c140 8919
.org 0x3c142
	lsls r1, r1, #3	@ 0003c142 c900
.org 0x3c144
	ldr r2, [pc, #20]	@ 0003c144 054a
.org 0x3c146
	adds r1, r1, r2	@ 0003c146 8918
.org 0x3c148
	movs r3, #1	@ 0003c148 0123
.org 0x3c14a
	negs r3, r3	@ 0003c14a 5b42
.org 0x3c14c
	str r3, [sp, #0]	@ 0003c14c 0093
.org 0x3c14e
	str r3, [sp, #4]	@ 0003c14e 0193
.org 0x3c150
	adds r2, r5, #0	@ 0003c150 2a1c
.org 0x3c152
	bl 0x5794	@ 0003c152 c9f71ffb
.org 0x3c156
	b.n 0x3c1d2	@ 0003c156 3ce0
.org 0x3c158
	.byte 0x01,0x70,0x00,0x00	@ 0003c158 data
.org 0x3c15c
	.byte 0x4c,0x3b,0x85,0x08	@ 0003c15c data
.org 0x3c160
	ldr r0, [r4, #84]	@ 0003c160 606d
.org 0x3c162
	ldr r1, [r4, #92]	@ 0003c162 e16d
.org 0x3c164
	adds r0, r0, r1	@ 0003c164 4018
.org 0x3c166
	str r0, [r4, #84]	@ 0003c166 6065
.org 0x3c168
	adds r0, r4, #0	@ 0003c168 201c
.org 0x3c16a
	bl 0x3c1e4	@ 0003c16a 00f03bf8
.org 0x3c16e
	lsls r0, r0, #24	@ 0003c16e 0006
.org 0x3c170
	lsrs r5, r0, #24	@ 0003c170 050e
.org 0x3c172
	cmp r5, #2	@ 0003c172 022d
.org 0x3c174
	bne.n 0x3c188	@ 0003c174 08d1
.org 0x3c176
	ldr r1, [pc, #12]	@ 0003c176 0349
.org 0x3c178
	ldrb r0, [r4, #9]	@ 0003c178 607a
.org 0x3c17a
	lsls r0, r0, #2	@ 0003c17a 8000
.org 0x3c17c
	adds r0, r0, r1	@ 0003c17c 4018
.org 0x3c17e
	str r5, [r4, #12]	@ 0003c17e e560
.org 0x3c180
	b.n 0x3c1cc	@ 0003c180 24e0
.org 0x3c182
	.byte 0x00	@ 0003c182 data
.org 0x3c183
	.byte 0x00	@ 0003c183 data
.org 0x3c184
	.byte 0xf8,0x39,0x85,0x08	@ 0003c184 data
.org 0x3c188
	adds r0, r4, #0	@ 0003c188 201c
.org 0x3c18a
	bl 0x3c400	@ 0003c18a 00f039f9
.org 0x3c18e
	lsls r0, r0, #24	@ 0003c18e 0006
.org 0x3c190
	cmp r0, #0	@ 0003c190 0028
.org 0x3c192
	beq.n 0x3c1ae	@ 0003c192 0cd0
.org 0x3c194
	adds r0, r4, #0	@ 0003c194 201c
.org 0x3c196
	adds r0, #84	@ 0003c196 5430
.org 0x3c198
	ldrb r2, [r4, #10]	@ 0003c198 a27a
.org 0x3c19a
	lsrs r2, r2, #4	@ 0003c19a 1209
.org 0x3c19c
	movs r1, #1	@ 0003c19c 0121
.org 0x3c19e
	ands r2, r1	@ 0003c19e 0a40
.org 0x3c1a0
	movs r1, #6	@ 0003c1a0 0621
.org 0x3c1a2
	bl 0xd1bcc	@ 0003c1a2 95f013fd
.org 0x3c1a6
	movs r0, #43	@ 0003c1a6 2b20
.org 0x3c1a8
	bl 0x2b10	@ 0003c1a8 c6f7b2fc
.org 0x3c1ac
	movs r5, #1	@ 0003c1ac 0125
.org 0x3c1ae
	cmp r5, #0	@ 0003c1ae 002d
.org 0x3c1b0
	bne.n 0x3c1c0	@ 0003c1b0 06d1
.org 0x3c1b2
	adds r0, r4, #0	@ 0003c1b2 201c
