@ FUN_0803f484  entry 0x0803f484  size 146
.thumb
.org 0x3f484
FUN_0803f484:
	push {r4, r5, r6, r7, lr}	@ 0003f484 f0b5
.org 0x3f486
	sub sp, #8	@ 0003f486 82b0
.org 0x3f488
	adds r7, r0, #0	@ 0003f488 071c
.org 0x3f48a
	ldr r1, [pc, #64]	@ 0003f48a 1049
.org 0x3f48c
	ldrb r0, [r7, #9]	@ 0003f48c 787a
.org 0x3f48e
	lsls r0, r0, #2	@ 0003f48e 8000
.org 0x3f490
	adds r0, r0, r1	@ 0003f490 4018
.org 0x3f492
	movs r1, #1	@ 0003f492 0121
.org 0x3f494
	str r1, [r7, #12]	@ 0003f494 f960
.org 0x3f496
	ldr r0, [r0, #0]	@ 0003f496 0068
.org 0x3f498
	ldr r0, [r0, #4]	@ 0003f498 4068
.org 0x3f49a
	str r0, [r7, #20]	@ 0003f49a 7861
.org 0x3f49c
	adds r0, r7, #0	@ 0003f49c 381c
.org 0x3f49e
	bl 0x1cc9c	@ 0003f49e ddf7fdfb
.org 0x3f4a2
	adds r0, r7, #0	@ 0003f4a2 381c
.org 0x3f4a4
	bl 0x1ceec	@ 0003f4a4 ddf722fd
.org 0x3f4a8
	ldrb r1, [r7, #10]	@ 0003f4a8 b97a
.org 0x3f4aa
	movs r0, #1	@ 0003f4aa 0120
.org 0x3f4ac
	orrs r0, r1	@ 0003f4ac 0843
.org 0x3f4ae
	movs r1, #2	@ 0003f4ae 0221
.org 0x3f4b0
	orrs r0, r1	@ 0003f4b0 0843
.org 0x3f4b2
	strb r0, [r7, #10]	@ 0003f4b2 b872
.org 0x3f4b4
	ldr r1, [pc, #24]	@ 0003f4b4 0649
.org 0x3f4b6
	adds r0, r7, #0	@ 0003f4b6 381c
.org 0x3f4b8
	bl 0x1cf00	@ 0003f4b8 ddf722fd
.org 0x3f4bc
	ldrb r1, [r7, #10]	@ 0003f4bc b97a
.org 0x3f4be
	movs r0, #16	@ 0003f4be 1020
.org 0x3f4c0
	ands r0, r1	@ 0003f4c0 0840
.org 0x3f4c2
	cmp r0, #0	@ 0003f4c2 0028
.org 0x3f4c4
	beq.n 0x3f4d4	@ 0003f4c4 06d0
.org 0x3f4c6
	movs r0, #128	@ 0003f4c6 8020
.org 0x3f4c8
	lsls r0, r0, #3	@ 0003f4c8 c000
.org 0x3f4ca
	b.n 0x3f4d6	@ 0003f4ca 04e0
.org 0x3f4cc
	.byte 0xf8,0x39,0x85,0x08	@ 0003f4cc data
.org 0x3f4d0
	.byte 0x04,0x80,0x00,0x00	@ 0003f4d0 data
.org 0x3f4d4
	ldr r0, [pc, #72]	@ 0003f4d4 1248
.org 0x3f4d6
	str r0, [r7, #92]	@ 0003f4d6 f865
.org 0x3f4d8
	ldrb r1, [r7, #10]	@ 0003f4d8 b97a
.org 0x3f4da
	movs r0, #4	@ 0003f4da 0420
.org 0x3f4dc
	movs r6, #0	@ 0003f4dc 0026
.org 0x3f4de
	orrs r0, r1	@ 0003f4de 0843
.org 0x3f4e0
	strb r0, [r7, #10]	@ 0003f4e0 b872
.org 0x3f4e2
	adds r4, r7, #0	@ 0003f4e2 3c1c
.org 0x3f4e4
	adds r4, #116	@ 0003f4e4 7434
.org 0x3f4e6
	ldr r5, [pc, #60]	@ 0003f4e6 0f4d
.org 0x3f4e8
	adds r2, r7, #0	@ 0003f4e8 3a1c
.org 0x3f4ea
	adds r2, #84	@ 0003f4ea 5432
.org 0x3f4ec
	adds r0, r4, #0	@ 0003f4ec 201c
.org 0x3f4ee
	adds r1, r5, #0	@ 0003f4ee 291c
.org 0x3f4f0
	movs r3, #1	@ 0003f4f0 0123
.org 0x3f4f2
	bl 0x5760	@ 0003f4f2 c6f735f9
.org 0x3f4f6
	str r7, [r4, #44]	@ 0003f4f6 e762
.org 0x3f4f8
	str r6, [r4, #36]	@ 0003f4f8 6662
.org 0x3f4fa
	movs r3, #1	@ 0003f4fa 0123
.org 0x3f4fc
	negs r3, r3	@ 0003f4fc 5b42
.org 0x3f4fe
	str r3, [sp, #0]	@ 0003f4fe 0093
.org 0x3f500
	str r3, [sp, #4]	@ 0003f500 0193
.org 0x3f502
	adds r0, r4, #0	@ 0003f502 201c
.org 0x3f504
	adds r1, r5, #0	@ 0003f504 291c
.org 0x3f506
	movs r2, #5	@ 0003f506 0522
.org 0x3f508
	bl 0x5794	@ 0003f508 c6f744f9
.org 0x3f50c
	movs r0, #1	@ 0003f50c 0120
.org 0x3f50e
	strb r0, [r7, #18]	@ 0003f50e b874
.org 0x3f510
	adds r0, r7, #0	@ 0003f510 381c
.org 0x3f512
	bl 0x3f528	@ 0003f512 00f009f8
