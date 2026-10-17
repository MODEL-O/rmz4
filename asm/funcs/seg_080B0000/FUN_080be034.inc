@ FUN_080be034  entry 0x080be034  size 130
.thumb
.org 0xbe034
FUN_080be034:
	push {r4, r5, r6, lr}	@ 000be034 70b5
.org 0xbe036
	mov r6, r8	@ 000be036 4646
.org 0xbe038
	push {r6}	@ 000be038 40b4
.org 0xbe03a
	adds r4, r0, #0	@ 000be03a 041c
.org 0xbe03c
	bl 0x1cc9c	@ 000be03c 5ef72efe
.org 0xbe040
	ldrb r1, [r4, #10]	@ 000be040 a17a
.org 0xbe042
	movs r0, #1	@ 000be042 0120
.org 0xbe044
	orrs r0, r1	@ 000be044 0843
.org 0xbe046
	movs r1, #2	@ 000be046 0221
.org 0xbe048
	orrs r0, r1	@ 000be048 0843
.org 0xbe04a
	strb r0, [r4, #10]	@ 000be04a a072
.org 0xbe04c
	ldr r1, [pc, #104]	@ 000be04c 1a49
.org 0xbe04e
	adds r0, r4, #0	@ 000be04e 201c
.org 0xbe050
	bl 0x1cf00	@ 000be050 5ef756ff
.org 0xbe054
	movs r6, #0	@ 000be054 0026
.org 0xbe056
	ldrb r1, [r4, #10]	@ 000be056 a17a
.org 0xbe058
	movs r0, #239	@ 000be058 ef20
.org 0xbe05a
	ands r0, r1	@ 000be05a 0840
.org 0xbe05c
	strb r0, [r4, #10]	@ 000be05c a072
.org 0xbe05e
	movs r0, #1	@ 000be05e 0120
.org 0xbe060
	mov r8, r0	@ 000be060 8046
.org 0xbe062
	adds r0, r4, #0	@ 000be062 201c
.org 0xbe064
	adds r0, #76	@ 000be064 4c30
.org 0xbe066
	strb r6, [r0, #0]	@ 000be066 0670
.org 0xbe068
	adds r2, r4, #0	@ 000be068 221c
.org 0xbe06a
	adds r2, #74	@ 000be06a 4a32
.org 0xbe06c
	ldrb r1, [r2, #0]	@ 000be06c 1178
.org 0xbe06e
	movs r0, #17	@ 000be06e 1120
.org 0xbe070
	negs r0, r0	@ 000be070 4042
.org 0xbe072
	ands r0, r1	@ 000be072 0840
.org 0xbe074
	strb r0, [r2, #0]	@ 000be074 1070
.org 0xbe076
	ldrb r1, [r4, #10]	@ 000be076 a17a
.org 0xbe078
	movs r0, #4	@ 000be078 0420
.org 0xbe07a
	orrs r0, r1	@ 000be07a 0843
.org 0xbe07c
	strb r0, [r4, #10]	@ 000be07c a072
.org 0xbe07e
	adds r5, r4, #0	@ 000be07e 251c
.org 0xbe080
	adds r5, #116	@ 000be080 7435
.org 0xbe082
	ldr r1, [pc, #56]	@ 000be082 0e49
.org 0xbe084
	adds r2, #10	@ 000be084 0a32
.org 0xbe086
	adds r0, r5, #0	@ 000be086 281c
.org 0xbe088
	movs r3, #8	@ 000be088 0823
.org 0xbe08a
	bl 0x5760	@ 000be08a 47f769fb
.org 0xbe08e
	str r4, [r5, #44]	@ 000be08e ec62
.org 0xbe090
	str r6, [r5, #36]	@ 000be090 6e62
.org 0xbe092
	str r6, [r4, #96]	@ 000be092 2666
.org 0xbe094
	ldr r1, [pc, #40]	@ 000be094 0a49
.org 0xbe096
	ldrb r0, [r4, #9]	@ 000be096 607a
.org 0xbe098
	lsls r0, r0, #2	@ 000be098 8000
.org 0xbe09a
	adds r0, r0, r1	@ 000be09a 4018
.org 0xbe09c
	mov r1, r8	@ 000be09c 4146
.org 0xbe09e
	str r1, [r4, #12]	@ 000be09e e160
.org 0xbe0a0
	ldr r0, [r0, #0]	@ 000be0a0 0068
.org 0xbe0a2
	ldr r0, [r0, #4]	@ 000be0a2 4068
.org 0xbe0a4
	str r0, [r4, #20]	@ 000be0a4 6061
.org 0xbe0a6
	adds r0, r4, #0	@ 000be0a6 201c
.org 0xbe0a8
	bl 0xbe0c4	@ 000be0a8 00f00cf8
.org 0xbe0ac
	pop {r3}	@ 000be0ac 08bc
.org 0xbe0ae
	mov r8, r3	@ 000be0ae 9846
.org 0xbe0b0
	pop {r4, r5, r6}	@ 000be0b0 70bc
.org 0xbe0b2
	pop {r0}	@ 000be0b2 01bc
.org 0xbe0b4
	bx r0	@ 000be0b4 0047
