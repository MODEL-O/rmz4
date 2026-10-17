@ FUN_08083464  entry 0x08083464  size 502
.thumb
.org 0x83464
FUN_08083464:
	push {r4, r5, r6, r7, lr}	@ 00083464 f0b5
.org 0x83466
	adds r5, r0, #0	@ 00083466 051c
.org 0x83468
	adds r7, r1, #0	@ 00083468 0f1c
.org 0x8346a
	movs r6, #0	@ 0008346a 0026
.org 0x8346c
	cmp r2, #0	@ 0008346c 002a
.org 0x8346e
	bne.n 0x83472	@ 0008346e 00d1
.org 0x83470
	b.n 0x83580	@ 00083470 86e0
.org 0x83472
	ldr r0, [r5, #104]	@ 00083472 a86e
.org 0x83474
	adds r1, r0, r2	@ 00083474 8118
.org 0x83476
	str r1, [r5, #104]	@ 00083476 a966
.org 0x83478
	movs r2, #0	@ 00083478 0022
.org 0x8347a
	ldr r0, [r5, #96]	@ 0008347a 286e
.org 0x8347c
	cmp r0, #0	@ 0008347c 0028
.org 0x8347e
	ble.n 0x83482	@ 0008347e 00dd
.org 0x83480
	movs r2, #1	@ 00083480 0122
.org 0x83482
	adds r4, r2, #0	@ 00083482 141c
.org 0x83484
	ldr r0, [r5, #100]	@ 00083484 686e
.org 0x83486
	ldr r2, [pc, #36]	@ 00083486 094a
.org 0x83488
	adds r3, r0, r2	@ 00083488 8318
.org 0x8348a
	adds r2, r1, #0	@ 0008348a 0a1c
.org 0x8348c
	ldrb r1, [r5, #10]	@ 0008348c a97a
.org 0x8348e
	movs r0, #32	@ 0008348e 2020
.org 0x83490
	ands r0, r1	@ 00083490 0840
.org 0x83492
	lsls r0, r0, #24	@ 00083492 0006
.org 0x83494
	lsrs r0, r0, #24	@ 00083494 000e
.org 0x83496
	ldr r1, [pc, #24]	@ 00083496 0649
.org 0x83498
	cmp r0, #0	@ 00083498 0028
.org 0x8349a
	beq.n 0x834b4	@ 0008349a 0bd0
.org 0x8349c
	movs r1, #188	@ 0008349c bc21
.org 0x8349e
	lsls r1, r1, #6	@ 0008349e 8901
.org 0x834a0
	cmp r0, #0	@ 000834a0 0028
.org 0x834a2
	beq.n 0x834b4	@ 000834a2 07d0
.org 0x834a4
	adds r0, r1, #0	@ 000834a4 081c
.org 0x834a6
	muls r0, r4	@ 000834a6 6043
.org 0x834a8
	b.n 0x834ba	@ 000834a8 07e0
.org 0x834aa
	.byte 0x00	@ 000834aa data
.org 0x834ab
	.byte 0x00	@ 000834ab data
.org 0x834ac
	.byte 0x00,0xf9,0xff,0xff	@ 000834ac data
.org 0x834b0
	.byte 0x00,0xd1,0xff,0xff	@ 000834b0 data
.org 0x834b4
	movs r0, #1	@ 000834b4 0120
.org 0x834b6
	eors r0, r4	@ 000834b6 6040
.org 0x834b8
	muls r0, r1	@ 000834b8 4843
.org 0x834ba
	adds r2, r2, r0	@ 000834ba 1218
.org 0x834bc
	cmp r4, #0	@ 000834bc 002c
.org 0x834be
	beq.n 0x834dc	@ 000834be 0dd0
.org 0x834c0
	ldr r0, [pc, #20]	@ 000834c0 0548
.org 0x834c2
	adds r1, r2, r0	@ 000834c2 1118
.org 0x834c4
	adds r0, r3, #0	@ 000834c4 181c
.org 0x834c6
	bl 0x7db4	@ 000834c6 84f775fc
.org 0x834ca
	adds r2, r0, #0	@ 000834ca 021c
.org 0x834cc
	cmp r2, #0	@ 000834cc 002a
.org 0x834ce
	bge.n 0x834fc	@ 000834ce 15da
.org 0x834d0
	ldr r0, [r5, #104]	@ 000834d0 a86e
.org 0x834d2
	movs r1, #128	@ 000834d2 8021
.org 0x834d4
	lsls r1, r1, #1	@ 000834d4 4900
.org 0x834d6
	b.n 0x834f2	@ 000834d6 0ce0
.org 0x834d8
	.byte 0x00,0xff,0xff,0xff	@ 000834d8 data
.org 0x834dc
	movs r0, #128	@ 000834dc 8020
.org 0x834de
	lsls r0, r0, #1	@ 000834de 4000
.org 0x834e0
	adds r1, r2, r0	@ 000834e0 1118
.org 0x834e2
	adds r0, r3, #0	@ 000834e2 181c
.org 0x834e4
	bl 0x7f8c	@ 000834e4 84f752fd
.org 0x834e8
	adds r2, r0, #0	@ 000834e8 021c
.org 0x834ea
	cmp r2, #0	@ 000834ea 002a
.org 0x834ec
	ble.n 0x834fc	@ 000834ec 06dd
.org 0x834ee
	ldr r0, [r5, #104]	@ 000834ee a86e
.org 0x834f0
	ldr r1, [pc, #60]	@ 000834f0 0f49
.org 0x834f2
	adds r0, r0, r1	@ 000834f2 4018
.org 0x834f4
	adds r0, r0, r2	@ 000834f4 8018
.org 0x834f6
	str r0, [r5, #104]	@ 000834f6 a866
.org 0x834f8
	movs r0, #1	@ 000834f8 0120
.org 0x834fa
	orrs r6, r0	@ 000834fa 0643
.org 0x834fc
	movs r1, #0	@ 000834fc 0021
.org 0x834fe
	ldr r0, [r5, #96]	@ 000834fe 286e
.org 0x83500
	cmp r0, #0	@ 00083500 0028
.org 0x83502
	ble.n 0x83506	@ 00083502 00dd
.org 0x83504
	movs r1, #1	@ 00083504 0121
.org 0x83506
	adds r4, r1, #0	@ 00083506 0c1c
.org 0x83508
	ldr r0, [r5, #100]	@ 00083508 686e
.org 0x8350a
	movs r2, #224	@ 0008350a e022
.org 0x8350c
	lsls r2, r2, #3	@ 0008350c d200
.org 0x8350e
	adds r3, r0, r2	@ 0008350e 8318
.org 0x83510
	ldr r2, [r5, #104]	@ 00083510 aa6e
.org 0x83512
	ldrb r1, [r5, #10]	@ 00083512 a97a
.org 0x83514
	movs r0, #32	@ 00083514 2020
.org 0x83516
	ands r0, r1	@ 00083516 0840
.org 0x83518
	lsls r0, r0, #24	@ 00083518 0006
.org 0x8351a
	lsrs r0, r0, #24	@ 0008351a 000e
.org 0x8351c
	ldr r1, [pc, #20]	@ 0008351c 0549
.org 0x8351e
	cmp r0, #0	@ 0008351e 0028
.org 0x83520
	beq.n 0x83538	@ 00083520 0ad0
.org 0x83522
	movs r1, #188	@ 00083522 bc21
.org 0x83524
	lsls r1, r1, #6	@ 00083524 8901
.org 0x83526
	cmp r0, #0	@ 00083526 0028
.org 0x83528
	beq.n 0x83538	@ 00083528 06d0
.org 0x8352a
	adds r0, r1, #0	@ 0008352a 081c
.org 0x8352c
	muls r0, r4	@ 0008352c 6043
.org 0x8352e
	b.n 0x8353e	@ 0008352e 06e0
.org 0x83530
	.byte 0x00,0xff,0xff,0xff	@ 00083530 data
.org 0x83534
	.byte 0x00,0xd1,0xff,0xff	@ 00083534 data
.org 0x83538
	movs r0, #1	@ 00083538 0120
.org 0x8353a
	eors r0, r4	@ 0008353a 6040
.org 0x8353c
	muls r0, r1	@ 0008353c 4843
.org 0x8353e
	adds r2, r2, r0	@ 0008353e 1218
.org 0x83540
	cmp r4, #0	@ 00083540 002c
.org 0x83542
	beq.n 0x83560	@ 00083542 0dd0
.org 0x83544
	ldr r0, [pc, #20]	@ 00083544 0548
.org 0x83546
	adds r1, r2, r0	@ 00083546 1118
.org 0x83548
	adds r0, r3, #0	@ 00083548 181c
.org 0x8354a
	bl 0x7db4	@ 0008354a 84f733fc
.org 0x8354e
	adds r2, r0, #0	@ 0008354e 021c
.org 0x83550
	cmp r2, #0	@ 00083550 002a
.org 0x83552
	bge.n 0x83580	@ 00083552 15da
.org 0x83554
	ldr r0, [r5, #104]	@ 00083554 a86e
.org 0x83556
	movs r1, #128	@ 00083556 8021
.org 0x83558
	lsls r1, r1, #1	@ 00083558 4900
.org 0x8355a
	b.n 0x83576	@ 0008355a 0ce0
.org 0x8355c
	.byte 0x00,0xff,0xff,0xff	@ 0008355c data
.org 0x83560
	movs r0, #128	@ 00083560 8020
.org 0x83562
	lsls r0, r0, #1	@ 00083562 4000
.org 0x83564
	adds r1, r2, r0	@ 00083564 1118
.org 0x83566
	adds r0, r3, #0	@ 00083566 181c
.org 0x83568
	bl 0x7f8c	@ 00083568 84f710fd
.org 0x8356c
	adds r2, r0, #0	@ 0008356c 021c
.org 0x8356e
	cmp r2, #0	@ 0008356e 002a
.org 0x83570
	ble.n 0x83580	@ 00083570 06dd
.org 0x83572
	ldr r0, [r5, #104]	@ 00083572 a86e
.org 0x83574
	ldr r1, [pc, #68]	@ 00083574 1149
.org 0x83576
	adds r0, r0, r1	@ 00083576 4018
.org 0x83578
	adds r0, r0, r2	@ 00083578 8018
.org 0x8357a
	str r0, [r5, #104]	@ 0008357a a866
.org 0x8357c
	movs r0, #1	@ 0008357c 0120
.org 0x8357e
	orrs r6, r0	@ 0008357e 0643
.org 0x83580
	cmp r7, #0	@ 00083580 002f
.org 0x83582
	beq.n 0x83650	@ 00083582 65d0
.org 0x83584
	ldr r0, [r5, #100]	@ 00083584 686e
.org 0x83586
	adds r1, r0, r7	@ 00083586 c119
.org 0x83588
	str r1, [r5, #100]	@ 00083588 6966
.org 0x8358a
	movs r2, #0	@ 0008358a 0022
.org 0x8358c
	ldr r0, [r5, #92]	@ 0008358c e86d
.org 0x8358e
	cmp r0, #0	@ 0008358e 0028
.org 0x83590
	ble.n 0x83594	@ 00083590 00dd
.org 0x83592
	movs r2, #1	@ 00083592 0122
.org 0x83594
	adds r4, r2, #0	@ 00083594 141c
.org 0x83596
	ldr r2, [pc, #40]	@ 00083596 0a4a
.org 0x83598
	adds r3, r1, r2	@ 00083598 8b18
.org 0x8359a
	lsls r0, r4, #3	@ 0008359a e000
.org 0x8359c
	subs r0, r0, r4	@ 0008359c 001b
.org 0x8359e
	lsls r0, r0, #9	@ 0008359e 4002
.org 0x835a0
	adds r3, r3, r0	@ 000835a0 1b18
.org 0x835a2
	ldr r0, [r5, #104]	@ 000835a2 a86e
.org 0x835a4
	ldr r1, [pc, #28]	@ 000835a4 0749
.org 0x835a6
	adds r2, r0, r1	@ 000835a6 4218
.org 0x835a8
	cmp r4, #0	@ 000835a8 002c
.org 0x835aa
	beq.n 0x835c8	@ 000835aa 0dd0
.org 0x835ac
	adds r0, r3, #0	@ 000835ac 181c
.org 0x835ae
	adds r1, r2, #0	@ 000835ae 111c
.org 0x835b0
	bl 0x816c	@ 000835b0 84f7dcfd
.org 0x835b4
	adds r3, r0, #0	@ 000835b4 031c
.org 0x835b6
	cmp r3, #0	@ 000835b6 002b
.org 0x835b8
	bge.n 0x835e4	@ 000835b8 14da
.org 0x835ba
	b.n 0x835d6	@ 000835ba 0ce0
.org 0x835bc
	.byte 0x00,0xff,0xff,0xff	@ 000835bc data
.org 0x835c0
	.byte 0x00,0xf9,0xff,0xff	@ 000835c0 data
.org 0x835c4
	.byte 0x00,0xfe,0xff,0xff	@ 000835c4 data
.org 0x835c8
	adds r0, r3, #0	@ 000835c8 181c
.org 0x835ca
	adds r1, r2, #0	@ 000835ca 111c
.org 0x835cc
	bl 0x834c	@ 000835cc 84f7befe
.org 0x835d0
	adds r3, r0, #0	@ 000835d0 031c
.org 0x835d2
	cmp r3, #0	@ 000835d2 002b
.org 0x835d4
	ble.n 0x835e4	@ 000835d4 06dd
.org 0x835d6
	ldr r0, [r5, #100]	@ 000835d6 686e
.org 0x835d8
	adds r0, r0, r3	@ 000835d8 c018
.org 0x835da
	str r0, [r5, #100]	@ 000835da 6866
.org 0x835dc
	movs r0, #2	@ 000835dc 0220
.org 0x835de
	orrs r6, r0	@ 000835de 0643
.org 0x835e0
	lsls r0, r6, #24	@ 000835e0 3006
.org 0x835e2
	lsrs r6, r0, #24	@ 000835e2 060e
.org 0x835e4
	movs r1, #0	@ 000835e4 0021
.org 0x835e6
	ldr r0, [r5, #92]	@ 000835e6 e86d
.org 0x835e8
	cmp r0, #0	@ 000835e8 0028
.org 0x835ea
	ble.n 0x835ee	@ 000835ea 00dd
.org 0x835ec
	movs r1, #1	@ 000835ec 0121
.org 0x835ee
	adds r4, r1, #0	@ 000835ee 0c1c
.org 0x835f0
	ldr r3, [r5, #100]	@ 000835f0 6b6e
.org 0x835f2
	ldr r2, [pc, #32]	@ 000835f2 084a
.org 0x835f4
	adds r3, r3, r2	@ 000835f4 9b18
.org 0x835f6
	lsls r0, r4, #3	@ 000835f6 e000
.org 0x835f8
	subs r0, r0, r4	@ 000835f8 001b
.org 0x835fa
	lsls r0, r0, #9	@ 000835fa 4002
.org 0x835fc
	adds r3, r3, r0	@ 000835fc 1b18
.org 0x835fe
	ldr r2, [r5, #104]	@ 000835fe aa6e
.org 0x83600
	ldrb r1, [r5, #10]	@ 00083600 a97a
.org 0x83602
	movs r0, #32	@ 00083602 2020
.org 0x83604
	ands r0, r1	@ 00083604 0840
.org 0x83606
	cmp r0, #0	@ 00083606 0028
.org 0x83608
	beq.n 0x83618	@ 00083608 06d0
.org 0x8360a
	movs r0, #180	@ 0008360a b420
.org 0x8360c
	lsls r0, r0, #6	@ 0008360c 8001
.org 0x8360e
	adds r2, r2, r0	@ 0008360e 1218
.org 0x83610
	b.n 0x8361c	@ 00083610 04e0
.org 0x83612
	.byte 0x00	@ 00083612 data
.org 0x83613
	.byte 0x00	@ 00083613 data
.org 0x83614
	.byte 0x00,0xf9,0xff,0xff	@ 00083614 data
.org 0x83618
	ldr r1, [pc, #20]	@ 00083618 0549
.org 0x8361a
	adds r2, r2, r1	@ 0008361a 5218
.org 0x8361c
	cmp r4, #0	@ 0008361c 002c
.org 0x8361e
	beq.n 0x83634	@ 0008361e 09d0
.org 0x83620
	adds r0, r3, #0	@ 00083620 181c
.org 0x83622
	adds r1, r2, #0	@ 00083622 111c
.org 0x83624
	bl 0x816c	@ 00083624 84f7a2fd
.org 0x83628
	adds r3, r0, #0	@ 00083628 031c
.org 0x8362a
	cmp r3, #0	@ 0008362a 002b
.org 0x8362c
	bge.n 0x83650	@ 0008362c 10da
.org 0x8362e
	b.n 0x83642	@ 0008362e 08e0
.org 0x83630
	.byte 0x00,0xd3,0xff,0xff	@ 00083630 data
.org 0x83634
	adds r0, r3, #0	@ 00083634 181c
.org 0x83636
	adds r1, r2, #0	@ 00083636 111c
.org 0x83638
	bl 0x834c	@ 00083638 84f788fe
.org 0x8363c
	adds r3, r0, #0	@ 0008363c 031c
.org 0x8363e
	cmp r3, #0	@ 0008363e 002b
.org 0x83640
	ble.n 0x83650	@ 00083640 06dd
.org 0x83642
	ldr r0, [r5, #100]	@ 00083642 686e
.org 0x83644
	adds r0, r0, r3	@ 00083644 c018
.org 0x83646
	str r0, [r5, #100]	@ 00083646 6866
.org 0x83648
	movs r0, #2	@ 00083648 0220
.org 0x8364a
	orrs r6, r0	@ 0008364a 0643
.org 0x8364c
	lsls r0, r6, #24	@ 0008364c 3006
.org 0x8364e
	lsrs r6, r0, #24	@ 0008364e 060e
.org 0x83650
	movs r0, #1	@ 00083650 0120
.org 0x83652
	ands r0, r6	@ 00083652 3040
.org 0x83654
	cmp r0, #0	@ 00083654 0028
.org 0x83656
	bne.n 0x83670	@ 00083656 0bd1
.org 0x83658
	ldr r0, [r5, #92]	@ 00083658 e86d
