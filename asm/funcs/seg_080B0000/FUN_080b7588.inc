@ FUN_080b7588  entry 0x080b7588  size 156
.thumb
.org 0xb7588
FUN_080b7588:
	push {r4, r5, r6, r7, lr}	@ 000b7588 f0b5
.org 0xb758a
	mov r7, r8	@ 000b758a 4746
.org 0xb758c
	push {r7}	@ 000b758c 80b4
.org 0xb758e
	adds r7, r0, #0	@ 000b758e 071c
.org 0xb7590
	bl 0x1cc9c	@ 000b7590 65f784fb
.org 0xb7594
	ldrb r0, [r7, #10]	@ 000b7594 b87a
.org 0xb7596
	movs r1, #1	@ 000b7596 0121
.org 0xb7598
	movs r2, #0	@ 000b7598 0022
.org 0xb759a
	movs r5, #0	@ 000b759a 0025
.org 0xb759c
	orrs r1, r0	@ 000b759c 0143
.org 0xb759e
	movs r0, #2	@ 000b759e 0220
.org 0xb75a0
	orrs r1, r0	@ 000b75a0 0143
.org 0xb75a2
	orrs r1, r2	@ 000b75a2 1143
.org 0xb75a4
	strb r1, [r7, #10]	@ 000b75a4 b972
.org 0xb75a6
	ldr r0, [pc, #124]	@ 000b75a6 1f48
.org 0xb75a8
	mov r8, r0	@ 000b75a8 8046
.org 0xb75aa
	ldrb r0, [r7, #9]	@ 000b75aa 787a
.org 0xb75ac
	lsls r0, r0, #2	@ 000b75ac 8000
.org 0xb75ae
	add r0, r8	@ 000b75ae 4044
.org 0xb75b0
	movs r6, #1	@ 000b75b0 0126
.org 0xb75b2
	str r6, [r7, #12]	@ 000b75b2 fe60
.org 0xb75b4
	ldr r0, [r0, #0]	@ 000b75b4 0068
.org 0xb75b6
	ldr r0, [r0, #4]	@ 000b75b6 4068
.org 0xb75b8
	str r0, [r7, #20]	@ 000b75b8 7861
.org 0xb75ba
	movs r0, #4	@ 000b75ba 0420
.org 0xb75bc
	orrs r1, r0	@ 000b75bc 0143
.org 0xb75be
	strb r1, [r7, #10]	@ 000b75be b972
.org 0xb75c0
	adds r4, r7, #0	@ 000b75c0 3c1c
.org 0xb75c2
	adds r4, #116	@ 000b75c2 7434
.org 0xb75c4
	ldr r1, [pc, #96]	@ 000b75c4 1849
.org 0xb75c6
	adds r2, r7, #0	@ 000b75c6 3a1c
.org 0xb75c8
	adds r2, #84	@ 000b75c8 5432
.org 0xb75ca
	adds r0, r4, #0	@ 000b75ca 201c
.org 0xb75cc
	movs r3, #32	@ 000b75cc 2023
.org 0xb75ce
	bl 0x5760	@ 000b75ce 4ef7c7f8
.org 0xb75d2
	str r7, [r4, #44]	@ 000b75d2 e762
.org 0xb75d4
	ldr r0, [pc, #84]	@ 000b75d4 1548
.org 0xb75d6
	str r0, [r4, #36]	@ 000b75d6 6062
.org 0xb75d8
	ldrb r0, [r7, #9]	@ 000b75d8 787a
.org 0xb75da
	lsls r0, r0, #2	@ 000b75da 8000
.org 0xb75dc
	add r0, r8	@ 000b75dc 4044
.org 0xb75de
	str r6, [r7, #12]	@ 000b75de fe60
.org 0xb75e0
	ldr r0, [r0, #0]	@ 000b75e0 0068
.org 0xb75e2
	ldr r0, [r0, #4]	@ 000b75e2 4068
.org 0xb75e4
	str r0, [r7, #20]	@ 000b75e4 7861
.org 0xb75e6
	adds r0, r7, #0	@ 000b75e6 381c
.org 0xb75e8
	adds r0, #192	@ 000b75e8 c030
.org 0xb75ea
	str r5, [r0, #0]	@ 000b75ea 0560
.org 0xb75ec
	strb r5, [r7, #19]	@ 000b75ec fd74
.org 0xb75ee
	strb r5, [r7, #18]	@ 000b75ee bd74
.org 0xb75f0
	subs r0, #12	@ 000b75f0 0c38
.org 0xb75f2
	strb r5, [r0, #0]	@ 000b75f2 0570
.org 0xb75f4
	adds r0, #2	@ 000b75f4 0230
.org 0xb75f6
	strb r5, [r0, #0]	@ 000b75f6 0570
.org 0xb75f8
	ldr r0, [pc, #52]	@ 000b75f8 0d48
.org 0xb75fa
	str r0, [r7, #96]	@ 000b75fa 3866
.org 0xb75fc
	strb r5, [r7, #13]	@ 000b75fc 7d73
.org 0xb75fe
	strb r5, [r7, #14]	@ 000b75fe bd73
.org 0xb7600
	ldr r0, [r7, #84]	@ 000b7600 786d
.org 0xb7602
	ldr r1, [r7, #88]	@ 000b7602 b96d
.org 0xb7604
	bl 0x8534	@ 000b7604 50f796ff
.org 0xb7608
	str r0, [r7, #88]	@ 000b7608 b865
.org 0xb760a
	adds r1, r7, #0	@ 000b760a 391c
.org 0xb760c
	adds r1, #184	@ 000b760c b831
.org 0xb760e
	ldr r2, [pc, #36]	@ 000b760e 094a
.org 0xb7610
	adds r0, r0, r2	@ 000b7610 8018
.org 0xb7612
	str r0, [r1, #0]	@ 000b7612 0860
.org 0xb7614
	adds r0, r7, #0	@ 000b7614 381c
.org 0xb7616
	bl 0xb7638	@ 000b7616 00f00ff8
.org 0xb761a
	pop {r3}	@ 000b761a 08bc
.org 0xb761c
	mov r8, r3	@ 000b761c 9846
.org 0xb761e
	pop {r4, r5, r6, r7}	@ 000b761e f0bc
.org 0xb7620
	pop {r0}	@ 000b7620 01bc
.org 0xb7622
	bx r0	@ 000b7622 0047
