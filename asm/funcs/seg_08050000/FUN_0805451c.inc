@ FUN_0805451c  entry 0x0805451c  size 128
.thumb
.org 0x5451c
FUN_0805451c:
	push {r4, lr}	@ 0005451c 10b5
.org 0x5451e
	adds r4, r0, #0	@ 0005451e 041c
.org 0x54520
	ldrb r2, [r4, #15]	@ 00054520 e27b
.org 0x54522
	cmp r2, #0	@ 00054522 002a
.org 0x54524
	bne.n 0x54558	@ 00054524 18d1
.org 0x54526
	adds r1, r4, #0	@ 00054526 211c
.org 0x54528
	adds r1, #196	@ 00054528 c431
.org 0x5452a
	ldr r0, [r1, #0]	@ 0005452a 0868
.org 0x5452c
	adds r0, #184	@ 0005452c b830
.org 0x5452e
	strb r2, [r0, #0]	@ 0005452e 0270
.org 0x54530
	ldr r0, [r1, #0]	@ 00054530 0868
.org 0x54532
	adds r0, #188	@ 00054532 bc30
.org 0x54534
	movs r3, #0	@ 00054534 0023
.org 0x54536
	movs r2, #8	@ 00054536 0822
.org 0x54538
	strh r2, [r0, #0]	@ 00054538 0280
.org 0x5453a
	adds r1, #4	@ 0005453a 0431
.org 0x5453c
	ldr r0, [r1, #0]	@ 0005453c 0868
.org 0x5453e
	adds r0, #184	@ 0005453e b830
.org 0x54540
	strb r3, [r0, #0]	@ 00054540 0370
.org 0x54542
	ldr r0, [r1, #0]	@ 00054542 0868
.org 0x54544
	adds r0, #188	@ 00054544 bc30
.org 0x54546
	strh r2, [r0, #0]	@ 00054546 0280
.org 0x54548
	movs r1, #176	@ 00054548 b021
.org 0x5454a
	lsls r1, r1, #6	@ 0005454a 8901
.org 0x5454c
	adds r0, r4, #0	@ 0005454c 201c
.org 0x5454e
	bl 0x1cf00	@ 0005454e c8f7d7fc
.org 0x54552
	ldrb r0, [r4, #15]	@ 00054552 e07b
.org 0x54554
	adds r0, #1	@ 00054554 0130
.org 0x54556
	strb r0, [r4, #15]	@ 00054556 e073
.org 0x54558
	adds r0, r4, #0	@ 00054558 201c
.org 0x5455a
	bl 0x1cff0	@ 0005455a c8f749fd
.org 0x5455e
	adds r0, r4, #0	@ 0005455e 201c
.org 0x54560
	bl 0x54fb0	@ 00054560 00f026fd
.org 0x54564
	adds r0, r4, #0	@ 00054564 201c
.org 0x54566
	movs r1, #0	@ 00054566 0021
.org 0x54568
	bl 0x55068	@ 00054568 00f07efd
.org 0x5456c
	cmp r0, #0	@ 0005456c 0028
.org 0x5456e
	bne.n 0x54596	@ 0005456e 12d1
.org 0x54570
	adds r0, r4, #0	@ 00054570 201c
.org 0x54572
	adds r0, #196	@ 00054572 c430
.org 0x54574
	ldr r0, [r0, #0]	@ 00054574 0068
.org 0x54576
	adds r0, #188	@ 00054576 bc30
.org 0x54578
	movs r1, #0	@ 00054578 0021
.org 0x5457a
	ldrsh r0, [r0, r1]	@ 0005457a 405e
.org 0x5457c
	cmp r0, #0	@ 0005457c 0028
.org 0x5457e
	bne.n 0x54596	@ 0005457e 0ad1
.org 0x54580
	adds r0, r4, #0	@ 00054580 201c
.org 0x54582
	adds r0, #200	@ 00054582 c830
.org 0x54584
	ldr r0, [r0, #0]	@ 00054584 0068
.org 0x54586
	adds r0, #188	@ 00054586 bc30
.org 0x54588
	movs r1, #0	@ 00054588 0021
.org 0x5458a
	ldrsh r0, [r0, r1]	@ 0005458a 405e
.org 0x5458c
	cmp r0, #0	@ 0005458c 0028
.org 0x5458e
	bne.n 0x54596	@ 0005458e 02d1
.org 0x54590
	adds r0, r4, #0	@ 00054590 201c
.org 0x54592
	bl 0x54ff0	@ 00054592 00f02dfd
.org 0x54596
	pop {r4}	@ 00054596 10bc
.org 0x54598
	pop {r0}	@ 00054598 01bc
.org 0x5459a
	bx r0	@ 0005459a 0047
