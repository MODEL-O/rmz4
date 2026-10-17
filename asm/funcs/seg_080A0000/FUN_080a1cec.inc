@ FUN_080a1cec  entry 0x080a1cec  size 158
.thumb
.org 0xa1cec
FUN_080a1cec:
	push {r4, r5, r6, r7, lr}	@ 000a1cec f0b5
.org 0xa1cee
	adds r7, r0, #0	@ 000a1cee 071c
.org 0xa1cf0
	bl 0x1cc9c	@ 000a1cf0 7af7d4ff
.org 0xa1cf4
	ldrb r1, [r7, #10]	@ 000a1cf4 b97a
.org 0xa1cf6
	movs r0, #1	@ 000a1cf6 0120
.org 0xa1cf8
	orrs r0, r1	@ 000a1cf8 0843
.org 0xa1cfa
	movs r1, #2	@ 000a1cfa 0221
.org 0xa1cfc
	orrs r0, r1	@ 000a1cfc 0843
.org 0xa1cfe
	movs r5, #0	@ 000a1cfe 0025
.org 0xa1d00
	movs r1, #239	@ 000a1d00 ef21
.org 0xa1d02
	ands r0, r1	@ 000a1d02 0840
.org 0xa1d04
	strb r0, [r7, #10]	@ 000a1d04 b872
.org 0xa1d06
	movs r6, #1	@ 000a1d06 0126
.org 0xa1d08
	adds r0, r7, #0	@ 000a1d08 381c
.org 0xa1d0a
	adds r0, #76	@ 000a1d0a 4c30
.org 0xa1d0c
	strb r5, [r0, #0]	@ 000a1d0c 0570
.org 0xa1d0e
	adds r2, r7, #0	@ 000a1d0e 3a1c
.org 0xa1d10
	adds r2, #74	@ 000a1d10 4a32
.org 0xa1d12
	ldrb r1, [r2, #0]	@ 000a1d12 1178
.org 0xa1d14
	movs r0, #17	@ 000a1d14 1120
.org 0xa1d16
	negs r0, r0	@ 000a1d16 4042
.org 0xa1d18
	ands r0, r1	@ 000a1d18 0840
.org 0xa1d1a
	strb r0, [r2, #0]	@ 000a1d1a 1070
.org 0xa1d1c
	ldrb r1, [r7, #10]	@ 000a1d1c b97a
.org 0xa1d1e
	movs r0, #4	@ 000a1d1e 0420
.org 0xa1d20
	orrs r0, r1	@ 000a1d20 0843
.org 0xa1d22
	strb r0, [r7, #10]	@ 000a1d22 b872
.org 0xa1d24
	adds r4, r7, #0	@ 000a1d24 3c1c
.org 0xa1d26
	adds r4, #116	@ 000a1d26 7434
.org 0xa1d28
	ldr r1, [pc, #96]	@ 000a1d28 1849
.org 0xa1d2a
	adds r2, #10	@ 000a1d2a 0a32
.org 0xa1d2c
	adds r0, r4, #0	@ 000a1d2c 201c
.org 0xa1d2e
	movs r3, #32	@ 000a1d2e 2023
.org 0xa1d30
	bl 0x5760	@ 000a1d30 63f716fd
.org 0xa1d34
	str r7, [r4, #44]	@ 000a1d34 e762
.org 0xa1d36
	ldr r0, [pc, #88]	@ 000a1d36 1648
.org 0xa1d38
	str r0, [r4, #36]	@ 000a1d38 6062
.org 0xa1d3a
	ldr r1, [pc, #88]	@ 000a1d3a 1649
.org 0xa1d3c
	ldrb r0, [r7, #9]	@ 000a1d3c 787a
.org 0xa1d3e
	lsls r0, r0, #2	@ 000a1d3e 8000
.org 0xa1d40
	adds r0, r0, r1	@ 000a1d40 4018
.org 0xa1d42
	str r6, [r7, #12]	@ 000a1d42 fe60
.org 0xa1d44
	ldr r0, [r0, #0]	@ 000a1d44 0068
.org 0xa1d46
	ldr r0, [r0, #4]	@ 000a1d46 4068
.org 0xa1d48
	str r0, [r7, #20]	@ 000a1d48 7861
.org 0xa1d4a
	adds r0, r7, #0	@ 000a1d4a 381c
.org 0xa1d4c
	adds r0, #192	@ 000a1d4c c030
.org 0xa1d4e
	str r5, [r0, #0]	@ 000a1d4e 0560
.org 0xa1d50
	strb r5, [r7, #19]	@ 000a1d50 fd74
.org 0xa1d52
	strb r5, [r7, #18]	@ 000a1d52 bd74
.org 0xa1d54
	subs r0, #12	@ 000a1d54 0c38
.org 0xa1d56
	strb r5, [r0, #0]	@ 000a1d56 0570
.org 0xa1d58
	adds r0, #2	@ 000a1d58 0230
.org 0xa1d5a
	strb r5, [r0, #0]	@ 000a1d5a 0570
.org 0xa1d5c
	ldr r0, [pc, #56]	@ 000a1d5c 0e48
.org 0xa1d5e
	str r0, [r7, #96]	@ 000a1d5e 3866
.org 0xa1d60
	adds r0, r7, #0	@ 000a1d60 381c
.org 0xa1d62
	adds r0, #181	@ 000a1d62 b530
.org 0xa1d64
	strb r5, [r0, #0]	@ 000a1d64 0570
.org 0xa1d66
	strb r5, [r7, #13]	@ 000a1d66 7d73
.org 0xa1d68
	strb r5, [r7, #14]	@ 000a1d68 bd73
.org 0xa1d6a
	ldr r0, [r7, #84]	@ 000a1d6a 786d
.org 0xa1d6c
	ldr r1, [r7, #88]	@ 000a1d6c b96d
.org 0xa1d6e
	bl 0x8534	@ 000a1d6e 66f7e1fb
.org 0xa1d72
	str r0, [r7, #88]	@ 000a1d72 b865
.org 0xa1d74
	adds r1, r7, #0	@ 000a1d74 391c
.org 0xa1d76
	adds r1, #184	@ 000a1d76 b831
.org 0xa1d78
	ldr r2, [pc, #32]	@ 000a1d78 084a
.org 0xa1d7a
	adds r0, r0, r2	@ 000a1d7a 8018
.org 0xa1d7c
	str r0, [r1, #0]	@ 000a1d7c 0860
.org 0xa1d7e
	adds r0, r7, #0	@ 000a1d7e 381c
.org 0xa1d80
	bl 0xa1da0	@ 000a1d80 00f00ef8
.org 0xa1d84
	pop {r4, r5, r6, r7}	@ 000a1d84 f0bc
.org 0xa1d86
	pop {r0}	@ 000a1d86 01bc
.org 0xa1d88
	bx r0	@ 000a1d88 0047
