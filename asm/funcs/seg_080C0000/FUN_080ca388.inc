@ FUN_080ca388  entry 0x080ca388  size 128
.thumb
.org 0xca388
FUN_080ca388:
	push {r4, lr}	@ 000ca388 10b5
.org 0xca38a
	adds r4, r0, #0	@ 000ca38a 041c
.org 0xca38c
	ldrb r0, [r4, #14]	@ 000ca38c a07b
.org 0xca38e
	cmp r0, #0	@ 000ca38e 0028
.org 0xca390
	bne.n 0xca3a0	@ 000ca390 06d1
.org 0xca392
	ldr r1, [pc, #116]	@ 000ca392 1d49
.org 0xca394
	adds r0, r4, #0	@ 000ca394 201c
.org 0xca396
	bl 0x1cf00	@ 000ca396 52f7b3fd
.org 0xca39a
	ldrb r0, [r4, #14]	@ 000ca39a a07b
.org 0xca39c
	adds r0, #1	@ 000ca39c 0130
.org 0xca39e
	strb r0, [r4, #14]	@ 000ca39e a073
.org 0xca3a0
	ldrb r0, [r4, #30]	@ 000ca3a0 a07f
.org 0xca3a2
	lsls r0, r0, #8	@ 000ca3a2 0002
.org 0xca3a4
	adds r1, r4, #0	@ 000ca3a4 211c
.org 0xca3a6
	adds r1, #112	@ 000ca3a6 7031
.org 0xca3a8
	ldrb r1, [r1, #0]	@ 000ca3a8 0978
.org 0xca3aa
	orrs r0, r1	@ 000ca3aa 0843
.org 0xca3ac
	ldr r1, [pc, #88]	@ 000ca3ac 1649
.org 0xca3ae
	cmp r0, r1	@ 000ca3ae 8842
.org 0xca3b0
	bne.n 0xca3c4	@ 000ca3b0 08d1
.org 0xca3b2
	adds r0, r4, #0	@ 000ca3b2 201c
.org 0xca3b4
	adds r0, #181	@ 000ca3b4 b530
.org 0xca3b6
	ldrb r0, [r0, #0]	@ 000ca3b6 0078
.org 0xca3b8
	cmp r0, #0	@ 000ca3b8 0028
.org 0xca3ba
	bne.n 0xca3c4	@ 000ca3ba 03d1
.org 0xca3bc
	adds r1, #1	@ 000ca3bc 0131
.org 0xca3be
	adds r0, r4, #0	@ 000ca3be 201c
.org 0xca3c0
	bl 0x1cf00	@ 000ca3c0 52f79efd
.org 0xca3c4
	adds r0, r4, #0	@ 000ca3c4 201c
.org 0xca3c6
	adds r0, #115	@ 000ca3c6 7330
.org 0xca3c8
	ldrb r3, [r0, #0]	@ 000ca3c8 0378
.org 0xca3ca
	cmp r3, #3	@ 000ca3ca 032b
.org 0xca3cc
	bne.n 0xca402	@ 000ca3cc 19d1
.org 0xca3ce
	ldrb r1, [r4, #10]	@ 000ca3ce a17a
.org 0xca3d0
	movs r0, #254	@ 000ca3d0 fe20
.org 0xca3d2
	ands r0, r1	@ 000ca3d2 0840
.org 0xca3d4
	movs r2, #0	@ 000ca3d4 0022
.org 0xca3d6
	movs r1, #253	@ 000ca3d6 fd21
.org 0xca3d8
	ands r0, r1	@ 000ca3d8 0840
.org 0xca3da
	strb r0, [r4, #10]	@ 000ca3da a072
.org 0xca3dc
	adds r0, r4, #0	@ 000ca3dc 201c
.org 0xca3de
	adds r0, #140	@ 000ca3de 8c30
.org 0xca3e0
	str r2, [r0, #0]	@ 000ca3e0 0260
.org 0xca3e2
	adds r0, #4	@ 000ca3e2 0430
.org 0xca3e4
	str r2, [r0, #0]	@ 000ca3e4 0260
.org 0xca3e6
	adds r0, #4	@ 000ca3e6 0430
.org 0xca3e8
	strb r2, [r0, #0]	@ 000ca3e8 0270
.org 0xca3ea
	ldrb r1, [r4, #10]	@ 000ca3ea a17a
.org 0xca3ec
	movs r0, #251	@ 000ca3ec fb20
.org 0xca3ee
	ands r0, r1	@ 000ca3ee 0840
.org 0xca3f0
	strb r0, [r4, #10]	@ 000ca3f0 a072
.org 0xca3f2
	ldr r1, [pc, #24]	@ 000ca3f2 0649
.org 0xca3f4
	ldrb r0, [r4, #9]	@ 000ca3f4 607a
.org 0xca3f6
	lsls r0, r0, #2	@ 000ca3f6 8000
.org 0xca3f8
	adds r0, r0, r1	@ 000ca3f8 4018
.org 0xca3fa
	str r3, [r4, #12]	@ 000ca3fa e360
.org 0xca3fc
	ldr r0, [r0, #0]	@ 000ca3fc 0068
.org 0xca3fe
	ldr r0, [r0, #12]	@ 000ca3fe c068
.org 0xca400
	str r0, [r4, #20]	@ 000ca400 6061
.org 0xca402
	pop {r4}	@ 000ca402 10bc
.org 0xca404
	pop {r0}	@ 000ca404 01bc
.org 0xca406
	bx r0	@ 000ca406 0047
