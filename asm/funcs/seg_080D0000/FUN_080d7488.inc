@ FUN_080d7488  entry 0x080d7488  size 130
.thumb
.org 0xd7488
FUN_080d7488:
	push {r4, r5, r6, r7, lr}	@ 000d7488 f0b5
.org 0xd748a
	mov r7, sl	@ 000d748a 5746
.org 0xd748c
	mov r6, r9	@ 000d748c 4e46
.org 0xd748e
	mov r5, r8	@ 000d748e 4546
.org 0xd7490
	push {r5, r6, r7}	@ 000d7490 e0b4
.org 0xd7492
	sub sp, #4	@ 000d7492 81b0
.org 0xd7494
	mov r9, r0	@ 000d7494 8146
.org 0xd7496
	adds r6, r1, #0	@ 000d7496 0e1c
.org 0xd7498
	mov r8, r2	@ 000d7498 9046
.org 0xd749a
	lsls r3, r3, #24	@ 000d749a 1b06
.org 0xd749c
	lsrs r7, r3, #24	@ 000d749c 1f0e
.org 0xd749e
	movs r5, #0	@ 000d749e 0025
.org 0xd74a0
	cmp r5, r7	@ 000d74a0 bd42
.org 0xd74a2
	bge.n 0xd74fa	@ 000d74a2 2ada
.org 0xd74a4
	movs r4, #0	@ 000d74a4 0024
.org 0xd74a6
	movs r2, #1	@ 000d74a6 0122
.org 0xd74a8
	ldr r0, [pc, #96]	@ 000d74a8 1848
.org 0xd74aa
	mov sl, r0	@ 000d74aa 8246
.org 0xd74ac
	ldr r0, [pc, #96]	@ 000d74ac 1848
.org 0xd74ae
	ldr r0, [r0, #0]	@ 000d74ae 0068
.org 0xd74b0
	str r2, [sp, #0]	@ 000d74b0 0092
.org 0xd74b2
	bl 0x5500	@ 000d74b2 2ef725f8
.org 0xd74b6
	adds r1, r0, #0	@ 000d74b6 011c
.org 0xd74b8
	ldr r2, [sp, #0]	@ 000d74b8 009a
.org 0xd74ba
	cmp r1, #0	@ 000d74ba 0029
.org 0xd74bc
	beq.n 0xd74f4	@ 000d74bc 1ad0
.org 0xd74be
	adds r0, #37	@ 000d74be 2530
.org 0xd74c0
	strb r2, [r0, #0]	@ 000d74c0 0270
.org 0xd74c2
	movs r0, #23	@ 000d74c2 1720
.org 0xd74c4
	strb r0, [r1, #9]	@ 000d74c4 4872
.org 0xd74c6
	mov r3, sl	@ 000d74c6 5346
.org 0xd74c8
	ldr r0, [r3, #92]	@ 000d74c8 d86d
.org 0xd74ca
	ldr r0, [r0, #0]	@ 000d74ca 0068
.org 0xd74cc
	str r0, [r1, #20]	@ 000d74cc 4861
.org 0xd74ce
	strh r4, [r1, #32]	@ 000d74ce 0c84
.org 0xd74d0
	adds r0, r1, #0	@ 000d74d0 081c
.org 0xd74d2
	adds r0, #34	@ 000d74d2 2230
.org 0xd74d4
	strb r4, [r0, #0]	@ 000d74d4 0470
.org 0xd74d6
	strb r2, [r1, #16]	@ 000d74d6 0a74
.org 0xd74d8
	strb r5, [r1, #17]	@ 000d74d8 4d74
.org 0xd74da
	mov r0, r9	@ 000d74da 4846
.org 0xd74dc
	str r0, [r1, #40]	@ 000d74dc 8862
.org 0xd74de
	mov r3, r8	@ 000d74de 4346
.org 0xd74e0
	str r3, [r1, #116]	@ 000d74e0 4b67
.org 0xd74e2
	ldr r0, [r6, #0]	@ 000d74e2 3068
.org 0xd74e4
	str r0, [r1, #84]	@ 000d74e4 4865
.org 0xd74e6
	ldr r0, [r6, #4]	@ 000d74e6 7068
.org 0xd74e8
	str r0, [r1, #88]	@ 000d74e8 8865
.org 0xd74ea
	adds r0, r1, #0	@ 000d74ea 081c
.org 0xd74ec
	adds r0, #120	@ 000d74ec 7830
.org 0xd74ee
	strb r4, [r0, #0]	@ 000d74ee 0470
.org 0xd74f0
	adds r0, #1	@ 000d74f0 0130
.org 0xd74f2
	strb r4, [r0, #0]	@ 000d74f2 0470
.org 0xd74f4
	adds r5, #1	@ 000d74f4 0135
.org 0xd74f6
	cmp r5, r7	@ 000d74f6 bd42
.org 0xd74f8
	blt.n 0xd74ac	@ 000d74f8 d8db
.org 0xd74fa
	add sp, #4	@ 000d74fa 01b0
.org 0xd74fc
	pop {r3, r4, r5}	@ 000d74fc 38bc
.org 0xd74fe
	mov r8, r3	@ 000d74fe 9846
.org 0xd7500
	mov r9, r4	@ 000d7500 a146
.org 0xd7502
	mov sl, r5	@ 000d7502 aa46
.org 0xd7504
	pop {r4, r5, r6, r7}	@ 000d7504 f0bc
.org 0xd7506
	pop {r0}	@ 000d7506 01bc
.org 0xd7508
	bx r0	@ 000d7508 0047
