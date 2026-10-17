@ FUN_080aa778  entry 0x080aa778  size 188
.thumb
.org 0xaa778
FUN_080aa778:
	push {r4, r5, r6, r7, lr}	@ 000aa778 f0b5
.org 0xaa77a
	adds r4, r0, #0	@ 000aa77a 041c
.org 0xaa77c
	ldrb r0, [r4, #14]	@ 000aa77c a07b
.org 0xaa77e
	cmp r0, #0	@ 000aa77e 0028
.org 0xaa780
	bne.n 0xaa7a8	@ 000aa780 12d1
.org 0xaa782
	ldr r1, [pc, #28]	@ 000aa782 0749
.org 0xaa784
	adds r0, r4, #0	@ 000aa784 201c
.org 0xaa786
	bl 0x1cf00	@ 000aa786 72f7bbfb
.org 0xaa78a
	adds r1, r4, #0	@ 000aa78a 211c
.org 0xaa78c
	adds r1, #182	@ 000aa78c b631
.org 0xaa78e
	movs r0, #1	@ 000aa78e 0120
.org 0xaa790
	strb r0, [r1, #0]	@ 000aa790 0870
.org 0xaa792
	ldr r0, [pc, #16]	@ 000aa792 0448
.org 0xaa794
	bl 0x2b10	@ 000aa794 58f7bcf9
.org 0xaa798
	ldrb r0, [r4, #14]	@ 000aa798 a07b
.org 0xaa79a
	adds r0, #1	@ 000aa79a 0130
.org 0xaa79c
	strb r0, [r4, #14]	@ 000aa79c a073
.org 0xaa79e
	b.n 0xaa836	@ 000aa79e 4ae0
.org 0xaa7a0
	.byte 0x03,0x94,0x00,0x00	@ 000aa7a0 data
.org 0xaa7a4
	.byte 0x65,0x01,0x00,0x00	@ 000aa7a4 data
.org 0xaa7a8
	adds r0, r4, #0	@ 000aa7a8 201c
.org 0xaa7aa
	adds r0, #183	@ 000aa7aa b730
.org 0xaa7ac
	ldrb r1, [r0, #0]	@ 000aa7ac 0178
.org 0xaa7ae
	adds r2, r0, #0	@ 000aa7ae 021c
.org 0xaa7b0
	cmp r1, #0	@ 000aa7b0 0029
.org 0xaa7b2
	bne.n 0xaa7b8	@ 000aa7b2 01d1
.org 0xaa7b4
	movs r0, #3	@ 000aa7b4 0320
.org 0xaa7b6
	b.n 0xaa7ba	@ 000aa7b6 00e0
.org 0xaa7b8
	subs r0, r1, #1	@ 000aa7b8 481e
.org 0xaa7ba
	strb r0, [r2, #0]	@ 000aa7ba 1070
.org 0xaa7bc
	ldr r1, [pc, #124]	@ 000aa7bc 1f49
.org 0xaa7be
	ldrb r0, [r2, #0]	@ 000aa7be 1078
.org 0xaa7c0
	lsls r0, r0, #1	@ 000aa7c0 4000
.org 0xaa7c2
	adds r0, r0, r1	@ 000aa7c2 4018
.org 0xaa7c4
	ldrh r1, [r0, #0]	@ 000aa7c4 0188
.org 0xaa7c6
	adds r0, r4, #0	@ 000aa7c6 201c
.org 0xaa7c8
	bl 0x1cf00	@ 000aa7c8 72f79afb
.org 0xaa7cc
	ldr r0, [r4, #84]	@ 000aa7cc 606d
.org 0xaa7ce
	ldr r1, [r4, #96]	@ 000aa7ce 216e
.org 0xaa7d0
	adds r0, r0, r1	@ 000aa7d0 4018
.org 0xaa7d2
	str r0, [r4, #84]	@ 000aa7d2 6065
.org 0xaa7d4
	ldr r7, [pc, #104]	@ 000aa7d4 1a4f
.org 0xaa7d6
	ldrb r2, [r4, #10]	@ 000aa7d6 a27a
.org 0xaa7d8
	movs r6, #16	@ 000aa7d8 1026
.org 0xaa7da
	adds r1, r6, #0	@ 000aa7da 311c
.org 0xaa7dc
	ands r1, r2	@ 000aa7dc 1140
.org 0xaa7de
	lsls r1, r1, #24	@ 000aa7de 0906
.org 0xaa7e0
	lsrs r1, r1, #24	@ 000aa7e0 090e
.org 0xaa7e2
	negs r1, r1	@ 000aa7e2 4942
.org 0xaa7e4
	asrs r1, r1, #31	@ 000aa7e4 c917
.org 0xaa7e6
	movs r5, #4	@ 000aa7e6 0425
.org 0xaa7e8
	ands r1, r5	@ 000aa7e8 2940
.org 0xaa7ea
	adds r1, r1, r7	@ 000aa7ea c919
.org 0xaa7ec
	ldr r1, [r1, #0]	@ 000aa7ec 0968
.org 0xaa7ee
	lsls r1, r1, #8	@ 000aa7ee 0902
.org 0xaa7f0
	adds r0, r0, r1	@ 000aa7f0 4018
.org 0xaa7f2
	ldr r1, [r4, #88]	@ 000aa7f2 a16d
.org 0xaa7f4
	movs r2, #128	@ 000aa7f4 8022
.org 0xaa7f6
	lsls r2, r2, #3	@ 000aa7f6 d200
.org 0xaa7f8
	adds r1, r1, r2	@ 000aa7f8 8918
.org 0xaa7fa
	bl 0x7c7c	@ 000aa7fa 5df73ffa
.org 0xaa7fe
	lsls r0, r0, #16	@ 000aa7fe 0004
.org 0xaa800
	cmp r0, #0	@ 000aa800 0028
.org 0xaa802
	beq.n 0xaa82a	@ 000aa802 12d0
.org 0xaa804
	ldrb r1, [r4, #10]	@ 000aa804 a17a
.org 0xaa806
	adds r0, r6, #0	@ 000aa806 301c
.org 0xaa808
	ands r0, r1	@ 000aa808 0840
.org 0xaa80a
	lsls r0, r0, #24	@ 000aa80a 0006
.org 0xaa80c
	lsrs r0, r0, #24	@ 000aa80c 000e
.org 0xaa80e
	negs r0, r0	@ 000aa80e 4042
.org 0xaa810
	asrs r0, r0, #31	@ 000aa810 c017
.org 0xaa812
	ands r0, r5	@ 000aa812 2840
.org 0xaa814
	adds r0, r0, r7	@ 000aa814 c019
.org 0xaa816
	ldr r1, [r0, #0]	@ 000aa816 0168
.org 0xaa818
	lsls r1, r1, #8	@ 000aa818 0902
.org 0xaa81a
	ldr r0, [r4, #84]	@ 000aa81a 606d
.org 0xaa81c
	adds r0, r0, r1	@ 000aa81c 4018
.org 0xaa81e
	ldr r1, [r4, #88]	@ 000aa81e a16d
.org 0xaa820
	bl 0x7c7c	@ 000aa820 5df72cfa
.org 0xaa824
	lsls r0, r0, #16	@ 000aa824 0004
.org 0xaa826
	cmp r0, #0	@ 000aa826 0028
.org 0xaa828
	beq.n 0xaa836	@ 000aa828 05d0
.org 0xaa82a
	movs r0, #0	@ 000aa82a 0020
.org 0xaa82c
	movs r1, #2	@ 000aa82c 0221
.org 0xaa82e
	strb r1, [r4, #13]	@ 000aa82e 6173
.org 0xaa830
	strb r0, [r4, #14]	@ 000aa830 a073
.org 0xaa832
	movs r0, #32	@ 000aa832 2020
