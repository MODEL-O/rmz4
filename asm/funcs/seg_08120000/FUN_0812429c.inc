@ FUN_0812429c  entry 0x0812429c  size 254
.thumb
.org 0x12429c
FUN_0812429c:
	push {r4, r5, r6, lr}	@ 0012429c 70b5
.org 0x12429e
	sub sp, #8	@ 0012429e 82b0
.org 0x1242a0
	adds r5, r0, #0	@ 001242a0 051c
.org 0x1242a2
	ldr r0, [pc, #68]	@ 001242a2 1148
.org 0x1242a4
	adds r1, r5, r0	@ 001242a4 2918
.org 0x1242a6
	ldrb r0, [r1, #0]	@ 001242a6 0878
.org 0x1242a8
	subs r0, #1	@ 001242a8 0138
.org 0x1242aa
	strb r0, [r1, #0]	@ 001242aa 0870
.org 0x1242ac
	lsls r0, r0, #24	@ 001242ac 0006
.org 0x1242ae
	lsrs r0, r0, #24	@ 001242ae 000e
.org 0x1242b0
	cmp r0, #255	@ 001242b0 ff28
.org 0x1242b2
	bne.n 0x124316	@ 001242b2 30d1
.org 0x1242b4
	movs r0, #128	@ 001242b4 8020
.org 0x1242b6
	lsls r0, r0, #10	@ 001242b6 8002
.org 0x1242b8
	str r0, [sp, #0]	@ 001242b8 0090
.org 0x1242ba
	movs r0, #240	@ 001242ba f020
.org 0x1242bc
	lsls r0, r0, #8	@ 001242bc 0002
.org 0x1242be
	str r0, [sp, #4]	@ 001242be 0190
.org 0x1242c0
	ldr r1, [pc, #40]	@ 001242c0 0a49
.org 0x1242c2
	adds r4, r5, r1	@ 001242c2 6c18
.org 0x1242c4
	ldrb r0, [r4, #0]	@ 001242c4 2078
.org 0x1242c6
	movs r1, #10	@ 001242c6 0a21
.org 0x1242c8
	bl 0x129198	@ 001242c8 04f066ff
.org 0x1242cc
	lsls r0, r0, #24	@ 001242cc 0006
.org 0x1242ce
	lsrs r0, r0, #24	@ 001242ce 000e
.org 0x1242d0
	adds r6, r4, #0	@ 001242d0 261c
.org 0x1242d2
	cmp r0, #9	@ 001242d2 0928
.org 0x1242d4
	bne.n 0x1242f4	@ 001242d4 0ed1
.org 0x1242d6
	ldr r2, [pc, #24]	@ 001242d6 064a
.org 0x1242d8
	adds r4, r5, r2	@ 001242d8 ac18
.org 0x1242da
	ldrb r2, [r4, #0]	@ 001242da 2278
.org 0x1242dc
	mov r0, sp	@ 001242dc 6846
.org 0x1242de
	movs r1, #1	@ 001242de 0121
.org 0x1242e0
	bl 0xbcd74	@ 001242e0 98f748fd
.org 0x1242e4
	b.n 0x124302	@ 001242e4 0de0
.org 0x1242e6
	.byte 0x00	@ 001242e6 data
.org 0x1242e7
	.byte 0x00	@ 001242e7 data
.org 0x1242e8
	.byte 0xf5,0x0d,0x00,0x00	@ 001242e8 data
.org 0x1242ec
	.byte 0xf6,0x0d,0x00,0x00	@ 001242ec data
.org 0x1242f0
	.byte 0xf7,0x0d,0x00,0x00	@ 001242f0 data
.org 0x1242f4
	ldr r0, [pc, #176]	@ 001242f4 2c48
.org 0x1242f6
	adds r4, r5, r0	@ 001242f6 2c18
.org 0x1242f8
	ldrb r2, [r4, #0]	@ 001242f8 2278
.org 0x1242fa
	mov r0, sp	@ 001242fa 6846
.org 0x1242fc
	movs r1, #0	@ 001242fc 0021
.org 0x1242fe
	bl 0xbcd74	@ 001242fe 98f739fd
.org 0x124302
	ldr r2, [pc, #168]	@ 00124302 2a4a
.org 0x124304
	adds r1, r5, r2	@ 00124304 a918
.org 0x124306
	movs r0, #64	@ 00124306 4020
.org 0x124308
	strb r0, [r1, #0]	@ 00124308 0870
.org 0x12430a
	ldrb r0, [r6, #0]	@ 0012430a 3078
.org 0x12430c
	adds r0, #1	@ 0012430c 0130
.org 0x12430e
	strb r0, [r6, #0]	@ 0012430e 3070
.org 0x124310
	ldrb r0, [r4, #0]	@ 00124310 2078
.org 0x124312
	adds r0, #1	@ 00124312 0130
.org 0x124314
	strb r0, [r4, #0]	@ 00124314 2070
.org 0x124316
	ldr r0, [pc, #152]	@ 00124316 2648
.org 0x124318
	adds r6, r5, r0	@ 00124318 2e18
.org 0x12431a
	ldr r1, [r6, #20]	@ 0012431a 7169
.org 0x12431c
	ldr r0, [pc, #148]	@ 0012431c 2548
.org 0x12431e
	cmp r1, r0	@ 0012431e 8142
.org 0x124320
	bgt.n 0x124352	@ 00124320 17dc
.org 0x124322
	ldr r1, [pc, #148]	@ 00124322 2549
.org 0x124324
	adds r4, r5, r1	@ 00124324 6c18
.org 0x124326
	ldrb r0, [r4, #0]	@ 00124326 2078
.org 0x124328
	cmp r0, #0	@ 00124328 0028
.org 0x12432a
	bne.n 0x124338	@ 0012432a 05d1
.org 0x12432c
	movs r0, #119	@ 0012432c 7720
.org 0x12432e
	bl 0x2b10	@ 0012432e def6effb
.org 0x124332
	ldrb r0, [r4, #0]	@ 00124332 2078
.org 0x124334
	adds r0, #1	@ 00124334 0130
.org 0x124336
	strb r0, [r4, #0]	@ 00124336 2070
.org 0x124338
	ldr r2, [pc, #128]	@ 00124338 204a
.org 0x12433a
	ldr r0, [pc, #132]	@ 0012433a 2148
.org 0x12433c
	adds r1, r5, r0	@ 0012433c 2918
.org 0x12433e
	ldrb r0, [r1, #0]	@ 0012433e 0878
.org 0x124340
	lsls r0, r0, #1	@ 00124340 4000
.org 0x124342
	adds r0, r0, r2	@ 00124342 8018
.org 0x124344
	movs r2, #0	@ 00124344 0022
.org 0x124346
	ldrsh r0, [r0, r2]	@ 00124346 805e
.org 0x124348
	lsls r0, r0, #4	@ 00124348 0001
.org 0x12434a
	str r0, [r6, #36]	@ 0012434a 7062
.org 0x12434c
	ldrb r0, [r1, #0]	@ 0012434c 0878
.org 0x12434e
	adds r0, #1	@ 0012434e 0130
.org 0x124350
	strb r0, [r1, #0]	@ 00124350 0870
.org 0x124352
	ldr r0, [pc, #92]	@ 00124352 1748
.org 0x124354
	adds r4, r5, r0	@ 00124354 2c18
.org 0x124356
	ldr r0, [r4, #0]	@ 00124356 2068
.org 0x124358
	adds r0, #140	@ 00124358 8c30
.org 0x12435a
	ldr r0, [r0, #0]	@ 0012435a 0068
.org 0x12435c
	movs r1, #1	@ 0012435c 0121
.org 0x12435e
	ands r0, r1	@ 0012435e 0840
.org 0x124360
	cmp r0, #0	@ 00124360 0028
.org 0x124362
	beq.n 0x12436a	@ 00124362 02d0
.org 0x124364
	ldr r0, [r4, #20]	@ 00124364 6069
.org 0x124366
	subs r0, #180	@ 00124366 b438
.org 0x124368
	str r0, [r4, #20]	@ 00124368 6061
.org 0x12436a
	ldr r0, [r4, #20]	@ 0012436a 6069
.org 0x12436c
	subs r0, #1	@ 0012436c 0138
.org 0x12436e
	str r0, [r4, #20]	@ 0012436e 6061
.org 0x124370
	cmp r0, #0	@ 00124370 0028
.org 0x124372
	bge.n 0x124378	@ 00124372 01da
.org 0x124374
	movs r0, #0	@ 00124374 0020
.org 0x124376
	str r0, [r4, #20]	@ 00124376 6061
.org 0x124378
	ldr r5, [r4, #20]	@ 00124378 6569
.org 0x12437a
	cmp r5, #0	@ 0012437a 002d
.org 0x12437c
	bne.n 0x12439e	@ 0012437c 0fd1
.org 0x12437e
	movs r0, #119	@ 0012437e 7720
.org 0x124380
	bl 0x2b5c	@ 00124380 def6ecfb
.org 0x124384
	ldr r0, [pc, #60]	@ 00124384 0f48
.org 0x124386
	bl 0x2b10	@ 00124386 def6c3fb
.org 0x12438a
	ldr r0, [r4, #0]	@ 0012438a 2068
.org 0x12438c
	movs r1, #149	@ 0012438c 9521
.org 0x12438e
	lsls r1, r1, #2	@ 0012438e 8900
.org 0x124390
	adds r0, r0, r1	@ 00124390 4018
.org 0x124392
	movs r1, #2	@ 00124392 0221
.org 0x124394
	strb r1, [r0, #0]	@ 00124394 0170
.org 0x124396
	ldrb r0, [r4, #24]	@ 00124396 207e
.org 0x124398
	adds r0, #1	@ 00124398 0130
