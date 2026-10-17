@ FUN_08071924  entry 0x08071924  size 200
.thumb
.org 0x71924
FUN_08071924:
	push {r4, r5, r6, r7, lr}	@ 00071924 f0b5
.org 0x71926
	adds r6, r0, #0	@ 00071926 061c
.org 0x71928
	movs r7, #0	@ 00071928 0027
.org 0x7192a
	ldrb r1, [r6, #15]	@ 0007192a f17b
.org 0x7192c
	cmp r1, #0	@ 0007192c 0029
.org 0x7192e
	bne.n 0x7193e	@ 0007192e 06d1
.org 0x71930
	str r7, [r6, #96]	@ 00071930 3766
.org 0x71932
	movs r0, #32	@ 00071932 2020
.org 0x71934
	str r0, [r6, #104]	@ 00071934 b066
.org 0x71936
	movs r0, #1	@ 00071936 0120
.org 0x71938
	strb r0, [r6, #19]	@ 00071938 f074
.org 0x7193a
	adds r0, r1, #1	@ 0007193a 481c
.org 0x7193c
	strb r0, [r6, #15]	@ 0007193c f073
.org 0x7193e
	ldrb r0, [r6, #19]	@ 0007193e f07c
.org 0x71940
	cmp r0, #0	@ 00071940 0028
.org 0x71942
	beq.n 0x71956	@ 00071942 08d0
.org 0x71944
	ldr r1, [r6, #96]	@ 00071944 316e
.org 0x71946
	ldr r0, [pc, #128]	@ 00071946 2048
.org 0x71948
	cmp r1, r0	@ 00071948 8142
.org 0x7194a
	ble.n 0x71956	@ 0007194a 04dd
.org 0x7194c
	adds r0, r6, #0	@ 0007194c 301c
.org 0x7194e
	movs r1, #10	@ 0007194e 0a21
.org 0x71950
	bl 0x736c4	@ 00071950 01f0b8fe
.org 0x71954
	strb r7, [r6, #19]	@ 00071954 f774
.org 0x71956
	adds r0, r6, #0	@ 00071956 301c
.org 0x71958
	bl 0x1cff0	@ 00071958 abf74afb
.org 0x7195c
	adds r0, r6, #0	@ 0007195c 301c
.org 0x7195e
	adds r0, #116	@ 0007195e 7430
.org 0x71960
	ldr r4, [pc, #104]	@ 00071960 1a4c
.org 0x71962
	ldr r3, [pc, #108]	@ 00071962 1b4b
.org 0x71964
	adds r1, r6, #0	@ 00071964 311c
.org 0x71966
	adds r1, #184	@ 00071966 b831
.org 0x71968
	ldrb r2, [r1, #0]	@ 00071968 0a78
.org 0x7196a
	lsls r1, r2, #1	@ 0007196a 5100
.org 0x7196c
	adds r1, r1, r3	@ 0007196c c918
.org 0x7196e
	ldrh r1, [r1, #0]	@ 0007196e 0988
.org 0x71970
	lsls r1, r1, #2	@ 00071970 8900
.org 0x71972
	adds r1, r1, r4	@ 00071972 0919
.org 0x71974
	adds r3, r6, #0	@ 00071974 331c
.org 0x71976
	adds r3, #113	@ 00071976 7133
.org 0x71978
	movs r5, #0	@ 00071978 0025
.org 0x7197a
	ldrsb r5, [r3, r5]	@ 0007197a 5d57
.org 0x7197c
	ldr r1, [r1, #0]	@ 0007197c 0968
.org 0x7197e
	lsls r3, r5, #2	@ 0007197e ab00
.org 0x71980
	adds r3, r3, r1	@ 00071980 5b18
.org 0x71982
	ldr r4, [pc, #80]	@ 00071982 144c
.org 0x71984
	adds r1, r6, #0	@ 00071984 311c
.org 0x71986
	adds r1, #185	@ 00071986 b931
.org 0x71988
	ldrb r1, [r1, #0]	@ 00071988 0978
.org 0x7198a
	lsls r1, r1, #2	@ 0007198a 8900
.org 0x7198c
	adds r1, r1, r4	@ 0007198c 0919
.org 0x7198e
	ldr r1, [r1, #0]	@ 0007198e 0968
.org 0x71990
	lsls r2, r2, #2	@ 00071990 9200
.org 0x71992
	adds r2, r2, r1	@ 00071992 5218
.org 0x71994
	ldr r1, [r2, #0]	@ 00071994 1168
.org 0x71996
	adds r1, r1, r5	@ 00071996 4919
.org 0x71998
	ldrb r1, [r1, #0]	@ 00071998 0978
.org 0x7199a
	lsls r2, r1, #1	@ 0007199a 4a00
.org 0x7199c
	adds r2, r2, r1	@ 0007199c 5218
.org 0x7199e
	lsls r2, r2, #3	@ 0007199e d200
.org 0x719a0
	ldr r1, [r3, #0]	@ 000719a0 1968
.org 0x719a2
	adds r1, r1, r2	@ 000719a2 8918
.org 0x719a4
	bl 0x5784	@ 000719a4 93f7eefe
.org 0x719a8
	ldr r0, [r6, #88]	@ 000719a8 b06d
.org 0x719aa
	ldr r1, [r6, #96]	@ 000719aa 316e
.org 0x719ac
	adds r0, r0, r1	@ 000719ac 4018
.org 0x719ae
	str r0, [r6, #88]	@ 000719ae b065
.org 0x719b0
	adds r0, r6, #0	@ 000719b0 301c
.org 0x719b2
	bl 0x73850	@ 000719b2 01f04dff
.org 0x719b6
	cmp r0, #0	@ 000719b6 0028
.org 0x719b8
	beq.n 0x719d8	@ 000719b8 0ed0
.org 0x719ba
	adds r0, r6, #0	@ 000719ba 301c
.org 0x719bc
	bl 0x73a68	@ 000719bc 02f054f8
.org 0x719c0
	movs r0, #0	@ 000719c0 0020
.org 0x719c2
	str r0, [r6, #96]	@ 000719c2 3066
.org 0x719c4
	b.n 0x719ee	@ 000719c4 13e0
.org 0x719c6
	.byte 0x00	@ 000719c6 data
.org 0x719c7
	.byte 0x00	@ 000719c7 data
.org 0x719c8
	.byte 0xff,0x01,0x00,0x00	@ 000719c8 data
.org 0x719cc
	.byte 0x08,0xcb,0x85,0x08	@ 000719cc data
.org 0x719d0
	.byte 0x04,0xcc,0x85,0x08	@ 000719d0 data
.org 0x719d4
	.byte 0xfc,0xcb,0x85,0x08	@ 000719d4 data
.org 0x719d8
	ldr r0, [r6, #96]	@ 000719d8 306e
.org 0x719da
	ldr r1, [r6, #104]	@ 000719da b16e
.org 0x719dc
	adds r0, r0, r1	@ 000719dc 4018
.org 0x719de
	str r0, [r6, #96]	@ 000719de 3066
.org 0x719e0
	movs r1, #192	@ 000719e0 c021
.org 0x719e2
	lsls r1, r1, #2	@ 000719e2 8900
.org 0x719e4
	cmp r0, r1	@ 000719e4 8842
.org 0x719e6
	ble.n 0x719ea	@ 000719e6 00dd
.org 0x719e8
	str r1, [r6, #96]	@ 000719e8 3166
.org 0x719ea
	cmp r7, #0	@ 000719ea 002f
