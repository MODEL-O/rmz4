@ FUN_0806d978  entry 0x0806d978  size 350
.thumb
.org 0x6d978
FUN_0806d978:
	push {r4, r5, r6, r7, lr}	@ 0006d978 f0b5
.org 0x6d97a
	mov r7, sl	@ 0006d97a 5746
.org 0x6d97c
	mov r6, r9	@ 0006d97c 4e46
.org 0x6d97e
	mov r5, r8	@ 0006d97e 4546
.org 0x6d980
	push {r5, r6, r7}	@ 0006d980 e0b4
.org 0x6d982
	adds r7, r0, #0	@ 0006d982 071c
.org 0x6d984
	ldr r1, [pc, #336]	@ 0006d984 5449
.org 0x6d986
	ldrb r0, [r7, #9]	@ 0006d986 787a
.org 0x6d988
	lsls r0, r0, #2	@ 0006d988 8000
.org 0x6d98a
	adds r0, r0, r1	@ 0006d98a 4018
.org 0x6d98c
	movs r5, #1	@ 0006d98c 0125
.org 0x6d98e
	str r5, [r7, #12]	@ 0006d98e fd60
.org 0x6d990
	ldr r0, [r0, #0]	@ 0006d990 0068
.org 0x6d992
	ldr r0, [r0, #4]	@ 0006d992 4068
.org 0x6d994
	str r0, [r7, #20]	@ 0006d994 7861
.org 0x6d996
	movs r0, #0	@ 0006d996 0020
.org 0x6d998
	strb r0, [r7, #13]	@ 0006d998 7873
.org 0x6d99a
	strb r0, [r7, #14]	@ 0006d99a b873
.org 0x6d99c
	strb r0, [r7, #15]	@ 0006d99c f873
.org 0x6d99e
	ldrb r0, [r7, #10]	@ 0006d99e b87a
.org 0x6d9a0
	movs r1, #1	@ 0006d9a0 0121
.org 0x6d9a2
	orrs r0, r1	@ 0006d9a2 0843
.org 0x6d9a4
	movs r1, #2	@ 0006d9a4 0221
.org 0x6d9a6
	orrs r0, r1	@ 0006d9a6 0843
.org 0x6d9a8
	strb r0, [r7, #10]	@ 0006d9a8 b872
.org 0x6d9aa
	adds r1, r7, #0	@ 0006d9aa 391c
.org 0x6d9ac
	adds r1, #182	@ 0006d9ac b631
.org 0x6d9ae
	movs r0, #255	@ 0006d9ae ff20
.org 0x6d9b0
	strb r0, [r1, #0]	@ 0006d9b0 0870
.org 0x6d9b2
	subs r1, #2	@ 0006d9b2 0239
.org 0x6d9b4
	strb r0, [r1, #0]	@ 0006d9b4 0870
.org 0x6d9b6
	adds r0, r7, #0	@ 0006d9b6 381c
.org 0x6d9b8
	adds r0, #183	@ 0006d9b8 b730
.org 0x6d9ba
	movs r1, #0	@ 0006d9ba 0021
.org 0x6d9bc
	strb r1, [r0, #0]	@ 0006d9bc 0170
.org 0x6d9be
	subs r0, #2	@ 0006d9be 0238
.org 0x6d9c0
	strb r1, [r0, #0]	@ 0006d9c0 0170
.org 0x6d9c2
	ldr r0, [r7, #84]	@ 0006d9c2 786d
.org 0x6d9c4
	ldr r1, [r7, #88]	@ 0006d9c4 b96d
.org 0x6d9c6
	bl 0x8534	@ 0006d9c6 9af7b5fd
.org 0x6d9ca
	adds r4, r7, #0	@ 0006d9ca 3c1c
.org 0x6d9cc
	adds r4, #184	@ 0006d9cc b834
.org 0x6d9ce
	str r0, [r4, #0]	@ 0006d9ce 2060
.org 0x6d9d0
	ldr r0, [r7, #84]	@ 0006d9d0 786d
.org 0x6d9d2
	ldr r1, [r7, #88]	@ 0006d9d2 b96d
.org 0x6d9d4
	bl 0x8988	@ 0006d9d4 9af7d8ff
.org 0x6d9d8
	adds r1, r7, #0	@ 0006d9d8 391c
.org 0x6d9da
	adds r1, #188	@ 0006d9da bc31
.org 0x6d9dc
	str r0, [r1, #0]	@ 0006d9dc 0860
.org 0x6d9de
	movs r2, #208	@ 0006d9de d022
.org 0x6d9e0
	lsls r2, r2, #7	@ 0006d9e0 d201
.org 0x6d9e2
	adds r0, r0, r2	@ 0006d9e2 8018
.org 0x6d9e4
	str r0, [r7, #84]	@ 0006d9e4 7865
.org 0x6d9e6
	ldr r0, [r4, #0]	@ 0006d9e6 2068
.org 0x6d9e8
	ldr r1, [pc, #240]	@ 0006d9e8 3c49
.org 0x6d9ea
	adds r0, r0, r1	@ 0006d9ea 4018
.org 0x6d9ec
	str r0, [r7, #88]	@ 0006d9ec b865
.org 0x6d9ee
	adds r0, r7, #0	@ 0006d9ee 381c
.org 0x6d9f0
	adds r0, #194	@ 0006d9f0 c230
.org 0x6d9f2
	movs r2, #0	@ 0006d9f2 0022
.org 0x6d9f4
	strb r2, [r0, #0]	@ 0006d9f4 0270
.org 0x6d9f6
	adds r0, #1	@ 0006d9f6 0130
.org 0x6d9f8
	strb r5, [r0, #0]	@ 0006d9f8 0570
.org 0x6d9fa
	adds r0, #9	@ 0006d9fa 0930
.org 0x6d9fc
	strb r2, [r0, #0]	@ 0006d9fc 0270
.org 0x6d9fe
	subs r0, #4	@ 0006d9fe 0438
.org 0x6da00
	movs r1, #0	@ 0006da00 0021
.org 0x6da02
	str r1, [r0, #0]	@ 0006da02 0160
.org 0x6da04
	str r1, [r7, #44]	@ 0006da04 f962
.org 0x6da06
	movs r5, #170	@ 0006da06 aa25
.org 0x6da08
	lsls r5, r5, #4	@ 0006da08 2d01
.org 0x6da0a
	ldr r2, [pc, #212]	@ 0006da0a 354a
.org 0x6da0c
	mov r9, r2	@ 0006da0c 9146
.org 0x6da0e
	adds r0, r5, r2	@ 0006da0e a818
.org 0x6da10
	ldr r1, [pc, #208]	@ 0006da10 3449
.org 0x6da12
	mov r8, r1	@ 0006da12 8846
.org 0x6da14
	movs r4, #136	@ 0006da14 8824
.org 0x6da16
	lsls r4, r4, #1	@ 0006da16 6400
.org 0x6da18
	adds r1, r1, r4	@ 0006da18 0919
.org 0x6da1a
	ldrh r1, [r1, #0]	@ 0006da1a 0988
.org 0x6da1c
	ldrh r2, [r0, #6]	@ 0006da1c c288
.org 0x6da1e
	lsrs r2, r2, #6	@ 0006da1e 9209
.org 0x6da20
	subs r1, r1, r2	@ 0006da20 891a
.org 0x6da22
	lsls r1, r1, #5	@ 0006da22 4901
.org 0x6da24
	movs r2, #128	@ 0006da24 8022
.org 0x6da26
	lsls r2, r2, #9	@ 0006da26 5202
.org 0x6da28
	adds r1, r1, r2	@ 0006da28 8918
.org 0x6da2a
	bl 0x1d30	@ 0006da2a 94f781f9
.org 0x6da2e
	ldr r0, [pc, #184]	@ 0006da2e 2e48
.org 0x6da30
	adds r5, r5, r0	@ 0006da30 2d18
.org 0x6da32
	ldr r6, [pc, #184]	@ 0006da32 2e4e
.org 0x6da34
	adds r4, r6, r4	@ 0006da34 3419
.org 0x6da36
	ldrh r1, [r4, #0]	@ 0006da36 2188
.org 0x6da38
	ldrb r0, [r5, #7]	@ 0006da38 e879
.org 0x6da3a
	subs r1, r1, r0	@ 0006da3a 091a
.org 0x6da3c
	lsls r1, r1, #5	@ 0006da3c 4901
.org 0x6da3e
	movs r2, #128	@ 0006da3e 8022
.org 0x6da40
	lsls r2, r2, #2	@ 0006da40 9200
.org 0x6da42
	mov sl, r2	@ 0006da42 9246
.org 0x6da44
	add r1, sl	@ 0006da44 5144
.org 0x6da46
	adds r0, r5, #0	@ 0006da46 281c
.org 0x6da48
	bl 0x2208	@ 0006da48 94f7defb
.org 0x6da4c
	ldr r4, [pc, #160]	@ 0006da4c 284c
.org 0x6da4e
	add r9, r4	@ 0006da4e a144
.org 0x6da50
	movs r5, #137	@ 0006da50 8925
.org 0x6da52
	lsls r5, r5, #1	@ 0006da52 6d00
.org 0x6da54
	add r8, r5	@ 0006da54 a844
.org 0x6da56
	mov r0, r8	@ 0006da56 4046
.org 0x6da58
	ldrh r1, [r0, #0]	@ 0006da58 0188
.org 0x6da5a
	mov r2, r9	@ 0006da5a 4a46
.org 0x6da5c
	ldrh r0, [r2, #6]	@ 0006da5c d088
.org 0x6da5e
	lsrs r0, r0, #6	@ 0006da5e 8009
.org 0x6da60
	subs r1, r1, r0	@ 0006da60 091a
.org 0x6da62
	lsls r1, r1, #5	@ 0006da62 4901
.org 0x6da64
	movs r0, #128	@ 0006da64 8020
.org 0x6da66
	lsls r0, r0, #9	@ 0006da66 4002
.org 0x6da68
	adds r1, r1, r0	@ 0006da68 0918
.org 0x6da6a
	mov r0, r9	@ 0006da6a 4846
.org 0x6da6c
	bl 0x1d30	@ 0006da6c 94f760f9
.org 0x6da70
	ldr r1, [pc, #116]	@ 0006da70 1d49
.org 0x6da72
	adds r4, r4, r1	@ 0006da72 6418
.org 0x6da74
	adds r6, r6, r5	@ 0006da74 7619
.org 0x6da76
	ldrh r1, [r6, #0]	@ 0006da76 3188
.org 0x6da78
	ldrb r0, [r4, #7]	@ 0006da78 e079
.org 0x6da7a
	subs r1, r1, r0	@ 0006da7a 091a
.org 0x6da7c
	lsls r1, r1, #5	@ 0006da7c 4901
.org 0x6da7e
	add r1, sl	@ 0006da7e 5144
.org 0x6da80
	adds r0, r4, #0	@ 0006da80 201c
.org 0x6da82
	bl 0x2208	@ 0006da82 94f7c1fb
.org 0x6da86
	adds r0, r7, #0	@ 0006da86 381c
.org 0x6da88
	bl 0x1cc9c	@ 0006da88 aff708f9
.org 0x6da8c
	adds r0, r7, #0	@ 0006da8c 381c
.org 0x6da8e
	bl 0x1ceec	@ 0006da8e aff72dfa
.org 0x6da92
	adds r0, r7, #0	@ 0006da92 381c
.org 0x6da94
	adds r0, #76	@ 0006da94 4c30
.org 0x6da96
	movs r2, #0	@ 0006da96 0022
.org 0x6da98
	strb r2, [r0, #0]	@ 0006da98 0270
.org 0x6da9a
	adds r2, r7, #0	@ 0006da9a 3a1c
.org 0x6da9c
	adds r2, #74	@ 0006da9c 4a32
.org 0x6da9e
	ldrb r1, [r2, #0]	@ 0006da9e 1178
.org 0x6daa0
	movs r0, #17	@ 0006daa0 1120
.org 0x6daa2
	negs r0, r0	@ 0006daa2 4042
.org 0x6daa4
	ands r0, r1	@ 0006daa4 0840
.org 0x6daa6
	strb r0, [r2, #0]	@ 0006daa6 1070
.org 0x6daa8
	ldrb r1, [r7, #10]	@ 0006daa8 b97a
.org 0x6daaa
	movs r0, #239	@ 0006daaa ef20
.org 0x6daac
	ands r0, r1	@ 0006daac 0840
.org 0x6daae
	strb r0, [r7, #10]	@ 0006daae b872
.org 0x6dab0
	ldr r1, [pc, #64]	@ 0006dab0 1049
.org 0x6dab2
	adds r0, r7, #0	@ 0006dab2 381c
.org 0x6dab4
	movs r2, #96	@ 0006dab4 6022
.org 0x6dab6
	bl 0x503cc	@ 0006dab6 e2f789fc
.org 0x6daba
	ldr r1, [pc, #60]	@ 0006daba 0f49
.org 0x6dabc
	adds r0, r7, #0	@ 0006dabc 381c
.org 0x6dabe
	adds r0, #116	@ 0006dabe 7430
.org 0x6dac0
	str r1, [r0, #36]	@ 0006dac0 4162
.org 0x6dac2
	adds r0, r7, #0	@ 0006dac2 381c
.org 0x6dac4
	bl 0x6dafc	@ 0006dac4 00f01af8
.org 0x6dac8
	pop {r3, r4, r5}	@ 0006dac8 38bc
.org 0x6daca
	mov r8, r3	@ 0006daca 9846
.org 0x6dacc
	mov r9, r4	@ 0006dacc a146
.org 0x6dace
	mov sl, r5	@ 0006dace aa46
.org 0x6dad0
	pop {r4, r5, r6, r7}	@ 0006dad0 f0bc
.org 0x6dad2
	pop {r0}	@ 0006dad2 01bc
.org 0x6dad4
	bx r0	@ 0006dad4 0047
