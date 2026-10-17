@ FUN_08019460  entry 0x08019460  size 146
.thumb
.org 0x19460
FUN_08019460:
	push {r4, r5, r6, r7, lr}	@ 00019460 f0b5
.org 0x19462
	mov r7, sl	@ 00019462 5746
.org 0x19464
	mov r6, r9	@ 00019464 4e46
.org 0x19466
	mov r5, r8	@ 00019466 4546
.org 0x19468
	push {r5, r6, r7}	@ 00019468 e0b4
.org 0x1946a
	sub sp, #8	@ 0001946a 82b0
.org 0x1946c
	mov r8, r0	@ 0001946c 8046
.org 0x1946e
	mov r9, r1	@ 0001946e 8946
.org 0x19470
	ldr r1, [r0, #92]	@ 00019470 c16d
.org 0x19472
	lsls r7, r1, #16	@ 00019472 0f04
.org 0x19474
	ldr r0, [pc, #124]	@ 00019474 1f48
.org 0x19476
	mov sl, r0	@ 00019476 8246
.org 0x19478
	ldr r0, [pc, #124]	@ 00019478 1f48
.org 0x1947a
	add r0, sl	@ 0001947a 5044
.org 0x1947c
	ldrh r0, [r0, #0]	@ 0001947c 0088
.org 0x1947e
	cmp r0, #0	@ 0001947e 0028
.org 0x19480
	beq.n 0x194d0	@ 00019480 26d0
.org 0x19482
	ldr r0, [pc, #120]	@ 00019482 1e48
.org 0x19484
	ldr r0, [r0, #0]	@ 00019484 0068
.org 0x19486
	ldr r2, [pc, #120]	@ 00019486 1e4a
.org 0x19488
	adds r0, r0, r2	@ 00019488 8018
.org 0x1948a
	lsrs r1, r1, #4	@ 0001948a 0909
.org 0x1948c
	lsls r1, r1, #1	@ 0001948c 4900
.org 0x1948e
	ldr r6, [pc, #116]	@ 0001948e 1d4e
.org 0x19490
	adds r1, r1, r6	@ 00019490 8919
.org 0x19492
	ldrh r2, [r1, #0]	@ 00019492 0a88
.org 0x19494
	movs r4, #248	@ 00019494 f824
.org 0x19496
	lsls r4, r4, #5	@ 00019496 6401
.org 0x19498
	adds r1, r4, #0	@ 00019498 211c
.org 0x1949a
	ands r1, r2	@ 0001949a 1140
.org 0x1949c
	lsls r1, r1, #3	@ 0001949c c900
.org 0x1949e
	movs r2, #192	@ 0001949e c022
.org 0x194a0
	lsls r2, r2, #19	@ 000194a0 d204
.org 0x194a2
	adds r1, r1, r2	@ 000194a2 8918
.org 0x194a4
	movs r5, #128	@ 000194a4 8025
.org 0x194a6
	lsls r5, r5, #2	@ 000194a6 ad00
.org 0x194a8
	adds r2, r5, #0	@ 000194a8 2a1c
.org 0x194aa
	bl 0x128be0	@ 000194aa 0ff199fb
.org 0x194ae
	movs r1, #0	@ 000194ae 0021
.org 0x194b0
	lsrs r0, r7, #20	@ 000194b0 380d
.org 0x194b2
	lsls r0, r0, #1	@ 000194b2 4000
.org 0x194b4
	adds r0, r0, r6	@ 000194b4 8019
.org 0x194b6
	ldrh r0, [r0, #0]	@ 000194b6 0088
.org 0x194b8
	ands r4, r0	@ 000194b8 0440
.org 0x194ba
	lsls r4, r4, #3	@ 000194ba e400
.org 0x194bc
	ldr r0, [pc, #72]	@ 000194bc 1248
.org 0x194be
	adds r4, r4, r0	@ 000194be 2418
.org 0x194c0
	str r1, [sp, #0]	@ 000194c0 0091
.org 0x194c2
	movs r2, #128	@ 000194c2 8022
.org 0x194c4
	lsls r2, r2, #17	@ 000194c4 5204
.org 0x194c6
	orrs r2, r5	@ 000194c6 2a43
.org 0x194c8
	mov r0, sp	@ 000194c8 6846
.org 0x194ca
	adds r1, r4, #0	@ 000194ca 211c
.org 0x194cc
	bl 0x128be0	@ 000194cc 0ff188fb
.org 0x194d0
	ldr r0, [pc, #56]	@ 000194d0 0e48
.org 0x194d2
	add r0, sl	@ 000194d2 5044
.org 0x194d4
	ldrb r0, [r0, #0]	@ 000194d4 0078
.org 0x194d6
	cmp r0, #8	@ 000194d6 0828
.org 0x194d8
	beq.n 0x194e2	@ 000194d8 03d0
.org 0x194da
	mov r0, r8	@ 000194da 4046
.org 0x194dc
	mov r1, r9	@ 000194dc 4946
.org 0x194de
	bl 0x7638	@ 000194de eef7abf8
.org 0x194e2
	add sp, #8	@ 000194e2 02b0
.org 0x194e4
	pop {r3, r4, r5}	@ 000194e4 38bc
.org 0x194e6
	mov r8, r3	@ 000194e6 9846
.org 0x194e8
	mov r9, r4	@ 000194e8 a146
.org 0x194ea
	mov sl, r5	@ 000194ea aa46
.org 0x194ec
	pop {r4, r5, r6, r7}	@ 000194ec f0bc
.org 0x194ee
	pop {r0}	@ 000194ee 01bc
.org 0x194f0
	bx r0	@ 000194f0 0047
