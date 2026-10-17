@ FUN_080b1958  entry 0x080b1958  size 150
.thumb
.org 0xb1958
FUN_080b1958:
	push {r4, r5, lr}	@ 000b1958 30b5
.org 0xb195a
	adds r4, r0, #0	@ 000b195a 041c
.org 0xb195c
	ldrb r5, [r4, #14]	@ 000b195c a57b
.org 0xb195e
	cmp r5, #0	@ 000b195e 002d
.org 0xb1960
	bne.n 0xb1970	@ 000b1960 06d1
.org 0xb1962
	ldr r1, [pc, #96]	@ 000b1962 1849
.org 0xb1964
	bl 0x1cf00	@ 000b1964 6bf7ccfa
.org 0xb1968
	strb r5, [r4, #18]	@ 000b1968 a574
.org 0xb196a
	ldrb r0, [r4, #14]	@ 000b196a a07b
.org 0xb196c
	adds r0, #1	@ 000b196c 0130
.org 0xb196e
	strb r0, [r4, #14]	@ 000b196e a073
.org 0xb1970
	ldrb r0, [r4, #14]	@ 000b1970 a07b
.org 0xb1972
	cmp r0, #1	@ 000b1972 0128
.org 0xb1974
	bne.n 0xb198e	@ 000b1974 0bd1
.org 0xb1976
	adds r0, r4, #0	@ 000b1976 201c
.org 0xb1978
	adds r0, #113	@ 000b1978 7130
.org 0xb197a
	ldrb r0, [r0, #0]	@ 000b197a 0078
.org 0xb197c
	lsls r0, r0, #24	@ 000b197c 0006
.org 0xb197e
	asrs r0, r0, #24	@ 000b197e 0016
.org 0xb1980
	cmp r0, #3	@ 000b1980 0328
.org 0xb1982
	bne.n 0xb198e	@ 000b1982 04d1
.org 0xb1984
	adds r0, r4, #0	@ 000b1984 201c
.org 0xb1986
	adds r0, #116	@ 000b1986 7430
.org 0xb1988
	ldr r1, [pc, #60]	@ 000b1988 0f49
.org 0xb198a
	bl 0x5784	@ 000b198a 53f7fbfe
.org 0xb198e
	adds r0, r4, #0	@ 000b198e 201c
.org 0xb1990
	bl 0xb1a8c	@ 000b1990 00f07cf8
.org 0xb1994
	lsls r0, r0, #24	@ 000b1994 0006
.org 0xb1996
	cmp r0, #0	@ 000b1996 0028
.org 0xb1998
	beq.n 0xb19f8	@ 000b1998 2ed0
.org 0xb199a
	adds r0, r4, #0	@ 000b199a 201c
.org 0xb199c
	adds r0, #115	@ 000b199c 7330
.org 0xb199e
	ldrb r0, [r0, #0]	@ 000b199e 0078
.org 0xb19a0
	cmp r0, #3	@ 000b19a0 0328
.org 0xb19a2
	bne.n 0xb19f8	@ 000b19a2 29d1
.org 0xb19a4
	ldrb r3, [r4, #14]	@ 000b19a4 a37b
.org 0xb19a6
	cmp r3, #1	@ 000b19a6 012b
.org 0xb19a8
	bne.n 0xb19d0	@ 000b19a8 12d1
.org 0xb19aa
	adds r0, r4, #0	@ 000b19aa 201c
.org 0xb19ac
	adds r0, #84	@ 000b19ac 5430
.org 0xb19ae
	ldrb r1, [r4, #16]	@ 000b19ae 217c
.org 0xb19b0
	ldrb r2, [r4, #10]	@ 000b19b0 a27a
.org 0xb19b2
	lsrs r2, r2, #4	@ 000b19b2 1209
.org 0xb19b4
	ands r2, r3	@ 000b19b4 1a40
.org 0xb19b6
	bl 0xce700	@ 000b19b6 1cf0a3fe
.org 0xb19ba
	movs r0, #45	@ 000b19ba 2d20
.org 0xb19bc
	bl 0x2b10	@ 000b19bc 51f7a8f8
.org 0xb19c0
	ldr r1, [pc, #8]	@ 000b19c0 0249
.org 0xb19c2
	b.n 0xb19e0	@ 000b19c2 0de0
.org 0xb19c4
	.byte 0x01,0xbb,0x00,0x00	@ 000b19c4 data
.org 0xb19c8
	.byte 0xa0,0x34,0x86,0x08	@ 000b19c8 data
.org 0xb19cc
	.byte 0x03,0xbb,0x00,0x00	@ 000b19cc data
.org 0xb19d0
	cmp r3, #2	@ 000b19d0 022b
.org 0xb19d2
	bne.n 0xb19da	@ 000b19d2 02d1
.org 0xb19d4
	movs r0, #60	@ 000b19d4 3c20
.org 0xb19d6
	strb r0, [r4, #18]	@ 000b19d6 a074
.org 0xb19d8
	b.n 0xb19f2	@ 000b19d8 0be0
.org 0xb19da
	cmp r3, #3	@ 000b19da 032b
.org 0xb19dc
	bne.n 0xb19ec	@ 000b19dc 06d1
.org 0xb19de
	ldr r1, [pc, #8]	@ 000b19de 0249
.org 0xb19e0
	adds r0, r4, #0	@ 000b19e0 201c
.org 0xb19e2
	bl 0x1cf00	@ 000b19e2 6bf78dfa
.org 0xb19e6
	b.n 0xb19f2	@ 000b19e6 04e0
.org 0xb19e8
	.byte 0x02,0xbb,0x00,0x00	@ 000b19e8 data
.org 0xb19ec
	movs r0, #0	@ 000b19ec 0020
