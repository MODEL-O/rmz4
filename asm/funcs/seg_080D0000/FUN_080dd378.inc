@ FUN_080dd378  entry 0x080dd378  size 100
.thumb
.org 0xdd378
FUN_080dd378:
	push {r4, lr}	@ 000dd378 10b5
.org 0xdd37a
	adds r4, r0, #0	@ 000dd37a 041c
.org 0xdd37c
	ldr r1, [r4, #40]	@ 000dd37c a16a
.org 0xdd37e
	ldrb r0, [r4, #13]	@ 000dd37e 607b
.org 0xdd380
	cmp r0, #0	@ 000dd380 0028
.org 0xdd382
	bne.n 0xdd3ae	@ 000dd382 14d1
.org 0xdd384
	ldrb r0, [r1, #13]	@ 000dd384 487b
.org 0xdd386
	cmp r0, #17	@ 000dd386 1128
.org 0xdd388
	beq.n 0xdd3ae	@ 000dd388 11d0
.org 0xdd38a
	ldrb r0, [r4, #17]	@ 000dd38a 607c
.org 0xdd38c
	cmp r0, #0	@ 000dd38c 0028
.org 0xdd38e
	beq.n 0xdd3a0	@ 000dd38e 07d0
.org 0xdd390
	ldr r1, [pc, #8]	@ 000dd390 0249
.org 0xdd392
	adds r0, r4, #0	@ 000dd392 201c
.org 0xdd394
	bl 0x1cf00	@ 000dd394 3ff7b4fd
.org 0xdd398
	b.n 0xdd3a8	@ 000dd398 06e0
.org 0xdd39a
	.byte 0x00	@ 000dd39a data
.org 0xdd39b
	.byte 0x00	@ 000dd39b data
.org 0xdd39c
	.byte 0x05,0x3d,0x00,0x00	@ 000dd39c data
.org 0xdd3a0
	ldr r1, [pc, #64]	@ 000dd3a0 1049
.org 0xdd3a2
	adds r0, r4, #0	@ 000dd3a2 201c
.org 0xdd3a4
	bl 0x1cf00	@ 000dd3a4 3ff7acfd
.org 0xdd3a8
	ldrb r0, [r4, #13]	@ 000dd3a8 607b
.org 0xdd3aa
	adds r0, #1	@ 000dd3aa 0130
.org 0xdd3ac
	strb r0, [r4, #13]	@ 000dd3ac 6073
.org 0xdd3ae
	adds r0, r4, #0	@ 000dd3ae 201c
.org 0xdd3b0
	bl 0x1cff0	@ 000dd3b0 3ff71efe
.org 0xdd3b4
	ldrb r0, [r4, #13]	@ 000dd3b4 607b
.org 0xdd3b6
	cmp r0, #1	@ 000dd3b6 0128
.org 0xdd3b8
	bne.n 0xdd3dc	@ 000dd3b8 10d1
.org 0xdd3ba
	adds r0, r4, #0	@ 000dd3ba 201c
.org 0xdd3bc
	adds r0, #115	@ 000dd3bc 7330
.org 0xdd3be
	ldrb r0, [r0, #0]	@ 000dd3be 0078
.org 0xdd3c0
	cmp r0, #3	@ 000dd3c0 0328
.org 0xdd3c2
	bne.n 0xdd3dc	@ 000dd3c2 0bd1
.org 0xdd3c4
	ldr r1, [pc, #32]	@ 000dd3c4 0849
.org 0xdd3c6
	ldrb r0, [r4, #9]	@ 000dd3c6 607a
.org 0xdd3c8
	lsls r0, r0, #2	@ 000dd3c8 8000
.org 0xdd3ca
	adds r0, r0, r1	@ 000dd3ca 4018
.org 0xdd3cc
	movs r1, #2	@ 000dd3cc 0221
.org 0xdd3ce
	str r1, [r4, #12]	@ 000dd3ce e160
.org 0xdd3d0
	ldr r0, [r0, #0]	@ 000dd3d0 0068
.org 0xdd3d2
	ldr r0, [r0, #8]	@ 000dd3d2 8068
.org 0xdd3d4
	str r0, [r4, #20]	@ 000dd3d4 6061
.org 0xdd3d6
	adds r0, r4, #0	@ 000dd3d6 201c
.org 0xdd3d8
	bl 0xdcdf0	@ 000dd3d8 fff70afd
