@ FUN_0808a27c  entry 0x0808a27c  size 100
.thumb
.org 0x8a27c
FUN_0808a27c:
	push {r4, r5, lr}	@ 0008a27c 30b5
.org 0x8a27e
	adds r4, r0, #0	@ 0008a27e 041c
.org 0x8a280
	ldrb r5, [r4, #14]	@ 0008a280 a57b
.org 0x8a282
	cmp r5, #0	@ 0008a282 002d
.org 0x8a284
	beq.n 0x8a28c	@ 0008a284 02d0
.org 0x8a286
	cmp r5, #1	@ 0008a286 012d
.org 0x8a288
	beq.n 0x8a2ba	@ 0008a288 17d0
.org 0x8a28a
	b.n 0x8a2da	@ 0008a28a 26e0
.org 0x8a28c
	movs r1, #128	@ 0008a28c 8021
.org 0x8a28e
	lsls r1, r1, #6	@ 0008a28e 8901
.org 0x8a290
	adds r0, r4, #0	@ 0008a290 201c
.org 0x8a292
	bl 0x1cf00	@ 0008a292 92f735fe
.org 0x8a296
	adds r0, r4, #0	@ 0008a296 201c
.org 0x8a298
	adds r0, #116	@ 0008a298 7430
.org 0x8a29a
	ldr r1, [pc, #68]	@ 0008a29a 1149
.org 0x8a29c
	ldrb r2, [r1, #0]	@ 0008a29c 0a78
.org 0x8a29e
	lsls r1, r2, #1	@ 0008a29e 5100
.org 0x8a2a0
	adds r1, r1, r2	@ 0008a2a0 8918
.org 0x8a2a2
	lsls r1, r1, #3	@ 0008a2a2 c900
.org 0x8a2a4
	ldr r2, [pc, #60]	@ 0008a2a4 0f4a
.org 0x8a2a6
	adds r1, r1, r2	@ 0008a2a6 8918
.org 0x8a2a8
	bl 0x5784	@ 0008a2a8 7bf76cfa
.org 0x8a2ac
	str r5, [r4, #96]	@ 0008a2ac 2566
.org 0x8a2ae
	str r5, [r4, #92]	@ 0008a2ae e565
.org 0x8a2b0
	movs r0, #36	@ 0008a2b0 2420
.org 0x8a2b2
	strb r0, [r4, #18]	@ 0008a2b2 a074
.org 0x8a2b4
	ldrb r0, [r4, #14]	@ 0008a2b4 a07b
.org 0x8a2b6
	adds r0, #1	@ 0008a2b6 0130
.org 0x8a2b8
	strb r0, [r4, #14]	@ 0008a2b8 a073
.org 0x8a2ba
	adds r0, r4, #0	@ 0008a2ba 201c
.org 0x8a2bc
	bl 0x1cff0	@ 0008a2bc 92f798fe
.org 0x8a2c0
	adds r0, r4, #0	@ 0008a2c0 201c
.org 0x8a2c2
	bl 0x8b1a4	@ 0008a2c2 00f06fff
.org 0x8a2c6
	ldrb r0, [r4, #18]	@ 0008a2c6 a07c
.org 0x8a2c8
	subs r0, #1	@ 0008a2c8 0138
.org 0x8a2ca
	strb r0, [r4, #18]	@ 0008a2ca a074
.org 0x8a2cc
	lsls r0, r0, #24	@ 0008a2cc 0006
.org 0x8a2ce
	lsrs r1, r0, #24	@ 0008a2ce 010e
.org 0x8a2d0
	cmp r1, #0	@ 0008a2d0 0029
.org 0x8a2d2
	bne.n 0x8a2da	@ 0008a2d2 02d1
.org 0x8a2d4
	movs r0, #4	@ 0008a2d4 0420
.org 0x8a2d6
	strb r0, [r4, #13]	@ 0008a2d6 6073
.org 0x8a2d8
	strb r1, [r4, #14]	@ 0008a2d8 a173
.org 0x8a2da
	pop {r4, r5}	@ 0008a2da 30bc
.org 0x8a2dc
	pop {r0}	@ 0008a2dc 01bc
.org 0x8a2de
	bx r0	@ 0008a2de 0047
