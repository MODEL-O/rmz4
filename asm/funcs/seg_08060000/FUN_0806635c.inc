@ FUN_0806635c  entry 0x0806635c  size 116
.thumb
.org 0x6635c
FUN_0806635c:
	push {r4, r5, lr}	@ 0006635c 30b5
.org 0x6635e
	sub sp, #16	@ 0006635e 84b0
.org 0x66360
	adds r3, r0, #0	@ 00066360 031c
.org 0x66362
	lsls r1, r1, #24	@ 00066362 0906
.org 0x66364
	lsrs r2, r1, #24	@ 00066364 0a0e
.org 0x66366
	movs r5, #0	@ 00066366 0025
.org 0x66368
	movs r4, #0	@ 00066368 0024
.org 0x6636a
	cmp r4, r2	@ 0006636a 9442
.org 0x6636c
	bge.n 0x66384	@ 0006636c 0ada
.org 0x6636e
	mov r0, sp	@ 0006636e 6846
.org 0x66370
	adds r1, r0, r4	@ 00066370 0119
.org 0x66372
	adds r0, r3, r4	@ 00066372 1819
.org 0x66374
	ldrb r0, [r0, #0]	@ 00066374 0078
.org 0x66376
	strb r0, [r1, #0]	@ 00066376 0870
.org 0x66378
	adds r0, r0, r5	@ 00066378 4019
.org 0x6637a
	lsls r0, r0, #24	@ 0006637a 0006
.org 0x6637c
	lsrs r5, r0, #24	@ 0006637c 050e
.org 0x6637e
	adds r4, #1	@ 0006637e 0134
.org 0x66380
	cmp r4, r2	@ 00066380 9442
.org 0x66382
	blt.n 0x6636e	@ 00066382 f4db
.org 0x66384
	lsls r0, r5, #24	@ 00066384 2806
.org 0x66386
	asrs r3, r0, #24	@ 00066386 0316
.org 0x66388
	cmp r3, #0	@ 00066388 002b
.org 0x6638a
	bne.n 0x66392	@ 0006638a 02d1
.org 0x6638c
	movs r0, #1	@ 0006638c 0120
.org 0x6638e
	negs r0, r0	@ 0006638e 4042
.org 0x66390
	b.n 0x663c8	@ 00066390 1ae0
.org 0x66392
	ldr r2, [pc, #60]	@ 00066392 0f4a
.org 0x66394
	ldr r1, [r2, #0]	@ 00066394 1168
.org 0x66396
	ldr r0, [pc, #60]	@ 00066396 0f48
.org 0x66398
	muls r0, r1	@ 00066398 4843
.org 0x6639a
	ldr r1, [pc, #60]	@ 0006639a 0f49
.org 0x6639c
	adds r0, r0, r1	@ 0006639c 4018
.org 0x6639e
	lsls r0, r0, #1	@ 0006639e 4000
.org 0x663a0
	lsrs r1, r0, #1	@ 000663a0 4108
.org 0x663a2
	str r1, [r2, #0]	@ 000663a2 1160
.org 0x663a4
	lsrs r0, r0, #17	@ 000663a4 400c
.org 0x663a6
	adds r1, r3, #0	@ 000663a6 191c
.org 0x663a8
	bl 0x129198	@ 000663a8 c2f0f6fe
.org 0x663ac
	adds r1, r0, #0	@ 000663ac 011c
.org 0x663ae
	subs r4, #1	@ 000663ae 013c
.org 0x663b0
	cmp r4, #0	@ 000663b0 002c
.org 0x663b2
	blt.n 0x663c6	@ 000663b2 08db
.org 0x663b4
	mov r2, sp	@ 000663b4 6a46
.org 0x663b6
	adds r0, r2, r4	@ 000663b6 1019
.org 0x663b8
	ldrb r0, [r0, #0]	@ 000663b8 0078
.org 0x663ba
	subs r0, r5, r0	@ 000663ba 281a
.org 0x663bc
	lsls r0, r0, #24	@ 000663bc 0006
.org 0x663be
	lsrs r5, r0, #24	@ 000663be 050e
.org 0x663c0
	asrs r0, r0, #24	@ 000663c0 0016
.org 0x663c2
	cmp r1, r0	@ 000663c2 8142
.org 0x663c4
	blt.n 0x663ae	@ 000663c4 f3db
.org 0x663c6
	adds r0, r4, #0	@ 000663c6 201c
.org 0x663c8
	add sp, #16	@ 000663c8 04b0
.org 0x663ca
	pop {r4, r5}	@ 000663ca 30bc
.org 0x663cc
	pop {r1}	@ 000663cc 02bc
.org 0x663ce
	bx r1	@ 000663ce 0847
