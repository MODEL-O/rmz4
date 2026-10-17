@ FUN_08092320  entry 0x08092320  size 60
.thumb
.org 0x92320
FUN_08092320:
	push {r4, r5, lr}	@ 00092320 30b5
.org 0x92322
	adds r4, r0, #0	@ 00092322 041c
.org 0x92324
	adds r5, r4, #0	@ 00092324 251c
.org 0x92326
	adds r5, #180	@ 00092326 b435
.org 0x92328
	ldr r0, [r5, #0]	@ 00092328 2868
.org 0x9232a
	cmp r0, #0	@ 0009232a 0028
.org 0x9232c
	beq.n 0x92336	@ 0009232c 03d0
.org 0x9232e
	bl 0x2b3e4	@ 0009232e 99f759f8
.org 0x92332
	cmp r0, #0	@ 00092332 0028
.org 0x92334
	beq.n 0x92356	@ 00092334 0fd0
.org 0x92336
	adds r0, r4, #0	@ 00092336 201c
.org 0x92338
	adds r0, #116	@ 00092338 7430
.org 0x9233a
	ldr r1, [pc, #32]	@ 0009233a 0849
.org 0x9233c
	bl 0x5784	@ 0009233c 73f722fa
.org 0x92340
	movs r0, #0	@ 00092340 0020
.org 0x92342
	str r0, [r5, #0]	@ 00092342 2860
.org 0x92344
	adds r0, r4, #0	@ 00092344 201c
.org 0x92346
	bl 0x7f90c	@ 00092346 edf7e1fa
.org 0x9234a
	adds r1, r0, #0	@ 0009234a 011c
.org 0x9234c
	cmp r1, #0	@ 0009234c 0029
.org 0x9234e
	bne.n 0x92356	@ 0009234e 02d1
.org 0x92350
	movs r0, #4	@ 00092350 0420
.org 0x92352
	strb r0, [r4, #13]	@ 00092352 6073
.org 0x92354
	strb r1, [r4, #14]	@ 00092354 a173
.org 0x92356
	pop {r4, r5}	@ 00092356 30bc
.org 0x92358
	pop {r0}	@ 00092358 01bc
.org 0x9235a
	bx r0	@ 0009235a 0047
