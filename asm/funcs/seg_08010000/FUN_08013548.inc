@ FUN_08013548  entry 0x08013548  size 412
.thumb
.org 0x13548
FUN_08013548:
	push {lr}	@ 00013548 00b5
.org 0x1354a
	ldr r0, [pc, #316]	@ 0001354a 4f48
.org 0x1354c
	ldr r1, [pc, #316]	@ 0001354c 4f49
.org 0x1354e
	adds r2, r0, r1	@ 0001354e 4218
.org 0x13550
	movs r1, #0	@ 00013550 0021
.org 0x13552
	strb r1, [r2, #0]	@ 00013552 1170
.org 0x13554
	ldr r3, [pc, #312]	@ 00013554 4e4b
.org 0x13556
	adds r2, r0, r3	@ 00013556 c218
.org 0x13558
	str r1, [r2, #0]	@ 00013558 1160
.org 0x1355a
	subs r3, #27	@ 0001355a 1b3b
.org 0x1355c
	adds r2, r0, r3	@ 0001355c c218
.org 0x1355e
	strb r1, [r2, #0]	@ 0001355e 1170
.org 0x13560
	adds r3, #3	@ 00013560 0333
.org 0x13562
	adds r2, r0, r3	@ 00013562 c218
.org 0x13564
	strb r1, [r2, #0]	@ 00013564 1170
.org 0x13566
	adds r3, #1	@ 00013566 0133
.org 0x13568
	adds r2, r0, r3	@ 00013568 c218
.org 0x1356a
	strb r1, [r2, #0]	@ 0001356a 1170
.org 0x1356c
	adds r3, #1	@ 0001356c 0133
.org 0x1356e
	adds r2, r0, r3	@ 0001356e c218
.org 0x13570
	strb r1, [r2, #0]	@ 00013570 1170
.org 0x13572
	adds r3, #1	@ 00013572 0133
.org 0x13574
	adds r2, r0, r3	@ 00013574 c218
.org 0x13576
	strb r1, [r2, #0]	@ 00013576 1170
.org 0x13578
	adds r3, #1	@ 00013578 0133
.org 0x1357a
	adds r2, r0, r3	@ 0001357a c218
.org 0x1357c
	strb r1, [r2, #0]	@ 0001357c 1170
.org 0x1357e
	adds r3, #1	@ 0001357e 0133
.org 0x13580
	adds r2, r0, r3	@ 00013580 c218
.org 0x13582
	strb r1, [r2, #0]	@ 00013582 1170
.org 0x13584
	adds r3, #1	@ 00013584 0133
.org 0x13586
	adds r2, r0, r3	@ 00013586 c218
.org 0x13588
	strb r1, [r2, #0]	@ 00013588 1170
.org 0x1358a
	adds r3, #1	@ 0001358a 0133
.org 0x1358c
	adds r2, r0, r3	@ 0001358c c218
.org 0x1358e
	strb r1, [r2, #0]	@ 0001358e 1170
.org 0x13590
	adds r3, #1	@ 00013590 0133
.org 0x13592
	adds r2, r0, r3	@ 00013592 c218
.org 0x13594
	strb r1, [r2, #0]	@ 00013594 1170
.org 0x13596
	subs r3, #10	@ 00013596 0a3b
.org 0x13598
	adds r2, r0, r3	@ 00013598 c218
.org 0x1359a
	strb r1, [r2, #0]	@ 0001359a 1170
.org 0x1359c
	adds r3, #1	@ 0001359c 0133
.org 0x1359e
	adds r2, r0, r3	@ 0001359e c218
.org 0x135a0
	strb r1, [r2, #0]	@ 000135a0 1170
.org 0x135a2
	adds r3, #29	@ 000135a2 1d33
.org 0x135a4
	adds r2, r0, r3	@ 000135a4 c218
.org 0x135a6
	str r1, [r2, #0]	@ 000135a6 1160
.org 0x135a8
	adds r3, #4	@ 000135a8 0433
.org 0x135aa
	adds r2, r0, r3	@ 000135aa c218
.org 0x135ac
	str r1, [r2, #0]	@ 000135ac 1160
.org 0x135ae
	ldr r1, [pc, #228]	@ 000135ae 3949
.org 0x135b0
	adds r0, r0, r1	@ 000135b0 4018
.org 0x135b2
	ldrb r1, [r0, #0]	@ 000135b2 0178
.org 0x135b4
	movs r0, #15	@ 000135b4 0f20
.org 0x135b6
	ands r0, r1	@ 000135b6 0840
.org 0x135b8
	cmp r0, #2	@ 000135b8 0228
.org 0x135ba
	bne.n 0x13698	@ 000135ba 6dd1
.org 0x135bc
	movs r0, #2	@ 000135bc 0220
.org 0x135be
	movs r1, #5	@ 000135be 0521
.org 0x135c0
	movs r2, #130	@ 000135c0 8222
.org 0x135c2
	bl 0x74c0	@ 000135c2 f3f77dff
.org 0x135c6
	movs r0, #2	@ 000135c6 0220
.org 0x135c8
	movs r1, #6	@ 000135c8 0621
.org 0x135ca
	movs r2, #129	@ 000135ca 8122
.org 0x135cc
	bl 0x74c0	@ 000135cc f3f778ff
.org 0x135d0
	movs r0, #4	@ 000135d0 0420
.org 0x135d2
	movs r1, #6	@ 000135d2 0621
.org 0x135d4
	movs r2, #148	@ 000135d4 9422
.org 0x135d6
	bl 0x74c0	@ 000135d6 f3f773ff
.org 0x135da
	movs r0, #3	@ 000135da 0320
.org 0x135dc
	movs r1, #3	@ 000135dc 0321
.org 0x135de
	movs r2, #131	@ 000135de 8322
.org 0x135e0
	bl 0x74c0	@ 000135e0 f3f76eff
.org 0x135e4
	movs r0, #4	@ 000135e4 0420
.org 0x135e6
	movs r1, #3	@ 000135e6 0321
.org 0x135e8
	movs r2, #132	@ 000135e8 8422
.org 0x135ea
	bl 0x74c0	@ 000135ea f3f769ff
.org 0x135ee
	movs r0, #5	@ 000135ee 0520
.org 0x135f0
	movs r1, #3	@ 000135f0 0321
.org 0x135f2
	movs r2, #133	@ 000135f2 8522
.org 0x135f4
	bl 0x74c0	@ 000135f4 f3f764ff
.org 0x135f8
	movs r0, #6	@ 000135f8 0620
.org 0x135fa
	movs r1, #3	@ 000135fa 0321
.org 0x135fc
	movs r2, #134	@ 000135fc 8622
.org 0x135fe
	bl 0x74c0	@ 000135fe f3f75fff
.org 0x13602
	movs r0, #13	@ 00013602 0d20
.org 0x13604
	movs r1, #7	@ 00013604 0721
.org 0x13606
	movs r2, #135	@ 00013606 8722
.org 0x13608
	bl 0x74c0	@ 00013608 f3f75aff
.org 0x1360c
	movs r0, #13	@ 0001360c 0d20
.org 0x1360e
	movs r1, #8	@ 0001360e 0821
.org 0x13610
	movs r2, #136	@ 00013610 8822
.org 0x13612
	bl 0x74c0	@ 00013612 f3f755ff
.org 0x13616
	movs r0, #13	@ 00013616 0d20
.org 0x13618
	movs r1, #9	@ 00013618 0921
.org 0x1361a
	movs r2, #137	@ 0001361a 8922
.org 0x1361c
	bl 0x74c0	@ 0001361c f3f750ff
.org 0x13620
	movs r0, #13	@ 00013620 0d20
.org 0x13622
	movs r1, #10	@ 00013622 0a21
.org 0x13624
	movs r2, #138	@ 00013624 8a22
.org 0x13626
	bl 0x74c0	@ 00013626 f3f74bff
.org 0x1362a
	movs r0, #14	@ 0001362a 0e20
.org 0x1362c
	movs r1, #11	@ 0001362c 0b21
.org 0x1362e
	movs r2, #139	@ 0001362e 8b22
.org 0x13630
	bl 0x74c0	@ 00013630 f3f746ff
.org 0x13634
	movs r0, #15	@ 00013634 0f20
.org 0x13636
	movs r1, #11	@ 00013636 0b21
.org 0x13638
	movs r2, #140	@ 00013638 8c22
.org 0x1363a
	bl 0x74c0	@ 0001363a f3f741ff
.org 0x1363e
	movs r0, #16	@ 0001363e 1020
.org 0x13640
	movs r1, #11	@ 00013640 0b21
.org 0x13642
	movs r2, #141	@ 00013642 8d22
.org 0x13644
	bl 0x74c0	@ 00013644 f3f73cff
.org 0x13648
	movs r0, #17	@ 00013648 1120
.org 0x1364a
	movs r1, #11	@ 0001364a 0b21
.org 0x1364c
	movs r2, #142	@ 0001364c 8e22
.org 0x1364e
	bl 0x74c0	@ 0001364e f3f737ff
.org 0x13652
	movs r0, #17	@ 00013652 1120
.org 0x13654
	movs r1, #10	@ 00013654 0a21
.org 0x13656
	movs r2, #143	@ 00013656 8f22
.org 0x13658
	bl 0x74c0	@ 00013658 f3f732ff
.org 0x1365c
	movs r0, #17	@ 0001365c 1120
.org 0x1365e
	movs r1, #9	@ 0001365e 0921
.org 0x13660
	movs r2, #144	@ 00013660 9022
.org 0x13662
	bl 0x74c0	@ 00013662 f3f72dff
.org 0x13666
	movs r0, #17	@ 00013666 1120
.org 0x13668
	movs r1, #8	@ 00013668 0821
.org 0x1366a
	movs r2, #145	@ 0001366a 9122
.org 0x1366c
	bl 0x74c0	@ 0001366c f3f728ff
.org 0x13670
	movs r0, #17	@ 00013670 1120
.org 0x13672
	movs r1, #7	@ 00013672 0721
.org 0x13674
	movs r2, #146	@ 00013674 9222
.org 0x13676
	bl 0x74c0	@ 00013676 f3f723ff
.org 0x1367a
	movs r0, #24	@ 0001367a 1820
.org 0x1367c
	movs r1, #1	@ 0001367c 0121
.org 0x1367e
	movs r2, #147	@ 0001367e 9322
.org 0x13680
	bl 0x74c0	@ 00013680 f3f71eff
.org 0x13684
	b.n 0x136f2	@ 00013684 35e0
.org 0x13686
	.byte 0x00	@ 00013686 data
.org 0x13687
	.byte 0x00	@ 00013687 data
.org 0x13688
	.byte 0xb0,0x0a,0x00,0x02	@ 00013688 data
.org 0x1368c
	.byte 0x28,0xd0,0x02,0x00	@ 0001368c data
.org 0x13690
	.byte 0x44,0xd0,0x02,0x00	@ 00013690 data
.org 0x13694
	.byte 0x10,0xc0,0x02,0x00	@ 00013694 data
.org 0x13698
	movs r0, #3	@ 00013698 0320
.org 0x1369a
	movs r1, #13	@ 0001369a 0d21
.org 0x1369c
	movs r2, #0	@ 0001369c 0022
.org 0x1369e
	bl 0x74c0	@ 0001369e f3f70fff
.org 0x136a2
	movs r0, #4	@ 000136a2 0420
.org 0x136a4
	movs r1, #13	@ 000136a4 0d21
.org 0x136a6
	movs r2, #0	@ 000136a6 0022
.org 0x136a8
	bl 0x74c0	@ 000136a8 f3f70aff
.org 0x136ac
	movs r0, #5	@ 000136ac 0520
.org 0x136ae
	movs r1, #13	@ 000136ae 0d21
.org 0x136b0
	movs r2, #0	@ 000136b0 0022
.org 0x136b2
	bl 0x74c0	@ 000136b2 f3f705ff
.org 0x136b6
	movs r0, #6	@ 000136b6 0620
.org 0x136b8
	movs r1, #13	@ 000136b8 0d21
.org 0x136ba
	movs r2, #0	@ 000136ba 0022
.org 0x136bc
	bl 0x74c0	@ 000136bc f3f700ff
.org 0x136c0
	movs r0, #4	@ 000136c0 0420
.org 0x136c2
	movs r1, #14	@ 000136c2 0e21
.org 0x136c4
	movs r2, #0	@ 000136c4 0022
.org 0x136c6
	bl 0x74c0	@ 000136c6 f3f7fbfe
.org 0x136ca
	movs r0, #5	@ 000136ca 0520
.org 0x136cc
	movs r1, #14	@ 000136cc 0e21
.org 0x136ce
	movs r2, #0	@ 000136ce 0022
.org 0x136d0
	bl 0x74c0	@ 000136d0 f3f7f6fe
.org 0x136d4
	movs r0, #2	@ 000136d4 0220
.org 0x136d6
	movs r1, #15	@ 000136d6 0f21
.org 0x136d8
	movs r2, #0	@ 000136d8 0022
.org 0x136da
	bl 0x74c0	@ 000136da f3f7f1fe
.org 0x136de
	movs r0, #2	@ 000136de 0220
.org 0x136e0
	movs r1, #16	@ 000136e0 1021
.org 0x136e2
	movs r2, #0	@ 000136e2 0022
