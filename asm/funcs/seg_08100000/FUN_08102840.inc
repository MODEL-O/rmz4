@ FUN_08102840  entry 0x08102840  size 118
.thumb
.org 0x102840
FUN_08102840:
	push {r4, r5, r6, lr}	@ 00102840 70b5
.org 0x102842
	adds r6, r0, #0	@ 00102842 061c
.org 0x102844
	adds r0, #190	@ 00102844 be30
.org 0x102846
	movs r5, #0	@ 00102846 0025
.org 0x102848
	movs r2, #238	@ 00102848 ee22
.org 0x10284a
	lsls r2, r2, #7	@ 0010284a d201
.org 0x10284c
	strh r2, [r0, #0]	@ 0010284c 0280
.org 0x10284e
	adds r1, r6, #0	@ 0010284e 311c
.org 0x102850
	adds r1, #192	@ 00102850 c031
.org 0x102852
	ldr r0, [pc, #100]	@ 00102852 1948
.org 0x102854
	strh r0, [r1, #0]	@ 00102854 0880
.org 0x102856
	adds r0, r6, #0	@ 00102856 301c
.org 0x102858
	adds r0, #194	@ 00102858 c230
.org 0x10285a
	strh r2, [r0, #0]	@ 0010285a 0280
.org 0x10285c
	ldrb r1, [r6, #10]	@ 0010285c b17a
.org 0x10285e
	movs r0, #4	@ 0010285e 0420
.org 0x102860
	orrs r0, r1	@ 00102860 0843
.org 0x102862
	strb r0, [r6, #10]	@ 00102862 b072
.org 0x102864
	adds r4, r6, #0	@ 00102864 341c
.org 0x102866
	adds r4, #116	@ 00102866 7434
.org 0x102868
	ldr r1, [pc, #80]	@ 00102868 1449
.org 0x10286a
	adds r2, r6, #0	@ 0010286a 321c
.org 0x10286c
	adds r2, #84	@ 0010286c 5432
.org 0x10286e
	adds r0, r4, #0	@ 0010286e 201c
.org 0x102870
	movs r3, #1	@ 00102870 0123
.org 0x102872
	bl 0x5760	@ 00102872 02f775ff
.org 0x102876
	str r6, [r4, #44]	@ 00102876 e662
.org 0x102878
	str r5, [r4, #36]	@ 00102878 6562
.org 0x10287a
	movs r0, #128	@ 0010287a 8020
.org 0x10287c
	lsls r0, r0, #1	@ 0010287c 4000
.org 0x10287e
	str r0, [r6, #92]	@ 0010287e f065
.org 0x102880
	adds r1, r6, #0	@ 00102880 311c
.org 0x102882
	adds r1, #185	@ 00102882 b931
.org 0x102884
	movs r0, #1	@ 00102884 0120
.org 0x102886
	strb r0, [r1, #0]	@ 00102886 0870
.org 0x102888
	subs r1, #1	@ 00102888 0139
.org 0x10288a
	movs r0, #48	@ 0010288a 3020
.org 0x10288c
	strb r0, [r1, #0]	@ 0010288c 0870
.org 0x10288e
	ldrb r1, [r6, #10]	@ 0010288e b17a
.org 0x102890
	movs r0, #16	@ 00102890 1020
.org 0x102892
	ands r0, r1	@ 00102892 0840
.org 0x102894
	cmp r0, #0	@ 00102894 0028
.org 0x102896
	bne.n 0x1028a8	@ 00102896 07d1
.org 0x102898
	ldr r0, [r6, #92]	@ 00102898 f06d
.org 0x10289a
	lsls r0, r0, #8	@ 0010289a 0002
.org 0x10289c
	negs r0, r0	@ 0010289c 4042
.org 0x10289e
	cmp r0, #0	@ 0010289e 0028
.org 0x1028a0
	bge.n 0x1028a4	@ 001028a0 00da
.org 0x1028a2
	adds r0, #255	@ 001028a2 ff30
.org 0x1028a4
	asrs r0, r0, #8	@ 001028a4 0012
.org 0x1028a6
	str r0, [r6, #92]	@ 001028a6 f065
.org 0x1028a8
	movs r1, #0	@ 001028a8 0021
.org 0x1028aa
	movs r0, #1	@ 001028aa 0120
.org 0x1028ac
	strb r0, [r6, #13]	@ 001028ac 7073
.org 0x1028ae
	strb r1, [r6, #14]	@ 001028ae b173
.org 0x1028b0
	pop {r4, r5, r6}	@ 001028b0 70bc
.org 0x1028b2
	pop {r0}	@ 001028b2 01bc
.org 0x1028b4
	bx r0	@ 001028b4 0047
