@ FUN_0807450c  entry 0x0807450c  size 118
.thumb
.org 0x7450c
FUN_0807450c:
	push {r4, r5, lr}	@ 0007450c 30b5
.org 0x7450e
	adds r4, r0, #0	@ 0007450e 041c
.org 0x74510
	ldrb r5, [r4, #14]	@ 00074510 a57b
.org 0x74512
	cmp r5, #0	@ 00074512 002d
.org 0x74514
	bne.n 0x74540	@ 00074514 14d1
.org 0x74516
	ldrb r0, [r4, #30]	@ 00074516 a07f
.org 0x74518
	lsls r0, r0, #8	@ 00074518 0002
.org 0x7451a
	adds r1, r4, #0	@ 0007451a 211c
.org 0x7451c
	adds r1, #112	@ 0007451c 7031
.org 0x7451e
	ldrb r1, [r1, #0]	@ 0007451e 0978
.org 0x74520
	orrs r0, r1	@ 00074520 0843
.org 0x74522
	movs r1, #147	@ 00074522 9321
.org 0x74524
	lsls r1, r1, #8	@ 00074524 0902
.org 0x74526
	cmp r0, r1	@ 00074526 8842
.org 0x74528
	beq.n 0x74530	@ 00074528 02d0
.org 0x7452a
	adds r0, r4, #0	@ 0007452a 201c
.org 0x7452c
	bl 0x1cf00	@ 0007452c a8f7e8fc
.org 0x74530
	adds r0, r4, #0	@ 00074530 201c
.org 0x74532
	adds r0, #180	@ 00074532 b430
.org 0x74534
	movs r1, #0	@ 00074534 0021
.org 0x74536
	strh r5, [r0, #20]	@ 00074536 8582
.org 0x74538
	ldrb r0, [r4, #14]	@ 00074538 a07b
.org 0x7453a
	adds r0, #1	@ 0007453a 0130
.org 0x7453c
	strb r0, [r4, #14]	@ 0007453c a073
.org 0x7453e
	strb r1, [r4, #15]	@ 0007453e e173
.org 0x74540
	adds r0, r4, #0	@ 00074540 201c
.org 0x74542
	bl 0x1cff0	@ 00074542 a8f755fd
.org 0x74546
	adds r3, r4, #0	@ 00074546 231c
.org 0x74548
	adds r3, #180	@ 00074548 b433
.org 0x7454a
	ldr r1, [pc, #56]	@ 0007454a 0e49
.org 0x7454c
	adds r2, r4, #0	@ 0007454c 221c
.org 0x7454e
	adds r2, #224	@ 0007454e e032
.org 0x74550
	ldrb r0, [r2, #0]	@ 00074550 1078
.org 0x74552
	lsls r0, r0, #1	@ 00074552 4000
.org 0x74554
	adds r0, r0, r1	@ 00074554 4018
.org 0x74556
	movs r5, #0	@ 00074556 0025
.org 0x74558
	ldrsh r1, [r0, r5]	@ 00074558 415f
.org 0x7455a
	lsls r1, r1, #2	@ 0007455a 8900
.org 0x7455c
	ldr r0, [r3, #4]	@ 0007455c 5868
.org 0x7455e
	adds r0, r0, r1	@ 0007455e 4018
.org 0x74560
	str r0, [r4, #88]	@ 00074560 a065
.org 0x74562
	ldrb r0, [r2, #0]	@ 00074562 1078
.org 0x74564
	adds r0, #1	@ 00074564 0130
.org 0x74566
	strb r0, [r2, #0]	@ 00074566 1070
.org 0x74568
	ldr r0, [r4, #24]	@ 00074568 a069
.org 0x7456a
	ldrb r1, [r0, #9]	@ 0007456a 417a
.org 0x7456c
	movs r2, #1	@ 0007456c 0122
.org 0x7456e
	adds r0, r2, #0	@ 0007456e 101c
.org 0x74570
	ands r0, r1	@ 00074570 0840
.org 0x74572
	cmp r0, #0	@ 00074572 0028
.org 0x74574
	beq.n 0x7457c	@ 00074574 02d0
.org 0x74576
	strb r2, [r4, #13]	@ 00074576 6273
.org 0x74578
	movs r0, #0	@ 00074578 0020
.org 0x7457a
	strb r0, [r4, #14]	@ 0007457a a073
.org 0x7457c
	pop {r4, r5}	@ 0007457c 30bc
.org 0x7457e
	pop {r0}	@ 0007457e 01bc
.org 0x74580
	bx r0	@ 00074580 0047
