@ FUN_080acd18  entry 0x080acd18  size 128
.thumb
.org 0xacd18
FUN_080acd18:
	push {r4, r5, r6, lr}	@ 000acd18 70b5
.org 0xacd1a
	adds r6, r0, #0	@ 000acd1a 061c
.org 0xacd1c
	movs r5, #0	@ 000acd1c 0025
.org 0xacd1e
	ldr r1, [pc, #120]	@ 000acd1e 1e49
.org 0xacd20
	ldrb r0, [r6, #9]	@ 000acd20 707a
.org 0xacd22
	lsls r0, r0, #2	@ 000acd22 8000
.org 0xacd24
	adds r0, r0, r1	@ 000acd24 4018
.org 0xacd26
	movs r1, #1	@ 000acd26 0121
.org 0xacd28
	str r1, [r6, #12]	@ 000acd28 f160
.org 0xacd2a
	ldr r0, [r0, #0]	@ 000acd2a 0068
.org 0xacd2c
	ldr r0, [r0, #4]	@ 000acd2c 4068
.org 0xacd2e
	str r0, [r6, #20]	@ 000acd2e 7061
.org 0xacd30
	strb r5, [r6, #13]	@ 000acd30 7573
.org 0xacd32
	strb r5, [r6, #14]	@ 000acd32 b573
.org 0xacd34
	strb r5, [r6, #15]	@ 000acd34 f573
.org 0xacd36
	ldrb r0, [r6, #10]	@ 000acd36 b07a
.org 0xacd38
	orrs r0, r1	@ 000acd38 0843
.org 0xacd3a
	movs r1, #2	@ 000acd3a 0221
.org 0xacd3c
	orrs r0, r1	@ 000acd3c 0843
.org 0xacd3e
	strb r0, [r6, #10]	@ 000acd3e b072
.org 0xacd40
	adds r0, r6, #0	@ 000acd40 301c
.org 0xacd42
	adds r0, #184	@ 000acd42 b830
.org 0xacd44
	str r5, [r0, #0]	@ 000acd44 0560
.org 0xacd46
	adds r0, r6, #0	@ 000acd46 301c
.org 0xacd48
	bl 0x1cc9c	@ 000acd48 6ff7a8ff
.org 0xacd4c
	adds r1, r6, #0	@ 000acd4c 311c
.org 0xacd4e
	adds r1, #37	@ 000acd4e 2531
.org 0xacd50
	movs r0, #24	@ 000acd50 1820
.org 0xacd52
	strb r0, [r1, #0]	@ 000acd52 0870
.org 0xacd54
	ldrb r1, [r6, #10]	@ 000acd54 b17a
.org 0xacd56
	movs r0, #239	@ 000acd56 ef20
.org 0xacd58
	ands r0, r1	@ 000acd58 0840
.org 0xacd5a
	strb r0, [r6, #10]	@ 000acd5a b072
.org 0xacd5c
	adds r0, r6, #0	@ 000acd5c 301c
.org 0xacd5e
	adds r0, #76	@ 000acd5e 4c30
.org 0xacd60
	strb r5, [r0, #0]	@ 000acd60 0570
.org 0xacd62
	adds r2, r6, #0	@ 000acd62 321c
.org 0xacd64
	adds r2, #74	@ 000acd64 4a32
.org 0xacd66
	ldrb r1, [r2, #0]	@ 000acd66 1178
.org 0xacd68
	movs r0, #17	@ 000acd68 1120
.org 0xacd6a
	negs r0, r0	@ 000acd6a 4042
.org 0xacd6c
	ands r0, r1	@ 000acd6c 0840
.org 0xacd6e
	strb r0, [r2, #0]	@ 000acd6e 1070
.org 0xacd70
	ldrb r1, [r6, #10]	@ 000acd70 b17a
.org 0xacd72
	movs r0, #4	@ 000acd72 0420
.org 0xacd74
	orrs r0, r1	@ 000acd74 0843
.org 0xacd76
	strb r0, [r6, #10]	@ 000acd76 b072
.org 0xacd78
	adds r4, r6, #0	@ 000acd78 341c
.org 0xacd7a
	adds r4, #116	@ 000acd7a 7434
.org 0xacd7c
	ldr r1, [pc, #28]	@ 000acd7c 0749
.org 0xacd7e
	adds r2, #10	@ 000acd7e 0a32
.org 0xacd80
	adds r0, r4, #0	@ 000acd80 201c
.org 0xacd82
	movs r3, #28	@ 000acd82 1c23
.org 0xacd84
	bl 0x5760	@ 000acd84 58f7ecfc
.org 0xacd88
	str r6, [r4, #44]	@ 000acd88 e662
.org 0xacd8a
	str r5, [r4, #36]	@ 000acd8a 6562
.org 0xacd8c
	adds r0, r6, #0	@ 000acd8c 301c
.org 0xacd8e
	bl 0xacda0	@ 000acd8e 00f007f8
.org 0xacd92
	pop {r4, r5, r6}	@ 000acd92 70bc
.org 0xacd94
	pop {r0}	@ 000acd94 01bc
.org 0xacd96
	bx r0	@ 000acd96 0047
