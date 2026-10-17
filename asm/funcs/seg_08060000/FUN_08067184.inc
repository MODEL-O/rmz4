@ FUN_08067184  entry 0x08067184  size 96
.thumb
.org 0x67184
FUN_08067184:
	push {r4, lr}	@ 00067184 10b5
.org 0x67186
	adds r4, r0, #0	@ 00067186 041c
.org 0x67188
	ldrb r0, [r4, #14]	@ 00067188 a07b
.org 0x6718a
	cmp r0, #0	@ 0006718a 0028
.org 0x6718c
	bne.n 0x671c2	@ 0006718c 19d1
.org 0x6718e
	ldrb r0, [r4, #30]	@ 0006718e a07f
.org 0x67190
	lsls r0, r0, #8	@ 00067190 0002
.org 0x67192
	adds r1, r4, #0	@ 00067192 211c
.org 0x67194
	adds r1, #112	@ 00067194 7031
.org 0x67196
	ldrb r1, [r1, #0]	@ 00067196 0978
.org 0x67198
	orrs r0, r1	@ 00067198 0843
.org 0x6719a
	ldr r1, [pc, #72]	@ 0006719a 1249
.org 0x6719c
	cmp r0, r1	@ 0006719c 8842
.org 0x6719e
	beq.n 0x671a6	@ 0006719e 02d0
.org 0x671a0
	adds r0, r4, #0	@ 000671a0 201c
.org 0x671a2
	bl 0x1cf00	@ 000671a2 b5f7adfe
.org 0x671a6
	adds r0, r4, #0	@ 000671a6 201c
.org 0x671a8
	adds r0, #116	@ 000671a8 7430
.org 0x671aa
	ldr r1, [pc, #60]	@ 000671aa 0f49
.org 0x671ac
	bl 0x5784	@ 000671ac 9ef7eafa
.org 0x671b0
	adds r1, r4, #0	@ 000671b0 211c
.org 0x671b2
	adds r1, #37	@ 000671b2 2531
.org 0x671b4
	movs r0, #24	@ 000671b4 1820
.org 0x671b6
	strb r0, [r1, #0]	@ 000671b6 0870
.org 0x671b8
	movs r0, #30	@ 000671b8 1e20
.org 0x671ba
	strb r0, [r4, #18]	@ 000671ba a074
.org 0x671bc
	ldrb r0, [r4, #14]	@ 000671bc a07b
.org 0x671be
	adds r0, #1	@ 000671be 0130
.org 0x671c0
	strb r0, [r4, #14]	@ 000671c0 a073
.org 0x671c2
	adds r0, r4, #0	@ 000671c2 201c
.org 0x671c4
	bl 0x1cff0	@ 000671c4 b5f714ff
.org 0x671c8
	ldrb r0, [r4, #18]	@ 000671c8 a07c
.org 0x671ca
	subs r0, #1	@ 000671ca 0138
.org 0x671cc
	strb r0, [r4, #18]	@ 000671cc a074
.org 0x671ce
	lsls r0, r0, #24	@ 000671ce 0006
.org 0x671d0
	lsrs r0, r0, #24	@ 000671d0 000e
.org 0x671d2
	cmp r0, #255	@ 000671d2 ff28
.org 0x671d4
	bne.n 0x671de	@ 000671d4 03d1
.org 0x671d6
	movs r0, #2	@ 000671d6 0220
.org 0x671d8
	strb r0, [r4, #13]	@ 000671d8 6073
.org 0x671da
	movs r0, #0	@ 000671da 0020
.org 0x671dc
	strb r0, [r4, #14]	@ 000671dc a073
.org 0x671de
	pop {r4}	@ 000671de 10bc
.org 0x671e0
	pop {r0}	@ 000671e0 01bc
.org 0x671e2
	bx r0	@ 000671e2 0047
