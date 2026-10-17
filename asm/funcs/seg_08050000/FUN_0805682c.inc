@ FUN_0805682c  entry 0x0805682c  size 114
.thumb
.org 0x5682c
FUN_0805682c:
	push {r4, lr}	@ 0005682c 10b5
.org 0x5682e
	adds r4, r0, #0	@ 0005682e 041c
.org 0x56830
	ldrb r0, [r4, #15]	@ 00056830 e07b
.org 0x56832
	cmp r0, #0	@ 00056832 0028
.org 0x56834
	bne.n 0x56844	@ 00056834 06d1
.org 0x56836
	ldr r1, [pc, #104]	@ 00056836 1a49
.org 0x56838
	adds r0, r4, #0	@ 00056838 201c
.org 0x5683a
	bl 0x1cf00	@ 0005683a c6f761fb
.org 0x5683e
	ldrb r0, [r4, #15]	@ 0005683e e07b
.org 0x56840
	adds r0, #1	@ 00056840 0130
.org 0x56842
	strb r0, [r4, #15]	@ 00056842 e073
.org 0x56844
	adds r0, r4, #0	@ 00056844 201c
.org 0x56846
	bl 0x1cff0	@ 00056846 c6f7d3fb
.org 0x5684a
	adds r0, r4, #0	@ 0005684a 201c
.org 0x5684c
	adds r0, #116	@ 0005684c 7430
.org 0x5684e
	ldr r3, [pc, #84]	@ 0005684e 154b
.org 0x56850
	ldrb r1, [r4, #30]	@ 00056850 a17f
.org 0x56852
	lsls r1, r1, #8	@ 00056852 0902
.org 0x56854
	adds r2, r4, #0	@ 00056854 221c
.org 0x56856
	adds r2, #112	@ 00056856 7032
.org 0x56858
	ldrb r2, [r2, #0]	@ 00056858 1278
.org 0x5685a
	orrs r1, r2	@ 0005685a 1143
.org 0x5685c
	ldr r2, [pc, #72]	@ 0005685c 124a
.org 0x5685e
	adds r1, r1, r2	@ 0005685e 8918
.org 0x56860
	lsls r1, r1, #2	@ 00056860 8900
.org 0x56862
	adds r1, r1, r3	@ 00056862 c918
.org 0x56864
	adds r2, r4, #0	@ 00056864 221c
.org 0x56866
	adds r2, #113	@ 00056866 7132
.org 0x56868
	ldrb r2, [r2, #0]	@ 00056868 1278
.org 0x5686a
	lsls r2, r2, #24	@ 0005686a 1206
.org 0x5686c
	asrs r2, r2, #24	@ 0005686c 1216
.org 0x5686e
	ldr r1, [r1, #0]	@ 0005686e 0968
.org 0x56870
	lsls r2, r2, #2	@ 00056870 9200
.org 0x56872
	adds r2, r2, r1	@ 00056872 5218
.org 0x56874
	ldr r1, [r2, #0]	@ 00056874 1168
.org 0x56876
	ldrb r2, [r1, #0]	@ 00056876 0a78
.org 0x56878
	lsls r1, r2, #1	@ 00056878 5100
.org 0x5687a
	adds r1, r1, r2	@ 0005687a 8918
.org 0x5687c
	lsls r1, r1, #3	@ 0005687c c900
.org 0x5687e
	ldr r2, [pc, #44]	@ 0005687e 0b4a
.org 0x56880
	adds r1, r1, r2	@ 00056880 8918
.org 0x56882
	bl 0x5784	@ 00056882 aef77fff
.org 0x56886
	adds r0, r4, #0	@ 00056886 201c
.org 0x56888
	adds r0, #115	@ 00056888 7330
.org 0x5688a
	ldrb r0, [r0, #0]	@ 0005688a 0078
.org 0x5688c
	cmp r0, #3	@ 0005688c 0328
.org 0x5688e
	bne.n 0x56898	@ 0005688e 03d1
.org 0x56890
	movs r1, #0	@ 00056890 0021
.org 0x56892
	movs r0, #1	@ 00056892 0120
.org 0x56894
	strb r0, [r4, #14]	@ 00056894 a073
.org 0x56896
	strb r1, [r4, #15]	@ 00056896 e173
.org 0x56898
	pop {r4}	@ 00056898 10bc
.org 0x5689a
	pop {r0}	@ 0005689a 01bc
.org 0x5689c
	bx r0	@ 0005689c 0047
