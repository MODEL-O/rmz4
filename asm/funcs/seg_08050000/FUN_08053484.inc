@ FUN_08053484  entry 0x08053484  size 60
.thumb
.org 0x53484
FUN_08053484:
	push {r4, lr}	@ 00053484 10b5
.org 0x53486
	adds r4, r0, #0	@ 00053486 041c
.org 0x53488
	ldrb r1, [r4, #15]	@ 00053488 e17b
.org 0x5348a
	cmp r1, #0	@ 0005348a 0029
.org 0x5348c
	bne.n 0x534a0	@ 0005348c 08d1
.org 0x5348e
	adds r0, #196	@ 0005348e c430
.org 0x53490
	ldr r0, [r0, #0]	@ 00053490 0068
.org 0x53492
	adds r0, #180	@ 00053492 b430
.org 0x53494
	strb r1, [r0, #0]	@ 00053494 0170
.org 0x53496
	movs r0, #48	@ 00053496 3020
.org 0x53498
	strb r0, [r4, #18]	@ 00053498 a074
.org 0x5349a
	ldrb r0, [r4, #15]	@ 0005349a e07b
.org 0x5349c
	adds r0, #1	@ 0005349c 0130
.org 0x5349e
	strb r0, [r4, #15]	@ 0005349e e073
.org 0x534a0
	adds r0, r4, #0	@ 000534a0 201c
.org 0x534a2
	bl 0x1cff0	@ 000534a2 c9f7a5fd
.org 0x534a6
	ldrb r0, [r4, #18]	@ 000534a6 a07c
.org 0x534a8
	subs r0, #1	@ 000534a8 0138
.org 0x534aa
	strb r0, [r4, #18]	@ 000534aa a074
.org 0x534ac
	lsls r0, r0, #24	@ 000534ac 0006
.org 0x534ae
	lsrs r1, r0, #24	@ 000534ae 010e
.org 0x534b0
	cmp r1, #0	@ 000534b0 0029
.org 0x534b2
	bne.n 0x534ba	@ 000534b2 02d1
.org 0x534b4
	movs r0, #4	@ 000534b4 0420
.org 0x534b6
	strb r0, [r4, #14]	@ 000534b6 a073
.org 0x534b8
	strb r1, [r4, #15]	@ 000534b8 e173
.org 0x534ba
	pop {r4}	@ 000534ba 10bc
.org 0x534bc
	pop {r0}	@ 000534bc 01bc
.org 0x534be
	bx r0	@ 000534be 0047
