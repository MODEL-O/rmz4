@ FUN_080ac124  entry 0x080ac124  size 360
.thumb
.org 0xac124
FUN_080ac124:
	push {r4, r5, r6, r7, lr}	@ 000ac124 f0b5
.org 0xac126
	mov r7, sl	@ 000ac126 5746
.org 0xac128
	mov r6, r9	@ 000ac128 4e46
.org 0xac12a
	mov r5, r8	@ 000ac12a 4546
.org 0xac12c
	push {r5, r6, r7}	@ 000ac12c e0b4
.org 0xac12e
	sub sp, #156	@ 000ac12e a7b0
.org 0xac130
	ldr r4, [r0, #8]	@ 000ac130 8468
.org 0xac132
	ldr r3, [pc, #344]	@ 000ac132 564b
.org 0xac134
	movs r0, #160	@ 000ac134 a020
.org 0xac136
	strh r0, [r3, #10]	@ 000ac136 5881
.org 0xac138
	ldr r0, [r4, #84]	@ 000ac138 606d
.org 0xac13a
	movs r1, #240	@ 000ac13a f021
.org 0xac13c
	lsls r1, r1, #7	@ 000ac13c c901
.org 0xac13e
	adds r0, r0, r1	@ 000ac13e 4018
.org 0xac140
	ldr r2, [pc, #332]	@ 000ac140 534a
.org 0xac142
	ldr r1, [r2, #56]	@ 000ac142 916b
.org 0xac144
	subs r0, r0, r1	@ 000ac144 401a
.org 0xac146
	str r0, [sp, #128]	@ 000ac146 2090
.org 0xac148
	ldr r0, [r4, #88]	@ 000ac148 a06d
.org 0xac14a
	movs r7, #160	@ 000ac14a a027
.org 0xac14c
	lsls r7, r7, #7	@ 000ac14c ff01
.org 0xac14e
	adds r0, r0, r7	@ 000ac14e c019
.org 0xac150
	ldr r1, [r2, #60]	@ 000ac150 d16b
.org 0xac152
	subs r0, r0, r1	@ 000ac152 401a
.org 0xac154
	str r0, [sp, #132]	@ 000ac154 2190
.org 0xac156
	adds r0, r4, #0	@ 000ac156 201c
.org 0xac158
	adds r0, #189	@ 000ac158 bd30
.org 0xac15a
	ldrb r0, [r0, #0]	@ 000ac15a 0078
.org 0xac15c
	mov r9, r0	@ 000ac15c 8146
.org 0xac15e
	adds r0, r4, #0	@ 000ac15e 201c
.org 0xac160
	adds r0, #192	@ 000ac160 c030
.org 0xac162
	ldrh r0, [r0, #0]	@ 000ac162 0088
.org 0xac164
	str r0, [sp, #136]	@ 000ac164 2290
.org 0xac166
	adds r0, r4, #0	@ 000ac166 201c
.org 0xac168
	adds r0, #194	@ 000ac168 c230
.org 0xac16a
	ldrh r0, [r0, #0]	@ 000ac16a 0088
.org 0xac16c
	str r0, [sp, #140]	@ 000ac16c 2390
.org 0xac16e
	ldrh r1, [r3, #0]	@ 000ac16e 1988
.org 0xac170
	movs r2, #128	@ 000ac170 8022
.org 0xac172
	lsls r2, r2, #7	@ 000ac172 d201
.org 0xac174
	adds r0, r2, #0	@ 000ac174 101c
.org 0xac176
	orrs r0, r1	@ 000ac176 0843
.org 0xac178
	strh r0, [r3, #0]	@ 000ac178 1880
.org 0xac17a
	movs r0, #253	@ 000ac17a fd20
.org 0xac17c
	strb r0, [r3, #13]	@ 000ac17c 5873
.org 0xac17e
	movs r0, #255	@ 000ac17e ff20
.org 0xac180
	strb r0, [r3, #14]	@ 000ac180 9873
.org 0xac182
	movs r7, #0	@ 000ac182 0027
.org 0xac184
	mov r8, r7	@ 000ac184 b846
.org 0xac186
	ldr r0, [pc, #268]	@ 000ac186 4348
.org 0xac188
	mov sl, r0	@ 000ac188 8246
.org 0xac18a
	mov r1, sp	@ 000ac18a 6946
.org 0xac18c
	adds r1, #4	@ 000ac18c 0431
.org 0xac18e
	str r1, [sp, #148]	@ 000ac18e 2591
.org 0xac190
	mov r0, r9	@ 000ac190 4846
.org 0xac192
	adds r0, #64	@ 000ac192 4030
.org 0xac194
	lsls r0, r0, #24	@ 000ac194 0006
.org 0xac196
	lsrs r0, r0, #23	@ 000ac196 c00d
.org 0xac198
	str r0, [sp, #144]	@ 000ac198 2490
.org 0xac19a
	mov r3, sp	@ 000ac19a 6b46
.org 0xac19c
	ldr r2, [pc, #248]	@ 000ac19c 3e4a
.org 0xac19e
	mov ip, r2	@ 000ac19e 9446
.org 0xac1a0
	mov r7, r8	@ 000ac1a0 4746
.org 0xac1a2
	lsls r7, r7, #3	@ 000ac1a2 ff00
.org 0xac1a4
	str r7, [sp, #152]	@ 000ac1a4 2697
.org 0xac1a6
	mov r1, ip	@ 000ac1a6 6146
.org 0xac1a8
	ldr r0, [r1, #0]	@ 000ac1a8 0868
.org 0xac1aa
	ldr r2, [sp, #136]	@ 000ac1aa 229a
.org 0xac1ac
	muls r0, r2	@ 000ac1ac 5043
.org 0xac1ae
	cmp r0, #0	@ 000ac1ae 0028
.org 0xac1b0
	bge.n 0xac1b4	@ 000ac1b0 00da
.org 0xac1b2
	adds r0, #255	@ 000ac1b2 ff30
.org 0xac1b4
	asrs r6, r0, #8	@ 000ac1b4 0612
.org 0xac1b6
	mov r7, ip	@ 000ac1b6 6746
.org 0xac1b8
	ldr r0, [r7, #4]	@ 000ac1b8 7868
.org 0xac1ba
	ldr r1, [sp, #140]	@ 000ac1ba 2399
.org 0xac1bc
	muls r0, r1	@ 000ac1bc 4843
.org 0xac1be
	cmp r0, #0	@ 000ac1be 0028
.org 0xac1c0
	bge.n 0xac1c4	@ 000ac1c0 00da
.org 0xac1c2
	adds r0, #255	@ 000ac1c2 ff30
.org 0xac1c4
	asrs r5, r0, #8	@ 000ac1c4 0512
.org 0xac1c6
	ldr r0, [sp, #144]	@ 000ac1c6 2498
.org 0xac1c8
	add r0, sl	@ 000ac1c8 5044
.org 0xac1ca
	movs r2, #0	@ 000ac1ca 0022
.org 0xac1cc
	ldrsh r4, [r0, r2]	@ 000ac1cc 845e
.org 0xac1ce
	adds r0, r6, #0	@ 000ac1ce 301c
.org 0xac1d0
	muls r0, r4	@ 000ac1d0 6043
.org 0xac1d2
	cmp r0, #0	@ 000ac1d2 0028
.org 0xac1d4
	bge.n 0xac1d8	@ 000ac1d4 00da
.org 0xac1d6
	adds r0, #255	@ 000ac1d6 ff30
.org 0xac1d8
	asrs r1, r0, #8	@ 000ac1d8 0112
.org 0xac1da
	mov r7, r9	@ 000ac1da 4f46
.org 0xac1dc
	lsls r0, r7, #1	@ 000ac1dc 7800
.org 0xac1de
	add r0, sl	@ 000ac1de 5044
.org 0xac1e0
	movs r7, #0	@ 000ac1e0 0027
.org 0xac1e2
	ldrsh r2, [r0, r7]	@ 000ac1e2 c25f
.org 0xac1e4
	adds r0, r5, #0	@ 000ac1e4 281c
.org 0xac1e6
	muls r0, r2	@ 000ac1e6 5043
.org 0xac1e8
	cmp r0, #0	@ 000ac1e8 0028
.org 0xac1ea
	bge.n 0xac1ee	@ 000ac1ea 00da
.org 0xac1ec
	adds r0, #255	@ 000ac1ec ff30
.org 0xac1ee
	asrs r0, r0, #8	@ 000ac1ee 0012
.org 0xac1f0
	subs r0, r1, r0	@ 000ac1f0 081a
.org 0xac1f2
	ldr r1, [sp, #128]	@ 000ac1f2 2099
.org 0xac1f4
	adds r0, r1, r0	@ 000ac1f4 0818
.org 0xac1f6
	str r0, [r3, #0]	@ 000ac1f6 1860
.org 0xac1f8
	ldr r7, [sp, #148]	@ 000ac1f8 259f
.org 0xac1fa
	ldr r0, [sp, #152]	@ 000ac1fa 2698
.org 0xac1fc
	adds r1, r7, r0	@ 000ac1fc 3918
.org 0xac1fe
	adds r0, r6, #0	@ 000ac1fe 301c
.org 0xac200
	muls r0, r2	@ 000ac200 5043
.org 0xac202
	cmp r0, #0	@ 000ac202 0028
.org 0xac204
	bge.n 0xac208	@ 000ac204 00da
.org 0xac206
	adds r0, #255	@ 000ac206 ff30
.org 0xac208
	asrs r2, r0, #8	@ 000ac208 0212
.org 0xac20a
	adds r0, r5, #0	@ 000ac20a 281c
.org 0xac20c
	muls r0, r4	@ 000ac20c 6043
.org 0xac20e
	cmp r0, #0	@ 000ac20e 0028
.org 0xac210
	bge.n 0xac214	@ 000ac210 00da
.org 0xac212
	adds r0, #255	@ 000ac212 ff30
.org 0xac214
	asrs r0, r0, #8	@ 000ac214 0012
.org 0xac216
	adds r0, r2, r0	@ 000ac216 1018
.org 0xac218
	ldr r2, [sp, #132]	@ 000ac218 219a
.org 0xac21a
	adds r0, r2, r0	@ 000ac21a 1018
.org 0xac21c
	str r0, [r1, #0]	@ 000ac21c 0860
.org 0xac21e
	ldr r0, [r3, #0]	@ 000ac21e 1868
.org 0xac220
	asrs r0, r0, #8	@ 000ac220 0012
.org 0xac222
	str r0, [r3, #0]	@ 000ac222 1860
.org 0xac224
	ldr r0, [r1, #0]	@ 000ac224 0868
.org 0xac226
	asrs r0, r0, #8	@ 000ac226 0012
.org 0xac228
	str r0, [r1, #0]	@ 000ac228 0860
.org 0xac22a
	adds r3, #8	@ 000ac22a 0833
.org 0xac22c
	movs r7, #8	@ 000ac22c 0827
.org 0xac22e
	add ip, r7	@ 000ac22e bc44
.org 0xac230
	movs r0, #1	@ 000ac230 0120
.org 0xac232
	add r8, r0	@ 000ac232 8044
.org 0xac234
	mov r1, r8	@ 000ac234 4146
.org 0xac236
	cmp r1, #6	@ 000ac236 0629
.org 0xac238
	blt.n 0xac1a0	@ 000ac238 b2db
.org 0xac23a
	movs r5, #160	@ 000ac23a a025
.org 0xac23c
	lsls r5, r5, #1	@ 000ac23c 6d00
.org 0xac23e
	adds r0, r5, #0	@ 000ac23e 281c
.org 0xac240
	bl 0xa70	@ 000ac240 54f716fc
.org 0xac244
	adds r4, r0, #0	@ 000ac244 041c
.org 0xac246
	cmp r4, #0	@ 000ac246 002c
.org 0xac248
	beq.n 0xac27c	@ 000ac248 18d0
.org 0xac24a
	movs r0, #0	@ 000ac24a 0020
.org 0xac24c
	adds r1, r4, #0	@ 000ac24c 211c
.org 0xac24e
	adds r2, r5, #0	@ 000ac24e 2a1c
.org 0xac250
	bl 0xab4	@ 000ac250 54f730fc
.org 0xac254
	adds r0, r4, #0	@ 000ac254 201c
.org 0xac256
	mov r1, sp	@ 000ac256 6946
.org 0xac258
	movs r2, #6	@ 000ac258 0622
.org 0xac25a
	movs r3, #0	@ 000ac25a 0023
.org 0xac25c
	bl 0xac340	@ 000ac25c 00f070f8
.org 0xac260
	ldr r2, [pc, #56]	@ 000ac260 0e4a
.org 0xac262
	movs r7, #186	@ 000ac262 ba27
.org 0xac264
	lsls r7, r7, #1	@ 000ac264 7f00
.org 0xac266
	adds r0, r2, r7	@ 000ac266 d019
.org 0xac268
	str r4, [r0, #0]	@ 000ac268 0460
.org 0xac26a
	movs r0, #188	@ 000ac26a bc20
.org 0xac26c
	lsls r0, r0, #1	@ 000ac26c 4000
.org 0xac26e
	adds r1, r2, r0	@ 000ac26e 1118
.org 0xac270
	ldr r0, [pc, #44]	@ 000ac270 0b48
.org 0xac272
	str r0, [r1, #0]	@ 000ac272 0860
.org 0xac274
	adds r7, #8	@ 000ac274 0837
.org 0xac276
	adds r1, r2, r7	@ 000ac276 d119
.org 0xac278
	ldr r0, [pc, #40]	@ 000ac278 0a48
.org 0xac27a
	str r0, [r1, #0]	@ 000ac27a 0860
.org 0xac27c
	add sp, #156	@ 000ac27c 27b0
.org 0xac27e
	pop {r3, r4, r5}	@ 000ac27e 38bc
.org 0xac280
	mov r8, r3	@ 000ac280 9846
.org 0xac282
	mov r9, r4	@ 000ac282 a146
.org 0xac284
	mov sl, r5	@ 000ac284 aa46
.org 0xac286
	pop {r4, r5, r6, r7}	@ 000ac286 f0bc
.org 0xac288
	pop {r0}	@ 000ac288 01bc
.org 0xac28a
	bx r0	@ 000ac28a 0047
