@ FUN_080b5498  entry 0x080b5498  size 160
.thumb
.org 0xb5498
FUN_080b5498:
	push {r4, r5, lr}	@ 000b5498 30b5
.org 0xb549a
	adds r4, r0, #0	@ 000b549a 041c
.org 0xb549c
	ldr r0, [pc, #36]	@ 000b549c 0948
.org 0xb549e
	adds r1, r4, #0	@ 000b549e 211c
.org 0xb54a0
	adds r1, #84	@ 000b54a0 5431
.org 0xb54a2
	bl 0x1fb14	@ 000b54a2 6af737fb
.org 0xb54a6
	movs r1, #128	@ 000b54a6 8021
.org 0xb54a8
	lsls r1, r1, #6	@ 000b54a8 8901
.org 0xb54aa
	cmp r0, r1	@ 000b54aa 8842
.org 0xb54ac
	bhi.n 0xb54c8	@ 000b54ac 0cd8
.org 0xb54ae
	adds r2, r4, #0	@ 000b54ae 221c
.org 0xb54b0
	adds r2, #181	@ 000b54b0 b532
.org 0xb54b2
	ldrb r1, [r2, #0]	@ 000b54b2 1178
.org 0xb54b4
	cmp r1, #0	@ 000b54b4 0029
.org 0xb54b6
	bne.n 0xb54d0	@ 000b54b6 0bd1
.org 0xb54b8
	movs r0, #1	@ 000b54b8 0120
.org 0xb54ba
	strb r0, [r2, #0]	@ 000b54ba 1070
.org 0xb54bc
	strb r1, [r4, #13]	@ 000b54bc 6173
.org 0xb54be
	strb r1, [r4, #14]	@ 000b54be a173
.org 0xb54c0
	b.n 0xb554c	@ 000b54c0 44e0
.org 0xb54c2
	.byte 0x00	@ 000b54c2 data
.org 0xb54c3
	.byte 0x00	@ 000b54c3 data
.org 0xb54c4
	.byte 0xf8,0xe9,0x02,0x02	@ 000b54c4 data
.org 0xb54c8
	adds r1, r4, #0	@ 000b54c8 211c
.org 0xb54ca
	adds r1, #181	@ 000b54ca b531
.org 0xb54cc
	movs r0, #0	@ 000b54cc 0020
.org 0xb54ce
	strb r0, [r1, #0]	@ 000b54ce 0870
.org 0xb54d0
	ldr r0, [pc, #36]	@ 000b54d0 0948
.org 0xb54d2
	ldr r0, [r0, #0]	@ 000b54d2 0068
.org 0xb54d4
	ldr r2, [r0, #84]	@ 000b54d4 426d
.org 0xb54d6
	ldr r1, [r4, #84]	@ 000b54d6 616d
.org 0xb54d8
	subs r0, r2, r1	@ 000b54d8 501a
.org 0xb54da
	cmp r0, #0	@ 000b54da 0028
.org 0xb54dc
	bge.n 0xb54e0	@ 000b54dc 00da
.org 0xb54de
	subs r0, r1, r2	@ 000b54de 881a
.org 0xb54e0
	asrs r0, r0, #8	@ 000b54e0 0012
.org 0xb54e2
	movs r1, #48	@ 000b54e2 3021
.org 0xb54e4
	bl 0x128fb8	@ 000b54e4 73f068fd
.org 0xb54e8
	lsls r0, r0, #24	@ 000b54e8 0006
.org 0xb54ea
	lsrs r3, r0, #24	@ 000b54ea 030e
.org 0xb54ec
	adds r5, r3, #0	@ 000b54ec 1d1c
.org 0xb54ee
	cmp r3, #0	@ 000b54ee 002b
.org 0xb54f0
	bne.n 0xb54fc	@ 000b54f0 04d1
.org 0xb54f2
	movs r0, #2	@ 000b54f2 0220
.org 0xb54f4
	b.n 0xb5540	@ 000b54f4 24e0
.org 0xb54f6
	.byte 0x00	@ 000b54f6 data
.org 0xb54f7
	.byte 0x00	@ 000b54f7 data
.org 0xb54f8
	.byte 0xf0,0xdb,0x02,0x02	@ 000b54f8 data
.org 0xb54fc
	cmp r3, #1	@ 000b54fc 012b
.org 0xb54fe
	bne.n 0xb5536	@ 000b54fe 1ad1
.org 0xb5500
	ldr r2, [pc, #28]	@ 000b5500 074a
.org 0xb5502
	ldr r1, [r2, #0]	@ 000b5502 1168
.org 0xb5504
	ldr r0, [pc, #28]	@ 000b5504 0748
.org 0xb5506
	muls r0, r1	@ 000b5506 4843
.org 0xb5508
	ldr r1, [pc, #28]	@ 000b5508 0749
.org 0xb550a
	adds r0, r0, r1	@ 000b550a 4018
.org 0xb550c
	lsls r0, r0, #1	@ 000b550c 4000
.org 0xb550e
	lsrs r1, r0, #1	@ 000b550e 4108
.org 0xb5510
	str r1, [r2, #0]	@ 000b5510 1160
.org 0xb5512
	lsrs r0, r0, #17	@ 000b5512 400c
.org 0xb5514
	ands r0, r3	@ 000b5514 1840
.org 0xb5516
	cmp r0, #0	@ 000b5516 0028
.org 0xb5518
	beq.n 0xb552c	@ 000b5518 08d0
.org 0xb551a
	movs r0, #0	@ 000b551a 0020
.org 0xb551c
	b.n 0xb5540	@ 000b551c 10e0
.org 0xb551e
	.byte 0x00	@ 000b551e data
.org 0xb551f
	.byte 0x00	@ 000b551f data
.org 0xb5520
	.byte 0x38,0xdc,0x02,0x02	@ 000b5520 data
.org 0xb5524
	.byte 0xfd,0x43,0x03,0x00	@ 000b5524 data
.org 0xb5528
	.byte 0xc3,0x9e,0x26,0x00	@ 000b5528 data
.org 0xb552c
	adds r1, r4, #0	@ 000b552c 211c
.org 0xb552e
	adds r1, #182	@ 000b552e b631
.org 0xb5530
	strb r0, [r1, #0]	@ 000b5530 0870
.org 0xb5532
	strb r5, [r4, #13]	@ 000b5532 6573
.org 0xb5534
	b.n 0xb5542	@ 000b5534 05e0
.org 0xb5536
	adds r1, r4, #0	@ 000b5536 211c
