@ FUN_0812246c  entry 0x0812246c  size 130
.thumb
.org 0x12246c
FUN_0812246c:
	push {r4, lr}	@ 0012246c 10b5
.org 0x12246e
	adds r4, r0, #0	@ 0012246e 041c
.org 0x122470
	movs r0, #51	@ 00122470 3320
.org 0x122472
	bl 0x25d8	@ 00122472 e0f6b1f8
.org 0x122476
	movs r0, #121	@ 00122476 7920
.org 0x122478
	bl 0x25d8	@ 00122478 e0f6aef8
.org 0x12247c
	ldrh r0, [r4, #4]	@ 0012247c a088
.org 0x12247e
	subs r0, #1	@ 0012247e 0138
.org 0x122480
	movs r2, #0	@ 00122480 0022
.org 0x122482
	adds r1, r0, #0	@ 00122482 011c
.org 0x122484
	strh r0, [r4, #4]	@ 00122484 a080
.org 0x122486
	lsls r0, r0, #16	@ 00122486 0004
.org 0x122488
	cmp r0, #0	@ 00122488 0028
.org 0x12248a
	bne.n 0x1224bc	@ 0012248a 17d1
.org 0x12248c
	ldr r0, [pc, #36]	@ 0012248c 0948
.org 0x12248e
	ldr r3, [pc, #40]	@ 0012248e 0a4b
.org 0x122490
	adds r1, r0, r3	@ 00122490 c118
.org 0x122492
	strb r2, [r1, #0]	@ 00122492 0a70
.org 0x122494
	subs r3, #1	@ 00122494 013b
.org 0x122496
	adds r1, r0, r3	@ 00122496 c118
.org 0x122498
	strb r2, [r1, #0]	@ 00122498 0a70
.org 0x12249a
	movs r1, #128	@ 0012249a 8021
.org 0x12249c
	lsls r1, r1, #3	@ 0012249c c900
.org 0x12249e
	adds r0, r0, r1	@ 0012249e 4018
.org 0x1224a0
	strb r2, [r0, #0]	@ 001224a0 0270
.org 0x1224a2
	movs r0, #4	@ 001224a2 0420
.org 0x1224a4
	strb r0, [r4, #1]	@ 001224a4 6070
.org 0x1224a6
	strb r2, [r4, #3]	@ 001224a6 e270
.org 0x1224a8
	strb r2, [r4, #2]	@ 001224a8 a270
.org 0x1224aa
	adds r0, r4, #0	@ 001224aa 201c
.org 0x1224ac
	bl 0x122508	@ 001224ac 00f02cf8
.org 0x1224b0
	b.n 0x1224d6	@ 001224b0 11e0
.org 0x1224b2
	.byte 0x00	@ 001224b2 data
.org 0x1224b3
	.byte 0x00	@ 001224b3 data
.org 0x1224b4
	.byte 0xc0,0x2a,0x00,0x03	@ 001224b4 data
.org 0x1224b8
	.byte 0x02,0x04,0x00,0x00	@ 001224b8 data
.org 0x1224bc
	ldr r2, [pc, #56]	@ 001224bc 0e4a
.org 0x1224be
	ldr r3, [pc, #60]	@ 001224be 0f4b
.org 0x1224c0
	adds r0, r2, r3	@ 001224c0 d018
.org 0x1224c2
	strb r1, [r0, #0]	@ 001224c2 0170
.org 0x1224c4
	movs r0, #255	@ 001224c4 ff20
.org 0x1224c6
	ands r0, r1	@ 001224c6 0840
.org 0x1224c8
	subs r3, #1	@ 001224c8 013b
.org 0x1224ca
	adds r1, r2, r3	@ 001224ca d118
.org 0x1224cc
	strb r0, [r1, #0]	@ 001224cc 0870
.org 0x1224ce
	movs r1, #128	@ 001224ce 8021
.org 0x1224d0
	lsls r1, r1, #3	@ 001224d0 c900
.org 0x1224d2
	adds r2, r2, r1	@ 001224d2 5218
.org 0x1224d4
	strb r0, [r2, #0]	@ 001224d4 1070
.org 0x1224d6
	ldr r0, [pc, #40]	@ 001224d6 0a48
.org 0x1224d8
	movs r3, #210	@ 001224d8 d223
.org 0x1224da
	lsls r3, r3, #3	@ 001224da db00
.org 0x1224dc
	adds r0, r0, r3	@ 001224dc c018
.org 0x1224de
	ldrh r0, [r0, #0]	@ 001224de 0088
.org 0x1224e0
	ldr r1, [pc, #32]	@ 001224e0 0849
.org 0x1224e2
	adds r0, r0, r1	@ 001224e2 4018
.org 0x1224e4
	movs r1, #1	@ 001224e4 0121
.org 0x1224e6
	movs r2, #18	@ 001224e6 1222
.org 0x1224e8
	bl 0x10d85c	@ 001224e8 ebf7b8f9
.org 0x1224ec
	adds r0, r4, #0	@ 001224ec 201c
