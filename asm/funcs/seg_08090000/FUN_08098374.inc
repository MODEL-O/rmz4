@ FUN_08098374  entry 0x08098374  size 130
.thumb
.org 0x98374
FUN_08098374:
	push {r4, r5, r6, lr}	@ 00098374 70b5
.org 0x98376
	mov r6, r8	@ 00098376 4646
.org 0x98378
	push {r6}	@ 00098378 40b4
.org 0x9837a
	sub sp, #4	@ 0009837a 81b0
.org 0x9837c
	adds r4, r0, #0	@ 0009837c 041c
.org 0x9837e
	ldr r1, [pc, #120]	@ 0009837e 1e49
.org 0x98380
	mov r0, sp	@ 00098380 6846
.org 0x98382
	movs r2, #2	@ 00098382 0222
.org 0x98384
	bl 0x129258	@ 00098384 90f068ff
.org 0x98388
	ldrb r6, [r4, #17]	@ 00098388 667c
.org 0x9838a
	ldr r1, [pc, #112]	@ 0009838a 1c49
.org 0x9838c
	ldrb r0, [r4, #9]	@ 0009838c 607a
.org 0x9838e
	lsls r0, r0, #2	@ 0009838e 8000
.org 0x98390
	adds r0, r0, r1	@ 00098390 4018
.org 0x98392
	movs r1, #1	@ 00098392 0121
.org 0x98394
	str r1, [r4, #12]	@ 00098394 e160
.org 0x98396
	ldr r0, [r0, #0]	@ 00098396 0068
.org 0x98398
	ldr r0, [r0, #4]	@ 00098398 4068
.org 0x9839a
	str r0, [r4, #20]	@ 0009839a 6061
.org 0x9839c
	ldrb r1, [r4, #10]	@ 0009839c a17a
.org 0x9839e
	movs r0, #254	@ 0009839e fe20
.org 0x983a0
	ands r0, r1	@ 000983a0 0840
.org 0x983a2
	movs r1, #0	@ 000983a2 0021
.org 0x983a4
	mov r8, r1	@ 000983a4 8846
.org 0x983a6
	movs r1, #2	@ 000983a6 0221
.org 0x983a8
	orrs r0, r1	@ 000983a8 0843
.org 0x983aa
	strb r0, [r4, #10]	@ 000983aa a072
.org 0x983ac
	movs r0, #2	@ 000983ac 0220
.org 0x983ae
	strb r0, [r4, #18]	@ 000983ae a074
.org 0x983b0
	adds r0, r4, #0	@ 000983b0 201c
.org 0x983b2
	bl 0x1cc9c	@ 000983b2 84f773fc
.org 0x983b6
	ldrb r1, [r4, #10]	@ 000983b6 a17a
.org 0x983b8
	movs r0, #4	@ 000983b8 0420
.org 0x983ba
	orrs r0, r1	@ 000983ba 0843
.org 0x983bc
	strb r0, [r4, #10]	@ 000983bc a072
.org 0x983be
	adds r5, r4, #0	@ 000983be 251c
.org 0x983c0
	adds r5, #116	@ 000983c0 7435
.org 0x983c2
	mov r1, sp	@ 000983c2 6946
.org 0x983c4
	adds r0, r1, r6	@ 000983c4 8819
.org 0x983c6
	ldrb r0, [r0, #0]	@ 000983c6 0078
.org 0x983c8
	lsls r1, r0, #1	@ 000983c8 4100
.org 0x983ca
	adds r1, r1, r0	@ 000983ca 0918
.org 0x983cc
	lsls r1, r1, #3	@ 000983cc c900
.org 0x983ce
	ldr r0, [pc, #48]	@ 000983ce 0c48
.org 0x983d0
	adds r1, r1, r0	@ 000983d0 0918
.org 0x983d2
	adds r2, r4, #0	@ 000983d2 221c
.org 0x983d4
	adds r2, #84	@ 000983d4 5432
.org 0x983d6
	adds r0, r5, #0	@ 000983d6 281c
.org 0x983d8
	movs r3, #64	@ 000983d8 4023
.org 0x983da
	bl 0x5760	@ 000983da 6df7c1f9
.org 0x983de
	str r4, [r5, #44]	@ 000983de ec62
.org 0x983e0
	mov r0, r8	@ 000983e0 4046
.org 0x983e2
	str r0, [r5, #36]	@ 000983e2 6862
.org 0x983e4
	adds r0, r4, #0	@ 000983e4 201c
.org 0x983e6
	bl 0x98404	@ 000983e6 00f00df8
.org 0x983ea
	add sp, #4	@ 000983ea 01b0
.org 0x983ec
	pop {r3}	@ 000983ec 08bc
.org 0x983ee
	mov r8, r3	@ 000983ee 9846
.org 0x983f0
	pop {r4, r5, r6}	@ 000983f0 70bc
.org 0x983f2
	pop {r0}	@ 000983f2 01bc
.org 0x983f4
	bx r0	@ 000983f4 0047
