@ FUN_08059548  entry 0x08059548  size 434
.thumb
.org 0x59548
FUN_08059548:
	push {r4, r5, r6, r7, lr}	@ 00059548 f0b5
.org 0x5954a
	mov r7, sl	@ 0005954a 5746
.org 0x5954c
	mov r6, r9	@ 0005954c 4e46
.org 0x5954e
	mov r5, r8	@ 0005954e 4546
.org 0x59550
	push {r5, r6, r7}	@ 00059550 e0b4
.org 0x59552
	sub sp, #120	@ 00059552 9eb0
.org 0x59554
	adds r7, r0, #0	@ 00059554 071c
.org 0x59556
	ldr r1, [pc, #208]	@ 00059556 3449
.org 0x59558
	mov r0, sp	@ 00059558 6846
.org 0x5955a
	movs r2, #7	@ 0005955a 0722
.org 0x5955c
	bl 0x129258	@ 0005955c cff07cfe
.org 0x59560
	mov r0, sp	@ 00059560 6846
.org 0x59562
	adds r0, #8	@ 00059562 0830
.org 0x59564
	str r0, [sp, #116]	@ 00059564 1d90
.org 0x59566
	ldr r1, [pc, #196]	@ 00059566 3149
.org 0x59568
	movs r2, #7	@ 00059568 0722
.org 0x5956a
	bl 0x129258	@ 0005956a cff075fe
.org 0x5956e
	add r6, sp, #16	@ 0005956e 04ae
.org 0x59570
	ldr r1, [pc, #188]	@ 00059570 2f49
.org 0x59572
	adds r0, r6, #0	@ 00059572 301c
.org 0x59574
	movs r2, #7	@ 00059574 0722
.org 0x59576
	bl 0x129258	@ 00059576 cff06ffe
.org 0x5957a
	add r1, sp, #24	@ 0005957a 06a9
.org 0x5957c
	mov sl, r1	@ 0005957c 8a46
.org 0x5957e
	ldr r1, [pc, #180]	@ 0005957e 2d49
.org 0x59580
	mov r0, sl	@ 00059580 5046
.org 0x59582
	movs r2, #7	@ 00059582 0722
.org 0x59584
	bl 0x129258	@ 00059584 cff068fe
.org 0x59588
	add r0, sp, #32	@ 00059588 08a8
.org 0x5958a
	mov r9, r0	@ 0005958a 8146
.org 0x5958c
	ldr r1, [pc, #168]	@ 0005958c 2a49
.org 0x5958e
	movs r2, #7	@ 0005958e 0722
.org 0x59590
	bl 0x129258	@ 00059590 cff062fe
.org 0x59594
	add r4, sp, #40	@ 00059594 0aac
.org 0x59596
	ldr r1, [pc, #164]	@ 00059596 2949
.org 0x59598
	adds r0, r4, #0	@ 00059598 201c
.org 0x5959a
	movs r2, #7	@ 0005959a 0722
.org 0x5959c
	bl 0x129258	@ 0005959c cff05cfe
.org 0x595a0
	add r5, sp, #48	@ 000595a0 0cad
.org 0x595a2
	ldr r1, [pc, #156]	@ 000595a2 2749
.org 0x595a4
	adds r0, r5, #0	@ 000595a4 281c
.org 0x595a6
	movs r2, #7	@ 000595a6 0722
.org 0x595a8
	bl 0x129258	@ 000595a8 cff056fe
.org 0x595ac
	add r1, sp, #56	@ 000595ac 0ea9
.org 0x595ae
	mov r8, r1	@ 000595ae 8846
.org 0x595b0
	mov r0, sp	@ 000595b0 6846
.org 0x595b2
	str r0, [sp, #68]	@ 000595b2 1190
.org 0x595b4
	ldr r1, [sp, #116]	@ 000595b4 1d99
.org 0x595b6
	str r1, [sp, #72]	@ 000595b6 1291
.org 0x595b8
	str r6, [sp, #76]	@ 000595b8 1396
.org 0x595ba
	add r6, sp, #68	@ 000595ba 11ae
.org 0x595bc
	mov r0, r8	@ 000595bc 4046
.org 0x595be
	adds r1, r6, #0	@ 000595be 311c
.org 0x595c0
	movs r2, #12	@ 000595c0 0c22
.org 0x595c2
	bl 0x129258	@ 000595c2 cff049fe
.org 0x595c6
	mov r0, sl	@ 000595c6 5046
.org 0x595c8
	str r0, [sp, #80]	@ 000595c8 1490
.org 0x595ca
	mov r1, r9	@ 000595ca 4946
.org 0x595cc
	str r1, [sp, #84]	@ 000595cc 1591
.org 0x595ce
	str r4, [sp, #88]	@ 000595ce 1694
.org 0x595d0
	add r4, sp, #80	@ 000595d0 14ac
.org 0x595d2
	adds r0, r6, #0	@ 000595d2 301c
.org 0x595d4
	adds r1, r4, #0	@ 000595d4 211c
.org 0x595d6
	movs r2, #12	@ 000595d6 0c22
.org 0x595d8
	bl 0x129258	@ 000595d8 cff03efe
.org 0x595dc
	str r5, [sp, #92]	@ 000595dc 1795
.org 0x595de
	str r5, [sp, #96]	@ 000595de 1895
.org 0x595e0
	str r5, [sp, #100]	@ 000595e0 1995
.org 0x595e2
	add r5, sp, #92	@ 000595e2 17ad
.org 0x595e4
	adds r0, r4, #0	@ 000595e4 201c
.org 0x595e6
	adds r1, r5, #0	@ 000595e6 291c
.org 0x595e8
	movs r2, #12	@ 000595e8 0c22
.org 0x595ea
	bl 0x129258	@ 000595ea cff035fe
.org 0x595ee
	mov r0, r8	@ 000595ee 4046
.org 0x595f0
	str r0, [sp, #104]	@ 000595f0 1a90
.org 0x595f2
	str r6, [sp, #108]	@ 000595f2 1b96
.org 0x595f4
	str r4, [sp, #112]	@ 000595f4 1c94
.org 0x595f6
	add r1, sp, #104	@ 000595f6 1aa9
.org 0x595f8
	adds r0, r5, #0	@ 000595f8 281c
.org 0x595fa
	movs r2, #12	@ 000595fa 0c22
.org 0x595fc
	bl 0x129258	@ 000595fc cff02cfe
.org 0x59600
	ldrb r0, [r7, #10]	@ 00059600 b87a
.org 0x59602
	lsrs r4, r0, #4	@ 00059602 0409
.org 0x59604
	movs r0, #1	@ 00059604 0120
.org 0x59606
	ands r4, r0	@ 00059606 0440
.org 0x59608
	ldr r3, [r7, #84]	@ 00059608 7b6d
.org 0x5960a
	adds r0, r7, #0	@ 0005960a 381c
.org 0x5960c
	adds r0, #204	@ 0005960c cc30
.org 0x5960e
	ldr r0, [r0, #0]	@ 0005960e 0068
.org 0x59610
	subs r0, r3, r0	@ 00059610 181a
.org 0x59612
	ldr r1, [pc, #48]	@ 00059612 0c49
.org 0x59614
	adds r0, r0, r1	@ 00059614 4018
.org 0x59616
	movs r1, #200	@ 00059616 c821
.org 0x59618
	lsls r1, r1, #9	@ 00059618 4902
.org 0x5961a
	mov r9, r5	@ 0005961a a946
.org 0x5961c
	cmp r0, r1	@ 0005961c 8842
.org 0x5961e
	bls.n 0x59648	@ 0005961e 13d9
.org 0x59620
	movs r1, #0	@ 00059620 0021
.org 0x59622
	movs r0, #14	@ 00059622 0e20
.org 0x59624
	b.n 0x5965c	@ 00059624 1ae0
.org 0x59626
	.byte 0x00	@ 00059626 data
.org 0x59627
	.byte 0x00	@ 00059627 data
.org 0x59628
	.byte 0x50,0x96,0x12,0x08	@ 00059628 data
.org 0x5962c
	.byte 0x57,0x96,0x12,0x08	@ 0005962c data
.org 0x59630
	.byte 0x5e,0x96,0x12,0x08	@ 00059630 data
.org 0x59634
	.byte 0x65,0x96,0x12,0x08	@ 00059634 data
.org 0x59638
	.byte 0x6c,0x96,0x12,0x08	@ 00059638 data
.org 0x5963c
	.byte 0x73,0x96,0x12,0x08	@ 0005963c data
.org 0x59640
	.byte 0x7a,0x96,0x12,0x08	@ 00059640 data
.org 0x59644
	.byte 0x00,0xd8,0xff,0xff	@ 00059644 data
.org 0x59648
	adds r0, r7, #0	@ 00059648 381c
.org 0x5964a
	adds r0, #188	@ 0005964a bc30
.org 0x5964c
	adds r1, r7, #0	@ 0005964c 391c
.org 0x5964e
	adds r1, #184	@ 0005964e b831
.org 0x59650
	ldr r2, [r0, #0]	@ 00059650 0268
.org 0x59652
	ldr r0, [r1, #0]	@ 00059652 0868
.org 0x59654
	cmp r2, r0	@ 00059654 8242
.org 0x59656
	beq.n 0x59664	@ 00059656 05d0
.org 0x59658
	movs r1, #0	@ 00059658 0021
.org 0x5965a
	movs r0, #13	@ 0005965a 0d20
.org 0x5965c
	strb r0, [r7, #13]	@ 0005965c 7873
.org 0x5965e
	strb r1, [r7, #14]	@ 0005965e b973
.org 0x59660
	strb r1, [r7, #15]	@ 00059660 f973
.org 0x59662
	b.n 0x5971c	@ 00059662 5be0
.org 0x59664
	ldr r0, [pc, #20]	@ 00059664 0548
.org 0x59666
	ldrh r1, [r0, #8]	@ 00059666 0189
.org 0x59668
	movs r0, #8	@ 00059668 0820
.org 0x5966a
	ands r0, r1	@ 0005966a 0840
.org 0x5966c
	cmp r0, #0	@ 0005966c 0028
.org 0x5966e
	beq.n 0x59680	@ 0005966e 07d0
.org 0x59670
	movs r0, #0	@ 00059670 0020
.org 0x59672
	strb r0, [r7, #13]	@ 00059672 7873
.org 0x59674
	strb r0, [r7, #14]	@ 00059674 b873
.org 0x59676
	strb r0, [r7, #15]	@ 00059676 f873
.org 0x59678
	b.n 0x5971c	@ 00059678 50e0
.org 0x5967a
	.byte 0x00	@ 0005967a data
.org 0x5967b
	.byte 0x00	@ 0005967b data
.org 0x5967c
	.byte 0x10,0xe9,0x02,0x02	@ 0005967c data
.org 0x59680
	movs r1, #0	@ 00059680 0021
.org 0x59682
	ldr r0, [pc, #20]	@ 00059682 0548
.org 0x59684
	ldr r0, [r0, #0]	@ 00059684 0068
.org 0x59686
	ldr r0, [r0, #84]	@ 00059686 406d
.org 0x59688
	cmp r3, r0	@ 00059688 8342
.org 0x5968a
	bge.n 0x5968e	@ 0005968a 00da
.org 0x5968c
	movs r1, #1	@ 0005968c 0121
.org 0x5968e
	cmp r1, r4	@ 0005968e a142
.org 0x59690
	beq.n 0x5969c	@ 00059690 04d0
.org 0x59692
	movs r4, #2	@ 00059692 0224
.org 0x59694
	b.n 0x596b0	@ 00059694 0ce0
.org 0x59696
	.byte 0x00	@ 00059696 data
.org 0x59697
	.byte 0x00	@ 00059697 data
.org 0x59698
	.byte 0xf0,0xdb,0x02,0x02	@ 00059698 data
.org 0x5969c
	subs r0, r3, r0	@ 0005969c 181a
.org 0x5969e
	movs r1, #252	@ 0005969e fc21
.org 0x596a0
	lsls r1, r1, #6	@ 000596a0 8901
.org 0x596a2
	adds r0, r0, r1	@ 000596a2 4018
.org 0x596a4
	movs r1, #252	@ 000596a4 fc21
.org 0x596a6
	lsls r1, r1, #7	@ 000596a6 c901
.org 0x596a8
	movs r4, #0	@ 000596a8 0024
.org 0x596aa
	cmp r0, r1	@ 000596aa 8842
.org 0x596ac
	bhi.n 0x596b0	@ 000596ac 00d8
.org 0x596ae
	movs r4, #1	@ 000596ae 0124
.org 0x596b0
	adds r0, r7, #0	@ 000596b0 381c
.org 0x596b2
	bl 0x5977c	@ 000596b2 00f063f8
.org 0x596b6
	adds r3, r0, #0	@ 000596b6 031c
.org 0x596b8
	adds r6, r7, #0	@ 000596b8 3e1c
.org 0x596ba
	adds r6, #183	@ 000596ba b736
.org 0x596bc
	ldrb r0, [r6, #0]	@ 000596bc 3078
.org 0x596be
	movs r1, #182	@ 000596be b621
.org 0x596c0
	adds r1, r1, r7	@ 000596c0 c919
.org 0x596c2
	mov r8, r1	@ 000596c2 8846
.org 0x596c4
	lsls r5, r4, #2	@ 000596c4 a500
.org 0x596c6
	cmp r0, #2	@ 000596c6 0228
.org 0x596c8
	bls.n 0x596de	@ 000596c8 09d9
.org 0x596ca
	ldrb r2, [r1, #0]	@ 000596ca 0a78
.org 0x596cc
	mov r1, r9	@ 000596cc 4946
.org 0x596ce
	adds r0, r1, r5	@ 000596ce 4819
.org 0x596d0
	ldr r1, [r0, #0]	@ 000596d0 0168
.org 0x596d2
	lsls r0, r3, #2	@ 000596d2 9800
.org 0x596d4
	adds r0, r0, r1	@ 000596d4 4018
.org 0x596d6
	ldr r0, [r0, #0]	@ 000596d6 0068
.org 0x596d8
	adds r0, r0, r2	@ 000596d8 8018
.org 0x596da
	movs r1, #0	@ 000596da 0021
.org 0x596dc
	strb r1, [r0, #0]	@ 000596dc 0170
.org 0x596de
	mov r1, r9	@ 000596de 4946
.org 0x596e0
	adds r0, r1, r5	@ 000596e0 4819
.org 0x596e2
	ldr r1, [r0, #0]	@ 000596e2 0168
.org 0x596e4
	lsls r0, r3, #2	@ 000596e4 9800
.org 0x596e6
	adds r0, r0, r1	@ 000596e6 4018
.org 0x596e8
	ldr r0, [r0, #0]	@ 000596e8 0068
.org 0x596ea
	movs r1, #7	@ 000596ea 0721
.org 0x596ec
	bl 0x59b68	@ 000596ec 00f03cfa
.org 0x596f0
	adds r2, r0, #0	@ 000596f0 021c
.org 0x596f2
	ldr r0, [pc, #28]	@ 000596f2 0748
.org 0x596f4
	adds r0, r2, r0	@ 000596f4 1018
.org 0x596f6
	ldrb r0, [r0, #0]	@ 000596f6 0078
.org 0x596f8
	movs r1, #0	@ 000596f8 0021
