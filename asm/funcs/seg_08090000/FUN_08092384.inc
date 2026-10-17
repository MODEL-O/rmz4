@ FUN_08092384  entry 0x08092384  size 98
.thumb
.org 0x92384
FUN_08092384:
	push {r4, lr}	@ 00092384 10b5
.org 0x92386
	adds r4, r0, #0	@ 00092386 041c
.org 0x92388
	ldrb r0, [r4, #14]	@ 00092388 a07b
.org 0x9238a
	cmp r0, #0	@ 0009238a 0028
.org 0x9238c
	beq.n 0x92394	@ 0009238c 02d0
.org 0x9238e
	cmp r0, #1	@ 0009238e 0128
.org 0x92390
	beq.n 0x923c6	@ 00092390 19d0
.org 0x92392
	b.n 0x923e0	@ 00092392 25e0
.org 0x92394
	movs r0, #30	@ 00092394 1e20
.org 0x92396
	strb r0, [r4, #18]	@ 00092396 a074
.org 0x92398
	adds r0, r4, #0	@ 00092398 201c
.org 0x9239a
	adds r0, #116	@ 0009239a 7430
.org 0x9239c
	ldr r1, [pc, #72]	@ 0009239c 1249
.org 0x9239e
	bl 0x5784	@ 0009239e 73f7f1f9
.org 0x923a2
	ldr r2, [pc, #72]	@ 000923a2 124a
.org 0x923a4
	ldrb r1, [r4, #10]	@ 000923a4 a17a
.org 0x923a6
	movs r0, #16	@ 000923a6 1020
.org 0x923a8
	ands r0, r1	@ 000923a8 0840
.org 0x923aa
	lsls r0, r0, #24	@ 000923aa 0006
.org 0x923ac
	lsrs r0, r0, #24	@ 000923ac 000e
.org 0x923ae
	negs r0, r0	@ 000923ae 4042
.org 0x923b0
	asrs r0, r0, #31	@ 000923b0 c017
.org 0x923b2
	movs r1, #2	@ 000923b2 0221
.org 0x923b4
	ands r0, r1	@ 000923b4 0840
.org 0x923b6
	adds r0, r0, r2	@ 000923b6 8018
.org 0x923b8
	ldrh r1, [r0, #0]	@ 000923b8 0188
.org 0x923ba
	adds r0, r4, #0	@ 000923ba 201c
.org 0x923bc
	bl 0x1cf00	@ 000923bc 8af7a0fd
.org 0x923c0
	ldrb r0, [r4, #14]	@ 000923c0 a07b
.org 0x923c2
	adds r0, #1	@ 000923c2 0130
.org 0x923c4
	strb r0, [r4, #14]	@ 000923c4 a073
.org 0x923c6
	ldrb r0, [r4, #18]	@ 000923c6 a07c
.org 0x923c8
	subs r0, #1	@ 000923c8 0138
.org 0x923ca
	strb r0, [r4, #18]	@ 000923ca a074
.org 0x923cc
	lsls r0, r0, #24	@ 000923cc 0006
.org 0x923ce
	lsrs r1, r0, #24	@ 000923ce 010e
.org 0x923d0
	cmp r1, #0	@ 000923d0 0029
.org 0x923d2
	bne.n 0x923da	@ 000923d2 02d1
.org 0x923d4
	movs r0, #3	@ 000923d4 0320
.org 0x923d6
	strb r0, [r4, #13]	@ 000923d6 6073
.org 0x923d8
	strb r1, [r4, #14]	@ 000923d8 a173
.org 0x923da
	adds r0, r4, #0	@ 000923da 201c
.org 0x923dc
	bl 0x1cff0	@ 000923dc 8af708fe
.org 0x923e0
	pop {r4}	@ 000923e0 10bc
.org 0x923e2
	pop {r0}	@ 000923e2 01bc
.org 0x923e4
	bx r0	@ 000923e4 0047
