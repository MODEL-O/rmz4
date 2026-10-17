@ FUN_080f0dd0  entry 0x080f0dd0  size 172
.thumb
.org 0xf0dd0
FUN_080f0dd0:
	push {r4, r5, lr}	@ 000f0dd0 30b5
.org 0xf0dd2
	adds r4, r0, #0	@ 000f0dd2 041c
.org 0xf0dd4
	ldrb r5, [r4, #17]	@ 000f0dd4 657c
.org 0xf0dd6
	cmp r5, #1	@ 000f0dd6 012d
.org 0xf0dd8
	beq.n 0xf0e40	@ 000f0dd8 32d0
.org 0xf0dda
	cmp r5, #1	@ 000f0dda 012d
.org 0xf0ddc
	bgt.n 0xf0de4	@ 000f0ddc 02dc
.org 0xf0dde
	cmp r5, #0	@ 000f0dde 002d
.org 0xf0de0
	beq.n 0xf0dea	@ 000f0de0 03d0
.org 0xf0de2
	b.n 0xf0e7c	@ 000f0de2 4be0
.org 0xf0de4
	cmp r5, #2	@ 000f0de4 022d
.org 0xf0de6
	beq.n 0xf0e64	@ 000f0de6 3dd0
.org 0xf0de8
	b.n 0xf0e7c	@ 000f0de8 48e0
.org 0xf0dea
	ldr r0, [pc, #108]	@ 000f0dea 1b48
.org 0xf0dec
	movs r2, #194	@ 000f0dec c222
.org 0xf0dee
	lsls r2, r2, #1	@ 000f0dee 5200
.org 0xf0df0
	adds r0, r0, r2	@ 000f0df0 8018
.org 0xf0df2
	movs r1, #128	@ 000f0df2 8021
.org 0xf0df4
	lsls r1, r1, #2	@ 000f0df4 8900
.org 0xf0df6
	strh r1, [r0, #0]	@ 000f0df6 0180
.org 0xf0df8
	ldr r0, [pc, #96]	@ 000f0df8 1848
.org 0xf0dfa
	adds r0, r0, r2	@ 000f0dfa 8018
.org 0xf0dfc
	movs r1, #4	@ 000f0dfc 0421
.org 0xf0dfe
	strh r1, [r0, #0]	@ 000f0dfe 0180
.org 0xf0e00
	ldr r1, [pc, #92]	@ 000f0e00 1749
.org 0xf0e02
	adds r0, r4, #0	@ 000f0e02 201c
.org 0xf0e04
	bl 0x1cf00	@ 000f0e04 2cf77cf8
.org 0xf0e08
	adds r2, r4, #0	@ 000f0e08 221c
.org 0xf0e0a
	adds r2, #73	@ 000f0e0a 4932
.org 0xf0e0c
	ldrb r1, [r2, #0]	@ 000f0e0c 1178
.org 0xf0e0e
	movs r0, #13	@ 000f0e0e 0d20
.org 0xf0e10
	negs r0, r0	@ 000f0e10 4042
.org 0xf0e12
	ands r0, r1	@ 000f0e12 0840
.org 0xf0e14
	strb r0, [r2, #0]	@ 000f0e14 1070
.org 0xf0e16
	ldrb r1, [r4, #10]	@ 000f0e16 a17a
.org 0xf0e18
	movs r0, #239	@ 000f0e18 ef20
.org 0xf0e1a
	ands r0, r1	@ 000f0e1a 0840
.org 0xf0e1c
	strb r0, [r4, #10]	@ 000f0e1c a072
.org 0xf0e1e
	adds r0, r4, #0	@ 000f0e1e 201c
.org 0xf0e20
	adds r0, #76	@ 000f0e20 4c30
.org 0xf0e22
	strb r5, [r0, #0]	@ 000f0e22 0570
.org 0xf0e24
	adds r2, #1	@ 000f0e24 0132
.org 0xf0e26
	ldrb r1, [r2, #0]	@ 000f0e26 1178
.org 0xf0e28
	movs r0, #17	@ 000f0e28 1120
.org 0xf0e2a
	negs r0, r0	@ 000f0e2a 4042
.org 0xf0e2c
	ands r0, r1	@ 000f0e2c 0840
.org 0xf0e2e
	strb r0, [r2, #0]	@ 000f0e2e 1070
.org 0xf0e30
	ldr r0, [r4, #84]	@ 000f0e30 606d
.org 0xf0e32
	ldr r1, [r4, #88]	@ 000f0e32 a16d
.org 0xf0e34
	bl 0x8534	@ 000f0e34 17f77efb
.org 0xf0e38
	str r0, [r4, #88]	@ 000f0e38 a065
.org 0xf0e3a
	ldrb r0, [r4, #17]	@ 000f0e3a 607c
.org 0xf0e3c
	adds r0, #1	@ 000f0e3c 0130
.org 0xf0e3e
	strb r0, [r4, #17]	@ 000f0e3e 6074
.org 0xf0e40
	ldr r0, [r4, #24]	@ 000f0e40 a069
.org 0xf0e42
	ldrb r1, [r0, #9]	@ 000f0e42 417a
.org 0xf0e44
	movs r0, #1	@ 000f0e44 0120
.org 0xf0e46
	ands r0, r1	@ 000f0e46 0840
.org 0xf0e48
	cmp r0, #0	@ 000f0e48 0028
.org 0xf0e4a
	beq.n 0xf0e7c	@ 000f0e4a 17d0
.org 0xf0e4c
	movs r1, #194	@ 000f0e4c c221
.org 0xf0e4e
	lsls r1, r1, #8	@ 000f0e4e 0902
.org 0xf0e50
	adds r0, r4, #0	@ 000f0e50 201c
.org 0xf0e52
	bl 0x1cf00	@ 000f0e52 2cf755f8
.org 0xf0e56
	b.n 0xf0e76	@ 000f0e56 0ee0
.org 0xf0e58
	.byte 0x40,0xe2,0x02,0x02	@ 000f0e58 data
.org 0xf0e5c
	.byte 0x40,0xdc,0x02,0x02	@ 000f0e5c data
.org 0xf0e60
	.byte 0x01,0xc2,0x00,0x00	@ 000f0e60 data
.org 0xf0e64
	ldr r0, [r4, #24]	@ 000f0e64 a069
.org 0xf0e66
	ldrb r0, [r0, #9]	@ 000f0e66 407a
.org 0xf0e68
	ands r5, r0	@ 000f0e68 0540
.org 0xf0e6a
	cmp r5, #0	@ 000f0e6a 002d
.org 0xf0e6c
	beq.n 0xf0e7c	@ 000f0e6c 06d0
.org 0xf0e6e
	ldr r0, [pc, #24]	@ 000f0e6e 0648
.org 0xf0e70
	ldr r1, [pc, #24]	@ 000f0e70 0649
.org 0xf0e72
	bl 0x1126ac	@ 000f0e72 21f01bfc
.org 0xf0e76
	ldrb r0, [r4, #17]	@ 000f0e76 607c
.org 0xf0e78
	adds r0, #1	@ 000f0e78 0130
.org 0xf0e7a
	strb r0, [r4, #17]	@ 000f0e7a 6074
