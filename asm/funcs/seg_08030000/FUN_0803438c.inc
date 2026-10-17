@ FUN_0803438c  entry 0x0803438c  size 88
.thumb
.org 0x3438c
FUN_0803438c:
	push {r4, lr}	@ 0003438c 10b5
.org 0x3438e
	adds r4, r0, #0	@ 0003438e 041c
.org 0x34390
	adds r1, r4, #0	@ 00034390 211c
.org 0x34392
	adds r1, #180	@ 00034392 b431
.org 0x34394
	ldrb r0, [r1, #12]	@ 00034394 087b
.org 0x34396
	cmp r0, #4	@ 00034396 0428
.org 0x34398
	beq.n 0x343be	@ 00034398 11d0
.org 0x3439a
	ldrb r0, [r1, #13]	@ 0003439a 487b
.org 0x3439c
	cmp r0, #4	@ 0003439c 0428
.org 0x3439e
	beq.n 0x343be	@ 0003439e 0ed0
.org 0x343a0
	movs r0, #128	@ 000343a0 8020
.org 0x343a2
	lsls r0, r0, #1	@ 000343a2 4000
.org 0x343a4
	adds r1, r4, r0	@ 000343a4 2118
.org 0x343a6
	movs r0, #0	@ 000343a6 0020
.org 0x343a8
	strb r0, [r1, #0]	@ 000343a8 0870
.org 0x343aa
	adds r0, r4, #0	@ 000343aa 201c
.org 0x343ac
	bl 0x2b7d8	@ 000343ac f7f714fa
.org 0x343b0
	adds r1, r0, #0	@ 000343b0 011c
.org 0x343b2
	lsls r1, r1, #16	@ 000343b2 0904
.org 0x343b4
	lsrs r1, r1, #16	@ 000343b4 090c
.org 0x343b6
	adds r0, r4, #0	@ 000343b6 201c
.org 0x343b8
	bl 0x1cf00	@ 000343b8 e8f7a2fd
.org 0x343bc
	b.n 0x343de	@ 000343bc 0fe0
.org 0x343be
	ldr r0, [pc, #36]	@ 000343be 0948
.org 0x343c0
	adds r2, r4, r0	@ 000343c0 2218
.org 0x343c2
	ldrb r0, [r2, #0]	@ 000343c2 1078
.org 0x343c4
	movs r1, #4	@ 000343c4 0421
.org 0x343c6
	orrs r0, r1	@ 000343c6 0843
.org 0x343c8
	strb r0, [r2, #0]	@ 000343c8 1070
.org 0x343ca
	ldr r1, [pc, #28]	@ 000343ca 0749
.org 0x343cc
	ldr r2, [pc, #28]	@ 000343cc 074a
.org 0x343ce
	adds r0, r4, r2	@ 000343ce a018
.org 0x343d0
	ldrb r0, [r0, #0]	@ 000343d0 0078
.org 0x343d2
	lsls r0, r0, #2	@ 000343d2 8000
.org 0x343d4
	adds r0, r0, r1	@ 000343d4 4018
.org 0x343d6
	ldr r1, [r0, #0]	@ 000343d6 0168
.org 0x343d8
	adds r0, r4, #0	@ 000343d8 201c
.org 0x343da
	bl 0x128f80	@ 000343da f4f0d1fd
.org 0x343de
	pop {r4}	@ 000343de 10bc
.org 0x343e0
	pop {r0}	@ 000343e0 01bc
.org 0x343e2
	bx r0	@ 000343e2 0047
