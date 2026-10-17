@ FUN_08076bd0  entry 0x08076bd0  size 176
.thumb
.org 0x76bd0
FUN_08076bd0:
	push {r4, lr}	@ 00076bd0 10b5
.org 0x76bd2
	adds r4, r0, #0	@ 00076bd2 041c
.org 0x76bd4
	ldrb r0, [r4, #14]	@ 00076bd4 a07b
.org 0x76bd6
	cmp r0, #0	@ 00076bd6 0028
.org 0x76bd8
	bne.n 0x76c12	@ 00076bd8 1bd1
.org 0x76bda
	adds r0, r4, #0	@ 00076bda 201c
.org 0x76bdc
	bl 0x1cc9c	@ 00076bdc a6f75ef8
.org 0x76be0
	adds r0, r4, #0	@ 00076be0 201c
.org 0x76be2
	bl 0x1ceec	@ 00076be2 a6f783f9
.org 0x76be6
	ldr r1, [pc, #116]	@ 00076be6 1d49
.org 0x76be8
	adds r0, r4, #0	@ 00076be8 201c
.org 0x76bea
	bl 0x1cf00	@ 00076bea a6f789f9
.org 0x76bee
	movs r0, #219	@ 00076bee db20
.org 0x76bf0
	bl 0x2b5c	@ 00076bf0 8bf7b4ff
.org 0x76bf4
	adds r0, r4, #0	@ 00076bf4 201c
.org 0x76bf6
	adds r0, #116	@ 00076bf6 7430
.org 0x76bf8
	ldr r1, [pc, #100]	@ 00076bf8 1949
.org 0x76bfa
	bl 0x5784	@ 00076bfa 8ef7c3fd
.org 0x76bfe
	ldr r0, [r4, #88]	@ 00076bfe a06d
.org 0x76c00
	movs r1, #156	@ 00076c00 9c21
.org 0x76c02
	lsls r1, r1, #6	@ 00076c02 8901
.org 0x76c04
	adds r0, r0, r1	@ 00076c04 4018
.org 0x76c06
	str r0, [r4, #88]	@ 00076c06 a065
.org 0x76c08
	movs r0, #32	@ 00076c08 2020
.org 0x76c0a
	strb r0, [r4, #18]	@ 00076c0a a074
.org 0x76c0c
	ldrb r0, [r4, #14]	@ 00076c0c a07b
.org 0x76c0e
	adds r0, #1	@ 00076c0e 0130
.org 0x76c10
	strb r0, [r4, #14]	@ 00076c10 a073
.org 0x76c12
	adds r0, r4, #0	@ 00076c12 201c
.org 0x76c14
	bl 0x1cff0	@ 00076c14 a6f7ecf9
.org 0x76c18
	movs r3, #0	@ 00076c18 0023
.org 0x76c1a
	ldr r0, [pc, #72]	@ 00076c1a 1248
.org 0x76c1c
	ldr r2, [r0, #0]	@ 00076c1c 0268
.org 0x76c1e
	ldr r1, [r4, #84]	@ 00076c1e 616d
.org 0x76c20
	ldr r0, [r2, #84]	@ 00076c20 506d
.org 0x76c22
	cmp r1, r0	@ 00076c22 8142
.org 0x76c24
	bge.n 0x76c28	@ 00076c24 00da
.org 0x76c26
	movs r3, #1	@ 00076c26 0123
.org 0x76c28
	adds r0, r4, #0	@ 00076c28 201c
.org 0x76c2a
	adds r0, #76	@ 00076c2a 4c30
.org 0x76c2c
	strb r3, [r0, #0]	@ 00076c2c 0370
.org 0x76c2e
	movs r3, #0	@ 00076c2e 0023
.org 0x76c30
	ldr r1, [r4, #84]	@ 00076c30 616d
.org 0x76c32
	ldr r0, [r2, #84]	@ 00076c32 506d
.org 0x76c34
	cmp r1, r0	@ 00076c34 8142
.org 0x76c36
	bge.n 0x76c3a	@ 00076c36 00da
.org 0x76c38
	movs r3, #1	@ 00076c38 0123
.org 0x76c3a
	movs r0, #74	@ 00076c3a 4a20
.org 0x76c3c
	adds r0, r0, r4	@ 00076c3c 0019
.org 0x76c3e
	mov ip, r0	@ 00076c3e 8446
.org 0x76c40
	lsls r2, r3, #4	@ 00076c40 1a01
.org 0x76c42
	ldrb r1, [r0, #0]	@ 00076c42 0178
.org 0x76c44
	movs r0, #17	@ 00076c44 1120
.org 0x76c46
	negs r0, r0	@ 00076c46 4042
.org 0x76c48
	ands r0, r1	@ 00076c48 0840
.org 0x76c4a
	orrs r0, r2	@ 00076c4a 1043
.org 0x76c4c
	mov r1, ip	@ 00076c4c 6146
.org 0x76c4e
	strb r0, [r1, #0]	@ 00076c4e 0870
.org 0x76c50
	cmp r3, #0	@ 00076c50 002b
.org 0x76c52
	beq.n 0x76c68	@ 00076c52 09d0
.org 0x76c54
	ldrb r0, [r4, #10]	@ 00076c54 a07a
.org 0x76c56
	movs r1, #16	@ 00076c56 1021
.org 0x76c58
	orrs r0, r1	@ 00076c58 0843
.org 0x76c5a
	b.n 0x76c6e	@ 00076c5a 08e0
.org 0x76c5c
	.byte 0x09,0xaf,0x00,0x00	@ 00076c5c data
.org 0x76c60
	.byte 0x0c,0xcf,0x85,0x08	@ 00076c60 data
.org 0x76c64
	.byte 0xf0,0xdb,0x02,0x02	@ 00076c64 data
.org 0x76c68
	ldrb r1, [r4, #10]	@ 00076c68 a17a
.org 0x76c6a
	movs r0, #239	@ 00076c6a ef20
.org 0x76c6c
	ands r0, r1	@ 00076c6c 0840
.org 0x76c6e
	strb r0, [r4, #10]	@ 00076c6e a072
.org 0x76c70
	ldrb r0, [r4, #18]	@ 00076c70 a07c
.org 0x76c72
	subs r0, #1	@ 00076c72 0138
.org 0x76c74
	strb r0, [r4, #18]	@ 00076c74 a074
.org 0x76c76
	lsls r0, r0, #24	@ 00076c76 0006
.org 0x76c78
	lsrs r0, r0, #24	@ 00076c78 000e
.org 0x76c7a
	cmp r0, #255	@ 00076c7a ff28
.org 0x76c7c
	bne.n 0x76c86	@ 00076c7c 03d1
.org 0x76c7e
	movs r0, #17	@ 00076c7e 1120
