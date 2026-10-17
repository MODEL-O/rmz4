@ FUN_080516ec  entry 0x080516ec  size 154
.thumb
.org 0x516ec
FUN_080516ec:
	push {r4, lr}	@ 000516ec 10b5
.org 0x516ee
	adds r4, r0, #0	@ 000516ee 041c
.org 0x516f0
	ldrb r0, [r4, #14]	@ 000516f0 a07b
.org 0x516f2
	cmp r0, #0	@ 000516f2 0028
.org 0x516f4
	bne.n 0x51760	@ 000516f4 34d1
.org 0x516f6
	ldr r1, [pc, #76]	@ 000516f6 1349
.org 0x516f8
	adds r0, r4, #0	@ 000516f8 201c
.org 0x516fa
	bl 0x1cf00	@ 000516fa cbf701fc
.org 0x516fe
	movs r3, #0	@ 000516fe 0023
.org 0x51700
	ldr r0, [pc, #68]	@ 00051700 1148
.org 0x51702
	ldr r2, [r0, #0]	@ 00051702 0268
.org 0x51704
	ldr r1, [r4, #84]	@ 00051704 616d
.org 0x51706
	ldr r0, [r2, #84]	@ 00051706 506d
.org 0x51708
	cmp r1, r0	@ 00051708 8142
.org 0x5170a
	bge.n 0x5170e	@ 0005170a 00da
.org 0x5170c
	movs r3, #1	@ 0005170c 0123
.org 0x5170e
	adds r0, r4, #0	@ 0005170e 201c
.org 0x51710
	adds r0, #76	@ 00051710 4c30
.org 0x51712
	strb r3, [r0, #0]	@ 00051712 0370
.org 0x51714
	movs r3, #0	@ 00051714 0023
.org 0x51716
	ldr r1, [r4, #84]	@ 00051716 616d
.org 0x51718
	ldr r0, [r2, #84]	@ 00051718 506d
.org 0x5171a
	cmp r1, r0	@ 0005171a 8142
.org 0x5171c
	bge.n 0x51720	@ 0005171c 00da
.org 0x5171e
	movs r3, #1	@ 0005171e 0123
.org 0x51720
	movs r0, #74	@ 00051720 4a20
.org 0x51722
	adds r0, r0, r4	@ 00051722 0019
.org 0x51724
	mov ip, r0	@ 00051724 8446
.org 0x51726
	lsls r2, r3, #4	@ 00051726 1a01
.org 0x51728
	ldrb r1, [r0, #0]	@ 00051728 0178
.org 0x5172a
	movs r0, #17	@ 0005172a 1120
.org 0x5172c
	negs r0, r0	@ 0005172c 4042
.org 0x5172e
	ands r0, r1	@ 0005172e 0840
.org 0x51730
	orrs r0, r2	@ 00051730 1043
.org 0x51732
	mov r1, ip	@ 00051732 6146
.org 0x51734
	strb r0, [r1, #0]	@ 00051734 0870
.org 0x51736
	cmp r3, #0	@ 00051736 002b
.org 0x51738
	beq.n 0x5174c	@ 00051738 08d0
.org 0x5173a
	ldrb r0, [r4, #10]	@ 0005173a a07a
.org 0x5173c
	movs r1, #16	@ 0005173c 1021
.org 0x5173e
	orrs r0, r1	@ 0005173e 0843
.org 0x51740
	b.n 0x51752	@ 00051740 07e0
.org 0x51742
	.byte 0x00	@ 00051742 data
.org 0x51743
	.byte 0x00	@ 00051743 data
.org 0x51744
	.byte 0x01,0xa1,0x00,0x00	@ 00051744 data
.org 0x51748
	.byte 0xf0,0xdb,0x02,0x02	@ 00051748 data
.org 0x5174c
	ldrb r1, [r4, #10]	@ 0005174c a17a
.org 0x5174e
	movs r0, #239	@ 0005174e ef20
.org 0x51750
	ands r0, r1	@ 00051750 0840
.org 0x51752
	strb r0, [r4, #10]	@ 00051752 a072
.org 0x51754
	movs r0, #239	@ 00051754 ef20
.org 0x51756
	bl 0x2b10	@ 00051756 b1f7dbf9
.org 0x5175a
	ldrb r0, [r4, #14]	@ 0005175a a07b
.org 0x5175c
	adds r0, #1	@ 0005175c 0130
.org 0x5175e
	strb r0, [r4, #14]	@ 0005175e a073
.org 0x51760
	adds r0, r4, #0	@ 00051760 201c
.org 0x51762
	bl 0x1cff0	@ 00051762 cbf745fc
.org 0x51766
	adds r0, r4, #0	@ 00051766 201c
.org 0x51768
	adds r0, #113	@ 00051768 7130
.org 0x5176a
	ldrb r0, [r0, #0]	@ 0005176a 0078
.org 0x5176c
	lsls r0, r0, #24	@ 0005176c 0006
.org 0x5176e
	asrs r0, r0, #24	@ 0005176e 0016
.org 0x51770
	cmp r0, #7	@ 00051770 0728
.org 0x51772
	ble.n 0x5178a	@ 00051772 0add
.org 0x51774
	adds r0, r4, #0	@ 00051774 201c
.org 0x51776
	adds r0, #114	@ 00051776 7230
.org 0x51778
	ldrb r0, [r0, #0]	@ 00051778 0078
.org 0x5177a
	lsls r0, r0, #24	@ 0005177a 0006
.org 0x5177c
	asrs r0, r0, #24	@ 0005177c 0016
.org 0x5177e
	cmp r0, #1	@ 0005177e 0128
.org 0x51780
	bgt.n 0x5178a	@ 00051780 03dc
.org 0x51782
	movs r1, #0	@ 00051782 0021
.org 0x51784
	movs r0, #9	@ 00051784 0920
