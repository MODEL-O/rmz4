@ FUN_080943b0  entry 0x080943b0  size 120
.thumb
.org 0x943b0
FUN_080943b0:
	push {r4, lr}	@ 000943b0 10b5
.org 0x943b2
	sub sp, #8	@ 000943b2 82b0
.org 0x943b4
	adds r4, r0, #0	@ 000943b4 041c
.org 0x943b6
	ldrb r0, [r4, #10]	@ 000943b6 a07a
.org 0x943b8
	lsrs r2, r0, #4	@ 000943b8 0209
.org 0x943ba
	movs r3, #1	@ 000943ba 0123
.org 0x943bc
	ands r2, r3	@ 000943bc 1a40
.org 0x943be
	ldrb r0, [r4, #15]	@ 000943be e07b
.org 0x943c0
	cmp r0, #0	@ 000943c0 0028
.org 0x943c2
	bne.n 0x94400	@ 000943c2 1dd1
.org 0x943c4
	ldr r0, [r4, #84]	@ 000943c4 606d
.org 0x943c6
	ldr r1, [r4, #88]	@ 000943c6 a16d
.org 0x943c8
	str r0, [sp, #0]	@ 000943c8 0090
.org 0x943ca
	str r1, [sp, #4]	@ 000943ca 0191
.org 0x943cc
	lsls r0, r2, #1	@ 000943cc 5000
.org 0x943ce
	subs r0, r3, r0	@ 000943ce 181a
.org 0x943d0
	lsls r0, r0, #8	@ 000943d0 0002
.org 0x943d2
	ldr r1, [sp, #0]	@ 000943d2 0099
.org 0x943d4
	adds r0, r0, r1	@ 000943d4 4018
.org 0x943d6
	str r0, [sp, #0]	@ 000943d6 0090
.org 0x943d8
	ldr r0, [sp, #4]	@ 000943d8 0198
.org 0x943da
	ldr r1, [pc, #76]	@ 000943da 1349
.org 0x943dc
	adds r0, r0, r1	@ 000943dc 4018
.org 0x943de
	str r0, [sp, #4]	@ 000943de 0190
.org 0x943e0
	adds r0, r4, #0	@ 000943e0 201c
.org 0x943e2
	adds r0, #186	@ 000943e2 ba30
.org 0x943e4
	ldrb r3, [r0, #0]	@ 000943e4 0378
.org 0x943e6
	adds r0, r4, #0	@ 000943e6 201c
.org 0x943e8
	mov r1, sp	@ 000943e8 6946
.org 0x943ea
	bl 0xdb7ec	@ 000943ea 47f0fff9
.org 0x943ee
	ldr r1, [pc, #60]	@ 000943ee 0f49
.org 0x943f0
	adds r0, r4, #0	@ 000943f0 201c
.org 0x943f2
	bl 0x1cf00	@ 000943f2 88f785fd
.org 0x943f6
	movs r0, #24	@ 000943f6 1820
.org 0x943f8
	strb r0, [r4, #18]	@ 000943f8 a074
.org 0x943fa
	ldrb r0, [r4, #15]	@ 000943fa e07b
.org 0x943fc
	adds r0, #1	@ 000943fc 0130
.org 0x943fe
	strb r0, [r4, #15]	@ 000943fe e073
.org 0x94400
	adds r0, r4, #0	@ 00094400 201c
.org 0x94402
	bl 0x1cff0	@ 00094402 88f7f5fd
.org 0x94406
	adds r0, r4, #0	@ 00094406 201c
.org 0x94408
	bl 0x94a38	@ 00094408 00f016fb
.org 0x9440c
	ldrb r0, [r4, #18]	@ 0009440c a07c
.org 0x9440e
	subs r0, #1	@ 0009440e 0138
.org 0x94410
	strb r0, [r4, #18]	@ 00094410 a074
.org 0x94412
	lsls r0, r0, #24	@ 00094412 0006
.org 0x94414
	lsrs r1, r0, #24	@ 00094414 010e
.org 0x94416
	cmp r1, #0	@ 00094416 0029
.org 0x94418
	bne.n 0x94420	@ 00094418 02d1
.org 0x9441a
	movs r0, #3	@ 0009441a 0320
.org 0x9441c
	strb r0, [r4, #14]	@ 0009441c a073
.org 0x9441e
	strb r1, [r4, #15]	@ 0009441e e173
.org 0x94420
	add sp, #8	@ 00094420 02b0
.org 0x94422
	pop {r4}	@ 00094422 10bc
.org 0x94424
	pop {r0}	@ 00094424 01bc
.org 0x94426
	bx r0	@ 00094426 0047
