@ FUN_080d01d4  entry 0x080d01d4  size 126
.thumb
.org 0xd01d4
FUN_080d01d4:
	push {r4, r5, r6, lr}	@ 000d01d4 70b5
.org 0xd01d6
	adds r4, r0, #0	@ 000d01d6 041c
.org 0xd01d8
	movs r6, #0	@ 000d01d8 0026
.org 0xd01da
	ldr r1, [pc, #120]	@ 000d01da 1e49
.org 0xd01dc
	ldrb r0, [r4, #9]	@ 000d01dc 607a
.org 0xd01de
	lsls r0, r0, #2	@ 000d01de 8000
.org 0xd01e0
	adds r0, r0, r1	@ 000d01e0 4018
.org 0xd01e2
	movs r1, #1	@ 000d01e2 0121
.org 0xd01e4
	str r1, [r4, #12]	@ 000d01e4 e160
.org 0xd01e6
	ldr r0, [r0, #0]	@ 000d01e6 0068
.org 0xd01e8
	ldr r0, [r0, #4]	@ 000d01e8 4068
.org 0xd01ea
	str r0, [r4, #20]	@ 000d01ea 6061
.org 0xd01ec
	ldrb r1, [r4, #10]	@ 000d01ec a17a
.org 0xd01ee
	movs r0, #1	@ 000d01ee 0120
.org 0xd01f0
	orrs r0, r1	@ 000d01f0 0843
.org 0xd01f2
	movs r1, #2	@ 000d01f2 0221
.org 0xd01f4
	orrs r0, r1	@ 000d01f4 0843
.org 0xd01f6
	strb r0, [r4, #10]	@ 000d01f6 a072
.org 0xd01f8
	strb r6, [r4, #13]	@ 000d01f8 6673
.org 0xd01fa
	strb r6, [r4, #18]	@ 000d01fa a674
.org 0xd01fc
	adds r0, r4, #0	@ 000d01fc 201c
.org 0xd01fe
	bl 0x1cc9c	@ 000d01fe 4cf74dfd
.org 0xd0202
	ldrb r1, [r4, #10]	@ 000d0202 a17a
.org 0xd0204
	movs r0, #239	@ 000d0204 ef20
.org 0xd0206
	ands r0, r1	@ 000d0206 0840
.org 0xd0208
	strb r0, [r4, #10]	@ 000d0208 a072
.org 0xd020a
	adds r0, r4, #0	@ 000d020a 201c
.org 0xd020c
	adds r0, #76	@ 000d020c 4c30
.org 0xd020e
	strb r6, [r0, #0]	@ 000d020e 0670
.org 0xd0210
	adds r2, r4, #0	@ 000d0210 221c
.org 0xd0212
	adds r2, #74	@ 000d0212 4a32
.org 0xd0214
	ldrb r1, [r2, #0]	@ 000d0214 1178
.org 0xd0216
	movs r0, #17	@ 000d0216 1120
.org 0xd0218
	negs r0, r0	@ 000d0218 4042
.org 0xd021a
	ands r0, r1	@ 000d021a 0840
.org 0xd021c
	strb r0, [r2, #0]	@ 000d021c 1070
.org 0xd021e
	movs r1, #229	@ 000d021e e521
.org 0xd0220
	lsls r1, r1, #8	@ 000d0220 0902
.org 0xd0222
	adds r0, r4, #0	@ 000d0222 201c
.org 0xd0224
	bl 0x1cf00	@ 000d0224 4cf76cfe
.org 0xd0228
	ldrb r1, [r4, #10]	@ 000d0228 a17a
.org 0xd022a
	movs r0, #4	@ 000d022a 0420
.org 0xd022c
	orrs r0, r1	@ 000d022c 0843
.org 0xd022e
	strb r0, [r4, #10]	@ 000d022e a072
.org 0xd0230
	adds r5, r4, #0	@ 000d0230 251c
.org 0xd0232
	adds r5, #116	@ 000d0232 7435
.org 0xd0234
	ldr r1, [pc, #32]	@ 000d0234 0849
.org 0xd0236
	adds r2, r4, #0	@ 000d0236 221c
.org 0xd0238
	adds r2, #84	@ 000d0238 5432
.org 0xd023a
	adds r0, r5, #0	@ 000d023a 281c
.org 0xd023c
	movs r3, #64	@ 000d023c 4023
.org 0xd023e
	bl 0x5760	@ 000d023e 35f78ffa
.org 0xd0242
	str r4, [r5, #44]	@ 000d0242 ec62
.org 0xd0244
	str r6, [r5, #36]	@ 000d0244 6e62
.org 0xd0246
	adds r0, r4, #0	@ 000d0246 201c
.org 0xd0248
	bl 0xd025c	@ 000d0248 00f008f8
.org 0xd024c
	pop {r4, r5, r6}	@ 000d024c 70bc
.org 0xd024e
	pop {r0}	@ 000d024e 01bc
.org 0xd0250
	bx r0	@ 000d0250 0047
