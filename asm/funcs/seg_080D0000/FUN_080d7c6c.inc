@ FUN_080d7c6c  entry 0x080d7c6c  size 348
.thumb
.org 0xd7c6c
FUN_080d7c6c:
	push {r4, r5, r6, r7, lr}	@ 000d7c6c f0b5
.org 0xd7c6e
	adds r6, r0, #0	@ 000d7c6e 061c
.org 0xd7c70
	ldr r0, [r6, #40]	@ 000d7c70 b06a
.org 0xd7c72
	ldrb r0, [r0, #10]	@ 000d7c72 807a
.org 0xd7c74
	lsls r0, r0, #24	@ 000d7c74 0006
.org 0xd7c76
	lsrs r5, r0, #28	@ 000d7c76 050f
.org 0xd7c78
	movs r1, #1	@ 000d7c78 0121
.org 0xd7c7a
	ands r5, r1	@ 000d7c7a 0d40
.org 0xd7c7c
	lsrs r4, r0, #29	@ 000d7c7c 440f
.org 0xd7c7e
	ands r4, r1	@ 000d7c7e 0c40
.org 0xd7c80
	ldrb r7, [r6, #17]	@ 000d7c80 777c
.org 0xd7c82
	ldrb r0, [r6, #14]	@ 000d7c82 b07b
.org 0xd7c84
	cmp r0, #0	@ 000d7c84 0028
.org 0xd7c86
	beq.n 0xd7c8e	@ 000d7c86 02d0
.org 0xd7c88
	cmp r0, #1	@ 000d7c88 0128
.org 0xd7c8a
	beq.n 0xd7d4c	@ 000d7c8a 5fd0
.org 0xd7c8c
	b.n 0xd7dd6	@ 000d7c8c a3e0
.org 0xd7c8e
	ldrb r1, [r6, #10]	@ 000d7c8e b17a
.org 0xd7c90
	movs r0, #1	@ 000d7c90 0120
.org 0xd7c92
	movs r3, #0	@ 000d7c92 0023
.org 0xd7c94
	adds r2, r0, #0	@ 000d7c94 021c
.org 0xd7c96
	orrs r2, r1	@ 000d7c96 0a43
.org 0xd7c98
	strb r2, [r6, #10]	@ 000d7c98 b272
.org 0xd7c9a
	adds r1, r5, #0	@ 000d7c9a 291c
.org 0xd7c9c
	cmp r5, #0	@ 000d7c9c 002d
.org 0xd7c9e
	beq.n 0xd7ca6	@ 000d7c9e 02d0
.org 0xd7ca0
	movs r0, #16	@ 000d7ca0 1020
.org 0xd7ca2
	orrs r2, r0	@ 000d7ca2 0243
.org 0xd7ca4
	b.n 0xd7caa	@ 000d7ca4 01e0
.org 0xd7ca6
	movs r0, #239	@ 000d7ca6 ef20
.org 0xd7ca8
	ands r2, r0	@ 000d7ca8 0240
.org 0xd7caa
	strb r2, [r6, #10]	@ 000d7caa b272
.org 0xd7cac
	adds r0, r6, #0	@ 000d7cac 301c
.org 0xd7cae
	adds r0, #76	@ 000d7cae 4c30
.org 0xd7cb0
	strb r1, [r0, #0]	@ 000d7cb0 0170
.org 0xd7cb2
	adds r2, r6, #0	@ 000d7cb2 321c
.org 0xd7cb4
	adds r2, #74	@ 000d7cb4 4a32
.org 0xd7cb6
	lsls r1, r1, #4	@ 000d7cb6 0901
.org 0xd7cb8
	ldrb r3, [r2, #0]	@ 000d7cb8 1378
.org 0xd7cba
	movs r0, #17	@ 000d7cba 1120
.org 0xd7cbc
	negs r0, r0	@ 000d7cbc 4042
.org 0xd7cbe
	ands r0, r3	@ 000d7cbe 1840
.org 0xd7cc0
	orrs r0, r1	@ 000d7cc0 0843
.org 0xd7cc2
	strb r0, [r2, #0]	@ 000d7cc2 1070
.org 0xd7cc4
	adds r3, r4, #0	@ 000d7cc4 231c
.org 0xd7cc6
	adds r4, r2, #0	@ 000d7cc6 141c
.org 0xd7cc8
	cmp r3, #0	@ 000d7cc8 002b
.org 0xd7cca
	beq.n 0xd7cd4	@ 000d7cca 03d0
.org 0xd7ccc
	ldrb r0, [r6, #10]	@ 000d7ccc b07a
.org 0xd7cce
	movs r1, #32	@ 000d7cce 2021
.org 0xd7cd0
	orrs r0, r1	@ 000d7cd0 0843
.org 0xd7cd2
	b.n 0xd7cda	@ 000d7cd2 02e0
.org 0xd7cd4
	ldrb r1, [r6, #10]	@ 000d7cd4 b17a
.org 0xd7cd6
	movs r0, #223	@ 000d7cd6 df20
.org 0xd7cd8
	ands r0, r1	@ 000d7cd8 0840
.org 0xd7cda
	strb r0, [r6, #10]	@ 000d7cda b072
.org 0xd7cdc
	adds r1, r3, #0	@ 000d7cdc 191c
.org 0xd7cde
	adds r2, r6, #0	@ 000d7cde 321c
.org 0xd7ce0
	adds r2, #77	@ 000d7ce0 4d32
.org 0xd7ce2
	strb r1, [r2, #0]	@ 000d7ce2 1170
.org 0xd7ce4
	lsls r1, r1, #5	@ 000d7ce4 4901
.org 0xd7ce6
	ldrb r2, [r4, #0]	@ 000d7ce6 2278
.org 0xd7ce8
	movs r0, #33	@ 000d7ce8 2120
.org 0xd7cea
	negs r0, r0	@ 000d7cea 4042
.org 0xd7cec
	ands r0, r2	@ 000d7cec 1040
.org 0xd7cee
	orrs r0, r1	@ 000d7cee 0843
.org 0xd7cf0
	strb r0, [r4, #0]	@ 000d7cf0 2070
.org 0xd7cf2
	ldr r1, [r6, #116]	@ 000d7cf2 716f
.org 0xd7cf4
	lsls r0, r7, #1	@ 000d7cf4 7800
.org 0xd7cf6
	adds r0, r0, r1	@ 000d7cf6 4018
.org 0xd7cf8
	ldrh r1, [r0, #0]	@ 000d7cf8 0188
.org 0xd7cfa
	adds r0, r6, #0	@ 000d7cfa 301c
.org 0xd7cfc
	bl 0x1cf00	@ 000d7cfc 45f700f9
.org 0xd7d00
	cmp r5, #0	@ 000d7d00 002d
.org 0xd7d02
	beq.n 0xd7d08	@ 000d7d02 01d0
.org 0xd7d04
	movs r0, #2	@ 000d7d04 0220
.org 0xd7d06
	subs r7, r0, r7	@ 000d7d06 c71b
.org 0xd7d08
	subs r1, r7, #1	@ 000d7d08 791e
.org 0xd7d0a
	lsls r1, r1, #8	@ 000d7d0a 0902
.org 0xd7d0c
	ldr r5, [pc, #80]	@ 000d7d0c 144d
.org 0xd7d0e
	ldr r0, [r5, #0]	@ 000d7d0e 2868
.org 0xd7d10
	ldr r4, [pc, #80]	@ 000d7d10 144c
.org 0xd7d12
	muls r0, r4	@ 000d7d12 6043
.org 0xd7d14
	ldr r3, [pc, #80]	@ 000d7d14 144b
.org 0xd7d16
	adds r0, r0, r3	@ 000d7d16 c018
.org 0xd7d18
	lsls r0, r0, #1	@ 000d7d18 4000
.org 0xd7d1a
	lsrs r2, r0, #1	@ 000d7d1a 4208
.org 0xd7d1c
	lsls r0, r0, #6	@ 000d7d1c 8001
.org 0xd7d1e
	lsrs r0, r0, #23	@ 000d7d1e c00d
.org 0xd7d20
	adds r1, r1, r0	@ 000d7d20 0918
.org 0xd7d22
	ldr r0, [pc, #72]	@ 000d7d22 1248
.org 0xd7d24
	adds r1, r1, r0	@ 000d7d24 0918
.org 0xd7d26
	str r1, [r6, #92]	@ 000d7d26 f165
.org 0xd7d28
	adds r1, r2, #0	@ 000d7d28 111c
.org 0xd7d2a
	muls r1, r4	@ 000d7d2a 6143
.org 0xd7d2c
	adds r1, r1, r3	@ 000d7d2c c918
.org 0xd7d2e
	lsls r1, r1, #1	@ 000d7d2e 4900
.org 0xd7d30
	lsrs r0, r1, #1	@ 000d7d30 4808
.org 0xd7d32
	str r0, [r5, #0]	@ 000d7d32 2860
.org 0xd7d34
	lsrs r1, r1, #17	@ 000d7d34 490c
.org 0xd7d36
	movs r0, #128	@ 000d7d36 8020
.org 0xd7d38
	lsls r0, r0, #1	@ 000d7d38 4000
.org 0xd7d3a
	ands r1, r0	@ 000d7d3a 0140
.org 0xd7d3c
	ldr r0, [pc, #48]	@ 000d7d3c 0c48
.org 0xd7d3e
	subs r0, r0, r1	@ 000d7d3e 401a
.org 0xd7d40
	str r0, [r6, #96]	@ 000d7d40 3066
.org 0xd7d42
	movs r0, #0	@ 000d7d42 0020
.org 0xd7d44
	strb r0, [r6, #18]	@ 000d7d44 b074
.org 0xd7d46
	ldrb r0, [r6, #14]	@ 000d7d46 b07b
.org 0xd7d48
	adds r0, #1	@ 000d7d48 0130
.org 0xd7d4a
	strb r0, [r6, #14]	@ 000d7d4a b073
.org 0xd7d4c
	ldrb r0, [r6, #18]	@ 000d7d4c b07c
.org 0xd7d4e
	adds r0, #1	@ 000d7d4e 0130
.org 0xd7d50
	strb r0, [r6, #18]	@ 000d7d50 b074
.org 0xd7d52
	movs r1, #1	@ 000d7d52 0121
.org 0xd7d54
	ands r0, r1	@ 000d7d54 0840
.org 0xd7d56
	cmp r0, #0	@ 000d7d56 0028
.org 0xd7d58
	beq.n 0xd7d74	@ 000d7d58 0cd0
.org 0xd7d5a
	ldrb r0, [r6, #10]	@ 000d7d5a b07a
.org 0xd7d5c
	orrs r0, r1	@ 000d7d5c 0843
.org 0xd7d5e
	b.n 0xd7d7a	@ 000d7d5e 0ce0
.org 0xd7d60
	.byte 0x38,0xdc,0x02,0x02	@ 000d7d60 data
.org 0xd7d64
	.byte 0xfd,0x43,0x03,0x00	@ 000d7d64 data
.org 0xd7d68
	.byte 0xc3,0x9e,0x26,0x00	@ 000d7d68 data
.org 0xd7d6c
	.byte 0x00,0xff,0xff,0xff	@ 000d7d6c data
.org 0xd7d70
	.byte 0x00,0xfe,0xff,0xff	@ 000d7d70 data
.org 0xd7d74
	ldrb r1, [r6, #10]	@ 000d7d74 b17a
.org 0xd7d76
	movs r0, #254	@ 000d7d76 fe20
.org 0xd7d78
	ands r0, r1	@ 000d7d78 0840
.org 0xd7d7a
	strb r0, [r6, #10]	@ 000d7d7a b072
.org 0xd7d7c
	ldr r0, [r6, #84]	@ 000d7d7c 706d
.org 0xd7d7e
	ldr r1, [r6, #92]	@ 000d7d7e f16d
.org 0xd7d80
	adds r0, r0, r1	@ 000d7d80 4018
.org 0xd7d82
	str r0, [r6, #84]	@ 000d7d82 7065
.org 0xd7d84
	ldr r0, [r6, #88]	@ 000d7d84 b06d
.org 0xd7d86
	ldr r1, [r6, #96]	@ 000d7d86 316e
.org 0xd7d88
	adds r0, r0, r1	@ 000d7d88 4018
.org 0xd7d8a
	str r0, [r6, #88]	@ 000d7d8a b065
.org 0xd7d8c
	adds r1, #32	@ 000d7d8c 2031
.org 0xd7d8e
	str r1, [r6, #96]	@ 000d7d8e 3166
.org 0xd7d90
	adds r0, r6, #0	@ 000d7d90 301c
.org 0xd7d92
	bl 0x1d134	@ 000d7d92 45f7cff9
.org 0xd7d96
	ldr r0, [r6, #84]	@ 000d7d96 706d
.org 0xd7d98
	ldr r1, [r6, #88]	@ 000d7d98 b16d
.org 0xd7d9a
	bl 0x7c7c	@ 000d7d9a 2ff76fff
.org 0xd7d9e
	lsls r0, r0, #16	@ 000d7d9e 0004
.org 0xd7da0
	cmp r0, #0	@ 000d7da0 0028
.org 0xd7da2
	beq.n 0xd7dd6	@ 000d7da2 18d0
.org 0xd7da4
	adds r0, r6, #0	@ 000d7da4 301c
.org 0xd7da6
	adds r0, #121	@ 000d7da6 7930
.org 0xd7da8
	ldrb r0, [r0, #0]	@ 000d7da8 0078
.org 0xd7daa
	cmp r0, #0	@ 000d7daa 0028
.org 0xd7dac
	bne.n 0xd7dba	@ 000d7dac 05d1
.org 0xd7dae
	adds r1, r6, #0	@ 000d7dae 311c
.org 0xd7db0
	adds r1, #84	@ 000d7db0 5431
.org 0xd7db2
	movs r0, #3	@ 000d7db2 0320
.org 0xd7db4
	bl 0xd0c88	@ 000d7db4 f8f768ff
.org 0xd7db8
	b.n 0xd7dc4	@ 000d7db8 04e0
.org 0xd7dba
	adds r1, r6, #0	@ 000d7dba 311c
.org 0xd7dbc
	adds r1, #84	@ 000d7dbc 5431
.org 0xd7dbe
	movs r0, #2	@ 000d7dbe 0220
.org 0xd7dc0
	bl 0xd0c88	@ 000d7dc0 f8f762ff
.org 0xd7dc4
	ldr r1, [pc, #20]	@ 000d7dc4 0549
.org 0xd7dc6
	ldrb r0, [r6, #9]	@ 000d7dc6 707a
