@ FUN_0804435c  entry 0x0804435c  size 92
.thumb
.org 0x4435c
FUN_0804435c:
	push {r4, r5, lr}	@ 0004435c 30b5
.org 0x4435e
	adds r4, r0, #0	@ 0004435e 041c
.org 0x44360
	ldrb r5, [r4, #13]	@ 00044360 657b
.org 0x44362
	cmp r5, #0	@ 00044362 002d
.org 0x44364
	bne.n 0x44388	@ 00044364 10d1
.org 0x44366
	ldr r1, [pc, #80]	@ 00044366 1449
.org 0x44368
	bl 0x1cf00	@ 00044368 d8f7cafd
.org 0x4436c
	adds r0, r4, #0	@ 0004436c 201c
.org 0x4436e
	adds r0, #140	@ 0004436e 8c30
.org 0x44370
	str r5, [r0, #0]	@ 00044370 0560
.org 0x44372
	adds r0, #4	@ 00044372 0430
.org 0x44374
	str r5, [r0, #0]	@ 00044374 0560
.org 0x44376
	adds r0, #4	@ 00044376 0430
.org 0x44378
	strb r5, [r0, #0]	@ 00044378 0570
.org 0x4437a
	ldrb r1, [r4, #10]	@ 0004437a a17a
.org 0x4437c
	movs r0, #251	@ 0004437c fb20
.org 0x4437e
	ands r0, r1	@ 0004437e 0840
.org 0x44380
	strb r0, [r4, #10]	@ 00044380 a072
.org 0x44382
	ldrb r0, [r4, #13]	@ 00044382 607b
.org 0x44384
	adds r0, #1	@ 00044384 0130
.org 0x44386
	strb r0, [r4, #13]	@ 00044386 6073
.org 0x44388
	adds r0, r4, #0	@ 00044388 201c
.org 0x4438a
	bl 0x1cff0	@ 0004438a d8f731fe
.org 0x4438e
	adds r0, r4, #0	@ 0004438e 201c
.org 0x44390
	adds r0, #115	@ 00044390 7330
.org 0x44392
	ldrb r0, [r0, #0]	@ 00044392 0078
.org 0x44394
	cmp r0, #3	@ 00044394 0328
.org 0x44396
	bne.n 0x443b2	@ 00044396 0cd1
.org 0x44398
	ldrb r1, [r4, #10]	@ 00044398 a17a
.org 0x4439a
	movs r0, #254	@ 0004439a fe20
.org 0x4439c
	ands r0, r1	@ 0004439c 0840
.org 0x4439e
	strb r0, [r4, #10]	@ 0004439e a072
.org 0x443a0
	ldr r1, [pc, #24]	@ 000443a0 0649
.org 0x443a2
	ldrb r0, [r4, #9]	@ 000443a2 607a
.org 0x443a4
	lsls r0, r0, #2	@ 000443a4 8000
.org 0x443a6
	adds r0, r0, r1	@ 000443a6 4018
.org 0x443a8
	movs r1, #4	@ 000443a8 0421
.org 0x443aa
	str r1, [r4, #12]	@ 000443aa e160
.org 0x443ac
	ldr r0, [r0, #0]	@ 000443ac 0068
.org 0x443ae
	ldr r0, [r0, #16]	@ 000443ae 0069
.org 0x443b0
	str r0, [r4, #20]	@ 000443b0 6061
.org 0x443b2
	pop {r4, r5}	@ 000443b2 30bc
.org 0x443b4
	pop {r0}	@ 000443b4 01bc
.org 0x443b6
	bx r0	@ 000443b6 0047
