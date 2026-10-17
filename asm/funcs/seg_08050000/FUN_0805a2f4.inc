@ FUN_0805a2f4  entry 0x0805a2f4  size 72
.thumb
.org 0x5a2f4
FUN_0805a2f4:
	push {r4, lr}	@ 0005a2f4 10b5
.org 0x5a2f6
	adds r4, r0, #0	@ 0005a2f6 041c
.org 0x5a2f8
	ldrb r0, [r4, #15]	@ 0005a2f8 e07b
.org 0x5a2fa
	cmp r0, #0	@ 0005a2fa 0028
.org 0x5a2fc
	bne.n 0x5a31e	@ 0005a2fc 0fd1
.org 0x5a2fe
	adds r0, r4, #0	@ 0005a2fe 201c
.org 0x5a300
	adds r0, #116	@ 0005a300 7430
.org 0x5a302
	ldr r1, [pc, #56]	@ 0005a302 0e49
.org 0x5a304
	bl 0x5784	@ 0005a304 abf73efa
.org 0x5a308
	ldr r1, [pc, #52]	@ 0005a308 0d49
.org 0x5a30a
	adds r0, r4, #0	@ 0005a30a 201c
.org 0x5a30c
	bl 0x1cf00	@ 0005a30c c2f7f8fd
.org 0x5a310
	adds r1, r4, #0	@ 0005a310 211c
.org 0x5a312
	adds r1, #189	@ 0005a312 bd31
.org 0x5a314
	movs r0, #1	@ 0005a314 0120
.org 0x5a316
	strb r0, [r1, #0]	@ 0005a316 0870
.org 0x5a318
	ldrb r0, [r4, #15]	@ 0005a318 e07b
.org 0x5a31a
	adds r0, #1	@ 0005a31a 0130
.org 0x5a31c
	strb r0, [r4, #15]	@ 0005a31c e073
.org 0x5a31e
	adds r0, r4, #0	@ 0005a31e 201c
.org 0x5a320
	bl 0x1cff0	@ 0005a320 c2f766fe
.org 0x5a324
	adds r0, r4, #0	@ 0005a324 201c
.org 0x5a326
	adds r0, #115	@ 0005a326 7330
.org 0x5a328
	ldrb r0, [r0, #0]	@ 0005a328 0078
.org 0x5a32a
	cmp r0, #3	@ 0005a32a 0328
.org 0x5a32c
	bne.n 0x5a336	@ 0005a32c 03d1
.org 0x5a32e
	movs r1, #0	@ 0005a32e 0021
.org 0x5a330
	movs r0, #1	@ 0005a330 0120
.org 0x5a332
	strb r0, [r4, #14]	@ 0005a332 a073
.org 0x5a334
	strb r1, [r4, #15]	@ 0005a334 e173
.org 0x5a336
	pop {r4}	@ 0005a336 10bc
.org 0x5a338
	pop {r0}	@ 0005a338 01bc
.org 0x5a33a
	bx r0	@ 0005a33a 0047
