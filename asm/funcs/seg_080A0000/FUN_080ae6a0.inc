@ FUN_080ae6a0  entry 0x080ae6a0  size 100
.thumb
.org 0xae6a0
FUN_080ae6a0:
	push {r4, r5, lr}	@ 000ae6a0 30b5
.org 0xae6a2
	adds r4, r0, #0	@ 000ae6a2 041c
.org 0xae6a4
	ldrb r5, [r4, #14]	@ 000ae6a4 a57b
.org 0xae6a6
	cmp r5, #0	@ 000ae6a6 002d
.org 0xae6a8
	bne.n 0xae6c2	@ 000ae6a8 0bd1
.org 0xae6aa
	ldr r1, [pc, #88]	@ 000ae6aa 1649
.org 0xae6ac
	bl 0x1cf00	@ 000ae6ac 6ef728fc
.org 0xae6b0
	adds r0, r4, #0	@ 000ae6b0 201c
.org 0xae6b2
	adds r0, #116	@ 000ae6b2 7430
.org 0xae6b4
	ldr r1, [pc, #80]	@ 000ae6b4 1449
.org 0xae6b6
	bl 0x5784	@ 000ae6b6 57f765f8
.org 0xae6ba
	str r5, [r4, #96]	@ 000ae6ba 2566
.org 0xae6bc
	ldrb r0, [r4, #14]	@ 000ae6bc a07b
.org 0xae6be
	adds r0, #1	@ 000ae6be 0130
.org 0xae6c0
	strb r0, [r4, #14]	@ 000ae6c0 a073
.org 0xae6c2
	adds r0, r4, #0	@ 000ae6c2 201c
.org 0xae6c4
	bl 0x1cff0	@ 000ae6c4 6ef794fc
.org 0xae6c8
	ldr r1, [r4, #88]	@ 000ae6c8 a16d
.org 0xae6ca
	ldr r0, [r4, #96]	@ 000ae6ca 206e
.org 0xae6cc
	adds r1, r1, r0	@ 000ae6cc 0918
.org 0xae6ce
	str r1, [r4, #88]	@ 000ae6ce a165
.org 0xae6d0
	adds r0, #64	@ 000ae6d0 4030
.org 0xae6d2
	str r0, [r4, #96]	@ 000ae6d2 2066
.org 0xae6d4
	ldr r0, [r4, #84]	@ 000ae6d4 606d
.org 0xae6d6
	bl 0x7020	@ 000ae6d6 58f7a3fc
.org 0xae6da
	lsls r0, r0, #16	@ 000ae6da 0004
.org 0xae6dc
	cmp r0, #0	@ 000ae6dc 0028
.org 0xae6de
	beq.n 0xae6fe	@ 000ae6de 0ed0
.org 0xae6e0
	movs r0, #63	@ 000ae6e0 3f20
.org 0xae6e2
	bl 0x2b10	@ 000ae6e2 54f715fa
.org 0xae6e6
	ldr r1, [pc, #36]	@ 000ae6e6 0949
.org 0xae6e8
	ldrb r0, [r4, #9]	@ 000ae6e8 607a
.org 0xae6ea
	lsls r0, r0, #2	@ 000ae6ea 8000
.org 0xae6ec
	adds r0, r0, r1	@ 000ae6ec 4018
.org 0xae6ee
	movs r1, #2	@ 000ae6ee 0221
.org 0xae6f0
	str r1, [r4, #12]	@ 000ae6f0 e160
.org 0xae6f2
	ldr r0, [r0, #0]	@ 000ae6f2 0068
.org 0xae6f4
	ldr r0, [r0, #8]	@ 000ae6f4 8068
.org 0xae6f6
	str r0, [r4, #20]	@ 000ae6f6 6061
.org 0xae6f8
	adds r0, r4, #0	@ 000ae6f8 201c
.org 0xae6fa
	bl 0xae25c	@ 000ae6fa fff7affd
.org 0xae6fe
	pop {r4, r5}	@ 000ae6fe 30bc
.org 0xae700
	pop {r0}	@ 000ae700 01bc
.org 0xae702
	bx r0	@ 000ae702 0047
