@ FUN_080d7368  entry 0x080d7368  size 138
.thumb
.org 0xd7368
FUN_080d7368:
	push {r4, r5, r6, r7, lr}	@ 000d7368 f0b5
.org 0xd736a
	mov r7, sl	@ 000d736a 5746
.org 0xd736c
	mov r6, r9	@ 000d736c 4e46
.org 0xd736e
	mov r5, r8	@ 000d736e 4546
.org 0xd7370
	push {r5, r6, r7}	@ 000d7370 e0b4
.org 0xd7372
	sub sp, #4	@ 000d7372 81b0
.org 0xd7374
	mov sl, r0	@ 000d7374 8246
.org 0xd7376
	adds r6, r1, #0	@ 000d7376 0e1c
.org 0xd7378
	mov r9, r2	@ 000d7378 9146
.org 0xd737a
	ldr r0, [sp, #36]	@ 000d737a 0998
.org 0xd737c
	lsls r3, r3, #24	@ 000d737c 1b06
.org 0xd737e
	lsrs r7, r3, #24	@ 000d737e 1f0e
.org 0xd7380
	lsls r0, r0, #24	@ 000d7380 0006
.org 0xd7382
	lsrs r0, r0, #24	@ 000d7382 000e
.org 0xd7384
	mov r8, r0	@ 000d7384 8046
.org 0xd7386
	movs r4, #0	@ 000d7386 0024
.org 0xd7388
	cmp r4, r7	@ 000d7388 bc42
.org 0xd738a
	bge.n 0xd73e2	@ 000d738a 2ada
.org 0xd738c
	movs r5, #0	@ 000d738c 0025
.org 0xd738e
	movs r3, #1	@ 000d738e 0123
.org 0xd7390
	ldr r0, [pc, #96]	@ 000d7390 1848
.org 0xd7392
	ldr r0, [r0, #0]	@ 000d7392 0068
.org 0xd7394
	str r3, [sp, #0]	@ 000d7394 0093
.org 0xd7396
	bl 0x5500	@ 000d7396 2ef7b3f8
.org 0xd739a
	adds r1, r0, #0	@ 000d739a 011c
.org 0xd739c
	ldr r3, [sp, #0]	@ 000d739c 009b
.org 0xd739e
	cmp r1, #0	@ 000d739e 0029
.org 0xd73a0
	beq.n 0xd73dc	@ 000d73a0 1cd0
.org 0xd73a2
	adds r0, #37	@ 000d73a2 2530
.org 0xd73a4
	strb r3, [r0, #0]	@ 000d73a4 0370
.org 0xd73a6
	movs r0, #23	@ 000d73a6 1720
.org 0xd73a8
	strb r0, [r1, #9]	@ 000d73a8 4872
.org 0xd73aa
	ldr r2, [pc, #76]	@ 000d73aa 134a
.org 0xd73ac
	ldr r0, [r2, #92]	@ 000d73ac d06d
.org 0xd73ae
	ldr r0, [r0, #0]	@ 000d73ae 0068
.org 0xd73b0
	str r0, [r1, #20]	@ 000d73b0 4861
.org 0xd73b2
	strh r5, [r1, #32]	@ 000d73b2 0d84
.org 0xd73b4
	adds r2, r1, #0	@ 000d73b4 0a1c
.org 0xd73b6
	adds r2, #34	@ 000d73b6 2232
.org 0xd73b8
	strb r5, [r2, #0]	@ 000d73b8 1570
.org 0xd73ba
	strb r5, [r1, #16]	@ 000d73ba 0d74
.org 0xd73bc
	strb r4, [r1, #17]	@ 000d73bc 4c74
.org 0xd73be
	mov r0, sl	@ 000d73be 5046
.org 0xd73c0
	str r0, [r1, #40]	@ 000d73c0 8862
.org 0xd73c2
	mov r0, r9	@ 000d73c2 4846
.org 0xd73c4
	str r0, [r1, #116]	@ 000d73c4 4867
.org 0xd73c6
	ldr r0, [r6, #0]	@ 000d73c6 3068
.org 0xd73c8
	str r0, [r1, #84]	@ 000d73c8 4865
.org 0xd73ca
	ldr r0, [r6, #4]	@ 000d73ca 7068
.org 0xd73cc
	str r0, [r1, #88]	@ 000d73cc 8865
.org 0xd73ce
	mov r0, r8	@ 000d73ce 4046
.org 0xd73d0
	strb r0, [r2, #0]	@ 000d73d0 1070
.org 0xd73d2
	adds r0, r1, #0	@ 000d73d2 081c
.org 0xd73d4
	adds r0, #120	@ 000d73d4 7830
.org 0xd73d6
	strb r3, [r0, #0]	@ 000d73d6 0370
.org 0xd73d8
	adds r0, #1	@ 000d73d8 0130
.org 0xd73da
	strb r5, [r0, #0]	@ 000d73da 0570
.org 0xd73dc
	adds r4, #1	@ 000d73dc 0134
.org 0xd73de
	cmp r4, r7	@ 000d73de bc42
.org 0xd73e0
	blt.n 0xd7390	@ 000d73e0 d6db
.org 0xd73e2
	add sp, #4	@ 000d73e2 01b0
.org 0xd73e4
	pop {r3, r4, r5}	@ 000d73e4 38bc
.org 0xd73e6
	mov r8, r3	@ 000d73e6 9846
.org 0xd73e8
	mov r9, r4	@ 000d73e8 a146
.org 0xd73ea
	mov sl, r5	@ 000d73ea aa46
.org 0xd73ec
	pop {r4, r5, r6, r7}	@ 000d73ec f0bc
.org 0xd73ee
	pop {r0}	@ 000d73ee 01bc
.org 0xd73f0
	bx r0	@ 000d73f0 0047
