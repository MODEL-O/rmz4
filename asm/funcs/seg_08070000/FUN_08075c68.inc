@ FUN_08075c68  entry 0x08075c68  size 176
.thumb
.org 0x75c68
FUN_08075c68:
	push {r4, r5, r6, lr}	@ 00075c68 70b5
.org 0x75c6a
	adds r4, r0, #0	@ 00075c6a 041c
.org 0x75c6c
	ldrb r0, [r4, #14]	@ 00075c6c a07b
.org 0x75c6e
	cmp r0, #0	@ 00075c6e 0028
.org 0x75c70
	bne.n 0x75ca0	@ 00075c70 16d1
.org 0x75c72
	ldr r1, [pc, #92]	@ 00075c72 1749
.org 0x75c74
	adds r0, r4, #0	@ 00075c74 201c
.org 0x75c76
	bl 0x1cf00	@ 00075c76 a7f743f9
.org 0x75c7a
	movs r0, #216	@ 00075c7a d820
.org 0x75c7c
	bl 0x2b10	@ 00075c7c 8cf748ff
.org 0x75c80
	adds r0, r4, #0	@ 00075c80 201c
.org 0x75c82
	adds r0, #116	@ 00075c82 7430
.org 0x75c84
	ldr r1, [pc, #76]	@ 00075c84 1349
.org 0x75c86
	bl 0x5784	@ 00075c86 8ff77dfd
.org 0x75c8a
	adds r1, r4, #0	@ 00075c8a 211c
.org 0x75c8c
	adds r1, #180	@ 00075c8c b431
.org 0x75c8e
	movs r2, #0	@ 00075c8e 0022
.org 0x75c90
	movs r0, #128	@ 00075c90 8020
.org 0x75c92
	strh r0, [r1, #32]	@ 00075c92 0884
.org 0x75c94
	movs r0, #20	@ 00075c94 1420
.org 0x75c96
	strb r0, [r4, #18]	@ 00075c96 a074
.org 0x75c98
	strb r2, [r4, #15]	@ 00075c98 e273
.org 0x75c9a
	ldrb r0, [r4, #14]	@ 00075c9a a07b
.org 0x75c9c
	adds r0, #1	@ 00075c9c 0130
.org 0x75c9e
	strb r0, [r4, #14]	@ 00075c9e a073
.org 0x75ca0
	adds r0, r4, #0	@ 00075ca0 201c
.org 0x75ca2
	bl 0x1cff0	@ 00075ca2 a7f7a5f9
.org 0x75ca6
	ldrb r1, [r4, #15]	@ 00075ca6 e17b
.org 0x75ca8
	adds r5, r1, #0	@ 00075ca8 0d1c
.org 0x75caa
	cmp r5, #0	@ 00075caa 002d
.org 0x75cac
	bne.n 0x75cd8	@ 00075cac 14d1
.org 0x75cae
	adds r0, r4, #0	@ 00075cae 201c
.org 0x75cb0
	adds r0, #113	@ 00075cb0 7130
.org 0x75cb2
	ldrb r0, [r0, #0]	@ 00075cb2 0078
.org 0x75cb4
	lsls r0, r0, #24	@ 00075cb4 0006
.org 0x75cb6
	asrs r0, r0, #24	@ 00075cb6 0016
.org 0x75cb8
	cmp r0, #3	@ 00075cb8 0328
.org 0x75cba
	ble.n 0x75d1a	@ 00075cba 2edd
.org 0x75cbc
	ldrb r0, [r4, #18]	@ 00075cbc a07c
.org 0x75cbe
	subs r0, #1	@ 00075cbe 0138
.org 0x75cc0
	strb r0, [r4, #18]	@ 00075cc0 a074
.org 0x75cc2
	lsls r0, r0, #24	@ 00075cc2 0006
.org 0x75cc4
	lsrs r0, r0, #24	@ 00075cc4 000e
.org 0x75cc6
	cmp r0, #255	@ 00075cc6 ff28
.org 0x75cc8
	bne.n 0x75d1a	@ 00075cc8 27d1
.org 0x75cca
	adds r0, r1, #1	@ 00075cca 481c
.org 0x75ccc
	strb r0, [r4, #15]	@ 00075ccc e073
.org 0x75cce
	b.n 0x75d1a	@ 00075cce 24e0
.org 0x75cd0
	.byte 0x11,0xaf,0x00,0x00	@ 00075cd0 data
.org 0x75cd4
	.byte 0xac,0xce,0x85,0x08	@ 00075cd4 data
.org 0x75cd8
	cmp r5, #1	@ 00075cd8 012d
.org 0x75cda
	bne.n 0x75d1a	@ 00075cda 1ed1
.org 0x75cdc
	adds r6, r4, #0	@ 00075cdc 261c
.org 0x75cde
	adds r6, #180	@ 00075cde b436
.org 0x75ce0
	ldrh r0, [r6, #32]	@ 00075ce0 308c
.org 0x75ce2
	movs r1, #6	@ 00075ce2 0621
.org 0x75ce4
	bl 0x129198	@ 00075ce4 b3f058fa
.org 0x75ce8
	lsls r0, r0, #16	@ 00075ce8 0004
.org 0x75cea
	cmp r0, #0	@ 00075cea 0028
.org 0x75cec
	bne.n 0x75d04	@ 00075cec 0ad1
.org 0x75cee
	movs r0, #158	@ 00075cee 9e20
.org 0x75cf0
	lsls r0, r0, #1	@ 00075cf0 4000
.org 0x75cf2
	bl 0x2b10	@ 00075cf2 8cf70dff
.org 0x75cf6
	ldrb r2, [r4, #10]	@ 00075cf6 a27a
.org 0x75cf8
	lsrs r2, r2, #4	@ 00075cf8 1209
.org 0x75cfa
	ands r2, r5	@ 00075cfa 2a40
.org 0x75cfc
	adds r0, r4, #0	@ 00075cfc 201c
.org 0x75cfe
	movs r1, #1	@ 00075cfe 0121
.org 0x75d00
	bl 0xcbf7c	@ 00075d00 56f03cf9
.org 0x75d04
	ldrh r0, [r6, #32]	@ 00075d04 308c
.org 0x75d06
	subs r0, #1	@ 00075d06 0138
.org 0x75d08
	strh r0, [r6, #32]	@ 00075d08 3084
.org 0x75d0a
	lsls r0, r0, #16	@ 00075d0a 0004
.org 0x75d0c
	ldr r1, [pc, #16]	@ 00075d0c 0449
.org 0x75d0e
	cmp r0, r1	@ 00075d0e 8842
.org 0x75d10
	bne.n 0x75d1a	@ 00075d10 03d1
.org 0x75d12
	movs r0, #12	@ 00075d12 0c20
.org 0x75d14
	strb r0, [r4, #13]	@ 00075d14 6073
.org 0x75d16
	movs r0, #0	@ 00075d16 0020
