@ FUN_080c1bf0  entry 0x080c1bf0  size 372
.thumb
.org 0xc1bf0
FUN_080c1bf0:
	push {r4, r5, r6, r7, lr}	@ 000c1bf0 f0b5
.org 0xc1bf2
	adds r6, r0, #0	@ 000c1bf2 061c
.org 0xc1bf4
	ldr r7, [r6, #40]	@ 000c1bf4 b76a
.org 0xc1bf6
	bl 0x1cc9c	@ 000c1bf6 5bf751f8
.org 0xc1bfa
	ldrb r1, [r6, #10]	@ 000c1bfa b17a
.org 0xc1bfc
	movs r0, #1	@ 000c1bfc 0120
.org 0xc1bfe
	movs r4, #0	@ 000c1bfe 0024
.org 0xc1c00
	orrs r0, r1	@ 000c1c00 0843
.org 0xc1c02
	movs r1, #2	@ 000c1c02 0221
.org 0xc1c04
	orrs r0, r1	@ 000c1c04 0843
.org 0xc1c06
	strb r0, [r6, #10]	@ 000c1c06 b072
.org 0xc1c08
	movs r1, #248	@ 000c1c08 f821
.org 0xc1c0a
	lsls r1, r1, #6	@ 000c1c0a 8901
.org 0xc1c0c
	adds r0, r6, #0	@ 000c1c0c 301c
.org 0xc1c0e
	bl 0x1cf00	@ 000c1c0e 5bf777f9
.org 0xc1c12
	adds r0, r6, #0	@ 000c1c12 301c
.org 0xc1c14
	bl 0x1cff0	@ 000c1c14 5bf7ecf9
.org 0xc1c18
	ldrb r0, [r7, #10]	@ 000c1c18 b87a
.org 0xc1c1a
	lsrs r2, r0, #4	@ 000c1c1a 0209
.org 0xc1c1c
	movs r0, #1	@ 000c1c1c 0120
.org 0xc1c1e
	ands r2, r0	@ 000c1c1e 0240
.org 0xc1c20
	cmp r2, #0	@ 000c1c20 002a
.org 0xc1c22
	beq.n 0xc1c2c	@ 000c1c22 03d0
.org 0xc1c24
	ldrb r0, [r6, #10]	@ 000c1c24 b07a
.org 0xc1c26
	movs r1, #16	@ 000c1c26 1021
.org 0xc1c28
	orrs r0, r1	@ 000c1c28 0843
.org 0xc1c2a
	b.n 0xc1c32	@ 000c1c2a 02e0
.org 0xc1c2c
	ldrb r1, [r6, #10]	@ 000c1c2c b17a
.org 0xc1c2e
	movs r0, #239	@ 000c1c2e ef20
.org 0xc1c30
	ands r0, r1	@ 000c1c30 0840
.org 0xc1c32
	strb r0, [r6, #10]	@ 000c1c32 b072
.org 0xc1c34
	movs r4, #1	@ 000c1c34 0124
.org 0xc1c36
	adds r1, r4, #0	@ 000c1c36 211c
.org 0xc1c38
	ands r1, r2	@ 000c1c38 1140
.org 0xc1c3a
	adds r0, r6, #0	@ 000c1c3a 301c
.org 0xc1c3c
	adds r0, #76	@ 000c1c3c 4c30
.org 0xc1c3e
	strb r1, [r0, #0]	@ 000c1c3e 0170
.org 0xc1c40
	adds r3, r6, #0	@ 000c1c40 331c
.org 0xc1c42
	adds r3, #74	@ 000c1c42 4a33
.org 0xc1c44
	lsls r1, r1, #4	@ 000c1c44 0901
.org 0xc1c46
	ldrb r2, [r3, #0]	@ 000c1c46 1a78
.org 0xc1c48
	movs r0, #17	@ 000c1c48 1120
.org 0xc1c4a
	negs r0, r0	@ 000c1c4a 4042
.org 0xc1c4c
	ands r0, r2	@ 000c1c4c 1040
.org 0xc1c4e
	orrs r0, r1	@ 000c1c4e 0843
.org 0xc1c50
	strb r0, [r3, #0]	@ 000c1c50 1870
.org 0xc1c52
	ldrb r0, [r7, #10]	@ 000c1c52 b87a
.org 0xc1c54
	lsrs r2, r0, #5	@ 000c1c54 4209
.org 0xc1c56
	ands r2, r4	@ 000c1c56 2240
.org 0xc1c58
	cmp r2, #0	@ 000c1c58 002a
.org 0xc1c5a
	beq.n 0xc1c64	@ 000c1c5a 03d0
.org 0xc1c5c
	ldrb r0, [r6, #10]	@ 000c1c5c b07a
.org 0xc1c5e
	movs r1, #32	@ 000c1c5e 2021
.org 0xc1c60
	orrs r0, r1	@ 000c1c60 0843
.org 0xc1c62
	b.n 0xc1c6a	@ 000c1c62 02e0
.org 0xc1c64
	ldrb r1, [r6, #10]	@ 000c1c64 b17a
.org 0xc1c66
	movs r0, #223	@ 000c1c66 df20
.org 0xc1c68
	ands r0, r1	@ 000c1c68 0840
.org 0xc1c6a
	strb r0, [r6, #10]	@ 000c1c6a b072
.org 0xc1c6c
	adds r1, r2, #0	@ 000c1c6c 111c
.org 0xc1c6e
	adds r0, r6, #0	@ 000c1c6e 301c
.org 0xc1c70
	adds r0, #77	@ 000c1c70 4d30
.org 0xc1c72
	movs r5, #0	@ 000c1c72 0025
.org 0xc1c74
	strb r1, [r0, #0]	@ 000c1c74 0170
.org 0xc1c76
	lsls r1, r1, #5	@ 000c1c76 4901
.org 0xc1c78
	ldrb r2, [r3, #0]	@ 000c1c78 1a78
.org 0xc1c7a
	movs r0, #33	@ 000c1c7a 2120
.org 0xc1c7c
	negs r0, r0	@ 000c1c7c 4042
.org 0xc1c7e
	ands r0, r2	@ 000c1c7e 1040
.org 0xc1c80
	orrs r0, r1	@ 000c1c80 0843
.org 0xc1c82
	strb r0, [r3, #0]	@ 000c1c82 1870
.org 0xc1c84
	ldrb r1, [r6, #10]	@ 000c1c84 b17a
.org 0xc1c86
	movs r0, #4	@ 000c1c86 0420
.org 0xc1c88
	orrs r0, r1	@ 000c1c88 0843
.org 0xc1c8a
	strb r0, [r6, #10]	@ 000c1c8a b072
.org 0xc1c8c
	adds r4, r6, #0	@ 000c1c8c 341c
.org 0xc1c8e
	adds r4, #116	@ 000c1c8e 7434
.org 0xc1c90
	ldr r1, [pc, #84]	@ 000c1c90 1549
.org 0xc1c92
	adds r2, r6, #0	@ 000c1c92 321c
.org 0xc1c94
	adds r2, #84	@ 000c1c94 5432
.org 0xc1c96
	adds r0, r4, #0	@ 000c1c96 201c
.org 0xc1c98
	movs r3, #64	@ 000c1c98 4023
.org 0xc1c9a
	bl 0x5760	@ 000c1c9a 43f761fd
.org 0xc1c9e
	str r6, [r4, #44]	@ 000c1c9e e662
.org 0xc1ca0
	str r5, [r4, #36]	@ 000c1ca0 6562
.org 0xc1ca2
	ldr r0, [r7, #84]	@ 000c1ca2 786d
.org 0xc1ca4
	ldr r1, [r7, #88]	@ 000c1ca4 b96d
.org 0xc1ca6
	str r0, [r6, #84]	@ 000c1ca6 7065
.org 0xc1ca8
	str r1, [r6, #88]	@ 000c1ca8 b165
.org 0xc1caa
	adds r0, r6, #0	@ 000c1caa 301c
.org 0xc1cac
	adds r0, #100	@ 000c1cac 6430
.org 0xc1cae
	str r5, [r0, #4]	@ 000c1cae 4560
.org 0xc1cb0
	str r5, [r6, #100]	@ 000c1cb0 7566
.org 0xc1cb2
	ldrb r1, [r6, #10]	@ 000c1cb2 b17a
.org 0xc1cb4
	movs r0, #16	@ 000c1cb4 1020
.org 0xc1cb6
	ands r0, r1	@ 000c1cb6 0840
.org 0xc1cb8
	cmp r0, #0	@ 000c1cb8 0028
.org 0xc1cba
	beq.n 0xc1cf8	@ 000c1cba 1dd0
.org 0xc1cbc
	ldr r0, [r6, #84]	@ 000c1cbc 706d
.org 0xc1cbe
	ldr r1, [pc, #44]	@ 000c1cbe 0b49
.org 0xc1cc0
	adds r0, r0, r1	@ 000c1cc0 4018
.org 0xc1cc2
	str r0, [r6, #84]	@ 000c1cc2 7065
.org 0xc1cc4
	ldr r1, [pc, #40]	@ 000c1cc4 0a49
.org 0xc1cc6
	ldrb r0, [r6, #17]	@ 000c1cc6 707c
.org 0xc1cc8
	lsls r0, r0, #2	@ 000c1cc8 8000
.org 0xc1cca
	adds r0, r0, r1	@ 000c1cca 4018
.org 0xc1ccc
	ldr r0, [r0, #0]	@ 000c1ccc 0068
.org 0xc1cce
	str r0, [r6, #92]	@ 000c1cce f065
.org 0xc1cd0
	ldrb r1, [r7, #10]	@ 000c1cd0 b97a
.org 0xc1cd2
	movs r0, #32	@ 000c1cd2 2020
.org 0xc1cd4
	ands r0, r1	@ 000c1cd4 0840
.org 0xc1cd6
	ldrb r2, [r6, #17]	@ 000c1cd6 727c
.org 0xc1cd8
	cmp r0, #0	@ 000c1cd8 0028
.org 0xc1cda
	beq.n 0xc1d28	@ 000c1cda 25d0
.org 0xc1cdc
	ldr r0, [pc, #20]	@ 000c1cdc 0548
.org 0xc1cde
	lsls r1, r2, #2	@ 000c1cde 9100
.org 0xc1ce0
	adds r1, r1, r0	@ 000c1ce0 0918
.org 0xc1ce2
	ldr r0, [r1, #0]	@ 000c1ce2 0868
.org 0xc1ce4
	b.n 0xc1d26	@ 000c1ce4 1fe0
.org 0xc1ce6
	.byte 0x00	@ 000c1ce6 data
.org 0xc1ce7
	.byte 0x00	@ 000c1ce7 data
.org 0xc1ce8
	.byte 0x5c,0x53,0x86,0x08	@ 000c1ce8 data
.org 0xc1cec
	.byte 0x00,0xfe,0xff,0xff	@ 000c1cec data
.org 0xc1cf0
	.byte 0xa4,0x53,0x86,0x08	@ 000c1cf0 data
.org 0xc1cf4
	.byte 0xd4,0x53,0x86,0x08	@ 000c1cf4 data
.org 0xc1cf8
	ldr r0, [r6, #84]	@ 000c1cf8 706d
.org 0xc1cfa
	movs r1, #128	@ 000c1cfa 8021
.org 0xc1cfc
	lsls r1, r1, #2	@ 000c1cfc 8900
.org 0xc1cfe
	adds r0, r0, r1	@ 000c1cfe 4018
.org 0xc1d00
	str r0, [r6, #84]	@ 000c1d00 7065
.org 0xc1d02
	ldr r1, [pc, #68]	@ 000c1d02 1149
.org 0xc1d04
	ldrb r0, [r6, #17]	@ 000c1d04 707c
.org 0xc1d06
	lsls r0, r0, #2	@ 000c1d06 8000
.org 0xc1d08
	adds r0, r0, r1	@ 000c1d08 4018
.org 0xc1d0a
	ldr r0, [r0, #0]	@ 000c1d0a 0068
.org 0xc1d0c
	negs r0, r0	@ 000c1d0c 4042
.org 0xc1d0e
	str r0, [r6, #92]	@ 000c1d0e f065
.org 0xc1d10
	ldrb r1, [r7, #10]	@ 000c1d10 b97a
.org 0xc1d12
	movs r0, #32	@ 000c1d12 2020
.org 0xc1d14
	ands r0, r1	@ 000c1d14 0840
.org 0xc1d16
	ldrb r2, [r6, #17]	@ 000c1d16 727c
.org 0xc1d18
	cmp r0, #0	@ 000c1d18 0028
.org 0xc1d1a
	beq.n 0xc1d28	@ 000c1d1a 05d0
.org 0xc1d1c
	ldr r0, [pc, #44]	@ 000c1d1c 0b48
.org 0xc1d1e
	lsls r1, r2, #2	@ 000c1d1e 9100
.org 0xc1d20
	adds r1, r1, r0	@ 000c1d20 0918
.org 0xc1d22
	ldr r0, [r1, #0]	@ 000c1d22 0868
.org 0xc1d24
	negs r0, r0	@ 000c1d24 4042
.org 0xc1d26
	str r0, [r6, #100]	@ 000c1d26 7066
.org 0xc1d28
	ldr r0, [pc, #36]	@ 000c1d28 0948
.org 0xc1d2a
	lsls r2, r2, #2	@ 000c1d2a 9200
.org 0xc1d2c
	adds r0, r2, r0	@ 000c1d2c 1018
.org 0xc1d2e
	ldr r0, [r0, #0]	@ 000c1d2e 0068
.org 0xc1d30
	str r0, [r6, #96]	@ 000c1d30 3066
.org 0xc1d32
	ldrb r1, [r6, #10]	@ 000c1d32 b17a
.org 0xc1d34
	movs r0, #32	@ 000c1d34 2020
.org 0xc1d36
	ands r0, r1	@ 000c1d36 0840
.org 0xc1d38
	cmp r0, #0	@ 000c1d38 0028
.org 0xc1d3a
	beq.n 0xc1d54	@ 000c1d3a 0bd0
.org 0xc1d3c
	ldr r0, [r6, #88]	@ 000c1d3c b06d
.org 0xc1d3e
	movs r1, #136	@ 000c1d3e 8821
.org 0xc1d40
	lsls r1, r1, #5	@ 000c1d40 4901
.org 0xc1d42
	adds r0, r0, r1	@ 000c1d42 4018
.org 0xc1d44
	str r0, [r6, #88]	@ 000c1d44 b065
.org 0xc1d46
	b.n 0xc1d64	@ 000c1d46 0de0
.org 0xc1d48
	.byte 0xa4,0x53,0x86,0x08	@ 000c1d48 data
.org 0xc1d4c
	.byte 0xd4,0x53,0x86,0x08	@ 000c1d4c data
.org 0xc1d50
	.byte 0xbc,0x53,0x86,0x08	@ 000c1d50 data
.org 0xc1d54
	ldr r0, [r6, #88]	@ 000c1d54 b06d
.org 0xc1d56
	ldr r1, [pc, #44]	@ 000c1d56 0b49
.org 0xc1d58
	adds r0, r0, r1	@ 000c1d58 4018
.org 0xc1d5a
	str r0, [r6, #88]	@ 000c1d5a b065
.org 0xc1d5c
	ldr r0, [pc, #40]	@ 000c1d5c 0a48
.org 0xc1d5e
	adds r0, r2, r0	@ 000c1d5e 1018
.org 0xc1d60
	ldr r0, [r0, #0]	@ 000c1d60 0068
.org 0xc1d62
	str r0, [r6, #104]	@ 000c1d62 b066
