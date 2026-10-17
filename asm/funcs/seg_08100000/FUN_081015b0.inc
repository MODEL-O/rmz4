@ FUN_081015b0  entry 0x081015b0  size 342
.thumb
.org 0x1015b0
FUN_081015b0:
	push {r4, r5, lr}	@ 001015b0 30b5
.org 0x1015b2
	adds r4, r0, #0	@ 001015b2 041c
.org 0x1015b4
	bl 0x1cff0	@ 001015b4 1bf71cfd
.org 0x1015b8
	ldrb r2, [r4, #15]	@ 001015b8 e27b
.org 0x1015ba
	cmp r2, #0	@ 001015ba 002a
.org 0x1015bc
	beq.n 0x101618	@ 001015bc 2cd0
.org 0x1015be
	movs r5, #1	@ 001015be 0125
.org 0x1015c0
	ldrb r0, [r4, #16]	@ 001015c0 207c
.org 0x1015c2
	cmp r0, #1	@ 001015c2 0128
.org 0x1015c4
	beq.n 0x1015ca	@ 001015c4 01d0
.org 0x1015c6
	cmp r0, #3	@ 001015c6 0328
.org 0x1015c8
	bne.n 0x1015d8	@ 001015c8 06d1
.org 0x1015ca
	ldr r1, [pc, #8]	@ 001015ca 0249
.org 0x1015cc
	adds r0, r4, #0	@ 001015cc 201c
.org 0x1015ce
	bl 0x1cf00	@ 001015ce 1bf797fc
.org 0x1015d2
	b.n 0x1015e2	@ 001015d2 06e0
.org 0x1015d4
	.byte 0x01,0xc0,0x00,0x00	@ 001015d4 data
.org 0x1015d8
	movs r1, #192	@ 001015d8 c021
.org 0x1015da
	lsls r1, r1, #8	@ 001015da 0902
.org 0x1015dc
	adds r0, r4, #0	@ 001015dc 201c
.org 0x1015de
	bl 0x1cf00	@ 001015de 1bf78ffc
.org 0x1015e2
	ldr r0, [pc, #44]	@ 001015e2 0b48
.org 0x1015e4
	adds r1, r4, #0	@ 001015e4 211c
.org 0x1015e6
	adds r1, #84	@ 001015e6 5431
.org 0x1015e8
	bl 0x1fb14	@ 001015e8 1ef794fa
.org 0x1015ec
	movs r1, #128	@ 001015ec 8021
.org 0x1015ee
	lsls r1, r1, #8	@ 001015ee 0902
.org 0x1015f0
	cmp r0, r1	@ 001015f0 8842
.org 0x1015f2
	bls.n 0x1016a6	@ 001015f2 58d9
.org 0x1015f4
	ldr r1, [pc, #28]	@ 001015f4 0749
.org 0x1015f6
	ldrb r0, [r4, #9]	@ 001015f6 607a
.org 0x1015f8
	lsls r0, r0, #2	@ 001015f8 8000
.org 0x1015fa
	adds r0, r0, r1	@ 001015fa 4018
.org 0x1015fc
	movs r1, #2	@ 001015fc 0221
.org 0x1015fe
	str r1, [r4, #12]	@ 001015fe e160
.org 0x101600
	ldr r0, [r0, #0]	@ 00101600 0068
.org 0x101602
	ldr r0, [r0, #8]	@ 00101602 8068
.org 0x101604
	str r0, [r4, #20]	@ 00101604 6061
.org 0x101606
	adds r0, r4, #0	@ 00101606 201c
.org 0x101608
	bl 0x101728	@ 00101608 00f08ef8
.org 0x10160c
	b.n 0x101720	@ 0010160c 88e0
.org 0x10160e
	.byte 0x00	@ 0010160e data
.org 0x10160f
	.byte 0x00	@ 0010160f data
.org 0x101610
	.byte 0xf8,0xe9,0x02,0x02	@ 00101610 data
.org 0x101614
	.byte 0xfc,0x92,0x86,0x08	@ 00101614 data
.org 0x101618
	ldr r1, [r4, #40]	@ 00101618 a16a
.org 0x10161a
	ldrb r0, [r1, #12]	@ 0010161a 087b
.org 0x10161c
	cmp r0, #1	@ 0010161c 0128
.org 0x10161e
	bls.n 0x101626	@ 0010161e 02d9
.org 0x101620
	adds r0, r2, #1	@ 00101620 501c
.org 0x101622
	strb r0, [r4, #15]	@ 00101622 e073
.org 0x101624
	b.n 0x101720	@ 00101624 7ce0
.org 0x101626
	ldrb r2, [r4, #16]	@ 00101626 227c
.org 0x101628
	adds r0, r1, #0	@ 00101628 081c
.org 0x10162a
	adds r0, #216	@ 0010162a d830
.org 0x10162c
	adds r0, r0, r2	@ 0010162c 8018
.org 0x10162e
	ldrb r0, [r0, #0]	@ 0010162e 0078
.org 0x101630
	cmp r0, #0	@ 00101630 0028
.org 0x101632
	beq.n 0x1016a4	@ 00101632 37d0
.org 0x101634
	adds r0, r2, #0	@ 00101634 101c
.org 0x101636
	cmp r0, #1	@ 00101636 0128
.org 0x101638
	beq.n 0x10163e	@ 00101638 01d0
.org 0x10163a
	cmp r0, #3	@ 0010163a 0328
.org 0x10163c
	bne.n 0x101664	@ 0010163c 12d1
.org 0x10163e
	ldrb r0, [r4, #30]	@ 0010163e a07f
.org 0x101640
	lsls r0, r0, #8	@ 00101640 0002
.org 0x101642
	adds r1, r4, #0	@ 00101642 211c
.org 0x101644
	adds r1, #112	@ 00101644 7031
.org 0x101646
	ldrb r1, [r1, #0]	@ 00101646 0978
.org 0x101648
	orrs r0, r1	@ 00101648 0843
.org 0x10164a
	ldr r1, [pc, #20]	@ 0010164a 0549
.org 0x10164c
	cmp r0, r1	@ 0010164c 8842
.org 0x10164e
	beq.n 0x101682	@ 0010164e 18d0
.org 0x101650
	adds r0, r4, #0	@ 00101650 201c
.org 0x101652
	bl 0x1cf00	@ 00101652 1bf755fc
.org 0x101656
	adds r0, r4, #0	@ 00101656 201c
.org 0x101658
	bl 0x1cff0	@ 00101658 1bf7cafc
.org 0x10165c
	b.n 0x101682	@ 0010165c 11e0
.org 0x10165e
	.byte 0x00	@ 0010165e data
.org 0x10165f
	.byte 0x00	@ 0010165f data
.org 0x101660
	.byte 0x03,0xc0,0x00,0x00	@ 00101660 data
.org 0x101664
	ldrb r0, [r4, #30]	@ 00101664 a07f
.org 0x101666
	lsls r0, r0, #8	@ 00101666 0002
.org 0x101668
	adds r1, r4, #0	@ 00101668 211c
.org 0x10166a
	adds r1, #112	@ 0010166a 7031
.org 0x10166c
	ldrb r1, [r1, #0]	@ 0010166c 0978
.org 0x10166e
	orrs r0, r1	@ 0010166e 0843
.org 0x101670
	ldr r1, [pc, #40]	@ 00101670 0a49
.org 0x101672
	cmp r0, r1	@ 00101672 8842
.org 0x101674
	beq.n 0x101682	@ 00101674 05d0
.org 0x101676
	adds r0, r4, #0	@ 00101676 201c
.org 0x101678
	bl 0x1cf00	@ 00101678 1bf742fc
.org 0x10167c
	adds r0, r4, #0	@ 0010167c 201c
.org 0x10167e
	bl 0x1cff0	@ 0010167e 1bf7b7fc
.org 0x101682
	movs r5, #0	@ 00101682 0025
.org 0x101684
	ldr r0, [r4, #88]	@ 00101684 a06d
.org 0x101686
	subs r0, #192	@ 00101686 c038
.org 0x101688
	str r0, [r4, #88]	@ 00101688 a065
.org 0x10168a
	adds r1, r4, #0	@ 0010168a 211c
.org 0x10168c
	adds r1, #184	@ 0010168c b831
.org 0x10168e
	ldr r1, [r1, #0]	@ 0010168e 0968
.org 0x101690
	ldr r2, [pc, #12]	@ 00101690 034a
.org 0x101692
	adds r1, r1, r2	@ 00101692 8918
.org 0x101694
	cmp r0, r1	@ 00101694 8842
.org 0x101696
	bge.n 0x1016a6	@ 00101696 06da
.org 0x101698
	str r1, [r4, #88]	@ 00101698 a165
.org 0x10169a
	b.n 0x1016a6	@ 0010169a 04e0
.org 0x10169c
	.byte 0x02,0xc0,0x00,0x00	@ 0010169c data
.org 0x1016a0
	.byte 0x00,0xd8,0xff,0xff	@ 001016a0 data
.org 0x1016a4
	movs r5, #1	@ 001016a4 0125
.org 0x1016a6
	cmp r5, #0	@ 001016a6 002d
.org 0x1016a8
	beq.n 0x10171c	@ 001016a8 38d0
.org 0x1016aa
	ldrb r0, [r4, #16]	@ 001016aa 207c
.org 0x1016ac
	cmp r0, #1	@ 001016ac 0128
.org 0x1016ae
	beq.n 0x1016b4	@ 001016ae 01d0
.org 0x1016b0
	cmp r0, #3	@ 001016b0 0328
.org 0x1016b2
	bne.n 0x1016d8	@ 001016b2 11d1
.org 0x1016b4
	ldrb r0, [r4, #30]	@ 001016b4 a07f
.org 0x1016b6
	lsls r0, r0, #8	@ 001016b6 0002
.org 0x1016b8
	adds r1, r4, #0	@ 001016b8 211c
.org 0x1016ba
	adds r1, #112	@ 001016ba 7031
.org 0x1016bc
	ldrb r1, [r1, #0]	@ 001016bc 0978
.org 0x1016be
	orrs r0, r1	@ 001016be 0843
.org 0x1016c0
	ldr r1, [pc, #16]	@ 001016c0 0449
.org 0x1016c2
	cmp r0, r1	@ 001016c2 8842
.org 0x1016c4
	beq.n 0x1016f8	@ 001016c4 18d0
.org 0x1016c6
	adds r0, r4, #0	@ 001016c6 201c
.org 0x1016c8
	bl 0x1cf00	@ 001016c8 1bf71afc
.org 0x1016cc
	adds r0, r4, #0	@ 001016cc 201c
.org 0x1016ce
	bl 0x1cff0	@ 001016ce 1bf78ffc
.org 0x1016d2
	b.n 0x1016f8	@ 001016d2 11e0
.org 0x1016d4
	.byte 0x01,0xc0,0x00,0x00	@ 001016d4 data
.org 0x1016d8
	ldrb r0, [r4, #30]	@ 001016d8 a07f
.org 0x1016da
	lsls r0, r0, #8	@ 001016da 0002
.org 0x1016dc
	adds r1, r4, #0	@ 001016dc 211c
.org 0x1016de
	adds r1, #112	@ 001016de 7031
.org 0x1016e0
	ldrb r1, [r1, #0]	@ 001016e0 0978
.org 0x1016e2
	orrs r0, r1	@ 001016e2 0843
.org 0x1016e4
	movs r1, #192	@ 001016e4 c021
.org 0x1016e6
	lsls r1, r1, #8	@ 001016e6 0902
.org 0x1016e8
	cmp r0, r1	@ 001016e8 8842
.org 0x1016ea
	beq.n 0x1016f8	@ 001016ea 05d0
.org 0x1016ec
	adds r0, r4, #0	@ 001016ec 201c
.org 0x1016ee
	bl 0x1cf00	@ 001016ee 1bf707fc
.org 0x1016f2
	adds r0, r4, #0	@ 001016f2 201c
.org 0x1016f4
	bl 0x1cff0	@ 001016f4 1bf77cfc
.org 0x1016f8
	ldrb r0, [r4, #15]	@ 001016f8 e07b
.org 0x1016fa
	cmp r0, #0	@ 001016fa 0028
.org 0x1016fc
	bne.n 0x101704	@ 001016fc 02d1
.org 0x1016fe
	ldr r0, [r4, #44]	@ 001016fe e06a
.org 0x101700
	cmp r0, #0	@ 00101700 0028
.org 0x101702
	beq.n 0x101718	@ 00101702 09d0
.org 0x101704
	ldr r0, [r4, #88]	@ 00101704 a06d
