@ FUN_080fc930  entry 0x080fc930  size 158
.thumb
.org 0xfc930
FUN_080fc930:
	push {r4, r5, r6, lr}	@ 000fc930 70b5
.org 0xfc932
	adds r4, r0, #0	@ 000fc932 041c
.org 0xfc934
	bl 0x1cc9c	@ 000fc934 20f7b2f9
.org 0xfc938
	ldrb r1, [r4, #10]	@ 000fc938 a17a
.org 0xfc93a
	movs r0, #1	@ 000fc93a 0120
.org 0xfc93c
	orrs r0, r1	@ 000fc93c 0843
.org 0xfc93e
	movs r1, #2	@ 000fc93e 0221
.org 0xfc940
	orrs r0, r1	@ 000fc940 0843
.org 0xfc942
	strb r0, [r4, #10]	@ 000fc942 a072
.org 0xfc944
	movs r1, #158	@ 000fc944 9e21
.org 0xfc946
	lsls r1, r1, #8	@ 000fc946 0902
.org 0xfc948
	adds r0, r4, #0	@ 000fc948 201c
.org 0xfc94a
	bl 0x1cf00	@ 000fc94a 20f7d9fa
.org 0xfc94e
	adds r0, r4, #0	@ 000fc94e 201c
.org 0xfc950
	bl 0x1cff0	@ 000fc950 20f74efb
.org 0xfc954
	movs r2, #0	@ 000fc954 0022
.org 0xfc956
	ldrb r1, [r4, #10]	@ 000fc956 a17a
.org 0xfc958
	movs r0, #239	@ 000fc958 ef20
.org 0xfc95a
	ands r0, r1	@ 000fc95a 0840
.org 0xfc95c
	strb r0, [r4, #10]	@ 000fc95c a072
.org 0xfc95e
	movs r6, #1	@ 000fc95e 0126
.org 0xfc960
	adds r0, r4, #0	@ 000fc960 201c
.org 0xfc962
	adds r0, #76	@ 000fc962 4c30
.org 0xfc964
	strb r2, [r0, #0]	@ 000fc964 0270
.org 0xfc966
	adds r2, r4, #0	@ 000fc966 221c
.org 0xfc968
	adds r2, #74	@ 000fc968 4a32
.org 0xfc96a
	ldrb r1, [r2, #0]	@ 000fc96a 1178
.org 0xfc96c
	movs r0, #17	@ 000fc96c 1120
.org 0xfc96e
	negs r0, r0	@ 000fc96e 4042
.org 0xfc970
	ands r0, r1	@ 000fc970 0840
.org 0xfc972
	strb r0, [r2, #0]	@ 000fc972 1070
.org 0xfc974
	ldrb r0, [r4, #10]	@ 000fc974 a07a
.org 0xfc976
	movs r1, #4	@ 000fc976 0421
.org 0xfc978
	orrs r0, r1	@ 000fc978 0843
.org 0xfc97a
	strb r0, [r4, #10]	@ 000fc97a a072
.org 0xfc97c
	adds r5, r4, #0	@ 000fc97c 251c
.org 0xfc97e
	adds r5, #116	@ 000fc97e 7435
.org 0xfc980
	ldr r1, [pc, #76]	@ 000fc980 1349
.org 0xfc982
	adds r2, #10	@ 000fc982 0a32
.org 0xfc984
	adds r0, r5, #0	@ 000fc984 281c
.org 0xfc986
	movs r3, #6	@ 000fc986 0623
.org 0xfc988
	bl 0x5760	@ 000fc988 08f7eafe
.org 0xfc98c
	str r4, [r5, #44]	@ 000fc98c ec62
.org 0xfc98e
	ldr r0, [pc, #68]	@ 000fc98e 1148
.org 0xfc990
	str r0, [r5, #36]	@ 000fc990 6862
.org 0xfc992
	ldrb r1, [r4, #11]	@ 000fc992 e17a
.org 0xfc994
	movs r0, #8	@ 000fc994 0820
.org 0xfc996
	orrs r0, r1	@ 000fc996 0843
.org 0xfc998
	strb r0, [r4, #11]	@ 000fc998 e072
.org 0xfc99a
	ldr r0, [pc, #60]	@ 000fc99a 0f48
.org 0xfc99c
	str r0, [r4, #48]	@ 000fc99c 2063
.org 0xfc99e
	movs r5, #0	@ 000fc99e 0025
.org 0xfc9a0
	strh r6, [r4, #38]	@ 000fc9a0 e684
.org 0xfc9a2
	ldr r0, [r4, #84]	@ 000fc9a2 606d
.org 0xfc9a4
	ldr r1, [r4, #88]	@ 000fc9a4 a16d
.org 0xfc9a6
	bl 0x8534	@ 000fc9a6 0bf7c5fd
.org 0xfc9aa
	str r0, [r4, #88]	@ 000fc9aa a065
.org 0xfc9ac
	adds r0, r4, #0	@ 000fc9ac 201c
.org 0xfc9ae
	adds r0, #189	@ 000fc9ae bd30
.org 0xfc9b0
	strb r5, [r0, #0]	@ 000fc9b0 0570
.org 0xfc9b2
	ldr r1, [pc, #40]	@ 000fc9b2 0a49
.org 0xfc9b4
	ldrb r0, [r4, #9]	@ 000fc9b4 607a
.org 0xfc9b6
	lsls r0, r0, #2	@ 000fc9b6 8000
.org 0xfc9b8
	adds r0, r0, r1	@ 000fc9b8 4018
.org 0xfc9ba
	str r6, [r4, #12]	@ 000fc9ba e660
.org 0xfc9bc
	ldr r0, [r0, #0]	@ 000fc9bc 0068
.org 0xfc9be
	ldr r0, [r0, #4]	@ 000fc9be 4068
.org 0xfc9c0
	str r0, [r4, #20]	@ 000fc9c0 6061
.org 0xfc9c2
	adds r0, r4, #0	@ 000fc9c2 201c
.org 0xfc9c4
	bl 0xfc9e0	@ 000fc9c4 00f00cf8
.org 0xfc9c8
	pop {r4, r5, r6}	@ 000fc9c8 70bc
.org 0xfc9ca
	pop {r0}	@ 000fc9ca 01bc
.org 0xfc9cc
	bx r0	@ 000fc9cc 0047
