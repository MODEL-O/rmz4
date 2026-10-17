@ FUN_080af690  entry 0x080af690  size 218
.thumb
.org 0xaf690
FUN_080af690:
	push {r4, r5, r6, lr}	@ 000af690 70b5
.org 0xaf692
	adds r4, r0, #0	@ 000af692 041c
.org 0xaf694
	movs r5, #0	@ 000af694 0025
.org 0xaf696
	ldrb r0, [r4, #14]	@ 000af696 a07b
.org 0xaf698
	cmp r0, #0	@ 000af698 0028
.org 0xaf69a
	bne.n 0xaf6c6	@ 000af69a 14d1
.org 0xaf69c
	str r5, [r4, #92]	@ 000af69c e565
.org 0xaf69e
	strb r5, [r4, #18]	@ 000af69e a574
.org 0xaf6a0
	strb r5, [r4, #19]	@ 000af6a0 e574
.org 0xaf6a2
	adds r1, r4, #0	@ 000af6a2 211c
.org 0xaf6a4
	adds r1, #181	@ 000af6a4 b531
.org 0xaf6a6
	movs r0, #4	@ 000af6a6 0420
.org 0xaf6a8
	strb r0, [r1, #0]	@ 000af6a8 0870
.org 0xaf6aa
	movs r0, #184	@ 000af6aa b820
.org 0xaf6ac
	lsls r0, r0, #1	@ 000af6ac 4000
.org 0xaf6ae
	bl 0x2b10	@ 000af6ae 53f72ffa
.org 0xaf6b2
	ldr r1, [r4, #44]	@ 000af6b2 e16a
.org 0xaf6b4
	cmp r1, #0	@ 000af6b4 0029
.org 0xaf6b6
	beq.n 0xaf6c0	@ 000af6b6 03d0
.org 0xaf6b8
	movs r0, #1	@ 000af6b8 0120
.org 0xaf6ba
	strb r0, [r1, #13]	@ 000af6ba 4873
.org 0xaf6bc
	ldr r0, [r4, #44]	@ 000af6bc e06a
.org 0xaf6be
	strb r5, [r0, #14]	@ 000af6be 8573
.org 0xaf6c0
	ldrb r0, [r4, #14]	@ 000af6c0 a07b
.org 0xaf6c2
	adds r0, #1	@ 000af6c2 0130
.org 0xaf6c4
	strb r0, [r4, #14]	@ 000af6c4 a073
.org 0xaf6c6
	adds r6, r4, #0	@ 000af6c6 261c
.org 0xaf6c8
	adds r6, #181	@ 000af6c8 b536
.org 0xaf6ca
	ldrb r0, [r4, #19]	@ 000af6ca e07c
.org 0xaf6cc
	adds r5, r4, #0	@ 000af6cc 251c
.org 0xaf6ce
	adds r5, #112	@ 000af6ce 7035
.org 0xaf6d0
	ldrb r1, [r6, #0]	@ 000af6d0 3178
.org 0xaf6d2
	cmp r0, r1	@ 000af6d2 8842
.org 0xaf6d4
	bne.n 0xaf708	@ 000af6d4 18d1
.org 0xaf6d6
	ldrb r0, [r4, #30]	@ 000af6d6 a07f
.org 0xaf6d8
	lsls r0, r0, #8	@ 000af6d8 0002
.org 0xaf6da
	ldrb r1, [r5, #0]	@ 000af6da 2978
.org 0xaf6dc
	orrs r1, r0	@ 000af6dc 0143
.org 0xaf6de
	adds r1, #2	@ 000af6de 0231
.org 0xaf6e0
	lsls r1, r1, #16	@ 000af6e0 0904
.org 0xaf6e2
	lsrs r1, r1, #16	@ 000af6e2 090c
.org 0xaf6e4
	adds r0, r4, #0	@ 000af6e4 201c
.org 0xaf6e6
	bl 0x1cf00	@ 000af6e6 6df70bfc
.org 0xaf6ea
	movs r0, #0	@ 000af6ea 0020
.org 0xaf6ec
	strb r0, [r4, #19]	@ 000af6ec e074
.org 0xaf6ee
	ldr r0, [r4, #92]	@ 000af6ee e06d
.org 0xaf6f0
	ldr r1, [r4, #100]	@ 000af6f0 616e
.org 0xaf6f2
	adds r0, r0, r1	@ 000af6f2 4018
.org 0xaf6f4
	str r0, [r4, #92]	@ 000af6f4 e065
.org 0xaf6f6
	ldrb r0, [r4, #18]	@ 000af6f6 a07c
.org 0xaf6f8
	adds r0, #1	@ 000af6f8 0130
.org 0xaf6fa
	strb r0, [r4, #18]	@ 000af6fa a074
.org 0xaf6fc
	lsls r0, r0, #24	@ 000af6fc 0006
.org 0xaf6fe
	lsrs r0, r0, #24	@ 000af6fe 000e
.org 0xaf700
	cmp r0, #5	@ 000af700 0528
.org 0xaf702
	bne.n 0xaf708	@ 000af702 01d1
.org 0xaf704
	movs r0, #2	@ 000af704 0220
.org 0xaf706
	strb r0, [r6, #0]	@ 000af706 3070
.org 0xaf708
	ldrb r0, [r4, #19]	@ 000af708 e07c
.org 0xaf70a
	adds r0, #1	@ 000af70a 0130
.org 0xaf70c
	strb r0, [r4, #19]	@ 000af70c e074
.org 0xaf70e
	ldrb r0, [r4, #30]	@ 000af70e a07f
.org 0xaf710
	lsls r0, r0, #8	@ 000af710 0002
.org 0xaf712
	ldrb r1, [r5, #0]	@ 000af712 2978
.org 0xaf714
	orrs r0, r1	@ 000af714 0843
.org 0xaf716
	ldr r1, [pc, #84]	@ 000af716 1549
.org 0xaf718
	cmp r0, r1	@ 000af718 8842
.org 0xaf71a
	ble.n 0xaf72c	@ 000af71a 07dd
.org 0xaf71c
	ldrb r1, [r4, #17]	@ 000af71c 617c
.org 0xaf71e
	movs r2, #163	@ 000af71e a322
.org 0xaf720
	lsls r2, r2, #8	@ 000af720 1202
.org 0xaf722
	adds r0, r2, #0	@ 000af722 101c
.org 0xaf724
	orrs r1, r0	@ 000af724 0143
.org 0xaf726
	adds r0, r4, #0	@ 000af726 201c
.org 0xaf728
	bl 0x1cf00	@ 000af728 6df7eafb
.org 0xaf72c
	ldr r0, [r4, #84]	@ 000af72c 606d
.org 0xaf72e
	ldr r1, [r4, #92]	@ 000af72e e16d
.org 0xaf730
	adds r0, r0, r1	@ 000af730 4018
.org 0xaf732
	str r0, [r4, #84]	@ 000af732 6065
.org 0xaf734
	ldr r1, [r4, #88]	@ 000af734 a16d
.org 0xaf736
	bl 0x7c7c	@ 000af736 58f7a1fa
.org 0xaf73a
	lsls r0, r0, #16	@ 000af73a 0004
.org 0xaf73c
	lsrs r5, r0, #16	@ 000af73c 050c
.org 0xaf73e
	cmp r5, #0	@ 000af73e 002d
.org 0xaf740
	beq.n 0xaf758	@ 000af740 0ad0
.org 0xaf742
	cmp r5, #15	@ 000af742 0f2d
.org 0xaf744
	beq.n 0xaf758	@ 000af744 08d0
.org 0xaf746
	ldr r1, [pc, #40]	@ 000af746 0a49
.org 0xaf748
	ldrb r0, [r4, #9]	@ 000af748 607a
.org 0xaf74a
	lsls r0, r0, #2	@ 000af74a 8000
.org 0xaf74c
	adds r0, r0, r1	@ 000af74c 4018
.org 0xaf74e
	movs r1, #2	@ 000af74e 0221
.org 0xaf750
	str r1, [r4, #12]	@ 000af750 e160
.org 0xaf752
	ldr r0, [r0, #0]	@ 000af752 0068
.org 0xaf754
	ldr r0, [r0, #8]	@ 000af754 8068
.org 0xaf756
	str r0, [r4, #20]	@ 000af756 6061
.org 0xaf758
	ldrb r0, [r4, #18]	@ 000af758 a07c
.org 0xaf75a
	cmp r0, #10	@ 000af75a 0a28
.org 0xaf75c
	bne.n 0xaf764	@ 000af75c 02d1
.org 0xaf75e
	movs r0, #0	@ 000af75e 0020
.org 0xaf760
	strb r0, [r4, #13]	@ 000af760 6073
.org 0xaf762
	strb r0, [r4, #14]	@ 000af762 a073
.org 0xaf764
	pop {r4, r5, r6}	@ 000af764 70bc
.org 0xaf766
	pop {r0}	@ 000af766 01bc
.org 0xaf768
	bx r0	@ 000af768 0047
