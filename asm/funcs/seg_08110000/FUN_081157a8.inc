@ FUN_081157a8  entry 0x081157a8  size 430
.thumb
.org 0x1157a8
FUN_081157a8:
	push {r4, r5, r6, lr}	@ 001157a8 70b5
.org 0x1157aa
	adds r4, r0, #0	@ 001157aa 041c
.org 0x1157ac
	ldrb r0, [r4, #3]	@ 001157ac e078
.org 0x1157ae
	cmp r0, #19	@ 001157ae 1328
.org 0x1157b0
	bhi.n 0x115810	@ 001157b0 2ed8
.org 0x1157b2
	lsls r0, r0, #2	@ 001157b2 8000
.org 0x1157b4
	ldr r1, [pc, #4]	@ 001157b4 0149
.org 0x1157b6
	adds r0, r0, r1	@ 001157b6 4018
.org 0x1157b8
	ldr r0, [r0, #0]	@ 001157b8 0068
.org 0x1157ba
	mov pc, r0	@ 001157ba 8746
.org 0x1157bc
	.byte 0xc0,0x57,0x11,0x08	@ 001157bc data
.org 0x1157c0
	.byte 0x22,0x58,0x11,0x08	@ 001157c0 data
.org 0x1157c4
	.byte 0x32,0x58,0x11,0x08	@ 001157c4 data
.org 0x1157c8
	.byte 0xe4,0x59,0x11,0x08	@ 001157c8 data
.org 0x1157cc
	.byte 0xfc,0x59,0x11,0x08	@ 001157cc data
.org 0x1157d0
	.byte 0x26,0x5a,0x11,0x08	@ 001157d0 data
.org 0x1157d4
	.byte 0x78,0x5a,0x11,0x08	@ 001157d4 data
.org 0x1157d8
	.byte 0xbe,0x5a,0x11,0x08	@ 001157d8 data
.org 0x1157dc
	.byte 0x10,0x58,0x11,0x08	@ 001157dc data
.org 0x1157e0
	.byte 0x10,0x58,0x11,0x08	@ 001157e0 data
.org 0x1157e4
	.byte 0x10,0x58,0x11,0x08	@ 001157e4 data
.org 0x1157e8
	.byte 0x10,0x58,0x11,0x08	@ 001157e8 data
.org 0x1157ec
	.byte 0x10,0x58,0x11,0x08	@ 001157ec data
.org 0x1157f0
	.byte 0x10,0x58,0x11,0x08	@ 001157f0 data
.org 0x1157f4
	.byte 0x10,0x58,0x11,0x08	@ 001157f4 data
.org 0x1157f8
	.byte 0x10,0x58,0x11,0x08	@ 001157f8 data
.org 0x1157fc
	.byte 0x10,0x58,0x11,0x08	@ 001157fc data
.org 0x115800
	.byte 0xd4,0x5a,0x11,0x08	@ 00115800 data
.org 0x115804
	.byte 0xf2,0x5a,0x11,0x08	@ 00115804 data
.org 0x115808
	.byte 0x38,0x5b,0x11,0x08	@ 00115808 data
.org 0x11580c
	.byte 0x54,0x5b,0x11,0x08	@ 0011580c data
.org 0x115810
	ldr r0, [pc, #72]	@ 00115810 1248
.org 0x115812
	ldrh r0, [r0, #2]	@ 00115812 4088
.org 0x115814
	cmp r0, #0	@ 00115814 0028
.org 0x115816
	beq.n 0x11581e	@ 00115816 02d0
.org 0x115818
	cmp r0, #4	@ 00115818 0428
.org 0x11581a
	beq.n 0x11581e	@ 0011581a 00d0
.org 0x11581c
	b.n 0x115b9e	@ 0011581c bfe1
.org 0x11581e
	movs r0, #0	@ 0011581e 0020
.org 0x115820
	strb r0, [r4, #3]	@ 00115820 e070
.org 0x115822
	movs r0, #41	@ 00115822 2920
.org 0x115824
	bl 0x10e584	@ 00115824 f8f7aefe
.org 0x115828
	movs r0, #0	@ 00115828 0020
.org 0x11582a
	strh r0, [r4, #10]	@ 0011582a 6081
.org 0x11582c
	ldrb r0, [r4, #3]	@ 0011582c e078
.org 0x11582e
	adds r0, #1	@ 0011582e 0130
.org 0x115830
	strb r0, [r4, #3]	@ 00115830 e070
.org 0x115832
	ldr r0, [pc, #40]	@ 00115832 0a48
.org 0x115834
	ldrh r0, [r0, #2]	@ 00115834 4088
.org 0x115836
	cmp r0, #0	@ 00115836 0028
.org 0x115838
	beq.n 0x115840	@ 00115838 02d0
.org 0x11583a
	cmp r0, #4	@ 0011583a 0428
.org 0x11583c
	beq.n 0x115840	@ 0011583c 00d0
.org 0x11583e
	b.n 0x115b9e	@ 0011583e aee1
.org 0x115840
	adds r0, r4, #0	@ 00115840 201c
.org 0x115842
	bl 0x117a68	@ 00115842 02f011f9
.org 0x115846
	lsls r0, r0, #16	@ 00115846 0004
.org 0x115848
	lsrs r1, r0, #16	@ 00115848 010c
.org 0x11584a
	cmp r0, #0	@ 0011584a 0028
.org 0x11584c
	bne.n 0x115850	@ 0011584c 00d1
.org 0x11584e
	b.n 0x115b9e	@ 0011584e a6e1
.org 0x115850
	lsls r0, r1, #16	@ 00115850 0804
.org 0x115852
	asrs r1, r0, #16	@ 00115852 0114
.org 0x115854
	cmp r1, #0	@ 00115854 0029
.org 0x115856
	ble.n 0x115860	@ 00115856 03dd
.org 0x115858
	movs r0, #3	@ 00115858 0320
.org 0x11585a
	b.n 0x115b9c	@ 0011585a 9fe1
.org 0x11585c
	.byte 0x88,0xf3,0x02,0x02	@ 0011585c data
.org 0x115860
	movs r0, #1	@ 00115860 0120
.org 0x115862
	negs r0, r0	@ 00115862 4042
.org 0x115864
	cmp r1, r0	@ 00115864 8142
.org 0x115866
	beq.n 0x11586a	@ 00115866 00d0
.org 0x115868
	b.n 0x1159e0	@ 00115868 bae0
.org 0x11586a
	ldr r5, [pc, #32]	@ 0011586a 084d
.org 0x11586c
	ldrb r1, [r5, #5]	@ 0011586c 6979
.org 0x11586e
	movs r2, #2	@ 0011586e 0222
.org 0x115870
	adds r0, r2, #0	@ 00115870 101c
.org 0x115872
	ands r0, r1	@ 00115872 0840
.org 0x115874
	cmp r0, #0	@ 00115874 0028
.org 0x115876
	bne.n 0x115938	@ 00115876 5fd1
.org 0x115878
	ldrb r1, [r5, #7]	@ 00115878 e979
.org 0x11587a
	movs r0, #8	@ 0011587a 0820
.org 0x11587c
	ands r0, r1	@ 0011587c 0840
.org 0x11587e
	cmp r0, #0	@ 0011587e 0028
.org 0x115880
	beq.n 0x115890	@ 00115880 06d0
.org 0x115882
	movs r0, #163	@ 00115882 a320
.org 0x115884
	lsls r0, r0, #2	@ 00115884 8000
.org 0x115886
	bl 0x10e5f0	@ 00115886 f8f7b3fe
.org 0x11588a
	b.n 0x115922	@ 0011588a 4ae0
.org 0x11588c
	.byte 0xb0,0xe8,0x02,0x02	@ 0011588c data
.org 0x115890
	movs r0, #4	@ 00115890 0420
.org 0x115892
	ands r0, r1	@ 00115892 0840
.org 0x115894
	cmp r0, #0	@ 00115894 0028
.org 0x115896
	beq.n 0x1158a4	@ 00115896 05d0
.org 0x115898
	ldr r0, [pc, #4]	@ 00115898 0148
.org 0x11589a
	bl 0x10e5f0	@ 0011589a f8f7a9fe
.org 0x11589e
	b.n 0x115922	@ 0011589e 40e0
.org 0x1158a0
	.byte 0x8a,0x02,0x00,0x00	@ 001158a0 data
.org 0x1158a4
	adds r0, r2, #0	@ 001158a4 101c
.org 0x1158a6
	ands r0, r1	@ 001158a6 0840
.org 0x1158a8
	cmp r0, #0	@ 001158a8 0028
.org 0x1158aa
	beq.n 0x1158b6	@ 001158aa 04d0
.org 0x1158ac
	movs r0, #162	@ 001158ac a220
.org 0x1158ae
	lsls r0, r0, #2	@ 001158ae 8000
.org 0x1158b0
	bl 0x10e5f0	@ 001158b0 f8f79efe
.org 0x1158b4
	b.n 0x115922	@ 001158b4 35e0
.org 0x1158b6
	movs r0, #1	@ 001158b6 0120
.org 0x1158b8
	ands r0, r1	@ 001158b8 0840
.org 0x1158ba
	cmp r0, #0	@ 001158ba 0028
.org 0x1158bc
	bne.n 0x1158c8	@ 001158bc 04d1
.org 0x1158be
	ldrb r1, [r5, #6]	@ 001158be a979
.org 0x1158c0
	movs r0, #128	@ 001158c0 8020
.org 0x1158c2
	ands r0, r1	@ 001158c2 0840
.org 0x1158c4
	cmp r0, #0	@ 001158c4 0028
.org 0x1158c6
	beq.n 0x1158d2	@ 001158c6 04d0
.org 0x1158c8
	movs r0, #161	@ 001158c8 a120
.org 0x1158ca
	lsls r0, r0, #2	@ 001158ca 8000
.org 0x1158cc
	bl 0x10e5f0	@ 001158cc f8f790fe
.org 0x1158d0
	b.n 0x115922	@ 001158d0 27e0
.org 0x1158d2
	movs r0, #64	@ 001158d2 4020
.org 0x1158d4
	ands r0, r1	@ 001158d4 0840
.org 0x1158d6
	cmp r0, #0	@ 001158d6 0028
.org 0x1158d8
	beq.n 0x1158e8	@ 001158d8 06d0
.org 0x1158da
	ldr r0, [pc, #8]	@ 001158da 0248
.org 0x1158dc
	bl 0x10e5f0	@ 001158dc f8f788fe
.org 0x1158e0
	b.n 0x115922	@ 001158e0 1fe0
.org 0x1158e2
	.byte 0x00	@ 001158e2 data
.org 0x1158e3
	.byte 0x00	@ 001158e3 data
.org 0x1158e4
	.byte 0x82,0x02,0x00,0x00	@ 001158e4 data
.org 0x1158e8
	movs r0, #32	@ 001158e8 2020
.org 0x1158ea
	ands r0, r1	@ 001158ea 0840
.org 0x1158ec
	cmp r0, #0	@ 001158ec 0028
.org 0x1158ee
	beq.n 0x1158fc	@ 001158ee 05d0
.org 0x1158f0
	ldr r0, [pc, #4]	@ 001158f0 0148
.org 0x1158f2
	bl 0x10e5f0	@ 001158f2 f8f77dfe
.org 0x1158f6
	b.n 0x115922	@ 001158f6 14e0
.org 0x1158f8
	.byte 0x7e,0x02,0x00,0x00	@ 001158f8 data
.org 0x1158fc
	movs r6, #16	@ 001158fc 1026
.org 0x1158fe
	adds r0, r6, #0	@ 001158fe 301c
.org 0x115900
	ands r0, r1	@ 00115900 0840
.org 0x115902
	cmp r0, #0	@ 00115902 0028
.org 0x115904
	bne.n 0x11591c	@ 00115904 0ad1
.org 0x115906
	ldr r0, [pc, #16]	@ 00115906 0448
.org 0x115908
	bl 0x10e5f0	@ 00115908 f8f772fe
.org 0x11590c
	ldrb r0, [r5, #5]	@ 0011590c 6879
.org 0x11590e
	movs r1, #2	@ 0011590e 0221
.org 0x115910
	orrs r0, r1	@ 00115910 0843
.org 0x115912
	strb r0, [r5, #5]	@ 00115912 6871
.org 0x115914
	strb r6, [r4, #3]	@ 00115914 e670
.org 0x115916
	b.n 0x115b9e	@ 00115916 42e1
.org 0x115918
	.byte 0x76,0x02,0x00,0x00	@ 00115918 data
.org 0x11591c
	ldr r0, [pc, #16]	@ 0011591c 0448
.org 0x11591e
	bl 0x10e5f0	@ 0011591e f8f767fe
.org 0x115922
	ldr r2, [pc, #16]	@ 00115922 044a
.org 0x115924
	ldrb r1, [r2, #5]	@ 00115924 5179
.org 0x115926
	movs r0, #2	@ 00115926 0220
.org 0x115928
	orrs r0, r1	@ 00115928 0843
.org 0x11592a
	strb r0, [r2, #5]	@ 0011592a 5071
.org 0x11592c
	b.n 0x115b9a	@ 0011592c 35e1
.org 0x11592e
	.byte 0x00	@ 0011592e data
.org 0x11592f
	.byte 0x00	@ 0011592f data
.org 0x115930
	.byte 0x7e,0x02,0x00,0x00	@ 00115930 data
.org 0x115934
	.byte 0xb0,0xe8,0x02,0x02	@ 00115934 data
.org 0x115938
	ldrb r1, [r5, #7]	@ 00115938 e979
.org 0x11593a
	movs r0, #8	@ 0011593a 0820
.org 0x11593c
	ands r0, r1	@ 0011593c 0840
.org 0x11593e
	cmp r0, #0	@ 0011593e 0028
.org 0x115940
	beq.n 0x115950	@ 00115940 06d0
.org 0x115942
	ldr r0, [pc, #8]	@ 00115942 0248
.org 0x115944
	bl 0x10e5f0	@ 00115944 f8f754fe
.org 0x115948
	b.n 0x115b9a	@ 00115948 27e1
.org 0x11594a
	.byte 0x00	@ 0011594a data
.org 0x11594b
	.byte 0x00	@ 0011594b data
.org 0x11594c
	.byte 0x8d,0x02,0x00,0x00	@ 0011594c data
.org 0x115950
	movs r0, #4	@ 00115950 0420
.org 0x115952
	ands r0, r1	@ 00115952 0840
.org 0x115954
	cmp r0, #0	@ 00115954 0028
