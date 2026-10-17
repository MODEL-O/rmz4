@ FUN_080444ec  entry 0x080444ec  size 136
.thumb
.org 0x444ec
FUN_080444ec:
	push {r4, r5, lr}	@ 000444ec 30b5
.org 0x444ee
	adds r5, r0, #0	@ 000444ee 051c
.org 0x444f0
	ldr r1, [pc, #104]	@ 000444f0 1a49
.org 0x444f2
	ldrb r0, [r5, #9]	@ 000444f2 687a
.org 0x444f4
	lsls r0, r0, #2	@ 000444f4 8000
.org 0x444f6
	adds r0, r0, r1	@ 000444f6 4018
.org 0x444f8
	movs r1, #1	@ 000444f8 0121
.org 0x444fa
	str r1, [r5, #12]	@ 000444fa e960
.org 0x444fc
	ldr r0, [r0, #0]	@ 000444fc 0068
.org 0x444fe
	ldr r0, [r0, #4]	@ 000444fe 4068
.org 0x44500
	str r0, [r5, #20]	@ 00044500 6861
.org 0x44502
	adds r0, r5, #0	@ 00044502 281c
.org 0x44504
	bl 0x1cc9c	@ 00044504 d8f7cafb
.org 0x44508
	adds r0, r5, #0	@ 00044508 281c
.org 0x4450a
	bl 0x1ceec	@ 0004450a d8f7effc
.org 0x4450e
	ldrb r1, [r5, #10]	@ 0004450e a97a
.org 0x44510
	movs r0, #1	@ 00044510 0120
.org 0x44512
	orrs r0, r1	@ 00044512 0843
.org 0x44514
	movs r1, #2	@ 00044514 0221
.org 0x44516
	orrs r0, r1	@ 00044516 0843
.org 0x44518
	strb r0, [r5, #10]	@ 00044518 a872
.org 0x4451a
	ldr r1, [pc, #68]	@ 0004451a 1149
.org 0x4451c
	adds r0, r5, #0	@ 0004451c 281c
.org 0x4451e
	bl 0x1cf00	@ 0004451e d8f7effc
.org 0x44522
	adds r0, r5, #0	@ 00044522 281c
.org 0x44524
	bl 0x1cff0	@ 00044524 d8f764fd
.org 0x44528
	ldrb r1, [r5, #10]	@ 00044528 a97a
.org 0x4452a
	movs r0, #4	@ 0004452a 0420
.org 0x4452c
	orrs r0, r1	@ 0004452c 0843
.org 0x4452e
	strb r0, [r5, #10]	@ 0004452e a872
.org 0x44530
	adds r4, r5, #0	@ 00044530 2c1c
.org 0x44532
	adds r4, #116	@ 00044532 7434
.org 0x44534
	ldr r1, [pc, #44]	@ 00044534 0b49
.org 0x44536
	adds r2, r5, #0	@ 00044536 2a1c
.org 0x44538
	adds r2, #84	@ 00044538 5432
.org 0x4453a
	adds r0, r4, #0	@ 0004453a 201c
.org 0x4453c
	movs r3, #8	@ 0004453c 0823
.org 0x4453e
	bl 0x5760	@ 0004453e c1f70ff9
.org 0x44542
	str r5, [r4, #44]	@ 00044542 e562
.org 0x44544
	ldr r0, [pc, #32]	@ 00044544 0848
.org 0x44546
	str r0, [r4, #36]	@ 00044546 6062
.org 0x44548
	ldrb r0, [r5, #17]	@ 00044548 687c
.org 0x4454a
	cmp r0, #0	@ 0004454a 0028
.org 0x4454c
	beq.n 0x4456c	@ 0004454c 0ed0
.org 0x4454e
	movs r0, #192	@ 0004454e c020
.org 0x44550
	lsls r0, r0, #2	@ 00044550 8000
.org 0x44552
	str r0, [r5, #96]	@ 00044552 2866
.org 0x44554
	ldr r0, [r5, #88]	@ 00044554 a86d
.org 0x44556
	movs r1, #240	@ 00044556 f021
.org 0x44558
	lsls r1, r1, #4	@ 00044558 0901
.org 0x4455a
	b.n 0x44574	@ 0004455a 0be0
.org 0x4455c
	.byte 0xf8,0x39,0x85,0x08	@ 0004455c data
.org 0x44560
	.byte 0x02,0x84,0x00,0x00	@ 00044560 data
.org 0x44564
	.byte 0xfc,0x5d,0x85,0x08	@ 00044564 data
.org 0x44568
	.byte 0x35,0x46,0x04,0x08	@ 00044568 data
.org 0x4456c
	ldr r0, [pc, #20]	@ 0004456c 0548
.org 0x4456e
	str r0, [r5, #96]	@ 0004456e 2866
.org 0x44570
	ldr r0, [r5, #88]	@ 00044570 a86d
.org 0x44572
	ldr r1, [pc, #20]	@ 00044572 0549
