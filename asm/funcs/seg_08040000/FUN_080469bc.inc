@ FUN_080469bc  entry 0x080469bc  size 180
.thumb
.org 0x469bc
FUN_080469bc:
	push {r4, r5, lr}	@ 000469bc 30b5
.org 0x469be
	adds r4, r0, #0	@ 000469be 041c
.org 0x469c0
	ldr r1, [pc, #172]	@ 000469c0 2b49
.org 0x469c2
	ldrb r0, [r4, #9]	@ 000469c2 607a
.org 0x469c4
	lsls r0, r0, #2	@ 000469c4 8000
.org 0x469c6
	adds r0, r0, r1	@ 000469c6 4018
.org 0x469c8
	movs r1, #1	@ 000469c8 0121
.org 0x469ca
	str r1, [r4, #12]	@ 000469ca e160
.org 0x469cc
	ldr r0, [r0, #0]	@ 000469cc 0068
.org 0x469ce
	ldr r0, [r0, #4]	@ 000469ce 4068
.org 0x469d0
	str r0, [r4, #20]	@ 000469d0 6061
.org 0x469d2
	adds r0, r4, #0	@ 000469d2 201c
.org 0x469d4
	bl 0x1cc9c	@ 000469d4 d6f762f9
.org 0x469d8
	adds r0, r4, #0	@ 000469d8 201c
.org 0x469da
	bl 0x1ceec	@ 000469da d6f787fa
.org 0x469de
	ldrb r1, [r4, #10]	@ 000469de a17a
.org 0x469e0
	movs r0, #1	@ 000469e0 0120
.org 0x469e2
	orrs r0, r1	@ 000469e2 0843
.org 0x469e4
	movs r1, #2	@ 000469e4 0221
.org 0x469e6
	orrs r0, r1	@ 000469e6 0843
.org 0x469e8
	strb r0, [r4, #10]	@ 000469e8 a072
.org 0x469ea
	ldr r1, [pc, #136]	@ 000469ea 2249
.org 0x469ec
	adds r0, r4, #0	@ 000469ec 201c
.org 0x469ee
	bl 0x1cf00	@ 000469ee d6f787fa
.org 0x469f2
	adds r0, r4, #0	@ 000469f2 201c
.org 0x469f4
	bl 0x1cff0	@ 000469f4 d6f7fcfa
.org 0x469f8
	movs r2, #0	@ 000469f8 0022
.org 0x469fa
	ldrb r1, [r4, #10]	@ 000469fa a17a
.org 0x469fc
	movs r0, #239	@ 000469fc ef20
.org 0x469fe
	ands r0, r1	@ 000469fe 0840
.org 0x46a00
	strb r0, [r4, #10]	@ 00046a00 a072
.org 0x46a02
	adds r0, r4, #0	@ 00046a02 201c
.org 0x46a04
	adds r0, #76	@ 00046a04 4c30
.org 0x46a06
	strb r2, [r0, #0]	@ 00046a06 0270
.org 0x46a08
	adds r2, r4, #0	@ 00046a08 221c
.org 0x46a0a
	adds r2, #74	@ 00046a0a 4a32
.org 0x46a0c
	ldrb r1, [r2, #0]	@ 00046a0c 1178
.org 0x46a0e
	movs r0, #17	@ 00046a0e 1120
.org 0x46a10
	negs r0, r0	@ 00046a10 4042
.org 0x46a12
	ands r0, r1	@ 00046a12 0840
.org 0x46a14
	strb r0, [r2, #0]	@ 00046a14 1070
.org 0x46a16
	ldrb r1, [r4, #10]	@ 00046a16 a17a
.org 0x46a18
	movs r0, #4	@ 00046a18 0420
.org 0x46a1a
	orrs r0, r1	@ 00046a1a 0843
.org 0x46a1c
	strb r0, [r4, #10]	@ 00046a1c a072
.org 0x46a1e
	adds r5, r4, #0	@ 00046a1e 251c
.org 0x46a20
	adds r5, #116	@ 00046a20 7435
.org 0x46a22
	ldr r1, [pc, #84]	@ 00046a22 1549
.org 0x46a24
	adds r2, #10	@ 00046a24 0a32
.org 0x46a26
	adds r0, r5, #0	@ 00046a26 281c
.org 0x46a28
	movs r3, #8	@ 00046a28 0823
.org 0x46a2a
	bl 0x5760	@ 00046a2a bef799fe
.org 0x46a2e
	str r4, [r5, #44]	@ 00046a2e ec62
.org 0x46a30
	ldr r0, [pc, #72]	@ 00046a30 1248
.org 0x46a32
	str r0, [r5, #36]	@ 00046a32 6862
.org 0x46a34
	adds r1, r4, #0	@ 00046a34 211c
.org 0x46a36
	adds r1, #180	@ 00046a36 b431
.org 0x46a38
	ldr r0, [r4, #84]	@ 00046a38 606d
.org 0x46a3a
	str r0, [r1, #0]	@ 00046a3a 0860
.org 0x46a3c
	adds r1, #4	@ 00046a3c 0431
.org 0x46a3e
	ldr r0, [r4, #88]	@ 00046a3e a06d
.org 0x46a40
	str r0, [r1, #0]	@ 00046a40 0860
.org 0x46a42
	ldr r1, [pc, #60]	@ 00046a42 0f49
.org 0x46a44
	ldrb r0, [r4, #16]	@ 00046a44 207c
.org 0x46a46
	adds r0, #64	@ 00046a46 4030
.org 0x46a48
	lsls r0, r0, #24	@ 00046a48 0006
.org 0x46a4a
	lsrs r0, r0, #23	@ 00046a4a c00d
.org 0x46a4c
	adds r0, r0, r1	@ 00046a4c 4018
.org 0x46a4e
	movs r2, #0	@ 00046a4e 0022
.org 0x46a50
	ldrsh r0, [r0, r2]	@ 00046a50 805e
.org 0x46a52
	lsls r0, r0, #2	@ 00046a52 8000
.org 0x46a54
	str r0, [r4, #92]	@ 00046a54 e065
.org 0x46a56
	ldrb r0, [r4, #16]	@ 00046a56 207c
.org 0x46a58
	lsls r0, r0, #1	@ 00046a58 4000
.org 0x46a5a
	adds r0, r0, r1	@ 00046a5a 4018
.org 0x46a5c
	movs r1, #0	@ 00046a5c 0021
.org 0x46a5e
	ldrsh r0, [r0, r1]	@ 00046a5e 405e
.org 0x46a60
	lsls r0, r0, #2	@ 00046a60 8000
.org 0x46a62
	str r0, [r4, #96]	@ 00046a62 2066
.org 0x46a64
	adds r0, r4, #0	@ 00046a64 201c
.org 0x46a66
	bl 0x46a84	@ 00046a66 00f00df8
.org 0x46a6a
	pop {r4, r5}	@ 00046a6a 30bc
.org 0x46a6c
	pop {r0}	@ 00046a6c 01bc
.org 0x46a6e
	bx r0	@ 00046a6e 0047
