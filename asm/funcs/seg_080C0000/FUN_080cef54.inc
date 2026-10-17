@ FUN_080cef54  entry 0x080cef54  size 164
.thumb
.org 0xcef54
FUN_080cef54:
	push {r4, r5, r6, lr}	@ 000cef54 70b5
.org 0xcef56
	adds r6, r0, #0	@ 000cef56 061c
.org 0xcef58
	bl 0x1cc9c	@ 000cef58 4df7a0fe
.org 0xcef5c
	ldrb r1, [r6, #10]	@ 000cef5c b17a
.org 0xcef5e
	movs r0, #1	@ 000cef5e 0120
.org 0xcef60
	orrs r0, r1	@ 000cef60 0843
.org 0xcef62
	movs r1, #2	@ 000cef62 0221
.org 0xcef64
	orrs r0, r1	@ 000cef64 0843
.org 0xcef66
	strb r0, [r6, #10]	@ 000cef66 b072
.org 0xcef68
	ldr r1, [pc, #88]	@ 000cef68 1649
.org 0xcef6a
	adds r0, r6, #0	@ 000cef6a 301c
.org 0xcef6c
	bl 0x1cf00	@ 000cef6c 4df7c8ff
.org 0xcef70
	adds r0, r6, #0	@ 000cef70 301c
.org 0xcef72
	bl 0x1cff0	@ 000cef72 4ef73df8
.org 0xcef76
	movs r5, #0	@ 000cef76 0025
.org 0xcef78
	ldrb r1, [r6, #10]	@ 000cef78 b17a
.org 0xcef7a
	movs r0, #239	@ 000cef7a ef20
.org 0xcef7c
	ands r0, r1	@ 000cef7c 0840
.org 0xcef7e
	strb r0, [r6, #10]	@ 000cef7e b072
.org 0xcef80
	adds r0, r6, #0	@ 000cef80 301c
.org 0xcef82
	adds r0, #76	@ 000cef82 4c30
.org 0xcef84
	strb r5, [r0, #0]	@ 000cef84 0570
.org 0xcef86
	adds r2, r6, #0	@ 000cef86 321c
.org 0xcef88
	adds r2, #74	@ 000cef88 4a32
.org 0xcef8a
	ldrb r1, [r2, #0]	@ 000cef8a 1178
.org 0xcef8c
	movs r0, #17	@ 000cef8c 1120
.org 0xcef8e
	negs r0, r0	@ 000cef8e 4042
.org 0xcef90
	ands r0, r1	@ 000cef90 0840
.org 0xcef92
	strb r0, [r2, #0]	@ 000cef92 1070
.org 0xcef94
	ldrb r1, [r6, #10]	@ 000cef94 b17a
.org 0xcef96
	movs r0, #4	@ 000cef96 0420
.org 0xcef98
	orrs r0, r1	@ 000cef98 0843
.org 0xcef9a
	strb r0, [r6, #10]	@ 000cef9a b072
.org 0xcef9c
	adds r4, r6, #0	@ 000cef9c 341c
.org 0xcef9e
	adds r4, #116	@ 000cef9e 7434
.org 0xcefa0
	ldr r1, [pc, #36]	@ 000cefa0 0949
.org 0xcefa2
	adds r2, #10	@ 000cefa2 0a32
.org 0xcefa4
	adds r0, r4, #0	@ 000cefa4 201c
.org 0xcefa6
	movs r3, #8	@ 000cefa6 0823
.org 0xcefa8
	bl 0x5760	@ 000cefa8 36f7dafb
.org 0xcefac
	str r6, [r4, #44]	@ 000cefac e662
.org 0xcefae
	str r5, [r4, #36]	@ 000cefae 6562
.org 0xcefb0
	ldr r0, [r6, #88]	@ 000cefb0 b06d
.org 0xcefb2
	ldr r1, [pc, #24]	@ 000cefb2 0649
.org 0xcefb4
	adds r0, r0, r1	@ 000cefb4 4018
.org 0xcefb6
	str r0, [r6, #88]	@ 000cefb6 b065
.org 0xcefb8
	ldrb r0, [r6, #17]	@ 000cefb8 707c
.org 0xcefba
	cmp r0, #0	@ 000cefba 0028
.org 0xcefbc
	beq.n 0xcefd0	@ 000cefbc 08d0
.org 0xcefbe
	movs r0, #192	@ 000cefbe c020
.org 0xcefc0
	b.n 0xcefd4	@ 000cefc0 08e0
.org 0xcefc2
	.byte 0x00	@ 000cefc2 data
.org 0xcefc3
	.byte 0x00	@ 000cefc3 data
.org 0xcefc4
	.byte 0x07,0xc9,0x00,0x00	@ 000cefc4 data
.org 0xcefc8
	.byte 0x84,0x6c,0x86,0x08	@ 000cefc8 data
.org 0xcefcc
	.byte 0x00,0xf8,0xff,0xff	@ 000cefcc data
.org 0xcefd0
	movs r0, #192	@ 000cefd0 c020
.org 0xcefd2
	negs r0, r0	@ 000cefd2 4042
.org 0xcefd4
	str r0, [r6, #92]	@ 000cefd4 f065
.org 0xcefd6
	ldr r0, [pc, #48]	@ 000cefd6 0c48
.org 0xcefd8
	str r0, [r6, #96]	@ 000cefd8 3066
.org 0xcefda
	adds r1, r6, #0	@ 000cefda 311c
.org 0xcefdc
	adds r1, #180	@ 000cefdc b431
.org 0xcefde
	ldr r0, [r6, #84]	@ 000cefde 706d
.org 0xcefe0
	str r0, [r1, #0]	@ 000cefe0 0860
.org 0xcefe2
	adds r1, #4	@ 000cefe2 0431
.org 0xcefe4
	ldr r0, [r6, #88]	@ 000cefe4 b06d
.org 0xcefe6
	str r0, [r1, #0]	@ 000cefe6 0860
.org 0xcefe8
	ldr r1, [pc, #32]	@ 000cefe8 0849
.org 0xcefea
	ldrb r0, [r6, #9]	@ 000cefea 707a
.org 0xcefec
	lsls r0, r0, #2	@ 000cefec 8000
.org 0xcefee
	adds r0, r0, r1	@ 000cefee 4018
.org 0xceff0
	movs r1, #1	@ 000ceff0 0121
.org 0xceff2
	str r1, [r6, #12]	@ 000ceff2 f160
.org 0xceff4
	ldr r0, [r0, #0]	@ 000ceff4 0068
.org 0xceff6
	ldr r0, [r0, #4]	@ 000ceff6 4068
