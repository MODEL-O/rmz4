@ FUN_080374f4  entry 0x080374f4  size 92
.thumb
.org 0x374f4
FUN_080374f4:
	push {r4, r5, r6, lr}	@ 000374f4 70b5
.org 0x374f6
	adds r5, r0, #0	@ 000374f6 051c
.org 0x374f8
	movs r0, #129	@ 000374f8 8120
.org 0x374fa
	lsls r0, r0, #1	@ 000374fa 4000
.org 0x374fc
	adds r6, r5, r0	@ 000374fc 2e18
.org 0x374fe
	ldrb r0, [r6, #0]	@ 000374fe 3078
.org 0x37500
	cmp r0, #0	@ 00037500 0028
.org 0x37502
	bne.n 0x3751a	@ 00037502 0ad1
.org 0x37504
	ldr r1, [pc, #72]	@ 00037504 1249
.org 0x37506
	adds r0, r5, #0	@ 00037506 281c
.org 0x37508
	bl 0x1cf00	@ 00037508 e5f7fafc
.org 0x3750c
	ldr r0, [pc, #68]	@ 0003750c 1148
.org 0x3750e
	adds r1, r5, r0	@ 0003750e 2918
.org 0x37510
	movs r0, #16	@ 00037510 1020
.org 0x37512
	strb r0, [r1, #0]	@ 00037512 0870
.org 0x37514
	ldrb r0, [r6, #0]	@ 00037514 3078
.org 0x37516
	adds r0, #1	@ 00037516 0130
.org 0x37518
	strb r0, [r6, #0]	@ 00037518 3070
.org 0x3751a
	ldr r4, [pc, #52]	@ 0003751a 0d4c
.org 0x3751c
	adds r0, r5, #0	@ 0003751c 281c
.org 0x3751e
	adds r1, r4, #0	@ 0003751e 211c
.org 0x37520
	bl 0x3a3b0	@ 00037520 02f046ff
.org 0x37524
	adds r0, r5, #0	@ 00037524 281c
.org 0x37526
	adds r1, r4, #0	@ 00037526 211c
.org 0x37528
	bl 0x3a3f0	@ 00037528 02f062ff
.org 0x3752c
	ldr r0, [pc, #36]	@ 0003752c 0948
.org 0x3752e
	adds r1, r5, r0	@ 0003752e 2918
.org 0x37530
	ldrb r0, [r1, #0]	@ 00037530 0878
.org 0x37532
	subs r0, #1	@ 00037532 0138
.org 0x37534
	strb r0, [r1, #0]	@ 00037534 0870
.org 0x37536
	lsls r0, r0, #24	@ 00037536 0006
.org 0x37538
	lsrs r0, r0, #24	@ 00037538 000e
.org 0x3753a
	cmp r0, #255	@ 0003753a ff28
.org 0x3753c
	bne.n 0x3754a	@ 0003753c 05d1
.org 0x3753e
	ldr r0, [pc, #24]	@ 0003753e 0648
.org 0x37540
	adds r1, r5, r0	@ 00037540 2918
.org 0x37542
	movs r0, #5	@ 00037542 0520
.org 0x37544
	strb r0, [r1, #0]	@ 00037544 0870
.org 0x37546
	movs r0, #0	@ 00037546 0020
.org 0x37548
	strb r0, [r6, #0]	@ 00037548 3070
.org 0x3754a
	pop {r4, r5, r6}	@ 0003754a 70bc
.org 0x3754c
	pop {r0}	@ 0003754c 01bc
.org 0x3754e
	bx r0	@ 0003754e 0047
