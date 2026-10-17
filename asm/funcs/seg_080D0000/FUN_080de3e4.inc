@ FUN_080de3e4  entry 0x080de3e4  size 96
.thumb
.org 0xde3e4
FUN_080de3e4:
	push {r4, lr}	@ 000de3e4 10b5
.org 0xde3e6
	adds r4, r0, #0	@ 000de3e6 041c
.org 0xde3e8
	bl 0x1cff0	@ 000de3e8 3ef702fe
.org 0xde3ec
	ldrb r0, [r4, #18]	@ 000de3ec a07c
.org 0xde3ee
	adds r0, #1	@ 000de3ee 0130
.org 0xde3f0
	strb r0, [r4, #18]	@ 000de3f0 a074
.org 0xde3f2
	movs r1, #1	@ 000de3f2 0121
.org 0xde3f4
	ands r0, r1	@ 000de3f4 0840
.org 0xde3f6
	cmp r0, #0	@ 000de3f6 0028
.org 0xde3f8
	beq.n 0xde400	@ 000de3f8 02d0
.org 0xde3fa
	ldrb r0, [r4, #10]	@ 000de3fa a07a
.org 0xde3fc
	orrs r0, r1	@ 000de3fc 0843
.org 0xde3fe
	b.n 0xde406	@ 000de3fe 02e0
.org 0xde400
	ldrb r1, [r4, #10]	@ 000de400 a17a
.org 0xde402
	movs r0, #254	@ 000de402 fe20
.org 0xde404
	ands r0, r1	@ 000de404 0840
.org 0xde406
	strb r0, [r4, #10]	@ 000de406 a072
.org 0xde408
	ldr r0, [r4, #84]	@ 000de408 606d
.org 0xde40a
	ldr r1, [r4, #92]	@ 000de40a e16d
.org 0xde40c
	adds r0, r0, r1	@ 000de40c 4018
.org 0xde40e
	str r0, [r4, #84]	@ 000de40e 6065
.org 0xde410
	ldr r0, [r4, #88]	@ 000de410 a06d
.org 0xde412
	ldr r1, [r4, #96]	@ 000de412 216e
.org 0xde414
	adds r0, r0, r1	@ 000de414 4018
.org 0xde416
	str r0, [r4, #88]	@ 000de416 a065
.org 0xde418
	adds r0, r4, #0	@ 000de418 201c
.org 0xde41a
	adds r0, #115	@ 000de41a 7330
.org 0xde41c
	ldrb r2, [r0, #0]	@ 000de41c 0278
.org 0xde41e
	cmp r2, #3	@ 000de41e 032a
.org 0xde420
	bne.n 0xde43e	@ 000de420 0dd1
.org 0xde422
	ldrb r1, [r4, #10]	@ 000de422 a17a
.org 0xde424
	movs r0, #254	@ 000de424 fe20
.org 0xde426
	ands r0, r1	@ 000de426 0840
.org 0xde428
	movs r1, #253	@ 000de428 fd21
.org 0xde42a
	ands r0, r1	@ 000de42a 0840
.org 0xde42c
	strb r0, [r4, #10]	@ 000de42c a072
.org 0xde42e
	ldr r1, [pc, #20]	@ 000de42e 0549
.org 0xde430
	ldrb r0, [r4, #9]	@ 000de430 607a
.org 0xde432
	lsls r0, r0, #2	@ 000de432 8000
.org 0xde434
	adds r0, r0, r1	@ 000de434 4018
.org 0xde436
	str r2, [r4, #12]	@ 000de436 e260
.org 0xde438
	ldr r0, [r0, #0]	@ 000de438 0068
.org 0xde43a
	ldr r0, [r0, #12]	@ 000de43a c068
.org 0xde43c
	str r0, [r4, #20]	@ 000de43c 6061
.org 0xde43e
	pop {r4}	@ 000de43e 10bc
.org 0xde440
	pop {r0}	@ 000de440 01bc
.org 0xde442
	bx r0	@ 000de442 0047
