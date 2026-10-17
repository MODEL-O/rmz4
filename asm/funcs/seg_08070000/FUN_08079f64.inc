@ FUN_08079f64  entry 0x08079f64  size 322
.thumb
.org 0x79f64
FUN_08079f64:
	push {r4, r5, r6, r7, lr}	@ 00079f64 f0b5
.org 0x79f66
	adds r4, r0, #0	@ 00079f66 041c
.org 0x79f68
	bl 0x1cff0	@ 00079f68 a3f742f8
.org 0x79f6c
	ldr r2, [pc, #76]	@ 00079f6c 134a
.org 0x79f6e
	ldrh r1, [r2, #8]	@ 00079f6e 1189
.org 0x79f70
	movs r0, #8	@ 00079f70 0820
.org 0x79f72
	ands r0, r1	@ 00079f72 0840
.org 0x79f74
	cmp r0, #0	@ 00079f74 0028
.org 0x79f76
	beq.n 0x79f7a	@ 00079f76 00d0
.org 0x79f78
	b.n 0x7a0d2	@ 00079f78 abe0
.org 0x79f7a
	ldr r0, [pc, #68]	@ 00079f7a 1148
.org 0x79f7c
	ldr r1, [r0, #0]	@ 00079f7c 0168
.org 0x79f7e
	adds r0, r2, #0	@ 00079f7e 101c
.org 0x79f80
	adds r0, #232	@ 00079f80 e830
.org 0x79f82
	ldr r0, [r0, #56]	@ 00079f82 806b
.org 0x79f84
	ldr r2, [pc, #60]	@ 00079f84 0f4a
.org 0x79f86
	adds r0, r0, r2	@ 00079f86 8018
.org 0x79f88
	ldr r1, [r1, #84]	@ 00079f88 496d
.org 0x79f8a
	ldr r7, [pc, #60]	@ 00079f8a 0f4f
.org 0x79f8c
	adds r5, r4, #0	@ 00079f8c 251c
.org 0x79f8e
	adds r5, #217	@ 00079f8e d935
.org 0x79f90
	cmp r1, r0	@ 00079f90 8142
.org 0x79f92
	bge.n 0x7a040	@ 00079f92 55da
.org 0x79f94
	ldr r6, [pc, #52]	@ 00079f94 0d4e
.org 0x79f96
	ldr r1, [r6, #0]	@ 00079f96 3168
.org 0x79f98
	ldr r0, [pc, #52]	@ 00079f98 0d48
.org 0x79f9a
	muls r0, r1	@ 00079f9a 4843
.org 0x79f9c
	ldr r1, [pc, #52]	@ 00079f9c 0d49
.org 0x79f9e
	adds r0, r0, r1	@ 00079f9e 4018
.org 0x79fa0
	lsls r0, r0, #1	@ 00079fa0 4000
.org 0x79fa2
	lsrs r1, r0, #1	@ 00079fa2 4108
.org 0x79fa4
	str r1, [r6, #0]	@ 00079fa4 3160
.org 0x79fa6
	lsrs r0, r0, #17	@ 00079fa6 400c
.org 0x79fa8
	movs r1, #18	@ 00079fa8 1221
.org 0x79faa
	bl 0x129198	@ 00079faa aff0f5f8
.org 0x79fae
	lsls r0, r0, #24	@ 00079fae 0006
.org 0x79fb0
	lsrs r0, r0, #24	@ 00079fb0 000e
.org 0x79fb2
	cmp r0, #1	@ 00079fb2 0128
.org 0x79fb4
	bhi.n 0x79fd8	@ 00079fb4 10d8
.org 0x79fb6
	movs r0, #4	@ 00079fb6 0420
.org 0x79fb8
	b.n 0x7a012	@ 00079fb8 2be0
.org 0x79fba
	.byte 0x00	@ 00079fba data
.org 0x79fbb
	.byte 0x00	@ 00079fbb data
.org 0x79fbc
	.byte 0x10,0xe9,0x02,0x02	@ 00079fbc data
.org 0x79fc0
	.byte 0xf0,0xdb,0x02,0x02	@ 00079fc0 data
.org 0x79fc4
	.byte 0x00,0xe8,0xff,0xff	@ 00079fc4 data
.org 0x79fc8
	.byte 0xe0,0xe8,0x02,0x02	@ 00079fc8 data
.org 0x79fcc
	.byte 0x38,0xdc,0x02,0x02	@ 00079fcc data
.org 0x79fd0
	.byte 0xfd,0x43,0x03,0x00	@ 00079fd0 data
.org 0x79fd4
	.byte 0xc3,0x9e,0x26,0x00	@ 00079fd4 data
.org 0x79fd8
	cmp r0, #3	@ 00079fd8 0328
.org 0x79fda
	bhi.n 0x79ff0	@ 00079fda 09d8
.org 0x79fdc
	adds r1, r4, #0	@ 00079fdc 211c
.org 0x79fde
	adds r1, #180	@ 00079fde b431
.org 0x79fe0
	ldr r0, [r1, #20]	@ 00079fe0 4869
.org 0x79fe2
	cmp r0, #0	@ 00079fe2 0028
.org 0x79fe4
	bne.n 0x79f96	@ 00079fe4 d7d1
.org 0x79fe6
	ldr r0, [r1, #24]	@ 00079fe6 8869
.org 0x79fe8
	cmp r0, #0	@ 00079fe8 0028
.org 0x79fea
	bne.n 0x79f96	@ 00079fea d4d1
.org 0x79fec
	movs r0, #5	@ 00079fec 0520
.org 0x79fee
	b.n 0x7a012	@ 00079fee 10e0
.org 0x79ff0
	cmp r0, #7	@ 00079ff0 0728
.org 0x79ff2
	bhi.n 0x79ff8	@ 00079ff2 01d8
.org 0x79ff4
	movs r0, #6	@ 00079ff4 0620
.org 0x79ff6
	b.n 0x7a012	@ 00079ff6 0ce0
.org 0x79ff8
	cmp r0, #9	@ 00079ff8 0928
.org 0x79ffa
	bhi.n 0x7a000	@ 00079ffa 01d8
.org 0x79ffc
	movs r0, #7	@ 00079ffc 0720
.org 0x79ffe
	b.n 0x7a012	@ 00079ffe 08e0
.org 0x7a000
	cmp r0, #13	@ 0007a000 0d28
.org 0x7a002
	bhi.n 0x7a008	@ 0007a002 01d8
.org 0x7a004
	movs r0, #9	@ 0007a004 0920
.org 0x7a006
	b.n 0x7a012	@ 0007a006 04e0
.org 0x7a008
	cmp r0, #15	@ 0007a008 0f28
.org 0x7a00a
	bhi.n 0x7a010	@ 0007a00a 01d8
.org 0x7a00c
	movs r0, #10	@ 0007a00c 0a20
.org 0x7a00e
	b.n 0x7a012	@ 0007a00e 00e0
.org 0x7a010
	movs r0, #11	@ 0007a010 0b20
.org 0x7a012
	strb r0, [r4, #13]	@ 0007a012 6073
.org 0x7a014
	ldr r0, [r7, #0]	@ 0007a014 3868
.org 0x7a016
	ldrb r0, [r0, #1]	@ 0007a016 4078
.org 0x7a018
	cmp r0, #4	@ 0007a018 0428
.org 0x7a01a
	bls.n 0x7a02a	@ 0007a01a 06d9
.org 0x7a01c
	ldr r0, [pc, #28]	@ 0007a01c 0748
.org 0x7a01e
	ldrb r1, [r0, #4]	@ 0007a01e 0179
.org 0x7a020
	movs r0, #4	@ 0007a020 0420
.org 0x7a022
	ands r0, r1	@ 0007a022 0840
.org 0x7a024
	ldrb r1, [r4, #13]	@ 0007a024 617b
.org 0x7a026
	cmp r0, #0	@ 0007a026 0028
.org 0x7a028
	beq.n 0x7a032	@ 0007a028 03d0
.org 0x7a02a
	ldrb r0, [r4, #13]	@ 0007a02a 607b
.org 0x7a02c
	adds r1, r0, #0	@ 0007a02c 011c
.org 0x7a02e
	cmp r1, #10	@ 0007a02e 0a29
.org 0x7a030
	beq.n 0x79f96	@ 0007a030 b1d0
.org 0x7a032
	ldrb r0, [r5, #0]	@ 0007a032 2878
.org 0x7a034
	cmp r0, r1	@ 0007a034 8842
.org 0x7a036
	beq.n 0x79f96	@ 0007a036 aed0
.org 0x7a038
	b.n 0x7a0cc	@ 0007a038 48e0
.org 0x7a03a
	.byte 0x00	@ 0007a03a data
.org 0x7a03b
	.byte 0x00	@ 0007a03b data
.org 0x7a03c
	.byte 0xb0,0xe8,0x02,0x02	@ 0007a03c data
.org 0x7a040
	ldr r6, [pc, #36]	@ 0007a040 094e
.org 0x7a042
	ldr r1, [r6, #0]	@ 0007a042 3168
.org 0x7a044
	ldr r0, [pc, #36]	@ 0007a044 0948
.org 0x7a046
	muls r0, r1	@ 0007a046 4843
.org 0x7a048
	ldr r2, [pc, #36]	@ 0007a048 094a
.org 0x7a04a
	adds r0, r0, r2	@ 0007a04a 8018
.org 0x7a04c
	lsls r0, r0, #1	@ 0007a04c 4000
.org 0x7a04e
	lsrs r1, r0, #1	@ 0007a04e 4108
.org 0x7a050
	str r1, [r6, #0]	@ 0007a050 3160
.org 0x7a052
	lsrs r0, r0, #17	@ 0007a052 400c
.org 0x7a054
	movs r1, #18	@ 0007a054 1221
.org 0x7a056
	bl 0x129198	@ 0007a056 aff09ff8
.org 0x7a05a
	lsls r0, r0, #24	@ 0007a05a 0006
.org 0x7a05c
	lsrs r0, r0, #24	@ 0007a05c 000e
.org 0x7a05e
	cmp r0, #3	@ 0007a05e 0328
.org 0x7a060
	bhi.n 0x7a074	@ 0007a060 08d8
.org 0x7a062
	movs r0, #4	@ 0007a062 0420
.org 0x7a064
	b.n 0x7a0a6	@ 0007a064 1fe0
.org 0x7a066
	.byte 0x00	@ 0007a066 data
.org 0x7a067
	.byte 0x00	@ 0007a067 data
.org 0x7a068
	.byte 0x38,0xdc,0x02,0x02	@ 0007a068 data
.org 0x7a06c
	.byte 0xfd,0x43,0x03,0x00	@ 0007a06c data
.org 0x7a070
	.byte 0xc3,0x9e,0x26,0x00	@ 0007a070 data
.org 0x7a074
	cmp r0, #6	@ 0007a074 0628
.org 0x7a076
	bhi.n 0x7a08c	@ 0007a076 09d8
.org 0x7a078
	adds r1, r4, #0	@ 0007a078 211c
.org 0x7a07a
	adds r1, #180	@ 0007a07a b431
.org 0x7a07c
	ldr r0, [r1, #20]	@ 0007a07c 4869
.org 0x7a07e
	cmp r0, #0	@ 0007a07e 0028
.org 0x7a080
	bne.n 0x7a042	@ 0007a080 dfd1
.org 0x7a082
	ldr r0, [r1, #24]	@ 0007a082 8869
.org 0x7a084
	cmp r0, #0	@ 0007a084 0028
.org 0x7a086
	bne.n 0x7a042	@ 0007a086 dcd1
.org 0x7a088
	movs r0, #5	@ 0007a088 0520
.org 0x7a08a
	b.n 0x7a0a6	@ 0007a08a 0ce0
.org 0x7a08c
	cmp r0, #8	@ 0007a08c 0828
.org 0x7a08e
	bhi.n 0x7a094	@ 0007a08e 01d8
.org 0x7a090
	movs r0, #6	@ 0007a090 0620
.org 0x7a092
	b.n 0x7a0a6	@ 0007a092 08e0
.org 0x7a094
	cmp r0, #13	@ 0007a094 0d28
.org 0x7a096
	bhi.n 0x7a09c	@ 0007a096 01d8
.org 0x7a098
	movs r0, #7	@ 0007a098 0720
.org 0x7a09a
	b.n 0x7a0a6	@ 0007a09a 04e0
.org 0x7a09c
	cmp r0, #15	@ 0007a09c 0f28
.org 0x7a09e
	bhi.n 0x7a0a4	@ 0007a09e 01d8
.org 0x7a0a0
	movs r0, #10	@ 0007a0a0 0a20
.org 0x7a0a2
	b.n 0x7a0a6	@ 0007a0a2 00e0
.org 0x7a0a4
	movs r0, #11	@ 0007a0a4 0b20
