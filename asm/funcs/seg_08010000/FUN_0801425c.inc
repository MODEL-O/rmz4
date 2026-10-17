@ FUN_0801425c  entry 0x0801425c  size 102
.thumb
.org 0x1425c
FUN_0801425c:
	push {lr}	@ 0001425c 00b5
.org 0x1425e
	adds r3, r0, #0	@ 0001425e 031c
.org 0x14260
	ldrb r0, [r3, #14]	@ 00014260 987b
.org 0x14262
	cmp r0, #0	@ 00014262 0028
.org 0x14264
	bne.n 0x142c8	@ 00014264 30d1
.org 0x14266
	ldr r0, [r3, #92]	@ 00014266 d86d
.org 0x14268
	lsls r0, r0, #16	@ 00014268 0004
.org 0x1426a
	lsrs r1, r0, #16	@ 0001426a 010c
.org 0x1426c
	cmp r1, #56	@ 0001426c 3829
.org 0x1426e
	bne.n 0x1429c	@ 0001426e 15d1
.org 0x14270
	lsrs r2, r0, #20	@ 00014270 020d
.org 0x14272
	lsls r2, r2, #1	@ 00014272 5200
.org 0x14274
	ldr r0, [pc, #28]	@ 00014274 0748
.org 0x14276
	adds r2, r2, r0	@ 00014276 1218
.org 0x14278
	ldrh r1, [r2, #0]	@ 00014278 1188
.org 0x1427a
	ldr r0, [pc, #28]	@ 0001427a 0748
.org 0x1427c
	ands r0, r1	@ 0001427c 0840
.org 0x1427e
	movs r1, #3	@ 0001427e 0321
.org 0x14280
	orrs r0, r1	@ 00014280 0843
.org 0x14282
	strh r0, [r2, #0]	@ 00014282 1080
.org 0x14284
	movs r0, #180	@ 00014284 b420
.org 0x14286
	lsls r0, r0, #2	@ 00014286 8000
.org 0x14288
	str r0, [r3, #76]	@ 00014288 d864
.org 0x1428a
	movs r0, #192	@ 0001428a c020
.org 0x1428c
	str r0, [r3, #68]	@ 0001428c 5864
.org 0x1428e
	adds r0, #64	@ 0001428e 4030
.org 0x14290
	b.n 0x142c0	@ 00014290 16e0
.org 0x14292
	.byte 0x00	@ 00014292 data
.org 0x14293
	.byte 0x00	@ 00014293 data
.org 0x14294
	.byte 0x04,0x0a,0x00,0x02	@ 00014294 data
.org 0x14298
	.byte 0xfc,0xff,0x00,0x00	@ 00014298 data
.org 0x1429c
	cmp r1, #36	@ 0001429c 2429
.org 0x1429e
	bne.n 0x142c2	@ 0001429e 10d1
.org 0x142a0
	lsrs r2, r0, #20	@ 000142a0 020d
.org 0x142a2
	lsls r2, r2, #1	@ 000142a2 5200
.org 0x142a4
	ldr r0, [pc, #36]	@ 000142a4 0948
.org 0x142a6
	adds r2, r2, r0	@ 000142a6 1218
.org 0x142a8
	ldrh r1, [r2, #0]	@ 000142a8 1188
.org 0x142aa
	ldr r0, [pc, #36]	@ 000142aa 0948
.org 0x142ac
	ands r0, r1	@ 000142ac 0840
.org 0x142ae
	movs r1, #2	@ 000142ae 0221
.org 0x142b0
	orrs r0, r1	@ 000142b0 0843
.org 0x142b2
	strh r0, [r2, #0]	@ 000142b2 1080
.org 0x142b4
	movs r0, #240	@ 000142b4 f020
.org 0x142b6
	lsls r0, r0, #1	@ 000142b6 4000
.org 0x142b8
	str r0, [r3, #76]	@ 000142b8 d864
.org 0x142ba
	movs r0, #224	@ 000142ba e020
.org 0x142bc
	str r0, [r3, #68]	@ 000142bc 5864
.org 0x142be
	adds r0, #32	@ 000142be 2030
.org 0x142c0
	str r0, [r3, #72]	@ 000142c0 9864
