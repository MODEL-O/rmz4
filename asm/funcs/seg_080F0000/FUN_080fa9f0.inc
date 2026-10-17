@ FUN_080fa9f0  entry 0x080fa9f0  size 168
.thumb
.org 0xfa9f0
FUN_080fa9f0:
	push {r4, r5, r6, lr}	@ 000fa9f0 70b5
.org 0xfa9f2
	mov r6, r8	@ 000fa9f2 4646
.org 0xfa9f4
	push {r6}	@ 000fa9f4 40b4
.org 0xfa9f6
	adds r4, r0, #0	@ 000fa9f6 041c
.org 0xfa9f8
	bl 0x1cc9c	@ 000fa9f8 22f750f9
.org 0xfa9fc
	ldrb r1, [r4, #10]	@ 000fa9fc a17a
.org 0xfa9fe
	movs r0, #1	@ 000fa9fe 0120
.org 0xfaa00
	orrs r0, r1	@ 000faa00 0843
.org 0xfaa02
	movs r1, #2	@ 000faa02 0221
.org 0xfaa04
	orrs r0, r1	@ 000faa04 0843
.org 0xfaa06
	strb r0, [r4, #10]	@ 000faa06 a072
.org 0xfaa08
	movs r1, #143	@ 000faa08 8f21
.org 0xfaa0a
	lsls r1, r1, #8	@ 000faa0a 0902
.org 0xfaa0c
	adds r0, r4, #0	@ 000faa0c 201c
.org 0xfaa0e
	bl 0x1cf00	@ 000faa0e 22f777fa
.org 0xfaa12
	adds r0, r4, #0	@ 000faa12 201c
.org 0xfaa14
	bl 0x1cff0	@ 000faa14 22f7ecfa
.org 0xfaa18
	movs r6, #0	@ 000faa18 0026
.org 0xfaa1a
	ldrb r1, [r4, #10]	@ 000faa1a a17a
.org 0xfaa1c
	movs r0, #239	@ 000faa1c ef20
.org 0xfaa1e
	ands r0, r1	@ 000faa1e 0840
.org 0xfaa20
	strb r0, [r4, #10]	@ 000faa20 a072
.org 0xfaa22
	movs r0, #1	@ 000faa22 0120
.org 0xfaa24
	mov r8, r0	@ 000faa24 8046
.org 0xfaa26
	adds r0, r4, #0	@ 000faa26 201c
.org 0xfaa28
	adds r0, #76	@ 000faa28 4c30
.org 0xfaa2a
	strb r6, [r0, #0]	@ 000faa2a 0670
.org 0xfaa2c
	adds r2, r4, #0	@ 000faa2c 221c
.org 0xfaa2e
	adds r2, #74	@ 000faa2e 4a32
.org 0xfaa30
	ldrb r1, [r2, #0]	@ 000faa30 1178
.org 0xfaa32
	movs r0, #17	@ 000faa32 1120
.org 0xfaa34
	negs r0, r0	@ 000faa34 4042
.org 0xfaa36
	ands r0, r1	@ 000faa36 0840
.org 0xfaa38
	strb r0, [r2, #0]	@ 000faa38 1070
.org 0xfaa3a
	adds r1, r4, #0	@ 000faa3a 211c
.org 0xfaa3c
	adds r1, #37	@ 000faa3c 2531
.org 0xfaa3e
	movs r0, #18	@ 000faa3e 1220
.org 0xfaa40
	strb r0, [r1, #0]	@ 000faa40 0870
.org 0xfaa42
	ldrb r0, [r4, #10]	@ 000faa42 a07a
.org 0xfaa44
	movs r1, #4	@ 000faa44 0421
.org 0xfaa46
	orrs r0, r1	@ 000faa46 0843
.org 0xfaa48
	strb r0, [r4, #10]	@ 000faa48 a072
.org 0xfaa4a
	adds r5, r4, #0	@ 000faa4a 251c
.org 0xfaa4c
	adds r5, #116	@ 000faa4c 7435
.org 0xfaa4e
	ldr r1, [pc, #72]	@ 000faa4e 1249
.org 0xfaa50
	adds r2, #10	@ 000faa50 0a32
.org 0xfaa52
	adds r0, r5, #0	@ 000faa52 281c
.org 0xfaa54
	movs r3, #8	@ 000faa54 0823
.org 0xfaa56
	bl 0x5760	@ 000faa56 0af783fe
.org 0xfaa5a
	str r4, [r5, #44]	@ 000faa5a ec62
.org 0xfaa5c
	ldr r0, [pc, #60]	@ 000faa5c 0f48
.org 0xfaa5e
	str r0, [r5, #36]	@ 000faa5e 6862
.org 0xfaa60
	ldrb r1, [r4, #11]	@ 000faa60 e17a
.org 0xfaa62
	movs r0, #8	@ 000faa62 0820
.org 0xfaa64
	orrs r0, r1	@ 000faa64 0843
.org 0xfaa66
	strb r0, [r4, #11]	@ 000faa66 e072
.org 0xfaa68
	ldr r0, [pc, #52]	@ 000faa68 0d48
.org 0xfaa6a
	str r0, [r4, #48]	@ 000faa6a 2063
.org 0xfaa6c
	ldr r0, [pc, #52]	@ 000faa6c 0d48
.org 0xfaa6e
	strh r0, [r4, #38]	@ 000faa6e e084
.org 0xfaa70
	str r6, [r4, #96]	@ 000faa70 2666
.org 0xfaa72
	movs r0, #64	@ 000faa72 4020
.org 0xfaa74
	strb r0, [r4, #18]	@ 000faa74 a074
.org 0xfaa76
	ldr r1, [pc, #48]	@ 000faa76 0c49
.org 0xfaa78
	ldrb r0, [r4, #9]	@ 000faa78 607a
.org 0xfaa7a
	lsls r0, r0, #2	@ 000faa7a 8000
.org 0xfaa7c
	adds r0, r0, r1	@ 000faa7c 4018
.org 0xfaa7e
	mov r1, r8	@ 000faa7e 4146
.org 0xfaa80
	str r1, [r4, #12]	@ 000faa80 e160
.org 0xfaa82
	ldr r0, [r0, #0]	@ 000faa82 0068
.org 0xfaa84
	ldr r0, [r0, #4]	@ 000faa84 4068
.org 0xfaa86
	str r0, [r4, #20]	@ 000faa86 6061
.org 0xfaa88
	adds r0, r4, #0	@ 000faa88 201c
.org 0xfaa8a
	bl 0xfaaac	@ 000faa8a 00f00ff8
.org 0xfaa8e
	pop {r3}	@ 000faa8e 08bc
.org 0xfaa90
	mov r8, r3	@ 000faa90 9846
.org 0xfaa92
	pop {r4, r5, r6}	@ 000faa92 70bc
.org 0xfaa94
	pop {r0}	@ 000faa94 01bc
.org 0xfaa96
	bx r0	@ 000faa96 0047
