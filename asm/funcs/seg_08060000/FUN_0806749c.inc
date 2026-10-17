@ FUN_0806749c  entry 0x0806749c  size 178
.thumb
.org 0x6749c
FUN_0806749c:
	push {r4, r5, lr}	@ 0006749c 30b5
.org 0x6749e
	adds r4, r0, #0	@ 0006749e 041c
.org 0x674a0
	ldrb r5, [r4, #14]	@ 000674a0 a57b
.org 0x674a2
	cmp r5, #0	@ 000674a2 002d
.org 0x674a4
	bne.n 0x674ba	@ 000674a4 09d1
.org 0x674a6
	ldr r1, [pc, #64]	@ 000674a6 1049
.org 0x674a8
	bl 0x1cf00	@ 000674a8 b5f72afd
.org 0x674ac
	movs r0, #98	@ 000674ac 6220
.org 0x674ae
	bl 0x2b10	@ 000674ae 9bf72ffb
.org 0x674b2
	strb r5, [r4, #15]	@ 000674b2 e573
.org 0x674b4
	ldrb r0, [r4, #14]	@ 000674b4 a07b
.org 0x674b6
	adds r0, #1	@ 000674b6 0130
.org 0x674b8
	strb r0, [r4, #14]	@ 000674b8 a073
.org 0x674ba
	adds r0, r4, #0	@ 000674ba 201c
.org 0x674bc
	bl 0x1cff0	@ 000674bc b5f798fd
.org 0x674c0
	ldrb r0, [r4, #15]	@ 000674c0 e07b
.org 0x674c2
	cmp r0, #0	@ 000674c2 0028
.org 0x674c4
	bne.n 0x67528	@ 000674c4 30d1
.org 0x674c6
	adds r0, r4, #0	@ 000674c6 201c
.org 0x674c8
	adds r0, #113	@ 000674c8 7130
.org 0x674ca
	ldrb r0, [r0, #0]	@ 000674ca 0078
.org 0x674cc
	lsls r0, r0, #24	@ 000674cc 0006
.org 0x674ce
	asrs r0, r0, #24	@ 000674ce 0016
.org 0x674d0
	cmp r0, #5	@ 000674d0 0528
.org 0x674d2
	ble.n 0x67558	@ 000674d2 41dd
.org 0x674d4
	ldrb r1, [r4, #10]	@ 000674d4 a17a
.org 0x674d6
	movs r0, #16	@ 000674d6 1020
.org 0x674d8
	ands r0, r1	@ 000674d8 0840
.org 0x674da
	cmp r0, #0	@ 000674da 0028
.org 0x674dc
	beq.n 0x674ec	@ 000674dc 06d0
.org 0x674de
	ldr r0, [r4, #44]	@ 000674de e06a
.org 0x674e0
	ldr r1, [r4, #84]	@ 000674e0 616d
.org 0x674e2
	movs r2, #166	@ 000674e2 a622
.org 0x674e4
	lsls r2, r2, #7	@ 000674e4 d201
.org 0x674e6
	b.n 0x674f2	@ 000674e6 04e0
.org 0x674e8
	.byte 0x06,0xa9,0x00,0x00	@ 000674e8 data
.org 0x674ec
	ldr r0, [r4, #44]	@ 000674ec e06a
.org 0x674ee
	ldr r1, [r4, #84]	@ 000674ee 616d
.org 0x674f0
	ldr r2, [pc, #40]	@ 000674f0 0a4a
.org 0x674f2
	adds r1, r1, r2	@ 000674f2 8918
.org 0x674f4
	ldr r0, [r0, #84]	@ 000674f4 406d
.org 0x674f6
	subs r0, r0, r1	@ 000674f6 401a
.org 0x674f8
	str r0, [r4, #92]	@ 000674f8 e065
.org 0x674fa
	ldr r0, [r4, #92]	@ 000674fa e06d
.org 0x674fc
	asrs r0, r0, #1	@ 000674fc 4010
.org 0x674fe
	movs r1, #60	@ 000674fe 3c21
.org 0x67500
	bl 0x128fb8	@ 00067500 c1f05afd
.org 0x67504
	str r0, [r4, #92]	@ 00067504 e065
.org 0x67506
	ldr r0, [pc, #24]	@ 00067506 0648
.org 0x67508
	str r0, [r4, #96]	@ 00067508 2066
.org 0x6750a
	adds r0, r4, #0	@ 0006750a 201c
.org 0x6750c
	adds r0, #116	@ 0006750c 7430
.org 0x6750e
	ldr r1, [pc, #20]	@ 0006750e 0549
.org 0x67510
	bl 0x5784	@ 00067510 9ef738f9
.org 0x67514
	ldrb r0, [r4, #15]	@ 00067514 e07b
.org 0x67516
	adds r0, #1	@ 00067516 0130
.org 0x67518
	strb r0, [r4, #15]	@ 00067518 e073
.org 0x6751a
	b.n 0x67558	@ 0006751a 1de0
.org 0x6751c
	.byte 0x00,0xad,0xff,0xff	@ 0006751c data
.org 0x67520
	.byte 0x00,0xf1,0xff,0xff	@ 00067520 data
.org 0x67524
	.byte 0x64,0xb3,0x85,0x08	@ 00067524 data
.org 0x67528
	ldr r0, [r4, #84]	@ 00067528 606d
.org 0x6752a
	ldr r1, [r4, #92]	@ 0006752a e16d
.org 0x6752c
	adds r0, r0, r1	@ 0006752c 4018
.org 0x6752e
	str r0, [r4, #84]	@ 0006752e 6065
.org 0x67530
	ldr r1, [r4, #88]	@ 00067530 a16d
.org 0x67532
	ldr r0, [r4, #96]	@ 00067532 206e
.org 0x67534
	adds r1, r1, r0	@ 00067534 0918
.org 0x67536
	str r1, [r4, #88]	@ 00067536 a165
.org 0x67538
	adds r0, #64	@ 00067538 4030
.org 0x6753a
	str r0, [r4, #96]	@ 0006753a 2066
.org 0x6753c
	adds r5, r4, #0	@ 0006753c 251c
.org 0x6753e
	adds r5, #180	@ 0006753e b435
.org 0x67540
	ldr r0, [r5, #4]	@ 00067540 6868
.org 0x67542
	cmp r1, r0	@ 00067542 8142
.org 0x67544
	ble.n 0x67558	@ 00067544 08dd
.org 0x67546
	movs r0, #95	@ 00067546 5f20
.org 0x67548
	bl 0x2b10	@ 00067548 9bf7e2fa
.org 0x6754c
	ldr r0, [r5, #4]	@ 0006754c 6868
