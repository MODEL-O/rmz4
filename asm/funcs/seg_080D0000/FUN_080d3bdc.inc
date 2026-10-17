@ FUN_080d3bdc  entry 0x080d3bdc  size 164
.thumb
.org 0xd3bdc
FUN_080d3bdc:
	push {r4, r5, lr}	@ 000d3bdc 30b5
.org 0xd3bde
	adds r4, r0, #0	@ 000d3bde 041c
.org 0xd3be0
	ldr r5, [r4, #40]	@ 000d3be0 a56a
.org 0xd3be2
	bl 0x1cc9c	@ 000d3be2 49f75bf8
.org 0xd3be6
	ldrb r1, [r4, #10]	@ 000d3be6 a17a
.org 0xd3be8
	movs r0, #2	@ 000d3be8 0220
.org 0xd3bea
	orrs r0, r1	@ 000d3bea 0843
.org 0xd3bec
	strb r0, [r4, #10]	@ 000d3bec a072
.org 0xd3bee
	adds r0, r4, #0	@ 000d3bee 201c
.org 0xd3bf0
	movs r1, #19	@ 000d3bf0 1321
.org 0xd3bf2
	bl 0x1cf00	@ 000d3bf2 49f785f9
.org 0xd3bf6
	ldrb r1, [r4, #10]	@ 000d3bf6 a17a
.org 0xd3bf8
	movs r0, #1	@ 000d3bf8 0120
.org 0xd3bfa
	orrs r0, r1	@ 000d3bfa 0843
.org 0xd3bfc
	movs r2, #0	@ 000d3bfc 0022
.org 0xd3bfe
	movs r1, #239	@ 000d3bfe ef21
.org 0xd3c00
	ands r0, r1	@ 000d3c00 0840
.org 0xd3c02
	strb r0, [r4, #10]	@ 000d3c02 a072
.org 0xd3c04
	adds r0, r4, #0	@ 000d3c04 201c
.org 0xd3c06
	adds r0, #76	@ 000d3c06 4c30
.org 0xd3c08
	strb r2, [r0, #0]	@ 000d3c08 0270
.org 0xd3c0a
	adds r2, r4, #0	@ 000d3c0a 221c
.org 0xd3c0c
	adds r2, #74	@ 000d3c0c 4a32
.org 0xd3c0e
	ldrb r1, [r2, #0]	@ 000d3c0e 1178
.org 0xd3c10
	movs r0, #17	@ 000d3c10 1120
.org 0xd3c12
	negs r0, r0	@ 000d3c12 4042
.org 0xd3c14
	ands r0, r1	@ 000d3c14 0840
.org 0xd3c16
	strb r0, [r2, #0]	@ 000d3c16 1070
.org 0xd3c18
	adds r0, r5, #0	@ 000d3c18 281c
.org 0xd3c1a
	adds r0, #140	@ 000d3c1a 8c30
.org 0xd3c1c
	ldr r0, [r0, #0]	@ 000d3c1c 0068
.org 0xd3c1e
	movs r1, #128	@ 000d3c1e 8021
.org 0xd3c20
	lsls r1, r1, #2	@ 000d3c20 8900
.org 0xd3c22
	ands r0, r1	@ 000d3c22 0840
.org 0xd3c24
	cmp r0, #0	@ 000d3c24 0028
.org 0xd3c26
	bne.n 0xd3c3a	@ 000d3c26 08d1
.org 0xd3c28
	adds r0, r5, #0	@ 000d3c28 281c
.org 0xd3c2a
	adds r0, #164	@ 000d3c2a a430
.org 0xd3c2c
	movs r1, #0	@ 000d3c2c 0021
.org 0xd3c2e
	ldrsh r0, [r0, r1]	@ 000d3c2e 405e
.org 0xd3c30
	cmp r0, #0	@ 000d3c30 0028
.org 0xd3c32
	beq.n 0xd3c3a	@ 000d3c32 02d0
.org 0xd3c34
	movs r0, #15	@ 000d3c34 0f20
.org 0xd3c36
	bl 0x2b10	@ 000d3c36 2ef76bff
.org 0xd3c3a
	ldr r0, [r5, #84]	@ 000d3c3a 686d
.org 0xd3c3c
	str r0, [r4, #84]	@ 000d3c3c 6065
.org 0xd3c3e
	ldr r2, [pc, #28]	@ 000d3c3e 074a
.org 0xd3c40
	movs r1, #232	@ 000d3c40 e821
.org 0xd3c42
	lsls r1, r1, #1	@ 000d3c42 4900
.org 0xd3c44
	adds r0, r2, r1	@ 000d3c44 5018
.org 0xd3c46
	ldrh r1, [r0, #0]	@ 000d3c46 0188
.org 0xd3c48
	movs r0, #127	@ 000d3c48 7f20
.org 0xd3c4a
	ands r0, r1	@ 000d3c4a 0840
.org 0xd3c4c
	cmp r0, #2	@ 000d3c4c 0228
.org 0xd3c4e
	bne.n 0xd3c60	@ 000d3c4e 07d1
.org 0xd3c50
	adds r0, r5, #0	@ 000d3c50 281c
.org 0xd3c52
	adds r0, #84	@ 000d3c52 5430
.org 0xd3c54
	bl 0x7b84	@ 000d3c54 33f796ff
.org 0xd3c58
	b.n 0xd3c66	@ 000d3c58 05e0
.org 0xd3c5a
	.byte 0x00	@ 000d3c5a data
.org 0xd3c5b
	.byte 0x00	@ 000d3c5b data
.org 0xd3c5c
	.byte 0xb0,0x0a,0x00,0x02	@ 000d3c5c data
.org 0xd3c60
	ldr r1, [pc, #36]	@ 000d3c60 0949
.org 0xd3c62
	adds r0, r2, r1	@ 000d3c62 5018
.org 0xd3c64
	ldr r0, [r0, #0]	@ 000d3c64 0068
.org 0xd3c66
	str r0, [r4, #88]	@ 000d3c66 a065
.org 0xd3c68
	ldr r1, [pc, #32]	@ 000d3c68 0849
.org 0xd3c6a
	ldrb r0, [r4, #9]	@ 000d3c6a 607a
.org 0xd3c6c
	lsls r0, r0, #2	@ 000d3c6c 8000
.org 0xd3c6e
	adds r0, r0, r1	@ 000d3c6e 4018
.org 0xd3c70
	movs r1, #1	@ 000d3c70 0121
.org 0xd3c72
	str r1, [r4, #12]	@ 000d3c72 e160
.org 0xd3c74
	ldr r0, [r0, #0]	@ 000d3c74 0068
.org 0xd3c76
	ldr r0, [r0, #4]	@ 000d3c76 4068
.org 0xd3c78
	str r0, [r4, #20]	@ 000d3c78 6061
.org 0xd3c7a
	adds r0, r4, #0	@ 000d3c7a 201c
.org 0xd3c7c
	bl 0xd3c90	@ 000d3c7c 00f008f8
