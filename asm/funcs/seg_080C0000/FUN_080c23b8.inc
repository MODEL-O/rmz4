@ FUN_080c23b8  entry 0x080c23b8  size 96
.thumb
.org 0xc23b8
FUN_080c23b8:
	push {lr}	@ 000c23b8 00b5
.org 0xc23ba
	adds r2, r0, #0	@ 000c23ba 021c
.org 0xc23bc
	ldr r1, [r2, #92]	@ 000c23bc d16d
.org 0xc23be
	asrs r1, r1, #1	@ 000c23be 4910
.org 0xc23c0
	ldr r0, [r2, #84]	@ 000c23c0 506d
.org 0xc23c2
	adds r0, r0, r1	@ 000c23c2 4018
.org 0xc23c4
	str r0, [r2, #84]	@ 000c23c4 5065
.org 0xc23c6
	ldr r0, [r2, #88]	@ 000c23c6 906d
.org 0xc23c8
	ldr r1, [r2, #96]	@ 000c23c8 116e
.org 0xc23ca
	adds r0, r0, r1	@ 000c23ca 4018
.org 0xc23cc
	str r0, [r2, #88]	@ 000c23cc 9065
.org 0xc23ce
	adds r1, #64	@ 000c23ce 4031
.org 0xc23d0
	str r1, [r2, #96]	@ 000c23d0 1166
.org 0xc23d2
	ldrb r1, [r2, #18]	@ 000c23d2 917c
.org 0xc23d4
	movs r0, #1	@ 000c23d4 0120
.org 0xc23d6
	ands r0, r1	@ 000c23d6 0840
.org 0xc23d8
	cmp r0, #0	@ 000c23d8 0028
.org 0xc23da
	beq.n 0xc23e4	@ 000c23da 03d0
.org 0xc23dc
	ldrb r1, [r2, #10]	@ 000c23dc 917a
.org 0xc23de
	movs r0, #254	@ 000c23de fe20
.org 0xc23e0
	ands r0, r1	@ 000c23e0 0840
.org 0xc23e2
	b.n 0xc23ea	@ 000c23e2 02e0
.org 0xc23e4
	ldrb r0, [r2, #10]	@ 000c23e4 907a
.org 0xc23e6
	movs r1, #1	@ 000c23e6 0121
.org 0xc23e8
	orrs r0, r1	@ 000c23e8 0843
.org 0xc23ea
	strb r0, [r2, #10]	@ 000c23ea 9072
.org 0xc23ec
	ldrb r0, [r2, #18]	@ 000c23ec 907c
.org 0xc23ee
	subs r0, #1	@ 000c23ee 0138
.org 0xc23f0
	strb r0, [r2, #18]	@ 000c23f0 9074
.org 0xc23f2
	lsls r0, r0, #24	@ 000c23f2 0006
.org 0xc23f4
	lsrs r0, r0, #24	@ 000c23f4 000e
.org 0xc23f6
	cmp r0, #255	@ 000c23f6 ff28
.org 0xc23f8
	bne.n 0xc2414	@ 000c23f8 0cd1
.org 0xc23fa
	ldrb r1, [r2, #10]	@ 000c23fa 917a
.org 0xc23fc
	movs r0, #254	@ 000c23fc fe20
.org 0xc23fe
	ands r0, r1	@ 000c23fe 0840
.org 0xc2400
	strb r0, [r2, #10]	@ 000c2400 9072
.org 0xc2402
	ldr r1, [pc, #20]	@ 000c2402 0549
.org 0xc2404
	ldrb r0, [r2, #9]	@ 000c2404 507a
.org 0xc2406
	lsls r0, r0, #2	@ 000c2406 8000
.org 0xc2408
	adds r0, r0, r1	@ 000c2408 4018
.org 0xc240a
	movs r1, #4	@ 000c240a 0421
.org 0xc240c
	str r1, [r2, #12]	@ 000c240c d160
.org 0xc240e
	ldr r0, [r0, #0]	@ 000c240e 0068
.org 0xc2410
	ldr r0, [r0, #16]	@ 000c2410 0069
.org 0xc2412
	str r0, [r2, #20]	@ 000c2412 5061
.org 0xc2414
	pop {r0}	@ 000c2414 01bc
.org 0xc2416
	bx r0	@ 000c2416 0047
