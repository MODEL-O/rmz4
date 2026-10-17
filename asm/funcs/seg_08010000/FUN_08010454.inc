@ FUN_08010454  entry 0x08010454  size 138
.thumb
.org 0x10454
FUN_08010454:
	push {r4, r5, r6, lr}	@ 00010454 70b5
.org 0x10456
	adds r5, r0, #0	@ 00010456 051c
.org 0x10458
	ldrb r6, [r5, #14]	@ 00010458 ae7b
.org 0x1045a
	cmp r6, #0	@ 0001045a 002e
.org 0x1045c
	bne.n 0x104e8	@ 0001045c 44d1
.org 0x1045e
	ldr r0, [r5, #92]	@ 0001045e e86d
.org 0x10460
	lsls r0, r0, #16	@ 00010460 0004
.org 0x10462
	lsrs r0, r0, #20	@ 00010462 000d
.org 0x10464
	lsls r2, r0, #1	@ 00010464 4200
.org 0x10466
	ldr r3, [pc, #68]	@ 00010466 114b
.org 0x10468
	adds r2, r2, r3	@ 00010468 d218
.org 0x1046a
	ldr r4, [r5, #100]	@ 0001046a 6c6e
.org 0x1046c
	movs r1, #71	@ 0001046c 4721
.org 0x1046e
	orrs r4, r1	@ 0001046e 0c43
.org 0x10470
	strh r4, [r2, #0]	@ 00010470 1480
.org 0x10472
	lsls r0, r0, #2	@ 00010472 8000
.org 0x10474
	adds r3, #8	@ 00010474 0833
.org 0x10476
	adds r0, r0, r3	@ 00010476 c018
.org 0x10478
	str r6, [r0, #0]	@ 00010478 0660
.org 0x1047a
	ldr r0, [pc, #52]	@ 0001047a 0d48
.org 0x1047c
	ldr r1, [pc, #52]	@ 0001047c 0d49
.org 0x1047e
	adds r0, r0, r1	@ 0001047e 4018
.org 0x10480
	ldrb r1, [r0, #0]	@ 00010480 0178
.org 0x10482
	movs r0, #15	@ 00010482 0f20
.org 0x10484
	ands r0, r1	@ 00010484 0840
.org 0x10486
	cmp r0, #3	@ 00010486 0328
.org 0x10488
	bne.n 0x104c0	@ 00010488 1ad1
.org 0x1048a
	ldr r0, [pc, #44]	@ 0001048a 0b48
.org 0x1048c
	ldr r0, [r0, #0]	@ 0001048c 0068
.org 0x1048e
	ldr r1, [pc, #44]	@ 0001048e 0b49
.org 0x10490
	adds r0, r0, r1	@ 00010490 4018
.org 0x10492
	movs r1, #248	@ 00010492 f821
.org 0x10494
	lsls r1, r1, #5	@ 00010494 4901
.org 0x10496
	ands r4, r1	@ 00010496 0c40
.org 0x10498
	lsls r1, r4, #3	@ 00010498 e100
.org 0x1049a
	movs r2, #192	@ 0001049a c022
.org 0x1049c
	lsls r2, r2, #19	@ 0001049c d204
.org 0x1049e
	adds r1, r1, r2	@ 0001049e 8918
.org 0x104a0
	movs r2, #128	@ 000104a0 8022
.org 0x104a2
	lsls r2, r2, #2	@ 000104a2 9200
.org 0x104a4
	bl 0x128be0	@ 000104a4 18f19cfb
.org 0x104a8
	b.n 0x104de	@ 000104a8 19e0
.org 0x104aa
	.byte 0x00	@ 000104aa data
.org 0x104ab
	.byte 0x00	@ 000104ab data
.org 0x104ac
	.byte 0x04,0x0a,0x00,0x02	@ 000104ac data
.org 0x104b0
	.byte 0xb0,0x0a,0x00,0x02	@ 000104b0 data
.org 0x104b4
	.byte 0x10,0xc0,0x02,0x00	@ 000104b4 data
.org 0x104b8
	.byte 0x80,0xc1,0xb2,0x08	@ 000104b8 data
.org 0x104bc
	.byte 0x88,0xc1,0xb2,0x08	@ 000104bc data
.org 0x104c0
	ldr r0, [pc, #48]	@ 000104c0 0c48
.org 0x104c2
	ldr r0, [r0, #0]	@ 000104c2 0068
.org 0x104c4
	ldr r1, [pc, #48]	@ 000104c4 0c49
.org 0x104c6
	adds r0, r0, r1	@ 000104c6 4018
.org 0x104c8
	movs r1, #248	@ 000104c8 f821
.org 0x104ca
	lsls r1, r1, #5	@ 000104ca 4901
.org 0x104cc
	ands r4, r1	@ 000104cc 0c40
.org 0x104ce
	lsls r1, r4, #3	@ 000104ce e100
.org 0x104d0
	movs r2, #192	@ 000104d0 c022
.org 0x104d2
	lsls r2, r2, #19	@ 000104d2 d204
.org 0x104d4
	adds r1, r1, r2	@ 000104d4 8918
.org 0x104d6
	movs r2, #128	@ 000104d6 8022
.org 0x104d8
	lsls r2, r2, #2	@ 000104d8 9200
.org 0x104da
	bl 0x128be0	@ 000104da 18f181fb
