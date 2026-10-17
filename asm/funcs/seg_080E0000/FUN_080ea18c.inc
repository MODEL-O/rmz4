@ FUN_080ea18c  entry 0x080ea18c  size 78
.thumb
.org 0xea18c
FUN_080ea18c:
	push {r4, lr}	@ 000ea18c 10b5
.org 0xea18e
	adds r4, r0, #0	@ 000ea18e 041c
.org 0xea190
	ldrb r0, [r4, #9]	@ 000ea190 607a
.org 0xea192
	cmp r0, #1	@ 000ea192 0128
.org 0xea194
	bne.n 0xea1d4	@ 000ea194 1ed1
.org 0xea196
	adds r1, r4, #0	@ 000ea196 211c
.org 0xea198
	adds r1, #184	@ 000ea198 b831
.org 0xea19a
	ldrb r0, [r1, #0]	@ 000ea19a 0878
.org 0xea19c
	cmp r0, #18	@ 000ea19c 1228
.org 0xea19e
	beq.n 0xea1d4	@ 000ea19e 19d0
.org 0xea1a0
	movs r2, #18	@ 000ea1a0 1222
.org 0xea1a2
	strb r2, [r1, #0]	@ 000ea1a2 0a70
.org 0xea1a4
	ldrb r0, [r4, #17]	@ 000ea1a4 607c
.org 0xea1a6
	cmp r0, #0	@ 000ea1a6 0028
.org 0xea1a8
	bne.n 0xea1bc	@ 000ea1a8 08d1
.org 0xea1aa
	lsls r2, r2, #8	@ 000ea1aa 1202
.org 0xea1ac
	adds r0, r4, #0	@ 000ea1ac 201c
.org 0xea1ae
	adds r0, #112	@ 000ea1ae 7030
.org 0xea1b0
	ldrb r1, [r0, #0]	@ 000ea1b0 0178
.org 0xea1b2
	orrs r1, r2	@ 000ea1b2 1143
.org 0xea1b4
	adds r0, r4, #0	@ 000ea1b4 201c
.org 0xea1b6
	bl 0x1cf00	@ 000ea1b6 32f7a3fe
.org 0xea1ba
	b.n 0xea1ce	@ 000ea1ba 08e0
.org 0xea1bc
	ldr r0, [r4, #40]	@ 000ea1bc a06a
.org 0xea1be
	ldrb r2, [r0, #30]	@ 000ea1be 827f
.org 0xea1c0
	lsls r2, r2, #8	@ 000ea1c0 1202
.org 0xea1c2
	adds r0, #112	@ 000ea1c2 7030
.org 0xea1c4
	ldrb r1, [r0, #0]	@ 000ea1c4 0178
.org 0xea1c6
	orrs r1, r2	@ 000ea1c6 1143
.org 0xea1c8
	adds r0, r4, #0	@ 000ea1c8 201c
.org 0xea1ca
	bl 0x1cf00	@ 000ea1ca 32f799fe
.org 0xea1ce
	adds r0, r4, #0	@ 000ea1ce 201c
.org 0xea1d0
	bl 0x1cff0	@ 000ea1d0 32f70eff
.org 0xea1d4
	pop {r4}	@ 000ea1d4 10bc
.org 0xea1d6
	pop {r0}	@ 000ea1d6 01bc
.org 0xea1d8
	bx r0	@ 000ea1d8 0047
