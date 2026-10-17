@ FUN_08092df8  entry 0x08092df8  size 202
.thumb
.org 0x92df8
FUN_08092df8:
	push {r4, r5, r6, lr}	@ 00092df8 70b5
.org 0x92dfa
	adds r5, r0, #0	@ 00092dfa 051c
.org 0x92dfc
	movs r6, #0	@ 00092dfc 0026
.org 0x92dfe
	ldr r0, [pc, #100]	@ 00092dfe 1948
.org 0x92e00
	ldr r0, [r0, #0]	@ 00092e00 0068
.org 0x92e02
	ldr r3, [r5, #84]	@ 00092e02 6b6d
.org 0x92e04
	ldr r0, [r0, #84]	@ 00092e04 406d
.org 0x92e06
	cmp r3, r0	@ 00092e06 8342
.org 0x92e08
	bge.n 0x92e0c	@ 00092e08 00da
.org 0x92e0a
	movs r6, #1	@ 00092e0a 0126
.org 0x92e0c
	ldr r1, [pc, #88]	@ 00092e0c 1649
.org 0x92e0e
	ldrb r0, [r5, #9]	@ 00092e0e 687a
.org 0x92e10
	lsls r0, r0, #2	@ 00092e10 8000
.org 0x92e12
	adds r0, r0, r1	@ 00092e12 4018
.org 0x92e14
	movs r1, #1	@ 00092e14 0121
.org 0x92e16
	str r1, [r5, #12]	@ 00092e16 e960
.org 0x92e18
	ldr r0, [r0, #0]	@ 00092e18 0068
.org 0x92e1a
	ldr r0, [r0, #4]	@ 00092e1a 4068
.org 0x92e1c
	str r0, [r5, #20]	@ 00092e1c 6861
.org 0x92e1e
	movs r2, #0	@ 00092e1e 0022
.org 0x92e20
	movs r0, #10	@ 00092e20 0a20
.org 0x92e22
	strb r0, [r5, #13]	@ 00092e22 6873
.org 0x92e24
	strb r2, [r5, #14]	@ 00092e24 aa73
.org 0x92e26
	strb r2, [r5, #15]	@ 00092e26 ea73
.org 0x92e28
	ldrb r0, [r5, #10]	@ 00092e28 a87a
.org 0x92e2a
	movs r4, #0	@ 00092e2a 0024
.org 0x92e2c
	orrs r0, r1	@ 00092e2c 0843
.org 0x92e2e
	movs r1, #2	@ 00092e2e 0221
.org 0x92e30
	orrs r0, r1	@ 00092e30 0843
.org 0x92e32
	strb r0, [r5, #10]	@ 00092e32 a872
.org 0x92e34
	str r2, [r5, #44]	@ 00092e34 ea62
.org 0x92e36
	adds r0, r5, #0	@ 00092e36 281c
.org 0x92e38
	adds r0, #180	@ 00092e38 b430
.org 0x92e3a
	str r3, [r0, #0]	@ 00092e3a 0360
.org 0x92e3c
	adds r0, #5	@ 00092e3c 0530
.org 0x92e3e
	strb r2, [r0, #0]	@ 00092e3e 0270
.org 0x92e40
	adds r0, #1	@ 00092e40 0130
.org 0x92e42
	strb r2, [r0, #0]	@ 00092e42 0270
.org 0x92e44
	ldr r0, [r5, #84]	@ 00092e44 686d
.org 0x92e46
	ldr r1, [r5, #88]	@ 00092e46 a96d
.org 0x92e48
	bl 0x8534	@ 00092e48 75f774fb
.org 0x92e4c
	adds r0, #1	@ 00092e4c 0130
.org 0x92e4e
	str r0, [r5, #88]	@ 00092e4e a865
.org 0x92e50
	adds r0, r5, #0	@ 00092e50 281c
.org 0x92e52
	bl 0x1cc9c	@ 00092e52 89f723ff
.org 0x92e56
	adds r2, r6, #0	@ 00092e56 321c
.org 0x92e58
	cmp r2, #0	@ 00092e58 002a
.org 0x92e5a
	beq.n 0x92e6c	@ 00092e5a 07d0
.org 0x92e5c
	ldrb r0, [r5, #10]	@ 00092e5c a87a
.org 0x92e5e
	movs r1, #16	@ 00092e5e 1021
.org 0x92e60
	orrs r0, r1	@ 00092e60 0843
.org 0x92e62
	b.n 0x92e72	@ 00092e62 06e0
.org 0x92e64
	.byte 0xf0,0xdb,0x02,0x02	@ 00092e64 data
.org 0x92e68
	.byte 0x40,0xdb,0x85,0x08	@ 00092e68 data
.org 0x92e6c
	ldrb r1, [r5, #10]	@ 00092e6c a97a
.org 0x92e6e
	movs r0, #239	@ 00092e6e ef20
.org 0x92e70
	ands r0, r1	@ 00092e70 0840
.org 0x92e72
	strb r0, [r5, #10]	@ 00092e72 a872
.org 0x92e74
	adds r1, r2, #0	@ 00092e74 111c
.org 0x92e76
	adds r0, r5, #0	@ 00092e76 281c
.org 0x92e78
	adds r0, #76	@ 00092e78 4c30
.org 0x92e7a
	strb r1, [r0, #0]	@ 00092e7a 0170
.org 0x92e7c
	adds r3, r5, #0	@ 00092e7c 2b1c
.org 0x92e7e
	adds r3, #74	@ 00092e7e 4a33
.org 0x92e80
	lsls r1, r1, #4	@ 00092e80 0901
.org 0x92e82
	ldrb r2, [r3, #0]	@ 00092e82 1a78
.org 0x92e84
	movs r0, #17	@ 00092e84 1120
.org 0x92e86
	negs r0, r0	@ 00092e86 4042
.org 0x92e88
	ands r0, r2	@ 00092e88 1040
.org 0x92e8a
	orrs r0, r1	@ 00092e8a 0843
.org 0x92e8c
	strb r0, [r3, #0]	@ 00092e8c 1870
.org 0x92e8e
	movs r1, #128	@ 00092e8e 8021
.org 0x92e90
	lsls r1, r1, #7	@ 00092e90 c901
.org 0x92e92
	adds r0, r5, #0	@ 00092e92 281c
.org 0x92e94
	bl 0x1cf00	@ 00092e94 8af734f8
.org 0x92e98
	adds r0, r5, #0	@ 00092e98 281c
.org 0x92e9a
	bl 0x1cff0	@ 00092e9a 8af7a9f8
.org 0x92e9e
	ldrb r1, [r5, #10]	@ 00092e9e a97a
.org 0x92ea0
	movs r0, #4	@ 00092ea0 0420
.org 0x92ea2
	orrs r0, r1	@ 00092ea2 0843
.org 0x92ea4
	strb r0, [r5, #10]	@ 00092ea4 a872
.org 0x92ea6
	adds r4, r5, #0	@ 00092ea6 2c1c
.org 0x92ea8
	adds r4, #116	@ 00092ea8 7434
.org 0x92eaa
	ldr r1, [pc, #32]	@ 00092eaa 0849
.org 0x92eac
	adds r2, r5, #0	@ 00092eac 2a1c
.org 0x92eae
	adds r2, #84	@ 00092eae 5432
.org 0x92eb0
	adds r0, r4, #0	@ 00092eb0 201c
.org 0x92eb2
	movs r3, #10	@ 00092eb2 0a23
.org 0x92eb4
	bl 0x5760	@ 00092eb4 72f754fc
.org 0x92eb8
	str r5, [r4, #44]	@ 00092eb8 e562
.org 0x92eba
	ldr r0, [pc, #20]	@ 00092eba 0548
.org 0x92ebc
	str r0, [r4, #36]	@ 00092ebc 6062
.org 0x92ebe
	adds r0, r5, #0	@ 00092ebe 281c
.org 0x92ec0
	bl 0x93138	@ 00092ec0 00f03af9
