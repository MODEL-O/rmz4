@ FUN_08102784  entry 0x08102784  size 170
.thumb
.org 0x102784
FUN_08102784:
	push {r4, lr}	@ 00102784 10b5
.org 0x102786
	movs r4, #1	@ 00102786 0124
.org 0x102788
	movs r0, #94	@ 00102788 5e20
.org 0x10278a
	bl 0x6984	@ 0010278a 04f7fbf8
.org 0x10278e
	ldr r2, [pc, #44]	@ 0010278e 0b4a
.org 0x102790
	ldrb r1, [r2, #7]	@ 00102790 d179
.org 0x102792
	adds r0, r4, #0	@ 00102792 201c
.org 0x102794
	ands r0, r1	@ 00102794 0840
.org 0x102796
	cmp r0, #0	@ 00102796 0028
.org 0x102798
	beq.n 0x1027c0	@ 00102798 12d0
.org 0x10279a
	movs r4, #17	@ 0010279a 1124
.org 0x10279c
	movs r0, #2	@ 0010279c 0220
.org 0x10279e
	ands r0, r1	@ 0010279e 0840
.org 0x1027a0
	cmp r0, #0	@ 001027a0 0028
.org 0x1027a2
	beq.n 0x102812	@ 001027a2 36d0
.org 0x1027a4
	movs r4, #19	@ 001027a4 1324
.org 0x1027a6
	movs r0, #4	@ 001027a6 0420
.org 0x1027a8
	ands r0, r1	@ 001027a8 0840
.org 0x1027aa
	cmp r0, #0	@ 001027aa 0028
.org 0x1027ac
	beq.n 0x102812	@ 001027ac 31d0
.org 0x1027ae
	movs r4, #21	@ 001027ae 1524
.org 0x1027b0
	movs r0, #8	@ 001027b0 0820
.org 0x1027b2
	ands r0, r1	@ 001027b2 0840
.org 0x1027b4
	cmp r0, #0	@ 001027b4 0028
.org 0x1027b6
	beq.n 0x102812	@ 001027b6 2cd0
.org 0x1027b8
	movs r4, #23	@ 001027b8 1724
.org 0x1027ba
	b.n 0x102812	@ 001027ba 2ae0
.org 0x1027bc
	.byte 0xb0,0xe8,0x02,0x02	@ 001027bc data
.org 0x1027c0
	ldrb r1, [r2, #6]	@ 001027c0 9179
.org 0x1027c2
	movs r0, #16	@ 001027c2 1020
.org 0x1027c4
	ands r0, r1	@ 001027c4 0840
.org 0x1027c6
	cmp r0, #0	@ 001027c6 0028
.org 0x1027c8
	beq.n 0x1027ec	@ 001027c8 10d0
.org 0x1027ca
	movs r4, #9	@ 001027ca 0924
.org 0x1027cc
	movs r0, #32	@ 001027cc 2020
.org 0x1027ce
	ands r0, r1	@ 001027ce 0840
.org 0x1027d0
	cmp r0, #0	@ 001027d0 0028
.org 0x1027d2
	beq.n 0x102812	@ 001027d2 1ed0
.org 0x1027d4
	movs r4, #11	@ 001027d4 0b24
.org 0x1027d6
	movs r0, #64	@ 001027d6 4020
.org 0x1027d8
	ands r0, r1	@ 001027d8 0840
.org 0x1027da
	cmp r0, #0	@ 001027da 0028
.org 0x1027dc
	beq.n 0x102812	@ 001027dc 19d0
.org 0x1027de
	movs r4, #13	@ 001027de 0d24
.org 0x1027e0
	movs r0, #128	@ 001027e0 8020
.org 0x1027e2
	ands r0, r1	@ 001027e2 0840
.org 0x1027e4
	cmp r0, #0	@ 001027e4 0028
.org 0x1027e6
	beq.n 0x102812	@ 001027e6 14d0
.org 0x1027e8
	movs r4, #15	@ 001027e8 0f24
.org 0x1027ea
	b.n 0x102812	@ 001027ea 12e0
.org 0x1027ec
	adds r0, r4, #0	@ 001027ec 201c
.org 0x1027ee
	ands r0, r1	@ 001027ee 0840
.org 0x1027f0
	cmp r0, #0	@ 001027f0 0028
.org 0x1027f2
	beq.n 0x102812	@ 001027f2 0ed0
.org 0x1027f4
	movs r0, #2	@ 001027f4 0220
.org 0x1027f6
	ands r0, r1	@ 001027f6 0840
.org 0x1027f8
	cmp r0, #0	@ 001027f8 0028
.org 0x1027fa
	beq.n 0x102812	@ 001027fa 0ad0
.org 0x1027fc
	movs r4, #3	@ 001027fc 0324
.org 0x1027fe
	movs r0, #4	@ 001027fe 0420
.org 0x102800
	ands r0, r1	@ 00102800 0840
.org 0x102802
	cmp r0, #0	@ 00102802 0028
.org 0x102804
	beq.n 0x102812	@ 00102804 05d0
.org 0x102806
	movs r4, #5	@ 00102806 0524
.org 0x102808
	movs r0, #8	@ 00102808 0820
.org 0x10280a
	ands r0, r1	@ 0010280a 0840
.org 0x10280c
	cmp r0, #0	@ 0010280c 0028
.org 0x10280e
	beq.n 0x102812	@ 0010280e 00d0
.org 0x102810
	movs r4, #7	@ 00102810 0724
.org 0x102812
	ldr r1, [pc, #16]	@ 00102812 0449
.org 0x102814
	ldrb r0, [r1, #25]	@ 00102814 487e
.org 0x102816
	cmp r0, r4	@ 00102816 a042
.org 0x102818
	bne.n 0x102828	@ 00102818 06d1
.org 0x10281a
	adds r0, r4, #1	@ 0010281a 601c
.org 0x10281c
	lsls r0, r0, #24	@ 0010281c 0006
.org 0x10281e
	lsrs r4, r0, #24	@ 0010281e 040e
.org 0x102820
	b.n 0x10282a	@ 00102820 03e0
.org 0x102822
	.byte 0x00	@ 00102822 data
.org 0x102823
	.byte 0x00	@ 00102823 data
.org 0x102824
	.byte 0xb0,0xe8,0x02,0x02	@ 00102824 data
.org 0x102828
	strb r4, [r1, #25]	@ 00102828 4c76
.org 0x10282a
	ldr r0, [pc, #12]	@ 0010282a 0348
.org 0x10282c
	lsls r1, r4, #1	@ 0010282c 6100
