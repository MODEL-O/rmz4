@ FUN_080bd36c  entry 0x080bd36c  size 116
.thumb
.org 0xbd36c
FUN_080bd36c:
	push {r4, r5, lr}	@ 000bd36c 30b5
.org 0xbd36e
	ldr r0, [pc, #64]	@ 000bd36e 1048
.org 0xbd370
	ldr r5, [r0, #0]	@ 000bd370 0568
.org 0xbd372
	ldr r2, [pc, #64]	@ 000bd372 104a
.org 0xbd374
	ldrh r0, [r2, #0]	@ 000bd374 1088
.org 0xbd376
	cmp r0, #1	@ 000bd376 0128
.org 0xbd378
	beq.n 0xbd3c4	@ 000bd378 24d0
.org 0xbd37a
	ldrh r1, [r2, #8]	@ 000bd37a 1189
.org 0xbd37c
	movs r3, #1	@ 000bd37c 0123
.org 0xbd37e
	adds r0, r3, #0	@ 000bd37e 181c
.org 0xbd380
	ands r0, r1	@ 000bd380 0840
.org 0xbd382
	cmp r0, #0	@ 000bd382 0028
.org 0xbd384
	beq.n 0xbd3aa	@ 000bd384 11d0
.org 0xbd386
	ldrb r1, [r2, #18]	@ 000bd386 917c
.org 0xbd388
	adds r0, r3, #0	@ 000bd388 181c
.org 0xbd38a
	ands r0, r1	@ 000bd38a 0840
.org 0xbd38c
	cmp r0, #0	@ 000bd38c 0028
.org 0xbd38e
	bne.n 0xbd3aa	@ 000bd38e 0cd1
.org 0xbd390
	ldrh r1, [r2, #20]	@ 000bd390 918a
.org 0xbd392
	adds r0, r3, #0	@ 000bd392 181c
.org 0xbd394
	ands r0, r1	@ 000bd394 0840
.org 0xbd396
	cmp r0, #0	@ 000bd396 0028
.org 0xbd398
	bne.n 0xbd3aa	@ 000bd398 07d1
.org 0xbd39a
	ldr r0, [pc, #28]	@ 000bd39a 0748
.org 0xbd39c
	ldrb r0, [r0, #0]	@ 000bd39c 0078
.org 0xbd39e
	cmp r0, #0	@ 000bd39e 0028
.org 0xbd3a0
	bne.n 0xbd3aa	@ 000bd3a0 03d1
.org 0xbd3a2
	ldr r0, [pc, #24]	@ 000bd3a2 0648
.org 0xbd3a4
	ldrb r0, [r0, #0]	@ 000bd3a4 0078
.org 0xbd3a6
	cmp r0, #0	@ 000bd3a6 0028
.org 0xbd3a8
	beq.n 0xbd3c4	@ 000bd3a8 0cd0
.org 0xbd3aa
	ldr r1, [pc, #20]	@ 000bd3aa 0549
.org 0xbd3ac
	movs r0, #1	@ 000bd3ac 0120
.org 0xbd3ae
	b.n 0xbd3c8	@ 000bd3ae 0be0
.org 0xbd3b0
	.byte 0x94,0xed,0x02,0x02	@ 000bd3b0 data
.org 0xbd3b4
	.byte 0x10,0xe9,0x02,0x02	@ 000bd3b4 data
.org 0xbd3b8
	.byte 0xf8,0xdb,0x02,0x02	@ 000bd3b8 data
.org 0xbd3bc
	.byte 0x08,0xdc,0x02,0x02	@ 000bd3bc data
.org 0xbd3c0
	.byte 0x98,0xed,0x02,0x02	@ 000bd3c0 data
.org 0xbd3c4
	ldr r1, [pc, #44]	@ 000bd3c4 0b49
.org 0xbd3c6
	movs r0, #0	@ 000bd3c6 0020
.org 0xbd3c8
	strb r0, [r1, #0]	@ 000bd3c8 0870
.org 0xbd3ca
	adds r0, r5, #0	@ 000bd3ca 281c
.org 0xbd3cc
	bl 0x54b4	@ 000bd3cc 48f772f8
.org 0xbd3d0
	ldr r0, [r5, #12]	@ 000bd3d0 e868
.org 0xbd3d2
	ldr r0, [r0, #4]	@ 000bd3d2 4068
.org 0xbd3d4
	str r0, [r5, #12]	@ 000bd3d4 e860
.org 0xbd3d6
	adds r4, r5, #0	@ 000bd3d6 2c1c
.org 0xbd3d8
	adds r4, #20	@ 000bd3d8 1434
.org 0xbd3da
	cmp r0, r4	@ 000bd3da a042
.org 0xbd3dc
	beq.n 0xbd3ee	@ 000bd3dc 07d0
.org 0xbd3de
	ldr r1, [r0, #20]	@ 000bd3de 4169
