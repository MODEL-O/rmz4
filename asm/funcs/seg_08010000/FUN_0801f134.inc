@ FUN_0801f134  entry 0x0801f134  size 202
.thumb
.org 0x1f134
FUN_0801f134:
	push {r4, r5, r6, lr}	@ 0001f134 70b5
.org 0x1f136
	lsls r0, r0, #24	@ 0001f136 0006
.org 0x1f138
	lsrs r5, r0, #24	@ 0001f138 050e
.org 0x1f13a
	ldr r2, [pc, #68]	@ 0001f13a 114a
.org 0x1f13c
	movs r3, #0	@ 0001f13c 0023
.org 0x1f13e
	strh r5, [r2, #0]	@ 0001f13e 1580
.org 0x1f140
	strb r1, [r2, #2]	@ 0001f140 9170
.org 0x1f142
	movs r0, #255	@ 0001f142 ff20
.org 0x1f144
	strb r0, [r2, #3]	@ 0001f144 d070
.org 0x1f146
	strh r3, [r2, #10]	@ 0001f146 5381
.org 0x1f148
	ldr r4, [pc, #56]	@ 0001f148 0e4c
.org 0x1f14a
	adds r0, r4, #0	@ 0001f14a 201c
.org 0x1f14c
	bl 0x38354	@ 0001f14c 19f002f9
.org 0x1f150
	adds r1, r4, #0	@ 0001f150 211c
.org 0x1f152
	subs r1, #72	@ 0001f152 4839
.org 0x1f154
	adds r0, r5, #0	@ 0001f154 281c
.org 0x1f156
	bl 0x1e9ac	@ 0001f156 fff729fc
.org 0x1f15a
	ldr r0, [pc, #44]	@ 0001f15a 0b48
.org 0x1f15c
	ldr r2, [r0, #0]	@ 0001f15c 0268
.org 0x1f15e
	ldr r0, [pc, #44]	@ 0001f15e 0b48
.org 0x1f160
	adds r0, r5, r0	@ 0001f160 2818
.org 0x1f162
	movs r1, #1	@ 0001f162 0121
.org 0x1f164
	ldrb r0, [r0, #0]	@ 0001f164 0078
.org 0x1f166
	lsls r1, r0	@ 0001f166 8140
.org 0x1f168
	ldr r0, [r2, #16]	@ 0001f168 1069
.org 0x1f16a
	ands r0, r1	@ 0001f16a 0840
.org 0x1f16c
	cmp r0, #0	@ 0001f16c 0028
.org 0x1f16e
	bne.n 0x1f190	@ 0001f16e 0fd1
.org 0x1f170
	adds r2, r4, #0	@ 0001f170 221c
.org 0x1f172
	subs r2, #216	@ 0001f172 d83a
.org 0x1f174
	ldrb r1, [r2, #0]	@ 0001f174 1178
.org 0x1f176
	movs r0, #223	@ 0001f176 df20
.org 0x1f178
	ands r0, r1	@ 0001f178 0840
.org 0x1f17a
	strb r0, [r2, #0]	@ 0001f17a 1070
.org 0x1f17c
	b.n 0x1f19c	@ 0001f17c 0ee0
.org 0x1f17e
	.byte 0x00	@ 0001f17e data
.org 0x1f17f
	.byte 0x00	@ 0001f17f data
.org 0x1f180
	.byte 0x10,0xe9,0x02,0x02	@ 0001f180 data
.org 0x1f184
	.byte 0x58,0x59,0x03,0x02	@ 0001f184 data
.org 0x1f188
	.byte 0xe0,0xe8,0x02,0x02	@ 0001f188 data
.org 0x1f18c
	.byte 0xdc,0x2b,0x84,0x08	@ 0001f18c data
.org 0x1f190
	adds r0, r4, #0	@ 0001f190 201c
.org 0x1f192
	subs r0, #216	@ 0001f192 d838
.org 0x1f194
	ldrb r1, [r0, #0]	@ 0001f194 0178
.org 0x1f196
	movs r2, #32	@ 0001f196 2022
.org 0x1f198
	orrs r1, r2	@ 0001f198 1143
.org 0x1f19a
	strb r1, [r0, #0]	@ 0001f19a 0170
.org 0x1f19c
	ldr r6, [pc, #112]	@ 0001f19c 1c4e
.org 0x1f19e
	adds r0, r5, #0	@ 0001f19e 281c
.org 0x1f1a0
	adds r1, r6, #0	@ 0001f1a0 311c
.org 0x1f1a2
	bl 0x1e878	@ 0001f1a2 fff769fb
.org 0x1f1a6
	adds r4, r6, #0	@ 0001f1a6 341c
.org 0x1f1a8
	adds r4, #216	@ 0001f1a8 d834
.org 0x1f1aa
	movs r0, #142	@ 0001f1aa 8e20
.org 0x1f1ac
	lsls r0, r0, #1	@ 0001f1ac 4000
.org 0x1f1ae
	adds r5, r6, r0	@ 0001f1ae 3518
.org 0x1f1b0
	adds r0, r4, #0	@ 0001f1b0 201c
.org 0x1f1b2
	adds r1, r5, #0	@ 0001f1b2 291c
.org 0x1f1b4
	movs r2, #0	@ 0001f1b4 0022
.org 0x1f1b6
	bl 0x128be0	@ 0001f1b6 09f113fd
.org 0x1f1ba
	ldr r2, [pc, #88]	@ 0001f1ba 164a
.org 0x1f1bc
	adds r0, r4, #0	@ 0001f1bc 201c
.org 0x1f1be
	adds r1, r5, #0	@ 0001f1be 291c
.org 0x1f1c0
	bl 0x128be4	@ 0001f1c0 09f110fd
.org 0x1f1c4
	ldr r0, [pc, #80]	@ 0001f1c4 1448
.org 0x1f1c6
	ldr r0, [r0, #0]	@ 0001f1c6 0068
.org 0x1f1c8
	ldrb r0, [r0, #1]	@ 0001f1c8 4078
.org 0x1f1ca
	adds r1, r6, #0	@ 0001f1ca 311c
.org 0x1f1cc
	subs r1, #14	@ 0001f1cc 0e39
.org 0x1f1ce
	strh r0, [r1, #0]	@ 0001f1ce 0880
.org 0x1f1d0
	adds r0, r6, #0	@ 0001f1d0 301c
.org 0x1f1d2
	adds r0, #36	@ 0001f1d2 2430
.org 0x1f1d4
	bl 0x1e918	@ 0001f1d4 fff7a0fb
.org 0x1f1d8
	subs r4, #144	@ 0001f1d8 903c
.org 0x1f1da
	adds r5, r6, #0	@ 0001f1da 351c
.org 0x1f1dc
	adds r5, #100	@ 0001f1dc 6435
.org 0x1f1de
	adds r0, r4, #0	@ 0001f1de 201c
.org 0x1f1e0
	adds r1, r5, #0	@ 0001f1e0 291c
.org 0x1f1e2
	movs r2, #0	@ 0001f1e2 0022
.org 0x1f1e4
	bl 0x128be0	@ 0001f1e4 09f1fcfc
.org 0x1f1e8
	ldr r2, [pc, #48]	@ 0001f1e8 0c4a
.org 0x1f1ea
	adds r0, r4, #0	@ 0001f1ea 201c
.org 0x1f1ec
	adds r1, r5, #0	@ 0001f1ec 291c
.org 0x1f1ee
	bl 0x128be4	@ 0001f1ee 09f1f9fc
.org 0x1f1f2
	adds r4, #56	@ 0001f1f2 3834
.org 0x1f1f4
	adds r5, #36	@ 0001f1f4 2435
.org 0x1f1f6
	adds r0, r4, #0	@ 0001f1f6 201c
.org 0x1f1f8
	adds r1, r5, #0	@ 0001f1f8 291c
.org 0x1f1fa
	movs r2, #0	@ 0001f1fa 0022
.org 0x1f1fc
	bl 0x128be0	@ 0001f1fc 09f1f0fc
