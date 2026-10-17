@ FUN_08040184  entry 0x08040184  size 110
.thumb
.org 0x40184
FUN_08040184:
	push {r4, r5, lr}	@ 00040184 30b5
.org 0x40186
	adds r5, r0, #0	@ 00040186 051c
.org 0x40188
	bl 0x1cc9c	@ 00040188 dcf788fd
.org 0x4018c
	adds r0, r5, #0	@ 0004018c 281c
.org 0x4018e
	bl 0x1ceec	@ 0004018e dcf7adfe
.org 0x40192
	ldrb r1, [r5, #10]	@ 00040192 a97a
.org 0x40194
	movs r0, #1	@ 00040194 0120
.org 0x40196
	orrs r0, r1	@ 00040196 0843
.org 0x40198
	movs r1, #2	@ 00040198 0221
.org 0x4019a
	orrs r0, r1	@ 0004019a 0843
.org 0x4019c
	strb r0, [r5, #10]	@ 0004019c a872
.org 0x4019e
	ldr r1, [pc, #60]	@ 0004019e 0f49
.org 0x401a0
	adds r0, r5, #0	@ 000401a0 281c
.org 0x401a2
	bl 0x1cf00	@ 000401a2 dcf7adfe
.org 0x401a6
	adds r0, r5, #0	@ 000401a6 281c
.org 0x401a8
	bl 0x1cff0	@ 000401a8 dcf722ff
.org 0x401ac
	ldrb r1, [r5, #10]	@ 000401ac a97a
.org 0x401ae
	movs r0, #4	@ 000401ae 0420
.org 0x401b0
	orrs r0, r1	@ 000401b0 0843
.org 0x401b2
	strb r0, [r5, #10]	@ 000401b2 a872
.org 0x401b4
	adds r4, r5, #0	@ 000401b4 2c1c
.org 0x401b6
	adds r4, #116	@ 000401b6 7434
.org 0x401b8
	ldr r1, [pc, #36]	@ 000401b8 0949
.org 0x401ba
	adds r2, r5, #0	@ 000401ba 2a1c
.org 0x401bc
	adds r2, #84	@ 000401bc 5432
.org 0x401be
	adds r0, r4, #0	@ 000401be 201c
.org 0x401c0
	movs r3, #8	@ 000401c0 0823
.org 0x401c2
	bl 0x5760	@ 000401c2 c5f7cdfa
.org 0x401c6
	str r5, [r4, #44]	@ 000401c6 e562
.org 0x401c8
	ldr r0, [pc, #24]	@ 000401c8 0648
.org 0x401ca
	str r0, [r4, #36]	@ 000401ca 6062
.org 0x401cc
	ldrb r1, [r5, #10]	@ 000401cc a97a
.org 0x401ce
	movs r0, #16	@ 000401ce 1020
.org 0x401d0
	ands r0, r1	@ 000401d0 0840
.org 0x401d2
	cmp r0, #0	@ 000401d2 0028
.org 0x401d4
	beq.n 0x401e8	@ 000401d4 08d0
.org 0x401d6
	movs r0, #240	@ 000401d6 f020
.org 0x401d8
	lsls r0, r0, #2	@ 000401d8 8000
.org 0x401da
	b.n 0x401ea	@ 000401da 06e0
.org 0x401dc
	.byte 0x08,0x81,0x00,0x00	@ 000401dc data
.org 0x401e0
	.byte 0xf0,0x54,0x85,0x08	@ 000401e0 data
.org 0x401e4
	.byte 0x39,0x06,0x04,0x08	@ 000401e4 data
.org 0x401e8
	ldr r0, [pc, #20]	@ 000401e8 0548
.org 0x401ea
	str r0, [r5, #92]	@ 000401ea e865
.org 0x401ec
	ldr r0, [pc, #20]	@ 000401ec 0548
.org 0x401ee
	str r0, [r5, #96]	@ 000401ee 2866
.org 0x401f0
	movs r0, #64	@ 000401f0 4020
