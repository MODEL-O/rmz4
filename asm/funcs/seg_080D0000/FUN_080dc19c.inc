@ FUN_080dc19c  entry 0x080dc19c  size 132
.thumb
.org 0xdc19c
FUN_080dc19c:
	push {r4, r5, r6, r7, lr}	@ 000dc19c f0b5
.org 0xdc19e
	mov r7, sl	@ 000dc19e 5746
.org 0xdc1a0
	mov r6, r9	@ 000dc1a0 4e46
.org 0xdc1a2
	mov r5, r8	@ 000dc1a2 4546
.org 0xdc1a4
	push {r5, r6, r7}	@ 000dc1a4 e0b4
.org 0xdc1a6
	sub sp, #4	@ 000dc1a6 81b0
.org 0xdc1a8
	mov r9, r0	@ 000dc1a8 8146
.org 0xdc1aa
	adds r5, r1, #0	@ 000dc1aa 0d1c
.org 0xdc1ac
	mov r8, r2	@ 000dc1ac 9046
.org 0xdc1ae
	lsls r3, r3, #24	@ 000dc1ae 1b06
.org 0xdc1b0
	lsrs r6, r3, #24	@ 000dc1b0 1e0e
.org 0xdc1b2
	movs r4, #0	@ 000dc1b2 0024
.org 0xdc1b4
	cmp r4, r6	@ 000dc1b4 b442
.org 0xdc1b6
	bge.n 0xdc210	@ 000dc1b6 2bda
.org 0xdc1b8
	movs r7, #0	@ 000dc1b8 0027
.org 0xdc1ba
	movs r2, #1	@ 000dc1ba 0122
.org 0xdc1bc
	ldr r0, [pc, #96]	@ 000dc1bc 1848
.org 0xdc1be
	mov sl, r0	@ 000dc1be 8246
.org 0xdc1c0
	ldr r0, [pc, #96]	@ 000dc1c0 1848
.org 0xdc1c2
	ldr r0, [r0, #0]	@ 000dc1c2 0068
.org 0xdc1c4
	str r2, [sp, #0]	@ 000dc1c4 0092
.org 0xdc1c6
	bl 0x5500	@ 000dc1c6 29f79bf9
.org 0xdc1ca
	adds r1, r0, #0	@ 000dc1ca 011c
.org 0xdc1cc
	ldr r2, [sp, #0]	@ 000dc1cc 009a
.org 0xdc1ce
	cmp r1, #0	@ 000dc1ce 0029
.org 0xdc1d0
	beq.n 0xdc20a	@ 000dc1d0 1bd0
.org 0xdc1d2
	adds r0, #37	@ 000dc1d2 2530
.org 0xdc1d4
	strb r2, [r0, #0]	@ 000dc1d4 0270
.org 0xdc1d6
	movs r0, #43	@ 000dc1d6 2b20
.org 0xdc1d8
	strb r0, [r1, #9]	@ 000dc1d8 4872
.org 0xdc1da
	mov r3, sl	@ 000dc1da 5346
.org 0xdc1dc
	ldr r0, [r3, #0]	@ 000dc1dc 1868
.org 0xdc1de
	ldr r0, [r0, #0]	@ 000dc1de 0068
.org 0xdc1e0
	str r0, [r1, #20]	@ 000dc1e0 4861
.org 0xdc1e2
	strh r7, [r1, #32]	@ 000dc1e2 0f84
.org 0xdc1e4
	adds r0, r1, #0	@ 000dc1e4 081c
.org 0xdc1e6
	adds r0, #34	@ 000dc1e6 2230
.org 0xdc1e8
	strb r7, [r0, #0]	@ 000dc1e8 0770
.org 0xdc1ea
	movs r0, #2	@ 000dc1ea 0220
.org 0xdc1ec
	strb r0, [r1, #16]	@ 000dc1ec 0874
.org 0xdc1ee
	strb r4, [r1, #17]	@ 000dc1ee 4c74
.org 0xdc1f0
	mov r0, r9	@ 000dc1f0 4846
.org 0xdc1f2
	str r0, [r1, #40]	@ 000dc1f2 8862
.org 0xdc1f4
	mov r3, r8	@ 000dc1f4 4346
.org 0xdc1f6
	str r3, [r1, #116]	@ 000dc1f6 4b67
.org 0xdc1f8
	ldr r0, [r5, #0]	@ 000dc1f8 2868
.org 0xdc1fa
	str r0, [r1, #84]	@ 000dc1fa 4865
.org 0xdc1fc
	ldr r0, [r5, #4]	@ 000dc1fc 6868
.org 0xdc1fe
	str r0, [r1, #88]	@ 000dc1fe 8865
.org 0xdc200
	adds r0, r1, #0	@ 000dc200 081c
.org 0xdc202
	adds r0, #120	@ 000dc202 7830
.org 0xdc204
	strb r2, [r0, #0]	@ 000dc204 0270
.org 0xdc206
	adds r0, #1	@ 000dc206 0130
.org 0xdc208
	strb r7, [r0, #0]	@ 000dc208 0770
.org 0xdc20a
	adds r4, #1	@ 000dc20a 0134
.org 0xdc20c
	cmp r4, r6	@ 000dc20c b442
.org 0xdc20e
	blt.n 0xdc1c0	@ 000dc20e d7db
.org 0xdc210
	add sp, #4	@ 000dc210 01b0
.org 0xdc212
	pop {r3, r4, r5}	@ 000dc212 38bc
.org 0xdc214
	mov r8, r3	@ 000dc214 9846
.org 0xdc216
	mov r9, r4	@ 000dc216 a146
.org 0xdc218
	mov sl, r5	@ 000dc218 aa46
.org 0xdc21a
	pop {r4, r5, r6, r7}	@ 000dc21a f0bc
.org 0xdc21c
	pop {r0}	@ 000dc21c 01bc
.org 0xdc21e
	bx r0	@ 000dc21e 0047
