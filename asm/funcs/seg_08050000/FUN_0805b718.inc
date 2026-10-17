@ FUN_0805b718  entry 0x0805b718  size 160
.thumb
.org 0x5b718
FUN_0805b718:
	push {r4, r5, lr}	@ 0005b718 30b5
.org 0x5b71a
	adds r4, r0, #0	@ 0005b71a 041c
.org 0x5b71c
	ldrb r5, [r4, #15]	@ 0005b71c e57b
.org 0x5b71e
	cmp r5, #0	@ 0005b71e 002d
.org 0x5b720
	bne.n 0x5b75c	@ 0005b720 1cd1
.org 0x5b722
	adds r0, #116	@ 0005b722 7430
.org 0x5b724
	ldr r1, [pc, #144]	@ 0005b724 2449
.org 0x5b726
	bl 0x5784	@ 0005b726 aaf72df8
.org 0x5b72a
	ldrb r0, [r4, #30]	@ 0005b72a a07f
.org 0x5b72c
	lsls r0, r0, #8	@ 0005b72c 0002
.org 0x5b72e
	adds r1, r4, #0	@ 0005b72e 211c
.org 0x5b730
	adds r1, #112	@ 0005b730 7031
.org 0x5b732
	ldrb r1, [r1, #0]	@ 0005b732 0978
.org 0x5b734
	orrs r0, r1	@ 0005b734 0843
.org 0x5b736
	ldr r1, [pc, #132]	@ 0005b736 2149
.org 0x5b738
	cmp r0, r1	@ 0005b738 8842
.org 0x5b73a
	beq.n 0x5b74a	@ 0005b73a 06d0
.org 0x5b73c
	adds r0, r4, #0	@ 0005b73c 201c
.org 0x5b73e
	bl 0x1cf00	@ 0005b73e c1f7dffb
.org 0x5b742
	adds r1, r4, #0	@ 0005b742 211c
.org 0x5b744
	adds r1, #189	@ 0005b744 bd31
.org 0x5b746
	movs r0, #1	@ 0005b746 0120
.org 0x5b748
	strb r0, [r1, #0]	@ 0005b748 0870
.org 0x5b74a
	str r5, [r4, #96]	@ 0005b74a 2566
.org 0x5b74c
	movs r0, #32	@ 0005b74c 2020
.org 0x5b74e
	negs r0, r0	@ 0005b74e 4042
.org 0x5b750
	str r0, [r4, #104]	@ 0005b750 a066
.org 0x5b752
	movs r0, #1	@ 0005b752 0120
.org 0x5b754
	strb r0, [r4, #18]	@ 0005b754 a074
.org 0x5b756
	ldrb r0, [r4, #15]	@ 0005b756 e07b
.org 0x5b758
	adds r0, #1	@ 0005b758 0130
.org 0x5b75a
	strb r0, [r4, #15]	@ 0005b75a e073
.org 0x5b75c
	adds r0, r4, #0	@ 0005b75c 201c
.org 0x5b75e
	bl 0x1cff0	@ 0005b75e c1f747fc
.org 0x5b762
	ldrb r0, [r4, #18]	@ 0005b762 a07c
.org 0x5b764
	cmp r0, #0	@ 0005b764 0028
.org 0x5b766
	beq.n 0x5b77e	@ 0005b766 0ad0
.org 0x5b768
	ldr r0, [r4, #88]	@ 0005b768 a06d
.org 0x5b76a
	ldr r1, [r4, #96]	@ 0005b76a 216e
.org 0x5b76c
	adds r0, r0, r1	@ 0005b76c 4018
.org 0x5b76e
	str r0, [r4, #88]	@ 0005b76e a065
.org 0x5b770
	ldr r0, [r4, #104]	@ 0005b770 a06e
.org 0x5b772
	adds r1, r1, r0	@ 0005b772 0918
.org 0x5b774
	str r1, [r4, #96]	@ 0005b774 2166
.org 0x5b776
	ldr r0, [pc, #72]	@ 0005b776 1248
.org 0x5b778
	cmp r1, r0	@ 0005b778 8142
.org 0x5b77a
	bge.n 0x5b77e	@ 0005b77a 00da
.org 0x5b77c
	str r0, [r4, #96]	@ 0005b77c 2066
.org 0x5b77e
	adds r0, r4, #0	@ 0005b77e 201c
.org 0x5b780
	adds r0, #180	@ 0005b780 b430
.org 0x5b782
	ldr r1, [r4, #88]	@ 0005b782 a16d
.org 0x5b784
	ldr r0, [r0, #0]	@ 0005b784 0068
.org 0x5b786
	subs r0, r0, r1	@ 0005b786 401a
.org 0x5b788
	ldr r1, [pc, #56]	@ 0005b788 0e49
.org 0x5b78a
	adds r0, r0, r1	@ 0005b78a 4018
.org 0x5b78c
	movs r1, #160	@ 0005b78c a021
.org 0x5b78e
	lsls r1, r1, #9	@ 0005b78e 4902
.org 0x5b790
	cmp r0, r1	@ 0005b790 8842
.org 0x5b792
	bls.n 0x5b7b2	@ 0005b792 0ed9
.org 0x5b794
	movs r0, #0	@ 0005b794 0020
.org 0x5b796
	strb r0, [r4, #18]	@ 0005b796 a074
.org 0x5b798
	adds r0, r4, #0	@ 0005b798 201c
.org 0x5b79a
	adds r0, #200	@ 0005b79a c830
.org 0x5b79c
	ldr r0, [r0, #0]	@ 0005b79c 0068
.org 0x5b79e
	cmp r0, #0	@ 0005b79e 0028
.org 0x5b7a0
	beq.n 0x5b7ac	@ 0005b7a0 04d0
.org 0x5b7a2
	adds r0, r4, #0	@ 0005b7a2 201c
.org 0x5b7a4
	adds r0, #191	@ 0005b7a4 bf30
.org 0x5b7a6
	ldrb r0, [r0, #0]	@ 0005b7a6 0078
.org 0x5b7a8
	cmp r0, #1	@ 0005b7a8 0128
.org 0x5b7aa
	beq.n 0x5b7b2	@ 0005b7aa 02d0
.org 0x5b7ac
	adds r0, r4, #0	@ 0005b7ac 201c
.org 0x5b7ae
	bl 0x5c174	@ 0005b7ae 00f0e1fc
.org 0x5b7b2
	pop {r4, r5}	@ 0005b7b2 30bc
.org 0x5b7b4
	pop {r0}	@ 0005b7b4 01bc
.org 0x5b7b6
	bx r0	@ 0005b7b6 0047
