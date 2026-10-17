@ FUN_080ad39c  entry 0x080ad39c  size 196
.thumb
.org 0xad39c
FUN_080ad39c:
	push {r4, r5, r6, lr}	@ 000ad39c 70b5
.org 0xad39e
	sub sp, #16	@ 000ad39e 84b0
.org 0xad3a0
	adds r4, r0, #0	@ 000ad3a0 041c
.org 0xad3a2
	mov r0, sp	@ 000ad3a2 6846
.org 0xad3a4
	ldr r1, [pc, #184]	@ 000ad3a4 2e49
.org 0xad3a6
	ldmia r1!, {r2, r3, r5}	@ 000ad3a6 2cc9
.org 0xad3a8
	stmia r0!, {r2, r3, r5}	@ 000ad3a8 2cc0
.org 0xad3aa
	ldr r1, [r1, #0]	@ 000ad3aa 0968
.org 0xad3ac
	str r1, [r0, #0]	@ 000ad3ac 0160
.org 0xad3ae
	ldr r5, [r4, #40]	@ 000ad3ae a56a
.org 0xad3b0
	ldrb r6, [r4, #17]	@ 000ad3b0 667c
.org 0xad3b2
	ldrb r3, [r4, #15]	@ 000ad3b2 e37b
.org 0xad3b4
	cmp r3, #0	@ 000ad3b4 002b
.org 0xad3b6
	bne.n 0xad41c	@ 000ad3b6 31d1
.org 0xad3b8
	adds r2, r4, #0	@ 000ad3b8 221c
.org 0xad3ba
	adds r2, #184	@ 000ad3ba b832
.org 0xad3bc
	ldr r1, [r2, #0]	@ 000ad3bc 1168
.org 0xad3be
	cmp r1, #0	@ 000ad3be 0029
.org 0xad3c0
	beq.n 0xad3d8	@ 000ad3c0 0ad0
.org 0xad3c2
	adds r1, #180	@ 000ad3c2 b431
.org 0xad3c4
	movs r0, #1	@ 000ad3c4 0120
.org 0xad3c6
	strb r0, [r1, #0]	@ 000ad3c6 0870
.org 0xad3c8
	str r3, [r2, #0]	@ 000ad3c8 1360
.org 0xad3ca
	adds r1, r5, #0	@ 000ad3ca 291c
.org 0xad3cc
	adds r1, #188	@ 000ad3cc bc31
.org 0xad3ce
	ldrb r0, [r1, #0]	@ 000ad3ce 0878
.org 0xad3d0
	cmp r0, #0	@ 000ad3d0 0028
.org 0xad3d2
	beq.n 0xad3d8	@ 000ad3d2 01d0
.org 0xad3d4
	adds r0, #255	@ 000ad3d4 ff30
.org 0xad3d6
	strb r0, [r1, #0]	@ 000ad3d6 0870
.org 0xad3d8
	adds r0, r4, #0	@ 000ad3d8 201c
.org 0xad3da
	movs r1, #5	@ 000ad3da 0521
.org 0xad3dc
	bl 0x1d3d0	@ 000ad3dc 6ff7f8ff
.org 0xad3e0
	adds r3, r5, #0	@ 000ad3e0 2b1c
.org 0xad3e2
	adds r3, #180	@ 000ad3e2 b433
.org 0xad3e4
	movs r0, #1	@ 000ad3e4 0120
.org 0xad3e6
	lsls r0, r6	@ 000ad3e6 b040
.org 0xad3e8
	ldrb r1, [r3, #0]	@ 000ad3e8 1978
.org 0xad3ea
	bics r1, r0	@ 000ad3ea 8143
.org 0xad3ec
	movs r2, #0	@ 000ad3ec 0022
.org 0xad3ee
	strb r1, [r3, #0]	@ 000ad3ee 1970
.org 0xad3f0
	adds r0, r4, #0	@ 000ad3f0 201c
.org 0xad3f2
	adds r0, #140	@ 000ad3f2 8c30
.org 0xad3f4
	str r2, [r0, #0]	@ 000ad3f4 0260
.org 0xad3f6
	adds r0, #4	@ 000ad3f6 0430
.org 0xad3f8
	str r2, [r0, #0]	@ 000ad3f8 0260
.org 0xad3fa
	adds r0, #4	@ 000ad3fa 0430
.org 0xad3fc
	strb r2, [r0, #0]	@ 000ad3fc 0270
.org 0xad3fe
	ldrb r1, [r4, #10]	@ 000ad3fe a17a
.org 0xad400
	movs r0, #251	@ 000ad400 fb20
.org 0xad402
	ands r0, r1	@ 000ad402 0840
.org 0xad404
	strb r0, [r4, #10]	@ 000ad404 a072
.org 0xad406
	lsls r0, r6, #2	@ 000ad406 b000
.org 0xad408
	add r0, sp	@ 000ad408 6844
.org 0xad40a
	ldrh r1, [r0, #0]	@ 000ad40a 0188
.org 0xad40c
	adds r0, r4, #0	@ 000ad40c 201c
.org 0xad40e
	bl 0x1cf00	@ 000ad40e 6ff777fd
.org 0xad412
	movs r0, #10	@ 000ad412 0a20
.org 0xad414
	strb r0, [r4, #18]	@ 000ad414 a074
.org 0xad416
	ldrb r0, [r4, #15]	@ 000ad416 e07b
.org 0xad418
	adds r0, #1	@ 000ad418 0130
.org 0xad41a
	strb r0, [r4, #15]	@ 000ad41a e073
.org 0xad41c
	adds r0, r4, #0	@ 000ad41c 201c
.org 0xad41e
	bl 0x1cff0	@ 000ad41e 6ff7e7fd
.org 0xad422
	ldrb r0, [r4, #18]	@ 000ad422 a07c
.org 0xad424
	subs r0, #1	@ 000ad424 0138
.org 0xad426
	strb r0, [r4, #18]	@ 000ad426 a074
.org 0xad428
	lsls r0, r0, #24	@ 000ad428 0006
.org 0xad42a
	cmp r0, #0	@ 000ad42a 0028
.org 0xad42c
	bne.n 0xad458	@ 000ad42c 14d1
.org 0xad42e
	movs r0, #42	@ 000ad42e 2a20
.org 0xad430
	bl 0x2b10	@ 000ad430 55f76efb
.org 0xad434
	adds r1, r4, #0	@ 000ad434 211c
.org 0xad436
	adds r1, #84	@ 000ad436 5431
.org 0xad438
	movs r0, #1	@ 000ad438 0120
.org 0xad43a
	bl 0xd0c88	@ 000ad43a 23f025fc
.org 0xad43e
	ldrb r1, [r4, #10]	@ 000ad43e a17a
.org 0xad440
	movs r0, #254	@ 000ad440 fe20
.org 0xad442
	ands r0, r1	@ 000ad442 0840
.org 0xad444
	strb r0, [r4, #10]	@ 000ad444 a072
.org 0xad446
	ldr r1, [pc, #28]	@ 000ad446 0749
.org 0xad448
	ldrb r0, [r4, #9]	@ 000ad448 607a
.org 0xad44a
	lsls r0, r0, #2	@ 000ad44a 8000
.org 0xad44c
	adds r0, r0, r1	@ 000ad44c 4018
.org 0xad44e
	movs r1, #4	@ 000ad44e 0421
.org 0xad450
	str r1, [r4, #12]	@ 000ad450 e160
.org 0xad452
	ldr r0, [r0, #0]	@ 000ad452 0068
.org 0xad454
	ldr r0, [r0, #16]	@ 000ad454 0069
.org 0xad456
	str r0, [r4, #20]	@ 000ad456 6061
.org 0xad458
	add sp, #16	@ 000ad458 04b0
.org 0xad45a
	pop {r4, r5, r6}	@ 000ad45a 70bc
.org 0xad45c
	pop {r0}	@ 000ad45c 01bc
.org 0xad45e
	bx r0	@ 000ad45e 0047
