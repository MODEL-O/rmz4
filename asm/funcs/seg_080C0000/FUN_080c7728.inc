@ FUN_080c7728  entry 0x080c7728  size 270
.thumb
.org 0xc7728
FUN_080c7728:
	push {r4, r5, r6, r7, lr}	@ 000c7728 f0b5
.org 0xc772a
	sub sp, #12	@ 000c772a 83b0
.org 0xc772c
	adds r6, r0, #0	@ 000c772c 061c
.org 0xc772e
	mov r1, sp	@ 000c772e 6946
.org 0xc7730
	ldr r0, [pc, #132]	@ 000c7730 2148
.org 0xc7732
	ldmia r0!, {r2, r3, r4}	@ 000c7732 1cc8
.org 0xc7734
	stmia r1!, {r2, r3, r4}	@ 000c7734 1cc1
.org 0xc7736
	ldr r0, [r6, #40]	@ 000c7736 b06a
.org 0xc7738
	ldrb r7, [r6, #17]	@ 000c7738 777c
.org 0xc773a
	adds r1, r6, #0	@ 000c773a 311c
.org 0xc773c
	adds r1, #180	@ 000c773c b431
.org 0xc773e
	ldrb r4, [r1, #0]	@ 000c773e 0c78
.org 0xc7740
	bl 0x66160	@ 000c7740 9ef70efd
.org 0xc7744
	lsls r0, r0, #24	@ 000c7744 0006
.org 0xc7746
	ldr r2, [pc, #116]	@ 000c7746 1d4a
.org 0xc7748
	ldrb r1, [r6, #9]	@ 000c7748 717a
.org 0xc774a
	lsls r1, r1, #2	@ 000c774a 8900
.org 0xc774c
	adds r1, r1, r2	@ 000c774c 8918
.org 0xc774e
	movs r2, #1	@ 000c774e 0122
.org 0xc7750
	str r2, [r6, #12]	@ 000c7750 f260
.org 0xc7752
	ldr r1, [r1, #0]	@ 000c7752 0968
.org 0xc7754
	ldr r1, [r1, #4]	@ 000c7754 4968
.org 0xc7756
	str r1, [r6, #20]	@ 000c7756 7161
.org 0xc7758
	ldrb r2, [r6, #10]	@ 000c7758 b27a
.org 0xc775a
	movs r1, #1	@ 000c775a 0121
.org 0xc775c
	movs r5, #0	@ 000c775c 0025
.org 0xc775e
	orrs r1, r2	@ 000c775e 1143
.org 0xc7760
	movs r2, #2	@ 000c7760 0222
.org 0xc7762
	orrs r1, r2	@ 000c7762 1143
.org 0xc7764
	strb r1, [r6, #10]	@ 000c7764 b172
.org 0xc7766
	lsrs r0, r0, #22	@ 000c7766 800d
.org 0xc7768
	add r0, sp	@ 000c7768 6844
.org 0xc776a
	ldr r1, [r0, #0]	@ 000c776a 0168
.org 0xc776c
	adds r0, r6, #0	@ 000c776c 301c
.org 0xc776e
	adds r0, #184	@ 000c776e b830
.org 0xc7770
	str r1, [r0, #0]	@ 000c7770 0160
.org 0xc7772
	ldr r2, [pc, #76]	@ 000c7772 134a
.org 0xc7774
	adds r0, r4, #0	@ 000c7774 201c
.org 0xc7776
	adds r0, #64	@ 000c7776 4030
.org 0xc7778
	lsls r0, r0, #24	@ 000c7778 0006
.org 0xc777a
	lsrs r0, r0, #23	@ 000c777a c00d
.org 0xc777c
	adds r0, r0, r2	@ 000c777c 8018
.org 0xc777e
	movs r3, #0	@ 000c777e 0023
.org 0xc7780
	ldrsh r0, [r0, r3]	@ 000c7780 c05e
.org 0xc7782
	muls r0, r1	@ 000c7782 4843
.org 0xc7784
	cmp r0, #0	@ 000c7784 0028
.org 0xc7786
	bge.n 0xc778a	@ 000c7786 00da
.org 0xc7788
	adds r0, #255	@ 000c7788 ff30
.org 0xc778a
	asrs r0, r0, #8	@ 000c778a 0012
.org 0xc778c
	str r0, [r6, #92]	@ 000c778c f065
.org 0xc778e
	lsls r0, r4, #1	@ 000c778e 6000
.org 0xc7790
	adds r0, r0, r2	@ 000c7790 8018
.org 0xc7792
	movs r2, #0	@ 000c7792 0022
.org 0xc7794
	ldrsh r0, [r0, r2]	@ 000c7794 805e
.org 0xc7796
	muls r0, r1	@ 000c7796 4843
.org 0xc7798
	cmp r0, #0	@ 000c7798 0028
.org 0xc779a
	bge.n 0xc779e	@ 000c779a 00da
.org 0xc779c
	adds r0, #255	@ 000c779c ff30
.org 0xc779e
	asrs r0, r0, #8	@ 000c779e 0012
.org 0xc77a0
	str r0, [r6, #96]	@ 000c77a0 3066
.org 0xc77a2
	adds r0, r6, #0	@ 000c77a2 301c
.org 0xc77a4
	bl 0x1cd28	@ 000c77a4 55f7c0fa
.org 0xc77a8
	adds r2, r7, #0	@ 000c77a8 3a1c
.org 0xc77aa
	cmp r2, #0	@ 000c77aa 002a
.org 0xc77ac
	beq.n 0xc77c4	@ 000c77ac 0ad0
.org 0xc77ae
	ldrb r0, [r6, #10]	@ 000c77ae b07a
.org 0xc77b0
	movs r1, #16	@ 000c77b0 1021
.org 0xc77b2
	orrs r0, r1	@ 000c77b2 0843
.org 0xc77b4
	b.n 0xc77ca	@ 000c77b4 09e0
.org 0xc77b6
	.byte 0x00	@ 000c77b6 data
.org 0xc77b7
	.byte 0x00	@ 000c77b7 data
.org 0xc77b8
	.byte 0x80,0xa1,0x12,0x08	@ 000c77b8 data
.org 0xc77bc
	.byte 0xf4,0x49,0x86,0x08	@ 000c77bc data
.org 0xc77c0
	.byte 0x0c,0x93,0x12,0x08	@ 000c77c0 data
.org 0xc77c4
	ldrb r1, [r6, #10]	@ 000c77c4 b17a
.org 0xc77c6
	movs r0, #239	@ 000c77c6 ef20
.org 0xc77c8
	ands r0, r1	@ 000c77c8 0840
.org 0xc77ca
	strb r0, [r6, #10]	@ 000c77ca b072
.org 0xc77cc
	movs r1, #1	@ 000c77cc 0121
.org 0xc77ce
	ands r1, r2	@ 000c77ce 1140
.org 0xc77d0
	adds r0, r6, #0	@ 000c77d0 301c
.org 0xc77d2
	adds r0, #76	@ 000c77d2 4c30
.org 0xc77d4
	strb r1, [r0, #0]	@ 000c77d4 0170
.org 0xc77d6
	adds r3, r6, #0	@ 000c77d6 331c
.org 0xc77d8
	adds r3, #74	@ 000c77d8 4a33
.org 0xc77da
	lsls r1, r1, #4	@ 000c77da 0901
.org 0xc77dc
	ldrb r2, [r3, #0]	@ 000c77dc 1a78
.org 0xc77de
	movs r0, #17	@ 000c77de 1120
.org 0xc77e0
	negs r0, r0	@ 000c77e0 4042
.org 0xc77e2
	ands r0, r2	@ 000c77e2 1040
.org 0xc77e4
	orrs r0, r1	@ 000c77e4 0843
.org 0xc77e6
	strb r0, [r3, #0]	@ 000c77e6 1870
.org 0xc77e8
	ldrb r1, [r6, #10]	@ 000c77e8 b17a
.org 0xc77ea
	movs r0, #16	@ 000c77ea 1020
.org 0xc77ec
	ands r0, r1	@ 000c77ec 0840
.org 0xc77ee
	cmp r0, #0	@ 000c77ee 0028
.org 0xc77f0
	beq.n 0xc7804	@ 000c77f0 08d0
.org 0xc77f2
	movs r0, #160	@ 000c77f2 a020
.org 0xc77f4
	lsls r0, r0, #1	@ 000c77f4 4000
.org 0xc77f6
	subs r0, r0, r4	@ 000c77f6 001b
.org 0xc77f8
	lsls r0, r0, #1	@ 000c77f8 4000
.org 0xc77fa
	adds r0, r4, r0	@ 000c77fa 2018
.org 0xc77fc
	lsls r0, r0, #24	@ 000c77fc 0006
.org 0xc77fe
	lsrs r0, r0, #24	@ 000c77fe 000e
.org 0xc7800
	adds r1, r0, #0	@ 000c7800 011c
.org 0xc7802
	b.n 0xc7806	@ 000c7802 00e0
.org 0xc7804
	adds r1, r4, #0	@ 000c7804 211c
.org 0xc7806
	subs r1, #128	@ 000c7806 8039
.org 0xc7808
	adds r0, r6, #0	@ 000c7808 301c
.org 0xc780a
	adds r0, #36	@ 000c780a 2430
.org 0xc780c
	movs r5, #0	@ 000c780c 0025
.org 0xc780e
	strb r1, [r0, #0]	@ 000c780e 0170
.org 0xc7810
	ldr r1, [pc, #48]	@ 000c7810 0c49
.org 0xc7812
	adds r0, r6, #0	@ 000c7812 301c
.org 0xc7814
	bl 0x1cf00	@ 000c7814 55f774fb
.org 0xc7818
	ldrb r1, [r6, #10]	@ 000c7818 b17a
.org 0xc781a
	movs r0, #4	@ 000c781a 0420
.org 0xc781c
	orrs r0, r1	@ 000c781c 0843
.org 0xc781e
	strb r0, [r6, #10]	@ 000c781e b072
.org 0xc7820
	adds r4, r6, #0	@ 000c7820 341c
.org 0xc7822
	adds r4, #116	@ 000c7822 7434
.org 0xc7824
	ldr r1, [pc, #32]	@ 000c7824 0849
.org 0xc7826
	adds r2, r6, #0	@ 000c7826 321c
.org 0xc7828
	adds r2, #84	@ 000c7828 5432
.org 0xc782a
	adds r0, r4, #0	@ 000c782a 201c
.org 0xc782c
	movs r3, #64	@ 000c782c 4023
.org 0xc782e
	bl 0x5760	@ 000c782e 3df797ff
.org 0xc7832
	str r6, [r4, #44]	@ 000c7832 e662
.org 0xc7834
	str r5, [r4, #36]	@ 000c7834 6562
