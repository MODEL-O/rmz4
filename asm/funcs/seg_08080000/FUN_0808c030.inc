@ FUN_0808c030  entry 0x0808c030  size 138
.thumb
.org 0x8c030
FUN_0808c030:
	push {r4, r5, r6, lr}	@ 0008c030 70b5
.org 0x8c032
	adds r4, r0, #0	@ 0008c032 041c
.org 0x8c034
	ldr r5, [r4, #40]	@ 0008c034 a56a
.org 0x8c036
	movs r6, #0	@ 0008c036 0026
.org 0x8c038
	ldr r1, [pc, #128]	@ 0008c038 2049
.org 0x8c03a
	ldrb r0, [r4, #9]	@ 0008c03a 607a
.org 0x8c03c
	lsls r0, r0, #2	@ 0008c03c 8000
.org 0x8c03e
	adds r0, r0, r1	@ 0008c03e 4018
.org 0x8c040
	movs r1, #1	@ 0008c040 0121
.org 0x8c042
	str r1, [r4, #12]	@ 0008c042 e160
.org 0x8c044
	ldr r0, [r0, #0]	@ 0008c044 0068
.org 0x8c046
	ldr r0, [r0, #4]	@ 0008c046 4068
.org 0x8c048
	str r0, [r4, #20]	@ 0008c048 6061
.org 0x8c04a
	ldrb r1, [r4, #10]	@ 0008c04a a17a
.org 0x8c04c
	movs r0, #1	@ 0008c04c 0120
.org 0x8c04e
	orrs r0, r1	@ 0008c04e 0843
.org 0x8c050
	movs r1, #2	@ 0008c050 0221
.org 0x8c052
	orrs r0, r1	@ 0008c052 0843
.org 0x8c054
	strb r0, [r4, #10]	@ 0008c054 a072
.org 0x8c056
	adds r1, r4, #0	@ 0008c056 211c
.org 0x8c058
	adds r1, #180	@ 0008c058 b431
.org 0x8c05a
	ldr r0, [r5, #84]	@ 0008c05a 686d
.org 0x8c05c
	str r0, [r1, #0]	@ 0008c05c 0860
.org 0x8c05e
	adds r0, r4, #0	@ 0008c05e 201c
.org 0x8c060
	adds r0, #184	@ 0008c060 b830
.org 0x8c062
	strb r6, [r0, #0]	@ 0008c062 0670
.org 0x8c064
	adds r0, r4, #0	@ 0008c064 201c
.org 0x8c066
	bl 0x1cc9c	@ 0008c066 90f719fe
.org 0x8c06a
	ldrb r1, [r4, #10]	@ 0008c06a a17a
.org 0x8c06c
	movs r0, #239	@ 0008c06c ef20
.org 0x8c06e
	ands r0, r1	@ 0008c06e 0840
.org 0x8c070
	strb r0, [r4, #10]	@ 0008c070 a072
.org 0x8c072
	adds r0, r4, #0	@ 0008c072 201c
.org 0x8c074
	adds r0, #76	@ 0008c074 4c30
.org 0x8c076
	strb r6, [r0, #0]	@ 0008c076 0670
.org 0x8c078
	adds r2, r4, #0	@ 0008c078 221c
.org 0x8c07a
	adds r2, #74	@ 0008c07a 4a32
.org 0x8c07c
	ldrb r1, [r2, #0]	@ 0008c07c 1178
.org 0x8c07e
	movs r0, #17	@ 0008c07e 1120
.org 0x8c080
	negs r0, r0	@ 0008c080 4042
.org 0x8c082
	ands r0, r1	@ 0008c082 0840
.org 0x8c084
	strb r0, [r2, #0]	@ 0008c084 1070
.org 0x8c086
	adds r0, r5, #0	@ 0008c086 281c
.org 0x8c088
	adds r0, #37	@ 0008c088 2530
.org 0x8c08a
	ldrb r0, [r0, #0]	@ 0008c08a 0078
.org 0x8c08c
	adds r0, #1	@ 0008c08c 0130
.org 0x8c08e
	adds r1, r4, #0	@ 0008c08e 211c
.org 0x8c090
	adds r1, #37	@ 0008c090 2531
.org 0x8c092
	strb r0, [r1, #0]	@ 0008c092 0870
.org 0x8c094
	ldr r1, [pc, #40]	@ 0008c094 0a49
.org 0x8c096
	adds r0, r4, #0	@ 0008c096 201c
.org 0x8c098
	bl 0x1cf00	@ 0008c098 90f732ff
.org 0x8c09c
	adds r0, r4, #0	@ 0008c09c 201c
.org 0x8c09e
	bl 0x1cff0	@ 0008c09e 90f7a7ff
.org 0x8c0a2
	ldrb r1, [r4, #11]	@ 0008c0a2 e17a
.org 0x8c0a4
	movs r0, #16	@ 0008c0a4 1020
.org 0x8c0a6
	orrs r0, r1	@ 0008c0a6 0843
.org 0x8c0a8
	strb r0, [r4, #11]	@ 0008c0a8 e072
.org 0x8c0aa
	ldrb r0, [r5, #28]	@ 0008c0aa 287f
.org 0x8c0ac
	strb r0, [r4, #29]	@ 0008c0ac 6077
.org 0x8c0ae
	adds r0, r4, #0	@ 0008c0ae 201c
.org 0x8c0b0
	bl 0x8c0c4	@ 0008c0b0 00f008f8
.org 0x8c0b4
	pop {r4, r5, r6}	@ 0008c0b4 70bc
.org 0x8c0b6
	pop {r0}	@ 0008c0b6 01bc
.org 0x8c0b8
	bx r0	@ 0008c0b8 0047
