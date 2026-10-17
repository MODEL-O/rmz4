@ FUN_08042090  entry 0x08042090  size 396
.thumb
.org 0x42090
FUN_08042090:
	push {r4, r5, r6, r7, lr}	@ 00042090 f0b5
.org 0x42092
	adds r7, r0, #0	@ 00042092 071c
.org 0x42094
	ldr r6, [r7, #40]	@ 00042094 be6a
.org 0x42096
	bl 0x1cc9c	@ 00042096 daf701fe
.org 0x4209a
	adds r0, r7, #0	@ 0004209a 381c
.org 0x4209c
	bl 0x1ceec	@ 0004209c daf726ff
.org 0x420a0
	ldrb r1, [r7, #10]	@ 000420a0 b97a
.org 0x420a2
	movs r0, #1	@ 000420a2 0120
.org 0x420a4
	movs r5, #0	@ 000420a4 0025
.org 0x420a6
	orrs r0, r1	@ 000420a6 0843
.org 0x420a8
	movs r1, #2	@ 000420a8 0221
.org 0x420aa
	orrs r0, r1	@ 000420aa 0843
.org 0x420ac
	strb r0, [r7, #10]	@ 000420ac b872
.org 0x420ae
	ldr r1, [pc, #60]	@ 000420ae 0f49
.org 0x420b0
	adds r0, r7, #0	@ 000420b0 381c
.org 0x420b2
	bl 0x1cf00	@ 000420b2 daf725ff
.org 0x420b6
	ldrb r1, [r7, #10]	@ 000420b6 b97a
.org 0x420b8
	movs r0, #4	@ 000420b8 0420
.org 0x420ba
	orrs r0, r1	@ 000420ba 0843
.org 0x420bc
	strb r0, [r7, #10]	@ 000420bc b872
.org 0x420be
	adds r4, r7, #0	@ 000420be 3c1c
.org 0x420c0
	adds r4, #116	@ 000420c0 7434
.org 0x420c2
	ldr r1, [pc, #44]	@ 000420c2 0b49
.org 0x420c4
	adds r2, r7, #0	@ 000420c4 3a1c
.org 0x420c6
	adds r2, #84	@ 000420c6 5432
.org 0x420c8
	adds r0, r4, #0	@ 000420c8 201c
.org 0x420ca
	movs r3, #8	@ 000420ca 0823
.org 0x420cc
	bl 0x5760	@ 000420cc c3f748fb
.org 0x420d0
	str r7, [r4, #44]	@ 000420d0 e762
.org 0x420d2
	str r5, [r4, #36]	@ 000420d2 6562
.org 0x420d4
	ldr r2, [r7, #84]	@ 000420d4 7a6d
.org 0x420d6
	ldr r0, [r6, #84]	@ 000420d6 706d
.org 0x420d8
	cmp r2, r0	@ 000420d8 8242
.org 0x420da
	ble.n 0x420f4	@ 000420da 0bdd
.org 0x420dc
	ldr r1, [r7, #88]	@ 000420dc b96d
.org 0x420de
	adds r0, r2, #0	@ 000420de 101c
.org 0x420e0
	bl 0x816c	@ 000420e0 c6f744f8
.org 0x420e4
	adds r5, r0, #0	@ 000420e4 051c
.org 0x420e6
	cmp r5, #0	@ 000420e6 002d
.org 0x420e8
	ble.n 0x42106	@ 000420e8 0ddd
.org 0x420ea
	b.n 0x42102	@ 000420ea 0ae0
.org 0x420ec
	.byte 0x0e,0x81,0x00,0x00	@ 000420ec data
.org 0x420f0
	.byte 0x54,0x5b,0x85,0x08	@ 000420f0 data
.org 0x420f4
	ldr r1, [r7, #88]	@ 000420f4 b96d
.org 0x420f6
	adds r0, r2, #0	@ 000420f6 101c
.org 0x420f8
	bl 0x834c	@ 000420f8 c6f728f9
.org 0x420fc
	adds r5, r0, #0	@ 000420fc 051c
.org 0x420fe
	cmp r5, #0	@ 000420fe 002d
.org 0x42100
	bge.n 0x42106	@ 00042100 01da
.org 0x42102
	movs r5, #128	@ 00042102 8025
.org 0x42104
	lsls r5, r5, #9	@ 00042104 6d02
.org 0x42106
	ldr r0, [r7, #84]	@ 00042106 786d
.org 0x42108
	ldr r1, [r7, #88]	@ 00042108 b96d
.org 0x4210a
	bl 0x7db4	@ 0004210a c5f753fe
.org 0x4210e
	adds r4, r0, #0	@ 0004210e 041c
.org 0x42110
	ldr r0, [r7, #84]	@ 00042110 786d
.org 0x42112
	ldr r1, [r7, #88]	@ 00042112 b96d
.org 0x42114
	bl 0x7f8c	@ 00042114 c5f73aff
.org 0x42118
	cmp r4, #0	@ 00042118 002c
.org 0x4211a
	ble.n 0x42120	@ 0004211a 01dd
.org 0x4211c
	movs r4, #128	@ 0004211c 8024
.org 0x4211e
	lsls r4, r4, #9	@ 0004211e 6402
.org 0x42120
	cmp r0, #0	@ 00042120 0028
.org 0x42122
	bge.n 0x42128	@ 00042122 01da
.org 0x42124
	movs r0, #128	@ 00042124 8020
.org 0x42126
	lsls r0, r0, #9	@ 00042126 4002
.org 0x42128
	adds r3, r4, #0	@ 00042128 231c
.org 0x4212a
	cmp r4, #0	@ 0004212a 002c
.org 0x4212c
	bge.n 0x42130	@ 0004212c 00da
.org 0x4212e
	negs r3, r4	@ 0004212e 6342
.org 0x42130
	adds r1, r0, #0	@ 00042130 011c
.org 0x42132
	cmp r1, #0	@ 00042132 0029
.org 0x42134
	bge.n 0x42138	@ 00042134 00da
.org 0x42136
	negs r1, r1	@ 00042136 4942
.org 0x42138
	adds r2, r0, #0	@ 00042138 021c
.org 0x4213a
	cmp r3, r1	@ 0004213a 8b42
.org 0x4213c
	bge.n 0x42140	@ 0004213c 00da
.org 0x4213e
	adds r2, r4, #0	@ 0004213e 221c
.org 0x42140
	movs r0, #128	@ 00042140 8020
.org 0x42142
	lsls r0, r0, #9	@ 00042142 4002
.org 0x42144
	cmp r5, r0	@ 00042144 8542
.org 0x42146
	bne.n 0x42188	@ 00042146 1fd1
.org 0x42148
	cmp r2, r5	@ 00042148 aa42
.org 0x4214a
	bne.n 0x42188	@ 0004214a 1dd1
.org 0x4214c
	ldrb r1, [r7, #10]	@ 0004214c b97a
.org 0x4214e
	movs r0, #254	@ 0004214e fe20
.org 0x42150
	ands r0, r1	@ 00042150 0840
.org 0x42152
	movs r2, #0	@ 00042152 0022
.org 0x42154
	movs r1, #253	@ 00042154 fd21
.org 0x42156
	ands r0, r1	@ 00042156 0840
.org 0x42158
	strb r0, [r7, #10]	@ 00042158 b872
.org 0x4215a
	adds r0, r7, #0	@ 0004215a 381c
.org 0x4215c
	adds r0, #140	@ 0004215c 8c30
.org 0x4215e
	str r2, [r0, #0]	@ 0004215e 0260
.org 0x42160
	adds r0, #4	@ 00042160 0430
.org 0x42162
	str r2, [r0, #0]	@ 00042162 0260
.org 0x42164
	adds r0, #4	@ 00042164 0430
.org 0x42166
	strb r2, [r0, #0]	@ 00042166 0270
.org 0x42168
	ldrb r1, [r7, #10]	@ 00042168 b97a
.org 0x4216a
	movs r0, #251	@ 0004216a fb20
.org 0x4216c
	ands r0, r1	@ 0004216c 0840
.org 0x4216e
	strb r0, [r7, #10]	@ 0004216e b872
.org 0x42170
	ldr r1, [pc, #16]	@ 00042170 0449
.org 0x42172
	ldrb r0, [r7, #9]	@ 00042172 787a
.org 0x42174
	lsls r0, r0, #2	@ 00042174 8000
.org 0x42176
	adds r0, r0, r1	@ 00042176 4018
.org 0x42178
	movs r1, #3	@ 00042178 0321
.org 0x4217a
	str r1, [r7, #12]	@ 0004217a f960
.org 0x4217c
	ldr r0, [r0, #0]	@ 0004217c 0068
.org 0x4217e
	ldr r0, [r0, #12]	@ 0004217e c068
.org 0x42180
	str r0, [r7, #20]	@ 00042180 7861
.org 0x42182
	b.n 0x4222c	@ 00042182 53e0
.org 0x42184
	.byte 0xf8,0x39,0x85,0x08	@ 00042184 data
.org 0x42188
	adds r1, r5, #0	@ 00042188 291c
.org 0x4218a
	cmp r5, #0	@ 0004218a 002d
.org 0x4218c
	bge.n 0x42190	@ 0004218c 00da
.org 0x4218e
	negs r1, r5	@ 0004218e 6942
.org 0x42190
	adds r0, r2, #0	@ 00042190 101c
.org 0x42192
	cmp r2, #0	@ 00042192 002a
.org 0x42194
	bge.n 0x42198	@ 00042194 00da
.org 0x42196
	negs r0, r2	@ 00042196 5042
.org 0x42198
	cmp r1, r0	@ 00042198 8142
.org 0x4219a
	bge.n 0x421e2	@ 0004219a 22da
.org 0x4219c
	ldr r0, [r7, #84]	@ 0004219c 786d
.org 0x4219e
	adds r0, r0, r5	@ 0004219e 4019
.org 0x421a0
	str r0, [r7, #84]	@ 000421a0 7865
.org 0x421a2
	ldrb r0, [r7, #17]	@ 000421a2 787c
.org 0x421a4
	cmp r0, #0	@ 000421a4 0028
.org 0x421a6
	beq.n 0x421ae	@ 000421a6 02d0
.org 0x421a8
	movs r0, #128	@ 000421a8 8020
.org 0x421aa
	lsls r0, r0, #3	@ 000421aa c000
.org 0x421ac
	b.n 0x421b0	@ 000421ac 00e0
.org 0x421ae
	ldr r0, [pc, #24]	@ 000421ae 0648
.org 0x421b0
	str r0, [r7, #96]	@ 000421b0 3866
.org 0x421b2
	movs r0, #0	@ 000421b2 0020
.org 0x421b4
	str r0, [r7, #92]	@ 000421b4 f865
.org 0x421b6
	cmp r5, #0	@ 000421b6 002d
.org 0x421b8
	bge.n 0x421cc	@ 000421b8 08da
.org 0x421ba
	ldr r0, [r7, #84]	@ 000421ba 786d
.org 0x421bc
	ldr r1, [r7, #88]	@ 000421bc b96d
.org 0x421be
	bl 0x8868	@ 000421be c6f753fb
.org 0x421c2
	str r0, [r7, #84]	@ 000421c2 7865
.org 0x421c4
	movs r0, #1	@ 000421c4 0120
.org 0x421c6
	b.n 0x421da	@ 000421c6 08e0
.org 0x421c8
	.byte 0x00,0xfc,0xff,0xff	@ 000421c8 data
.org 0x421cc
	ldr r0, [r7, #84]	@ 000421cc 786d
.org 0x421ce
	ldr r1, [r7, #88]	@ 000421ce b96d
.org 0x421d0
	bl 0x8988	@ 000421d0 c6f7dafb
.org 0x421d4
	str r0, [r7, #84]	@ 000421d4 7865
.org 0x421d6
	movs r0, #1	@ 000421d6 0120
.org 0x421d8
	negs r0, r0	@ 000421d8 4042
.org 0x421da
	str r0, [r7, #100]	@ 000421da 7866
.org 0x421dc
	movs r0, #0	@ 000421dc 0020
.org 0x421de
	str r0, [r7, #104]	@ 000421de b866
.org 0x421e0
	b.n 0x42228	@ 000421e0 22e0
.org 0x421e2
	ldr r0, [r7, #88]	@ 000421e2 b86d
.org 0x421e4
	adds r0, r0, r2	@ 000421e4 8018
.org 0x421e6
	str r0, [r7, #88]	@ 000421e6 b865
.org 0x421e8
	ldrb r0, [r7, #17]	@ 000421e8 787c
.org 0x421ea
	cmp r0, #0	@ 000421ea 0028
.org 0x421ec
	beq.n 0x421f4	@ 000421ec 02d0
.org 0x421ee
	movs r0, #128	@ 000421ee 8020
.org 0x421f0
	lsls r0, r0, #3	@ 000421f0 c000
.org 0x421f2
	b.n 0x421f6	@ 000421f2 00e0
.org 0x421f4
	ldr r0, [pc, #24]	@ 000421f4 0648
.org 0x421f6
	str r0, [r7, #92]	@ 000421f6 f865
.org 0x421f8
	movs r0, #0	@ 000421f8 0020
.org 0x421fa
	str r0, [r7, #96]	@ 000421fa 3866
.org 0x421fc
	cmp r2, #0	@ 000421fc 002a
.org 0x421fe
	bge.n 0x42214	@ 000421fe 09da
.org 0x42200
	ldr r0, [r7, #84]	@ 00042200 786d
.org 0x42202
	ldr r1, [r7, #88]	@ 00042202 b96d
.org 0x42204
	bl 0x8534	@ 00042204 c6f796f9
.org 0x42208
	str r0, [r7, #88]	@ 00042208 b865
.org 0x4220a
	movs r0, #1	@ 0004220a 0120
.org 0x4220c
	b.n 0x42222	@ 0004220c 09e0
.org 0x4220e
	.byte 0x00	@ 0004220e data
.org 0x4220f
	.byte 0x00	@ 0004220f data
.org 0x42210
	.byte 0x00,0xfc,0xff,0xff	@ 00042210 data
.org 0x42214
	ldr r0, [r7, #84]	@ 00042214 786d
.org 0x42216
	ldr r1, [r7, #88]	@ 00042216 b96d
.org 0x42218
	bl 0x8748	@ 00042218 c6f796fa
