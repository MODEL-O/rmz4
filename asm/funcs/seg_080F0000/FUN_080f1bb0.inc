@ FUN_080f1bb0  entry 0x080f1bb0  size 128
.thumb
.org 0xf1bb0
FUN_080f1bb0:
	push {r4, lr}	@ 000f1bb0 10b5
.org 0xf1bb2
	adds r4, r0, #0	@ 000f1bb2 041c
.org 0xf1bb4
	ldrb r0, [r4, #17]	@ 000f1bb4 607c
.org 0xf1bb6
	cmp r0, #1	@ 000f1bb6 0128
.org 0xf1bb8
	beq.n 0xf1bfc	@ 000f1bb8 20d0
.org 0xf1bba
	cmp r0, #1	@ 000f1bba 0128
.org 0xf1bbc
	bgt.n 0xf1bc4	@ 000f1bbc 02dc
.org 0xf1bbe
	cmp r0, #0	@ 000f1bbe 0028
.org 0xf1bc0
	beq.n 0xf1bca	@ 000f1bc0 03d0
.org 0xf1bc2
	b.n 0xf1c3a	@ 000f1bc2 3ae0
.org 0xf1bc4
	cmp r0, #2	@ 000f1bc4 0228
.org 0xf1bc6
	beq.n 0xf1c24	@ 000f1bc6 2dd0
.org 0xf1bc8
	b.n 0xf1c3a	@ 000f1bc8 37e0
.org 0xf1bca
	ldr r0, [pc, #72]	@ 000f1bca 1248
.org 0xf1bcc
	movs r2, #175	@ 000f1bcc af22
.org 0xf1bce
	lsls r2, r2, #1	@ 000f1bce 5200
.org 0xf1bd0
	adds r0, r0, r2	@ 000f1bd0 8018
.org 0xf1bd2
	ldr r1, [pc, #68]	@ 000f1bd2 1149
.org 0xf1bd4
	strh r1, [r0, #0]	@ 000f1bd4 0180
.org 0xf1bd6
	ldr r0, [pc, #68]	@ 000f1bd6 1148
.org 0xf1bd8
	adds r0, r0, r2	@ 000f1bd8 8018
.org 0xf1bda
	movs r1, #9	@ 000f1bda 0921
.org 0xf1bdc
	strh r1, [r0, #0]	@ 000f1bdc 0180
.org 0xf1bde
	ldr r1, [pc, #64]	@ 000f1bde 1049
.org 0xf1be0
	adds r0, r4, #0	@ 000f1be0 201c
.org 0xf1be2
	bl 0x1cf00	@ 000f1be2 2bf78df9
.org 0xf1be6
	ldr r0, [r4, #84]	@ 000f1be6 606d
.org 0xf1be8
	ldr r1, [r4, #88]	@ 000f1be8 a16d
.org 0xf1bea
	bl 0x8534	@ 000f1bea 16f7a3fc
.org 0xf1bee
	movs r1, #128	@ 000f1bee 8021
.org 0xf1bf0
	lsls r1, r1, #1	@ 000f1bf0 4900
.org 0xf1bf2
	adds r0, r0, r1	@ 000f1bf2 4018
.org 0xf1bf4
	str r0, [r4, #88]	@ 000f1bf4 a065
.org 0xf1bf6
	ldrb r0, [r4, #17]	@ 000f1bf6 607c
.org 0xf1bf8
	adds r0, #1	@ 000f1bf8 0130
.org 0xf1bfa
	strb r0, [r4, #17]	@ 000f1bfa 6074
.org 0xf1bfc
	adds r0, r4, #0	@ 000f1bfc 201c
.org 0xf1bfe
	bl 0x1cff0	@ 000f1bfe 2bf7f7f9
.org 0xf1c02
	ldr r0, [r4, #24]	@ 000f1c02 a069
.org 0xf1c04
	ldrb r1, [r0, #9]	@ 000f1c04 417a
.org 0xf1c06
	movs r0, #1	@ 000f1c06 0120
.org 0xf1c08
	ands r0, r1	@ 000f1c08 0840
.org 0xf1c0a
	cmp r0, #0	@ 000f1c0a 0028
.org 0xf1c0c
	beq.n 0xf1c3a	@ 000f1c0c 15d0
.org 0xf1c0e
	movs r0, #30	@ 000f1c0e 1e20
.org 0xf1c10
	strb r0, [r4, #18]	@ 000f1c10 a074
.org 0xf1c12
	b.n 0xf1c34	@ 000f1c12 0fe0
.org 0xf1c14
	.byte 0x40,0xe2,0x02,0x02	@ 000f1c14 data
.org 0xf1c18
	.byte 0xbd,0x03,0x00,0x00	@ 000f1c18 data
.org 0xf1c1c
	.byte 0x40,0xdc,0x02,0x02	@ 000f1c1c data
.org 0xf1c20
	.byte 0x1b,0xaf,0x00,0x00	@ 000f1c20 data
.org 0xf1c24
	ldr r1, [pc, #24]	@ 000f1c24 0649
.org 0xf1c26
	adds r0, r4, #0	@ 000f1c26 201c
.org 0xf1c28
	movs r2, #1	@ 000f1c28 0122
.org 0xf1c2a
	bl 0xed7f8	@ 000f1c2a fbf7e5fd
.org 0xf1c2e
	lsls r0, r0, #16	@ 000f1c2e 0004
