@ FUN_0803b9b0  entry 0x0803b9b0  size 174
.thumb
.org 0x3b9b0
FUN_0803b9b0:
	push {r4, r5, r6, r7, lr}	@ 0003b9b0 f0b5
.org 0x3b9b2
	mov r7, r9	@ 0003b9b2 4f46
.org 0x3b9b4
	mov r6, r8	@ 0003b9b4 4646
.org 0x3b9b6
	push {r6, r7}	@ 0003b9b6 c0b4
.org 0x3b9b8
	sub sp, #8	@ 0003b9b8 82b0
.org 0x3b9ba
	adds r4, r0, #0	@ 0003b9ba 041c
.org 0x3b9bc
	movs r0, #180	@ 0003b9bc b420
.org 0x3b9be
	adds r0, r0, r4	@ 0003b9be 0019
.org 0x3b9c0
	mov r9, r0	@ 0003b9c0 8146
.org 0x3b9c2
	ldr r6, [r0, #0]	@ 0003b9c2 0668
.org 0x3b9c4
	adds r0, r4, #0	@ 0003b9c4 201c
.org 0x3b9c6
	bl 0x1cc9c	@ 0003b9c6 e1f769f9
.org 0x3b9ca
	adds r0, r4, #0	@ 0003b9ca 201c
.org 0x3b9cc
	bl 0x1ceec	@ 0003b9cc e1f78efa
.org 0x3b9d0
	ldrb r1, [r4, #10]	@ 0003b9d0 a17a
.org 0x3b9d2
	movs r0, #1	@ 0003b9d2 0120
.org 0x3b9d4
	movs r2, #0	@ 0003b9d4 0022
.org 0x3b9d6
	mov r8, r2	@ 0003b9d6 9046
.org 0x3b9d8
	orrs r0, r1	@ 0003b9d8 0843
.org 0x3b9da
	movs r1, #2	@ 0003b9da 0221
.org 0x3b9dc
	orrs r0, r1	@ 0003b9dc 0843
.org 0x3b9de
	strb r0, [r4, #10]	@ 0003b9de a072
.org 0x3b9e0
	movs r1, #184	@ 0003b9e0 b821
.org 0x3b9e2
	lsls r1, r1, #7	@ 0003b9e2 c901
.org 0x3b9e4
	adds r0, r4, #0	@ 0003b9e4 201c
.org 0x3b9e6
	bl 0x1cf00	@ 0003b9e6 e1f78bfa
.org 0x3b9ea
	movs r0, #26	@ 0003b9ea 1a20
.org 0x3b9ec
	bl 0x2b10	@ 0003b9ec c7f790f8
.org 0x3b9f0
	adds r1, r4, #0	@ 0003b9f0 211c
.org 0x3b9f2
	adds r1, #37	@ 0003b9f2 2531
.org 0x3b9f4
	movs r0, #15	@ 0003b9f4 0f20
.org 0x3b9f6
	strb r0, [r1, #0]	@ 0003b9f6 0870
.org 0x3b9f8
	ldrb r1, [r4, #10]	@ 0003b9f8 a17a
.org 0x3b9fa
	movs r0, #4	@ 0003b9fa 0420
.org 0x3b9fc
	orrs r0, r1	@ 0003b9fc 0843
.org 0x3b9fe
	strb r0, [r4, #10]	@ 0003b9fe a072
.org 0x3ba00
	adds r7, r4, #0	@ 0003ba00 271c
.org 0x3ba02
	adds r7, #116	@ 0003ba02 7437
.org 0x3ba04
	ldr r5, [pc, #88]	@ 0003ba04 164d
.org 0x3ba06
	adds r2, r4, #0	@ 0003ba06 221c
.org 0x3ba08
	adds r2, #84	@ 0003ba08 5432
.org 0x3ba0a
	adds r0, r7, #0	@ 0003ba0a 381c
.org 0x3ba0c
	adds r1, r5, #0	@ 0003ba0c 291c
.org 0x3ba0e
	movs r3, #1	@ 0003ba0e 0123
.org 0x3ba10
	bl 0x5760	@ 0003ba10 c9f7a6fe
.org 0x3ba14
	str r4, [r7, #44]	@ 0003ba14 fc62
.org 0x3ba16
	mov r0, r8	@ 0003ba16 4046
.org 0x3ba18
	str r0, [r7, #36]	@ 0003ba18 7862
.org 0x3ba1a
	strb r0, [r4, #18]	@ 0003ba1a a074
.org 0x3ba1c
	adds r0, r6, #0	@ 0003ba1c 301c
.org 0x3ba1e
	bl 0x3a4a8	@ 0003ba1e fef743fd
.org 0x3ba22
	adds r0, #10	@ 0003ba22 0a30
.org 0x3ba24
	lsls r0, r0, #24	@ 0003ba24 0006
.org 0x3ba26
	lsrs r4, r0, #24	@ 0003ba26 040e
.org 0x3ba28
	adds r0, r6, #0	@ 0003ba28 301c
.org 0x3ba2a
	bl 0x38a78	@ 0003ba2a fdf725f8
.org 0x3ba2e
	lsls r0, r0, #24	@ 0003ba2e 0006
.org 0x3ba30
	cmp r0, #0	@ 0003ba30 0028
.org 0x3ba32
	beq.n 0x3ba38	@ 0003ba32 01d0
.org 0x3ba34
	lsls r0, r4, #25	@ 0003ba34 6006
.org 0x3ba36
	lsrs r4, r0, #24	@ 0003ba36 040e
.org 0x3ba38
	movs r3, #1	@ 0003ba38 0123
.org 0x3ba3a
	negs r3, r3	@ 0003ba3a 5b42
.org 0x3ba3c
	str r3, [sp, #0]	@ 0003ba3c 0093
.org 0x3ba3e
	str r3, [sp, #4]	@ 0003ba3e 0193
.org 0x3ba40
	adds r0, r7, #0	@ 0003ba40 381c
.org 0x3ba42
	adds r1, r5, #0	@ 0003ba42 291c
.org 0x3ba44
	adds r2, r4, #0	@ 0003ba44 221c
.org 0x3ba46
	bl 0x5794	@ 0003ba46 c9f7a5fe
.org 0x3ba4a
	movs r0, #4	@ 0003ba4a 0420
.org 0x3ba4c
	mov r1, r9	@ 0003ba4c 4946
.org 0x3ba4e
	strb r0, [r1, #14]	@ 0003ba4e 8873
.org 0x3ba50
	add sp, #8	@ 0003ba50 02b0
.org 0x3ba52
	pop {r3, r4}	@ 0003ba52 18bc
.org 0x3ba54
	mov r8, r3	@ 0003ba54 9846
.org 0x3ba56
	mov r9, r4	@ 0003ba56 a146
.org 0x3ba58
	pop {r4, r5, r6, r7}	@ 0003ba58 f0bc
.org 0x3ba5a
	pop {r0}	@ 0003ba5a 01bc
.org 0x3ba5c
	bx r0	@ 0003ba5c 0047
