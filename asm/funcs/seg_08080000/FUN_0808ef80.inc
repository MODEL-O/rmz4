@ FUN_0808ef80  entry 0x0808ef80  size 308
.thumb
.org 0x8ef80
FUN_0808ef80:
	push {r4, r5, r6, lr}	@ 0008ef80 70b5
.org 0x8ef82
	adds r4, r0, #0	@ 0008ef82 041c
.org 0x8ef84
	ldrb r0, [r4, #15]	@ 0008ef84 e07b
.org 0x8ef86
	cmp r0, #0	@ 0008ef86 0028
.org 0x8ef88
	bne.n 0x8efcc	@ 0008ef88 20d1
.org 0x8ef8a
	ldr r1, [pc, #24]	@ 0008ef8a 0649
.org 0x8ef8c
	adds r0, r4, #0	@ 0008ef8c 201c
.org 0x8ef8e
	bl 0x1cf00	@ 0008ef8e 8df7b7ff
.org 0x8ef92
	ldrb r2, [r4, #10]	@ 0008ef92 a27a
.org 0x8ef94
	lsrs r0, r2, #4	@ 0008ef94 1009
.org 0x8ef96
	movs r1, #1	@ 0008ef96 0121
.org 0x8ef98
	bics r1, r0	@ 0008ef98 8143
.org 0x8ef9a
	cmp r1, #0	@ 0008ef9a 0029
.org 0x8ef9c
	beq.n 0x8efa8	@ 0008ef9c 04d0
.org 0x8ef9e
	movs r0, #16	@ 0008ef9e 1020
.org 0x8efa0
	orrs r0, r2	@ 0008efa0 1043
.org 0x8efa2
	b.n 0x8efac	@ 0008efa2 03e0
.org 0x8efa4
	.byte 0x01,0x39,0x00,0x00	@ 0008efa4 data
.org 0x8efa8
	movs r0, #239	@ 0008efa8 ef20
.org 0x8efaa
	ands r0, r2	@ 0008efaa 1040
.org 0x8efac
	strb r0, [r4, #10]	@ 0008efac a072
.org 0x8efae
	adds r0, r4, #0	@ 0008efae 201c
.org 0x8efb0
	adds r0, #76	@ 0008efb0 4c30
.org 0x8efb2
	strb r1, [r0, #0]	@ 0008efb2 0170
.org 0x8efb4
	adds r3, r4, #0	@ 0008efb4 231c
.org 0x8efb6
	adds r3, #74	@ 0008efb6 4a33
.org 0x8efb8
	lsls r1, r1, #4	@ 0008efb8 0901
.org 0x8efba
	ldrb r2, [r3, #0]	@ 0008efba 1a78
.org 0x8efbc
	movs r0, #17	@ 0008efbc 1120
.org 0x8efbe
	negs r0, r0	@ 0008efbe 4042
.org 0x8efc0
	ands r0, r2	@ 0008efc0 1040
.org 0x8efc2
	orrs r0, r1	@ 0008efc2 0843
.org 0x8efc4
	strb r0, [r3, #0]	@ 0008efc4 1870
.org 0x8efc6
	ldrb r0, [r4, #15]	@ 0008efc6 e07b
.org 0x8efc8
	adds r0, #1	@ 0008efc8 0130
.org 0x8efca
	strb r0, [r4, #15]	@ 0008efca e073
.org 0x8efcc
	ldrb r0, [r4, #10]	@ 0008efcc a07a
.org 0x8efce
	lsrs r5, r0, #4	@ 0008efce 0509
.org 0x8efd0
	movs r0, #1	@ 0008efd0 0120
.org 0x8efd2
	ands r5, r0	@ 0008efd2 0540
.org 0x8efd4
	adds r0, r4, #0	@ 0008efd4 201c
.org 0x8efd6
	bl 0x1cff0	@ 0008efd6 8ef70bf8
.org 0x8efda
	adds r0, r4, #0	@ 0008efda 201c
.org 0x8efdc
	adds r0, #116	@ 0008efdc 7430
.org 0x8efde
	ldr r3, [pc, #132]	@ 0008efde 214b
.org 0x8efe0
	ldrb r1, [r4, #30]	@ 0008efe0 a17f
.org 0x8efe2
	lsls r1, r1, #8	@ 0008efe2 0902
.org 0x8efe4
	adds r2, r4, #0	@ 0008efe4 221c
.org 0x8efe6
	adds r2, #112	@ 0008efe6 7032
.org 0x8efe8
	ldrb r2, [r2, #0]	@ 0008efe8 1278
.org 0x8efea
	orrs r1, r2	@ 0008efea 1143
.org 0x8efec
	ldr r2, [pc, #120]	@ 0008efec 1e4a
.org 0x8efee
	adds r1, r1, r2	@ 0008efee 8918
.org 0x8eff0
	lsls r1, r1, #2	@ 0008eff0 8900
.org 0x8eff2
	adds r1, r1, r3	@ 0008eff2 c918
.org 0x8eff4
	adds r2, r4, #0	@ 0008eff4 221c
.org 0x8eff6
	adds r2, #113	@ 0008eff6 7132
.org 0x8eff8
	ldrb r2, [r2, #0]	@ 0008eff8 1278
.org 0x8effa
	lsls r2, r2, #24	@ 0008effa 1206
.org 0x8effc
	asrs r2, r2, #24	@ 0008effc 1216
.org 0x8effe
	ldr r1, [r1, #0]	@ 0008effe 0968
.org 0x8f000
	lsls r2, r2, #2	@ 0008f000 9200
.org 0x8f002
	adds r2, r2, r1	@ 0008f002 5218
.org 0x8f004
	ldr r1, [r2, #0]	@ 0008f004 1168
.org 0x8f006
	ldrb r2, [r1, #0]	@ 0008f006 0a78
.org 0x8f008
	lsls r1, r2, #1	@ 0008f008 5100
.org 0x8f00a
	adds r1, r1, r2	@ 0008f00a 8918
.org 0x8f00c
	lsls r1, r1, #3	@ 0008f00c c900
.org 0x8f00e
	ldr r2, [pc, #92]	@ 0008f00e 174a
.org 0x8f010
	adds r1, r1, r2	@ 0008f010 8918
.org 0x8f012
	bl 0x5784	@ 0008f012 76f7b7fb
.org 0x8f016
	adds r0, r4, #0	@ 0008f016 201c
.org 0x8f018
	bl 0x8faf4	@ 0008f018 00f06cfd
.org 0x8f01c
	cmp r0, #0	@ 0008f01c 0028
.org 0x8f01e
	bne.n 0x8f0d0	@ 0008f01e 57d1
.org 0x8f020
	adds r0, r4, #0	@ 0008f020 201c
.org 0x8f022
	adds r0, #115	@ 0008f022 7330
.org 0x8f024
	ldrb r0, [r0, #0]	@ 0008f024 0078
.org 0x8f026
	cmp r0, #3	@ 0008f026 0328
.org 0x8f028
	bne.n 0x8f0d0	@ 0008f028 52d1
.org 0x8f02a
	adds r0, r4, #0	@ 0008f02a 201c
.org 0x8f02c
	bl 0x8fddc	@ 0008f02c 00f0d6fe
.org 0x8f030
	ldr r6, [r4, #84]	@ 0008f030 666d
.org 0x8f032
	lsls r0, r5, #1	@ 0008f032 6800
.org 0x8f034
	subs r0, #1	@ 0008f034 0138
.org 0x8f036
	lsls r2, r0, #13	@ 0008f036 4203
.org 0x8f038
	ldr r0, [pc, #52]	@ 0008f038 0d48
.org 0x8f03a
	ldr r0, [r0, #0]	@ 0008f03a 0068
.org 0x8f03c
	ldr r3, [r0, #84]	@ 0008f03c 436d
.org 0x8f03e
	ldrb r1, [r4, #10]	@ 0008f03e a17a
.org 0x8f040
	movs r0, #16	@ 0008f040 1020
.org 0x8f042
	ands r0, r1	@ 0008f042 0840
.org 0x8f044
	cmp r0, #0	@ 0008f044 0028
.org 0x8f046
	beq.n 0x8f074	@ 0008f046 15d0
.org 0x8f048
	movs r0, #128	@ 0008f048 8020
.org 0x8f04a
	lsls r0, r0, #3	@ 0008f04a c000
.org 0x8f04c
	adds r0, r2, r0	@ 0008f04c 1018
.org 0x8f04e
	adds r0, r6, r0	@ 0008f04e 3018
.org 0x8f050
	subs r0, r3, r0	@ 0008f050 181a
.org 0x8f052
	movs r1, #128	@ 0008f052 8021
.org 0x8f054
	lsls r1, r1, #6	@ 0008f054 8901
.org 0x8f056
	adds r0, r0, r1	@ 0008f056 4018
.org 0x8f058
	movs r1, #128	@ 0008f058 8021
.org 0x8f05a
	lsls r1, r1, #7	@ 0008f05a c901
.org 0x8f05c
	cmp r0, r1	@ 0008f05c 8842
.org 0x8f05e
	bls.n 0x8f08a	@ 0008f05e 14d9
.org 0x8f060
	b.n 0x8f0c8	@ 0008f060 32e0
.org 0x8f062
	.byte 0x00	@ 0008f062 data
.org 0x8f063
	.byte 0x00	@ 0008f063 data
.org 0x8f064
	.byte 0xac,0xff,0x85,0x08	@ 0008f064 data
.org 0x8f068
	.byte 0x00,0xc7,0xff,0xff	@ 0008f068 data
.org 0x8f06c
	.byte 0xd8,0xfb,0x85,0x08	@ 0008f06c data
.org 0x8f070
	.byte 0xf0,0xdb,0x02,0x02	@ 0008f070 data
.org 0x8f074
	ldr r1, [pc, #56]	@ 0008f074 0e49
.org 0x8f076
	adds r0, r2, r1	@ 0008f076 5018
.org 0x8f078
	adds r0, r6, r0	@ 0008f078 3018
.org 0x8f07a
	subs r0, r3, r0	@ 0008f07a 181a
.org 0x8f07c
	movs r2, #128	@ 0008f07c 8022
.org 0x8f07e
	lsls r2, r2, #6	@ 0008f07e 9201
.org 0x8f080
	adds r0, r0, r2	@ 0008f080 8018
.org 0x8f082
	movs r1, #128	@ 0008f082 8021
.org 0x8f084
	lsls r1, r1, #7	@ 0008f084 c901
.org 0x8f086
	cmp r0, r1	@ 0008f086 8842
.org 0x8f088
	bhi.n 0x8f0c8	@ 0008f088 1ed8
.org 0x8f08a
	ldr r0, [pc, #40]	@ 0008f08a 0a48
.org 0x8f08c
	ldr r0, [r0, #0]	@ 0008f08c 0068
.org 0x8f08e
	ldr r3, [r4, #88]	@ 0008f08e a36d
.org 0x8f090
	ldr r2, [r0, #88]	@ 0008f090 826d
.org 0x8f092
	subs r0, r2, r3	@ 0008f092 d01a
.org 0x8f094
	movs r1, #200	@ 0008f094 c821
.org 0x8f096
	lsls r1, r1, #6	@ 0008f096 8901
.org 0x8f098
	adds r0, r0, r1	@ 0008f098 4018
.org 0x8f09a
	movs r1, #128	@ 0008f09a 8021
.org 0x8f09c
	lsls r1, r1, #8	@ 0008f09c 0902
.org 0x8f09e
	cmp r0, r1	@ 0008f09e 8842
.org 0x8f0a0
	bhi.n 0x8f0c8	@ 0008f0a0 12d8
.org 0x8f0a2
	ldr r1, [pc, #20]	@ 0008f0a2 0549
.org 0x8f0a4
	adds r0, r2, r1	@ 0008f0a4 5018
.org 0x8f0a6
	cmp r0, r3	@ 0008f0a6 9842
.org 0x8f0a8
	bge.n 0x8f0bc	@ 0008f0a8 08da
.org 0x8f0aa
	movs r1, #0	@ 0008f0aa 0021
.org 0x8f0ac
	movs r0, #2	@ 0008f0ac 0220
.org 0x8f0ae
	b.n 0x8f0c0	@ 0008f0ae 07e0
.org 0x8f0b0
	.byte 0x00,0xfc,0xff,0xff	@ 0008f0b0 data
