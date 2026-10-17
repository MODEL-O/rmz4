@ FUN_080a41c4  entry 0x080a41c4  size 294
.thumb
.org 0xa41c4
FUN_080a41c4:
	push {r4, r5, r6, r7, lr}	@ 000a41c4 f0b5
.org 0xa41c6
	mov r7, r8	@ 000a41c6 4746
.org 0xa41c8
	push {r7}	@ 000a41c8 80b4
.org 0xa41ca
	sub sp, #8	@ 000a41ca 82b0
.org 0xa41cc
	adds r7, r0, #0	@ 000a41cc 071c
.org 0xa41ce
	ldrb r0, [r7, #15]	@ 000a41ce f87b
.org 0xa41d0
	cmp r0, #0	@ 000a41d0 0028
.org 0xa41d2
	bne.n 0xa41e2	@ 000a41d2 06d1
.org 0xa41d4
	ldr r1, [pc, #52]	@ 000a41d4 0d49
.org 0xa41d6
	adds r0, r7, #0	@ 000a41d6 381c
.org 0xa41d8
	bl 0x1cf00	@ 000a41d8 78f792fe
.org 0xa41dc
	ldrb r0, [r7, #15]	@ 000a41dc f87b
.org 0xa41de
	adds r0, #1	@ 000a41de 0130
.org 0xa41e0
	strb r0, [r7, #15]	@ 000a41e0 f873
.org 0xa41e2
	adds r0, r7, #0	@ 000a41e2 381c
.org 0xa41e4
	bl 0x1cff0	@ 000a41e4 78f704ff
.org 0xa41e8
	ldr r0, [r7, #84]	@ 000a41e8 786d
.org 0xa41ea
	str r0, [sp, #0]	@ 000a41ea 0090
.org 0xa41ec
	ldr r0, [r7, #88]	@ 000a41ec b86d
.org 0xa41ee
	str r0, [sp, #4]	@ 000a41ee 0190
.org 0xa41f0
	ldr r5, [pc, #28]	@ 000a41f0 074d
.org 0xa41f2
	adds r2, r7, #0	@ 000a41f2 3a1c
.org 0xa41f4
	adds r2, #188	@ 000a41f4 bc32
.org 0xa41f6
	ldrb r4, [r2, #0]	@ 000a41f6 1478
.org 0xa41f8
	ldrb r1, [r7, #10]	@ 000a41f8 b97a
.org 0xa41fa
	movs r3, #16	@ 000a41fa 1023
.org 0xa41fc
	adds r0, r3, #0	@ 000a41fc 181c
.org 0xa41fe
	ands r0, r1	@ 000a41fe 0840
.org 0xa4200
	adds r6, r2, #0	@ 000a4200 161c
.org 0xa4202
	cmp r0, #0	@ 000a4202 0028
.org 0xa4204
	beq.n 0xa4214	@ 000a4204 06d0
.org 0xa4206
	orrs r3, r4	@ 000a4206 2343
.org 0xa4208
	b.n 0xa4216	@ 000a4208 05e0
.org 0xa420a
	.byte 0x00	@ 000a420a data
.org 0xa420b
	.byte 0x00	@ 000a420b data
.org 0xa420c
	.byte 0x16,0x87,0x00,0x00	@ 000a420c data
.org 0xa4210
	.byte 0x6c,0x1f,0x86,0x08	@ 000a4210 data
.org 0xa4214
	adds r3, r4, #0	@ 000a4214 231c
.org 0xa4216
	mov r0, sp	@ 000a4216 6846
.org 0xa4218
	adds r1, r5, #0	@ 000a4218 291c
.org 0xa421a
	movs r2, #0	@ 000a421a 0022
.org 0xa421c
	bl 0xd4c8c	@ 000a421c 30f036fd
.org 0xa4220
	mov r5, sp	@ 000a4220 6d46
.org 0xa4222
	ldr r2, [pc, #52]	@ 000a4222 0d4a
.org 0xa4224
	ldr r1, [r2, #0]	@ 000a4224 1168
.org 0xa4226
	ldr r0, [pc, #52]	@ 000a4226 0d48
.org 0xa4228
	muls r0, r1	@ 000a4228 4843
.org 0xa422a
	ldr r1, [pc, #52]	@ 000a422a 0d49
.org 0xa422c
	adds r0, r0, r1	@ 000a422c 4018
.org 0xa422e
	lsls r0, r0, #1	@ 000a422e 4000
.org 0xa4230
	lsrs r1, r0, #1	@ 000a4230 4108
.org 0xa4232
	str r1, [r2, #0]	@ 000a4232 1160
.org 0xa4234
	lsrs r0, r0, #17	@ 000a4234 400c
.org 0xa4236
	movs r1, #1	@ 000a4236 0121
.org 0xa4238
	ands r0, r1	@ 000a4238 0840
.org 0xa423a
	lsls r1, r0, #3	@ 000a423a c100
.org 0xa423c
	subs r1, r1, r0	@ 000a423c 091a
.org 0xa423e
	lsls r1, r1, #2	@ 000a423e 8900
.org 0xa4240
	ldr r0, [pc, #32]	@ 000a4240 0848
.org 0xa4242
	adds r4, r1, r0	@ 000a4242 0c18
.org 0xa4244
	ldrb r2, [r6, #0]	@ 000a4244 3278
.org 0xa4246
	ldrb r1, [r7, #10]	@ 000a4246 b97a
.org 0xa4248
	movs r3, #16	@ 000a4248 1023
.org 0xa424a
	adds r0, r3, #0	@ 000a424a 181c
.org 0xa424c
	ands r0, r1	@ 000a424c 0840
.org 0xa424e
	cmp r0, #0	@ 000a424e 0028
.org 0xa4250
	beq.n 0xa4268	@ 000a4250 0ad0
.org 0xa4252
	orrs r3, r2	@ 000a4252 1343
.org 0xa4254
	b.n 0xa426a	@ 000a4254 09e0
.org 0xa4256
	.byte 0x00	@ 000a4256 data
.org 0xa4257
	.byte 0x00	@ 000a4257 data
.org 0xa4258
	.byte 0x38,0xdc,0x02,0x02	@ 000a4258 data
.org 0xa425c
	.byte 0xfd,0x43,0x03,0x00	@ 000a425c data
.org 0xa4260
	.byte 0xc3,0x9e,0x26,0x00	@ 000a4260 data
.org 0xa4264
	.byte 0x88,0x1f,0x86,0x08	@ 000a4264 data
.org 0xa4268
	adds r3, r2, #0	@ 000a4268 131c
.org 0xa426a
	adds r0, r5, #0	@ 000a426a 281c
.org 0xa426c
	adds r1, r4, #0	@ 000a426c 211c
.org 0xa426e
	movs r2, #0	@ 000a426e 0022
.org 0xa4270
	bl 0xd4c8c	@ 000a4270 30f00cfd
.org 0xa4274
	ldr r3, [pc, #144]	@ 000a4274 244b
.org 0xa4276
	mov r8, r3	@ 000a4276 9846
.org 0xa4278
	ldr r0, [r3, #0]	@ 000a4278 1868
.org 0xa427a
	ldr r5, [pc, #144]	@ 000a427a 244d
.org 0xa427c
	adds r1, r0, #0	@ 000a427c 011c
.org 0xa427e
	muls r1, r5	@ 000a427e 6943
.org 0xa4280
	ldr r3, [pc, #140]	@ 000a4280 234b
.org 0xa4282
	adds r1, r1, r3	@ 000a4282 c918
.org 0xa4284
	lsls r1, r1, #1	@ 000a4284 4900
.org 0xa4286
	lsrs r6, r1, #1	@ 000a4286 4e08
.org 0xa4288
	lsrs r1, r1, #17	@ 000a4288 490c
.org 0xa428a
	movs r4, #15	@ 000a428a 0f24
.org 0xa428c
	ands r1, r4	@ 000a428c 2140
.org 0xa428e
	movs r2, #8	@ 000a428e 0822
.org 0xa4290
	subs r1, r2, r1	@ 000a4290 511a
.org 0xa4292
	lsls r1, r1, #8	@ 000a4292 0902
.org 0xa4294
	ldr r0, [sp, #0]	@ 000a4294 0098
.org 0xa4296
	adds r0, r0, r1	@ 000a4296 4018
.org 0xa4298
	str r0, [sp, #0]	@ 000a4298 0090
.org 0xa429a
	adds r0, r6, #0	@ 000a429a 301c
.org 0xa429c
	muls r0, r5	@ 000a429c 6843
.org 0xa429e
	adds r0, r0, r3	@ 000a429e c018
.org 0xa42a0
	lsls r0, r0, #1	@ 000a42a0 4000
.org 0xa42a2
	lsrs r1, r0, #1	@ 000a42a2 4108
.org 0xa42a4
	mov r3, r8	@ 000a42a4 4346
.org 0xa42a6
	str r1, [r3, #0]	@ 000a42a6 1960
.org 0xa42a8
	lsrs r0, r0, #17	@ 000a42a8 400c
.org 0xa42aa
	ands r0, r4	@ 000a42aa 2040
.org 0xa42ac
	subs r2, r2, r0	@ 000a42ac 121a
.org 0xa42ae
	lsls r2, r2, #8	@ 000a42ae 1202
.org 0xa42b0
	ldr r0, [sp, #4]	@ 000a42b0 0198
.org 0xa42b2
	adds r0, r0, r2	@ 000a42b2 8018
.org 0xa42b4
	str r0, [sp, #4]	@ 000a42b4 0190
.org 0xa42b6
	movs r0, #1	@ 000a42b6 0120
.org 0xa42b8
	mov r1, sp	@ 000a42b8 6946
.org 0xa42ba
	bl 0xd0c88	@ 000a42ba 2cf0e5fc
.org 0xa42be
	movs r0, #42	@ 000a42be 2a20
.org 0xa42c0
	bl 0x2b10	@ 000a42c0 5ef726fc
.org 0xa42c4
	adds r4, r7, #0	@ 000a42c4 3c1c
.org 0xa42c6
	adds r4, #84	@ 000a42c6 5434
.org 0xa42c8
	movs r0, #0	@ 000a42c8 0020
.org 0xa42ca
	movs r1, #15	@ 000a42ca 0f21
.org 0xa42cc
	adds r2, r4, #0	@ 000a42cc 221c
.org 0xa42ce
	bl 0x2ab88	@ 000a42ce 86f75bfc
.org 0xa42d2
	ldr r2, [pc, #64]	@ 000a42d2 104a
.org 0xa42d4
	ldrh r1, [r2, #12]	@ 000a42d4 9189
.org 0xa42d6
	ldr r0, [pc, #64]	@ 000a42d6 1048
.org 0xa42d8
	cmp r1, r0	@ 000a42d8 8142
.org 0xa42da
	bhi.n 0xa42e0	@ 000a42da 01d8
.org 0xa42dc
	adds r0, r1, #1	@ 000a42dc 481c
.org 0xa42de
	strh r0, [r2, #12]	@ 000a42de 9081
.org 0xa42e0
	adds r0, r7, #0	@ 000a42e0 381c
.org 0xa42e2
	adds r1, r4, #0	@ 000a42e2 211c
.org 0xa42e4
	bl 0x2abe0	@ 000a42e4 86f77cfc
.org 0xa42e8
	ldr r1, [pc, #48]	@ 000a42e8 0c49
