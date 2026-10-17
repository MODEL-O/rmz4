@ FUN_08057738  entry 0x08057738  size 114
.thumb
.org 0x57738
FUN_08057738:
	push {r4, lr}	@ 00057738 10b5
.org 0x5773a
	adds r4, r0, #0	@ 0005773a 041c
.org 0x5773c
	ldrb r0, [r4, #15]	@ 0005773c e07b
.org 0x5773e
	cmp r0, #0	@ 0005773e 0028
.org 0x57740
	bne.n 0x57750	@ 00057740 06d1
.org 0x57742
	ldr r1, [pc, #104]	@ 00057742 1a49
.org 0x57744
	adds r0, r4, #0	@ 00057744 201c
.org 0x57746
	bl 0x1cf00	@ 00057746 c5f7dbfb
.org 0x5774a
	ldrb r0, [r4, #15]	@ 0005774a e07b
.org 0x5774c
	adds r0, #1	@ 0005774c 0130
.org 0x5774e
	strb r0, [r4, #15]	@ 0005774e e073
.org 0x57750
	adds r0, r4, #0	@ 00057750 201c
.org 0x57752
	bl 0x1cff0	@ 00057752 c5f74dfc
.org 0x57756
	adds r0, r4, #0	@ 00057756 201c
.org 0x57758
	adds r0, #116	@ 00057758 7430
.org 0x5775a
	ldr r3, [pc, #84]	@ 0005775a 154b
.org 0x5775c
	ldrb r1, [r4, #30]	@ 0005775c a17f
.org 0x5775e
	lsls r1, r1, #8	@ 0005775e 0902
.org 0x57760
	adds r2, r4, #0	@ 00057760 221c
.org 0x57762
	adds r2, #112	@ 00057762 7032
.org 0x57764
	ldrb r2, [r2, #0]	@ 00057764 1278
.org 0x57766
	orrs r1, r2	@ 00057766 1143
.org 0x57768
	ldr r2, [pc, #72]	@ 00057768 124a
.org 0x5776a
	adds r1, r1, r2	@ 0005776a 8918
.org 0x5776c
	lsls r1, r1, #2	@ 0005776c 8900
.org 0x5776e
	adds r1, r1, r3	@ 0005776e c918
.org 0x57770
	adds r2, r4, #0	@ 00057770 221c
.org 0x57772
	adds r2, #113	@ 00057772 7132
.org 0x57774
	ldrb r2, [r2, #0]	@ 00057774 1278
.org 0x57776
	lsls r2, r2, #24	@ 00057776 1206
.org 0x57778
	asrs r2, r2, #24	@ 00057778 1216
.org 0x5777a
	ldr r1, [r1, #0]	@ 0005777a 0968
.org 0x5777c
	lsls r2, r2, #2	@ 0005777c 9200
.org 0x5777e
	adds r2, r2, r1	@ 0005777e 5218
.org 0x57780
	ldr r1, [r2, #0]	@ 00057780 1168
.org 0x57782
	ldrb r2, [r1, #0]	@ 00057782 0a78
.org 0x57784
	lsls r1, r2, #1	@ 00057784 5100
.org 0x57786
	adds r1, r1, r2	@ 00057786 8918
.org 0x57788
	lsls r1, r1, #3	@ 00057788 c900
.org 0x5778a
	ldr r2, [pc, #44]	@ 0005778a 0b4a
.org 0x5778c
	adds r1, r1, r2	@ 0005778c 8918
.org 0x5778e
	bl 0x5784	@ 0005778e adf7f9ff
.org 0x57792
	adds r0, r4, #0	@ 00057792 201c
.org 0x57794
	adds r0, #115	@ 00057794 7330
.org 0x57796
	ldrb r0, [r0, #0]	@ 00057796 0078
.org 0x57798
	cmp r0, #3	@ 00057798 0328
.org 0x5779a
	bne.n 0x577a4	@ 0005779a 03d1
.org 0x5779c
	movs r1, #0	@ 0005779c 0021
.org 0x5779e
	movs r0, #9	@ 0005779e 0920
.org 0x577a0
	strb r0, [r4, #14]	@ 000577a0 a073
.org 0x577a2
	strb r1, [r4, #15]	@ 000577a2 e173
.org 0x577a4
	pop {r4}	@ 000577a4 10bc
.org 0x577a6
	pop {r0}	@ 000577a6 01bc
.org 0x577a8
	bx r0	@ 000577a8 0047
