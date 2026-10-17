@ FUN_080183b4  entry 0x080183b4  size 148
.thumb
.org 0x183b4
FUN_080183b4:
	push {r4, r5, lr}	@ 000183b4 30b5
.org 0x183b6
	ldr r1, [pc, #144]	@ 000183b6 2449
.org 0x183b8
	ldr r2, [pc, #144]	@ 000183b8 244a
.org 0x183ba
	adds r0, r1, r2	@ 000183ba 8818
.org 0x183bc
	movs r4, #0	@ 000183bc 0024
.org 0x183be
	strb r4, [r0, #0]	@ 000183be 0470
.org 0x183c0
	ldr r5, [pc, #140]	@ 000183c0 234d
.org 0x183c2
	adds r0, r1, r5	@ 000183c2 4819
.org 0x183c4
	movs r3, #0	@ 000183c4 0023
.org 0x183c6
	movs r2, #246	@ 000183c6 f622
.org 0x183c8
	lsls r2, r2, #8	@ 000183c8 1202
.org 0x183ca
	strh r2, [r0, #0]	@ 000183ca 0280
.org 0x183cc
	adds r5, #2	@ 000183cc 0235
.org 0x183ce
	adds r0, r1, r5	@ 000183ce 4819
.org 0x183d0
	strh r2, [r0, #0]	@ 000183d0 0280
.org 0x183d2
	ldr r2, [pc, #128]	@ 000183d2 204a
.org 0x183d4
	adds r0, r1, r2	@ 000183d4 8818
.org 0x183d6
	strb r3, [r0, #0]	@ 000183d6 0370
.org 0x183d8
	adds r5, #2	@ 000183d8 0235
.org 0x183da
	adds r2, r1, r5	@ 000183da 4a19
.org 0x183dc
	ldr r0, [pc, #120]	@ 000183dc 1e48
.org 0x183de
	str r0, [r2, #0]	@ 000183de 1060
.org 0x183e0
	ldr r0, [pc, #120]	@ 000183e0 1e48
.org 0x183e2
	adds r2, r1, r0	@ 000183e2 0a18
.org 0x183e4
	movs r0, #192	@ 000183e4 c020
.org 0x183e6
	lsls r0, r0, #10	@ 000183e6 8002
.org 0x183e8
	str r0, [r2, #0]	@ 000183e8 1060
.org 0x183ea
	ldr r2, [pc, #116]	@ 000183ea 1d4a
.org 0x183ec
	adds r0, r1, r2	@ 000183ec 8818
.org 0x183ee
	strh r4, [r0, #0]	@ 000183ee 0480
.org 0x183f0
	adds r5, #10	@ 000183f0 0a35
.org 0x183f2
	adds r0, r1, r5	@ 000183f2 4819
.org 0x183f4
	strh r4, [r0, #0]	@ 000183f4 0480
.org 0x183f6
	subs r2, #14	@ 000183f6 0e3a
.org 0x183f8
	adds r0, r1, r2	@ 000183f8 8818
.org 0x183fa
	strb r3, [r0, #0]	@ 000183fa 0370
.org 0x183fc
	adds r5, #2	@ 000183fc 0235
.org 0x183fe
	adds r0, r1, r5	@ 000183fe 4819
.org 0x18400
	strh r4, [r0, #0]	@ 00018400 0480
.org 0x18402
	adds r2, #20	@ 00018402 1432
.org 0x18404
	adds r0, r1, r2	@ 00018404 8818
.org 0x18406
	strb r3, [r0, #0]	@ 00018406 0370
.org 0x18408
	adds r5, #3	@ 00018408 0335
.org 0x1840a
	adds r0, r1, r5	@ 0001840a 4819
.org 0x1840c
	strb r3, [r0, #0]	@ 0001840c 0370
.org 0x1840e
	ldr r0, [pc, #84]	@ 0001840e 1548
.org 0x18410
	adds r2, r1, r0	@ 00018410 0a18
.org 0x18412
	movs r0, #16	@ 00018412 1020
.org 0x18414
	strb r0, [r2, #0]	@ 00018414 1070
.org 0x18416
	ldr r2, [pc, #80]	@ 00018416 144a
.org 0x18418
	adds r0, r1, r2	@ 00018418 8818
.org 0x1841a
	strb r3, [r0, #0]	@ 0001841a 0370
.org 0x1841c
	adds r5, #2	@ 0001841c 0235
.org 0x1841e
	adds r0, r1, r5	@ 0001841e 4819
.org 0x18420
	strb r3, [r0, #0]	@ 00018420 0370
.org 0x18422
	ldr r0, [pc, #72]	@ 00018422 1248
.org 0x18424
	adds r4, r1, r0	@ 00018424 0c18
.org 0x18426
	strb r3, [r4, #0]	@ 00018426 2370
.org 0x18428
	ldr r0, [pc, #68]	@ 00018428 1148
.org 0x1842a
	ldrb r1, [r0, #4]	@ 0001842a 0179
.org 0x1842c
	movs r0, #32	@ 0001842c 2020
.org 0x1842e
	ands r0, r1	@ 0001842e 0840
.org 0x18430
	cmp r0, #0	@ 00018430 0028
.org 0x18432
	beq.n 0x18442	@ 00018432 06d0
.org 0x18434
	movs r0, #16	@ 00018434 1020
.org 0x18436
	movs r1, #4	@ 00018436 0421
.org 0x18438
	movs r2, #47	@ 00018438 2f22
.org 0x1843a
	bl 0x74c0	@ 0001843a eff741f8
.org 0x1843e
	movs r0, #2	@ 0001843e 0220
.org 0x18440
	strb r0, [r4, #0]	@ 00018440 2070
.org 0x18442
	pop {r4, r5}	@ 00018442 30bc
.org 0x18444
	pop {r0}	@ 00018444 01bc
.org 0x18446
	bx r0	@ 00018446 0047
