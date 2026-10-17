@ FUN_080fd094  entry 0x080fd094  size 574
.thumb
.org 0xfd094
FUN_080fd094:
	push {r4, r5, r6, r7, lr}	@ 000fd094 f0b5
.org 0xfd096
	adds r5, r0, #0	@ 000fd096 051c
.org 0xfd098
	ldrb r0, [r5, #13]	@ 000fd098 687b
.org 0xfd09a
	cmp r0, #0	@ 000fd09a 0028
.org 0xfd09c
	beq.n 0xfd0a0	@ 000fd09c 00d0
.org 0xfd09e
	b.n 0xfd212	@ 000fd09e b8e0
.org 0xfd0a0
	ldrb r1, [r5, #10]	@ 000fd0a0 a97a
.org 0xfd0a2
	movs r0, #1	@ 000fd0a2 0120
.org 0xfd0a4
	orrs r0, r1	@ 000fd0a4 0843
.org 0xfd0a6
	strb r0, [r5, #10]	@ 000fd0a6 a872
.org 0xfd0a8
	adds r6, r5, #0	@ 000fd0a8 2e1c
.org 0xfd0aa
	adds r6, #182	@ 000fd0aa b636
.org 0xfd0ac
	ldr r1, [pc, #64]	@ 000fd0ac 1049
.org 0xfd0ae
	strh r1, [r6, #0]	@ 000fd0ae 3180
.org 0xfd0b0
	adds r0, r5, #0	@ 000fd0b0 281c
.org 0xfd0b2
	bl 0x1cf00	@ 000fd0b2 1ff725ff
.org 0xfd0b6
	ldr r0, [pc, #60]	@ 000fd0b6 0f48
.org 0xfd0b8
	ldrb r0, [r0, #1]	@ 000fd0b8 4078
.org 0xfd0ba
	adds r4, r5, #0	@ 000fd0ba 2c1c
.org 0xfd0bc
	adds r4, #180	@ 000fd0bc b434
.org 0xfd0be
	strb r0, [r4, #0]	@ 000fd0be 2070
.org 0xfd0c0
	ldr r0, [r5, #84]	@ 000fd0c0 686d
.org 0xfd0c2
	ldr r1, [r5, #88]	@ 000fd0c2 a96d
.org 0xfd0c4
	bl 0x127c8	@ 000fd0c4 15f780fb
.org 0xfd0c8
	movs r0, #0	@ 000fd0c8 0020
.org 0xfd0ca
	ldrsb r0, [r4, r0]	@ 000fd0ca 2056
.org 0xfd0cc
	cmp r0, #0	@ 000fd0cc 0028
.org 0xfd0ce
	blt.n 0xfd100	@ 000fd0ce 17db
.org 0xfd0d0
	ldrh r1, [r6, #0]	@ 000fd0d0 3188
.org 0xfd0d2
	ldr r0, [pc, #36]	@ 000fd0d2 0948
.org 0xfd0d4
	cmp r1, r0	@ 000fd0d4 8142
.org 0xfd0d6
	beq.n 0xfd100	@ 000fd0d6 13d0
.org 0xfd0d8
	adds r0, r5, #0	@ 000fd0d8 281c
.org 0xfd0da
	adds r0, #116	@ 000fd0da 7430
.org 0xfd0dc
	movs r2, #0	@ 000fd0dc 0022
.org 0xfd0de
	ldrsb r2, [r4, r2]	@ 000fd0de a256
.org 0xfd0e0
	lsls r1, r2, #1	@ 000fd0e0 5100
.org 0xfd0e2
	adds r1, r1, r2	@ 000fd0e2 8918
.org 0xfd0e4
	lsls r1, r1, #3	@ 000fd0e4 c900
.org 0xfd0e6
	ldr r2, [pc, #20]	@ 000fd0e6 054a
.org 0xfd0e8
	adds r1, r1, r2	@ 000fd0e8 8918
.org 0xfd0ea
	bl 0x5784	@ 000fd0ea 08f74bfb
.org 0xfd0ee
	b.n 0xfd10a	@ 000fd0ee 0ce0
.org 0xfd0f0
	.byte 0x01,0x9f,0x00,0x00	@ 000fd0f0 data
.org 0xfd0f4
	.byte 0xcc,0xaf,0x86,0x08	@ 000fd0f4 data
.org 0xfd0f8
	.byte 0x07,0x9f,0x00,0x00	@ 000fd0f8 data
.org 0xfd0fc
	.byte 0x3c,0xaf,0x86,0x08	@ 000fd0fc data
.org 0xfd100
	adds r0, r5, #0	@ 000fd100 281c
.org 0xfd102
	adds r0, #116	@ 000fd102 7430
.org 0xfd104
	ldr r1, [pc, #32]	@ 000fd104 0849
.org 0xfd106
	bl 0x5784	@ 000fd106 08f73dfb
.org 0xfd10a
	movs r0, #0	@ 000fd10a 0020
.org 0xfd10c
	ldrsb r0, [r4, r0]	@ 000fd10c 2056
.org 0xfd10e
	cmp r0, #0	@ 000fd10e 0028
.org 0xfd110
	ble.n 0xfd130	@ 000fd110 0edd
.org 0xfd112
	ldrb r1, [r5, #11]	@ 000fd112 e97a
.org 0xfd114
	movs r0, #8	@ 000fd114 0820
.org 0xfd116
	orrs r0, r1	@ 000fd116 0843
.org 0xfd118
	strb r0, [r5, #11]	@ 000fd118 e872
.org 0xfd11a
	movs r0, #0	@ 000fd11a 0020
.org 0xfd11c
	ldrsb r0, [r4, r0]	@ 000fd11c 2056
.org 0xfd11e
	lsls r0, r0, #3	@ 000fd11e c000
.org 0xfd120
	ldr r1, [pc, #8]	@ 000fd120 0249
.org 0xfd122
	adds r0, r0, r1	@ 000fd122 4018
.org 0xfd124
	b.n 0xfd152	@ 000fd124 15e0
.org 0xfd126
	.byte 0x00	@ 000fd126 data
.org 0xfd127
	.byte 0x00	@ 000fd127 data
.org 0xfd128
	.byte 0xb4,0xaf,0x86,0x08	@ 000fd128 data
.org 0xfd12c
	.byte 0xdc,0xaf,0x86,0x08	@ 000fd12c data
.org 0xfd130
	cmp r0, #0	@ 000fd130 0028
.org 0xfd132
	bne.n 0xfd164	@ 000fd132 17d1
.org 0xfd134
	ldrb r0, [r5, #30]	@ 000fd134 a87f
.org 0xfd136
	lsls r0, r0, #8	@ 000fd136 0002
.org 0xfd138
	adds r1, r5, #0	@ 000fd138 291c
.org 0xfd13a
	adds r1, #112	@ 000fd13a 7031
.org 0xfd13c
	ldrb r1, [r1, #0]	@ 000fd13c 0978
.org 0xfd13e
	orrs r0, r1	@ 000fd13e 0843
.org 0xfd140
	movs r1, #159	@ 000fd140 9f21
.org 0xfd142
	lsls r1, r1, #8	@ 000fd142 0902
.org 0xfd144
	cmp r0, r1	@ 000fd144 8842
.org 0xfd146
	beq.n 0xfd164	@ 000fd146 0dd0
.org 0xfd148
	ldrb r1, [r5, #11]	@ 000fd148 e97a
.org 0xfd14a
	movs r0, #8	@ 000fd14a 0820
.org 0xfd14c
	orrs r0, r1	@ 000fd14c 0843
.org 0xfd14e
	strb r0, [r5, #11]	@ 000fd14e e872
.org 0xfd150
	ldr r0, [pc, #8]	@ 000fd150 0248
.org 0xfd152
	str r0, [r5, #48]	@ 000fd152 2863
.org 0xfd154
	ldr r0, [pc, #8]	@ 000fd154 0248
.org 0xfd156
	strh r0, [r5, #38]	@ 000fd156 e884
.org 0xfd158
	b.n 0xfd16c	@ 000fd158 08e0
.org 0xfd15a
	.byte 0x00	@ 000fd15a data
.org 0xfd15b
	.byte 0x00	@ 000fd15b data
.org 0xfd15c
	.byte 0xdc,0xaf,0x86,0x08	@ 000fd15c data
.org 0xfd160
	.byte 0x01,0x02,0x00,0x00	@ 000fd160 data
.org 0xfd164
	ldrb r1, [r5, #11]	@ 000fd164 e97a
.org 0xfd166
	movs r0, #247	@ 000fd166 f720
.org 0xfd168
	ands r0, r1	@ 000fd168 0840
.org 0xfd16a
	strb r0, [r5, #11]	@ 000fd16a e872
.org 0xfd16c
	movs r0, #0	@ 000fd16c 0020
.org 0xfd16e
	strb r0, [r5, #14]	@ 000fd16e a873
.org 0xfd170
	ldr r0, [pc, #132]	@ 000fd170 2148
.org 0xfd172
	ldrb r1, [r5, #17]	@ 000fd172 697c
.org 0xfd174
	lsrs r2, r1, #5	@ 000fd174 4a09
.org 0xfd176
	adds r2, #1	@ 000fd176 0132
.org 0xfd178
	lsls r2, r2, #2	@ 000fd178 9200
.org 0xfd17a
	ldr r3, [pc, #128]	@ 000fd17a 204b
.org 0xfd17c
	adds r0, r0, r3	@ 000fd17c c018
.org 0xfd17e
	adds r2, r2, r0	@ 000fd17e 1218
.org 0xfd180
	movs r0, #31	@ 000fd180 1f20
.org 0xfd182
	ands r0, r1	@ 000fd182 0840
.org 0xfd184
	movs r1, #1	@ 000fd184 0121
.org 0xfd186
	lsls r1, r0	@ 000fd186 8140
.org 0xfd188
	ldr r0, [r2, #0]	@ 000fd188 1068
.org 0xfd18a
	bics r0, r1	@ 000fd18a 8843
.org 0xfd18c
	str r0, [r2, #0]	@ 000fd18c 1060
.org 0xfd18e
	movs r4, #0	@ 000fd18e 0024
.org 0xfd190
	adds r7, r5, #0	@ 000fd190 2f1c
.org 0xfd192
	adds r7, #84	@ 000fd192 5437
.org 0xfd194
	adds r6, r5, #0	@ 000fd194 2e1c
.org 0xfd196
	adds r6, #181	@ 000fd196 b536
.org 0xfd198
	lsls r1, r4, #3	@ 000fd198 e100
.org 0xfd19a
	subs r1, r1, r4	@ 000fd19a 091b
.org 0xfd19c
	lsls r1, r1, #2	@ 000fd19c 8900
.org 0xfd19e
	ldr r0, [pc, #96]	@ 000fd19e 1848
.org 0xfd1a0
	adds r1, r1, r0	@ 000fd1a0 0918
.org 0xfd1a2
	ldrb r0, [r6, #0]	@ 000fd1a2 3078
.org 0xfd1a4
	mvns r3, r0	@ 000fd1a4 c343
.org 0xfd1a6
	lsls r3, r3, #4	@ 000fd1a6 1b01
.org 0xfd1a8
	orrs r3, r0	@ 000fd1a8 0343
.org 0xfd1aa
	lsls r3, r3, #24	@ 000fd1aa 1b06
.org 0xfd1ac
	lsrs r3, r3, #24	@ 000fd1ac 1b0e
.org 0xfd1ae
	adds r0, r7, #0	@ 000fd1ae 381c
.org 0xfd1b0
	movs r2, #0	@ 000fd1b0 0022
.org 0xfd1b2
	bl 0xe3db4	@ 000fd1b2 e6f7fffd
.org 0xfd1b6
	adds r0, r4, #1	@ 000fd1b6 601c
.org 0xfd1b8
	lsls r0, r0, #24	@ 000fd1b8 0006
.org 0xfd1ba
	lsrs r4, r0, #24	@ 000fd1ba 040e
.org 0xfd1bc
	cmp r4, #4	@ 000fd1bc 042c
.org 0xfd1be
	bls.n 0xfd198	@ 000fd1be ebd9
.org 0xfd1c0
	ldr r3, [pc, #52]	@ 000fd1c0 0d4b
.org 0xfd1c2
	ldr r4, [pc, #64]	@ 000fd1c2 104c
.org 0xfd1c4
	adds r0, r3, r4	@ 000fd1c4 1819
.org 0xfd1c6
	ldrb r1, [r0, #0]	@ 000fd1c6 0178
.org 0xfd1c8
	movs r0, #15	@ 000fd1c8 0f20
.org 0xfd1ca
	ands r0, r1	@ 000fd1ca 0840
.org 0xfd1cc
	cmp r0, #0	@ 000fd1cc 0028
.org 0xfd1ce
	beq.n 0xfd208	@ 000fd1ce 1bd0
.org 0xfd1d0
	ldrb r1, [r5, #17]	@ 000fd1d0 697c
.org 0xfd1d2
	lsrs r2, r1, #5	@ 000fd1d2 4a09
.org 0xfd1d4
	adds r2, #4	@ 000fd1d4 0432
.org 0xfd1d6
	lsls r2, r2, #2	@ 000fd1d6 9200
.org 0xfd1d8
	ldr r4, [pc, #32]	@ 000fd1d8 084c
.org 0xfd1da
	adds r0, r3, r4	@ 000fd1da 1819
.org 0xfd1dc
	adds r2, r2, r0	@ 000fd1dc 1218
.org 0xfd1de
	movs r0, #31	@ 000fd1de 1f20
.org 0xfd1e0
	ands r0, r1	@ 000fd1e0 0840
.org 0xfd1e2
	movs r1, #1	@ 000fd1e2 0121
.org 0xfd1e4
	lsls r1, r0	@ 000fd1e4 8140
.org 0xfd1e6
	ldr r0, [r2, #0]	@ 000fd1e6 1068
.org 0xfd1e8
	orrs r0, r1	@ 000fd1e8 0843
.org 0xfd1ea
	str r0, [r2, #0]	@ 000fd1ea 1060
.org 0xfd1ec
	movs r1, #0	@ 000fd1ec 0021
.org 0xfd1ee
	movs r0, #4	@ 000fd1ee 0420
.org 0xfd1f0
	strb r0, [r5, #16]	@ 000fd1f0 2874
.org 0xfd1f2
	strb r1, [r5, #13]	@ 000fd1f2 6973
.org 0xfd1f4
	strb r1, [r5, #14]	@ 000fd1f4 a973
.org 0xfd1f6
	b.n 0xfd328	@ 000fd1f6 97e0
.org 0xfd1f8
	.byte 0xb0,0x0a,0x00,0x02	@ 000fd1f8 data
.org 0xfd1fc
	.byte 0x28,0xd0,0x02,0x00	@ 000fd1fc data
.org 0xfd200
	.byte 0x04,0xb0,0x86,0x08	@ 000fd200 data
.org 0xfd204
	.byte 0x10,0xc0,0x02,0x00	@ 000fd204 data
.org 0xfd208
	movs r0, #80	@ 000fd208 5020
.org 0xfd20a
	strb r0, [r5, #18]	@ 000fd20a a874
.org 0xfd20c
	ldrb r0, [r5, #13]	@ 000fd20c 687b
.org 0xfd20e
	adds r0, #1	@ 000fd20e 0130
.org 0xfd210
	strb r0, [r5, #13]	@ 000fd210 6873
.org 0xfd212
	ldrb r0, [r5, #18]	@ 000fd212 a87c
.org 0xfd214
	adds r4, r0, #0	@ 000fd214 041c
.org 0xfd216
	cmp r4, #0	@ 000fd216 002c
.org 0xfd218
	beq.n 0xfd248	@ 000fd218 16d0
.org 0xfd21a
	ldr r0, [pc, #24]	@ 000fd21a 0648
.org 0xfd21c
	ldr r0, [r0, #0]	@ 000fd21c 0068
.org 0xfd21e
	ldr r3, [r5, #84]	@ 000fd21e 6b6d
.org 0xfd220
	ldr r1, [r0, #84]	@ 000fd220 416d
.org 0xfd222
	subs r2, r3, r1	@ 000fd222 5a1a
.org 0xfd224
	cmp r2, #0	@ 000fd224 002a
.org 0xfd226
	blt.n 0xfd238	@ 000fd226 07db
.org 0xfd228
	movs r0, #128	@ 000fd228 8020
.org 0xfd22a
	lsls r0, r0, #6	@ 000fd22a 8001
.org 0xfd22c
	cmp r2, r0	@ 000fd22c 8242
.org 0xfd22e
	bgt.n 0xfd242	@ 000fd22e 08dc
.org 0xfd230
	b.n 0xfd328	@ 000fd230 7ae0
.org 0xfd232
	.byte 0x00	@ 000fd232 data
.org 0xfd233
	.byte 0x00	@ 000fd233 data
.org 0xfd234
	.byte 0xf0,0xdb,0x02,0x02	@ 000fd234 data
.org 0xfd238
	subs r1, r1, r3	@ 000fd238 c91a
.org 0xfd23a
	movs r0, #128	@ 000fd23a 8020
.org 0xfd23c
	lsls r0, r0, #6	@ 000fd23c 8001
.org 0xfd23e
	cmp r1, r0	@ 000fd23e 8142
.org 0xfd240
	ble.n 0xfd328	@ 000fd240 72dd
.org 0xfd242
	subs r0, r4, #1	@ 000fd242 601e
.org 0xfd244
	strb r0, [r5, #18]	@ 000fd244 a874
.org 0xfd246
	b.n 0xfd328	@ 000fd246 6fe0
.org 0xfd248
	ldrb r0, [r5, #14]	@ 000fd248 a87b
.org 0xfd24a
	cmp r0, #0	@ 000fd24a 0028
.org 0xfd24c
	bne.n 0xfd30e	@ 000fd24c 5fd1
.org 0xfd24e
	adds r7, r5, #0	@ 000fd24e 2f1c
.org 0xfd250
	adds r7, #182	@ 000fd250 b637
.org 0xfd252
	ldr r6, [pc, #60]	@ 000fd252 0f4e
.org 0xfd254
	strh r6, [r7, #0]	@ 000fd254 3e80
.org 0xfd256
	adds r0, r5, #0	@ 000fd256 281c
.org 0xfd258
	adds r1, r6, #0	@ 000fd258 311c
.org 0xfd25a
	bl 0x1cf00	@ 000fd25a 1ff751fe
.org 0xfd25e
	ldr r0, [pc, #52]	@ 000fd25e 0d48
.org 0xfd260
	ldrb r0, [r0, #7]	@ 000fd260 c079
.org 0xfd262
	adds r1, r5, #0	@ 000fd262 291c
.org 0xfd264
	adds r1, #180	@ 000fd264 b431
.org 0xfd266
	strb r0, [r1, #0]	@ 000fd266 0870
.org 0xfd268
	lsls r0, r0, #24	@ 000fd268 0006
.org 0xfd26a
	adds r4, r1, #0	@ 000fd26a 0c1c
.org 0xfd26c
	cmp r0, #0	@ 000fd26c 0028
.org 0xfd26e
	blt.n 0xfd29c	@ 000fd26e 15db
.org 0xfd270
	ldrh r0, [r7, #0]	@ 000fd270 3888
.org 0xfd272
	cmp r0, r6	@ 000fd272 b042
.org 0xfd274
	beq.n 0xfd29c	@ 000fd274 12d0
.org 0xfd276
	adds r0, r5, #0	@ 000fd276 281c
.org 0xfd278
	adds r0, #116	@ 000fd278 7430
.org 0xfd27a
	movs r2, #0	@ 000fd27a 0022
.org 0xfd27c
	ldrsb r2, [r4, r2]	@ 000fd27c a256
.org 0xfd27e
	lsls r1, r2, #1	@ 000fd27e 5100
.org 0xfd280
	adds r1, r1, r2	@ 000fd280 8918
.org 0xfd282
	lsls r1, r1, #3	@ 000fd282 c900
.org 0xfd284
	ldr r2, [pc, #16]	@ 000fd284 044a
.org 0xfd286
	adds r1, r1, r2	@ 000fd286 8918
.org 0xfd288
	bl 0x5784	@ 000fd288 08f77cfa
.org 0xfd28c
	b.n 0xfd2a6	@ 000fd28c 0be0
.org 0xfd28e
	.byte 0x00	@ 000fd28e data
.org 0xfd28f
	.byte 0x00	@ 000fd28f data
.org 0xfd290
	.byte 0x07,0x9f,0x00,0x00	@ 000fd290 data
.org 0xfd294
	.byte 0xcc,0xaf,0x86,0x08	@ 000fd294 data
.org 0xfd298
	.byte 0x3c,0xaf,0x86,0x08	@ 000fd298 data
.org 0xfd29c
	adds r0, r5, #0	@ 000fd29c 281c
.org 0xfd29e
	adds r0, #116	@ 000fd29e 7430
.org 0xfd2a0
	ldr r1, [pc, #32]	@ 000fd2a0 0849
.org 0xfd2a2
	bl 0x5784	@ 000fd2a2 08f76ffa
.org 0xfd2a6
	movs r0, #0	@ 000fd2a6 0020
.org 0xfd2a8
	ldrsb r0, [r4, r0]	@ 000fd2a8 2056
.org 0xfd2aa
	cmp r0, #0	@ 000fd2aa 0028
.org 0xfd2ac
	ble.n 0xfd2cc	@ 000fd2ac 0edd
.org 0xfd2ae
	ldrb r1, [r5, #11]	@ 000fd2ae e97a
.org 0xfd2b0
	movs r0, #8	@ 000fd2b0 0820
.org 0xfd2b2
	orrs r0, r1	@ 000fd2b2 0843
.org 0xfd2b4
	strb r0, [r5, #11]	@ 000fd2b4 e872
.org 0xfd2b6
	movs r0, #0	@ 000fd2b6 0020
.org 0xfd2b8
	ldrsb r0, [r4, r0]	@ 000fd2b8 2056
.org 0xfd2ba
	lsls r0, r0, #3	@ 000fd2ba c000
.org 0xfd2bc
	ldr r1, [pc, #8]	@ 000fd2bc 0249
.org 0xfd2be
	adds r0, r0, r1	@ 000fd2be 4018
.org 0xfd2c0
	b.n 0xfd2ee	@ 000fd2c0 15e0
.org 0xfd2c2
	.byte 0x00	@ 000fd2c2 data
.org 0xfd2c3
	.byte 0x00	@ 000fd2c3 data
.org 0xfd2c4
	.byte 0xb4,0xaf,0x86,0x08	@ 000fd2c4 data
.org 0xfd2c8
	.byte 0xdc,0xaf,0x86,0x08	@ 000fd2c8 data
.org 0xfd2cc
	cmp r0, #0	@ 000fd2cc 0028
.org 0xfd2ce
	bne.n 0xfd300	@ 000fd2ce 17d1
.org 0xfd2d0
	ldrb r0, [r5, #30]	@ 000fd2d0 a87f
