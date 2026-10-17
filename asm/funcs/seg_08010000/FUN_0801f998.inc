@ FUN_0801f998  entry 0x0801f998  size 372
.thumb
.org 0x1f998
FUN_0801f998:
	push {r4, r5, r6, lr}	@ 0001f998 70b5
.org 0x1f99a
	adds r3, r0, #0	@ 0001f99a 031c
.org 0x1f99c
	lsls r1, r1, #24	@ 0001f99c 0906
.org 0x1f99e
	lsrs r1, r1, #24	@ 0001f99e 090e
.org 0x1f9a0
	adds r0, r1, #0	@ 0001f9a0 081c
.org 0x1f9a2
	cmp r1, #1	@ 0001f9a2 0129
.org 0x1f9a4
	beq.n 0x1f9c2	@ 0001f9a4 0dd0
.org 0x1f9a6
	cmp r1, #1	@ 0001f9a6 0129
.org 0x1f9a8
	bgt.n 0x1f9b0	@ 0001f9a8 02dc
.org 0x1f9aa
	cmp r1, #0	@ 0001f9aa 0029
.org 0x1f9ac
	beq.n 0x1fa76	@ 0001f9ac 63d0
.org 0x1f9ae
	b.n 0x1f9b8	@ 0001f9ae 03e0
.org 0x1f9b0
	cmp r0, #2	@ 0001f9b0 0228
.org 0x1f9b2
	beq.n 0x1fa02	@ 0001f9b2 26d0
.org 0x1f9b4
	cmp r0, #4	@ 0001f9b4 0428
.org 0x1f9b6
	beq.n 0x1fa6c	@ 0001f9b6 59d0
