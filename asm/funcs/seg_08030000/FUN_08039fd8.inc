@ FUN_08039fd8  entry 0x08039fd8  size 250
.thumb
.org 0x39fd8
FUN_08039fd8:
	push {r4, r5, r6, r7, lr}	@ 00039fd8 f0b5
.org 0x39fda
	adds r5, r0, #0	@ 00039fda 051c
.org 0x39fdc
	adds r6, r1, #0	@ 00039fdc 0e1c
.org 0x39fde
	adds r2, r5, #0	@ 00039fde 2a1c
.org 0x39fe0
	adds r2, #180	@ 00039fe0 b432
.org 0x39fe2
	movs r1, #150	@ 00039fe2 9621
.org 0x39fe4
	lsls r1, r1, #2	@ 00039fe4 8900
.org 0x39fe6
	adds r0, r5, r1	@ 00039fe6 6818
.org 0x39fe8
	ldr r0, [r0, #0]	@ 00039fe8 0068
.org 0x39fea
	movs r1, #128	@ 00039fea 8021
.org 0x39fec
	lsls r1, r1, #10	@ 00039fec 8902
.org 0x39fee
	ands r0, r1	@ 00039fee 0840
.org 0x39ff0
	cmp r0, #0	@ 00039ff0 0028
.org 0x39ff2
	beq.n 0x3a008	@ 00039ff2 09d0
.org 0x39ff4
	ldrb r0, [r2, #12]	@ 00039ff4 107b
.org 0x39ff6
	cmp r0, #2	@ 00039ff6 0228
.org 0x39ff8
	bhi.n 0x3a000	@ 00039ff8 02d8
.org 0x39ffa
	ldrb r0, [r2, #13]	@ 00039ffa 507b
.org 0x39ffc
	cmp r0, #2	@ 00039ffc 0228
.org 0x39ffe
	bls.n 0x3a008	@ 00039ffe 03d9
.org 0x3a000
	cmp r6, #0	@ 0003a000 002e
.org 0x3a002
	beq.n 0x3a0a0	@ 0003a002 4dd0
.org 0x3a004
	movs r0, #5	@ 0003a004 0520
.org 0x3a006
	b.n 0x3a09e	@ 0003a006 4ae0
.org 0x3a008
	movs r0, #150	@ 0003a008 9620
.org 0x3a00a
	lsls r0, r0, #2	@ 0003a00a 8000
.org 0x3a00c
	adds r2, r5, r0	@ 0003a00c 2a18
.org 0x3a00e
	ldr r1, [r2, #0]	@ 0003a00e 1168
.org 0x3a010
	movs r0, #128	@ 0003a010 8020
.org 0x3a012
	lsls r0, r0, #5	@ 0003a012 4001
.org 0x3a014
	ands r1, r0	@ 0003a014 0140
.org 0x3a016
	adds r4, r5, #0	@ 0003a016 2c1c
.org 0x3a018
	adds r4, #180	@ 0003a018 b434
.org 0x3a01a
	adds r7, r2, #0	@ 0003a01a 171c
.org 0x3a01c
	cmp r1, #0	@ 0003a01c 0029
.org 0x3a01e
	beq.n 0x3a048	@ 0003a01e 13d0
.org 0x3a020
	ldrb r0, [r4, #12]	@ 0003a020 207b
.org 0x3a022
	cmp r0, #4	@ 0003a022 0428
.org 0x3a024
	beq.n 0x3a04e	@ 0003a024 13d0
.org 0x3a026
	ldr r1, [pc, #28]	@ 0003a026 0749
.org 0x3a028
	lsls r0, r0, #2	@ 0003a028 8000
.org 0x3a02a
	adds r0, r0, r1	@ 0003a02a 4018
.org 0x3a02c
	ldr r1, [r0, #0]	@ 0003a02c 0168
.org 0x3a02e
	adds r0, r5, #0	@ 0003a02e 281c
.org 0x3a030
	bl 0x128f80	@ 0003a030 eef0a6ff
.org 0x3a034
	lsls r0, r0, #24	@ 0003a034 0006
.org 0x3a036
	cmp r0, #0	@ 0003a036 0028
.org 0x3a038
	beq.n 0x3a048	@ 0003a038 06d0
.org 0x3a03a
	cmp r6, #0	@ 0003a03a 002e
.org 0x3a03c
	beq.n 0x3a0a0	@ 0003a03c 30d0
.org 0x3a03e
	ldrb r0, [r4, #12]	@ 0003a03e 207b
.org 0x3a040
	b.n 0x3a09e	@ 0003a040 2de0
.org 0x3a042
	.byte 0x00	@ 0003a042 data
.org 0x3a043
	.byte 0x00	@ 0003a043 data
.org 0x3a044
	.byte 0x34,0x36,0x85,0x08	@ 0003a044 data
.org 0x3a048
	ldrb r0, [r4, #12]	@ 0003a048 207b
.org 0x3a04a
	cmp r0, #4	@ 0003a04a 0428
.org 0x3a04c
	bne.n 0x3a072	@ 0003a04c 11d1
.org 0x3a04e
	ldr r0, [r7, #0]	@ 0003a04e 3868
.org 0x3a050
	movs r1, #128	@ 0003a050 8021
.org 0x3a052
	lsls r1, r1, #6	@ 0003a052 8901
.org 0x3a054
	ands r0, r1	@ 0003a054 0840
.org 0x3a056
	cmp r0, #0	@ 0003a056 0028
.org 0x3a058
	beq.n 0x3a072	@ 0003a058 0bd0
.org 0x3a05a
	ldr r1, [pc, #72]	@ 0003a05a 1249
.org 0x3a05c
	adds r0, r5, r1	@ 0003a05c 6818
.org 0x3a05e
	ldrh r1, [r0, #0]	@ 0003a05e 0188
.org 0x3a060
	movs r0, #128	@ 0003a060 8020
.org 0x3a062
	lsls r0, r0, #8	@ 0003a062 0002
.org 0x3a064
	ands r0, r1	@ 0003a064 0840
.org 0x3a066
	cmp r0, #0	@ 0003a066 0028
.org 0x3a068
	bne.n 0x3a072	@ 0003a068 03d1
.org 0x3a06a
	ldr r0, [pc, #60]	@ 0003a06a 0f48
.org 0x3a06c
	adds r1, r5, r0	@ 0003a06c 2918
.org 0x3a06e
	movs r0, #1	@ 0003a06e 0120
.org 0x3a070
	strb r0, [r1, #0]	@ 0003a070 0870
.org 0x3a072
	ldr r0, [r7, #0]	@ 0003a072 3868
.org 0x3a074
	movs r1, #128	@ 0003a074 8021
.org 0x3a076
	lsls r1, r1, #7	@ 0003a076 c901
.org 0x3a078
	ands r0, r1	@ 0003a078 0840
.org 0x3a07a
	cmp r0, #0	@ 0003a07a 0028
.org 0x3a07c
	beq.n 0x3a0b0	@ 0003a07c 18d0
.org 0x3a07e
	ldrb r0, [r4, #13]	@ 0003a07e 607b
.org 0x3a080
	cmp r0, #4	@ 0003a080 0428
.org 0x3a082
	beq.n 0x3a0b6	@ 0003a082 18d0
.org 0x3a084
	ldr r1, [pc, #36]	@ 0003a084 0949
.org 0x3a086
	lsls r0, r0, #2	@ 0003a086 8000
.org 0x3a088
	adds r0, r0, r1	@ 0003a088 4018
.org 0x3a08a
	ldr r1, [r0, #0]	@ 0003a08a 0168
.org 0x3a08c
	adds r0, r5, #0	@ 0003a08c 281c
.org 0x3a08e
	bl 0x128f80	@ 0003a08e eef077ff
.org 0x3a092
	lsls r0, r0, #24	@ 0003a092 0006
.org 0x3a094
	cmp r0, #0	@ 0003a094 0028
.org 0x3a096
	beq.n 0x3a0b0	@ 0003a096 0bd0
.org 0x3a098
	cmp r6, #0	@ 0003a098 002e
.org 0x3a09a
	beq.n 0x3a0a0	@ 0003a09a 01d0
.org 0x3a09c
	ldrb r0, [r4, #13]	@ 0003a09c 607b
.org 0x3a09e
	strb r0, [r6, #0]	@ 0003a09e 3070
.org 0x3a0a0
	movs r0, #1	@ 0003a0a0 0120
.org 0x3a0a2
	b.n 0x3a0de	@ 0003a0a2 1ce0
.org 0x3a0a4
	.byte 0x52,0x02,0x00,0x00	@ 0003a0a4 data
.org 0x3a0a8
	.byte 0x67,0x01,0x00,0x00	@ 0003a0a8 data
.org 0x3a0ac
	.byte 0x34,0x36,0x85,0x08	@ 0003a0ac data
.org 0x3a0b0
	ldrb r0, [r4, #13]	@ 0003a0b0 607b
.org 0x3a0b2
	cmp r0, #4	@ 0003a0b2 0428
.org 0x3a0b4
	bne.n 0x3a0dc	@ 0003a0b4 12d1
.org 0x3a0b6
	ldr r0, [r7, #0]	@ 0003a0b6 3868
.org 0x3a0b8
	movs r2, #128	@ 0003a0b8 8022
.org 0x3a0ba
	lsls r2, r2, #8	@ 0003a0ba 1202
.org 0x3a0bc
	ands r0, r2	@ 0003a0bc 1040
.org 0x3a0be
	cmp r0, #0	@ 0003a0be 0028
.org 0x3a0c0
	beq.n 0x3a0dc	@ 0003a0c0 0cd0
.org 0x3a0c2
	ldr r1, [pc, #32]	@ 0003a0c2 0849
.org 0x3a0c4
	adds r0, r5, r1	@ 0003a0c4 6818
.org 0x3a0c6
	ldrh r1, [r0, #0]	@ 0003a0c6 0188
.org 0x3a0c8
	adds r0, r2, #0	@ 0003a0c8 101c
.org 0x3a0ca
	ands r0, r1	@ 0003a0ca 0840
.org 0x3a0cc
	cmp r0, #0	@ 0003a0cc 0028
.org 0x3a0ce
	bne.n 0x3a0dc	@ 0003a0ce 05d1
.org 0x3a0d0
	ldr r0, [pc, #20]	@ 0003a0d0 0548
