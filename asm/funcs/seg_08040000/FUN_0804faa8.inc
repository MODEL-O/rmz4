@ FUN_0804faa8  entry 0x0804faa8  size 300
.thumb
.org 0x4faa8
FUN_0804faa8:
	push {r4, r5, r6, lr}	@ 0004faa8 70b5
.org 0x4faaa
	adds r4, r0, #0	@ 0004faaa 041c
.org 0x4faac
	ldr r5, [r4, #40]	@ 0004faac a56a
.org 0x4faae
	ldrb r0, [r4, #18]	@ 0004faae a07c
.org 0x4fab0
	adds r1, r0, #1	@ 0004fab0 411c
.org 0x4fab2
	strb r1, [r4, #18]	@ 0004fab2 a174
.org 0x4fab4
	lsls r0, r0, #24	@ 0004fab4 0006
.org 0x4fab6
	lsrs r0, r0, #24	@ 0004fab6 000e
.org 0x4fab8
	cmp r0, #8	@ 0004fab8 0828
.org 0x4faba
	bhi.n 0x4faca	@ 0004faba 06d8
.org 0x4fabc
	movs r1, #168	@ 0004fabc a821
.org 0x4fabe
	lsls r1, r1, #1	@ 0004fabe 4900
.org 0x4fac0
	adds r0, r5, r1	@ 0004fac0 6818
.org 0x4fac2
	ldrb r1, [r0, #0]	@ 0004fac2 0178
.org 0x4fac4
	adds r6, r0, #0	@ 0004fac4 061c
.org 0x4fac6
	cmp r1, #255	@ 0004fac6 ff29
.org 0x4fac8
	bne.n 0x4fb18	@ 0004fac8 26d1
.org 0x4faca
	ldr r0, [pc, #68]	@ 0004faca 1148
.org 0x4facc
	adds r2, r5, r0	@ 0004facc 2a18
.org 0x4face
	ldrb r0, [r2, #0]	@ 0004face 1078
.org 0x4fad0
	movs r1, #64	@ 0004fad0 4021
.org 0x4fad2
	orrs r0, r1	@ 0004fad2 0843
.org 0x4fad4
	strb r0, [r2, #0]	@ 0004fad4 1070
.org 0x4fad6
	ldrb r1, [r4, #10]	@ 0004fad6 a17a
.org 0x4fad8
	movs r0, #254	@ 0004fad8 fe20
.org 0x4fada
	ands r0, r1	@ 0004fada 0840
.org 0x4fadc
	movs r2, #0	@ 0004fadc 0022
.org 0x4fade
	movs r1, #253	@ 0004fade fd21
.org 0x4fae0
	ands r0, r1	@ 0004fae0 0840
.org 0x4fae2
	strb r0, [r4, #10]	@ 0004fae2 a072
.org 0x4fae4
	adds r0, r4, #0	@ 0004fae4 201c
.org 0x4fae6
	adds r0, #140	@ 0004fae6 8c30
.org 0x4fae8
	str r2, [r0, #0]	@ 0004fae8 0260
.org 0x4faea
	adds r0, #4	@ 0004faea 0430
.org 0x4faec
	str r2, [r0, #0]	@ 0004faec 0260
.org 0x4faee
	adds r0, #4	@ 0004faee 0430
.org 0x4faf0
	strb r2, [r0, #0]	@ 0004faf0 0270
.org 0x4faf2
	ldrb r1, [r4, #10]	@ 0004faf2 a17a
.org 0x4faf4
	movs r0, #251	@ 0004faf4 fb20
.org 0x4faf6
	ands r0, r1	@ 0004faf6 0840
.org 0x4faf8
	strb r0, [r4, #10]	@ 0004faf8 a072
.org 0x4fafa
	ldr r1, [pc, #24]	@ 0004fafa 0649
.org 0x4fafc
	ldrb r0, [r4, #9]	@ 0004fafc 607a
.org 0x4fafe
	lsls r0, r0, #2	@ 0004fafe 8000
.org 0x4fb00
	adds r0, r0, r1	@ 0004fb00 4018
.org 0x4fb02
	movs r1, #3	@ 0004fb02 0321
.org 0x4fb04
	str r1, [r4, #12]	@ 0004fb04 e160
.org 0x4fb06
	ldr r0, [r0, #0]	@ 0004fb06 0068
.org 0x4fb08
	ldr r0, [r0, #12]	@ 0004fb08 c068
.org 0x4fb0a
	str r0, [r4, #20]	@ 0004fb0a 6061
.org 0x4fb0c
	b.n 0x4fbe6	@ 0004fb0c 6be0
.org 0x4fb0e
	.byte 0x00	@ 0004fb0e data
.org 0x4fb0f
	.byte 0x00	@ 0004fb0f data
.org 0x4fb10
	.byte 0x53,0x01,0x00,0x00	@ 0004fb10 data
.org 0x4fb14
	.byte 0xf8,0x39,0x85,0x08	@ 0004fb14 data
.org 0x4fb18
	adds r0, r4, #0	@ 0004fb18 201c
.org 0x4fb1a
	adds r0, #140	@ 0004fb1a 8c30
.org 0x4fb1c
	ldr r0, [r0, #0]	@ 0004fb1c 0068
.org 0x4fb1e
	movs r1, #4	@ 0004fb1e 0421
.org 0x4fb20
	ands r0, r1	@ 0004fb20 0840
.org 0x4fb22
	cmp r0, #0	@ 0004fb22 0028
.org 0x4fb24
	beq.n 0x4fb50	@ 0004fb24 14d0
.org 0x4fb26
	ldr r1, [pc, #32]	@ 0004fb26 0849
.org 0x4fb28
	adds r2, r5, r1	@ 0004fb28 6a18
.org 0x4fb2a
	ldrb r0, [r2, #0]	@ 0004fb2a 1078
.org 0x4fb2c
	movs r1, #64	@ 0004fb2c 4021
.org 0x4fb2e
	orrs r0, r1	@ 0004fb2e 0843
.org 0x4fb30
	strb r0, [r2, #0]	@ 0004fb30 1070
.org 0x4fb32
	ldr r1, [pc, #24]	@ 0004fb32 0649
.org 0x4fb34
	ldrb r0, [r4, #9]	@ 0004fb34 607a
.org 0x4fb36
	lsls r0, r0, #2	@ 0004fb36 8000
.org 0x4fb38
	adds r0, r0, r1	@ 0004fb38 4018
.org 0x4fb3a
	movs r1, #2	@ 0004fb3a 0221
.org 0x4fb3c
	str r1, [r4, #12]	@ 0004fb3c e160
.org 0x4fb3e
	ldr r0, [r0, #0]	@ 0004fb3e 0068
.org 0x4fb40
	ldr r0, [r0, #8]	@ 0004fb40 8068
.org 0x4fb42
	str r0, [r4, #20]	@ 0004fb42 6061
.org 0x4fb44
	b.n 0x4fbe6	@ 0004fb44 4fe0
.org 0x4fb46
	.byte 0x00	@ 0004fb46 data
.org 0x4fb47
	.byte 0x00	@ 0004fb47 data
.org 0x4fb48
	.byte 0x53,0x01,0x00,0x00	@ 0004fb48 data
.org 0x4fb4c
	.byte 0xf8,0x39,0x85,0x08	@ 0004fb4c data
.org 0x4fb50
	adds r0, r4, #0	@ 0004fb50 201c
.org 0x4fb52
	bl 0x1cff0	@ 0004fb52 cdf74dfa
.org 0x4fb56
	ldrb r0, [r5, #10]	@ 0004fb56 a87a
.org 0x4fb58
	lsrs r2, r0, #4	@ 0004fb58 0209
.org 0x4fb5a
	movs r0, #1	@ 0004fb5a 0120
.org 0x4fb5c
	ands r2, r0	@ 0004fb5c 0240
.org 0x4fb5e
	cmp r2, #0	@ 0004fb5e 002a
.org 0x4fb60
	beq.n 0x4fb6a	@ 0004fb60 03d0
.org 0x4fb62
	ldrb r1, [r4, #10]	@ 0004fb62 a17a
.org 0x4fb64
	movs r0, #16	@ 0004fb64 1020
.org 0x4fb66
	orrs r0, r1	@ 0004fb66 0843
.org 0x4fb68
	b.n 0x4fb70	@ 0004fb68 02e0
.org 0x4fb6a
	ldrb r1, [r4, #10]	@ 0004fb6a a17a
.org 0x4fb6c
	movs r0, #239	@ 0004fb6c ef20
.org 0x4fb6e
	ands r0, r1	@ 0004fb6e 0840
.org 0x4fb70
	strb r0, [r4, #10]	@ 0004fb70 a072
.org 0x4fb72
	adds r1, r2, #0	@ 0004fb72 111c
.org 0x4fb74
	adds r0, r4, #0	@ 0004fb74 201c
.org 0x4fb76
	adds r0, #76	@ 0004fb76 4c30
.org 0x4fb78
	strb r1, [r0, #0]	@ 0004fb78 0170
.org 0x4fb7a
	adds r3, r4, #0	@ 0004fb7a 231c
.org 0x4fb7c
	adds r3, #74	@ 0004fb7c 4a33
.org 0x4fb7e
	lsls r1, r1, #4	@ 0004fb7e 0901
.org 0x4fb80
	ldrb r2, [r3, #0]	@ 0004fb80 1a78
.org 0x4fb82
	movs r0, #17	@ 0004fb82 1120
.org 0x4fb84
	negs r0, r0	@ 0004fb84 4042
.org 0x4fb86
	ands r0, r2	@ 0004fb86 1040
.org 0x4fb88
	orrs r0, r1	@ 0004fb88 0843
.org 0x4fb8a
	strb r0, [r3, #0]	@ 0004fb8a 1870
.org 0x4fb8c
	adds r0, r5, #0	@ 0004fb8c 281c
.org 0x4fb8e
	adds r0, #113	@ 0004fb8e 7130
.org 0x4fb90
	ldrb r0, [r0, #0]	@ 0004fb90 0078
.org 0x4fb92
	lsls r0, r0, #24	@ 0004fb92 0006
.org 0x4fb94
	asrs r0, r0, #24	@ 0004fb94 0016
.org 0x4fb96
	movs r3, #0	@ 0004fb96 0023
.org 0x4fb98
	cmp r0, #3	@ 0004fb98 0328
.org 0x4fb9a
	bne.n 0x4fb9e	@ 0004fb9a 00d1
.org 0x4fb9c
	movs r3, #1	@ 0004fb9c 0123
.org 0x4fb9e
	ldrb r1, [r4, #10]	@ 0004fb9e a17a
.org 0x4fba0
	movs r0, #16	@ 0004fba0 1020
.org 0x4fba2
	ands r0, r1	@ 0004fba2 0840
.org 0x4fba4
	cmp r0, #0	@ 0004fba4 0028
.org 0x4fba6
	beq.n 0x4fbc0	@ 0004fba6 0bd0
.org 0x4fba8
	ldr r2, [pc, #16]	@ 0004fba8 044a
.org 0x4fbaa
	lsls r3, r3, #3	@ 0004fbaa db00
.org 0x4fbac
	ldrb r0, [r6, #0]	@ 0004fbac 3078
.org 0x4fbae
	lsls r0, r0, #4	@ 0004fbae 0001
.org 0x4fbb0
	adds r0, r3, r0	@ 0004fbb0 1818
.org 0x4fbb2
	adds r0, r0, r2	@ 0004fbb2 8018
.org 0x4fbb4
	ldr r1, [r5, #84]	@ 0004fbb4 696d
.org 0x4fbb6
	ldr r0, [r0, #0]	@ 0004fbb6 0068
.org 0x4fbb8
	subs r1, r1, r0	@ 0004fbb8 091a
.org 0x4fbba
	b.n 0x4fbd2	@ 0004fbba 0ae0
.org 0x4fbbc
	.byte 0x4c,0x35,0x85,0x08	@ 0004fbbc data
.org 0x4fbc0
	ldr r2, [pc, #40]	@ 0004fbc0 0a4a
.org 0x4fbc2
	lsls r3, r3, #3	@ 0004fbc2 db00
.org 0x4fbc4
	ldrb r0, [r6, #0]	@ 0004fbc4 3078
.org 0x4fbc6
	lsls r0, r0, #4	@ 0004fbc6 0001
.org 0x4fbc8
	adds r0, r3, r0	@ 0004fbc8 1818
.org 0x4fbca
	adds r0, r0, r2	@ 0004fbca 8018
.org 0x4fbcc
	ldr r1, [r5, #84]	@ 0004fbcc 696d
.org 0x4fbce
	ldr r0, [r0, #0]	@ 0004fbce 0068
.org 0x4fbd0
	adds r1, r1, r0	@ 0004fbd0 0918
.org 0x4fbd2
	str r1, [r4, #84]	@ 0004fbd2 6165
