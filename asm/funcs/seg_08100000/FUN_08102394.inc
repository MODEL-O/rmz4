@ FUN_08102394  entry 0x08102394  size 90
.thumb
.org 0x102394
FUN_08102394:
	push {r4, lr}	@ 00102394 10b5
.org 0x102396
	adds r4, r0, #0	@ 00102396 041c
.org 0x102398
	ldrb r0, [r4, #14]	@ 00102398 a07b
.org 0x10239a
	cmp r0, #0	@ 0010239a 0028
.org 0x10239c
	bne.n 0x1023cc	@ 0010239c 16d1
.org 0x10239e
	adds r0, r4, #0	@ 0010239e 201c
.org 0x1023a0
	adds r0, #190	@ 001023a0 be30
.org 0x1023a2
	ldrh r1, [r0, #0]	@ 001023a2 0188
.org 0x1023a4
	adds r0, r4, #0	@ 001023a4 201c
.org 0x1023a6
	bl 0x1cf00	@ 001023a6 1af7abfd
.org 0x1023aa
	ldr r2, [pc, #68]	@ 001023aa 114a
.org 0x1023ac
	ldr r1, [r2, #0]	@ 001023ac 1168
.org 0x1023ae
	ldr r0, [pc, #68]	@ 001023ae 1148
.org 0x1023b0
	muls r0, r1	@ 001023b0 4843
.org 0x1023b2
	ldr r1, [pc, #68]	@ 001023b2 1149
.org 0x1023b4
	adds r0, r0, r1	@ 001023b4 4018
.org 0x1023b6
	lsls r0, r0, #1	@ 001023b6 4000
.org 0x1023b8
	lsrs r1, r0, #1	@ 001023b8 4108
.org 0x1023ba
	str r1, [r2, #0]	@ 001023ba 1160
.org 0x1023bc
	lsrs r0, r0, #17	@ 001023bc 400c
.org 0x1023be
	movs r1, #63	@ 001023be 3f21
.org 0x1023c0
	ands r0, r1	@ 001023c0 0840
.org 0x1023c2
	adds r0, #32	@ 001023c2 2030
.org 0x1023c4
	strb r0, [r4, #18]	@ 001023c4 a074
.org 0x1023c6
	ldrb r0, [r4, #14]	@ 001023c6 a07b
.org 0x1023c8
	adds r0, #1	@ 001023c8 0130
.org 0x1023ca
	strb r0, [r4, #14]	@ 001023ca a073
.org 0x1023cc
	ldr r0, [r4, #92]	@ 001023cc e06d
.org 0x1023ce
	cmp r0, #0	@ 001023ce 0028
.org 0x1023d0
	beq.n 0x1023e8	@ 001023d0 0ad0
.org 0x1023d2
	ldrb r0, [r4, #18]	@ 001023d2 a07c
.org 0x1023d4
	subs r0, #1	@ 001023d4 0138
.org 0x1023d6
	strb r0, [r4, #18]	@ 001023d6 a074
.org 0x1023d8
	lsls r0, r0, #24	@ 001023d8 0006
.org 0x1023da
	lsrs r0, r0, #24	@ 001023da 000e
.org 0x1023dc
	cmp r0, #255	@ 001023dc ff28
.org 0x1023de
	bne.n 0x1023e8	@ 001023de 03d1
.org 0x1023e0
	movs r0, #1	@ 001023e0 0120
.org 0x1023e2
	strb r0, [r4, #13]	@ 001023e2 6073
.org 0x1023e4
	movs r0, #0	@ 001023e4 0020
.org 0x1023e6
	strb r0, [r4, #14]	@ 001023e6 a073
.org 0x1023e8
	pop {r4}	@ 001023e8 10bc
.org 0x1023ea
	pop {r0}	@ 001023ea 01bc
.org 0x1023ec
	bx r0	@ 001023ec 0047
