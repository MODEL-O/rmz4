@ FUN_080fea64  entry 0x080fea64  size 148
.thumb
.org 0xfea64
FUN_080fea64:
	push {r4, r5, r6, lr}	@ 000fea64 70b5
.org 0xfea66
	adds r4, r0, #0	@ 000fea66 041c
.org 0xfea68
	bl 0x1cc9c	@ 000fea68 1ef718f9
.org 0xfea6c
	ldrb r1, [r4, #10]	@ 000fea6c a17a
.org 0xfea6e
	movs r0, #1	@ 000fea6e 0120
.org 0xfea70
	orrs r0, r1	@ 000fea70 0843
.org 0xfea72
	movs r1, #2	@ 000fea72 0221
.org 0xfea74
	orrs r0, r1	@ 000fea74 0843
.org 0xfea76
	strb r0, [r4, #10]	@ 000fea76 a072
.org 0xfea78
	ldr r1, [pc, #124]	@ 000fea78 1f49
.org 0xfea7a
	adds r0, r4, #0	@ 000fea7a 201c
.org 0xfea7c
	bl 0x1cf00	@ 000fea7c 1ef740fa
.org 0xfea80
	adds r0, r4, #0	@ 000fea80 201c
.org 0xfea82
	bl 0x1cff0	@ 000fea82 1ef7b5fa
.org 0xfea86
	movs r2, #0	@ 000fea86 0022
.org 0xfea88
	ldrb r1, [r4, #10]	@ 000fea88 a17a
.org 0xfea8a
	movs r0, #239	@ 000fea8a ef20
.org 0xfea8c
	ands r0, r1	@ 000fea8c 0840
.org 0xfea8e
	strb r0, [r4, #10]	@ 000fea8e a072
.org 0xfea90
	movs r6, #1	@ 000fea90 0126
.org 0xfea92
	adds r0, r4, #0	@ 000fea92 201c
.org 0xfea94
	adds r0, #76	@ 000fea94 4c30
.org 0xfea96
	strb r2, [r0, #0]	@ 000fea96 0270
.org 0xfea98
	adds r2, r4, #0	@ 000fea98 221c
.org 0xfea9a
	adds r2, #74	@ 000fea9a 4a32
.org 0xfea9c
	ldrb r1, [r2, #0]	@ 000fea9c 1178
.org 0xfea9e
	movs r0, #17	@ 000fea9e 1120
.org 0xfeaa0
	negs r0, r0	@ 000feaa0 4042
.org 0xfeaa2
	ands r0, r1	@ 000feaa2 0840
.org 0xfeaa4
	strb r0, [r2, #0]	@ 000feaa4 1070
.org 0xfeaa6
	ldrb r0, [r4, #10]	@ 000feaa6 a07a
.org 0xfeaa8
	movs r1, #4	@ 000feaa8 0421
.org 0xfeaaa
	orrs r0, r1	@ 000feaaa 0843
.org 0xfeaac
	strb r0, [r4, #10]	@ 000feaac a072
.org 0xfeaae
	adds r5, r4, #0	@ 000feaae 251c
.org 0xfeab0
	adds r5, #116	@ 000feab0 7435
.org 0xfeab2
	ldr r1, [pc, #72]	@ 000feab2 1249
.org 0xfeab4
	adds r2, #10	@ 000feab4 0a32
.org 0xfeab6
	adds r0, r5, #0	@ 000feab6 281c
.org 0xfeab8
	movs r3, #8	@ 000feab8 0823
.org 0xfeaba
	bl 0x5760	@ 000feaba 06f751fe
.org 0xfeabe
	str r4, [r5, #44]	@ 000feabe ec62
.org 0xfeac0
	ldr r0, [pc, #60]	@ 000feac0 0f48
.org 0xfeac2
	str r0, [r5, #36]	@ 000feac2 6862
.org 0xfeac4
	ldrb r1, [r4, #11]	@ 000feac4 e17a
.org 0xfeac6
	movs r0, #8	@ 000feac6 0820
.org 0xfeac8
	orrs r0, r1	@ 000feac8 0843
.org 0xfeaca
	strb r0, [r4, #11]	@ 000feaca e072
.org 0xfeacc
	ldr r0, [pc, #52]	@ 000feacc 0d48
.org 0xfeace
	str r0, [r4, #48]	@ 000feace 2063
.org 0xfead0
	strh r6, [r4, #38]	@ 000fead0 e684
.org 0xfead2
	ldr r0, [r4, #84]	@ 000fead2 606d
.org 0xfead4
	ldr r1, [r4, #88]	@ 000fead4 a16d
.org 0xfead6
	bl 0x8534	@ 000fead6 09f72dfd
.org 0xfeada
	str r0, [r4, #88]	@ 000feada a065
.org 0xfeadc
	ldr r1, [pc, #40]	@ 000feadc 0a49
.org 0xfeade
	ldrb r0, [r4, #9]	@ 000feade 607a
.org 0xfeae0
	lsls r0, r0, #2	@ 000feae0 8000
.org 0xfeae2
	adds r0, r0, r1	@ 000feae2 4018
.org 0xfeae4
	str r6, [r4, #12]	@ 000feae4 e660
.org 0xfeae6
	ldr r0, [r0, #0]	@ 000feae6 0068
.org 0xfeae8
	ldr r0, [r0, #4]	@ 000feae8 4068
.org 0xfeaea
	str r0, [r4, #20]	@ 000feaea 6061
.org 0xfeaec
	adds r0, r4, #0	@ 000feaec 201c
.org 0xfeaee
	bl 0xfeb0c	@ 000feaee 00f00df8
.org 0xfeaf2
	pop {r4, r5, r6}	@ 000feaf2 70bc
.org 0xfeaf4
	pop {r0}	@ 000feaf4 01bc
.org 0xfeaf6
	bx r0	@ 000feaf6 0047
