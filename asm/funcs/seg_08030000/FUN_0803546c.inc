@ FUN_0803546c  entry 0x0803546c  size 82
.thumb
.org 0x3546c
FUN_0803546c:
	push {r4, lr}	@ 0003546c 10b5
.org 0x3546e
	adds r4, r0, #0	@ 0003546e 041c
.org 0x35470
	adds r0, #180	@ 00035470 b430
.org 0x35472
	ldrb r0, [r0, #12]	@ 00035472 007b
.org 0x35474
	cmp r0, #0	@ 00035474 0028
.org 0x35476
	bne.n 0x35488	@ 00035476 07d1
.org 0x35478
	ldr r0, [pc, #8]	@ 00035478 0248
.org 0x3547a
	adds r2, r4, r0	@ 0003547a 2218
.org 0x3547c
	ldrb r0, [r2, #0]	@ 0003547c 1078
.org 0x3547e
	movs r1, #16	@ 0003547e 1021
.org 0x35480
	b.n 0x35490	@ 00035480 06e0
.org 0x35482
	.byte 0x00	@ 00035482 data
.org 0x35483
	.byte 0x00	@ 00035483 data
.org 0x35484
	.byte 0x53,0x01,0x00,0x00	@ 00035484 data
.org 0x35488
	ldr r1, [pc, #40]	@ 00035488 0a49
.org 0x3548a
	adds r2, r4, r1	@ 0003548a 6218
.org 0x3548c
	ldrb r0, [r2, #0]	@ 0003548c 1078
.org 0x3548e
	movs r1, #32	@ 0003548e 2021
.org 0x35490
	orrs r0, r1	@ 00035490 0843
.org 0x35492
	strb r0, [r2, #0]	@ 00035492 1070
.org 0x35494
	ldr r1, [pc, #32]	@ 00035494 0849
.org 0x35496
	adds r0, r4, #0	@ 00035496 201c
.org 0x35498
	movs r2, #1	@ 00035498 0122
.org 0x3549a
	movs r3, #2	@ 0003549a 0223
.org 0x3549c
	bl 0x1cfc8	@ 0003549c e7f794fd
.org 0x354a0
	movs r2, #170	@ 000354a0 aa22
.org 0x354a2
	lsls r2, r2, #1	@ 000354a2 5200
.org 0x354a4
	adds r0, r4, r2	@ 000354a4 a018
.org 0x354a6
	ldrb r0, [r0, #0]	@ 000354a6 0078
.org 0x354a8
	cmp r0, #3	@ 000354a8 0328
.org 0x354aa
	bne.n 0x354bc	@ 000354aa 07d1
.org 0x354ac
	subs r2, #83	@ 000354ac 533a
.org 0x354ae
	adds r1, r4, r2	@ 000354ae a118
.org 0x354b0
	b.n 0x354c6	@ 000354b0 09e0
.org 0x354b2
	.byte 0x00	@ 000354b2 data
.org 0x354b3
	.byte 0x00	@ 000354b3 data
.org 0x354b4
	.byte 0x53,0x01,0x00,0x00	@ 000354b4 data
.org 0x354b8
	.byte 0x01,0x0a,0x00,0x00	@ 000354b8 data
.org 0x354bc
	cmp r0, #2	@ 000354bc 0228