.org 0x1f9b8
	ldrb r1, [r3, #25]	@ 0001f9b8 597e
.org 0x1f9ba
	movs r0, #247	@ 0001f9ba f720
.org 0x1f9bc
	ands r0, r1	@ 0001f9bc 0840
.org 0x1f9be
	strb r0, [r3, #25]	@ 0001f9be 5876
.org 0x1f9c0
	b.n 0x1fa76	@ 0001f9c0 59e0
.org 0x1f9c2
	ldr r0, [r3, #48]	@ 0001f9c2 186b
.org 0x1f9c4
	ldr r2, [r3, #56]	@ 0001f9c4 9a6b
.org 0x1f9c6
	subs r1, r0, r2	@ 0001f9c6 811a
.org 0x1f9c8
	cmp r1, #0	@ 0001f9c8 0029
.org 0x1f9ca
	ble.n 0x1f9d6	@ 0001f9ca 04dd
.org 0x1f9cc
	adds r0, r1, #0	@ 0001f9cc 081c
.org 0x1f9ce
	adds r0, #31	@ 0001f9ce 1f30
.org 0x1f9d0
	asrs r0, r0, #5	@ 0001f9d0 4011
.org 0x1f9d2
	adds r0, r2, r0	@ 0001f9d2 1018
.org 0x1f9d4
	b.n 0x1f9de	@ 0001f9d4 03e0
.org 0x1f9d6
	movs r0, #31	@ 0001f9d6 1f20
.org 0x1f9d8
	subs r0, r0, r1	@ 0001f9d8 401a
.org 0x1f9da
	asrs r0, r0, #5	@ 0001f9da 4011
.org 0x1f9dc
	subs r0, r2, r0	@ 0001f9dc 101a
.org 0x1f9de
	str r0, [r3, #56]	@ 0001f9de 9863
.org 0x1f9e0
	ldr r0, [r3, #52]	@ 0001f9e0 586b
.org 0x1f9e2
	ldr r2, [r3, #60]	@ 0001f9e2 da6b
.org 0x1f9e4
	subs r1, r0, r2	@ 0001f9e4 811a
.org 0x1f9e6
	cmp r1, #0	@ 0001f9e6 0029
.org 0x1f9e8
	ble.n 0x1f9f6	@ 0001f9e8 05dd
.org 0x1f9ea
	adds r0, r1, #0	@ 0001f9ea 081c
.org 0x1f9ec
	adds r0, #31	@ 0001f9ec 1f30
.org 0x1f9ee
	asrs r0, r0, #5	@ 0001f9ee 4011
.org 0x1f9f0
	adds r0, r2, r0	@ 0001f9f0 1018
.org 0x1f9f2
	str r0, [r3, #60]	@ 0001f9f2 d863
.org 0x1f9f4
	b.n 0x1fb0e	@ 0001f9f4 8be0
.org 0x1f9f6
	movs r0, #31	@ 0001f9f6 1f20
.org 0x1f9f8
	subs r0, r0, r1	@ 0001f9f8 401a
.org 0x1f9fa
	asrs r0, r0, #5	@ 0001f9fa 4011
.org 0x1f9fc
	subs r0, r2, r0	@ 0001f9fc 101a
.org 0x1f9fe
	str r0, [r3, #60]	@ 0001f9fe d863
.org 0x1fa00
	b.n 0x1fb0e	@ 0001fa00 85e0
.org 0x1fa02
	ldrh r2, [r3, #34]	@ 0001fa02 5a8c
.org 0x1fa04
	movs r0, #34	@ 0001fa04 2220
.org 0x1fa06
	ldrsh r1, [r3, r0]	@ 0001fa06 195e
.org 0x1fa08
	ldr r0, [pc, #92]	@ 0001fa08 1748
.org 0x1fa0a
	cmp r1, r0	@ 0001fa0a 8142
.org 0x1fa0c
	bgt.n 0x1fa76	@ 0001fa0c 33dc
.org 0x1fa0e
	adds r0, r2, #1	@ 0001fa0e 501c
.org 0x1fa10
	strh r0, [r3, #34]	@ 0001fa10 5884
.org 0x1fa12
	lsls r0, r0, #16	@ 0001fa12 0004
.org 0x1fa14
	asrs r4, r0, #16	@ 0001fa14 0414
.org 0x1fa16
	ldr r0, [r3, #56]	@ 0001fa16 986b
.org 0x1fa18
	asrs r0, r0, #2	@ 0001fa18 8010
.org 0x1fa1a
	movs r1, #128	@ 0001fa1a 8021
.org 0x1fa1c
	lsls r1, r1, #3	@ 0001fa1c c900
.org 0x1fa1e
	subs r2, r1, r4	@ 0001fa1e 0a1b
.org 0x1fa20
	adds r1, r0, #0	@ 0001fa20 011c
.org 0x1fa22
	muls r1, r2	@ 0001fa22 5143
.org 0x1fa24
	ldr r5, [r3, #48]	@ 0001fa24 1d6b
.org 0x1fa26
	asrs r0, r5, #2	@ 0001fa26 a810
.org 0x1fa28
	muls r0, r4	@ 0001fa28 6043
.org 0x1fa2a
	adds r0, r1, r0	@ 0001fa2a 0818
.org 0x1fa2c
	cmp r0, #0	@ 0001fa2c 0028
.org 0x1fa2e
	bge.n 0x1fa32	@ 0001fa2e 00da
.org 0x1fa30
	adds r0, #255	@ 0001fa30 ff30
.org 0x1fa32
	asrs r6, r0, #8	@ 0001fa32 0612
.org 0x1fa34
	str r6, [r3, #56]	@ 0001fa34 9e63
.org 0x1fa36
	ldr r0, [r3, #60]	@ 0001fa36 d86b
.org 0x1fa38
	asrs r0, r0, #2	@ 0001fa38 8010
.org 0x1fa3a
	muls r2, r0	@ 0001fa3a 4243
.org 0x1fa3c
	ldr r1, [r3, #52]	@ 0001fa3c 596b
.org 0x1fa3e
	asrs r0, r1, #2	@ 0001fa3e 8810
.org 0x1fa40
	muls r0, r4	@ 0001fa40 6043
.org 0x1fa42
	adds r0, r2, r0	@ 0001fa42 1018
.org 0x1fa44
	cmp r0, #0	@ 0001fa44 0028
.org 0x1fa46
	bge.n 0x1fa4a	@ 0001fa46 00da
.org 0x1fa48
	adds r0, #255	@ 0001fa48 ff30
.org 0x1fa4a
	asrs r0, r0, #8	@ 0001fa4a 0012
.org 0x1fa4c
	str r0, [r3, #60]	@ 0001fa4c d863
.org 0x1fa4e
	subs r0, r6, r5	@ 0001fa4e 701b
.org 0x1fa50
	adds r0, #128	@ 0001fa50 8030
.org 0x1fa52
	movs r2, #128	@ 0001fa52 8022
.org 0x1fa54
	lsls r2, r2, #1	@ 0001fa54 5200
.org 0x1fa56
	cmp r0, r2	@ 0001fa56 9042
.org 0x1fa58
	bhi.n 0x1fa5c	@ 0001fa58 00d8
.org 0x1fa5a
	str r5, [r3, #56]	@ 0001fa5a 9d63
.org 0x1fa5c
	ldr r0, [r3, #60]	@ 0001fa5c d86b
.org 0x1fa5e
	subs r0, r0, r1	@ 0001fa5e 401a
.org 0x1fa60
	adds r0, #128	@ 0001fa60 8030
.org 0x1fa62
	cmp r0, r2	@ 0001fa62 9042
.org 0x1fa64
	bhi.n 0x1fb0e	@ 0001fa64 53d8
.org 0x1fa66
	b.n 0x1fb0c	@ 0001fa66 51e0
.org 0x1fa68
	.byte 0xfe,0x03,0x00,0x00	@ 0001fa68 data
.org 0x1fa6c
	ldrh r1, [r3, #34]	@ 0001fa6c 598c
.org 0x1fa6e
	movs r2, #34	@ 0001fa6e 2222
.org 0x1fa70
	ldrsh r0, [r3, r2]	@ 0001fa70 985e
.org 0x1fa72
	cmp r0, #254	@ 0001fa72 fe28
.org 0x1fa74
	ble.n 0x1fa80	@ 0001fa74 04dd
.org 0x1fa76
	ldr r0, [r3, #48]	@ 0001fa76 186b
.org 0x1fa78
	str r0, [r3, #56]	@ 0001fa78 9863
.org 0x1fa7a
	ldr r0, [r3, #52]	@ 0001fa7a 586b
.org 0x1fa7c
	str r0, [r3, #60]	@ 0001fa7c d863
.org 0x1fa7e
	b.n 0x1fb0e	@ 0001fa7e 46e0
.org 0x1fa80
	adds r0, r1, #1	@ 0001fa80 481c
.org 0x1fa82
	strh r0, [r3, #34]	@ 0001fa82 5884
.org 0x1fa84
	lsls r0, r0, #16	@ 0001fa84 0004
.org 0x1fa86
	asrs r4, r0, #16	@ 0001fa86 0414
.org 0x1fa88
	ldr r0, [pc, #40]	@ 0001fa88 0a48
.org 0x1fa8a
	movs r1, #232	@ 0001fa8a e821
.org 0x1fa8c
	lsls r1, r1, #1	@ 0001fa8c 4900
.org 0x1fa8e
	adds r0, r0, r1	@ 0001fa8e 4018
.org 0x1fa90
	ldrh r1, [r0, #0]	@ 0001fa90 0188
.org 0x1fa92
	movs r0, #127	@ 0001fa92 7f20
.org 0x1fa94
	ands r0, r1	@ 0001fa94 0840
.org 0x1fa96
	cmp r0, #4	@ 0001fa96 0428
.org 0x1fa98
	bne.n 0x1fab8	@ 0001fa98 0ed1
.org 0x1fa9a
	ldr r1, [r3, #56]	@ 0001fa9a 996b
.org 0x1fa9c
	asrs r1, r1, #8	@ 0001fa9c 0912
.org 0x1fa9e
	movs r0, #128	@ 0001fa9e 8020
.org 0x1faa0
	lsls r0, r0, #1	@ 0001faa0 4000
.org 0x1faa2
	subs r0, r0, r4	@ 0001faa2 001b
.org 0x1faa4
	muls r1, r0	@ 0001faa4 4143
.org 0x1faa6
	ldr r2, [r3, #48]	@ 0001faa6 1a6b
.org 0x1faa8
	asrs r0, r2, #8	@ 0001faa8 1012
.org 0x1faaa
	muls r0, r4	@ 0001faaa 6043
.org 0x1faac
	adds r1, r1, r0	@ 0001faac 0918
.org 0x1faae
	str r1, [r3, #56]	@ 0001faae 9963
.org 0x1fab0
	adds r5, r2, #0	@ 0001fab0 151c
.org 0x1fab2
	b.n 0x1fad8	@ 0001fab2 11e0
.org 0x1fab4
	.byte 0xb0,0x0a,0x00,0x02	@ 0001fab4 data
.org 0x1fab8
	movs r0, #128	@ 0001fab8 8020
.org 0x1faba
	lsls r0, r0, #1	@ 0001faba 4000
.org 0x1fabc
	subs r0, r0, r4	@ 0001fabc 001b
.org 0x1fabe
	ldr r1, [r3, #56]	@ 0001fabe 996b
.org 0x1fac0
	adds r2, r1, #0	@ 0001fac0 0a1c
.org 0x1fac2
	muls r2, r0	@ 0001fac2 4243
.org 0x1fac4
	ldr r1, [r3, #48]	@ 0001fac4 196b
.org 0x1fac6
	adds r0, r1, #0	@ 0001fac6 081c
.org 0x1fac8
	muls r0, r4	@ 0001fac8 6043
.org 0x1faca
	adds r0, r2, r0	@ 0001faca 1018
.org 0x1facc
	adds r5, r1, #0	@ 0001facc 0d1c
.org 0x1face
	cmp r0, #0	@ 0001face 0028
.org 0x1fad0
	bge.n 0x1fad4	@ 0001fad0 00da
.org 0x1fad2
	adds r0, #255	@ 0001fad2 ff30
.org 0x1fad4
	asrs r0, r0, #8	@ 0001fad4 0012
.org 0x1fad6
	str r0, [r3, #56]	@ 0001fad6 9863
.org 0x1fad8
	movs r6, #128	@ 0001fad8 8026
.org 0x1fada
	lsls r6, r6, #1	@ 0001fada 7600
.org 0x1fadc
	subs r1, r6, r4	@ 0001fadc 311b
.org 0x1fade
	ldr r0, [r3, #60]	@ 0001fade d86b
.org 0x1fae0
	adds r2, r0, #0	@ 0001fae0 021c
.org 0x1fae2
	muls r2, r1	@ 0001fae2 4a43
.org 0x1fae4
	ldr r1, [r3, #52]	@ 0001fae4 596b
.org 0x1fae6
	adds r0, r1, #0	@ 0001fae6 081c
.org 0x1fae8
	muls r0, r4	@ 0001fae8 6043
.org 0x1faea
	adds r0, r2, r0	@ 0001faea 1018
.org 0x1faec
	cmp r0, #0	@ 0001faec 0028
.org 0x1faee
	bge.n 0x1faf2	@ 0001faee 00da
.org 0x1faf0
	adds r0, #255	@ 0001faf0 ff30
.org 0x1faf2
	asrs r0, r0, #8	@ 0001faf2 0012
.org 0x1faf4
	str r0, [r3, #60]	@ 0001faf4 d863
.org 0x1faf6
	ldr r0, [r3, #56]	@ 0001faf6 986b
.org 0x1faf8
	subs r0, r0, r5	@ 0001faf8 401b
.org 0x1fafa
	adds r0, #128	@ 0001fafa 8030
.org 0x1fafc
	cmp r0, r6	@ 0001fafc b042
.org 0x1fafe
	bhi.n 0x1fb02	@ 0001fafe 00d8
.org 0x1fb00
	str r5, [r3, #56]	@ 0001fb00 9d63
.org 0x1fb02
	ldr r0, [r3, #60]	@ 0001fb02 d86b
.org 0x1fb04
	subs r0, r0, r1	@ 0001fb04 401a
.org 0x1fb06
	adds r0, #128	@ 0001fb06 8030
.org 0x1fb08
	cmp r0, r6	@ 0001fb08 b042
.org 0x1fb0a
	bhi.n 0x1fb0e	@ 0001fb0a 00d8
