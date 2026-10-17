@ FUN_08090f88  entry 0x08090f88  size 250
.thumb
.org 0x90f88
FUN_08090f88:
	push {r4, r5, r6, lr}	@ 00090f88 70b5
.org 0x90f8a
	adds r6, r0, #0	@ 00090f8a 061c
.org 0x90f8c
	ldr r4, [r6, #40]	@ 00090f8c b46a
.org 0x90f8e
	bl 0x1cd28	@ 00090f8e 8bf7cbfe
.org 0x90f92
	ldrb r1, [r6, #10]	@ 00090f92 b17a
.org 0x90f94
	movs r0, #1	@ 00090f94 0120
.org 0x90f96
	movs r5, #0	@ 00090f96 0025
.org 0x90f98
	orrs r0, r1	@ 00090f98 0843
.org 0x90f9a
	movs r1, #2	@ 00090f9a 0221
.org 0x90f9c
	orrs r0, r1	@ 00090f9c 0843
.org 0x90f9e
	strb r0, [r6, #10]	@ 00090f9e b072
.org 0x90fa0
	movs r1, #240	@ 00090fa0 f021
.org 0x90fa2
	lsls r1, r1, #6	@ 00090fa2 8901
.org 0x90fa4
	adds r0, r6, #0	@ 00090fa4 301c
.org 0x90fa6
	bl 0x1cf00	@ 00090fa6 8bf7abff
.org 0x90faa
	adds r0, r6, #0	@ 00090faa 301c
.org 0x90fac
	bl 0x1cff0	@ 00090fac 8cf720f8
.org 0x90fb0
	ldrb r0, [r4, #10]	@ 00090fb0 a07a
.org 0x90fb2
	lsrs r2, r0, #4	@ 00090fb2 0209
.org 0x90fb4
	movs r0, #1	@ 00090fb4 0120
.org 0x90fb6
	ands r2, r0	@ 00090fb6 0240
.org 0x90fb8
	cmp r2, #0	@ 00090fb8 002a
.org 0x90fba
	beq.n 0x90fc4	@ 00090fba 03d0
.org 0x90fbc
	ldrb r0, [r6, #10]	@ 00090fbc b07a
.org 0x90fbe
	movs r1, #16	@ 00090fbe 1021
.org 0x90fc0
	orrs r0, r1	@ 00090fc0 0843
.org 0x90fc2
	b.n 0x90fca	@ 00090fc2 02e0
.org 0x90fc4
	ldrb r1, [r6, #10]	@ 00090fc4 b17a
.org 0x90fc6
	movs r0, #239	@ 00090fc6 ef20
.org 0x90fc8
	ands r0, r1	@ 00090fc8 0840
.org 0x90fca
	strb r0, [r6, #10]	@ 00090fca b072
.org 0x90fcc
	adds r1, r2, #0	@ 00090fcc 111c
.org 0x90fce
	adds r0, r6, #0	@ 00090fce 301c
.org 0x90fd0
	adds r0, #76	@ 00090fd0 4c30
.org 0x90fd2
	strb r1, [r0, #0]	@ 00090fd2 0170
.org 0x90fd4
	adds r3, r6, #0	@ 00090fd4 331c
.org 0x90fd6
	adds r3, #74	@ 00090fd6 4a33
.org 0x90fd8
	lsls r1, r1, #4	@ 00090fd8 0901
.org 0x90fda
	ldrb r2, [r3, #0]	@ 00090fda 1a78
.org 0x90fdc
	movs r0, #17	@ 00090fdc 1120
.org 0x90fde
	negs r0, r0	@ 00090fde 4042
.org 0x90fe0
	ands r0, r2	@ 00090fe0 1040
.org 0x90fe2
	orrs r0, r1	@ 00090fe2 0843
.org 0x90fe4
	strb r0, [r3, #0]	@ 00090fe4 1870
.org 0x90fe6
	adds r1, r6, #0	@ 00090fe6 311c
.org 0x90fe8
	adds r1, #37	@ 00090fe8 2531
.org 0x90fea
	movs r0, #15	@ 00090fea 0f20
.org 0x90fec
	strb r0, [r1, #0]	@ 00090fec 0870
.org 0x90fee
	ldrb r1, [r6, #10]	@ 00090fee b17a
.org 0x90ff0
	movs r0, #16	@ 00090ff0 1020
.org 0x90ff2
	ands r0, r1	@ 00090ff2 0840
.org 0x90ff4
	cmp r0, #0	@ 00090ff4 0028
.org 0x90ff6
	beq.n 0x91018	@ 00090ff6 0fd0
.org 0x90ff8
	ldr r0, [r4, #84]	@ 00090ff8 606d
.org 0x90ffa
	ldr r1, [pc, #20]	@ 00090ffa 0549
.org 0x90ffc
	adds r0, r0, r1	@ 00090ffc 4018
.org 0x90ffe
	str r0, [r6, #84]	@ 00090ffe 7065
.org 0x91000
	ldr r1, [pc, #16]	@ 00091000 0449
.org 0x91002
	ldrb r0, [r6, #17]	@ 00091002 707c
.org 0x91004
	lsls r0, r0, #1	@ 00091004 4000
.org 0x91006
	adds r0, r0, r1	@ 00091006 4018
.org 0x91008
	movs r1, #0	@ 00091008 0021
.org 0x9100a
	ldrsh r0, [r0, r1]	@ 0009100a 405e
.org 0x9100c
	b.n 0x91030	@ 0009100c 10e0
.org 0x9100e
	.byte 0x00	@ 0009100e data
.org 0x9100f
	.byte 0x00	@ 0009100f data
.org 0x91010
	.byte 0x00,0xfc,0xff,0xff	@ 00091010 data
.org 0x91014
	.byte 0xc0,0x03,0x86,0x08	@ 00091014 data
.org 0x91018
	ldr r0, [r4, #84]	@ 00091018 606d
.org 0x9101a
	movs r1, #128	@ 0009101a 8021
.org 0x9101c
	lsls r1, r1, #3	@ 0009101c c900
.org 0x9101e
	adds r0, r0, r1	@ 0009101e 4018
.org 0x91020
	str r0, [r6, #84]	@ 00091020 7065
.org 0x91022
	ldr r1, [pc, #104]	@ 00091022 1a49
.org 0x91024
	ldrb r0, [r6, #17]	@ 00091024 707c
.org 0x91026
	lsls r0, r0, #1	@ 00091026 4000
.org 0x91028
	adds r0, r0, r1	@ 00091028 4018
.org 0x9102a
	movs r1, #0	@ 0009102a 0021
.org 0x9102c
	ldrsh r0, [r0, r1]	@ 0009102c 405e
.org 0x9102e
	negs r0, r0	@ 0009102e 4042
.org 0x91030
	str r0, [r6, #92]	@ 00091030 f065
.org 0x91032
	ldrb r2, [r6, #17]	@ 00091032 727c
.org 0x91034
	ldr r0, [r4, #88]	@ 00091034 a06d
.org 0x91036
	ldr r1, [pc, #88]	@ 00091036 1649
.org 0x91038
	adds r0, r0, r1	@ 00091038 4018
.org 0x9103a
	str r0, [r6, #88]	@ 0009103a b065
.org 0x9103c
	ldr r1, [pc, #84]	@ 0009103c 1549
.org 0x9103e
	lsls r0, r2, #1	@ 0009103e 5000
.org 0x91040
	adds r0, r0, r1	@ 00091040 4018
.org 0x91042
	movs r1, #0	@ 00091042 0021
.org 0x91044
	ldrsh r0, [r0, r1]	@ 00091044 405e
.org 0x91046
	negs r0, r0	@ 00091046 4042
.org 0x91048
	str r0, [r6, #96]	@ 00091048 3066
.org 0x9104a
	ldrb r1, [r6, #10]	@ 0009104a b17a
.org 0x9104c
	movs r0, #4	@ 0009104c 0420
.org 0x9104e
	movs r5, #0	@ 0009104e 0025
.org 0x91050
	orrs r0, r1	@ 00091050 0843
.org 0x91052
	strb r0, [r6, #10]	@ 00091052 b072
.org 0x91054
	adds r4, r6, #0	@ 00091054 341c
.org 0x91056
	adds r4, #116	@ 00091056 7434
.org 0x91058
	ldr r1, [pc, #60]	@ 00091058 0f49
.org 0x9105a
	adds r2, r6, #0	@ 0009105a 321c
.org 0x9105c
	adds r2, #84	@ 0009105c 5432
.org 0x9105e
	adds r0, r4, #0	@ 0009105e 201c
.org 0x91060
	movs r3, #8	@ 00091060 0823
.org 0x91062
	bl 0x5760	@ 00091062 74f77dfb
.org 0x91066
	str r6, [r4, #44]	@ 00091066 e662
.org 0x91068
	ldr r0, [pc, #48]	@ 00091068 0c48
.org 0x9106a
	str r0, [r4, #36]	@ 0009106a 6062
.org 0x9106c
	adds r1, r6, #0	@ 0009106c 311c
.org 0x9106e
	adds r1, #190	@ 0009106e be31
.org 0x91070
	movs r0, #2	@ 00091070 0220
.org 0x91072
	strb r0, [r1, #0]	@ 00091072 0870
.org 0x91074
	subs r1, #1	@ 00091074 0139
.org 0x91076
	movs r0, #3	@ 00091076 0320
.org 0x91078
	strb r0, [r1, #0]	@ 00091078 0870
.org 0x9107a
	str r5, [r6, #44]	@ 0009107a f562
.org 0x9107c
	adds r0, r6, #0	@ 0009107c 301c
.org 0x9107e
	adds r0, #191	@ 0009107e bf30
.org 0x91080
	strb r5, [r0, #0]	@ 00091080 0570
