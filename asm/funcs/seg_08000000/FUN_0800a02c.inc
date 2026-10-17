@ FUN_0800a02c  entry 0x0800a02c  size 284
.thumb
.org 0xa02c
FUN_0800a02c:
	push {r4, r5, r6, r7, lr}	@ 0000a02c f0b5
.org 0xa02e
	mov r7, r9	@ 0000a02e 4f46
.org 0xa030
	mov r6, r8	@ 0000a030 4646
.org 0xa032
	push {r6, r7}	@ 0000a032 c0b4
.org 0xa034
	sub sp, #8	@ 0000a034 82b0
.org 0xa036
	adds r7, r0, #0	@ 0000a036 071c
.org 0xa038
	ldr r0, [r7, #92]	@ 0000a038 f86d
.org 0xa03a
	lsls r0, r0, #16	@ 0000a03a 0004
.org 0xa03c
	lsrs r3, r0, #16	@ 0000a03c 030c
.org 0xa03e
	ldr r0, [pc, #24]	@ 0000a03e 0648
.org 0xa040
	ldr r1, [pc, #24]	@ 0000a040 0649
.org 0xa042
	adds r0, r0, r1	@ 0000a042 4018
.org 0xa044
	ldrb r0, [r0, #0]	@ 0000a044 0078
.org 0xa046
	cmp r0, #0	@ 0000a046 0028
.org 0xa048
	beq.n 0xa064	@ 0000a048 0cd0
.org 0xa04a
	ldr r0, [pc, #20]	@ 0000a04a 0548
.org 0xa04c
	lsls r1, r3, #8	@ 0000a04c 1902
.org 0xa04e
	ldrh r2, [r0, #0]	@ 0000a04e 0288
.org 0xa050
	orrs r1, r2	@ 0000a050 1143
.org 0xa052
	strh r1, [r0, #0]	@ 0000a052 0180
.org 0xa054
	b.n 0xa06e	@ 0000a054 0be0
.org 0xa056
	.byte 0x00	@ 0000a056 data
.org 0xa057
	.byte 0x00	@ 0000a057 data
.org 0xa058
	.byte 0xb0,0x0a,0x00,0x02	@ 0000a058 data
.org 0xa05c
	.byte 0x25,0xd0,0x02,0x00	@ 0000a05c data
.org 0xa060
	.byte 0x00,0x0a,0x00,0x02	@ 0000a060 data
.org 0xa064
	ldr r2, [pc, #240]	@ 0000a064 3c4a
.org 0xa066
	lsls r1, r3, #8	@ 0000a066 1902
.org 0xa068
	ldrh r0, [r2, #0]	@ 0000a068 1088
.org 0xa06a
	bics r0, r1	@ 0000a06a 8843
.org 0xa06c
	strh r0, [r2, #0]	@ 0000a06c 1080
.org 0xa06e
	ldr r2, [pc, #236]	@ 0000a06e 3b4a
.org 0xa070
	mov r8, r2	@ 0000a070 9046
.org 0xa072
	ldr r0, [pc, #236]	@ 0000a072 3b48
.org 0xa074
	add r0, r8	@ 0000a074 4044
.org 0xa076
	ldrh r0, [r0, #0]	@ 0000a076 0088
.org 0xa078
	lsrs r3, r3, #4	@ 0000a078 1b09
.org 0xa07a
	mov r9, r3	@ 0000a07a 9946
.org 0xa07c
	cmp r0, #0	@ 0000a07c 0028
.org 0xa07e
	beq.n 0xa0c6	@ 0000a07e 22d0
.org 0xa080
	ldr r0, [pc, #224]	@ 0000a080 3848
.org 0xa082
	ldr r0, [r0, #0]	@ 0000a082 0068
.org 0xa084
	ldr r6, [pc, #224]	@ 0000a084 384e
.org 0xa086
	adds r0, r0, r6	@ 0000a086 8019
.org 0xa088
	lsls r5, r3, #1	@ 0000a088 5d00
.org 0xa08a
	ldr r1, [pc, #224]	@ 0000a08a 3849
.org 0xa08c
	adds r5, r5, r1	@ 0000a08c 6d18
.org 0xa08e
	ldrh r2, [r5, #0]	@ 0000a08e 2a88
.org 0xa090
	movs r4, #248	@ 0000a090 f824
.org 0xa092
	lsls r4, r4, #5	@ 0000a092 6401
.org 0xa094
	adds r1, r4, #0	@ 0000a094 211c
.org 0xa096
	ands r1, r2	@ 0000a096 1140
.org 0xa098
	lsls r1, r1, #3	@ 0000a098 c900
.org 0xa09a
	movs r2, #192	@ 0000a09a c022
.org 0xa09c
	lsls r2, r2, #19	@ 0000a09c d204
.org 0xa09e
	adds r1, r1, r2	@ 0000a09e 8918
.org 0xa0a0
	movs r6, #128	@ 0000a0a0 8026
.org 0xa0a2
	lsls r6, r6, #2	@ 0000a0a2 b600
.org 0xa0a4
	adds r2, r6, #0	@ 0000a0a4 321c
.org 0xa0a6
	bl 0x128be0	@ 0000a0a6 1ef19bfd
.org 0xa0aa
	movs r1, #0	@ 0000a0aa 0021
.org 0xa0ac
	ldrh r0, [r5, #0]	@ 0000a0ac 2888
.org 0xa0ae
	ands r4, r0	@ 0000a0ae 0440
.org 0xa0b0
	lsls r4, r4, #3	@ 0000a0b0 e400
.org 0xa0b2
	ldr r0, [pc, #188]	@ 0000a0b2 2f48
.org 0xa0b4
	adds r4, r4, r0	@ 0000a0b4 2418
.org 0xa0b6
	str r1, [sp, #0]	@ 0000a0b6 0091
.org 0xa0b8
	movs r2, #128	@ 0000a0b8 8022
.org 0xa0ba
	lsls r2, r2, #17	@ 0000a0ba 5204
.org 0xa0bc
	orrs r2, r6	@ 0000a0bc 3243
.org 0xa0be
	mov r0, sp	@ 0000a0be 6846
.org 0xa0c0
	adds r1, r4, #0	@ 0000a0c0 211c
.org 0xa0c2
	bl 0x128be0	@ 0000a0c2 1ef18dfd
.org 0xa0c6
	ldr r0, [pc, #172]	@ 0000a0c6 2b48
.org 0xa0c8
	add r0, r8	@ 0000a0c8 4044
.org 0xa0ca
	ldr r2, [r0, #0]	@ 0000a0ca 0268
.org 0xa0cc
	mov r5, r8	@ 0000a0cc 4546
.org 0xa0ce
	cmp r2, #0	@ 0000a0ce 002a
.org 0xa0d0
	beq.n 0xa110	@ 0000a0d0 1ed0
.org 0xa0d2
	ldr r6, [pc, #164]	@ 0000a0d2 294e
.org 0xa0d4
	adds r1, r5, r6	@ 0000a0d4 a919
.org 0xa0d6
	ldr r0, [r2, #84]	@ 0000a0d6 506d
.org 0xa0d8
	str r0, [r1, #0]	@ 0000a0d8 0860
.org 0xa0da
	ldr r0, [pc, #160]	@ 0000a0da 2848
.org 0xa0dc
	adds r1, r5, r0	@ 0000a0dc 2918
.org 0xa0de
	ldr r0, [r2, #88]	@ 0000a0de 906d
.org 0xa0e0
	str r0, [r1, #0]	@ 0000a0e0 0860
.org 0xa0e2
	ldr r0, [pc, #156]	@ 0000a0e2 2748
.org 0xa0e4
	ldrb r1, [r2, #29]	@ 0000a0e4 517f
.org 0xa0e6
	lsrs r2, r1, #5	@ 0000a0e6 4a09
.org 0xa0e8
	lsls r2, r2, #2	@ 0000a0e8 9200
.org 0xa0ea
	adds r2, r2, r0	@ 0000a0ea 1218
.org 0xa0ec
	movs r0, #31	@ 0000a0ec 1f20
.org 0xa0ee
	ands r0, r1	@ 0000a0ee 0840
.org 0xa0f0
	movs r1, #1	@ 0000a0f0 0121
.org 0xa0f2
	lsls r1, r0	@ 0000a0f2 8140
.org 0xa0f4
	ldr r0, [r2, #0]	@ 0000a0f4 1068
.org 0xa0f6
	ands r0, r1	@ 0000a0f6 0840
.org 0xa0f8
	cmp r0, #0	@ 0000a0f8 0028
.org 0xa0fa
	beq.n 0xa110	@ 0000a0fa 09d0
.org 0xa0fc
	ldr r1, [pc, #132]	@ 0000a0fc 2149
.org 0xa0fe
	ldr r6, [pc, #136]	@ 0000a0fe 224e
.org 0xa100
	adds r2, r1, r6	@ 0000a100 8a19
.org 0xa102
	movs r0, #192	@ 0000a102 c020
.org 0xa104
	lsls r0, r0, #1	@ 0000a104 4000
.org 0xa106
	strh r0, [r2, #0]	@ 0000a106 1080
.org 0xa108
	ldr r0, [pc, #128]	@ 0000a108 2048
.org 0xa10a
	adds r1, r1, r0	@ 0000a10a 0918
.org 0xa10c
	movs r0, #32	@ 0000a10c 2020
.org 0xa10e
	strh r0, [r1, #0]	@ 0000a10e 0880
.org 0xa110
	mov r1, r9	@ 0000a110 4946
.org 0xa112
	lsls r3, r1, #2	@ 0000a112 8b00
.org 0xa114
	ldr r2, [pc, #120]	@ 0000a114 1e4a
.org 0xa116
	adds r4, r3, r2	@ 0000a116 9c18
.org 0xa118
	ldr r1, [r7, #52]	@ 0000a118 796b
.org 0xa11a
	ldr r6, [pc, #92]	@ 0000a11a 174e
.org 0xa11c
	adds r0, r5, r6	@ 0000a11c a819
.org 0xa11e
	ldr r0, [r0, #0]	@ 0000a11e 0068
.org 0xa120
	asrs r0, r0, #8	@ 0000a120 0012
.org 0xa122
	subs r1, r1, r0	@ 0000a122 091a
.org 0xa124
	adds r1, #48	@ 0000a124 3031
.org 0xa126
	ldr r0, [r7, #44]	@ 0000a126 f86a
.org 0xa128
	asrs r0, r0, #8	@ 0000a128 0012
.org 0xa12a
	adds r1, r1, r0	@ 0000a12a 0918
.org 0xa12c
	strh r1, [r4, #0]	@ 0000a12c 2180
.org 0xa12e
	adds r2, #2	@ 0000a12e 0232
.org 0xa130
	adds r3, r3, r2	@ 0000a130 9b18
.org 0xa132
	ldr r1, [r7, #56]	@ 0000a132 b96b
.org 0xa134
	ldr r2, [pc, #68]	@ 0000a134 114a
.org 0xa136
	adds r0, r5, r2	@ 0000a136 a818
.org 0xa138
	ldr r0, [r0, #0]	@ 0000a138 0068
.org 0xa13a
	asrs r0, r0, #8	@ 0000a13a 0012
.org 0xa13c
	subs r1, r1, r0	@ 0000a13c 091a
.org 0xa13e
	adds r1, #144	@ 0000a13e 9031
.org 0xa140
	ldr r0, [r7, #48]	@ 0000a140 386b
.org 0xa142
	asrs r0, r0, #8	@ 0000a142 0012
.org 0xa144
	adds r1, r1, r0	@ 0000a144 0918
.org 0xa146
	strh r1, [r3, #0]	@ 0000a146 1980
